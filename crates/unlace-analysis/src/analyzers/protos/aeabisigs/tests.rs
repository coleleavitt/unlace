use super::SIGNATURES;

#[test]
fn every_helper_is_named_once_and_kept_on_the_base_standard() {
    let mut names: Vec<&str> = SIGNATURES.iter().map(|(n, _)| *n).collect();
    names.sort_unstable();
    let len = names.len();
    names.dedup();
    assert_eq!(names.len(), len, "duplicate helper row");
    assert_eq!(len, 65);
    for name in names {
        assert!(
            unlace_decomp::armfloatreturn::base_pcs_helper(name),
            "{name} must take the core-register model"
        );
    }
}

#[test]
fn memset_takes_the_length_before_the_fill_byte() {
    let (_, sig) = SIGNATURES
        .iter()
        .find(|(n, _)| *n == "__aeabi_memset")
        .unwrap();
    assert!(matches!(
        sig.params,
        [super::Ty::VoidPtr, super::Ty::Size, super::Ty::Int]
    ));
    assert!(matches!(sig.ret, super::Ty::Void));
}
