use super::ELEM_PUSHIMMEDIATERET;

#[test]
fn element_id_is_stable() {
    assert_eq!(ELEM_PUSHIMMEDIATERET.get_id(), 4165);
}
