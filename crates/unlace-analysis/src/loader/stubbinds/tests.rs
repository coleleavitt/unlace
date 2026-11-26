use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .expect("read fixture")
}

/// `macho_stubs_stripped_arm64`'s one stub has an `INDIRECT_SYMBOL_LOCAL |
/// ABS` entry; its slot's chained bind names it.
#[test]
fn a_stripped_stub_is_named_from_its_slots_bind() {
    let bytes = fixture("macho_stubs_stripped_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert_eq!(
        stub_binds(&file, &bytes),
        vec![(0x100000520, "__chkstk_darwin".to_string())]
    );
}

/// The same image before stripping: the indirect-symbol walk names the
/// stub, so the pass adds nothing.
#[test]
fn a_stub_the_indirect_symbol_walk_names_is_left_alone() {
    let bytes = fixture("chkstkdarwin_macho_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert!(stub_binds(&file, &bytes).is_empty());
}

#[test]
fn stub_decoders() {
    // adrp x16, #0x4000; ldr x16, [x16]; br x16  at 0x100000520
    let a64 = [
        0x30, 0x00, 0x00, 0x90, 0x10, 0x02, 0x40, 0xf9, 0x00, 0x02, 0x1f, 0xd6,
    ];
    assert_eq!(a64_stub_slot(&a64, 0x100000520), Some(0x100004000));
    // adrp x17, #0x4000; add x17, x17, #0x18; ldr x16, [x17]; braa x16, x17
    let auth = [
        0x31, 0x00, 0x00, 0x90, 0x31, 0x62, 0x00, 0x91, 0x30, 0x02, 0x40, 0xf9, 0x11, 0x0a, 0x1f,
        0xd7,
    ];
    assert_eq!(a64_stub_slot(&auth, 0x100000520), Some(0x100004018));
    assert_eq!(a64_stub_slot(&a64[..8], 0x100000520), None);
    assert_eq!(
        x64_stub_slot(&[0xff, 0x25, 0xfa, 0x0f, 0x00, 0x00], 0x100000f00),
        Some(0x100001f00)
    );
    assert_eq!(x64_stub_slot(&[0xe9, 0, 0, 0, 0, 0], 0x100000f00), None);
}
