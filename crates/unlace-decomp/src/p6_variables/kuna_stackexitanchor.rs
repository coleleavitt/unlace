//! (kuna) `stackexitanchor` — the epilogue settles the purge of the last unknown
//! call on each path (P6 stack-pointer flow).
//!
//! `StackSolver` runs where the prototype model leaves a call's extrapop
//! unknown. It propagates the exact equations from the input stack pointer and
//! fills every unknown purge with a guess, first come first served. Nothing tied
//! the function's own exit to its entry: the return instruction pops the return
//! address the caller pushed, so the stack pointer entering it equals the input
//! one, and the stack adjustments between the last call and the return are
//! constants. By the time the solver runs, dead-code elimination has removed
//! those epilogue adjustments (nothing reads the stack pointer after them), so
//! the relation is read before heritage, while every raw stack-pointer write is
//! still there.
//!
//! [`record`] walks back from each `RETURN` over the ops of its block and, at a
//! block start, over every predecessor, summing the constant adds to the stack
//! pointer until it reaches a call. The stack pointer after that call is then
//! minus that sum. A path that writes the stack pointer any other way
//! (`mov esp,ebp`, `leave`, an `and` alignment) records nothing. The solver
//! applies these anchors after the exact equations and before any guess, so an
//! anchor never overrides a value the exact equations fixed.

use std::collections::{HashMap, HashSet};

use unlace_base::address::Address;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId};
use crate::funcdata::Funcdata;

/// Record `(call, value)` for the last call before each return on every path:
/// the stack pointer after `call` equals the input one plus `value`.
pub fn record(data: &mut Funcdata, sb_addr: &Address) {
    if !data
        .get_arch()
        .kuna_options
        .get::<crate::kuna_stackexitanchor::StackExitAnchor>()
        .0
    {
        return;
    }
    let mut last: HashMap<BlockId, (u32, OpId)> = HashMap::new();
    let mut returns = Vec::new();
    for op in data.obank().iter_alive() {
        let Some(o) = data.obank().get(op) else {
            continue;
        };
        if let Some(b) = o.get_parent() {
            let order = o.get_seq_num().get_order();
            if last.get(&b).is_none_or(|&(prev, _)| order > prev) {
                last.insert(b, (order, op));
            }
        }
        if o.code() == OpCode::CPUI_RETURN {
            returns.push(op);
        }
    }
    let mut anchors: Vec<(OpId, int4)> = Vec::new();
    for ret in returns {
        let Some(r) = data.obank().get(ret) else {
            continue;
        };
        let ret_at = r.get_addr().clone();
        let Some(block) = r.get_parent() else {
            continue;
        };
        let mut seen: HashSet<BlockId> = HashSet::new();
        let mut todo: Vec<(Option<OpId>, BlockId, i64)> = vec![(r.basic_neighbours().0, block, 0)];
        while let Some((mut cur, block, mut delta)) = todo.pop() {
            loop {
                let Some(op) = cur else {
                    let graph = data.bblocks_ref();
                    let blk = graph.block(block);
                    for k in 0..blk.size_in() {
                        let pred = blk.get_in(k);
                        if seen.insert(pred) {
                            if let Some(&(_, tail)) = last.get(&pred) {
                                todo.push((Some(tail), pred, delta));
                            }
                        }
                    }
                    break;
                };
                let Some(o) = data.obank().get(op) else { break };
                if o.is_call() {
                    if let Ok(value) = int4::try_from(-delta) {
                        anchors.push((op, value));
                    }
                    break;
                }
                let writes_sp = o
                    .get_out()
                    .and_then(|out| data.vbank().get(out))
                    .is_some_and(|v| v.get_addr() == sb_addr);
                if writes_sp && *o.get_addr() != ret_at {
                    match sp_add(data, o, sb_addr) {
                        Some(c) => delta += c,
                        None => break,
                    }
                }
                cur = o.basic_neighbours().0;
            }
        }
    }
    anchors.sort_unstable();
    anchors.dedup();
    data.kuna_set_stack_exit_anchors(anchors);
}

/// The signed constant `op` adds to the stack pointer, when it is
/// `sp = sp + c` or `sp = sp - c`.
fn sp_add(data: &Funcdata, op: &crate::op::PcodeOp, sb_addr: &Address) -> Option<i64> {
    let is_sp = |vn| {
        data.vbank()
            .get(vn)
            .is_some_and(|v| v.get_addr() == sb_addr)
    };
    let constant = |vn| {
        data.vbank().get(vn).filter(|v| v.is_constant()).map(|v| {
            let size = v.get_size().clamp(1, 8) as u32;
            let shift = 64 - 8 * size;
            ((v.get_offset() << shift) as i64) >> shift
        })
    };
    let (a, b) = (op.get_in(0)?, op.get_in(1)?);
    match op.code() {
        OpCode::CPUI_INT_ADD if is_sp(a) => constant(b),
        OpCode::CPUI_INT_ADD if is_sp(b) => constant(a),
        OpCode::CPUI_INT_SUB if is_sp(a) => constant(b).map(|c| -c),
        _ => None,
    }
}

crate::kuna_flag!(
    /// (kuna) Tie each return's stack pointer to the entry one in the stack
    /// solver (option `stackexitanchor`).
    StackExitAnchor,
    "stackexitanchor",
    "Stack-solver return anchor",
    unset: false,
    shipped: true
);
