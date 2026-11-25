use super::ELEM_ENTRYRETDISPATCH;

#[test]
fn element_id_is_stable() {
    assert_eq!(ELEM_ENTRYRETDISPATCH.get_id(), 4164);
}
