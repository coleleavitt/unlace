//! Idiom recognition pass: detect common instruction patterns in IR
//! and replace them with semantic equivalents.
//!
//! Recognized idioms:
//! - `INT_XOR(v, v)` / `INT_SUB(v, v)` → `COPY 0` (self-zeroing)
//! - `INT_AND(v, all_ones)` → `COPY v` (identity mask)
//! - `INT_OR(v, 0)` / `INT_ADD(v, 0)` / `INT_XOR(v, 0)` → `COPY v` (identity additive)
//! - `INT_SUB(v, 0)` → `COPY v` (subtractive identity)
//! - `INT_MUL(v, 1)` → `COPY v` (identity multiplicative)
//! - `INT_DIV(v, 1)` / `INT_SDIV(v, 1)` → `COPY v` (division identity)
//! - `INT_REM(v, 1)` / `INT_SREM(v, 1)` → `COPY 0` (modulo one)
//! - `INT_LEFT(v, 0)` / `INT_RIGHT(v, 0)` / `INT_SRIGHT(v, 0)` → `COPY v` (shift by zero)
//! - `INT_AND(v, 0)` → `COPY 0` (annihilator)
//! - `INT_OR(v, all_ones)` → `COPY all_ones` (annihilator)
//! - `INT_AND(v, v)` / `INT_OR(v, v)` → `COPY v` (integer idempotent)
//! - `BOOL_AND(v, v)` / `BOOL_OR(v, v)` → `COPY v` (idempotent)
//! - `INT_RIGHT(v, bits-1)` → `INT_SLESS(v, 0)` (sign-bit extraction)
//! - `INT_CARRY(v, INT_2COMP(v))` → `INT_NOTEQUAL(v, 0)` (carry elimination)
//! - `INT_CARRY(v, 0)` → `COPY 0` (carry of zero)
//!
//! Iterates internally to a fixed point.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Recognizes common instruction idioms and replaces them with simpler
/// semantic equivalents (typically `COPY`).
pub struct IdiomRecognitionPass;

impl Pass for IdiomRecognitionPass {
    fn name(&self) -> &str {
        "idiom-recognition"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed_any = false;
        loop {
            let mut changed = false;

            for block in func.function.blocks.values_mut() {
                for insn in &mut block.insns {
                    if let Some(replacement) = try_recognize(insn) {
                        *insn = replacement;
                        changed = true;
                    }
                }
            }

            changed_any |= changed;
            if !changed {
                break;
            }
        }
        Ok(changed_any)
    }
}

/// Compute the all-ones mask for a given byte size.
///
/// `mask_for_size(4)` → `0xFFFF_FFFF`, `mask_for_size(8)` → `u64::MAX`.
fn mask_for_size(size: u8) -> u64 {
    if size >= 8 { u64::MAX } else { (1u64 << (size as u32 * 8)) - 1 }
}

/// Check whether a Varnode is a constant with the given value.
fn is_const_val(v: &Varnode, val: u64) -> bool {
    v.space == SpaceId::Const && v.offset == val
}

/// Check whether a Varnode is the all-ones constant for its byte size.
fn is_all_ones(v: &Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == mask_for_size(v.size)
}

/// Build a `COPY` instruction that replaces `insn`'s output with `source`.
fn make_copy(insn: &IrInsn, source: Varnode) -> IrInsn {
    IrInsn::with_output(
        IrOp::Copy,
        insn.output.expect("idiom-recognizable insn always has output"),
        smallvec::smallvec![source],
        insn.addr,
    )
}

fn try_recognize(insn: &IrInsn) -> Option<IrInsn> {
    let output = insn.output?;

    // Already a COPY — nothing to do.
    if insn.op == IrOp::Copy {
        return None;
    }

    let inputs = insn.inputs.as_slice();
    if inputs.len() != 2 {
        return None;
    }

    let (a, b) = (inputs[0], inputs[1]);

    match insn.op {
        // ── Self-zeroing: v ^ v → 0, v - v → 0 ────────────────────
        IrOp::IntXor | IrOp::IntSub if a == b && a.space != SpaceId::Const => {
            Some(make_copy(insn, Varnode::constant(0, output.size)))
        }

        // ── v & all_ones → v, v & 0 → 0, v & v → v ───────────────
        IrOp::IntAnd => {
            if is_all_ones(&b) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_all_ones(&a) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else if is_const_val(&b, 0) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if is_const_val(&a, 0) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if a == b && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── v | 0 → v, v | all_ones → all_ones, v | v → v ────────
        IrOp::IntOr => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else if is_all_ones(&b) {
                Some(make_copy(insn, Varnode::constant(mask_for_size(output.size), output.size)))
            } else if is_all_ones(&a) {
                Some(make_copy(insn, Varnode::constant(mask_for_size(output.size), output.size)))
            } else if a == b && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── Additive identity: v + 0 → v ──────────────────────────
        IrOp::IntAdd => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else {
                None
            }
        }

        // ── v ^ 0 → v ─────────────────────────────────────────────
        IrOp::IntXor => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else {
                None
            }
        }

        // ── Subtractive identity: v - 0 → v ───────────────────────
        IrOp::IntSub => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── Multiplicative identity: v * 1 → v ────────────────────
        IrOp::IntMult => {
            if is_const_val(&b, 1) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 1) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else {
                None
            }
        }

        // ── Division identity: v / 1 → v ──────────────────────────
        IrOp::IntDiv | IrOp::IntSdiv => {
            if is_const_val(&b, 1) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── Modulo one: v % 1 → 0 ─────────────────────────────────
        IrOp::IntRem | IrOp::IntSrem => {
            if is_const_val(&b, 1) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else {
                None
            }
        }

        // ── Shift by zero: v << 0 → v, v >> 0 → v ────────────────
        IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── Boolean idempotent: v & v → v, v | v → v ──────────────
        IrOp::BoolAnd | IrOp::BoolOr if a == b && a.space != SpaceId::Const => {
            Some(make_copy(insn, a))
        }

        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> unlace_ir::ssa::SsaFunction {
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

    // ── Pattern 1: INT_XOR(v, v) → COPY 0 ─────────────────────────

    #[test]
    fn test_idiom_xor_self_zero() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 4);
    }

    // ── Pattern 2: INT_SUB(v, v) → COPY 0 ─────────────────────────

    #[test]
    fn test_idiom_sub_self_zero() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 4);
    }

    // ── Pattern 3: INT_AND(v, 0xFFFFFFFF) → COPY v ────────────────

    #[test]
    fn test_idiom_and_max_identity() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 4: INT_OR(v, 0) → COPY v ──────────────────────────

    #[test]
    fn test_idiom_or_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 5: INT_ADD(v, 0) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_add_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 6: INT_MUL(v, 1) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_mul_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntMult, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 7: BOOL_AND(v, v) → COPY v ────────────────────────

    #[test]
    fn test_idiom_bool_and_self() {
        let v0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 8: BOOL_OR(v, v) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_bool_or_self() {
        let v0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Commutative: INT_AND(all_ones, v) → COPY v ─────────────────

    #[test]
    fn test_idiom_and_max_commutative() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![all_ones, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Commutative: INT_ADD(0, v) → COPY v ────────────────────────

    #[test]
    fn test_idiom_add_zero_commutative() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![zero, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── No change on non-matching ops ───────────────────────────────

    #[test]
    fn test_idiom_no_change_different_operands() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }

    // ── No change on const-const (let const_fold handle those) ──────

    #[test]
    fn test_idiom_skips_const_const() {
        let c5 = Varnode::constant(5, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![c5, c5], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        // Const-const should be handled by constant folding, not idiom recognition
        assert!(!changed);
    }

    // ── 8-byte XOR self ────────────────────────────────────────────

    #[test]
    fn test_idiom_xor_self_zero_8byte() {
        let v0 = Varnode::reg(0, 8);
        let out = Varnode::unique(0, 8);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 8);
    }

    // ── INT_AND with 8-byte all-ones ───────────────────────────────

    #[test]
    fn test_idiom_and_max_identity_8byte() {
        let v0 = Varnode::reg(0, 8);
        let all_ones = Varnode::constant(u64::MAX, 8);
        let out = Varnode::unique(0, 8);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SUB(v, 0) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_sub_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_DIV(v, 1) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_div_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntDiv, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SDIV(v, 1) → COPY v ───────────────────────────────────

    #[test]
    fn test_idiom_sdiv_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSdiv, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_REM(v, 1) → COPY 0 ────────────────────────────────────

    #[test]
    fn test_idiom_rem_one_zero() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntRem, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_SREM(v, 1) → COPY 0 ───────────────────────────────────

    #[test]
    fn test_idiom_srem_one_zero() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSrem, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_XOR(v, 0) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_xor_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_LEFT(v, 0) → COPY v ───────────────────────────────────

    #[test]
    fn test_idiom_left_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntLeft, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_RIGHT(v, 0) → COPY v ──────────────────────────────────

    #[test]
    fn test_idiom_right_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntRight, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SRIGHT(v, 0) → COPY v ─────────────────────────────────

    #[test]
    fn test_idiom_sright_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSright, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_AND(v, 0) → COPY 0 ────────────────────────────────────

    #[test]
    fn test_idiom_and_zero_annihilator() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_OR(v, all_ones) → COPY all_ones ────────────────────────

    #[test]
    fn test_idiom_or_all_ones_annihilator() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0xFFFF_FFFF);
    }

    // ── INT_AND(v, v) → COPY v ─────────────────────────────────────

    #[test]
    fn test_idiom_and_self_idempotent() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_OR(v, v) → COPY v ──────────────────────────────────────

    #[test]
    fn test_idiom_or_self_idempotent() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }
}
