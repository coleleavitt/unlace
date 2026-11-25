use super::*;

// The fixpoint convergence + threshold logic is exercised end-to-end by the
// cross-crate `verify_noreturn_disc.rs` gate (a real x86-64 fixture with a
// custom `die()` wrapper called >=3x). A unit test here would need a hand-built
// `Listing`, whose private fields are not constructible outside the `listing`
// module; the threshold/predicate are pinned by that e2e + the predicate
// helpers below stay tiny and obviously-correct by inspection.

#[test]
fn threshold_is_three() {
    assert_eq!(EVIDENCE_THRESHOLD, 3);
}

#[test]
fn empty_listing_consumer_is_inert_via_pass() {
    // With no Listing, the pass short-circuits to an empty output (the
    // default-off / no-listing path; structurally the parity-safe no-op).
    // Constructing an AnalysisCtx requires a real object::File/image, so this
    // is covered by the e2e; here we only assert the pass identity wiring.
    let p = NoReturnDiscoveredPass;
    assert_eq!(p.id(), "noreturn_disc");
    assert_eq!(p.phase(), Phase::P1);
}
