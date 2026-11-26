use super::*;

#[test]
fn x86_refs_are_raw_va_name_at_8() {
    let rk = RefKind::new(false, 0x00400000, End::Little);
    assert_eq!(rk.ptr_size(), 4);
    assert_eq!(rk.type_descriptor_name_offset(), 8);
    // A raw-VA ref is the literal 4-byte value (no image base added).
    let bytes = 0x0040_2024u32.to_le_bytes();
    assert_eq!(rk.resolve_ref(&bytes), Some(0x00402024));
    // A full pointer is 4 bytes wide on x86.
    assert_eq!(rk.read_ptr(&0x0040_200cu32.to_le_bytes()), 0x0040200c);
    // Zero is the no-edge sentinel.
    assert_eq!(rk.resolve_ref(&0u32.to_le_bytes()), None);
}

#[test]
fn x64_refs_are_ibo32_name_at_16() {
    let rk = RefKind::new(true, 0x1_4000_0000, End::Little);
    assert_eq!(rk.ptr_size(), 8);
    assert_eq!(rk.type_descriptor_name_offset(), 16);
    // An IBO32 disp32 resolves to image_base + disp.
    let disp = 0x0000_2038u32.to_le_bytes();
    assert_eq!(rk.resolve_ref(&disp), Some(0x1_4000_2038));
    // A full pointer is 8 bytes wide on x64.
    let p = 0x1_4000_2010u64.to_le_bytes();
    assert_eq!(rk.read_ptr(&p), 0x1_4000_2010);
    // Ref fields are 4 bytes on both arches.
    assert_eq!(rk.ref_size(), 4);
}
