use super::*;
use crate::loader::format::macho::resolve_chained_fixups;

/// `macho_objc_meta_arm64` declares `Greeter` with a required `greet:` and an
/// optional `wave`, both IMP-less and typed.
#[test]
fn walks_macho_objc_meta_protocols() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_meta_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let protos = protocols(&img, &file);
    assert_eq!(protos.len(), 1);
    assert_eq!(protos[0].name, "Greeter");
    let decls: Vec<(&str, Option<&str>, u64)> = protos[0]
        .methods
        .iter()
        .map(|m| (m.selector.as_str(), m.types.as_deref(), m.imp))
        .collect();
    assert_eq!(
        decls,
        [
            ("greet:", Some("i20@0:8i16"), 0),
            ("wave", Some("v16@0:8"), 0)
        ]
    );
}

/// A `__objc_protolist` header claiming far more bytes than the file holds
/// is walked only over the bytes present, not once per claimed slot.
#[test]
fn oversized_protolist_header_is_bounded_by_file_data() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_meta_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    for size in [0x0800_0000_0000_0000u64, u64::MAX] {
        let patched = super::super::objcrefs::with_section_size(bytes.clone(), SEC_PROTOLIST, size);
        let file = object::File::parse(patched.as_slice()).expect("parse Mach-O");
        let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &patched));
        assert!(protocols(&img, &file).len() <= 1, "size {size:#x}");
    }
}
