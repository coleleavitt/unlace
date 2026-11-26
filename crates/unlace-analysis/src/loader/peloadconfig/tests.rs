use object::read::pe::{PeFile32, PeFile64};

use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// Every record of the Control Flow Guard function table is a start, in
/// table order; `op_add`, `op_xor` and `op_mix` are reached only through a
/// RIP-relative `lea` of their table.
#[test]
fn guard_cf_function_table_lists_address_taken_functions() {
    let bytes = fixture("pe_guardcf_x86_64.exe");
    let pe = PeFile64::parse(bytes.as_slice()).expect("parse PE32+");
    let want = [
        0x140001000,
        0x140001010,
        0x140001090,
        0x140001120,
        0x140001130,
        0x140001140,
        0x140001150,
    ];
    assert_eq!(function_starts(&pe, &bytes), want);
}

#[test]
fn safeseh_handler_table_lists_handlers() {
    let bytes = fixture("pe_safeseh_i386.exe");
    let pe = PeFile32::parse(bytes.as_slice()).expect("parse PE32");
    assert_eq!(function_starts(&pe, &bytes), [0x401000, 0x401010]);
}

#[test]
fn load_configuration_names_cookie_and_guard_slots() {
    let slots = image_named_slots(&fixture("pe_guardcf_x86_64.exe"));
    let want: [Slot; 3] = [
        (0x140003010, "__security_cookie"),
        (0x140003000, "__guard_check_icall_fptr"),
        (0x140003008, "__guard_dispatch_icall_fptr"),
    ];
    assert_eq!(slots, want);
}

/// The structure's own `Size` bounds every read: cut it to end before the
/// guard fields and only the security cookie is left.
#[test]
fn fields_past_the_declared_size_are_not_read() {
    let mut bytes = fixture("pe_guardcf_x86_64.exe");
    let pe = PeFile64::parse(bytes.as_slice()).expect("parse PE32+");
    let dir = pe
        .data_directories()
        .get(IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG)
        .expect("load config");
    let (off, _) = dir.file_range(&pe.section_table()).expect("file range");
    let size = offset_of!(ImageLoadConfigDirectory64, guard_cf_check_function_pointer) as u32;
    bytes[off as usize..off as usize + 4].copy_from_slice(&size.to_le_bytes());
    let pe = PeFile64::parse(bytes.as_slice()).expect("parse PE32+");
    assert!(function_starts(&pe, &bytes).is_empty());
    assert_eq!(
        named_slots(&pe, &bytes),
        [(0x140003010, "__security_cookie")]
    );
}
