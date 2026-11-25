use super::*;

#[test]
fn rule_compile_not_ported_reports_loss() {
    let err = RuleCompile::not_ported::<()>().unwrap_err();
    assert_eq!(err.explain(), NOT_PORTED);
    assert!(err.is_lowlevel());
}

// --- w9-con-rulecompile-unify verifier (adversarial) ---

/// `RuleCompile` and `UnifyState` are two halves of the same deferred
/// subsystem (rulecompile.cc builds a unify ConstraintGroup); the doc
/// claims a single, recognizable "unimplemented" message. Verify both
/// entry points yield byte-identical errors, not two drifting strings.
#[test]
fn w9_con_rulecompile_unify_shared_loss_message() {
    let from_rulecompile = RuleCompile::not_ported::<()>().unwrap_err();
    let from_unify = crate::unify::UnifyState::not_ported::<()>().unwrap_err();
    assert_eq!(from_rulecompile, from_unify);
    assert_eq!(from_rulecompile.explain(), NOT_PORTED);
}
