use super::*;
#[test]
fn decoder_rejects_non_resources_and_invalid_values() {
    let stack = AddrSpace::new(spacetype::IPTR_SPACEBASE, "stack", false, 4, 1, 5, 0, 0, 0);
    let register = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        3,
        0,
        0,
        0,
    );
    let mut entry = Element::new();
    assert_eq!(decode(&entry, &stack, 4, 500).unwrap(), 0);
    entry.add_attribute("stackalign", b"false");
    assert_eq!(decode(&entry, &stack, 4, 500).unwrap(), IGNORE_TYPE_ALIGN);
    assert!(decode(&entry, &register, 4, 500).is_err());
    assert!(decode(&entry, &stack, 0, 500).is_err());
    assert!(decode(&entry, &stack, 4, 4).is_err());
    let mut entry = Element::new();
    entry.add_attribute("stackalign", b"true");
    assert_eq!(decode(&entry, &register, 0, 4).unwrap(), 0);
    let mut entry = Element::new();
    entry.add_attribute("stackalign", b"invalid");
    assert!(decode(&entry, &stack, 4, 500).is_err());
}
