use super::{NARROW, WIDE};

#[test]
fn each_routine_is_typed_once() {
    let mut names: Vec<&str> = NARROW.iter().chain(WIDE).map(|(n, _)| *n).collect();
    let len = names.len();
    names.sort_unstable();
    names.dedup();
    assert_eq!(names.len(), len);
    assert_eq!(len, 59);
}

#[test]
fn only_the_wide_table_returns_eight_bytes() {
    for (name, sig) in NARROW {
        assert!(
            !matches!(sig.ret, super::Ty::Int64 | super::Ty::UInt64),
            "{name}"
        );
    }
    for (name, sig) in WIDE {
        assert!(
            matches!(sig.ret, super::Ty::Int64 | super::Ty::UInt64),
            "{name}"
        );
    }
}
