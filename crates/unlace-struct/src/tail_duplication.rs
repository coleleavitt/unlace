//! Tail duplication pre-pass for shared return blocks.
//!
//! Duplicates small blocks that end in `return` and have multiple
//! predecessors, giving each predecessor its own copy. A shared return block
//! is a merge point that the structurer can only reach with a `goto` from all
//! but one predecessor; a private copy per predecessor removes the merge.
//!
//! Only blocks that end in `return` are copied. A copy of any other block
//! keeps the original's successors, so the merge moves to those successors
//! instead of disappearing.
//!
//! # Aggressive mode
//!
//! [`tail_duplicate_aggressive`] raises the size limit from `MAX_DUP_INSNS`
//! (8) to `GOTO_ELIM_THRESHOLD` (32) instructions.
//!
//! Both modes respect a per-function cap of `MAX_DUPS_PER_FUNC` (5) to avoid
//! code explosion.
//!
//! # Pipeline position
//!
//! Run **after** [`crate::merge_linear_blocks`] and **before**
//! [`crate::split_irreducible_entries`] so that:
//! - Linear chains are already collapsed (no wasted duplication).
//! - The irreducible splitter sees a cleaner CFG with fewer multi-entry points.

use std::collections::BTreeMap;

use smallvec::SmallVec;
use unlace_ir::{BasicBlock, BlockId, Function, IrOp};

/// Maximum instruction count for a block to be eligible for duplication.
const MAX_DUP_INSNS: usize = 8;

/// Maximum instruction count for duplication in aggressive mode.
const GOTO_ELIM_THRESHOLD: usize = 32;

/// Per-function cap on the number of duplications performed.
const MAX_DUPS_PER_FUNC: usize = 5;

/// Duplicate small shared return blocks so each predecessor gets its own
/// copy. Returns the number of duplications performed.
///
/// Operates on a raw [`Function`] (pre-SSA). A single pass is sufficient
/// because a copy of a return block has no successors and so creates no new
/// multi-predecessor block.
pub fn tail_duplicate_small_blocks(func: &mut Function) -> usize {
    tail_duplicate_impl(func, MAX_DUP_INSNS)
}

/// Like [`tail_duplicate_small_blocks`] with the larger
/// `GOTO_ELIM_THRESHOLD` size limit. Returns the number of duplications
/// performed.
pub fn tail_duplicate_aggressive(func: &mut Function) -> usize {
    tail_duplicate_impl(func, GOTO_ELIM_THRESHOLD)
}

fn tail_duplicate_impl(func: &mut Function, max_insns: usize) -> usize {
    let preds = compute_predecessors(func);
    let entry = func.entry;

    let mut candidates: Vec<(BlockId, Vec<BlockId>)> = func
        .blocks
        .iter()
        .filter_map(|(&bid, block)| {
            if bid == entry || block.insns.len() > max_insns {
                return None;
            }
            if block
                .insns
                .last()
                .is_none_or(|insn| insn.op != IrOp::Return)
            {
                return None;
            }
            let block_preds = preds.get(&bid)?;
            (block_preds.len() >= 2).then(|| (bid, block_preds.clone()))
        })
        .collect();

    // Sort candidates by instruction count (smaller first) so we
    // preferentially duplicate cheaper blocks before hitting the cap.
    candidates.sort_by_key(|(bid, _)| func.blocks.get(bid).map_or(0, |b| b.insns.len()));

    if candidates.is_empty() {
        return 0;
    }

    let mut next_id = func.blocks.keys().last().map_or(0, |b| b.0 + 1);
    let mut total = 0;

    for (target_bid, target_preds) in &candidates {
        if total >= MAX_DUPS_PER_FUNC {
            break;
        }

        let Some(orig) = func.blocks.get(target_bid) else {
            continue;
        };
        let orig_insns = orig.insns.clone();
        let orig_succs: SmallVec<[BlockId; 2]> = orig.successors.clone();

        // Keep the first predecessor pointing to the original block.
        // Duplicate for all remaining predecessors.
        for &pred_bid in target_preds.iter().skip(1) {
            if total >= MAX_DUPS_PER_FUNC {
                break;
            }

            // Don't duplicate if the predecessor is the target itself (self-loop).
            if pred_bid == *target_bid {
                continue;
            }
            // Don't duplicate if the predecessor was already processed as a
            // candidate (it may have been removed/redirected).
            if !func.blocks.contains_key(&pred_bid) {
                continue;
            }

            let copy_id = BlockId(next_id);
            next_id += 1;

            let mut copy_block = BasicBlock::new(copy_id);
            copy_block.insns = orig_insns.clone();
            copy_block.successors = orig_succs.clone();
            func.insert_block(copy_block);

            redirect_successors(func, pred_bid, *target_bid, copy_id);
            total += 1;
        }
    }

    if total > 0 {
        tracing::trace!(
            func = %func.name,
            duplications = total,
            blocks = func.blocks.len(),
            "tail_duplicate done"
        );
    }

    total
}

/// Compute predecessor map from successor lists.
fn compute_predecessors(func: &Function) -> BTreeMap<BlockId, Vec<BlockId>> {
    let mut preds: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for (&src, block) in &func.blocks {
        for &dst in &block.successors {
            preds.entry(dst).or_default().push(src);
        }
    }
    for v in preds.values_mut() {
        v.sort();
        v.dedup();
    }
    preds
}

/// Rewrite all successor edges from `src` that point to `from` so they point
/// to `to` instead.
fn redirect_successors(func: &mut Function, src: BlockId, from: BlockId, to: BlockId) {
    let Some(block) = func.blocks.get_mut(&src) else {
        return;
    };
    let new_succs: SmallVec<[BlockId; 2]> = block
        .successors
        .iter()
        .map(|&s| if s == from { to } else { s })
        .collect();
    block.successors = new_succs;
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn arith(addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
            addr,
        )
    }

    fn branch(addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Branch, smallvec![], addr)
    }

    fn cbranch(addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), Varnode::reg(256, 1)],
            addr,
        )
    }

    fn ret(addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Return, smallvec![], addr)
    }

    /// Diamond CFG where the join block has ≤8 instructions:
    ///
    ///     BB0 (cbranch)
    ///    /    \
    ///  BB1    BB2
    ///    \    /
    ///     BB3 (small join: 1 insn + return)
    ///
    /// After tail duplication, BB3 should be duplicated so BB1 and BB2 each
    /// get their own copy.
    #[test]
    fn test_diamond_join_duplicated() {
        let mut func = Function::new("diamond", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x1000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x1010));
        bb1.insns.push(branch(0x1014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith(0x1020));
        bb2.insns.push(branch(0x1024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith(0x1030));
        bb3.insns.push(ret(0x1034));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 1, "one predecessor should get a copy");

        // BB3 still exists (kept for the first predecessor).
        assert!(func.blocks.contains_key(&BlockId(3)));

        // A copy block should have been created.
        let copy_id = BlockId(4);
        assert!(
            func.blocks.contains_key(&copy_id),
            "copy block BB4 should exist"
        );

        // The copy should have the same instructions as BB3.
        let copy = &func.blocks[&copy_id];
        assert_eq!(copy.insns.len(), 2);
        assert_eq!(copy.insns[0].op, IrOp::IntAdd);
        assert_eq!(copy.insns[1].op, IrOp::Return);

        // One of BB1/BB2 should point to the copy, the other to the original.
        let bb1_succs: Vec<BlockId> = func.blocks[&BlockId(1)]
            .successors
            .iter()
            .copied()
            .collect();
        let bb2_succs: Vec<BlockId> = func.blocks[&BlockId(2)]
            .successors
            .iter()
            .copied()
            .collect();

        let targets: Vec<BlockId> = bb1_succs.iter().chain(bb2_succs.iter()).copied().collect();
        assert!(
            targets.contains(&BlockId(3)) && targets.contains(&copy_id),
            "one pred should target original, other should target copy; got {targets:?}"
        );
    }

    /// A block with > MAX_DUP_INSNS (8) instructions should NOT be duplicated
    /// by the conservative pass.
    #[test]
    fn test_large_block_not_duplicated() {
        let mut func = Function::new("large_join", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x2010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(branch(0x2020));
        bb2.successors = smallvec![BlockId(3)];

        // BB3 has 10 instructions — too large for conservative.
        let mut bb3 = BasicBlock::new(BlockId(3));
        for i in 0..10 {
            bb3.insns.push(arith(0x2030 + i * 4));
        }

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 0, "large block should not be duplicated");
        assert_eq!(func.blocks.len(), 4);
    }

    /// Entry block should never be duplicated even if it has multiple preds
    /// (e.g. from a back-edge).
    #[test]
    fn test_entry_block_not_duplicated() {
        let mut func = Function::new("entry_loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x3000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x3010));
        bb1.successors = smallvec![BlockId(0)]; // back-edge to entry

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ret(0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 0, "entry block must not be duplicated");
    }

    /// Shared exit with 5 statements is duplicated (eliminating goto) by
    /// the aggressive pass.
    #[test]
    fn test_aggressive_5_stmt_shared_exit_duplicated() {
        let mut func = Function::new("shared_exit_5", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x4000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x4010));
        bb1.insns.push(branch(0x4014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith(0x4020));
        bb2.insns.push(branch(0x4024));
        bb2.successors = smallvec![BlockId(3)];

        // BB3 has exactly 5 statements — within the 8-insn threshold.
        let mut bb3 = BasicBlock::new(BlockId(3));
        for i in 0..5 {
            bb3.insns.push(arith(0x4030 + i * 4));
        }
        bb3.insns.push(ret(0x4050));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let dups = tail_duplicate_aggressive(&mut func);
        assert_eq!(
            dups, 1,
            "5-stmt shared exit should be duplicated (goto eliminated)"
        );

        // Copy block should exist.
        let copy_id = BlockId(4);
        assert!(
            func.blocks.contains_key(&copy_id),
            "copy block BB4 should exist"
        );

        // The copy should have 6 instructions (5 arith + 1 ret).
        let copy = &func.blocks[&copy_id];
        assert_eq!(copy.insns.len(), 6);
    }

    /// 6th duplication attempt is skipped because of the per-function cap (5).
    #[test]
    fn test_cap_hit_6th_duplication_skipped() {
        // Six shared return blocks. Header `i` branches to `left_i` or to the
        // next header; `left_i` branches to `join_i` directly or through
        // `mid_i`, so each `join_i` has two predecessors.
        let mut func = Function::new("cap_test", BlockId(0), 0x5000);
        let mut next_bid = 0u32;
        for i in 0..6u32 {
            let header = BlockId(next_bid);
            let left = BlockId(next_bid + 1);
            let mid = BlockId(next_bid + 2);
            let join = BlockId(next_bid + 3);
            let next_header = BlockId(next_bid + 4);
            let base_addr = 0x5000 + u64::from(i) * 0x100;

            let mut bh = BasicBlock::new(header);
            bh.insns.push(cbranch(base_addr));
            bh.successors = smallvec![left, next_header];

            let mut bl = BasicBlock::new(left);
            bl.insns.push(cbranch(base_addr + 0x10));
            bl.successors = smallvec![join, mid];

            let mut bm = BasicBlock::new(mid);
            bm.insns.push(arith(base_addr + 0x20));
            bm.insns.push(branch(base_addr + 0x24));
            bm.successors = smallvec![join];

            let mut bj = BasicBlock::new(join);
            bj.insns.push(arith(base_addr + 0x30));
            bj.insns.push(ret(base_addr + 0x34));

            func.insert_block(bh);
            func.insert_block(bl);
            func.insert_block(bm);
            func.insert_block(bj);
            next_bid += 4;
        }
        let mut last = BasicBlock::new(BlockId(next_bid));
        last.insns.push(ret(0x5800));
        func.insert_block(last);

        let dups = tail_duplicate_aggressive(&mut func);
        assert_eq!(dups, 5, "should hit the per-function cap at 5; got {dups}");
    }

    /// A shared block that does not return only moves the merge to its
    /// successors, so it is left alone.
    #[test]
    fn test_shared_non_return_block_not_duplicated() {
        let mut func = Function::new("non_return_join", BlockId(0), 0x6000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x6000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x6010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(branch(0x6020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith(0x6030));
        bb3.insns.push(branch(0x6034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ret(0x6040));

        for block in [bb0, bb1, bb2, bb3, bb4] {
            func.insert_block(block);
        }

        assert_eq!(tail_duplicate_aggressive(&mut func), 0);
    }
}
