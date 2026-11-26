use super::*;

fn suite_3() -> UnitTestSuite {
    let mut s = UnitTestSuite::new();
    s.add("alpha", Box::new(|| Ok(())));
    s.add("beta", Box::new(|| Err(UnitTestError::msg("two != three"))));
    s.add("gamma", Box::new(|| Err(UnitTestError::anon())));
    s
}

#[test]
fn run_all_emits_exact_grammar() {
    let s = suite_3();
    let mut out = String::new();
    let failed = s.run(Vec::<String>::new(), &mut out);
    assert_eq!(failed, 2); // beta + gamma fail
    let expect = "\
testing : alpha ...
  passed.
testing : beta ...
  fail: two != three
testing : gamma ...
  fail
==============================
1/3 tests passed.
";
    assert_eq!(out, expect);
}

#[test]
fn name_filter_runs_only_named() {
    let s = suite_3();
    let mut out = String::new();
    let failed = s.run(["alpha"], &mut out);
    assert_eq!(failed, 0);
    assert_eq!(
        out,
        "testing : alpha ...\n  passed.\n==============================\n1/1 tests passed.\n"
    );
}

#[test]
fn name_filter_subset_with_a_failure() {
    let s = suite_3();
    let mut out = String::new();
    // Run beta + gamma only; alpha must not appear.
    let failed = s.run(["beta", "gamma"], &mut out);
    assert_eq!(failed, 2);
    assert!(!out.contains("alpha"));
    assert!(out.contains("0/2 tests passed."));
}

#[test]
fn empty_suite_footer() {
    let s = UnitTestSuite::new();
    let mut out = String::new();
    let failed = s.run(Vec::<String>::new(), &mut out);
    assert_eq!(failed, 0);
    assert_eq!(out, "==============================\n0/0 tests passed.\n");
}

#[test]
fn add_exit_code_saturates() {
    assert_eq!(add_exit_code(0, 0), 0);
    assert_eq!(add_exit_code(10, 5), 15);
    assert_eq!(add_exit_code(250, 10), 255); // over clamp
    assert_eq!(add_exit_code(255, 1), 255);
    assert_eq!(add_exit_code(-1, 5), 255); // negative current
    assert_eq!(add_exit_code(i32::MAX, 1), 255); // overflow -> ret < current
}

// === w9-harness-runner verifier adversarial tests ===

/// `add_exit_code` C++ semantics on boundary/overflow inputs that the
/// wrapping add must reproduce without panicking (debug-build wrap would
/// panic with a plain `+`). C++: `ret = current + add` (int overflow is the
/// guard's whole point), clamp on any of the four `||` terms.
#[test]
fn w9_add_exit_code_overflow_and_boundary() {
    // ret < current via signed overflow (i32::MAX + i32::MAX wraps negative).
    assert_eq!(add_exit_code(i32::MAX, i32::MAX), 255);
    // current == 255 exactly is in-range as a *value* but +0 keeps it; the
    // C++ `current > CLAMP` is strict, so 255 itself is allowed, 256 clamps.
    assert_eq!(add_exit_code(255, 0), 255);
    assert_eq!(add_exit_code(200, 55), 255); // ret == 255 -> NOT > CLAMP -> kept
    assert_eq!(add_exit_code(200, 54), 254); // ret == 254 -> kept
    // A negative `add` that drives ret below current must NOT clamp on the
    // `ret < current` overflow term alone unless it is a real wrap: 10 + (-3)
    // = 7, ret(7) < current(10) is TRUE in C++, so this CLAMPS. The C++ guard
    // does not distinguish "wrap" from "went down", so a real C++ run of
    // add_exit_code(10,-3) returns 255 too.
    assert_eq!(add_exit_code(10, -3), 255);
    // current itself negative always clamps regardless of add.
    assert_eq!(add_exit_code(i32::MIN, 0), 255);
}

/// The name filter is a `set<string>` membership test (C++
/// `testNames.find(t->name) == end`). Names in the filter that do not exist
/// in the suite are silently ignored, and the suite's *registration order*
/// (the `vector` order), not the filter's sorted order, drives output.
#[test]
fn w9_filter_uses_registration_order_not_set_order() {
    let mut s = UnitTestSuite::new();
    s.add("zebra", Box::new(|| Ok(())));
    s.add("alpha", Box::new(|| Ok(())));
    let mut out = String::new();
    // Filter contains a non-existent name ("ghost") plus the two real ones in
    // reverse-sorted order; output must still be registration order zebra,alpha.
    let failed = s.run(["alpha", "ghost", "zebra"], &mut out);
    assert_eq!(failed, 0);
    let zebra_at = out.find("zebra").unwrap();
    let alpha_at = out.find("alpha").unwrap();
    assert!(
        zebra_at < alpha_at,
        "registration order, not set order:\n{out}"
    );
    assert!(!out.contains("ghost"));
    assert!(out.contains("2/2 tests passed."));
}
