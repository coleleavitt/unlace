use super::*;

#[test]
fn rust_spellings_preserve_identifiers_and_escape_unrepresentable_names() {
    for name in ["input", "union", "_name", "name42"] {
        assert_eq!(operator_name(Some(name.as_bytes()), 0xa), name);
    }
    assert_eq!(operator_name(Some(b"in"), 0xa), "r#in");
    assert_eq!(operator_name(Some(b"gen"), 0xa), "r#gen");
    assert_eq!(operator_name(Some(b"r#in"), 0xa), "__unlace_userop_a_r_in");
    assert_eq!(operator_name(Some(b""), 0xa), "__unlace_userop_a");
    assert_eq!(operator_name(Some(b"\xff"), 0xa), "__unlace_userop_a__");
    assert_eq!(
        operator_name(Some(b"2name"), 0xa),
        "__unlace_userop_a_2name"
    );
    for name in ["_", "crate", "self", "Self", "super"] {
        assert_eq!(
            operator_name(Some(name.as_bytes()), 0xa),
            format!("__unlace_userop_a_{name}")
        );
    }
    for joiner in ['\u{200c}', '\u{200d}'] {
        let long_name = format!("a{joiner}{}", "é".repeat(80));
        assert_eq!(
            operator_name(Some(long_name.as_bytes()), 0xa),
            format!("__unlace_userop_a_a{}", "_".repeat(63))
        );
    }
}

#[test]
fn unicode_names_keep_their_operation_identity_after_rust_normalization() {
    assert_eq!(
        operator_name(Some("é".as_bytes()), 0),
        "__unlace_userop_0__"
    );
    assert_eq!(
        operator_name(Some("e\u{301}".as_bytes()), 1),
        "__unlace_userop_1_e_"
    );
    assert_eq!(
        operator_name(Some("ação".as_bytes()), 2),
        "__unlace_userop_2_a__o"
    );
    assert_eq!(
        operator_name(Some("東京".as_bytes()), 3),
        "__unlace_userop_3___"
    );
    assert_eq!(
        operator_name(Some("_я".as_bytes()), 4),
        "__unlace_userop_4___"
    );
}

#[test]
fn raw_spelling_is_limited_to_representable_keywords() {
    for name in ["in", "break", "yield", "async", "gen", "type"] {
        assert!(raw_keyword(name));
    }
    for name in [
        "input",
        "breakpoint",
        "yield_now",
        "in_",
        "r#in",
        "CALLOTHER[0x1]",
        "union",
        "raw",
        "safe",
        "_",
        "crate",
        "self",
        "Self",
        "super",
    ] {
        assert!(!raw_keyword(name));
    }
}
