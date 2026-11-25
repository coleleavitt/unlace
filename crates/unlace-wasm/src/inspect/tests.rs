use super::*;

fn section(name: &str, address: u64, size: u64, file_offset: Option<u64>) -> SectionRow {
    SectionRow {
        name: name.into(),
        address,
        size,
        file_offset,
        file_size: file_offset.map(|_| size),
        executable: false,
        writable: false,
    }
}

#[test]
fn file_offsets_come_from_the_file_backed_section_holding_the_address() {
    let sections = [
        section(".text", 0x1000, 0x100, Some(0x1000)),
        section(".bss", 0x4000, 0x20, None),
        section(".data", 0x3000, 0x10, Some(0x2000)),
    ];
    assert_eq!(file_offset(&sections, 0x1010), Some(0x1010));
    assert_eq!(file_offset(&sections, 0x300f), Some(0x200f));
    assert_eq!(file_offset(&sections, 0x3010), None);
    assert_eq!(file_offset(&sections, 0x4000), None);
    assert_eq!(file_offset(&sections, 0x10), None);
    let short = [SectionRow {
        file_size: Some(0x10),
        ..section(".data", 0x5000, 0x40, Some(0x3000))
    }];
    assert_eq!(file_offset(&short, 0x500f), Some(0x300f));
    assert_eq!(file_offset(&short, 0x5010), None);
}
