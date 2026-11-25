use super::*;

#[test]
fn only_default_shapes_have_an_index() {
    assert_eq!(default_name_index("v9", true), Some(9));
    assert_eq!(default_name_index("v12", true), Some(12));
    for name in ["v", "v0", "v09", "vx", "idx", "a1", "v1_1", "iVar3"] {
        assert_eq!(default_name_index(name, true), None, "{name}");
    }
    assert_eq!(default_name_index("iVar3", false), Some(3));
    assert_eq!(default_name_index("Var3", false), Some(3));
    assert_eq!(default_name_index("v3", false), Some(3));
    assert_eq!(default_name_index("vVar3", false), Some(3));
    for name in ["myVar3", "iVar", "iVar03", "vx"] {
        assert_eq!(default_name_index(name, false), None, "{name}");
    }
}

#[test]
fn a_local_keeps_its_number_and_any_other_takes_one_past_the_last() {
    let prior = PriorNames {
        vacated: [(3, "c".to_string())].into_iter().collect(),
        given: ["v7".to_string()].into_iter().collect(),
        end: 12,
        ..PriorNames::default()
    };
    let mut state = NameState::new(prior.name_seed());
    let render = |i: int4| format!("v{i}");
    assert!(state.active());
    state.prefer(vec![5]);
    assert_eq!(state.pick(&render, &|_| true), 5);
    state.prefer(vec![7]);
    assert_eq!(
        state.pick(&render, &|_| true),
        12,
        "a number a rename took as its name"
    );
    state.prefer(vec![5]);
    assert_eq!(
        state.pick(&render, &|_| true),
        13,
        "a number another local took"
    );
    state.prefer(vec![3]);
    assert_eq!(
        state.pick(&render, &|name| name != "v14"),
        15,
        "a renamed local's number"
    );
    assert_eq!(
        state.pick(&render, &|_| true),
        16,
        "a local the first decompile did not have"
    );
    assert_eq!(state.end(), 17);
}

#[test]
fn without_a_record_nothing_is_active() {
    assert!(!NameState::new(PriorNames::default().name_seed()).active());
}
