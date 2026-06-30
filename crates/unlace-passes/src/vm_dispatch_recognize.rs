//! VM-dispatch (virtualization-obfuscator) recognizer (ROADMAP Phase E.4.3).
//!
//! Detects the classic bytecode-interpreter shape an obfuscator like VMProtect
//! or Themida leaves behind: a **dispatcher** that sits at the head of a loop
//! and fans out to many handler blocks via an indirect branch (the handler
//! table). When both conditions hold — the block is a loop head AND it
//! dispatches to many handlers (or via `Branchind`) — we report a finding.
//!
//! This is a conservative, reviewable signal (it never rewrites the CFG); a
//! genuine large `switch` that happens to live in a loop can match, which is the
//! accepted over-approximation.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp};

/// Minimum number of handler successors for a non-`Branchind` block to be
/// considered a dispatcher.
const MIN_HANDLERS: usize = 8;

/// A recognised VM-dispatch shape.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct VmDispatchFinding {
    /// The dispatcher block (loop head + many-way fan-out).
    pub dispatcher_block: BlockId,
    /// Number of handler successors.
    pub handler_count: usize,
    /// The SSA varnode feeding the indirect branch, if recoverable (the
    /// virtual program counter / opcode selector).
    pub opcode_var: Option<SsaVarnode>,
}

/// Recognise a VM-dispatch shape in `func`, returning the first matching
/// dispatcher in deterministic block order, or `None`.
pub fn recognize_vm_dispatch(func: &SsaFunction) -> Option<VmDispatchFinding> {
    let predecessors = build_predecessors(func);

    // `func.function.blocks` is a BTreeMap → deterministic iteration order.
    for (&bid, block) in &func.function.blocks {
        let terminator = block.insns.last().map(|i| i.op);
        let is_indirect = terminator == Some(IrOp::Branchind);
        let handler_count = block.successors.len();

        if !is_indirect && handler_count < MIN_HANDLERS {
            continue;
        }

        // Loop-head test: some predecessor `p` is dominated by `bid`, i.e. the
        // edge p→bid is a back-edge.
        let is_loop_head = predecessors
            .get(&bid)
            .is_some_and(|preds| preds.iter().any(|&p| dominates(func, bid, p)));
        if !is_loop_head {
            continue;
        }

        let opcode_var = if is_indirect {
            let last_idx = block.insns.len() - 1;
            func.var_map
                .get(&(bid, last_idx, VarnodeSlot::Input(0)))
                .copied()
        } else {
            None
        };

        return Some(VmDispatchFinding {
            dispatcher_block: bid,
            handler_count,
            opcode_var,
        });
    }
    None
}

/// Map each block to the set of blocks that list it as a successor.
fn build_predecessors(func: &SsaFunction) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut preds: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for &succ in &block.successors {
            preds.entry(succ).or_default().insert(bid);
        }
    }
    preds
}

/// True iff block `a` dominates block `b` (walking `b`'s immediate-dominator
/// chain upward reaches `a`). `a == b` counts (a self-loop is a back-edge).
fn dominates(func: &SsaFunction, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut cur = b;
    while let Some(parent) = func.dom_tree.idom(cur) {
        if parent == cur {
            return false; // reached root
        }
        if parent == a {
            return true;
        }
        cur = parent;
    }
    false
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    /// Build: entry → dispatcher(Branchind, N handlers); each handler loops
    /// back to the dispatcher.
    fn vm_func(handlers: usize) -> SsaFunction {
        let mut func = Function::new("vm", BlockId(0), 0x1000);

        // Entry block branches to the dispatcher.
        let mut entry = BasicBlock::new(BlockId(0));
        entry.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::ram(0x1004, 8)],
            0x1000,
        ));
        entry.successors.push(BlockId(1));
        func.insert_block(entry);

        // Dispatcher: indirect branch to `handlers` handler blocks.
        let mut disp = BasicBlock::new(BlockId(1));
        disp.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![Varnode::unique(0, 8)],
            0x1004,
        ));
        for h in 0..handlers {
            disp.successors.push(BlockId(2 + h as u32));
        }
        func.insert_block(disp);

        // Handlers: each loops back to the dispatcher.
        for h in 0..handlers {
            let bid = BlockId(2 + h as u32);
            let mut hb = BasicBlock::new(bid);
            hb.insns.push(IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::ram(0x1004, 8)],
                0x2000 + h as u64,
            ));
            hb.successors.push(BlockId(1));
            func.insert_block(hb);
        }

        build_ssa(func)
    }

    #[test]
    fn recognizes_dispatcher_loop() {
        let ssa = vm_func(8);
        let finding = recognize_vm_dispatch(&ssa).expect("should recognize VM dispatch");
        assert_eq!(finding.dispatcher_block, BlockId(1));
        assert_eq!(finding.handler_count, 8);
    }

    #[test]
    fn ignores_linear_function() {
        let mut func = Function::new("linear", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1000));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(recognize_vm_dispatch(&ssa).is_none());
    }

    #[test]
    fn ignores_indirect_branch_without_loop() {
        // Dispatcher-shaped indirect branch but no back-edge → not a VM loop.
        let mut func = Function::new("jt", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![Varnode::unique(0, 8)],
            0x1000,
        ));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(recognize_vm_dispatch(&ssa).is_none());
    }
}
