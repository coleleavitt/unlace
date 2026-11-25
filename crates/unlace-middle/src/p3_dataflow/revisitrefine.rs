//! Which previous-pass markers a refinement of a revisited range would cut.
//!
//! A range that grows on a later pass (an unaligned access now reaches across
//! two ranges heritaged separately) holds the MULTIEQUAL/INDIRECT markers of
//! the smaller ranges. `collect` sets them aside for `removeRevisitedMarkers`
//! and the refinement partitions the range from the reads, writes and inputs
//! alone, so a partition boundary can fall inside a marker. Each partition is
//! then collected on its own, and a marker that starts in one and ends in
//! another arrives as a write wider than its range. Upstream's
//! `Heritage::refinement` and renaming both assume every Varnode of a range
//! lies inside it: the partition's reads are linked to the whole marker, and a
//! second refinement of the partition indexes past its refinement array.
//!
//! A retired return-form COPY leaves no read behind, so each partition a
//! retired marker spans is flagged to be guarded again: skipping one with no
//! reads would leave a global's bytes without a return COPY and its store dead.

use unlace_base::types::int4;

/// The partition holding each byte of a refined range.
#[doc(hidden)]
pub struct Partitions {
    starts: Vec<usize>,
    ends: Vec<usize>,
}

impl Partitions {
    /// `refine` holds each partition's size at its first byte, as
    /// `Heritage::refinement` leaves it.
    #[doc(hidden)]
    pub fn new(refine: &[int4]) -> Partitions {
        let mut starts = vec![0; refine.len()];
        let mut ends = vec![0; refine.len()];
        let mut pos = 0;
        while pos < refine.len() {
            let end = (pos + refine[pos].max(1) as usize).min(refine.len());
            starts[pos..end].fill(pos);
            ends[pos..end].fill(end);
            pos = end;
        }
        Partitions { starts, ends }
    }

    /// The partitions `[lo, hi)` that `[start, start + size)` spans when it
    /// crosses a partition boundary, or `None` when one partition holds it.
    #[doc(hidden)]
    pub fn cut_span(&self, start: usize, size: usize) -> Option<(usize, usize)> {
        let last = (start + size).checked_sub(1)?;
        let (&end, &hi) = (self.ends.get(start)?, self.ends.get(last)?);
        (end < start + size).then(|| (self.starts[start], hi))
    }
}

/// Does the partition starting at `start` lie in one of the retired `spans`?
#[doc(hidden)]
pub fn spanned(spans: &[(usize, usize)], start: usize) -> bool {
    spans.iter().any(|&(lo, hi)| lo <= start && start < hi)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.revisitrefine_spanned = Some(spanned);
}

#[cfg(test)]
mod tests;
