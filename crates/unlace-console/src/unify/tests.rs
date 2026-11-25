use super::*;

#[test]
fn unify_state_not_ported_reports_loss() {
    let err = UnifyState::not_ported::<()>().unwrap_err();
    assert_eq!(err.explain(), NOT_PORTED);
    assert!(err.is_lowlevel());
}

// --- w9-con-rulecompile-unify verifier (adversarial) ---

/// The fail-closed result must be independent of the monomorphized return
/// type `T`: every deferred call site, whatever it expected to receive,
/// gets the same LOSS error (never an accidental `Ok`).
#[test]
fn w9_con_rulecompile_unify_fail_closed_for_any_type() {
    // A handful of unrelated `T`s, including a non-Default-constructible one.
    assert!(UnifyState::not_ported::<()>().is_err());
    assert!(UnifyState::not_ported::<u64>().is_err());
    assert!(UnifyState::not_ported::<Vec<i64>>().is_err());
    assert!(UnifyState::not_ported::<fn() -> i32>().is_err());

    // and the error payload is identical regardless of T.
    let a = UnifyState::not_ported::<u8>().unwrap_err();
    let b = UnifyState::not_ported::<String>().unwrap_err();
    assert_eq!(a, b);
    assert_eq!(a.explain(), NOT_PORTED);
}

/// The C++ guarded surface fails closed via `throw` (LowlevelError /
/// IfaceExecutionError class). The port must be the `Lowlevel` variant,
/// not some other (recoverable) error kind, and its Display must surface
/// the recognizable message verbatim.
#[test]
fn w9_con_rulecompile_unify_is_lowlevel_variant_with_stable_message() {
    let err = UnifyState::not_ported::<()>().unwrap_err();
    assert!(
        err.is_lowlevel(),
        "deferred path must mirror throw LowlevelError"
    );
    // exact, recognizable message — pinned so a future careless edit to
    // the string is caught.
    assert_eq!(
        NOT_PORTED,
        "parse rule / rule-compiler not ported (deferred, no oracle exposure) — LOSS",
    );
    // Display (thiserror) surfaces the explain string verbatim.
    assert_eq!(err.to_string(), NOT_PORTED);
}
