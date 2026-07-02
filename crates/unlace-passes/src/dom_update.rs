//! Dominator/post-dominator update facade.
//!
//! Today this rebuilds the affected analyses, but call sites get an explicit
//! updater API so we can swap in incremental updates later.

use unlace_ir::ssa::{SsaFunction, rebuild_cfg};
use unlace_ir::verify_ssa_function_pipeline;

use crate::pass::PassError;

#[derive(Clone, Debug, Default)]
pub struct DominatorUpdater;

impl DominatorUpdater {
    pub fn rebuild_all(func: &mut SsaFunction) -> Result<(), PassError> {
        rebuild_cfg(func);
        verify_ssa_function_pipeline(func).map_err(|err| PassError::InvariantViolation {
            message: format!(
                "{} dominator update verification failed: {err}",
                func.function.name
            ),
        })
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp};

    use super::*;

    #[test]
    fn rebuilds_dom_tree_after_cfg_change() {
        let mut function = Function::new("dom", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1000));
        b0.successors = smallvec![BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        function.insert_block(b0);
        function.insert_block(b1);
        let mut ssa = build_ssa(function);

        DominatorUpdater::rebuild_all(&mut ssa).expect("valid dom rebuild");
        assert_eq!(ssa.dom_tree.root(), BlockId(0));
    }
}
