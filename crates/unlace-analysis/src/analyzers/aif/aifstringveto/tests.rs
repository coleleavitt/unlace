use super::*;

#[test]
fn strings_and_code() {
    assert!(is_string(b"bad lsd checksum digit\n\0\xcc\xcc"));
    assert!(is_string(b"I\0d\0e\0n\0t\0i\0f\0i\0e\0r\0\0\0\xcc"));
    assert!(!is_string(b"short\0"));
    assert!(!is_string(b"\x55\x8b\xec\x83\xec\x08"));
    assert!(!is_string(b"\x8b\xff\x55\x8b\xec"));
    assert!(!is_string(b"USVWjhPh\x8b\x45"));
    assert!(!is_string(b"printable but no terminator"));
    assert!(!is_string(b"Sj\nhg+\0\0j\0\xe8\x09\xa3"));
    assert!(!is_string(b"WSh$QT\0\xe8~\x0b"));
    assert!(is_string(b"Setting RTS...\n\0Waiting...\n\0\xcc"));
}
