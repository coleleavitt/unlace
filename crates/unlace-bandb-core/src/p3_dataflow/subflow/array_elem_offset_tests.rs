use super::array_elem_offset;

#[test]
fn wraps_into_the_element() {
    assert_eq!(array_elem_offset(10, 4), Some(2));
    assert_eq!(array_elem_offset(-1, 4), Some(3));
    assert_eq!(array_elem_offset(-8, 4), Some(0));
    assert_eq!(array_elem_offset(0, 1), Some(0));
}

#[test]
fn zero_sized_element_does_not_divide_by_zero() {
    assert_eq!(array_elem_offset(5, 0), None);
    assert_eq!(array_elem_offset(-5, 0), None);
}
