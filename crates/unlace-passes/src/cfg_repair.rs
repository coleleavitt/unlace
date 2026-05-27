//! Centralized CFG repair and structural verification.
//!
//! This pass is the pipeline checkpoint analogous to GCC's CFG cleanup: it
//! normalizes block successor lists, rebuilds CFG/dominator analyses from the
//! current function body, and runs the structural IR verifier.

use std::collections::BTreeSet;

use unlace_ir::ssa::{SsaFunction, rebuild_cfg};
use unlace_ir::verify_ssa_function;

use crate::pass::{Pass, PassError, PassPhase};

pub struct CfgRepairPass;

impl Pass for CfgRepairPass {
    fn name(&self) -> &str {
        "cfg-repair"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let known_blocks: BTreeSet<_> = func.function.blocks.keys().copied().collect();
        let mut changed = false;

        for block in func.function.blocks.values_mut() {
            let before = block.successors.clone();
            block.successors.retain(|succ| known_blocks.contains(succ));
            block.successors.sort();
            block.successors.dedup();
            changed |= block.successors != before;
        }

        rebuild_cfg(func);
        verify_ssa_function(func).map_err(|err| PassError::InvariantViolation {
            message: format!("{} after cfg-repair: {err}", func.function.name),
        })?;

        Ok(changed)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp};

    use super::*;

    #[test]
    fn prunes_stale_and_duplicate_successors() {
        let mut function = Function::new("cfg_repair", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1000));
        b0.successors = smallvec![BlockId(1), BlockId(99), BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        function.insert_block(b0);
        function.insert_block(b1);

        let mut ssa = build_ssa(function);
        let changed = CfgRepairPass.run(&mut ssa).expect("repair should succeed");

        assert!(changed);
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].successors.as_slice(),
            &[BlockId(1)]
        );
        assert!(ssa.cfg.node_index(BlockId(1)).is_some());
    }
}
