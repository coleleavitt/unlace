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
