//! EagerReturns pre-structuring pass (SAILR, USENIX 2024).
//!
//! Duplicates small shared return blocks into each predecessor, eliminating
//! goto-to-return edges that the structurer cannot handle.

use unlace_ir::cfg::build_cfg;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp};

const MAX_RETURN_BLOCK_SIZE: usize = 3;

/// Duplicate small return blocks (≤ 3 instructions) with ≥ 2 predecessors
/// into each predecessor, removing the shared return block when possible.
pub fn eager_returns(func: &mut SsaFunction) {
    let candidates: Vec<BlockId> = func
        .function
        .blocks
        .iter()
        .filter_map(|(&bid, block)| {
            let is_return = block
                .insns
                .last()
                .is_some_and(|insn| insn.op == IrOp::Return);
            if is_return && block.insns.len() <= MAX_RETURN_BLOCK_SIZE {
                Some(bid)
            } else {
                None
            }
        })
        .collect();

    let mut changed = false;

    for ret_bid in candidates {
        let preds = func.cfg.predecessors(ret_bid);
        if preds.len() < 2 {
            continue;
        }

        let ret_insns = func.function.blocks[&ret_bid].insns.clone();

        for &pred_bid in &preds {
            let Some(pred_block) = func.function.blocks.get_mut(&pred_bid) else {
                continue;
            };

            if let Some(last) = pred_block.insns.last() {
                match last.op {
                    IrOp::Branch => {
                        pred_block.insns.pop();
                    }
                    // Cannot safely rewrite conditional/indirect predecessors.
                    IrOp::Cbranch | IrOp::Branchind => continue,
                    _ => {}
                }
            }

            pred_block.insns.extend(ret_insns.iter().cloned());
            pred_block.successors.retain(|s| *s != ret_bid);
            changed = true;
        }

        let still_referenced = func.function.blocks.iter().any(|(&bid, block)| {
            bid != ret_bid && block.successors.contains(&ret_bid)
        });

        if !still_referenced {
            func.function.blocks.remove(&ret_bid);
        }
    }

    if changed {
        func.cfg = build_cfg(&func.function);
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn arith_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            output,
            smallvec![inputs[0], inputs[1]],
            addr,
        )
    }

    fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            addr,
        )
    }

    #[test]
    fn test_eager_return_duplicated() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("eager_dup", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x1000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x1010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x1014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x1020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x1024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(r0, &[r0, c1], 0x1030));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x1034));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        assert_eq!(ssa.cfg.predecessors(BlockId(3)).len(), 2);

        eager_returns(&mut ssa);

        assert!(
            !ssa.function.blocks.contains_key(&BlockId(3)),
            "shared return block BB3 should be removed after duplication"
        );

        let bb1 = &ssa.function.blocks[&BlockId(1)];
        assert_eq!(bb1.insns.last().unwrap().op, IrOp::Return);

        let bb2 = &ssa.function.blocks[&BlockId(2)];
        assert_eq!(bb2.insns.last().unwrap().op, IrOp::Return);

        assert!(!bb1.successors.contains(&BlockId(3)));
    }

    #[test]
    fn test_large_return_not_duplicated() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("large_ret", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        for i in 0..9 {
            bb3.insns.push(arith_insn(r0, &[r8, c1], 0x2030 + i * 4));
        }
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2060));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let blocks_before = ssa.function.blocks.len();

        eager_returns(&mut ssa);

        assert!(ssa.function.blocks.contains_key(&BlockId(3)));
        assert_eq!(ssa.function.blocks.len(), blocks_before);
    }
}
