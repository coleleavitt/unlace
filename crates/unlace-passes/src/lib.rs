//! Analysis and optimization passes over the IR (CFG, SSA, propagation, etc.).

pub mod pass;
pub mod calling_convention;
pub mod const_fold;
pub mod copy_prop;
pub mod dce;
pub mod stack_vars;
pub mod type_infer;

pub use pass::{Pass, PassError, run_to_fixedpoint};
pub use calling_convention::CallingConventionDetectPass;
pub use const_fold::ConstantFoldPass;
pub use copy_prop::CopyPropagationPass;
pub use dce::DeadCodeElimPass;
pub use stack_vars::StackVarRecoveryPass;

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use crate::{ConstantFoldPass, CopyPropagationPass, run_to_fixedpoint};

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

    #[test]
    fn test_fixedpoint_iteration() {
        // INT_ADD c3, c5 => v2 (will fold to COPY c8)
        // COPY v2 => v3 (copy prop will replace v3 uses with c8 after fold)
        // INT_ADD v3, c2 => v4 (after prop: INT_ADD c8, c2 => will fold to COPY c10)
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);
        let v4 = Varnode::unique(8, 4);
        let c3 = Varnode::constant(3, 4);
        let c5 = Varnode::constant(5, 4);
        let c2 = Varnode::constant(2, 4);

        let insn1 = IrInsn::with_output(IrOp::IntAdd, v2, smallvec![c3, c5], 0x1000);
        let insn2 = IrInsn::with_output(IrOp::Copy, v3, smallvec![v2], 0x1004);
        let insn3 = IrInsn::with_output(IrOp::IntAdd, v4, smallvec![v3, c2], 0x1008);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2, insn3]);

        let fold = ConstantFoldPass;
        let prop = CopyPropagationPass;
        let passes: &[&dyn crate::Pass] = &[&fold, &prop];

        let total = run_to_fixedpoint(passes, &mut ssa).expect("fixedpoint should succeed");
        assert!(total >= 2, "expected at least 2 change-rounds, got {total}");

        let block = ssa.function.blocks.values().next().expect("has block");

        // insn1 should be folded: COPY c8
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 8);

        // insn3 should be folded: COPY c10
        assert_eq!(block.insns[2].op, IrOp::Copy);
        assert_eq!(block.insns[2].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[2].inputs[0].offset, 10);
    }

    #[test]
    fn test_fixedpoint_terminates_with_no_change() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);

        let fold = ConstantFoldPass;
        let prop = CopyPropagationPass;
        let passes: &[&dyn crate::Pass] = &[&fold, &prop];

        let total = run_to_fixedpoint(passes, &mut ssa).expect("fixedpoint should succeed");
        assert_eq!(total, 0);
    }
}
