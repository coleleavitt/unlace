use super::*;

#[test]
fn normalization_preserves_half_open_membership() {
    let ranges = vec![
        (80, 90),
        (12, 16),
        (8, 12),
        (10, 15),
        (9, 10),
        (7, 7),
        (30, 20),
        (0, 1),
        (u64::MAX - 3, u64::MAX),
    ];
    let slots = ImportSlots::new(ranges.clone());
    for address in (0..100).chain([u64::MAX - 4, u64::MAX - 3, u64::MAX - 1, u64::MAX]) {
        assert_eq!(
            slots.contains(address),
            ranges.iter().any(|&(lo, hi)| lo <= address && address < hi),
            "{address:#x}"
        );
    }
    assert!(!ImportSlots::default().contains(0));
}

#[test]
fn large_positive_and_negative_queries_use_logarithmic_comparisons() {
    let slots = ImportSlots::new((0..10_000).map(|i| (4 * i + 1, 4 * i + 3)).collect());
    for i in 0..10_000 {
        for (address, expected) in [(4 * i, false), (4 * i + 2, true)] {
            COMPARISONS.with(|count| count.set(0));
            assert_eq!(slots.contains(address), expected);
            COMPARISONS.with(|count| {
                assert!(
                    (1..=16).contains(&count.get()),
                    "{} comparisons",
                    count.get()
                )
            });
        }
    }
}
