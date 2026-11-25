use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// The stripped PE has no symbols/exports, but `.pdata` + the entry point
/// recover its functions. `main` (0x140001592) and the entry (0x1400014f0)
/// are both `.pdata`-covered, so a stripped PE finds them with no `--addr`.
#[test]
fn pe_stripped_pdata_recovers_functions() {
    let bytes = fixture("pe_imports_stripped.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped PE");
    let cands = pe_entry_candidates(
        &file,
        bytes.as_slice(),
        &super::super::executable_sections(&file),
    );
    // The entry point (oracle 1).
    assert!(
        cands.contains(&0x1400014f0),
        "entry 0x1400014f0 missing from {cands:#x?}"
    );
    // `.pdata`-covered functions (oracle 2), incl. `main`.
    assert!(
        cands.contains(&0x140001592),
        "main 0x140001592 missing (.pdata)"
    );
    // The richest source: dozens of records in this binary.
    assert!(
        cands.len() >= 50,
        ".pdata should recover many functions, got {} candidates",
        cands.len()
    );
    // No spurious 0.
    assert!(!cands.contains(&0), "no zero candidate");
}

/// A chained (`UNW_FLAG_CHAININFO`) `RUNTIME_FUNCTION` names a separated
/// chunk of the record before it, so its `BeginAddress` is not a function
/// start (GH-403). The two ordinary records still are.
#[test]
fn pdata_chained_record_is_not_a_function_start() {
    let bytes = fixture("pe_chainedunwind_x86_64.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse chained-unwind PE");
    let cands = pe_entry_candidates(
        &file,
        bytes.as_slice(),
        &super::super::executable_sections(&file),
    );
    assert!(
        cands.contains(&0x140001000),
        "primary missing from {cands:#x?}"
    );
    assert!(
        cands.contains(&0x140001040),
        "entry point missing from {cands:#x?}"
    );
    assert!(
        !cands.contains(&0x140001020),
        "chained chunk 0x140001020 claimed as a function in {cands:#x?}"
    );
}

/// ARM64 `.pdata` holds 8-byte `{BeginAddress, UnwindData}` records. Read at
/// the x64 stride of 12 the probe's 32-byte directory yields two reads, one
/// of them landing on `record[1].UnwindData`; at the right stride all four
/// function starts come back.
#[test]
fn pdata_arm64_uses_the_eight_byte_record() {
    let bytes = fixture("pe_pdata_arm64.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse arm64 PE");
    let cands = pe_entry_candidates(
        &file,
        bytes.as_slice(),
        &super::super::executable_sections(&file),
    );
    for vma in [0x140001000u64, 0x140001010, 0x140001020, 0x140001030] {
        assert!(cands.contains(&vma), "{vma:#x} missing from {cands:#x?}");
    }
}

/// The record shape follows `FileHeader.Machine`, as Ghidra's
/// `ExceptionDataDirectory` does, and a machine that is neither an x86 nor
/// an ARM variant has no readable shape at all.
#[test]
fn pdata_form_dispatches_on_machine() {
    assert_eq!(
        PdataForm::for_machine(IMAGE_FILE_MACHINE_AMD64).map(PdataForm::record_size),
        Some(12)
    );
    assert_eq!(
        PdataForm::for_machine(IMAGE_FILE_MACHINE_I386).map(PdataForm::record_size),
        Some(12)
    );
    for arm in [
        IMAGE_FILE_MACHINE_ARM,
        IMAGE_FILE_MACHINE_ARMNT,
        IMAGE_FILE_MACHINE_ARM64,
        IMAGE_FILE_MACHINE_ARM64EC,
        IMAGE_FILE_MACHINE_ARM64X,
    ] {
        assert_eq!(
            PdataForm::for_machine(arm).map(PdataForm::record_size),
            Some(8),
            "machine {arm:#x}"
        );
    }
    // IA64, MIPS R4000, SH-4, PowerPC: each has its own record layout (a
    // MIPS one is 20 bytes), so none of them is read.
    for other in [0x0200u16, 0x0166, 0x01a6, 0x01f0, 0] {
        assert!(
            PdataForm::for_machine(other).is_none(),
            "machine {other:#x}"
        );
    }
}

/// An unsupported machine parses no exception directory at all rather than
/// reading it at the x64 stride and dereferencing dword[2] as an
/// `UNWIND_INFO` RVA. Same image, same `.pdata`, machine word retyped to
/// MIPS R4000: only the entry point (a different oracle) survives.
#[test]
fn pdata_unsupported_machine_is_not_parsed() {
    let mut bytes = fixture("pe_pdata_arm64.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse arm64 PE");
    let before = pe_entry_candidates(
        &file,
        bytes.as_slice(),
        &super::super::executable_sections(&file),
    );
    assert!(
        before.contains(&0x140001000),
        "fixture lost its .pdata: {before:#x?}"
    );

    let nt = u32::from_le_bytes([bytes[0x3c], bytes[0x3d], bytes[0x3e], bytes[0x3f]]) as usize;
    bytes[nt + 4..nt + 6].copy_from_slice(&0x0166u16.to_le_bytes());
    let file = object::File::parse(bytes.as_slice()).expect("parse retyped PE");
    let after = pe_entry_candidates(
        &file,
        bytes.as_slice(),
        &super::super::executable_sections(&file),
    );
    for vma in [0x140001000u64, 0x140001010, 0x140001020] {
        assert!(
            !after.contains(&vma),
            "{vma:#x} still parsed in {after:#x?}"
        );
    }
    // 0x140001030 is `AddressOfEntryPoint`, which oracle 1 still supplies.
    assert_eq!(
        after,
        vec![0x140001030],
        "only the entry point survives: {after:#x?}"
    );
}

/// The header page is no section, so no section flag ever spoke for the
/// bytes in it — but the image's own `AddressOfEntryPoint` does. Discovery
/// found nothing at all on this shape (both sections `MEM_EXECUTE`-clear,
/// the entry in the header page), so `unlace decompile-all` answered
/// `count: 0` on an image whose entry `unlace decompile --addr` renders in
/// full (`docs/re-needs/whole-binary-decompilation-treats.md`).
#[test]
fn a_header_page_entry_is_discovered() {
    let bytes = fixture("pe_headercode_i386.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse packed PE");
    let entries = super::super::collect_entries(&file, bytes.as_slice());
    assert_eq!(
        entries,
        vec![0x40_0154],
        "the declared entry is the only function"
    );
}

/// The other half of that rule: an entry inside a section the image flags
/// non-executable is NOT exempt. There the flag is a statement about those
/// bytes, and unlace answers it by naming the cause and the
/// `--define-function` that overrides it, which is what
/// `docs/re-needs/batch-silently-omits-explicitly.md` shipped.
#[test]
fn a_data_section_entry_is_not_discovered() {
    let bytes = fixture("pe_datasection_entry_i386.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse data-section PE");
    let entries = super::super::collect_entries(&file, bytes.as_slice());
    assert!(
        entries.is_empty(),
        "0x402001 is in a section flagged data: {entries:#x?}"
    );
}
