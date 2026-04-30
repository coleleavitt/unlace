//! Recover null-terminated ASCII string literals from data sections.

use std::collections::BTreeMap;

use crate::image::Section;

const MIN_STRING_LEN: usize = 4;

fn is_string_byte(b: u8) -> bool {
    matches!(b, 0x20..=0x7E | 0x0A | 0x09)
}

/// Scan a section for null-terminated printable ASCII strings.
///
/// Returns a map of virtual address → string content for every sequence
/// of at least `MIN_STRING_LEN` printable bytes followed by a null terminator.
fn scan_section(section: &Section) -> BTreeMap<u64, String> {
    let mut result = BTreeMap::new();
    let data = &section.data;
    let mut i = 0;

    while i < data.len() {
        if !is_string_byte(data[i]) {
            i += 1;
            continue;
        }

        let start = i;
        while i < data.len() && is_string_byte(data[i]) {
            i += 1;
        }

        let len = i - start;
        let has_null = i < data.len() && data[i] == 0x00;

        if len >= MIN_STRING_LEN && has_null {
            let s = String::from_utf8_lossy(&data[start..i]).into_owned();
            let vaddr = section.vaddr + start as u64;
            result.insert(vaddr, s);
        }

        if has_null {
            i += 1;
        }
    }

    result
}

pub fn scan_strings(sections: &[Section]) -> BTreeMap<u64, String> {
    let mut table = BTreeMap::new();

    for section in sections {
        match section.name.as_str() {
            ".rodata" | ".data" => {
                table.extend(scan_section(section));
            }
            _ => {}
        }
    }

    table
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::SectionFlags;

    fn make_section(name: &str, vaddr: u64, data: Vec<u8>) -> Section {
        let size = data.len() as u64;
        Section {
            name: name.to_string(),
            vaddr,
            size,
            data,
            flags: SectionFlags::READ,
        }
    }

    #[test]
    fn test_rodata_string_detected() {
        let mut data = vec![0u8; 4];
        data.extend_from_slice(b"Hello\0");
        data.extend_from_slice(b"World!\0");

        let section = make_section(".rodata", 0x2000, data);
        let table = scan_strings(&[section]);

        assert!(table.contains_key(&0x2004), "should find 'Hello' at 0x2004");
        assert_eq!(table[&0x2004], "Hello");
        assert!(table.contains_key(&0x200A), "should find 'World!' at 0x200A");
        assert_eq!(table[&0x200A], "World!");
    }

    #[test]
    fn test_short_strings_rejected() {
        let data = b"Hi\0AB\0ABCD\0".to_vec();
        let section = make_section(".rodata", 0x1000, data);
        let table = scan_strings(&[section]);

        assert!(!table.values().any(|s| s == "Hi"), "2-char string should be rejected");
        assert!(!table.values().any(|s| s == "AB"), "2-char string should be rejected");
        assert!(table.values().any(|s| s == "ABCD"), "4-char string should be accepted");
    }

    #[test]
    fn test_non_string_section_skipped() {
        let data = b"Hello\0".to_vec();
        let section = make_section(".text", 0x1000, data);
        let table = scan_strings(&[section]);

        assert!(table.is_empty(), ".text section should be skipped");
    }

    #[test]
    fn test_no_null_terminator_rejected() {
        let data = b"Hello World".to_vec();
        let section = make_section(".rodata", 0x1000, data);
        let table = scan_strings(&[section]);

        assert!(table.is_empty(), "strings without null terminator should be rejected");
    }

    #[test]
    fn test_data_section_scanned() {
        let data = b"test_data\0".to_vec();
        let section = make_section(".data", 0x4000, data);
        let table = scan_strings(&[section]);

        assert_eq!(table.get(&0x4000), Some(&"test_data".to_string()));
    }

    #[test]
    fn test_strings_with_whitespace() {
        let data = b"Hello\tWorld\n\0".to_vec();
        let section = make_section(".rodata", 0x1000, data);
        let table = scan_strings(&[section]);

        assert_eq!(table.get(&0x1000), Some(&"Hello\tWorld\n".to_string()));
    }

    #[test]
    fn test_fixture_rodata_strings() {
        let elf_data = std::fs::read("../../fixtures/debug_hello.elf")
            .expect("fixture debug_hello.elf must exist");
        let image = <crate::elf::ElfLoader as crate::Loader>::load(&elf_data)
            .expect("should parse debug_hello.elf");

        assert!(
            !image.string_table.is_empty(),
            "debug_hello.elf should have strings in .rodata",
        );

        let has_hello = image.string_table.values().any(|s| s.contains("Hello"));
        assert!(
            has_hello,
            "debug_hello.elf should contain 'Hello' string, got: {:?}",
            image.string_table,
        );
    }
}
