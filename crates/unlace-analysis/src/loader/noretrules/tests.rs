use super::*;

#[test]
fn parses_rules_and_skips_comments() {
    let rules = parse_rules("# header\n\nwrap_exit wrapper_exit_* exit\nfail_fast fail_* abort\n")
        .expect("valid rule file");
    assert_eq!(rules.len(), 2);
    assert_eq!(rules[0].name, "wrap_exit");
    assert_eq!(rules[0].ptn, "wrapper_exit_*");
    assert_eq!(rules[0].rpl, "exit");
}

#[test]
fn rejects_duplicate_names_invalid_entries_and_catch_all_patterns() {
    let dup = parse_rules("a x_* exit\na y_* abort\n").unwrap_err();
    assert!(dup.contains("duplicated rule name"), "{dup}");
    let short = parse_rules("a x_*\n").unwrap_err();
    assert!(short.contains("invalid entry"), "{short}");
    let long = parse_rules("a x_* exit extra\n").unwrap_err();
    assert!(long.contains("invalid entry"), "{long}");
    let all = parse_rules("a * exit\n").unwrap_err();
    assert!(all.contains("matches every name"), "{all}");
}

#[test]
fn glob_literal_prefix_suffix_and_middle() {
    assert!(glob_matches("exit", "exit"));
    assert!(!glob_matches("exit", "exit_"));
    assert!(glob_matches("exit_*", "exit_a"));
    assert!(glob_matches("exit_*", "exit_"));
    assert!(!glob_matches("exit_*", "exit"));
    assert!(glob_matches("*_fail", "x_fail"));
    assert!(glob_matches("a*b*c", "abc"));
    assert!(glob_matches("a*b*c", "aXXbYYc"));
    assert!(!glob_matches("a*b*c", "acb"));
    assert!(!glob_matches("a*a", "a"));
    assert!(glob_matches("a**a", "aa"));
}

#[test]
fn rename_uses_first_matching_rule() {
    let rules = parse_rules("specific die_fast_* abort\ngeneric die_* exit\n").unwrap();
    assert_eq!(rename_for_noreturn("die_fast_3", &rules), Some("abort"));
    assert_eq!(rename_for_noreturn("die_slow", &rules), Some("exit"));
    assert_eq!(rename_for_noreturn("run", &rules), None);
}
