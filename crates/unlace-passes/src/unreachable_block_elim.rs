//! Unreachable-block elimination.
//!
//! The lifter walks a function's bytes linearly, so alignment padding after
//! an unconditional jump becomes a block that no edge enters. Such a block
//! still falls through into the block that follows it in address order, so
//! every consumer that counts predecessors sees one entry too many: a loop
//! header looks like it has a second entry (irreducible-region detection and
//! node splitting give up), a plain join looks like a `goto` target, and phi
//! completion invents inputs for a path that never executes.
//!
//! Dropping the blocks is sound because nothing reaches them; the emitted C
//! never contained them. The pass runs once all edges are final, after the
//! last jump-table resolution, so a block that only a table dispatch reaches
//! is never mistaken for dead code.

use unlace_ir::BlockId;
use unlace_ir::ssa::SsaFunction;

use crate::cfg_repair::CfgRepairPass;
use crate::pass::{Pass, PassError, PassPhase};

pub struct UnreachableBlockElimPass;

impl Pass for UnreachableBlockElimPass {
    fn name(&self) -> &str {
        "unreachable-block-elim"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let reachable = func.cfg.reachable_blocks();
        let dead: Vec<BlockId> = func
            .function
            .blocks
            .keys()
            .copied()
            .filter(|bid| !reachable.contains(bid))
            .collect();
        if dead.is_empty() {
            return Ok(false);
        }
        tracing::debug!(
            target: "unlace::unreachable_block_elim",
            "func={} removed={dead:?}",
            func.function.name,
        );
        for bid in &dead {
            func.function.blocks.remove(bid);
            func.phi_map.remove(bid);
        }
        CfgRepairPass.run(func)?;
        Ok(true)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn copy(addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 8),
            smallvec![Varnode::constant(0, 8)],
            addr,
        )
    }

    /// Entry jumps over a padding block that falls through into the loop
    /// header; the padding block is dropped and the header keeps one
    /// predecessor per real edge.
    #[test]
    fn removes_padding_block_and_its_fallthrough_edge() {
        let mut function = Function::new("padded", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(copy(0x1000));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(2)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(copy(0x1008));
        b1.successors = smallvec![BlockId(2)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(copy(0x100c));
        b2.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x100c, 8), Varnode::reg(256, 1)],
            0x1010,
        ));
        b2.successors = smallvec![BlockId(2), BlockId(3)];
        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1014));
        for block in [b0, b1, b2, b3] {
            function.insert_block(block);
        }

        let mut ssa = build_ssa(function);
        assert_eq!(
            ssa.cfg.predecessors(BlockId(2)),
            vec![BlockId(0), BlockId(1), BlockId(2)]
        );

        let changed = UnreachableBlockElimPass.run(&mut ssa).expect("pass runs");

        assert!(changed);
        assert!(!ssa.function.blocks.contains_key(&BlockId(1)));
        assert_eq!(
            ssa.cfg.predecessors(BlockId(2)),
            vec![BlockId(0), BlockId(2)]
        );
        assert!(
            ssa.phi_map[&BlockId(2)]
                .iter()
                .all(|phi| phi.inputs.iter().all(|(pred, _)| *pred != BlockId(1)))
        );
        assert!(!UnreachableBlockElimPass.run(&mut ssa).expect("pass runs"));
    }
}
