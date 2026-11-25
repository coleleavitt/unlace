use super::*;

#[test]
fn role_names_are_sorted_for_lookup() {
    assert!(ROLE_NAMES.windows(2).all(|w| w[0] < w[1]));
}

#[test]
fn spellings_number_from_two() {
    assert_eq!(spelling("fd", 1), "fd");
    assert_eq!(spelling("fd", 2), "fd_2");
    assert!(spells("fd", "fd") && spells("fd_2", "fd") && spells("fd_13", "fd"));
    for other in ["fd_1", "fd_02", "fd_", "fdx", "fd_x", "f"] {
        assert!(!spells(other, "fd"), "{other}");
    }
}

#[test]
fn pointer_and_filler_names_are_sorted_for_lookup() {
    assert!(POINTER_NAMES.windows(2).all(|w| w[0] < w[1]));
    assert!(FILLERS.windows(2).all(|w| w[0] < w[1]));
}

#[test]
fn a_pointer_parameter_names_the_object_it_points_at() {
    for (name, object) in [
        ("lpBuffer", "Buffer"),
        ("lpNumberOfBytesRead", "NumberOfBytesRead"),
        ("lpflOldProtect", "flOldProtect"),
        ("phModule", "hModule"),
        ("ppvData", "pvData"),
        ("pbDebuggerPresent", "bDebuggerPresent"),
        ("buf", "buf"),
        ("stat_loc", "stat_loc"),
        ("path", "path"),
        ("pid", "pid"),
        ("pmatch", "pmatch"),
    ] {
        assert_eq!(pointee_name(name, false), Some(object), "{name}");
    }
    for name in ["ptr", "p", "iptr", "termios_p", "Ptr", "pvarg", "psz"] {
        assert_eq!(pointee_name(name, false), None, "{name}");
    }
    assert_eq!(pointee_name("ptr", true), Some("ptr"));
    assert_eq!(pointee_name("endptr", true), Some("endptr"));
}

#[test]
fn a_fill_call_is_known_by_every_spelling() {
    for callee in [
        "memset",
        "_memset",
        "__memset_chk",
        "bzero",
        "explicit_bzero",
        "__explicit_bzero_chk",
    ] {
        assert!(fills(callee), "{callee}");
    }
    for callee in ["memcpy", "sigfillset", "fill", "memset_s_x"] {
        assert!(!fills(callee), "{callee}");
    }
}

#[test]
fn reserved_names_are_sorted_for_lookup() {
    assert!(RESERVED.windows(2).all(|w| w[0] < w[1]));
}

#[test]
fn a_return_value_outranks_an_argument_and_the_earliest_call_wins() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let any = |_: &str| true;
    let e = decide(
        vec![
            (ARG, at(1), 0, "size".into(), true),
            (RET, at(5), -1, "len".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "len");
    let e = decide(
        vec![
            (ARG, at(7), 0, "fd".into(), true),
            (ARG, at(3), 2, "stream".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "stream");
}

#[test]
fn disagreeing_role_names_or_results_name_nothing() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let any = |_: &str| true;
    assert!(
        decide(
            vec![
                (ROLE, at(1), 0, "dest".into(), true),
                (ROLE, at(2), 1, "src".into(), true)
            ],
            false,
            &any
        )
        .is_none()
    );
    let e = decide(
        vec![
            (ROLE, at(1), 0, "s1".into(), true),
            (ROLE, at(2), 1, "s2".into(), true),
            (ARG, at(3), 0, "s".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "s");
    let e = decide(
        vec![
            (ROLE, at(1), 0, "dest".into(), true),
            (ROLE, at(4), 0, "dest".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "dest");
    assert!(
        decide(
            vec![
                (RET, at(1), -1, "len".into(), true),
                (RET, at(2), -1, "pid".into(), true)
            ],
            false,
            &any
        )
        .is_none()
    );
    let e = decide(
        vec![
            (RET, at(1), -1, "len".into(), true),
            (RET, at(2), -1, "pid".into(), true),
            (ARG, at(3), 0, "n".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "n");
}

#[test]
fn a_scalar_object_two_arguments_name_two_ways_is_not_named_by_them() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let any = |_: &str| true;
    let shared = vec![
        (ARG, at(1), 1, "buf".into(), true),
        (ARG, at(2), 4, "optlen".into(), true),
    ];
    assert_eq!(decide(shared.clone(), false, &any).unwrap().3, "buf");
    assert!(decide(shared, true, &any).is_none());
    let e = decide(
        vec![
            (ARG, at(1), 1, "stat_loc".into(), true),
            (ARG, at(2), 0, "stat_loc".into(), true),
        ],
        true,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "stat_loc");
    let e = decide(
        vec![
            (ARG, at(1), 1, "buf".into(), true),
            (ARG, at(2), 4, "optlen".into(), true),
            (ROLE, at(3), 0, "dest".into(), true),
        ],
        true,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "dest");
}

#[test]
fn an_unusable_name_gives_way_to_the_next_evidence() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let not_tm = |name: &str| name != "tm";
    let e = decide(
        vec![
            (RET, at(1), -1, "tm".into(), true),
            (ARG, at(2), 0, "tp".into(), true),
        ],
        false,
        &not_tm,
    )
    .unwrap();
    assert_eq!(e.3, "tp");
    assert!(decide(vec![(RET, at(1), -1, "tm".into(), true)], false, &not_tm).is_none());
}

#[test]
fn a_field_name_ranks_between_an_argument_and_a_role_and_a_type_name_is_last() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let any = |_: &str| true;
    let e = decide(
        vec![
            (ROLE, at(1), 0, "dest".into(), true),
            (FIELD, at(5), -1, "len".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "len");
    let e = decide(
        vec![
            (FIELD, at(1), -1, "len".into(), true),
            (ARG, at(5), 2, "nbytes".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "nbytes");
    let e = decide(
        vec![
            (TYPE, at(1), -1, "str".into(), true),
            (RESULT, at(9), -1, "result".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "result");
    let e = decide(
        vec![
            (FIELD, at(1), -1, "len".into(), true),
            (FIELD, at(2), -1, "size".into(), true),
            (TYPE, at(3), -1, "str".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "str");
}

#[test]
fn a_loop_counter_outranks_library_evidence_and_printed_evidence_comes_first() {
    let at = |o: u64| (Address::new_invalid(), o as u32);
    let any = |_: &str| true;
    let e = decide(
        vec![
            (ARG, at(1), 2, "nbytes".into(), true),
            (LOOP, at(5), -1, "i".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "i");
    let e = decide(
        vec![
            (RET, at(1), -1, "fd".into(), false),
            (RESULT, at(9), -1, "result".into(), true),
        ],
        false,
        &any,
    )
    .unwrap();
    assert_eq!(e.3, "result");
}
