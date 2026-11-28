use super::*;

#[test]
fn elem_id_in_unlace_range() {
    assert_eq!(ELEM_NORETURNEXTERN.get_id(), 4103);
    assert_eq!(ELEM_NORETURNEXTERN.get_name(), "noreturn_extern");
}

#[test]
fn matches_stack_chk_fail_and_family() {
    // The driving case: the undefined extern in tail.o.
    assert!(matches_noreturn_extern_name("__stack_chk_fail"));
    assert!(matches_noreturn_extern_name("stack_chk_fail"));
    assert!(matches_noreturn_extern_name("__assert_fail"));
    assert!(matches_noreturn_extern_name("exit"));
    assert!(matches_noreturn_extern_name("_exit"));
    assert!(matches_noreturn_extern_name("abort"));
    assert!(matches_noreturn_extern_name("pthread_exit"));
    assert!(matches_noreturn_extern_name("longjmp"));
}

#[test]
fn rejects_returning_names() {
    assert!(!matches_noreturn_extern_name("puts"));
    assert!(!matches_noreturn_extern_name("read"));
    assert!(!matches_noreturn_extern_name("printf"));
    assert!(!matches_noreturn_extern_name("xexit")); // not a prefix/substring match
    assert!(!matches_noreturn_extern_name("exit_handler"));
    assert!(!matches_noreturn_extern_name(""));
}

#[test]
fn namespace_guard() {
    // A C++ class method named like a no-return must NOT match.
    assert!(!matches_noreturn_extern_name("Menu::exit"));
    assert!(!matches_noreturn_extern_name("Menu::_exit"));
    // The sole allowed non-global namespace is `std`.
    assert!(!matches_noreturn_extern_name("std::terminate")); // base "terminate" not on the ELF list
    assert!(matches_noreturn_extern_name("std::abort")); // base "abort" is on the list, std allowed
}
