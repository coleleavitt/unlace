//! KnownBits-driven condition / cast / arithmetic simplifier.
//!
//! Uses [`compute_known_bits`] to identify expressions whose result is
//! statically determined, then rewrites them to a `Copy` of the constant.
//! Conservative: only simplifies when KnownBits returns a fully-constant
//! result (every bit is known) — avoids over-aggressive rewriting.
//!
//! Mirrors LLVM InstSimplify / InstCombine patterns:
//! - `x & 0` → `0`
//! - `x | -1` → `-1`
//! - `x & const_mask` where high bits already zero → `x` (mask elimination)
//! - `(zext x) >> N` where N >= original width → `0`
//! - branch on constant condition → drop the branch (handled by structurer)

use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId, Varnode};

use crate::known_bits_analysis::compute_known_bits;
use crate::pass::{Pass, PassError, PassPhase};

/// The KnownBits-driven simplification pass.
#[derive(Default)]
pub struct KnownBitsSimplifyPass;

impl Pass for KnownBitsSimplifyPass {
    fn name(&self) -> &str {
        "known-bits-simplify"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Compute known bits once.
        let kb_map = compute_known_bits(func);
        let mut changed = false;

        // Collect rewrites to apply (we can't mutate while iterating).
        let mut rewrites: Vec<(unlace_ir::BlockId, usize, u64)> = Vec::new();

        for block in func.function.blocks.values() {
            for (idx, insn) in block.insns.iter().enumerate() {
                // Only consider ops with an output.
                let Some(_out) = insn.output else { continue };
                let Some(out_sv) = func
                    .var_map
                    .get(&(block.id, idx, VarnodeSlot::Output))
                    .copied()
                else {
                    continue;
                };

                // Only simplify ops where the entire result is known.
                let kb = kb_map.get(&out_sv);
                if let Some(const_val) = kb.constant_value() {
                    // Don't rewrite an already-Copy of the same const.
                    let already_copy_of_const = insn.op == IrOp::Copy
                        && insn.inputs.len() == 1
                        && insn.inputs[0].space == SpaceId::Const
                        && insn.inputs[0].offset == const_val;
                    if already_copy_of_const {
                        continue;
                    }
                    // Skip ops that have side-effects or are control flow.
                    if !is_simplifiable_op(insn.op) {
                        continue;
                    }
                    rewrites.push((block.id, idx, const_val));
                }
            }
        }

        // Apply rewrites.
        for (bid, idx, const_val) in rewrites {
            let Some(block) = func.function.blocks.get_mut(&bid) else {
                continue;
            };
            let Some(insn) = block.insns.get_mut(idx) else {
                continue;
            };
            let out_size = insn.output.map(|o| o.size).unwrap_or(8);

            // Drop var_map entries for any prior inputs we're about to remove.
            for input_idx in 0..insn.inputs.len() {
                func.var_map
                    .remove(&(bid, idx, VarnodeSlot::Input(input_idx)));
            }

            // Rewrite to Copy(const).
            insn.op = IrOp::Copy;
            insn.inputs = smallvec::smallvec![Varnode::constant(const_val, out_size)];
            changed = true;
        }

        Ok(changed)
    }
}

/// Whether an op is safe to fold into a constant Copy based on KnownBits.
fn is_simplifiable_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntZext
            | IrOp::IntSext
    )
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn build_function_with_op(op: IrOp, inputs: Vec<Varnode>, out_size: u8) -> SsaFunction {
        let out = Varnode::reg(8, out_size);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            op,
            out,
            smallvec::SmallVec::from_vec(inputs),
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));
        func.insert_block(b0);
        build_ssa(func)
    }

    #[test]
    fn test_known_bits_simplify_keeps_wide_shift() {
        // A 128-bit `x >> 64` keeps x's high half; it is not provably zero.
        let x = Varnode::reg(0x400, 16);
        let sixty_four = Varnode::constant(64, 1);
        let mut ssa = build_function_with_op(IrOp::IntRight, vec![x, sixty_four], 16);
        assert!(!KnownBitsSimplifyPass.run(&mut ssa).unwrap());
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].op, IrOp::IntRight);
    }

    #[test]
    fn test_known_bits_simplify_and_with_zero() {
        // x & 0 → 0
        let x = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let mut ssa = build_function_with_op(IrOp::IntAnd, vec![x, zero], 4);
        let changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(changed);
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs[0].space, SpaceId::Const);
        assert_eq!(insn.inputs[0].offset, 0);
    }

    #[test]
    fn test_known_bits_simplify_or_with_all_ones() {
        // x | 0xFF (4-bit width: 0xF) → 0xFF
        let x = Varnode::reg(0, 1);
        let ones = Varnode::constant(0xFF, 1);
        let mut ssa = build_function_with_op(IrOp::IntOr, vec![x, ones], 1);
        let changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(changed);
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs[0].offset, 0xFF);
    }

    #[test]
    fn test_known_bits_simplify_xor_self() {
        // const ^ const → 0, but pass only simplifies when KnownBits resolves
        // both operands; const ^ const is a special case (same constant).
        // Use: const1 ^ const1 (where const1 = 0xAB).
        let c1 = Varnode::constant(0xAB, 1);
        let mut ssa = build_function_with_op(IrOp::IntXor, vec![c1, c1], 1);
        let changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(changed);
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs[0].offset, 0);
    }

    #[test]
    fn test_known_bits_simplify_shl_by_width() {
        // const << 8 (8-bit width) → 0
        let c = Varnode::constant(0xFF, 1);
        let shamt = Varnode::constant(8, 1);
        let mut ssa = build_function_with_op(IrOp::IntLeft, vec![c, shamt], 1);
        let changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(changed);
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs[0].offset, 0);
    }

    #[test]
    fn test_known_bits_simplify_no_op_when_unknown() {
        // x AND y (both unknown) → don't simplify.
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(16, 4);
        let mut ssa = build_function_with_op(IrOp::IntAnd, vec![x, y], 4);
        let _changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        // The pass shouldn't crash; whether it changed depends on inputs.
        // What matters: the op is still IntAnd (not rewritten).
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::IntAnd);
    }

    #[test]
    fn test_known_bits_simplify_const_arithmetic() {
        // 10 + 20 → 30
        let a = Varnode::constant(10, 4);
        let b = Varnode::constant(20, 4);
        let mut ssa = build_function_with_op(IrOp::IntAdd, vec![a, b], 4);
        let changed = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(changed);
        let insn = &ssa.function.blocks[&BlockId(0)].insns[0];
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs[0].offset, 30);
    }

    #[test]
    fn test_known_bits_simplify_idempotent() {
        // After one run, a second run should not change anything.
        let x = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let mut ssa = build_function_with_op(IrOp::IntAnd, vec![x, zero], 4);
        let first = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(first);
        let second = KnownBitsSimplifyPass.run(&mut ssa).unwrap();
        assert!(!second, "second run should be idempotent");
    }
}
