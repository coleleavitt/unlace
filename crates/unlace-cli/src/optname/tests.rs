use super::*;

#[test]
fn a_catalogued_name_from_either_table_is_accepted() {
    assert!(is_known("loweredswitch"), "a unlace stage-model option");
    assert!(is_known("setlanguage"), "an upstream OptionDatabase option");
    assert!(
        is_known("readonly"),
        "an upstream option whose element id lives elsewhere"
    );
    assert!(is_known("goabi"), "a load-time gate");
}

#[test]
fn every_name_the_engine_dispatches_on_is_accepted() {
    for name in all_names() {
        assert!(
            is_known(name),
            "{name} is dispatched on but rejected up front"
        );
    }
}

#[test]
fn an_unrecognized_name_is_rejected_and_names_itself() {
    let err = check("zzzznotanoption").unwrap_err();
    assert!(err.contains("zzzznotanoption"), "{err}");
    assert!(err.contains("Unknown option"), "{err}");
    assert!(!err.contains("did you mean"), "nothing is near it: {err}");
}

#[test]
fn the_reported_near_misses_each_suggest_the_real_name() {
    for miss in [
        "LOWEREDSWITCH",
        "lowered_switch",
        "loweredswitc",
        "lowered-switch",
    ] {
        let err = check(miss).unwrap_err();
        assert!(
            err.contains("did you mean \"loweredswitch\"?"),
            "{miss}: {err}"
        );
    }
}
