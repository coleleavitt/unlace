use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .expect("read fixture")
}

/// The arm64 chained-fixup fixture: every rebase becomes a write holding the
/// unpacked pointer, and only the `__DATA_CONST` (`SG_READ_ONLY`) slots are
/// constant — `__objc_classlist[0]` is, the `__DATA` `class_t.isa` slot is not.
#[test]
fn chained_rebases_are_written_and_data_const_is_constant() {
    let bytes = fixture("macho_objc_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse");
    let r = resolve(&file, &bytes);
    let classlist = r
        .writes
        .iter()
        .find(|w| w.vma == 0x100004000)
        .expect("classlist slot");
    assert_eq!((classlist.value, classlist.width), (0x100008000, 8));
    let isa = r
        .writes
        .iter()
        .find(|w| w.vma == 0x100008000)
        .expect("class_t.isa slot");
    assert_eq!(isa.value, 0x100008028);
    assert!(r.const_ranges.contains(&(0x100004000, 0x100004007)));
    assert!(!r.const_ranges.iter().any(|&(lo, _)| lo == 0x100008000));
}

/// A classic `LC_DYLD_INFO` Mach-O and an ELF yield nothing.
#[test]
fn inert_without_chained_fixups() {
    for name in ["macho_objc", "macho_imports"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        let r = resolve(&file, &bytes);
        assert!(r.writes.is_empty() && r.const_ranges.is_empty(), "{name}");
    }
}
