use super::super::{collect_entries, executable_sections, in_executable_section};

const HANDLER: u64 = 0x140001060; // address-taken, described by nothing else
const LABEL: u64 = 0x140001040; // interior to dispatch's .pdata record
const PAYLOAD: u64 = 0x1400010a0; // executable, but past everything .pdata vouches for
const DISPATCH: u64 = 0x140001020;

fn fixture() -> Vec<u8> {
    let path = format!(
        "{}/tests/fixtures/pe_reloctable_x86_64.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"))
}

/// The headline: a function only ever named by a relocated `.rdata` pointer
/// is discovered, and the jump-table label sharing that table is not.
#[test]
fn relocated_pointer_finds_address_taken_function() {
    let bytes = fixture();
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture PE");
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(
        entries.contains(&HANDLER),
        "address-taken {HANDLER:#x} missing from {entries:#x?}"
    );
    assert!(
        !entries.contains(&LABEL),
        "interior label {LABEL:#x} seeded as a function start"
    );
    assert!(
        entries.contains(&DISPATCH),
        "the .pdata oracle still answers"
    );
    let execs = executable_sections(&file);
    for &e in &entries {
        assert!(
            in_executable_section(&execs, e),
            "entry {e:#x} outside exec"
        );
    }
}

/// The `.rdata` table's third slot is relocated too, but points at the table
/// itself — a data pointer, not a code pointer.
#[test]
fn relocated_data_pointer_is_not_a_function() {
    let bytes = fixture();
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture PE");
    assert!(!collect_entries(&file, bytes.as_slice()).contains(&0x140002000));
}

/// Data merged into the executable section, past everything the exception
/// table vouches for, is not seeded however the section is flagged — the
/// `jormungandr.exe` shape, where 666 relocated pointers name a UTF-16
/// locale table living in `.text`.
#[test]
fn unvouched_executable_address_is_not_a_function() {
    let bytes = fixture();
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture PE");
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(
        !entries.contains(&PAYLOAD),
        "unvouched {PAYLOAD:#x} seeded from {entries:#x?}"
    );
}

/// The relocated addresses ahead of the first record are handed on as
/// candidates; the one past the last record is not.
#[test]
fn pre_record_pointers_stop_at_the_first_record() {
    let path = format!(
        "{}/tests/fixtures/pe_addrtaken_x86_64.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture PE");
    let execs = executable_sections(&file);
    assert_eq!(
        super::pre_record_code_pointers(&bytes, &execs),
        vec![0x140001000, 0x140001010, 0x140001020]
    );
    let other = fixture();
    let file = object::File::parse(other.as_slice()).expect("parse fixture PE");
    assert!(super::pre_record_code_pointers(&other, &executable_sections(&file)).is_empty());
}

/// Without `[begin, end)` bounds there is no way to tell a handler pointer
/// from a jump-table label, so the oracle abstains rather than guess: zeroing
/// the exception directory takes the address-taken function back out.
#[test]
fn no_exception_directory_abstains() {
    let mut bytes = fixture();
    // IMAGE_DIRECTORY_ENTRY_EXCEPTION is directory 3; the array starts at
    // opt-header + 112 for PE32+, and the opt header follows the 24-byte
    // NT header at e_lfanew.
    let lfanew = u32::from_le_bytes(bytes[0x3c..0x40].try_into().unwrap()) as usize;
    let dir3 = lfanew + 24 + 112 + 3 * 8;
    bytes[dir3..dir3 + 8].fill(0);
    let file = object::File::parse(bytes.as_slice()).expect("parse patched PE");
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(
        !entries.contains(&HANDLER),
        "oracle fired without unwind bounds: {entries:#x?}"
    );
}
