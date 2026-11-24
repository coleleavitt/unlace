//! Control-flow deflattening, detection half (OLLVM and Themida dispatchers).
//!
//! A flattened function routes every block through one dispatcher: a loop head
//! whose compare chain tests a state variable against constants (each link an
//! `INT_EQUAL` or `INT_NOTEQUAL` feeding a `CBRANCH`), and whose case blocks
//! loop back to it. [`detect_flattened_dispatch`] finds that shape and maps
//! each state constant to its case block by walking the chain along the
//! conditional branches' true and false edges (out 1 and out 0). It edits
//! nothing. The CFG rewrite that would remove the dispatcher waits on this map
//! being proven on real samples, and on a run that measures it.

use std::collections::{BTreeMap, BTreeSet};

use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, VarnodeId};
use crate::funcdata::Funcdata;

/// A detected dispatcher: its head block, the state variable it tests, the
/// case block for each state constant, and the block the chain falls to once
/// no compare matches (the default).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlattenedDispatch {
    /// The loop head that starts the compare chain (the highest in-degree link).
    pub dispatcher: BlockId,
    /// The non-constant operand every compare in the chain tests.
    pub state_var: VarnodeId,
    /// The case block each state constant selects.
    pub state_to_case: BTreeMap<uintb, BlockId>,
    /// The block the chain falls to when no state constant matches.
    pub default: BlockId,
}

/// One compare-and-branch link of a dispatch chain.
struct CompareLink {
    state: VarnodeId,
    value: uintb,
    /// `true` for `INT_EQUAL`: the true edge is the state-matching case.
    equal: bool,
    true_out: BlockId,
    false_out: BlockId,
}

/// Detect a flattened dispatcher in `data`.
///
/// The dispatcher is the head of a compare chain (a block with two out edges
/// whose tail is a `CBRANCH` on an `INT_EQUAL`/`INT_NOTEQUAL` of the state
/// against a constant) with at least two incoming edges, the highest in-degree
/// winning and the lowest block index breaking ties. The chain is followed
/// through each link's non-matching edge; the chain ends at the first block
/// that is not a compare. Returns `None` when the chain is ambiguous: a link
/// on another compare, a state value listed twice, two state variables, a case
/// that re-enters the chain, or fewer than two state values. Every case block
/// must either return (no out edges) or loop back to the dispatcher, and at
/// least one must loop back.
pub fn detect_flattened_dispatch(data: &Funcdata) -> Option<FlattenedDispatch> {
    let bblocks = data.bblocks_ref();
    let mut head: Option<(BlockId, i32)> = None;
    for i in 0..data.bblocks_get_size() {
        let bl = data.bblocks_get_block(i);
        let in_degree = bblocks.block(bl).size_in();
        if in_degree < 2 || compare_link(data, bl).is_none() {
            continue;
        }
        if head.is_none_or(|(_, deg)| in_degree > deg) {
            head = Some((bl, in_degree));
        }
    }
    let (dispatcher, _) = head?;

    let mut state_var: Option<VarnodeId> = None;
    let mut state_to_case: BTreeMap<uintb, BlockId> = BTreeMap::new();
    let mut chain: BTreeSet<BlockId> = BTreeSet::new();
    let mut cur = dispatcher;
    let default = loop {
        if !chain.insert(cur) {
            return None;
        }
        let Some(link) = compare_link(data, cur) else {
            if ends_in_cbranch(data, cur) {
                return None;
            }
            break cur;
        };
        match state_var {
            None => state_var = Some(link.state),
            Some(s) if s != link.state => return None,
            Some(_) => {}
        }
        let (case, next) = if link.equal {
            (link.true_out, link.false_out)
        } else {
            (link.false_out, link.true_out)
        };
        if state_to_case.insert(link.value, case).is_some() {
            return None;
        }
        cur = next;
    };

    let state_var = state_var?;
    if state_to_case.len() < 2 {
        return None;
    }

    let mut loops_back = false;
    for &case in state_to_case.values() {
        if chain.contains(&case) {
            return None;
        }
        let case_block = bblocks.block(case);
        if case_block.size_out() == 0 {
            continue;
        }
        if (0..case_block.size_out()).any(|i| case_block.get_out(i) == dispatcher) {
            loops_back = true;
        } else {
            return None;
        }
    }
    if !loops_back {
        return None;
    }

    Some(FlattenedDispatch {
        dispatcher,
        state_var,
        state_to_case,
        default,
    })
}

/// The compare link that ends block `bl`, when its tail is a `CBRANCH` on an
/// `INT_EQUAL` or `INT_NOTEQUAL` of one non-constant varnode against a constant.
fn compare_link(data: &Funcdata, bl: BlockId) -> Option<CompareLink> {
    let bblocks = data.bblocks_ref();
    if bblocks.block(bl).size_out() != 2 {
        return None;
    }
    let tail = data.bb_op_tail(bl)?;
    let cbranch = data.obank().get(tail)?;
    if cbranch.code() != OpCode::CPUI_CBRANCH {
        return None;
    }
    let cond = cbranch.get_in(1)?;
    let cmp_op = data.vbank().get(cond)?.get_def()?;
    let cmp = data.obank().get(cmp_op)?;
    let equal = match cmp.code() {
        OpCode::CPUI_INT_EQUAL => true,
        OpCode::CPUI_INT_NOTEQUAL => false,
        _ => return None,
    };
    let a = cmp.get_in(0)?;
    let b = cmp.get_in(1)?;
    let va = data.vbank().get(a)?;
    let vb = data.vbank().get(b)?;
    let (state, value) = match (va.is_constant(), vb.is_constant()) {
        (false, true) => (a, vb.get_offset()),
        (true, false) => (b, va.get_offset()),
        _ => return None,
    };
    Some(CompareLink {
        state,
        value,
        equal,
        true_out: bblocks.block(bl).get_true_out(),
        false_out: bblocks.block(bl).get_false_out(),
    })
}

/// Does block `bl` end in a `CBRANCH`, whatever it compares?
fn ends_in_cbranch(data: &Funcdata, bl: BlockId) -> bool {
    data.bb_op_tail(bl)
        .and_then(|op| data.obank().get(op))
        .is_some_and(|op| op.code() == OpCode::CPUI_CBRANCH)
}
