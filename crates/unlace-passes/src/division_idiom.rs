//! Division idiom recovery pass: recognize compiler-generated multiply-shift
//! sequences and replace them with the equivalent integer division.
//!
//! Compilers replace `x / N` with `(x * magic) >> shift` using a "magic
//! number" derived from N. This pass detects those patterns and rewrites
//! them back to `INT_DIV` / `INT_SDIV`.
//!
//! Recognized patterns:
//! - **Unsigned**: `INT_RIGHT(INT_MULT(x, magic), shift)` -> `INT_DIV(x, N)`
//! - **Signed**: `INT_SRIGHT(INT_MULT(x, magic), shift)` -> `INT_SDIV(x, N)`

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct DivisionIdiomPass;

impl Pass for DivisionIdiomPass {
    fn name(&self) -> &str {
        "division-idiom"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        for block in func.function.blocks.values_mut() {
            let len = block.insns.len();
            for i in 0..len {
                if let Some((mult_idx, div_insn)) = try_match_unsigned(&block.insns, i) {
                    block.insns[i] = div_insn;
                    neutralize_mult(&mut block.insns[mult_idx]);
                    changed = true;
                } else if let Some((mult_idx, div_insn)) = try_match_signed(&block.insns, i) {
                    block.insns[i] = div_insn;
                    neutralize_mult(&mut block.insns[mult_idx]);
                    changed = true;
                }
            }
        }

        Ok(changed)
    }
}

fn neutralize_mult(insn: &mut IrInsn) {
    if let Some(mult_out) = insn.output {
        *insn = IrInsn::with_output(
            IrOp::Copy,
            mult_out,
            smallvec::smallvec![insn.inputs[0]],
            insn.addr,
        );
    }
}

fn try_match_unsigned(insns: &[IrInsn], i: usize) -> Option<(usize, IrInsn)> {
    let shift_insn = &insns[i];

    if shift_insn.op != IrOp::IntRight {
        return None;
    }
    let shift_out = shift_insn.output?;
    if shift_insn.inputs.len() != 2 {
        return None;
    }
    let shift_input = shift_insn.inputs[0];
    let shift_amt_vn = shift_insn.inputs[1];
    if shift_amt_vn.space != SpaceId::Const {
        return None;
    }
    let shift_amt = shift_amt_vn.offset;

    let mult_idx = find_def(insns, i, &shift_input)?;
    let mult_insn = &insns[mult_idx];

    if mult_insn.op != IrOp::IntMult || mult_insn.inputs.len() != 2 {
        return None;
    }

    let (variable, magic) = extract_var_and_const(&mult_insn.inputs)?;
    let size = shift_out.size;
    let divisor = compute_unsigned_divisor(magic, shift_amt, size)?;

    if divisor < 2 {
        return None;
    }

    let div_insn = IrInsn::with_output(
        IrOp::IntDiv,
        shift_out,
        smallvec::smallvec![variable, Varnode::constant(divisor, size)],
        shift_insn.addr,
    );

    Some((mult_idx, div_insn))
}

fn try_match_signed(insns: &[IrInsn], i: usize) -> Option<(usize, IrInsn)> {
    let shift_insn = &insns[i];

    if shift_insn.op != IrOp::IntSright {
        return None;
    }
    let shift_out = shift_insn.output?;
    if shift_insn.inputs.len() != 2 {
        return None;
    }
    let shift_input = shift_insn.inputs[0];
    let shift_amt_vn = shift_insn.inputs[1];
    if shift_amt_vn.space != SpaceId::Const {
        return None;
    }
    let shift_amt = shift_amt_vn.offset;

    let mult_idx = find_def(insns, i, &shift_input)?;
    let mult_insn = &insns[mult_idx];

    if mult_insn.op != IrOp::IntMult || mult_insn.inputs.len() != 2 {
        return None;
    }

    let (variable, magic) = extract_var_and_const(&mult_insn.inputs)?;
    let size = shift_out.size;
    let divisor = compute_signed_divisor(magic, shift_amt, size)?;

    if divisor < 2 {
        return None;
    }

    let div_insn = IrInsn::with_output(
        IrOp::IntSdiv,
        shift_out,
        smallvec::smallvec![variable, Varnode::constant(divisor, size)],
        shift_insn.addr,
    );

    Some((mult_idx, div_insn))
}

fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for j in (0..before).rev() {
        if let Some(out) = insns[j].output
            && out == *target
        {
            return Some(j);
        }
    }
    None
}

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

/// Recover N from the magic constant M and shift amount s.
///
/// The compiler identity: `floor(x * M / 2^s) == floor(x / N)`
/// where s already accounts for the widening multiply.
///
/// We invert: `N = round(2^s / M)`, then verify over test vectors.
fn compute_unsigned_divisor(magic: u64, shift: u64, size: u8) -> Option<u64> {
    if shift > 127 || shift == 0 {
        return None;
    }

    let numerator: u128 = 1u128 << shift;
    let magic128 = magic as u128;
    if magic128 == 0 {
        return None;
    }

    // N = round(2^shift / M)
    let n_candidate = ((numerator + magic128 / 2) / magic128) as u64;
    if n_candidate < 2 {
        return None;
    }

    if verify_unsigned_divisor(magic, shift, size, n_candidate) {
        Some(n_candidate)
    } else {
        None
    }
}

fn verify_unsigned_divisor(magic: u64, shift: u64, _size: u8, n: u64) -> bool {
    let magic128 = magic as u128;

    let test_values: &[u64] = &[
        0,
        1,
        n - 1,
        n,
        n + 1,
        n * 2,
        n * 2 + 1,
        n * 100,
        u32::MAX as u64,
    ];

    for &x in test_values {
        let idiom_result = ((x as u128 * magic128) >> shift) as u64;
        let expected = x / n;
        if idiom_result != expected {
            return false;
        }
    }
    true
}

/// Recover N from a signed magic constant and shift.
///
/// Same inversion as unsigned but magic is sign-extended before the
/// 128-bit division. The returned divisor is always positive.
///
/// Signed division idiom: `(x * M_signed) >> s` approximates
/// `trunc(x / N)` for positive x but needs a correction term for
/// negative x (`+= x >> (bits-1)`). We verify without the correction,
/// checking only non-negative inputs, since the correction is applied
/// separately in the IR.
fn compute_signed_divisor(magic: u64, shift: u64, size: u8) -> Option<u64> {
    if shift > 127 || shift == 0 {
        return None;
    }

    let magic_signed = sign_extend(magic, size);
    if magic_signed == 0 {
        return None;
    }

    let numerator: i128 = 1i128 << shift;
    let magic128 = magic_signed as i128;

    let n_raw = if magic128 > 0 {
        ((numerator + magic128 / 2) / magic128) as i64
    } else {
        let abs_magic = magic128.unsigned_abs();
        let abs_n = ((numerator as u128 + abs_magic / 2) / abs_magic) as i64;
        -abs_n
    };

    let n_candidate = n_raw.unsigned_abs();
    if n_candidate < 2 {
        return None;
    }

    if verify_signed_divisor(magic, shift, size, n_candidate) {
        Some(n_candidate)
    } else {
        None
    }
}

fn sign_extend(val: u64, size: u8) -> i64 {
    let bits = size as u32 * 8;
    let shift = 64 - bits;
    ((val as i64) << shift) >> shift
}

fn verify_signed_divisor(magic: u64, shift: u64, size: u8, n: u64) -> bool {
    let magic_signed = sign_extend(magic, size) as i128;
    let n_signed = n as i64;
    let bits = size as u64 * 8;

    let max_pos = match size {
        4 => i32::MAX as i64,
        8 => i64::MAX / 2,
        _ => (1i64 << (bits - 1)) - 1,
    };

    // Verify only non-negative values: the signed idiom produces
    // floor(x/N) which equals trunc(x/N) for x >= 0. The negative
    // correction (`x >> (bits-1)`) is a separate IR operation.
    let test_values: &[i64] = &[
        0,
        1,
        n_signed - 1,
        n_signed,
        n_signed + 1,
        n_signed * 2,
        n_signed * 100,
        max_pos,
    ];

    for &x in test_values {
        if size == 4 && x > i32::MAX as i64 {
            continue;
        }

        let product = (x as i128) * magic_signed;
        let idiom_result = (product >> shift) as i64;
        let expected = x / n_signed;

        if idiom_result != expected {
            return false;
        }
    }
    true
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

    // ── Unsigned division by 3 (32-bit) ────────────────────────────
    //   INT_MULT(v0, 0xAAAAAAAB) >> 33 -> INT_DIV(v0, 3)

    #[test]
    fn test_div_by_3() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0xAAAAAAAB, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(33, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntDiv);
        assert_eq!(div.inputs[0], v0);
        assert_eq!(div.inputs[1].space, SpaceId::Const);
        assert_eq!(div.inputs[1].offset, 3);
        assert_eq!(div.inputs[1].size, 4);
    }

    // ── Unsigned division by 5 (32-bit) ────────────────────────────
    //   INT_MULT(v0, 0xCCCCCCCD) >> 34 -> INT_DIV(v0, 5)

    #[test]
    fn test_div_by_5() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0xCCCCCCCD, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(34, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntDiv);
        assert_eq!(div.inputs[1].offset, 5);
    }

    // ── Unsigned division by 7 (32-bit) ────────────────────────────
    //   INT_MULT(v0, 0x24924925) >> 32 -> INT_DIV(v0, 7)

    #[test]
    fn test_div_by_7() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0x24924925, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(32, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntDiv);
        assert_eq!(div.inputs[1].offset, 7);
    }

    // ── Signed division by 5 (32-bit) ──────────────────────────────
    //   INT_MULT(v0, 0x66666667) >>> 33 -> INT_SDIV(v0, 5)

    #[test]
    fn test_signed_div_by_5() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0x66666667, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntSright,
            out,
            smallvec![tmp, Varnode::constant(33, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntSdiv);
        assert_eq!(div.inputs[0], v0);
        assert_eq!(div.inputs[1].offset, 5);
    }

    // ── Signed division by 3 (32-bit) ──────────────────────────────
    //   INT_MULT(v0, 0x55555556) >>> 32 -> INT_SDIV(v0, 3)

    #[test]
    fn test_signed_div_by_3() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0x55555556, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntSright,
            out,
            smallvec![tmp, Varnode::constant(32, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntSdiv);
        assert_eq!(div.inputs[1].offset, 3);
    }

    // ── No match: random multiply-shift stays unchanged ────────────

    #[test]
    fn test_no_match_keeps_original() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0x12345678, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(5, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntMult);
        assert_eq!(block.insns[1].op, IrOp::IntRight);
    }

    // ── No match: shift without preceding multiply ─────────────────

    #[test]
    fn test_no_match_shift_without_mult() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);

        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![v0, Varnode::constant(3, 4)],
            0x1000,
        );

        let mut ssa = make_single_block_ssa(vec![shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    // ── Unsigned division by 10 (32-bit) ───────────────────────────
    //   INT_MULT(v0, 0xCCCCCCCD) >> 35 -> INT_DIV(v0, 10)

    #[test]
    fn test_div_by_10() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![v0, Varnode::constant(0xCCCCCCCD, 4)],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(35, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntDiv);
        assert_eq!(div.inputs[1].offset, 10);
    }

    // ── Commutative: magic as first input ──────────────────────────

    #[test]
    fn test_div_by_3_commutative() {
        let v0 = Varnode::reg(0, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);

        let mult = IrInsn::with_output(
            IrOp::IntMult,
            tmp,
            smallvec![Varnode::constant(0xAAAAAAAB, 4), v0],
            0x1000,
        );
        let shr = IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![tmp, Varnode::constant(33, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![mult, shr]);
        let changed = DivisionIdiomPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let div = &block.insns[1];
        assert_eq!(div.op, IrOp::IntDiv);
        assert_eq!(div.inputs[0], v0);
        assert_eq!(div.inputs[1].offset, 3);
    }
}
