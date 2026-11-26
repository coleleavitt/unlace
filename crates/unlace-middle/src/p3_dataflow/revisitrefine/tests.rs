use super::*;

#[test]
fn spans_inside_one_partition_are_kept() {
    let parts = Partitions::new(&[2, 0, 1, 1, 4, 0, 0, 0]);
    assert_eq!(parts.cut_span(0, 2), None);
    assert_eq!(parts.cut_span(2, 1), None);
    assert_eq!(parts.cut_span(4, 4), None);
    assert_eq!(parts.cut_span(5, 2), None);
}

#[test]
fn a_cut_span_is_widened_to_the_partitions_it_touches() {
    let parts = Partitions::new(&[3, 0, 0, 5, 0, 0, 0, 0, 3, 0, 0, 5, 0, 0, 0, 0]);
    assert_eq!(
        parts.cut_span(0, 8),
        Some((0, 8)),
        "an 8-byte marker over a 3+5 split"
    );
    assert_eq!(parts.cut_span(8, 8), Some((8, 16)));
    assert_eq!(parts.cut_span(2, 4), Some((0, 8)));
    assert_eq!(parts.cut_span(3, 5), None);
}

#[test]
fn a_span_past_the_range_is_not_widened() {
    let parts = Partitions::new(&[2, 0, 1, 1]);
    assert_eq!(parts.cut_span(3, 2), None);
    assert_eq!(parts.cut_span(4, 1), None);
    assert_eq!(parts.cut_span(0, 0), None);
}

#[test]
fn a_partition_is_spanned_when_it_starts_inside_a_retired_span() {
    let spans = [(0, 8), (11, 16)];
    assert!(spanned(&spans, 0));
    assert!(spanned(&spans, 3));
    assert!(!spanned(&spans, 8));
    assert!(spanned(&spans, 11));
    assert!(!spanned(&spans, 16));
    assert!(!spanned(&[], 0));
}

#[test]
fn a_healed_one_three_junction_is_one_partition() {
    let parts = Partitions::new(&[4, 3, 0, 0, 4, 0, 0, 0]);
    assert_eq!(
        parts.cut_span(1, 3),
        None,
        "the stale size at the junction is not a cut"
    );
    assert_eq!(parts.cut_span(2, 4), Some((0, 8)));
}
