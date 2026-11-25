//! (unlace) The lane traces `ActionLaneDivide` may skip when it rescans a
//! storage location after a split.
//!
//! Upstream restarts the scan of a laned storage location from its first
//! Varnode after every successful split, so every Varnode that failed before is
//! traced again; a function with a thousand splits traces each failing Varnode
//! a thousand times. A failed trace changes nothing, and it reads only the
//! Varnodes it reached and the ops that define and read them. A split rewrites
//! only the Varnodes its own trace reached and those ops. So a failed trace
//! that read none of the Varnodes a later split's trace read or touched fails
//! again in the same way, and is not traced again.

use crate::context::VarnodeId;
use crate::fasthash::{FxHashMap, FxHashSet};
use crate::funcdata::Funcdata;

/// The Varnodes a trace from `root` that reached `reached` read: `root`,
/// every Varnode reached, and every input and output of the ops defining and
/// reading them.
#[doc(hidden)]
pub fn footprint(
    data: &Funcdata,
    root: VarnodeId,
    reached: impl IntoIterator<Item = VarnodeId>,
    out: &mut FxHashSet<VarnodeId>,
) {
    for vn in std::iter::once(root).chain(reached) {
        if !out.insert(vn) {
            continue;
        }
        let Some(v) = data.vbank().get(vn) else {
            continue;
        };
        for op in v.get_def().into_iter().chain(v.descend_iter()) {
            let Some(o) = data.obank().get(op) else {
                continue;
            };
            out.extend(o.get_out());
            out.extend((0..o.num_input()).filter_map(|i| o.get_in(i)));
        }
    }
}

/// The failed traces of one storage location in one mode, and the Varnodes
/// each one reached, kept in one buffer. A failure's footprint is built only
/// when a split follows it: nothing changes the IR between splits, so it is the
/// footprint the trace read.
#[derive(Default)]
#[doc(hidden)]
pub struct FailedTraces {
    failed: FxHashSet<VarnodeId>,
    pending: Vec<(VarnodeId, usize, usize)>,
    reached: Vec<VarnodeId>,
    readers: FxHashMap<VarnodeId, Vec<VarnodeId>>,
}

impl FailedTraces {
    /// Would a trace from `root` fail as it did before?
    #[doc(hidden)]
    pub fn holds(&self, root: VarnodeId) -> bool {
        self.failed.contains(&root)
    }

    /// Where the Varnodes the next root's traces reach start.
    #[doc(hidden)]
    pub fn start(&self) -> usize {
        self.reached.len()
    }

    /// A trace reached `reached`.
    #[doc(hidden)]
    pub fn reach(&mut self, reached: impl IntoIterator<Item = VarnodeId>) {
        self.reached.extend(reached);
    }

    /// Every trace from `root` failed, reaching what was recorded since `start`.
    #[doc(hidden)]
    pub fn fail(&mut self, root: VarnodeId, start: usize) {
        self.failed.insert(root);
        self.pending.push((root, start, self.reached.len()));
    }

    /// A trace from `root` reaching what was recorded since `start` is about to
    /// be applied as a split. Index the failures since the last split by
    /// `footprint_of(root, reached)`, then forget every failure that read a
    /// Varnode in the split's own footprint.
    #[doc(hidden)]
    pub fn split(
        &mut self,
        root: VarnodeId,
        start: usize,
        mut footprint_of: impl FnMut(VarnodeId, &[VarnodeId]) -> FxHashSet<VarnodeId>,
    ) {
        if !self.failed.is_empty() {
            let split = footprint_of(root, &self.reached[start..]);
            for (failure, a, b) in std::mem::take(&mut self.pending) {
                for vn in footprint_of(failure, &self.reached[a..b]) {
                    self.readers.entry(vn).or_default().push(failure);
                }
            }
            for vn in &split {
                if let Some(roots) = self.readers.remove(vn) {
                    for failure in roots {
                        self.failed.remove(&failure);
                    }
                }
            }
        }
        self.pending.clear();
        self.reached.clear();
    }
}

#[cfg(test)]
mod tests;
