use super::is_memcpy;

#[test]
fn memcpy_names() {
    assert!(is_memcpy("memcpy"));
    assert!(is_memcpy("_memcpy"));
    assert!(!is_memcpy("memmove"));
    assert!(!is_memcpy("__memcpy_chk"));
}
