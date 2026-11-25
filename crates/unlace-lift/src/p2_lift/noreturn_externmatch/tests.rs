use super::*;

#[test]
fn matches_canary_and_abort_family() {
    // The chcon.o::main target and its neighbours in the vendored list.
    assert!(is_known_noreturn_name("__stack_chk_fail"));
    assert!(is_known_noreturn_name("stack_chk_fail"));
    assert!(is_known_noreturn_name("abort"));
    assert!(is_known_noreturn_name("exit"));
    assert!(is_known_noreturn_name("_exit"));
    assert!(is_known_noreturn_name("__assert_fail"));
}

#[test]
fn namespace_guard_rejects_class_methods_but_allows_std() {
    assert!(!is_known_noreturn_name("Menu::exit"));
    assert!(!is_known_noreturn_name("Menu::_exit"));
    // The guard allows the `std` namespace; `exit` is in the vendored list.
    assert!(is_known_noreturn_name("std::exit"));
}

/// (unlace DIV-78, GH-273) The libstdc++ `std::__throw_*` family reaches this
/// matcher in its DEMANGLED form (`query_call` resolves the display name), so
/// the plain half of the list entry is what fires here; the mangled half is
/// what the analysis-tier scan matches pre-demangle.
#[test]
fn matches_cxx_throw_family_demangled_and_mangled() {
    for want in [
        "std::__throw_length_error",
        "std::__throw_out_of_range",
        "std::__throw_bad_alloc",
        "std::__throw_bad_function_call",
        "__throw_logic_error",
        "_ZSt20__throw_length_errorPKc",
        "_ZSt24__throw_out_of_range_fmtPKcz",
    ] {
        assert!(is_known_noreturn_name(want), "{want} must be no-return");
    }
    // The namespace guard still rejects a same-named user class method.
    assert!(!is_known_noreturn_name("Buf::__throw_length_error"));
    // A user function that merely mentions `throw` is untouched.
    assert!(!is_known_noreturn_name("throw_it"));
    assert!(!is_known_noreturn_name("rethrow"));
}

/// The #28 additions reach the flow-time matcher in their demangled form.
#[test]
fn matches_documented_additions_demangled() {
    for want in [
        "std::__throw_bad_weak_ptr",
        "std::__throw_bad_any_cast",
        "std::__glibcxx_assert_fail",
        "__cxa_call_terminate",
        "_Unwind_SjLj_Resume",
        "__assert_func",
        "__android_log_assert",
        "Py_FatalError",
    ] {
        assert!(is_known_noreturn_name(want), "{want} must be no-return");
    }
    assert!(!is_known_noreturn_name("Ptr::__throw_bad_weak_ptr"));
}

#[test]
fn proxy_names_take_multi_word_entries_only() {
    for want in [
        "stub___stack_chk_fail",
        "stub__stack_chk_fail",
        "__wrap___stack_chk_fail",
        "__GI___assert_fail",
        "session__pthread_exit",
        "std::stub___stack_chk_fail",
    ] {
        assert!(is_proxy_noreturn_name(want), "{want} is a proxy spelling");
        assert!(!is_known_noreturn_name(want), "{want} needs the stub check");
    }
    for keep in [
        "machine__exit",
        "ui__abort",
        "__stack_chk_fail",
        "mystack_chk_fail_count",
        "handle_exit",
        "stub__stack_chk_fail_count",
        "Menu::stub___stack_chk_fail",
    ] {
        assert!(
            !is_proxy_noreturn_name(keep),
            "{keep} is not a proxy spelling"
        );
    }
}

#[test]
fn rejects_ordinary_returning_names() {
    assert!(!is_known_noreturn_name("process_files"));
    assert!(!is_known_noreturn_name("main"));
    assert!(!is_known_noreturn_name("error"));
    assert!(!is_known_noreturn_name(""));
    assert!(!is_known_noreturn_name("_"));
}
