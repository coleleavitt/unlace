//! ObjC class extraction from `__DATA.__objc_classlist`.
//!
//! Parses the Mach-O `__objc_classlist` section to extract ObjC class names.
//! The section contains an array of pointers to `objc_class` structures.
//!
//! objc_class layout (64-bit):
//!   - `[0..8]`   isa pointer
//!   - `[8..16]`  superclass pointer
//!   - `[16..24]` cache pointer
//!   - `[24..32]` vtable pointer
//!   - `[32..40]` data pointer → class_ro_t
//!
//! class_ro_t layout (partial):
//!   - `[0..4]`   flags
//!   - `[4..8]`   instance start
//!   - `[8..12]`  instance size
//!   - `[12..16]` reserved (64-bit only)
//!   - `[16..24]` ivar layout
//!   - `[24..32]` name pointer → NUL-terminated class name

use std::collections::BTreeMap;

use crate::image::{BinaryImage, Endian};

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjcClass {
    pub name: String,
    pub class_addr: u64,
    pub superclass_addr: u64,
}

#[derive(Debug, Clone)]
pub struct ObjcInfo {
    pub classes: BTreeMap<u64, ObjcClass>,
}

impl ObjcInfo {
    pub fn empty() -> Self {
        Self {
            classes: BTreeMap::new(),
        }
    }

    pub fn is_empty(&self) -> bool {
        self.classes.is_empty()
    }
}

fn read_u64(data: &[u8], offset: usize, endian: Endian) -> Option<u64> {
    let bytes: [u8; 8] = data.get(offset..offset + 8)?.try_into().ok()?;
    Some(match endian {
        Endian::Little => u64::from_le_bytes(bytes),
        Endian::Big => u64::from_be_bytes(bytes),
    })
}

fn read_bytes_at_va<'a>(image: &'a BinaryImage, va: u64, len: usize) -> Option<&'a [u8]> {
    for section in &image.sections {
        let sec_end = section.vaddr + section.data.len() as u64;
        if va >= section.vaddr && va < sec_end {
            let offset = (va - section.vaddr) as usize;
            if offset + len <= section.data.len() {
                return Some(&section.data[offset..offset + len]);
            }
        }
    }
    None
}

fn read_u64_at_va(image: &BinaryImage, va: u64) -> Option<u64> {
    let bytes = read_bytes_at_va(image, va, 8)?;
    Some(match image.endian {
        Endian::Little => u64::from_le_bytes(bytes.try_into().ok()?),
        Endian::Big => u64::from_be_bytes(bytes.try_into().ok()?),
    })
}

fn read_cstring_at_va(image: &BinaryImage, va: u64, max_len: usize) -> Option<String> {
    for section in &image.sections {
        let sec_end = section.vaddr + section.data.len() as u64;
        if va >= section.vaddr && va < sec_end {
            let offset = (va - section.vaddr) as usize;
            let remaining = &section.data[offset..];
            let end = remaining
                .iter()
                .position(|&b| b == 0)
                .unwrap_or(remaining.len());
            let len = end.min(max_len);
            return String::from_utf8(remaining[..len].to_vec()).ok();
        }
    }
    None
}

fn parse_class_at(image: &BinaryImage, class_ptr: u64) -> Option<ObjcClass> {
    // objc_class: isa(8), superclass(8), cache(8), vtable(8), data(8)
    let _isa = read_u64_at_va(image, class_ptr)?;
    let superclass = read_u64_at_va(image, class_ptr + 8)?;
    let data_ptr = read_u64_at_va(image, class_ptr + 32)?;

    // data_ptr may have low bits set as flags (FAST_DATA_MASK)
    let class_ro_ptr = data_ptr & !0x7;

    if class_ro_ptr == 0 {
        return None;
    }

    // class_ro_t: flags(4), instance_start(4), instance_size(4), reserved(4),
    //             ivar_layout(8), name(8)
    let name_ptr = read_u64_at_va(image, class_ro_ptr + 24)?;
    let name = read_cstring_at_va(image, name_ptr, 256)?;

    if name.is_empty() {
        return None;
    }

    Some(ObjcClass {
        name,
        class_addr: class_ptr,
        superclass_addr: superclass,
    })
}

pub fn scan_objc_classlist(image: &BinaryImage) -> ObjcInfo {
    // Look for __objc_classlist section (Mach-O uses __DATA,__objc_classlist)
    let classlist_section = image
        .sections
        .iter()
        .find(|s| s.name.contains("__objc_classlist") || s.name == "__objc_classlist");

    let section = match classlist_section {
        Some(s) => s,
        None => return ObjcInfo::empty(),
    };

    let data = &section.data;
    let mut classes = BTreeMap::new();
    let ptr_size = 8usize;

    let num_entries = data.len() / ptr_size;
    for i in 0..num_entries {
        let offset = i * ptr_size;
        let class_ptr = match read_u64(data, offset, image.endian) {
            Some(p) if p != 0 => p,
            _ => continue,
        };

        if let Some(cls) = parse_class_at(image, class_ptr) {
            classes.insert(class_ptr, cls);
        }
    }

    ObjcInfo { classes }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Section, SectionFlags};

    fn make_test_image(sections: Vec<Section>) -> BinaryImage {
        BinaryImage {
            arch: ArchId::AArch64,
            endian: Endian::Little,
            entry: 0x1000,
            sections,
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
        pdb_types: None,
        }
    }

    #[test]
    fn test_synthetic_objc_classlist() {
        // Build synthetic sections:
        // 1. __objc_classlist at VA 0x10000: array of pointers to objc_class
        // 2. __DATA at VA 0x20000: objc_class struct
        // 3. __DATA_CONST at VA 0x30000: class_ro_t struct
        // 4. __TEXT at VA 0x40000: class name string

        let class_name = b"NSObject\0";
        let class_name_va: u64 = 0x40000;

        // class_ro_t: flags(4) + instance_start(4) + instance_size(4) + reserved(4) + ivar_layout(8) + name(8)
        let class_ro_va: u64 = 0x30000;
        let mut class_ro_data = vec![0u8; 24];
        class_ro_data.extend_from_slice(&class_name_va.to_le_bytes());

        // objc_class: isa(8) + superclass(8) + cache(8) + vtable(8) + data(8)
        let class_va: u64 = 0x20000;
        let mut class_data = vec![0u8; 32]; // isa + superclass + cache + vtable
        class_data.extend_from_slice(&class_ro_va.to_le_bytes()); // data ptr

        // classlist: one pointer to the class
        let classlist_va: u64 = 0x10000;
        let classlist_data = class_va.to_le_bytes().to_vec();

        let sections = vec![
            Section {
                name: "__objc_classlist".to_string(),
                vaddr: classlist_va,
                size: classlist_data.len() as u64,
                data: classlist_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".to_string(),
                vaddr: class_va,
                size: class_data.len() as u64,
                data: class_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".to_string(),
                vaddr: class_ro_va,
                size: class_ro_data.len() as u64,
                data: class_ro_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__TEXT".to_string(),
                vaddr: class_name_va,
                size: class_name.len() as u64,
                data: class_name.to_vec(),
                flags: SectionFlags::READ,
            },
        ];

        let image = make_test_image(sections);
        let info = scan_objc_classlist(&image);

        assert!(!info.is_empty());
        assert_eq!(info.classes.len(), 1);

        let cls = info.classes.get(&class_va).expect("class at class_va");
        assert_eq!(cls.name, "NSObject");
        assert_eq!(cls.class_addr, class_va);
    }

    #[test]
    fn test_no_classlist_returns_empty() {
        let image = make_test_image(vec![Section {
            name: ".text".to_string(),
            vaddr: 0x1000,
            size: 4,
            data: vec![0; 4],
            flags: SectionFlags::READ,
        }]);

        let info = scan_objc_classlist(&image);
        assert!(info.is_empty());
    }

    #[test]
    fn test_multiple_classes() {
        let name1 = b"MyClass\0";
        let name2 = b"MyOtherClass\0";
        let name1_va: u64 = 0x40000;
        let name2_va: u64 = 0x40100;

        let ro1_va: u64 = 0x30000;
        let mut ro1 = vec![0u8; 24];
        ro1.extend_from_slice(&name1_va.to_le_bytes());

        let ro2_va: u64 = 0x30100;
        let mut ro2 = vec![0u8; 24];
        ro2.extend_from_slice(&name2_va.to_le_bytes());

        let class1_va: u64 = 0x20000;
        let mut class1 = vec![0u8; 32];
        class1.extend_from_slice(&ro1_va.to_le_bytes());

        let class2_va: u64 = 0x20100;
        let mut class2 = vec![0u8; 32];
        class2.extend_from_slice(&ro2_va.to_le_bytes());

        let mut classlist = Vec::new();
        classlist.extend_from_slice(&class1_va.to_le_bytes());
        classlist.extend_from_slice(&class2_va.to_le_bytes());

        // Pack all data sections contiguously
        let data_va: u64 = 0x20000;
        let mut data_section = vec![0u8; 0x200];
        // class1 at offset 0
        data_section[..class1.len()].copy_from_slice(&class1);
        // class2 at offset 0x100
        data_section[0x100..0x100 + class2.len()].copy_from_slice(&class2);

        let ro_va: u64 = 0x30000;
        let mut ro_section = vec![0u8; 0x200];
        ro_section[..ro1.len()].copy_from_slice(&ro1);
        ro_section[0x100..0x100 + ro2.len()].copy_from_slice(&ro2);

        let text_va: u64 = 0x40000;
        let mut text_section = vec![0u8; 0x200];
        text_section[..name1.len()].copy_from_slice(name1);
        text_section[0x100..0x100 + name2.len()].copy_from_slice(name2);

        let sections = vec![
            Section {
                name: "__objc_classlist".to_string(),
                vaddr: 0x10000,
                size: classlist.len() as u64,
                data: classlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".to_string(),
                vaddr: data_va,
                size: data_section.len() as u64,
                data: data_section,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".to_string(),
                vaddr: ro_va,
                size: ro_section.len() as u64,
                data: ro_section,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__TEXT".to_string(),
                vaddr: text_va,
                size: text_section.len() as u64,
                data: text_section,
                flags: SectionFlags::READ,
            },
        ];

        let image = make_test_image(sections);
        let info = scan_objc_classlist(&image);

        assert_eq!(info.classes.len(), 2);
        let names: Vec<&str> = info.classes.values().map(|c| c.name.as_str()).collect();
        assert!(names.contains(&"MyClass"));
        assert!(names.contains(&"MyOtherClass"));
    }

    #[test]
    fn test_ios_kcm_objc_scan() {
        let path = "../../fixtures/ios_kcm.arm64.macho";
        let data = match std::fs::read(path) {
            Ok(d) => d,
            Err(_) => {
                eprintln!("Skipping: {path} not found");
                return;
            }
        };

        let image = <crate::macho::MachoLoader as crate::Loader>::load(&data)
            .expect("should parse ios_kcm.arm64.macho");

        let has_classlist = image
            .sections
            .iter()
            .any(|s| s.name.contains("__objc_classlist"));

        let info = scan_objc_classlist(&image);

        eprintln!("KCM has __objc_classlist section: {has_classlist}");
        eprintln!("KCM ObjC classes found: {}", info.classes.len());
        for cls in info.classes.values().take(10) {
            eprintln!("  class: {} @ {:#x}", cls.name, cls.class_addr);
        }

        // KCM may or may not have ObjC — just document the finding
        // The test passes regardless
    }
}
