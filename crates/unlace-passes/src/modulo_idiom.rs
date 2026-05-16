//! Modulo idiom recovery pass: recognize compiler-generated modulo
//! sequences and replace them with `INT_REM` / `INT_SREM`.
//!
//! Compilers express `x % N` as either:
//!   1. `x - (x / N) * N`  (after division-by-constant strength reduction)
//!   2. `x & (N - 1)`      (when N is a power of two)
//!
//! This pass operates **after** [`DivisionIdiomPass`](super::DivisionIdiomPass),
//! which has already canonicalized the multiply-shift back into `INT_DIV` /
//! `INT_SDIV`.  The remaining textbook subtract-multiply pair therefore
//! shows up as a clean `INT_SUB(v, INT_MULT(INT_DIV(v, N), N))` chain.
//!
//! Recognized patterns:
//! - **Subtract form, unsigned**:
//!   `INT_SUB(v, INT_MULT(INT_DIV(v, N), N))` -> `INT_REM(v, N)`
//! - **Subtract form, signed**:
//!   `INT_SUB(v, INT_MULT(INT_SDIV(v, N), N))` -> `INT_SREM(v, N)`
//! - **Power-of-two AND mask** (only in index-like context):
//!   `INT_AND(v, N - 1)` where N = 2^k -> `INT_REM(v, N)`
//!
//! The MULT / DIV intermediates produced by the subtract form are
//! neutralized to `COPY`s so subsequent DCE can drop them.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct ModuloIdiomPass;

impl Pass for ModuloIdiomPass {
    fn name(&self) -> &str {
        "modulo-idiom"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        for block in func.function.blocks.values_mut() {
            let len = block.insns.len();

            // ── Pattern 1 & 2: subtract-multiply-divide chain ───────────
            for i in 0..len {
                if let Some(rewrite) = try_match_sub_mult_div(&block.insns, i) {
                    apply_sub_rewrite(&mut block.insns, i, rewrite);
                    changed = true;
                }
            }

            // ── Pattern 3: power-of-two AND mask in index context ───────
            for i in 0..len {
                if let Some(modulus) = try_match_pow2_and(&block.insns, i) {
                    rewrite_and_to_mod(&mut block.insns[i], modulus);
                    changed = true;
                }
            }
        }

        Ok(changed)
    }
}

// ── Pattern 1 & 2: x - (x / N) * N ─────────────────────────────────────

/// Rewrite descriptor for a successful subtract-mult-div match.
struct SubRewrite {
    /// New op: `IntRem` for unsigned, `IntSrem` for signed.
    rem_op: IrOp,
    /// The dividend (same as `INT_SUB.inputs[0]`).
    variable: Varnode,
    /// The divisor / modulus constant.
    modulus: Varnode,
    /// Index of the `INT_MULT` to neutralize.
    mult_idx: usize,
    /// Index of the `INT_DIV` / `INT_SDIV` to neutralize.
    div_idx: usize,
}

fn try_match_sub_mult_div(insns: &[IrInsn], i: usize) -> Option<SubRewrite> {
    let sub_insn = &insns[i];
    if sub_insn.op != IrOp::IntSub || sub_insn.inputs.len() != 2 {
        return None;
    }
    let _sub_out = sub_insn.output?;
    let variable = sub_insn.inputs[0];
    let mult_input = sub_insn.inputs[1];

    // Producer of mult_input must be INT_MULT(div_out, const_N) commutatively.
    let mult_idx = find_def(insns, i, &mult_input)?;
    let mult_insn = &insns[mult_idx];
    if mult_insn.op != IrOp::IntMult || mult_insn.inputs.len() != 2 {
        return None;
    }
    let (mult_var, mult_const) = extract_var_and_const(&mult_insn.inputs)?;

    // mult_var must trace to INT_DIV(variable, const_N) or INT_SDIV.
    let div_idx = find_def(insns, mult_idx, &mult_var)?;
    let div_insn = &insns[div_idx];
    let rem_op = match div_insn.op {
        IrOp::IntDiv => IrOp::IntRem,
        IrOp::IntSdiv => IrOp::IntSrem,
        _ => return None,
    };
    if div_insn.inputs.len() != 2 {
        return None;
    }

    // Dividend must be the same SSA variable as the SUB's first input.
    if div_insn.inputs[0] != variable {
        return None;
    }
    let div_const_vn = div_insn.inputs[1];
    if div_const_vn.space != SpaceId::Const {
        return None;
    }

    // The constant on the multiply must equal the divisor on the divide.
    if div_const_vn.offset != mult_const {
        return None;
    }

    Some(SubRewrite {
        rem_op,
        variable,
        modulus: div_const_vn,
        mult_idx,
        div_idx,
    })
}

fn apply_sub_rewrite(insns: &mut [IrInsn], sub_idx: usize, rw: SubRewrite) {
    let sub_out = insns[sub_idx]
        .output
        .expect("matcher already verified output");
    let addr = insns[sub_idx].addr;

    insns[sub_idx] = IrInsn::with_output(
        rw.rem_op,
        sub_out,
        smallvec::smallvec![rw.variable, rw.modulus],
        addr,
    );

    neutralize_to_copy(&mut insns[rw.mult_idx]);
    neutralize_to_copy(&mut insns[rw.div_idx]);
}

/// Replace `insn` with a `COPY` of its first input, preserving output and addr.
///
/// Used to scrub the original multiply / divide once their result varnode
/// is no longer needed; DCE will drop the now-trivial COPY on a later sweep.
fn neutralize_to_copy(insn: &mut IrInsn) {
    if let Some(out) = insn.output {
        let first_in = insn.inputs[0];
        *insn = IrInsn::with_output(IrOp::Copy, out, smallvec::smallvec![first_in], insn.addr);
    }
}

// ── Pattern 3: x & (N - 1) where N is a power of two ───────────────────

/// If `insns[i]` is `INT_AND(v, mask)` with `mask = 2^k - 1` AND its
/// output is used in an index-like context, return the modulus `2^k`.
fn try_match_pow2_and(insns: &[IrInsn], i: usize) -> Option<u64> {
    let and_insn = &insns[i];
    if and_insn.op != IrOp::IntAnd || and_insn.inputs.len() != 2 {
        return None;
    }
    let and_out = and_insn.output?;

    // One input must be a constant power-of-two minus one.
    let (_var, mask) = extract_var_and_const(&and_insn.inputs)?;
    let modulus = pow2_from_mask(mask)?;

    // Heuristic: only convert when the AND output flows into an
    // address arithmetic (`INT_ADD`) or bounds comparison
    // (`INT_LESS` / `INT_LESSEQUAL`). Otherwise the AND is most
    // likely a genuine bitmask and rewriting would obscure intent.
    if !is_used_in_index_context(insns, i, &and_out) {
        return None;
    }

    Some(modulus)
}

/// Returns `2^k` if `mask == 2^k - 1` for some `k >= 1`.
///
/// Restricted to widths that the spec calls out (`0x7`, `0xF`, …,
/// `0x7FFFFFFFFFFFFFFF`) so a stray `0` or `0xFFFFFFFFFFFFFFFF` does not
/// trigger a rewrite.
fn pow2_from_mask(mask: u64) -> Option<u64> {
    const ALLOWED: &[u64] = &[
        0x7,
        0xF,
        0x1F,
        0x3F,
        0x7F,
        0xFF,
        0xFFFF,
        0x7FFF_FFFF,
        0x7FFF_FFFF_FFFF_FFFF,
    ];
    if !ALLOWED.contains(&mask) {
        return None;
    }
    // mask + 1 == 2^k for every value above; checked once to be safe.
    let modulus = mask.checked_add(1)?;
    if modulus.is_power_of_two() {
        Some(modulus)
    } else {
        None
    }
}

/// Conservative scan: does any later instruction in the same block use
/// `target` as an input to `INT_ADD`, `INT_LESS`, or `INT_LESSEQUAL`?
fn is_used_in_index_context(insns: &[IrInsn], from: usize, target: &Varnode) -> bool {
    for downstream in insns.iter().skip(from + 1) {
        let is_index_op = matches!(
            downstream.op,
            IrOp::IntAdd | IrOp::IntLess | IrOp::IntLessequal
        );
        if !is_index_op {
            continue;
        }
        if downstream.inputs.iter().any(|vn| vn == target) {
            return true;
        }
    }
    false
}

fn rewrite_and_to_mod(insn: &mut IrInsn, modulus: u64) {
    let out = match insn.output {
        Some(o) => o,
        None => return,
    };

    // Locate the variable input (non-const side of the AND).
    let (variable, _mask) = match extract_var_and_const(&insn.inputs) {
        Some(pair) => pair,
        None => return,
    };

    let size = out.size;
    *insn = IrInsn::with_output(
        IrOp::IntRem,
        out,
        smallvec::smallvec![variable, Varnode::constant(modulus, size)],
        insn.addr,
    );
}

// ── Shared helpers ─────────────────────────────────────────────────────

fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for j in (0..before).rev() {
        if let Some(out) = insns[j].output {
            if out == *target {
                return Some(j);
            }
        }
    }
    None
}

/// Splits a 2-operand instruction's inputs into `(variable, constant_value)`,
/// honoring commutativity. Returns `None` when both / neither are constants.
fn extract_var_and_const(inputs: &[Varnode]) -> Option<(Varnode, u64)> {
    let (a, b) = (inputs[0], inputs[1]);
    if b.space == SpaceId::Const && a.space != SpaceId::Const {
        Some((a, b.offset))
    } else if a.space == SpaceId::Const && b.space != SpaceId::Const {
        Some((b, a.offset))
    } else {
        None
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    fn block_insns(ssa: &SsaFunction) -> &[IrInsn] {
        &ssa.function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns
    }

    // ── Pattern 1: x - (x / 5) * 5 -> x % 5 ────────────────────────

    #[test]
    fn test_mod_via_div_subtract() {
        let v0 = Varnode::reg(0, 4);
        let div_out = Varnode::unique(0, 4);
        let mult_out = Varnode::unique(4, 4);
        let sub_out = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);

        let div = IrInsn::with_output(IrOp::IntDiv, div_out, smallvec![v0, c5], 0x1000);
        let mult = IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![div_out, c5], 0x1004);
        let sub = IrInsn::with_output(IrOp::IntSub, sub_out, smallvec![v0, mult_out], 0x1008);

        let mut ssa = make_single_block_ssa(vec![div, mult, sub]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "should rewrite subtract chain");

        let insns = block_insns(&ssa);
        let rem = &insns[2];
        assert_eq!(rem.op, IrOp::IntRem);
        assert_eq!(rem.inputs[0], v0);
        assert_eq!(rem.inputs[1].space, SpaceId::Const);
        assert_eq!(rem.inputs[1].offset, 5);
        assert_eq!(rem.inputs[1].size, 4);
        // Intermediates neutralized to COPY.
        assert_eq!(insns[0].op, IrOp::Copy);
        assert_eq!(insns[1].op, IrOp::Copy);
    }

    // ── Pattern 2: signed variant with INT_SDIV ─────────────────────

    #[test]
    fn test_smod_via_sdiv_subtract() {
        let v0 = Varnode::reg(0, 4);
        let div_out = Varnode::unique(0, 4);
        let mult_out = Varnode::unique(4, 4);
        let sub_out = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);

        let sdiv = IrInsn::with_output(IrOp::IntSdiv, div_out, smallvec![v0, c5], 0x1000);
        let mult = IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![div_out, c5], 0x1004);
        let sub = IrInsn::with_output(IrOp::IntSub, sub_out, smallvec![v0, mult_out], 0x1008);

        let mut ssa = make_single_block_ssa(vec![sdiv, mult, sub]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let rem = &block_insns(&ssa)[2];
        assert_eq!(rem.op, IrOp::IntSrem);
        assert_eq!(rem.inputs[0], v0);
        assert_eq!(rem.inputs[1].offset, 5);
    }

    // ── Pattern 1 (commutative): const may be MULT's first input ───

    #[test]
    fn test_mod_via_div_subtract_commutative() {
        let v0 = Varnode::reg(0, 4);
        let div_out = Varnode::unique(0, 4);
        let mult_out = Varnode::unique(4, 4);
        let sub_out = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);

        let div = IrInsn::with_output(IrOp::IntDiv, div_out, smallvec![v0, c5], 0x1000);
        // const-first ordering on the multiply
        let mult = IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![c5, div_out], 0x1004);
        let sub = IrInsn::with_output(IrOp::IntSub, sub_out, smallvec![v0, mult_out], 0x1008);

        let mut ssa = make_single_block_ssa(vec![div, mult, sub]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let rem = &block_insns(&ssa)[2];
        assert_eq!(rem.op, IrOp::IntRem);
        assert_eq!(rem.inputs[1].offset, 5);
    }

    // ── Pattern 3: AND mask used as index offset ────────────────────

    #[test]
    fn test_pow2_and_to_mod_in_index() {
        let v0 = Varnode::reg(0, 8);
        let base_ptr = Varnode::reg(8, 8);
        let and_out = Varnode::unique(0, 8);
        let add_out = Varnode::unique(8, 8);
        let c7 = Varnode::constant(7, 8);

        let and = IrInsn::with_output(IrOp::IntAnd, and_out, smallvec![v0, c7], 0x1000);
        let add = IrInsn::with_output(IrOp::IntAdd, add_out, smallvec![base_ptr, and_out], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, add]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "AND-mask in index context must rewrite");

        let rem = &block_insns(&ssa)[0];
        assert_eq!(rem.op, IrOp::IntRem);
        assert_eq!(rem.inputs[0], v0);
        assert_eq!(rem.inputs[1].space, SpaceId::Const);
        assert_eq!(rem.inputs[1].offset, 8);
        assert_eq!(rem.inputs[1].size, 8);
    }

    // ── Pattern 3 negative: AND used purely as bitmask stays AND ────

    #[test]
    fn test_pow2_and_kept_no_index() {
        let v0 = Varnode::reg(0, 4);
        let v1 = Varnode::reg(8, 4);
        let and_out = Varnode::unique(0, 4);
        let or_out = Varnode::unique(4, 4);
        let c7 = Varnode::constant(7, 4);

        let and = IrInsn::with_output(IrOp::IntAnd, and_out, smallvec![v0, c7], 0x1000);
        // Consumed by INT_OR — clearly a bitmask, not an index.
        let or = IrInsn::with_output(IrOp::IntOr, or_out, smallvec![and_out, v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, or]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "bitmask-only AND must be preserved");

        let kept = &block_insns(&ssa)[0];
        assert_eq!(kept.op, IrOp::IntAnd);
        assert_eq!(kept.inputs[1].offset, 7);
    }

    // ── Negative: SUB with different dividend is left alone ─────────

    #[test]
    fn test_different_vars_no_match() {
        let v1 = Varnode::reg(0, 4);
        let v2 = Varnode::reg(8, 4);
        let div_out = Varnode::unique(0, 4);
        let mult_out = Varnode::unique(4, 4);
        let sub_out = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);

        let div = IrInsn::with_output(IrOp::IntDiv, div_out, smallvec![v2, c5], 0x1000);
        let mult = IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![div_out, c5], 0x1004);
        let sub = IrInsn::with_output(
            IrOp::IntSub,
            sub_out,
            smallvec![v1, mult_out],
            0x1008, // v1 != v2
        );

        let mut ssa = make_single_block_ssa(vec![div, mult, sub]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "v1 != v2 must not rewrite");

        let kept = &block_insns(&ssa)[2];
        assert_eq!(kept.op, IrOp::IntSub);
    }

    // ── Negative: divisor / multiplier mismatch is left alone ───────

    #[test]
    fn test_div_const_mismatch() {
        let v0 = Varnode::reg(0, 4);
        let div_out = Varnode::unique(0, 4);
        let mult_out = Varnode::unique(4, 4);
        let sub_out = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);
        let c7 = Varnode::constant(7, 4);

        let div = IrInsn::with_output(IrOp::IntDiv, div_out, smallvec![v0, c5], 0x1000);
        let mult = IrInsn::with_output(
            IrOp::IntMult,
            mult_out,
            smallvec![div_out, c7],
            0x1004, // 7 != 5
        );
        let sub = IrInsn::with_output(IrOp::IntSub, sub_out, smallvec![v0, mult_out], 0x1008);

        let mut ssa = make_single_block_ssa(vec![div, mult, sub]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "5 != 7 must not rewrite");

        let kept = &block_insns(&ssa)[2];
        assert_eq!(kept.op, IrOp::IntSub);
    }

    // ── Pattern 3 alt context: AND output in INT_LESS ───────────────

    #[test]
    fn test_pow2_and_to_mod_in_less_context() {
        let v0 = Varnode::reg(0, 4);
        let limit = Varnode::reg(8, 4);
        let and_out = Varnode::unique(0, 4);
        let cmp_out = Varnode::unique(4, 1);
        let c_f = Varnode::constant(0xF, 4);

        let and = IrInsn::with_output(IrOp::IntAnd, and_out, smallvec![v0, c_f], 0x1000);
        let cmp = IrInsn::with_output(IrOp::IntLess, cmp_out, smallvec![and_out, limit], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, cmp]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let rem = &block_insns(&ssa)[0];
        assert_eq!(rem.op, IrOp::IntRem);
        assert_eq!(rem.inputs[1].offset, 16);
    }

    // ── Pattern 3 negative: non-power-of-two mask is left alone ─────

    #[test]
    fn test_non_pow2_mask_no_match() {
        let v0 = Varnode::reg(0, 4);
        let base = Varnode::reg(8, 4);
        let and_out = Varnode::unique(0, 4);
        let add_out = Varnode::unique(4, 4);
        let c6 = Varnode::constant(6, 4); // not 2^k - 1

        let and = IrInsn::with_output(IrOp::IntAnd, and_out, smallvec![v0, c6], 0x1000);
        let add = IrInsn::with_output(IrOp::IntAdd, add_out, smallvec![base, and_out], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, add]);
        let changed = ModuloIdiomPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "mask 6 is not 2^k - 1");
        assert_eq!(block_insns(&ssa)[0].op, IrOp::IntAnd);
    }
}
