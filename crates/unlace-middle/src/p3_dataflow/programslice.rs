//! (unlace `ipa_slice`) Backward and forward program slices over the SSA def-use graph.
//!
//! A criterion names a value `varnode` at a point `op`: `op` reads it or defines it. The
//! backward slice is every op that transitively defines the value, following each defining
//! op's inputs (through copies, arithmetic and MULTIEQUAL joins). The forward slice is every
//! op that transitively reads the value, following each reader's output. A criterion that
//! `op` neither reads nor defines gives an empty slice. Both queries are read-only: they do
//! not change the function's ops, varnodes or printed text, and they stay inside one function.
//! A call's output ends a slice, since the callee's body is not part of this function.

use std::collections::{BTreeSet, VecDeque};

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// A slicing criterion: the value `varnode` at the point `op`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SliceCriterion {
    pub op: OpId,
    pub varnode: VarnodeId,
}

/// The ops and values of one slice. The criterion's op and value are always included when
/// the criterion is valid.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ProgramSlice {
    pub ops: BTreeSet<OpId>,
    pub vars: BTreeSet<VarnodeId>,
}

/// Whether `criterion.op` reads or defines `criterion.varnode`.
fn at_point(fd: &Funcdata, criterion: SliceCriterion) -> bool {
    let Some(op) = fd.obank().get(criterion.op) else {
        return false;
    };
    op.get_out() == Some(criterion.varnode)
        || (0..op.num_input()).any(|slot| op.get_in(slot) == Some(criterion.varnode))
}

/// Compute the backward slice: every op that affects the value at the criterion point.
pub fn backward_slice(fd: &Funcdata, criterion: SliceCriterion) -> ProgramSlice {
    let mut slice = ProgramSlice::default();
    if !at_point(fd, criterion) {
        return slice;
    }
    let mut work = VecDeque::new();
    slice.ops.insert(criterion.op);
    slice.vars.insert(criterion.varnode);
    work.push_back(criterion.varnode);
    while let Some(target) = work.pop_front() {
        let Some(def) = fd.vbank().get(target).and_then(|v| v.get_def()) else {
            continue;
        };
        let Some(op) = fd.obank().get(def) else {
            continue;
        };
        slice.ops.insert(def);
        for slot in 0..op.num_input() {
            if let Some(input) = op.get_in(slot)
                && slice.vars.insert(input)
            {
                work.push_back(input);
            }
        }
    }
    slice
}

/// Compute the forward slice: every op affected by the value at the criterion point.
pub fn forward_slice(fd: &Funcdata, criterion: SliceCriterion) -> ProgramSlice {
    let mut slice = ProgramSlice::default();
    if !at_point(fd, criterion) {
        return slice;
    }
    let mut work = VecDeque::new();
    slice.ops.insert(criterion.op);
    slice.vars.insert(criterion.varnode);
    work.push_back(criterion.varnode);
    while let Some(source) = work.pop_front() {
        let Some(vn) = fd.vbank().get(source) else {
            continue;
        };
        for reader in vn.descend_iter() {
            let Some(op) = fd.obank().get(reader) else {
                continue;
            };
            slice.ops.insert(reader);
            if let Some(out) = op.get_out()
                && slice.vars.insert(out)
            {
                work.push_back(out);
            }
        }
    }
    slice
}
