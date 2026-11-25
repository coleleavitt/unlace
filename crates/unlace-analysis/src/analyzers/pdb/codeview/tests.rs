use super::*;

/// `parse_record` decodes a hand-built RSDS payload (the exact field order
/// Ghidra's `PdbInfoDotNet.read` reads) and `guid_string` renders the
/// canonical Microsoft text form.
#[test]
fn parse_rsds_record() {
    let mut rec = Vec::new();
    rec.extend_from_slice(b"RSDS");
    let guid: [u8; 16] = [
        0x63, 0x39, 0xAC, 0x61, 0x48, 0xFF, 0x24, 0x90, 0x4C, 0x4C, 0x44, 0x20, 0x50, 0x44, 0x42,
        0x2E,
    ];
    rec.extend_from_slice(&guid);
    rec.extend_from_slice(&7u32.to_le_bytes());
    rec.extend_from_slice(b"foo.pdb\0trailing-garbage");

    let info = parse_record(&rec).expect("RSDS decodes");
    assert_eq!(
        info,
        CodeViewInfo::Rsds {
            guid,
            age: 7,
            pdb_path: "foo.pdb".to_string()
        }
    );
    assert_eq!(info.age(), 7);
    assert_eq!(info.pdb_path(), "foo.pdb");
    // Microsoft mixed-endian render: data1/2/3 LE, data4 byte-order.
    assert_eq!(
        info.guid_string().as_deref(),
        Some("61AC3963-FF48-9024-4C4C-44205044422E")
    );
}

/// `parse_record` decodes a hand-built NB10 payload (magic, offset:u32,
/// sig:u32, age:u32, path — Ghidra's `PdbInfoCodeView.read`), skipping the
/// `offset` field.
#[test]
fn parse_nb10_record() {
    let mut rec = Vec::new();
    rec.extend_from_slice(b"NB10");
    rec.extend_from_slice(&0u32.to_le_bytes()); // offset (always 0)
    rec.extend_from_slice(&0xDEADBEEFu32.to_le_bytes()); // signature
    rec.extend_from_slice(&3u32.to_le_bytes()); // age
    rec.extend_from_slice(b"bar.pdb\0");

    let info = parse_record(&rec).expect("NB10 decodes");
    assert_eq!(
        info,
        CodeViewInfo::Nb10 {
            signature: 0xDEAD_BEEF,
            age: 3,
            pdb_path: "bar.pdb".to_string()
        }
    );
    // NB10 has no GUID.
    assert_eq!(info.guid_string(), None);
}

/// An unknown magic / a truncated record yields `None` (never a panic).
#[test]
fn parse_rejects_unknown_and_truncated() {
    assert_eq!(parse_record(b"NOPE12345678"), None);
    assert_eq!(parse_record(b"RS"), None); // shorter than the magic
    assert_eq!(parse_record(b"RSDS\x01\x02"), None); // RSDS but no room for the GUID
    assert_eq!(parse_record(&[]), None);
}

/// A non-PE byte blob yields `None` from the top-level extractor.
#[test]
fn extract_non_pe_is_none() {
    assert_eq!(extract_codeview(b"\x7fELF not a PE at all"), None);
    assert_eq!(extract_codeview(&[]), None);
}

/// End-to-end over the real `pdb_min.exe` fixture (a freestanding PE built
/// `clang -target x86_64-pc-windows-msvc -g -gcodeview -fuse-ld=lld`, so
/// lld-link wrote an RSDS CodeView record + the `.pdb` path into the debug
/// directory). The extractor must pull the exact `{guid, age, pdb_path}`
/// `llvm-readobj --coff-debug-directory pdb_min.exe` reports:
///   GUID  (raw) = 63 39 AC 61 48 FF 24 90 4C 4C 44 20 50 44 42 2E
///   Age   = 1
///   PDB   = pdb_min.pdb
/// (`docs/`-pinned in tests/fixtures/README.md). This proves the directory
/// walk + RSDS decode on a genuine MSVC-ABI CodeView record, not a hand-blob.
#[test]
fn extract_pdb_min_exe_rsds_record() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pdb_min.exe");
    let bytes = std::fs::read(path).expect("read pdb_min.exe fixture");
    let info = extract_codeview(&bytes).expect("pdb_min.exe carries a CodeView RSDS record");

    let expected_guid: [u8; 16] = [
        0x63, 0x39, 0xAC, 0x61, 0x48, 0xFF, 0x24, 0x90, 0x4C, 0x4C, 0x44, 0x20, 0x50, 0x44, 0x42,
        0x2E,
    ];
    assert_eq!(
        info,
        CodeViewInfo::Rsds {
            guid: expected_guid,
            age: 1,
            pdb_path: "pdb_min.pdb".to_string(),
        },
        "extracted RSDS record must match llvm-readobj"
    );
    // The canonical text GUID (the form llvm-readobj/DIA print) the PR-P1 gate
    // would log.
    assert_eq!(
        info.guid_string().as_deref(),
        Some("61AC3963-FF48-9024-4C4C-44205044422E")
    );
}
