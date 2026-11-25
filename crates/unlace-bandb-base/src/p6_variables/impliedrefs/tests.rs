use super::*;

#[test]
fn the_shipped_value_parses_to_the_upstream_constant() {
    // `infra/architecture/tests.rs::reset_defaults_internal_matches_cpp`
    // pins the live fields at 2; these are the catalog defaults for them.
    assert_eq!(OptionImpliedRefs.apply("2").expect("2 parses").0, 2);
    assert_eq!(OptionTermDup.apply("2").expect("2 parses").0, 2);
}

#[test]
fn a_higher_bound_parses_and_confirms() {
    let (val, msg) = OptionImpliedRefs.apply("4").expect("4 parses");
    assert_eq!(val, 4);
    assert!(msg.contains('4'), "message names the value: {msg}");
    let (val, msg) = OptionTermDup.apply("3").expect("3 parses");
    assert_eq!(val, 3);
    assert!(msg.contains('3'), "message names the value: {msg}");
    // Zero is meaningful (nothing stays implied) and accepted.
    assert_eq!(OptionImpliedRefs.apply("0").expect("0 parses").0, 0);
}

#[test]
fn a_bad_bound_is_refused() {
    for bad in ["", "-1", "wide", "1000001", "2.5"] {
        assert!(
            OptionImpliedRefs.apply(bad).is_err(),
            "impliedrefs {bad:?} must be refused"
        );
        assert!(
            OptionTermDup.apply(bad).is_err(),
            "termdup {bad:?} must be refused"
        );
    }
}
