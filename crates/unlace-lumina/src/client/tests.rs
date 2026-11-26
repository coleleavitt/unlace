use super::*;

#[test]
fn host_of_accepts_names_and_v6() {
    assert_eq!(host_of("lumina.example:443").unwrap(), "lumina.example");
    assert_eq!(host_of("[::1]:65432").unwrap(), "::1");
    assert!(host_of("nohost").is_err());
    assert!(host_of(":443").is_err());
    assert!(host_of("h:notaport").is_err());
}
