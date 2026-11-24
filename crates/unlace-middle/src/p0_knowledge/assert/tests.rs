//! Unit tests for the typed assertion core (`assert.rs`).
//!
//! Covers the validation precedence, the strength resolution, the
//! minimal-rewind computation matrix (`stage-model.md` section 12), the
//! sub-stage -> store dispatch routing, and the `kassert list` rendering.

use super::*;
use crate::phases::UnlacePhase;
use unlace_base::error::UnlaceError;

// --- validate_assertion: precedence of the C++ IfaceParseError throws --------

#[test]
fn validate_bad_stage_code_first() {
    let err = validate_assertion("ZZ", "type-propagation", None).unwrap_err();
    match err {
        UnlaceError::Parse { explain } => {
            assert_eq!(explain, "Bad phase code (expecting P0..P9): ZZ");
        }
        other => panic!("expected Parse, got {other:?}"),
    }
}

#[test]
fn validate_missing_substage() {
    let err = validate_assertion("P5", "", None).unwrap_err();
    match err {
        UnlaceError::Parse { explain } => {
            assert_eq!(explain, "Missing sub-phase name (see `phase list`)");
        }
        other => panic!("expected Parse, got {other:?}"),
    }
}

#[test]
fn validate_unknown_substage() {
    let err = validate_assertion("P5", "not-real", None).unwrap_err();
    match err {
        UnlaceError::Parse { explain } => {
            assert_eq!(explain, "Unknown sub-phase: not-real (see `phase list`)");
        }
        other => panic!("expected Parse, got {other:?}"),
    }
}

#[test]
fn validate_wrong_stage_for_substage() {
    // type-propagation is S5; asserting it under S3 must fail with the C++ msg.
    let err = validate_assertion("P3", "type-propagation", None).unwrap_err();
    match err {
        UnlaceError::Parse { explain } => {
            assert_eq!(
                explain,
                "Sub-phase type-propagation belongs to phase P5, not P3"
            );
        }
        other => panic!("expected Parse, got {other:?}"),
    }
}

#[test]
fn validate_ok_uses_catalog_strength_by_default() {
    let v = validate_assertion("P5", "type-propagation", None).unwrap();
    assert_eq!(v.phase, UnlacePhase::P5);
    assert_eq!(v.subphase, "type-propagation");
    // type-propagation is HARD in the catalog -> requested defaults to HARD.
    assert_eq!(v.requested, UnlaceStrength::Hard);
    assert_eq!(v.applied, UnlaceStrength::Hard);
    assert_eq!(v.rewind, UnlacePhase::P5);
    assert_eq!(v.dispatch, Dispatch::Retype);
}

#[test]
fn validate_strength_override_replaces_requested_not_applied() {
    // Override hard->hint: requested becomes HINT, applied stays the catalog HARD.
    let v = validate_assertion("P5", "type-propagation", Some(UnlaceStrength::Hint)).unwrap();
    assert_eq!(v.requested, UnlaceStrength::Hint);
    assert_eq!(v.applied, UnlaceStrength::Hard);
}

// --- Minimal-rewind computation matrix (stage-model.md section 12) -----------

#[test]
fn minimal_rewind_matrix() {
    // (stage, substage, expected minimal rewind) transcribed from the catalog:
    // format->P9, force-goto->P7, typelock->P5, proto->P4, jumptable/flow/
    // context->P2, deadcode-delay->P3. The first row drives the legacy "S9"
    // input alias on purpose.
    let cases = [
        ("S9", "literal-format", UnlacePhase::P9), // legacy-alias input
        ("P9", "naming-policy", UnlacePhase::P9),
        ("P7", "edge-virtualization", UnlacePhase::P7),
        ("P5", "type-propagation", UnlacePhase::P5),
        ("P4", "prototype-source", UnlacePhase::P4),
        ("P2", "switch-model", UnlacePhase::P2),
        ("P2", "flow-classification", UnlacePhase::P2),
        ("P2", "decode-context", UnlacePhase::P2),
        ("P3", "dead-definition-gate", UnlacePhase::P3),
        // explicit-implied is the one cross-phase rewind: P6 decision -> P9 rewind.
        ("P6", "explicit-implied", UnlacePhase::P9),
        // external-refinement rewinds back to P0.
        ("P9", "external-refinement", UnlacePhase::P0),
        // pipeline-variant: a P0 decision whose rewind is S1.
        ("P0", "pipeline-variant", UnlacePhase::P1),
    ];
    for (stagecode, sub, expect) in cases {
        let v = validate_assertion(stagecode, sub, None)
            .unwrap_or_else(|e| panic!("{stagecode}/{sub} should validate: {e:?}"));
        assert_eq!(v.rewind, expect, "rewind mismatch for {stagecode}/{sub}");
    }
}

// --- Dispatch routing (the C++ if/else chain) --------------------------------

#[test]
fn dispatch_routes_each_store() {
    // (substage, latent?, expected dispatch) -- the C++ IfcUnlaceAssert::execute order.
    assert_eq!(
        Dispatch::for_substage("edge-virtualization", false),
        Dispatch::ForceGoto
    );
    assert_eq!(
        Dispatch::for_substage("dead-definition-gate", false),
        Dispatch::DeadcodeDelay
    );
    assert_eq!(
        Dispatch::for_substage("switch-model", false),
        Dispatch::MultistageJump
    );
    assert_eq!(
        Dispatch::for_substage("flow-classification", false),
        Dispatch::FlowOverride
    );
    assert_eq!(
        Dispatch::for_substage("prototype-source", false),
        Dispatch::ProtoLock
    );
    assert_eq!(
        Dispatch::for_substage("type-propagation", false),
        Dispatch::Retype
    );
    assert_eq!(
        Dispatch::for_substage("merge-aggressiveness", false),
        Dispatch::Isolate
    );
    assert_eq!(
        Dispatch::for_substage("naming-policy", false),
        Dispatch::Rename
    );
    assert_eq!(
        Dispatch::for_substage("comparison-canonicalization", false),
        Dispatch::Option("compareform")
    );
    assert_eq!(
        Dispatch::for_substage("pointer-notation", false),
        Dispatch::Option("arraynotation")
    );
    assert_eq!(
        Dispatch::for_substage("simplification-quiescence", false),
        Dispatch::Option("togglerule")
    );
    assert_eq!(
        Dispatch::for_substage("readability-rewrites", false),
        Dispatch::Option("analyzeforloops")
    );
    assert_eq!(
        Dispatch::for_substage("extrapop", false),
        Dispatch::Option("extrapop")
    );
    assert_eq!(
        Dispatch::for_substage("pipeline-variant", false),
        Dispatch::Option("setaction")
    );
}

#[test]
fn dispatch_latent_vs_unroutable() {
    // The C++ else branch distinguishes latent (no surface yet) from merely-
    // unroutable (use the native surface). assertion-admission is LATENT.
    assert_eq!(
        Dispatch::for_substage("assertion-admission", true),
        Dispatch::Latent
    );
    // A non-latent sub-stage with no kassert route is Unroutable.
    assert_eq!(
        Dispatch::for_substage("const-pointer", false),
        Dispatch::Unroutable
    );
}

#[test]
fn dispatch_decision_via_validate() {
    // The validated assertion carries the dispatch decision.
    let v = validate_assertion("P7", "edge-virtualization", None).unwrap();
    assert_eq!(v.dispatch, Dispatch::ForceGoto);
    let v = validate_assertion("P3", "comparison-canonicalization", None).unwrap();
    assert_eq!(v.dispatch, Dispatch::Option("compareform"));
    // assertion-admission (P0, latent) routes to Latent.
    let v = validate_assertion("P0", "assertion-admission", None).unwrap();
    assert_eq!(v.dispatch, Dispatch::Latent);
}

// --- AssertLog rendering (kassert list) --------------------------------------

#[test]
fn empty_log_message() {
    let log = AssertLog::new();
    assert!(log.is_empty());
    assert_eq!(
        log.render_list(),
        "No unlace assertions recorded this session\n"
    );
}

#[test]
fn list_renders_records_with_rewind() {
    let mut log = AssertLog::new();
    log.push(UnlaceAssertion {
        func_name: "main".to_string(),
        phase: UnlacePhase::P5,
        subphase: "type-propagation".to_string(),
        args: "x int".to_string(),
        strength: UnlaceStrength::Hard,
        applied: UnlaceStrength::Hard,
        rewind: UnlacePhase::P5,
    });
    let out = log.render_list();
    assert!(out.starts_with(
        "Recorded assertions (rewind scope is REPORTED per stage-model.md s12; \
         Ghidra-actual re-run remains whole-function):\n"
    ));
    assert!(out.contains("  0: [main] P5/type-propagation x int  strength=HARD  rewind->P5\n"));
}

#[test]
fn list_notes_hint_via_hard_mechanism() {
    let mut log = AssertLog::new();
    log.push(UnlaceAssertion {
        func_name: "(global)".to_string(),
        phase: UnlacePhase::P5,
        subphase: "type-propagation".to_string(),
        args: String::new(),
        strength: UnlaceStrength::Hint,
        applied: UnlaceStrength::Hard,
        rewind: UnlacePhase::P5,
    });
    let out = log.render_list();
    // strength=HINT but applied=HARD -> the "(applied via HARD mechanism)" note.
    assert!(out.contains("strength=HINT (applied via HARD mechanism)  rewind->P5\n"));
    // No args -> no trailing space before "  strength".
    assert!(out.contains("[(global)] P5/type-propagation  strength=HINT"));
}
