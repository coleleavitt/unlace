//! Constant folding pass: evaluate instructions with all-constant inputs
//! at compile time and replace them with COPY of the computed result.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct ConstantFoldPass;

impl Pass for ConstantFoldPass {
    fn name(&self) -> &str {
        "constant-fold"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;
        let func_name = func.function.name.clone();

        for block in func.function.blocks.values_mut() {
            for insn in &mut block.insns {
                if let Some(folded) = try_fold(insn) {
                    tracing::debug!(
                        target: "unlace::const_fold",
                        "func={} addr={:#x} {} -> {}",
                        func_name,
                        insn.addr,
                        insn,
                        folded
                    );
                    *insn = folded;
                    changed = true;
                }
            }
        }

        Ok(changed)
    }
}

fn try_fold(insn: &IrInsn) -> Option<IrInsn> {
    let output = insn.output?;

    if insn.op == IrOp::Copy {
        return None;
    }

    if !insn.inputs.iter().all(|v| v.space == SpaceId::Const) {
        return None;
    }

    let result_val = evaluate(insn.op, &insn.inputs, output.size)?;
    let result_const = Varnode::constant(result_val, output.size);

    Some(IrInsn::with_output(
        IrOp::Copy,
        output,
        smallvec::smallvec![result_const],
        insn.addr,
    ))
}

fn mask_for_size(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (size as u32 * 8)) - 1
    }
}

fn sign_extend(val: u64, size: u8) -> i64 {
    let bits = size as u32 * 8;
    let shift = 64 - bits;
    ((val as i64) << shift) >> shift
}

fn evaluate(op: IrOp, inputs: &[Varnode], out_size: u8) -> Option<u64> {
    // Constants are `u64`. A result or operand wider than that (a 128-bit
    // SSE register lowered to integer IR) is evaluated only when the
    // operation cannot carry bits past bit 63.
    if !matches!(op, IrOp::Copy | IrOp::IntZext)
        && (out_size > 8 || inputs.iter().any(|v| v.size > 8))
    {
        return None;
    }
    let mask = mask_for_size(out_size);

    match op {
        // --- Integer arithmetic (2 inputs, equal size) ---
        IrOp::IntAdd => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_add(b.offset) & mask)
        }
        IrOp::IntSub => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_sub(b.offset) & mask)
        }
        IrOp::IntMult => {
            let (a, b) = two(inputs)?;
            Some(a.offset.wrapping_mul(b.offset) & mask)
        }
        IrOp::IntDiv => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(av / bv)
        }
        IrOp::IntSdiv => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = sign_extend(a.offset, a.size);
            let bv = sign_extend(b.offset, b.size);
            if av == i64::MIN && bv == -1 {
                return None;
            }
            Some((av.wrapping_div(bv) as u64) & mask)
        }
        IrOp::IntRem => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(av % bv)
        }
        IrOp::IntSrem => {
            let (a, b) = two(inputs)?;
            if b.offset == 0 {
                return None;
            }
            let av = sign_extend(a.offset, a.size);
            let bv = sign_extend(b.offset, b.size);
            if av == i64::MIN && bv == -1 {
                return None;
            }
            Some((av.wrapping_rem(bv) as u64) & mask)
        }

        // --- Unary integer ---
        IrOp::IntNegate => {
            let a = one(inputs)?;
            Some((!a.offset) & mask)
        }
        IrOp::Int2comp => {
            let a = one(inputs)?;
            Some(a.offset.wrapping_neg() & mask)
        }
        IrOp::IntZext => {
            let a = one(inputs)?;
            Some(a.offset & mask_for_size(a.size))
        }
        IrOp::IntSext => {
            let a = one(inputs)?;
            let extended = sign_extend(a.offset, a.size);
            Some((extended as u64) & mask)
        }

        // --- Bitwise ---
        IrOp::IntAnd => {
            let (a, b) = two(inputs)?;
            Some((a.offset & b.offset) & mask)
        }
        IrOp::IntOr => {
            let (a, b) = two(inputs)?;
            Some((a.offset | b.offset) & mask)
        }
        IrOp::IntXor => {
            let (a, b) = two(inputs)?;
            Some((a.offset ^ b.offset) & mask)
        }
        IrOp::IntLeft => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            if shift >= bits as u64 {
                Some(0)
            } else {
                Some((a.offset << shift as u32) & mask)
            }
        }
        IrOp::IntRight => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            let av = a.offset & mask;
            if shift >= bits as u64 {
                Some(0)
            } else {
                Some(av >> shift as u32)
            }
        }
        IrOp::IntSright => {
            let (a, b) = two(inputs)?;
            let bits = out_size as u32 * 8;
            let shift = b.offset & mask_for_size(b.size);
            let signed_a = sign_extend(a.offset, out_size);
            if shift >= bits as u64 {
                if signed_a < 0 { Some(mask) } else { Some(0) }
            } else {
                Some(((signed_a >> shift as u32) as u64) & mask)
            }
        }

        // --- Integer comparison (output is b8) ---
        IrOp::IntEqual => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av == bv))
        }
        IrOp::IntNotequal => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av != bv))
        }
        IrOp::IntLess => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av < bv))
        }
        IrOp::IntSless => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            Some(u64::from(sa < sb))
        }
        IrOp::IntLessequal => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            Some(u64::from(av <= bv))
        }
        IrOp::IntSlessequal => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            Some(u64::from(sa <= sb))
        }

        // --- Carry / overflow ---
        IrOp::IntCarry => {
            let (a, b) = two(inputs)?;
            let av = a.offset & mask_for_size(a.size);
            let bv = b.offset & mask_for_size(b.size);
            let m = mask_for_size(a.size);
            Some(u64::from(av.wrapping_add(bv) & m < av))
        }
        IrOp::IntScarry => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            let sum = sa.wrapping_add(sb);
            let overflow = (sa ^ sum) & (sb ^ sum) < 0;
            Some(u64::from(overflow))
        }
        IrOp::IntSborrow => {
            let (a, b) = two(inputs)?;
            let sa = sign_extend(a.offset, a.size);
            let sb = sign_extend(b.offset, b.size);
            let diff = sa.wrapping_sub(sb);
            // Signed overflow on sub: signs of a and b differ AND sign of result differs from a
            let overflow = (sa ^ sb) & (sa ^ diff) < 0;
            Some(u64::from(overflow))
        }

        // --- Boolean ---
        IrOp::BoolNegate => {
            let a = one(inputs)?;
            Some(u64::from((a.offset & 1) == 0))
        }
        IrOp::BoolAnd => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) & (b.offset & 1))
        }
        IrOp::BoolOr => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) | (b.offset & 1))
        }
        IrOp::BoolXor => {
            let (a, b) = two(inputs)?;
            Some((a.offset & 1) ^ (b.offset & 1))
        }

        // We don't fold float ops, control flow, memory ops, or pseudo ops.
        _ => None,
    }
}

fn one(inputs: &[Varnode]) -> Option<Varnode> {
    if inputs.len() == 1 {
        Some(inputs[0])
    } else {
        None
    }
}

fn two(inputs: &[Varnode]) -> Option<(Varnode, Varnode)> {
    if inputs.len() == 2 {
        Some((inputs[0], inputs[1]))
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

    #[test]
    fn test_const_fold_int_add() {
        let out = Varnode::unique(0, 4);
        let c3 = Varnode::constant(3, 4);
        let c5 = Varnode::constant(5, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![c3, c5], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let pass = ConstantFoldPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.op, IrOp::Copy);
        assert_eq!(folded.inputs[0].space, SpaceId::Const);
        assert_eq!(folded.inputs[0].offset, 8);
        assert_eq!(folded.inputs[0].size, 4);
    }

    #[test]
    fn test_const_fold_skips_values_wider_than_u64() {
        // 1 << 64 is a valid 128-bit result that a `u64` constant cannot hold.
        let out = Varnode::unique(0, 16);
        let one = Varnode::constant(1, 16);
        let sixty_four = Varnode::constant(64, 1);
        let insn = IrInsn::with_output(IrOp::IntLeft, out, smallvec![one, sixty_four], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        assert!(!ConstantFoldPass.run(&mut ssa).expect("pass should succeed"));
    }

    #[test]
    fn test_const_fold_int_sub() {
        let out = Varnode::unique(0, 4);
        let c10 = Varnode::constant(10, 4);
        let c3 = Varnode::constant(3, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![c10, c3], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConstantFoldPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.op, IrOp::Copy);
        assert_eq!(folded.inputs[0].offset, 7);
    }

    #[test]
    fn test_const_fold_bool_and() {
        let out = Varnode::unique(0, 1);
        let c1 = Varnode::constant(1, 1);
        let c0 = Varnode::constant(0, 1);
        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![c1, c0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConstantFoldPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.op, IrOp::Copy);
        assert_eq!(folded.inputs[0].space, SpaceId::Const);
        assert_eq!(folded.inputs[0].offset, 0);
    }

    #[test]
    fn test_const_fold_wrapping_32bit() {
        let out = Varnode::unique(0, 4);
        let max = Varnode::constant(0xFFFF_FFFF, 4);
        let c1 = Varnode::constant(1, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![max, c1], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        ConstantFoldPass.run(&mut ssa).expect("pass should succeed");

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.inputs[0].offset, 0);
    }

    #[test]
    fn test_const_fold_no_change_on_non_const_input() {
        let out = Varnode::unique(0, 4);
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, c5], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConstantFoldPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }

    #[test]
    fn test_const_fold_div_by_zero_skipped() {
        let out = Varnode::unique(0, 4);
        let c10 = Varnode::constant(10, 4);
        let c0 = Varnode::constant(0, 4);
        let insn = IrInsn::with_output(IrOp::IntDiv, out, smallvec![c10, c0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConstantFoldPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }

    #[test]
    fn test_const_fold_int_negate() {
        let out = Varnode::unique(0, 4);
        let c0xff = Varnode::constant(0xFF, 4);
        let insn = IrInsn::with_output(IrOp::IntNegate, out, smallvec![c0xff], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        ConstantFoldPass.run(&mut ssa).expect("pass should succeed");

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.inputs[0].offset, 0xFFFF_FF00);
    }

    #[test]
    fn test_const_fold_bool_or() {
        let out = Varnode::unique(0, 1);
        let c0 = Varnode::constant(0, 1);
        let c1 = Varnode::constant(1, 1);
        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![c0, c1], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        ConstantFoldPass.run(&mut ssa).expect("pass should succeed");

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.inputs[0].offset, 1);
    }

    #[test]
    fn test_const_fold_int_carry() {
        let out = Varnode::unique(0, 1);
        let max = Varnode::constant(0xFFFF_FFFF, 4);
        let c1 = Varnode::constant(1, 4);
        let insn = IrInsn::with_output(IrOp::IntCarry, out, smallvec![max, c1], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        ConstantFoldPass.run(&mut ssa).expect("pass should succeed");

        let folded = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[0];
        assert_eq!(folded.inputs[0].offset, 1);
    }
}
