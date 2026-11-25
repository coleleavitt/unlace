use super::*;
use crate::loader::format::macho::{resolve_chained_fixups, resolve_dyld_info_binds};

#[test]
fn a_category_label_shows_the_class_as_its_method_labels_do() {
    assert_eq!(label_for(Some("Base"), "Extra"), "Base(Extra)");
    assert_eq!(
        label_for(Some("_TtC6Sample3Foo"), "Extra"),
        "Sample.Foo(Extra)"
    );
    assert_eq!(label_for(None, "Extra"), "(Extra)");
}

/// `macho_objc_meta_arm64`: `Base(Extra)` on a local class, `Remote(Extra)` on
/// an imported (bind) class, each with one instance and one class method.
#[test]
fn walks_macho_objc_cats_fixture() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_meta_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let fixups = resolve_chained_fixups(&file, &bytes);
    let img =
        MachoImage::with_fixups(&file, fixups).with_binds(resolve_dyld_info_binds(&file, &bytes));
    let cats = categories(&img, &file);
    let labels: Vec<&str> = cats.iter().map(|c| c.label.as_str()).collect();
    assert_eq!(labels, ["Base(Extra)", "Remote(Extra)"]);
    assert!(
        cats.iter()
            .all(|c| c.instance_methods.is_some() && c.class_methods.is_some())
    );
}

/// A `__objc_catlist` header claiming far more bytes than the file holds is
/// walked only over the bytes present, not once per claimed slot.
#[test]
fn oversized_catlist_header_is_bounded_by_file_data() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_meta_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    for size in [0x0800_0000_0000_0000u64, u64::MAX] {
        let patched = super::super::objcrefs::with_section_size(bytes.clone(), SEC_CATLIST, size);
        let file = object::File::parse(patched.as_slice()).expect("parse Mach-O");
        let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &patched));
        assert!(categories(&img, &file).len() <= 2, "size {size:#x}");
    }
}
