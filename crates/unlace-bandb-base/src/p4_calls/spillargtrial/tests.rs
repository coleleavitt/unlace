use super::*;

#[test]
fn levels_are_ordered_by_permissiveness_so_the_gate_can_use_a_threshold() {
    // `store_is_caller_save_spill` reads `level <= LEVEL_OFF` to opt out and
    // `level >= LEVEL_SPILL` to skip the reload requirement, so the
    // vocabulary must stay monotone in how much it admits.
    const _: () = assert!(LEVEL_OFF < LEVEL_RELOAD);
    const _: () = assert!(LEVEL_RELOAD < LEVEL_SPILL);
}

#[test]
fn apply_parses_the_three_spellings() {
    assert_eq!(OptionSpillArgTrial.apply("off").expect("off").0, LEVEL_OFF);
    assert_eq!(
        OptionSpillArgTrial.apply("reload").expect("reload").0,
        LEVEL_RELOAD
    );
    assert_eq!(
        OptionSpillArgTrial.apply("spill").expect("spill").0,
        LEVEL_SPILL
    );
    // `on` and the empty parameter take the CONSERVATIVE level, unlike
    // `calloverlap`, whose bare `on` is its most permissive arm.
    assert_eq!(OptionSpillArgTrial.apply("on").expect("on").0, LEVEL_RELOAD);
    assert_eq!(
        OptionSpillArgTrial.apply("").expect("empty").0,
        LEVEL_RELOAD
    );
    assert!(OptionSpillArgTrial.apply("paired").is_err());
}
