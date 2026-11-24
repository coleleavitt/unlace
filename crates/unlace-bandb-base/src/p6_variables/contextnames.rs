//! (unlace `contextnames`) Name loop counters and the local a function returns.
//!
//! Two shapes say what a numbered local is without any declaration:
//!
//! - **A loop counter.** An integer local that a loop head's phi joins from
//!   outside the loop with an initial value and, on every back edge, with
//!   itself plus or minus one. It is named by how deep the loop is
//!   nested: `i` for an outermost loop, then `j`, `k`, `m`, `n`. A back edge is
//!   an edge into a block that dominates its source, and a loop's body is
//!   every block that reaches that source without passing the head.
//! - **The result.** The local every `return` of a value returns, where any
//!   other `return` returns a constant: `result`.
//!
//! - **A loop bound.** The local an integer compare pits against a loop
//!   counter (`i < len`, `i != n`), its counter side followed through copies,
//!   casts, extensions and integer arithmetic. It is named `len`.
//! - **An array base.** The pointer local a load or store indexes by a
//!   counter-derived value, through a `PTRADD` or an `INT_ADD` (`buf[i]`). It
//!   is named `buf`.
//!
//! All four are evidence for [`crate::libcnames`], which owns the naming: a
//! local keeps its number for directives and replays, a name that clashes
//! takes `_2`, `_3`, ... in the order of the evidence, and nothing repeats a
//! name another variable, the scope or a callee holds. Only the result of a
//! library call outranks a loop counter (`len = strlen(s)` counted down stays
//! `len`). A loop bound and an array base rank below the result, and a local's
//! type is the weakest evidence of all.

use std::collections::{BTreeMap, BTreeSet};

use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, HighVariableId, VarnodeId};
use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::libcnames::{BASE, BOUND, Evidence, LOOP, RESULT, folded_from, local_of};

/// Loop counter names by nesting depth, outermost first.
const LOOP_NAMES: [&str; 5] = ["i", "j", "k", "m", "n"];

/// How far a back-edge value is followed through copies and casts to its step.
const STEP_DEPTH: usize = 4;

/// Add the loop-counter and result evidence of `fd` to `found`.
#[doc(hidden)]
pub fn evidence(fd: &mut Funcdata, found: &mut BTreeMap<HighVariableId, Vec<Evidence>>) {
    let counters = loop_counters(fd, found);
    result(fd, found);
    bounds(fd, &counters, found);
    bases(fd, &counters, found);
}

/// Every loop head, with the blocks of its loop.
fn loops(fd: &Funcdata) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let graph = fd.bblocks_ref();
    let mut loops: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
    for i in 0..fd.bblocks_get_size() {
        let head = fd.bblocks_get_block(i);
        let hb = graph.block(head);
        for k in 0..hb.size_in() {
            let tail = hb.get_in(k);
            if !graph.dominates(head, Some(tail)) {
                continue;
            }
            let body = loops.entry(head).or_insert_with(|| BTreeSet::from([head]));
            let mut stack = vec![tail];
            while let Some(b) = stack.pop() {
                if body.insert(b) {
                    let fb = graph.block(b);
                    stack.extend((0..fb.size_in()).map(|j| fb.get_in(j)));
                }
            }
        }
    }
    loops
}

fn loop_counters(
    fd: &mut Funcdata,
    found: &mut BTreeMap<HighVariableId, Vec<Evidence>>,
) -> BTreeSet<HighVariableId> {
    let loops = loops(fd);
    let mut counters = BTreeSet::new();
    for (head, body) in &loops {
        let depth = loops.values().filter(|b| b.contains(head)).count();
        let Some(&name) = LOOP_NAMES.get(depth.saturating_sub(1)) else {
            continue;
        };
        for op in fd.bb_ops(*head) {
            let Some(phi) = fd
                .obank()
                .get(op)
                .filter(|o| o.code() == OpCode::CPUI_MULTIEQUAL)
            else {
                continue;
            };
            let at = (phi.get_addr().clone(), phi.get_time());
            let Some(out) = phi.get_out() else { continue };
            let inputs: Vec<Option<VarnodeId>> =
                (0..phi.num_input()).map(|k| phi.get_in(k)).collect();
            let integer = fd.vbank().get(out).is_some_and(|v| {
                matches!(
                    v.get_type().get_metatype(),
                    type_metatype::TYPE_INT | type_metatype::TYPE_UINT
                )
            });
            if !integer {
                continue;
            }
            let Some(high) = local_of(fd, out) else {
                continue;
            };
            let hb = fd.bblocks_ref().block(*head);
            let (mut entered, mut stepped) = (false, true);
            for (k, input) in inputs.iter().enumerate() {
                let Some(input) = *input else {
                    stepped = false;
                    break;
                };
                if body.contains(&hb.get_in(k as i32)) {
                    stepped &= steps(fd, input, high);
                } else {
                    entered = true;
                }
            }
            if entered && stepped {
                counters.insert(high);
                found
                    .entry(high)
                    .or_default()
                    .push((LOOP, at, -1, name.into(), true));
            }
        }
    }
    counters
}

/// Is `vn` the local `high` plus or minus one, through copies and casts?
fn steps(fd: &Funcdata, mut vn: VarnodeId, high: HighVariableId) -> bool {
    for _ in 0..STEP_DEPTH {
        let Some(op) = fd
            .vbank()
            .get(vn)
            .and_then(|v| v.get_def())
            .and_then(|d| fd.obank().get(d))
        else {
            return false;
        };
        let one = |slot: i32| {
            op.get_in(slot)
                .and_then(|v| fd.vbank().get(v))
                .is_some_and(|v| {
                    let mask = if v.get_size() >= 8 {
                        u64::MAX
                    } else {
                        (1u64 << (8 * v.get_size())) - 1
                    };
                    v.is_constant() && (v.get_offset() == 1 || v.get_offset() == mask)
                })
        };
        let counter = |slot: i32| {
            op.get_in(slot)
                .and_then(|v| fd.vbank().get(v))
                .and_then(|v| v.get_high())
                == Some(high)
        };
        match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => match op.get_in(0) {
                Some(input) => vn = input,
                None => return false,
            },
            OpCode::CPUI_INT_ADD => return (counter(0) && one(1)) || (counter(1) && one(0)),
            OpCode::CPUI_INT_SUB => return counter(0) && one(1),
            _ => return false,
        }
    }
    false
}

/// Does `vn` carry a loop counter's value: the counter's own local, or a value
/// computed from it through copies, casts, extensions and integer arithmetic.
fn reaches_counter(
    fd: &Funcdata,
    vn: VarnodeId,
    counters: &BTreeSet<HighVariableId>,
    depth: usize,
) -> bool {
    if depth >= STEP_DEPTH {
        return false;
    }
    let Some(v) = fd.vbank().get(vn) else {
        return false;
    };
    if v.get_high().is_some_and(|h| counters.contains(&h)) {
        return true;
    }
    let Some(op) = v.get_def().and_then(|d| fd.obank().get(d)) else {
        return false;
    };
    let (a, b) = (op.get_in(0), op.get_in(1));
    match op.code() {
        OpCode::CPUI_COPY | OpCode::CPUI_CAST | OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT => {
            a.is_some_and(|input| reaches_counter(fd, input, counters, depth + 1))
        }
        OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_SUB
        | OpCode::CPUI_INT_MULT
        | OpCode::CPUI_INT_LEFT => [a, b]
            .into_iter()
            .flatten()
            .any(|input| reaches_counter(fd, input, counters, depth + 1)),
        _ => false,
    }
}

/// The blocks of `fd`, in order.
fn block_ids(fd: &Funcdata) -> Vec<BlockId> {
    (0..fd.bblocks_get_size())
        .map(|i| fd.bblocks_get_block(i))
        .collect()
}

/// The local an integer compare pits against a loop counter is a loop bound: `len` in `i < len`.
fn bounds(
    fd: &mut Funcdata,
    counters: &BTreeSet<HighVariableId>,
    found: &mut BTreeMap<HighVariableId, Vec<Evidence>>,
) {
    for block in block_ids(fd) {
        for op in fd.bb_ops(block) {
            let Some(cmp) = fd.obank().get(op).filter(|o| {
                matches!(
                    o.code(),
                    OpCode::CPUI_INT_LESS
                        | OpCode::CPUI_INT_SLESS
                        | OpCode::CPUI_INT_LESSEQUAL
                        | OpCode::CPUI_INT_SLESSEQUAL
                        | OpCode::CPUI_INT_NOTEQUAL
                )
            }) else {
                continue;
            };
            let at = (cmp.get_addr().clone(), cmp.get_time());
            let (Some(a), Some(b)) = (cmp.get_in(0), cmp.get_in(1)) else {
                continue;
            };
            for (side, other) in [(a, b), (b, a)] {
                if !reaches_counter(fd, side, counters, 0) {
                    continue;
                }
                let other = folded_from(fd, other);
                if fd.vbank().get(other).is_some_and(|v| v.is_constant()) {
                    continue;
                }
                let Some(high) = local_of(fd, other) else {
                    continue;
                };
                if !counters.contains(&high) {
                    found.entry(high).or_default().push((
                        BOUND,
                        at.clone(),
                        -1,
                        "len".into(),
                        true,
                    ));
                }
            }
        }
    }
}

/// A pointer local that a load or store indexes by a loop counter is an array base: `buf` in `buf[i]`.
fn bases(
    fd: &mut Funcdata,
    counters: &BTreeSet<HighVariableId>,
    found: &mut BTreeMap<HighVariableId, Vec<Evidence>>,
) {
    for block in block_ids(fd) {
        for op in fd.bb_ops(block) {
            let Some(mem) = fd
                .obank()
                .get(op)
                .filter(|o| matches!(o.code(), OpCode::CPUI_LOAD | OpCode::CPUI_STORE))
            else {
                continue;
            };
            let at = (mem.get_addr().clone(), mem.get_time());
            let Some(address) = mem.get_in(1) else {
                continue;
            };
            let Some(def) = fd
                .vbank()
                .get(address)
                .and_then(|v| v.get_def())
                .and_then(|d| fd.obank().get(d))
            else {
                continue;
            };
            let (a, b) = (def.get_in(0), def.get_in(1));
            let pairs: Vec<(VarnodeId, VarnodeId)> = match def.code() {
                OpCode::CPUI_PTRADD => a.zip(b).into_iter().collect(),
                OpCode::CPUI_INT_ADD => a.zip(b).into_iter().chain(b.zip(a)).collect(),
                _ => continue,
            };
            for (base, index) in pairs {
                if !reaches_counter(fd, index, counters, 0) {
                    continue;
                }
                let base = folded_from(fd, base);
                if !fd
                    .vbank()
                    .get(base)
                    .is_some_and(|v| v.get_type().get_metatype() == type_metatype::TYPE_PTR)
                {
                    continue;
                }
                let Some(high) = local_of(fd, base) else {
                    continue;
                };
                if !counters.contains(&high) {
                    found
                        .entry(high)
                        .or_default()
                        .push((BASE, at.clone(), -1, "buf".into(), true));
                }
            }
        }
    }
}

fn result(fd: &mut Funcdata, found: &mut BTreeMap<HighVariableId, Vec<Evidence>>) {
    let mut returned: Option<(HighVariableId, Evidence)> = None;
    let blocks: Vec<BlockId> = (0..fd.bblocks_get_size())
        .map(|i| fd.bblocks_get_block(i))
        .collect();
    for block in blocks {
        let Some(op) = fd.bb_op_tail(block) else {
            continue;
        };
        let Some(ret) = fd
            .obank()
            .get(op)
            .filter(|o| o.code() == OpCode::CPUI_RETURN)
        else {
            continue;
        };
        let at = (ret.get_addr().clone(), ret.get_time());
        let Some(value) = ret.get_in(1) else { continue };
        let value = folded_from(fd, value);
        if fd.vbank().get(value).is_some_and(|v| v.is_constant()) {
            continue;
        }
        let Some(high) = local_of(fd, value) else {
            return;
        };
        match &returned {
            Some((h, _)) if *h != high => return,
            Some(_) => {}
            None => returned = Some((high, (RESULT, at, -1, "result".into(), true))),
        }
    }
    if let Some((high, e)) = returned {
        found.entry(high).or_default().push(e);
    }
}

crate::unlace_flag!(
    /// (unlace `contextnames`) Name loop counters and the returned local.
    /// See [`crate::contextnames`].
    ContextNames,
    "contextnames",
    "loop-counter and result local names",
    unset: false,
    shipped: false
);
