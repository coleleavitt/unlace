use super::*;

#[test]
fn corroboration_or_a_large_shared_prologue() {
    // Adds info: accepted at any fingerprint count that cleared the first gate.
    assert!(accepts(true, 4));
    assert!(accepts(true, 0));
    // No corroboration: the prologue must be a *large* shared start.
    assert!(!accepts(false, 4));
    assert!(!accepts(false, UNCORROBORATED_THRESHOLD - 1));
    assert!(accepts(false, UNCORROBORATED_THRESHOLD));
    assert!(accepts(false, UNCORROBORATED_THRESHOLD + 1));
}

#[test]
fn threshold_is_the_upstream_literal() {
    // `AggressiveInstructionFinderAnalyzer.java:367` — `startCount < 50`.
    assert_eq!(UNCORROBORATED_THRESHOLD, 50);
    // And it is strictly above the first gate's threshold, which is the whole
    // point: the two tests are not the same test. At 4 this guard is inert.
    assert!(UNCORROBORATED_THRESHOLD > super::super::FINGERPRINT_THRESHOLD);
}
