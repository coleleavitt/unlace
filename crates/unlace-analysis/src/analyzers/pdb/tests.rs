use super::*;

#[test]
fn pass_identity() {
    let p = PdbPass;
    assert_eq!(p.id(), "pdb");
    assert_eq!(p.phase(), Phase::P1);
}

/// `pe_image_base` reads the PE ImageBase from the real `pdb_min.exe` fixture
/// (a freestanding x86-64 PE). The exact value is toolchain-dependent — assert
/// only that it parses to a nonzero, page-aligned base.
#[test]
fn pe_image_base_reads_pdb_min() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pdb_min.exe");
    let bytes = std::fs::read(path).expect("read pdb_min.exe fixture");
    let base = pe_image_base(&bytes).expect("pdb_min.exe is a PE with an image base");
    assert_ne!(base, 0, "a PE image base is nonzero");
    assert_eq!(base & 0xfff, 0, "the image base is page-aligned");
}

/// A non-PE byte blob yields `None` from `pe_image_base`.
#[test]
fn pe_image_base_non_pe_is_none() {
    assert_eq!(pe_image_base(b"\x7fELF not a PE"), None);
}
