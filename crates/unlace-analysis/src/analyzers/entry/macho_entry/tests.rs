use super::*;
use object::read::ObjectSymbol;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// `LC_FUNCTION_STARTS` recovers `_compute` (0x1000005a0) and `_main`
/// (0x1000005b0), and `LC_MAIN` recovers the entry (also 0x1000005b0) on the
/// x86-64 fixture — the headline Mach-O fact: function starts even without
/// relying on the symbol table.
#[test]
fn macho_x64_function_starts() {
    let bytes = fixture("macho_imports");
    let file = object::File::parse(bytes.as_slice()).expect("parse macho_imports");
    assert_eq!(file.architecture(), Architecture::X86_64);
    let cands = macho_entry_candidates(&file, bytes.as_slice());
    assert!(
        cands.contains(&0x1000005a0),
        "_compute 0x1000005a0 missing (FUNCTION_STARTS)"
    );
    assert!(
        cands.contains(&0x1000005b0),
        "_main/entry 0x1000005b0 missing"
    );
    assert!(!cands.contains(&0), "no zero candidate");
}

/// The same source linked for arm64 recovers `_compute` (0x100000560) and
/// `_main` (0x10000056c) — arch-independent (the table is delta-encoded
/// metadata, no instruction decode).
#[test]
fn macho_arm64_function_starts() {
    let bytes = fixture("macho_imports_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse macho_imports_arm64");
    assert_eq!(file.architecture(), Architecture::Aarch64);
    let cands = macho_entry_candidates(&file, bytes.as_slice());
    assert!(
        cands.contains(&0x100000560),
        "_compute 0x100000560 missing (FUNCTION_STARTS)"
    );
    assert!(
        cands.contains(&0x10000056c),
        "_main/entry 0x10000056c missing"
    );
}

/// `LC_MAIN` alone: `__TEXT.vmaddr + entryoff` is the routine `dyld` calls as
/// `main` (0x1000005b0 on the x86-64 fixture, the same address the symbol
/// table spells `_main`).
#[test]
fn lc_main_entry_vma_x64() {
    let bytes = fixture("macho_imports");
    assert_eq!(macho_main_entry_vma(&bytes), Some(0x1000005b0));
}

/// The stripped twin carries the same `LC_MAIN` — the load command survives
/// `strip`, which is the whole reason `machomain` can name a function no
/// symbol names any more.
#[test]
fn lc_main_entry_vma_survives_stripping() {
    let bytes = fixture("macho_stripped_main");
    let file = object::File::parse(bytes.as_slice()).expect("parse macho_stripped_main");
    assert!(
        !file.symbols().any(|s| s.name() == Ok("_main")),
        "the stripped fixture must not name _main, or it proves nothing"
    );
    assert_eq!(macho_main_entry_vma(&bytes), Some(0x1000005b0));
}

/// `LC_MAIN` is a Mach-O executable fact and nothing else answers here: an ELF,
/// a `.o` and a short/garbage buffer all yield `None` rather than an error.
#[test]
fn lc_main_entry_vma_refuses_non_macho() {
    assert_eq!(macho_main_entry_vma(&fixture("cet_pie_x86_64")), None);
    assert_eq!(macho_main_entry_vma(&[]), None);
    assert_eq!(
        macho_main_entry_vma(&[0xcf, 0xfa, 0xed, 0xfe, 0, 0, 0]),
        None
    );
}

/// ULEB128 delta decoding: the x86-64 fixture's table is two deltas
/// (`0x5a0`, `0x10`) → `[0x1000005a0, 0x1000005b0]` off the `__TEXT` base.
#[test]
fn function_starts_delta_decode() {
    // 0x5a0 = uleb [0xa0,0x0b], 0x10 = [0x10], then 0 terminator.
    let mut data = Vec::new();
    // 0x5a0 ULEB: 0x5a0 = 0b101_1010_0000 -> bytes 0xa0,0x0b
    data.extend_from_slice(&[0xa0, 0x0b, 0x10, 0x00]);
    let mut out = Vec::new();
    decode_function_starts(&data, 0, data.len() as u64, 0x100000000, &mut out);
    assert_eq!(out, vec![0x1000005a0, 0x1000005b0]);
}
