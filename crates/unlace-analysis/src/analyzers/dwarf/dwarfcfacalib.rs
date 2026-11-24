//! (original unlace `calibrate_dwarf_offsets`) Chooses the one per-function delta
//! that puts DWARF stack locals onto the stack slots the decompiler resolved.
//!
//! The candidate is the constant of a frame-pointer function's `.eh_frame` rule
//! `CFA = RBP + k`. A nonzero candidate is accepted only when the zero shift binds
//! none of the raw offsets and the shift binds at least
//! [`MIN_CORROBORATING_OFFSETS`]. Otherwise the delta is 0 and the raw offsets stand,
//! so leaf functions without a frame pointer are never shifted. This module reads no
//! binary: the caller supplies the raw offsets, the observed slot set and the candidate.

use std::collections::BTreeSet;

/// How many raw offsets a nonzero candidate must land on observed slots.
pub const MIN_CORROBORATING_OFFSETS: usize = 2;

/// How many of `raw_offsets`, shifted by `delta`, land on an observed slot.
/// An overflowing shift matches nothing.
pub fn corroborated_count(raw_offsets: &[i64], observed: &BTreeSet<i64>, delta: i64) -> usize {
    raw_offsets
        .iter()
        .filter(|&&off| {
            off.checked_add(delta)
                .is_some_and(|key| observed.contains(&key))
        })
        .count()
}

/// The delta to apply to `raw_offsets`: `cfi_delta` when it is nonzero, the zero shift
/// corroborates no raw offset, and the shift corroborates at least
/// [`MIN_CORROBORATING_OFFSETS`]; otherwise 0.
pub fn choose_delta(raw_offsets: &[i64], observed: &BTreeSet<i64>, cfi_delta: Option<i64>) -> i64 {
    let Some(delta) = cfi_delta.filter(|d| *d != 0) else {
        return 0;
    };
    if corroborated_count(raw_offsets, observed, 0) == 0
        && corroborated_count(raw_offsets, observed, delta) >= MIN_CORROBORATING_OFFSETS
    {
        delta
    } else {
        0
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn slots(values: &[i64]) -> BTreeSet<i64> {
        values.iter().copied().collect()
    }

    #[test]
    fn accepts_a_shift_that_corroborates_two_offsets() {
        let observed = slots(&[-16, -8]);
        assert_eq!(choose_delta(&[-32, -24], &observed, Some(16)), 16);
    }

    #[test]
    fn declines_a_shift_that_corroborates_one_offset() {
        let observed = slots(&[-16]);
        assert_eq!(choose_delta(&[-32, -24], &observed, Some(16)), 0);
    }

    #[test]
    fn keeps_raw_offsets_when_the_zero_shift_already_binds() {
        let observed = slots(&[-32, -16, -8]);
        assert_eq!(choose_delta(&[-32, -24], &observed, Some(16)), 0);
    }

    #[test]
    fn no_candidate_or_zero_candidate_is_no_shift() {
        let observed = slots(&[-16, -8]);
        assert_eq!(choose_delta(&[-32, -24], &observed, None), 0);
        assert_eq!(choose_delta(&[-16, -8], &observed, Some(0)), 0);
    }

    #[test]
    fn overflowing_shift_matches_nothing() {
        let observed = slots(&[i64::MIN]);
        assert_eq!(corroborated_count(&[i64::MAX], &observed, 1), 0);
    }
}
