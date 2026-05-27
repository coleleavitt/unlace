//! Jump-threading candidate detection.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp};

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct JumpThreadCandidate {
    pub from: BlockId,
    pub through: BlockId,
    pub to: BlockId,
}

pub fn collect_jump_thread_candidates(func: &SsaFunction) -> Vec<JumpThreadCandidate> {
    let mut out = Vec::new();
    for (&bid, block) in &func.function.blocks {
        if block.successors.len() != 1 {
            continue;
        }
        let through = block.successors[0];
        let Some(mid) = func.function.blocks.get(&through) else {
            continue;
        };
        if mid.insns.last().is_some_and(|insn| insn.op == IrOp::Branch) && mid.successors.len() == 1
        {
            out.push(JumpThreadCandidate {
                from: bid,
                through,
                to: mid.successors[0],
            });
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
    fn detects_forwarder_block() {
        let mut function = Function::new("jt", BlockId(0), 0x1000);
        for id in 0..3 {
            let mut b = BasicBlock::new(BlockId(id));
            let op = if id == 2 { IrOp::Return } else { IrOp::Branch };
            b.insns.push(IrInsn::without_output(
                op,
                smallvec![],
                0x1000 + u64::from(id),
            ));
            if id < 2 {
                b.successors = smallvec![BlockId(id + 1)];
            }
            function.insert_block(b);
        }
        let ssa = build_ssa(function);
        assert!(!collect_jump_thread_candidates(&ssa).is_empty());
    }
}
