use super::*;

#[test]
fn a_kernel_collection_keeps_the_owned_path() {
    let fixtures = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures");
    let thin = ImageBytes::map_thin_macho(&format!("{fixtures}/macho_objc_arm64")).unwrap();
    assert!(thin.is_some_and(|bytes| bytes.starts_with(&[0xcf, 0xfa, 0xed, 0xfe])));
    let fileset = format!("{fixtures}/kernelcache/fileset.macho");
    assert!(
        ImageBytes::map_thin_macho(&fileset).unwrap().is_none(),
        "MH_FILESET entry selection"
    );
}

#[test]
fn a_load_without_mmap_keeps_the_owned_path() {
    use unlace_decomp::loadoptions::LoadOptions;
    let thin = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_arm64"
    );
    let owned = LoadOptions {
        load_mmap: false,
        ..LoadOptions::default()
    };
    let _load = owned.enter();
    assert!(ImageBytes::map_thin_macho(thin).unwrap().is_none());
    let _load = LoadOptions::default().enter();
    assert!(ImageBytes::map_thin_macho(thin).unwrap().is_some());
}
