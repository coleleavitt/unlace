//! CFG simplification planning.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp};

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum CfgSimplifyAction {
    RemoveUnreachable(BlockId),
    MergeLinearBlock { pred: BlockId, succ: BlockId },
}

pub fn collect_simplify_cfg_actions(func: &SsaFunction) -> Vec<CfgSimplifyAction> {
    let mut out = Vec::new();
    for (&bid, block) in &func.function.blocks {
        if bid != func.function.entry && func.cfg.predecessors(bid).is_empty() {
            out.push(CfgSimplifyAction::RemoveUnreachable(bid));
        }
        if block.successors.len() == 1 {
            let succ = block.successors[0];
            if func.cfg.predecessors(succ).len() == 1
                && block
                    .insns
                    .last()
                    .is_some_and(|insn| insn.op == IrOp::Branch)
            {
                out.push(CfgSimplifyAction::MergeLinearBlock { pred: bid, succ });
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp};

    use super::*;

    #[test]
    fn finds_linear_merge_candidate() {
        let mut function = Function::new("cfg", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1000));
        b0.successors = smallvec![BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        function.insert_block(b0);
        function.insert_block(b1);

        let ssa = build_ssa(function);
        assert!(matches!(
            collect_simplify_cfg_actions(&ssa).first(),
            Some(CfgSimplifyAction::MergeLinearBlock { .. })
        ));
    }
}
