use super::*;

#[test]
fn aligned_slide_snaps_to_the_next_multiple_of_four() {
    // From an aligned start the slide is a full stride.
    assert_eq!(next_probe_after(0x1000, u64::MAX), 0x1004);
    // From an interior byte it snaps up to the next boundary, never past it.
    assert_eq!(next_probe_after(0x1001, u64::MAX), 0x1004);
    assert_eq!(next_probe_after(0x1002, u64::MAX), 0x1004);
    assert_eq!(next_probe_after(0x1003, u64::MAX), 0x1004);
    // Clamped at the hole end so the next hole's first byte is never skipped.
    assert_eq!(next_probe_after(0x1001, 0x1002), 0x1002);
    assert_eq!(next_probe_after(0x1001, 0x1003), 0x1003);
    // Always strictly forward (no cursor stall).
    for a in 0x1000u64..0x1010 {
        assert!(next_probe_after(a, u64::MAX) > a);
        assert!(next_probe_after(a, a + 1) > a);
    }
}

#[test]
fn slide_alignment_is_four_not_sixteen() {
    // 16-byte alignment kills 91% of the bad Cortex-M entries but 80% of the
    // real ones; the measured choice is 4 on every architecture.
    assert_eq!(SLIDE_ALIGN, 4);
}
