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
pub struct ObjcMethod {
    pub name: String,
    pub type_encoding: String,
    pub imp_addr: u64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjcIvar {
    pub name: String,
    pub offset: u32,
    pub type_encoding: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjcProperty {
    pub name: String,
    pub attributes: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjcClass {
    pub name: String,
    pub class_addr: u64,
    pub superclass_addr: u64,
    pub methods: Vec<ObjcMethod>,
    pub ivars: Vec<ObjcIvar>,
    pub properties: Vec<ObjcProperty>,
    pub protocols: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjcCategory {
    pub name: String,
    pub class_addr: u64,
    pub class_name: Option<String>,
    pub instance_methods: Vec<ObjcMethod>,
    pub class_methods: Vec<ObjcMethod>,
    pub properties: Vec<ObjcProperty>,
    pub protocols: Vec<String>,
}

#[derive(Debug, Clone)]
pub struct ObjcInfo {
    pub classes: BTreeMap<u64, ObjcClass>,
    pub categories: Vec<ObjcCategory>,
}

impl ObjcInfo {
    pub fn empty() -> Self {
        Self {
            classes: BTreeMap::new(),
            categories: Vec::new(),
        }
    }

    pub fn is_empty(&self) -> bool {
        self.classes.is_empty() && self.categories.is_empty()
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
    //             ivar_layout(8), name(8), baseMethods(8), baseProtocols(8),
    //             ivars(8), weakIvarLayout(8), baseProperties(8)
    let name_ptr = read_u64_at_va(image, class_ro_ptr + 24)?;
    let name = read_cstring_at_va(image, name_ptr, 256)?;

    if name.is_empty() {
        return None;
    }

    let methods = read_u64_at_va(image, class_ro_ptr + 32)
        .map(|p| if p == 0 { Vec::new() } else { parse_method_list(image, p).unwrap_or_default() })
        .unwrap_or_default();
    let protocols = read_u64_at_va(image, class_ro_ptr + 40)
        .map(|p| if p == 0 { Vec::new() } else { parse_protocol_list(image, p).unwrap_or_default() })
        .unwrap_or_default();
    let ivars = read_u64_at_va(image, class_ro_ptr + 48)
        .map(|p| if p == 0 { Vec::new() } else { parse_ivar_list(image, p).unwrap_or_default() })
        .unwrap_or_default();
    let properties = read_u64_at_va(image, class_ro_ptr + 64)
        .map(|p| if p == 0 { Vec::new() } else { parse_property_list(image, p).unwrap_or_default() })
        .unwrap_or_default();

    Some(ObjcClass {
        name,
        class_addr: class_ptr,
        superclass_addr: superclass,
        methods,
        ivars,
        properties,
        protocols,
    })
}

/// method_list_t: entsize(u32) | flags-bits-mixed-in (u32 count). Each entry:
/// name(ptr), types(ptr), imp(ptr) in legacy ABI. Newer ABI uses 12-byte
/// relative offsets; we conservatively decode the 24-byte legacy form first.
fn parse_method_list(image: &BinaryImage, list_va: u64) -> Option<Vec<ObjcMethod>> {
    let header = read_bytes_at_va(image, list_va, 8)?;
    let entsize = u32::from_le_bytes(header[0..4].try_into().ok()?) & 0xfffc;
    let count = u32::from_le_bytes(header[4..8].try_into().ok()?);
    if count == 0 || count > 4096 || entsize == 0 || entsize > 64 {
        return None;
    }
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count {
        let entry_va = list_va + 8 + (i as u64) * (entsize as u64);
        if entsize >= 24 {
            let name_ptr = read_u64_at_va(image, entry_va)?;
            let types_ptr = read_u64_at_va(image, entry_va + 8)?;
            let imp_addr = read_u64_at_va(image, entry_va + 16)?;
            let name = read_cstring_at_va(image, name_ptr, 256).unwrap_or_default();
            let type_encoding = read_cstring_at_va(image, types_ptr, 256).unwrap_or_default();
            if name.is_empty() {
                continue;
            }
            out.push(ObjcMethod { name, type_encoding, imp_addr });
        }
    }
    Some(out)
}

/// ivar_list_t: entsize(u32) count(u32). Entry layout:
/// offset_ptr(ptr) name(ptr) type(ptr) alignment(u32) size(u32) — 32 bytes.
fn parse_ivar_list(image: &BinaryImage, list_va: u64) -> Option<Vec<ObjcIvar>> {
    let header = read_bytes_at_va(image, list_va, 8)?;
    let entsize = u32::from_le_bytes(header[0..4].try_into().ok()?);
    let count = u32::from_le_bytes(header[4..8].try_into().ok()?);
    if count == 0 || count > 4096 || entsize < 32 || entsize > 64 {
        return None;
    }
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count {
        let entry_va = list_va + 8 + (i as u64) * (entsize as u64);
        let offset_ptr = read_u64_at_va(image, entry_va)?;
        let name_ptr = read_u64_at_va(image, entry_va + 8)?;
        let type_ptr = read_u64_at_va(image, entry_va + 16)?;
        let offset = read_bytes_at_va(image, offset_ptr, 4)
            .and_then(|b| b.try_into().ok())
            .map(u32::from_le_bytes)
            .unwrap_or(0);
        let name = read_cstring_at_va(image, name_ptr, 256).unwrap_or_default();
        let type_encoding = read_cstring_at_va(image, type_ptr, 256).unwrap_or_default();
        if name.is_empty() {
            continue;
        }
        out.push(ObjcIvar { name, offset, type_encoding });
    }
    Some(out)
}

/// property_list_t: entsize(u32) count(u32). Entry: name(ptr) attributes(ptr) — 16 bytes.
fn parse_property_list(image: &BinaryImage, list_va: u64) -> Option<Vec<ObjcProperty>> {
    let header = read_bytes_at_va(image, list_va, 8)?;
    let entsize = u32::from_le_bytes(header[0..4].try_into().ok()?);
    let count = u32::from_le_bytes(header[4..8].try_into().ok()?);
    if count == 0 || count > 4096 || entsize < 16 || entsize > 64 {
        return None;
    }
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count {
        let entry_va = list_va + 8 + (i as u64) * (entsize as u64);
        let name_ptr = read_u64_at_va(image, entry_va)?;
        let attr_ptr = read_u64_at_va(image, entry_va + 8)?;
        let name = read_cstring_at_va(image, name_ptr, 256).unwrap_or_default();
        let attributes = read_cstring_at_va(image, attr_ptr, 256).unwrap_or_default();
        if name.is_empty() {
            continue;
        }
        out.push(ObjcProperty { name, attributes });
    }
    Some(out)
}

/// protocol_list_t: count(u64) followed by `count` protocol_t pointers.
/// Each protocol_t starts: isa(ptr) name(ptr) ... — we extract just the name.
fn parse_protocol_list(image: &BinaryImage, list_va: u64) -> Option<Vec<String>> {
    let count = read_u64_at_va(image, list_va)?;
    if count == 0 || count > 1024 {
        return None;
    }
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count {
        let proto_ptr = read_u64_at_va(image, list_va + 8 + i * 8)?;
        if proto_ptr == 0 {
            continue;
        }
        let name_ptr = read_u64_at_va(image, proto_ptr + 8)?;
        if let Some(name) = read_cstring_at_va(image, name_ptr, 256) {
            if !name.is_empty() {
                out.push(name);
            }
        }
    }
    Some(out)
}

pub fn scan_objc_classlist(image: &BinaryImage) -> ObjcInfo {
    // Look for __objc_classlist section (Mach-O uses __DATA,__objc_classlist)
    let classlist_section = image
        .sections
        .iter()
        .find(|s| s.name.contains("__objc_classlist") || s.name == "__objc_classlist");

    let mut classes = BTreeMap::new();
    if let Some(section) = classlist_section {
        let data = &section.data;
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
    }

    let categories = scan_objc_categories_with_classes(image, &classes);

    ObjcInfo { classes, categories }
}

/// category_t (64-bit):
///   - `[0..8]`    name (cstring*)
///   - `[8..16]`   cls (class_t*)
///   - `[16..24]`  instanceMethods (method_list_t*)
///   - `[24..32]`  classMethods (method_list_t*)
///   - `[32..40]`  protocols (protocol_list_t*)
///   - `[40..48]`  instanceProperties (property_list_t*)
fn parse_category_at(
    image: &BinaryImage,
    cat_ptr: u64,
    classes: &BTreeMap<u64, ObjcClass>,
) -> Option<ObjcCategory> {
    let name_ptr = read_u64_at_va(image, cat_ptr)?;
    let cls_ptr = read_u64_at_va(image, cat_ptr + 8)?;
    let inst_methods_ptr = read_u64_at_va(image, cat_ptr + 16)?;
    let class_methods_ptr = read_u64_at_va(image, cat_ptr + 24)?;
    let protocols_ptr = read_u64_at_va(image, cat_ptr + 32)?;
    let props_ptr = read_u64_at_va(image, cat_ptr + 40)?;

    let name = read_cstring_at_va(image, name_ptr, 256)?;
    if name.is_empty() {
        return None;
    }

    let instance_methods = if inst_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, inst_methods_ptr).unwrap_or_default()
    };
    let class_methods = if class_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, class_methods_ptr).unwrap_or_default()
    };
    let properties = if props_ptr == 0 {
        Vec::new()
    } else {
        parse_property_list(image, props_ptr).unwrap_or_default()
    };
    let protocols = if protocols_ptr == 0 {
        Vec::new()
    } else {
        parse_protocol_list(image, protocols_ptr).unwrap_or_default()
    };

    let class_name = classes.get(&cls_ptr).map(|c| c.name.clone());

    Some(ObjcCategory {
        name,
        class_addr: cls_ptr,
        class_name,
        instance_methods,
        class_methods,
        properties,
        protocols,
    })
}

fn scan_objc_categories_with_classes(
    image: &BinaryImage,
    classes: &BTreeMap<u64, ObjcClass>,
) -> Vec<ObjcCategory> {
    let catlist_section = image
        .sections
        .iter()
        .find(|s| s.name.contains("__objc_catlist") || s.name == "__objc_catlist");

    let section = match catlist_section {
        Some(s) => s,
        None => return Vec::new(),
    };

    let data = &section.data;
    let ptr_size = 8usize;
    let num_entries = data.len() / ptr_size;
    let mut out = Vec::new();
    for i in 0..num_entries {
        let offset = i * ptr_size;
        let cat_ptr = match read_u64(data, offset, image.endian) {
            Some(p) if p != 0 => p,
            _ => continue,
        };
        if let Some(cat) = parse_category_at(image, cat_ptr, classes) {
            out.push(cat);
        }
    }
    out
}

/// Standalone scan of `__objc_catlist` without cross-referencing known classes.
pub fn scan_objc_categories(image: &BinaryImage) -> Vec<ObjcCategory> {
    scan_objc_categories_with_classes(image, &BTreeMap::new())
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
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
        pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
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
    fn test_class_with_methods() {
        // method_list at 0x50000: entsize=24, count=2,
        //   [name="foo" types="v@:" imp=0x1234], [name="bar" types="i@:" imp=0x5678].
        let foo_va: u64 = 0x40000;
        let bar_va: u64 = 0x40010;
        let v_at_va: u64 = 0x40020;
        let i_at_va: u64 = 0x40030;
        let mut text = vec![0u8; 0x100];
        text[..4].copy_from_slice(b"foo\0");
        text[0x10..0x14].copy_from_slice(b"bar\0");
        text[0x20..0x24].copy_from_slice(b"v@:\0");
        text[0x30..0x34].copy_from_slice(b"i@:\0");

        let mlist_va: u64 = 0x50000;
        let mut mlist = Vec::new();
        mlist.extend_from_slice(&24u32.to_le_bytes()); // entsize
        mlist.extend_from_slice(&2u32.to_le_bytes()); // count
        mlist.extend_from_slice(&foo_va.to_le_bytes());
        mlist.extend_from_slice(&v_at_va.to_le_bytes());
        mlist.extend_from_slice(&0x1234u64.to_le_bytes());
        mlist.extend_from_slice(&bar_va.to_le_bytes());
        mlist.extend_from_slice(&i_at_va.to_le_bytes());
        mlist.extend_from_slice(&0x5678u64.to_le_bytes());

        // class_ro at 0x30000: name="C" + baseMethods=mlist_va.
        let name_va: u64 = 0x40040;
        text[0x40..0x42].copy_from_slice(b"C\0");
        let ro_va: u64 = 0x30000;
        let mut ro = vec![0u8; 24];
        ro.extend_from_slice(&name_va.to_le_bytes()); // +24: name
        ro.extend_from_slice(&mlist_va.to_le_bytes()); // +32: baseMethods
        ro.extend_from_slice(&[0u8; 8]); // +40: baseProtocols
        ro.extend_from_slice(&[0u8; 8]); // +48: ivars
        ro.extend_from_slice(&[0u8; 8]); // +56: weakIvarLayout
        ro.extend_from_slice(&[0u8; 8]); // +64: baseProperties

        let class_va: u64 = 0x20000;
        let mut class = vec![0u8; 32];
        class.extend_from_slice(&ro_va.to_le_bytes());

        let classlist_va: u64 = 0x10000;
        let classlist = class_va.to_le_bytes().to_vec();

        let sections = vec![
            Section { name: "__objc_classlist".into(), vaddr: classlist_va, size: classlist.len() as u64, data: classlist, flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: class_va, size: class.len() as u64, data: class, flags: SectionFlags::READ },
            Section { name: "__DATA_CONST".into(), vaddr: ro_va, size: ro.len() as u64, data: ro, flags: SectionFlags::READ },
            Section { name: "__objc_methlist".into(), vaddr: mlist_va, size: mlist.len() as u64, data: mlist, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];

        let info = scan_objc_classlist(&make_test_image(sections));
        let cls = info.classes.values().next().expect("one class");
        assert_eq!(cls.name, "C");
        assert_eq!(cls.methods.len(), 2);
        assert_eq!(cls.methods[0].name, "foo");
        assert_eq!(cls.methods[0].imp_addr, 0x1234);
        assert_eq!(cls.methods[1].name, "bar");
        assert_eq!(cls.methods[1].imp_addr, 0x5678);
    }

    #[test]
    fn test_class_with_ivars_and_properties() {
        // ivar_list (32-byte entries): one ivar "_x" int32 at offset 8.
        let ivar_offset_va: u64 = 0x40000;
        let ivar_name_va: u64 = 0x40010;
        let ivar_type_va: u64 = 0x40020;
        let prop_name_va: u64 = 0x40030;
        let prop_attr_va: u64 = 0x40040;
        let class_name_va: u64 = 0x40050;
        let mut text = vec![0u8; 0x100];
        text[..4].copy_from_slice(&8u32.to_le_bytes()); // ivar offset value
        text[0x10..0x13].copy_from_slice(b"_x\0");
        text[0x20..0x22].copy_from_slice(b"i\0");
        text[0x30..0x33].copy_from_slice(b"px\0");
        text[0x40..0x44].copy_from_slice(b"T@\0\0");
        text[0x50..0x52].copy_from_slice(b"K\0");

        let ivar_list_va: u64 = 0x50000;
        let mut ivars = Vec::new();
        ivars.extend_from_slice(&32u32.to_le_bytes()); // entsize
        ivars.extend_from_slice(&1u32.to_le_bytes()); // count
        ivars.extend_from_slice(&ivar_offset_va.to_le_bytes()); // offset_ptr
        ivars.extend_from_slice(&ivar_name_va.to_le_bytes()); // name
        ivars.extend_from_slice(&ivar_type_va.to_le_bytes()); // type
        ivars.extend_from_slice(&4u32.to_le_bytes()); // alignment
        ivars.extend_from_slice(&4u32.to_le_bytes()); // size

        let prop_list_va: u64 = 0x50100;
        let mut props = Vec::new();
        props.extend_from_slice(&16u32.to_le_bytes()); // entsize
        props.extend_from_slice(&1u32.to_le_bytes()); // count
        props.extend_from_slice(&prop_name_va.to_le_bytes());
        props.extend_from_slice(&prop_attr_va.to_le_bytes());

        let ro_va: u64 = 0x30000;
        let mut ro = vec![0u8; 24];
        ro.extend_from_slice(&class_name_va.to_le_bytes()); // name
        ro.extend_from_slice(&[0u8; 8]); // baseMethods
        ro.extend_from_slice(&[0u8; 8]); // baseProtocols
        ro.extend_from_slice(&ivar_list_va.to_le_bytes()); // ivars
        ro.extend_from_slice(&[0u8; 8]); // weakIvarLayout
        ro.extend_from_slice(&prop_list_va.to_le_bytes()); // baseProperties

        let class_va: u64 = 0x20000;
        let mut class = vec![0u8; 32];
        class.extend_from_slice(&ro_va.to_le_bytes());

        let sections = vec![
            Section { name: "__objc_classlist".into(), vaddr: 0x10000, size: 8, data: class_va.to_le_bytes().to_vec(), flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: class_va, size: class.len() as u64, data: class, flags: SectionFlags::READ },
            Section { name: "__DATA_CONST".into(), vaddr: ro_va, size: ro.len() as u64, data: ro, flags: SectionFlags::READ },
            Section { name: "__objc_ivars".into(), vaddr: ivar_list_va, size: ivars.len() as u64, data: ivars, flags: SectionFlags::READ },
            Section { name: "__objc_props".into(), vaddr: prop_list_va, size: props.len() as u64, data: props, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];

        let info = scan_objc_classlist(&make_test_image(sections));
        let cls = info.classes.values().next().expect("one class");
        assert_eq!(cls.name, "K");
        assert_eq!(cls.ivars.len(), 1);
        assert_eq!(cls.ivars[0].name, "_x");
        assert_eq!(cls.ivars[0].offset, 8);
        assert_eq!(cls.ivars[0].type_encoding, "i");
        assert_eq!(cls.properties.len(), 1);
        assert_eq!(cls.properties[0].name, "px");
        assert_eq!(cls.properties[0].attributes, "T@");
    }

    fn build_method_list_section(
        list_va: u64,
        entries: &[(u64, u64, u64)],
    ) -> Vec<u8> {
        let mut mlist = Vec::new();
        mlist.extend_from_slice(&24u32.to_le_bytes());
        mlist.extend_from_slice(&(entries.len() as u32).to_le_bytes());
        for (name, types, imp) in entries {
            mlist.extend_from_slice(&name.to_le_bytes());
            mlist.extend_from_slice(&types.to_le_bytes());
            mlist.extend_from_slice(&imp.to_le_bytes());
        }
        let _ = list_va;
        mlist
    }

    #[test]
    fn parse_synthetic_category() {
        let cat_name_va: u64 = 0x40000;
        let foo_va: u64 = 0x40010;
        let bar_va: u64 = 0x40020;
        let t_foo_va: u64 = 0x40030;
        let t_bar_va: u64 = 0x40040;
        let mut text = vec![0u8; 0x100];
        text[..3].copy_from_slice(b"Ex\0");
        text[0x10..0x14].copy_from_slice(b"foo\0");
        text[0x20..0x24].copy_from_slice(b"bar\0");
        text[0x30..0x34].copy_from_slice(b"v@:\0");
        text[0x40..0x44].copy_from_slice(b"i@:\0");

        let mlist_va: u64 = 0x50000;
        let mlist = build_method_list_section(
            mlist_va,
            &[(foo_va, t_foo_va, 0x1234), (bar_va, t_bar_va, 0x5678)],
        );

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes()); // cls=NULL
        cat.extend_from_slice(&mlist_va.to_le_bytes()); // instanceMethods
        cat.extend_from_slice(&0u64.to_le_bytes()); // classMethods
        cat.extend_from_slice(&0u64.to_le_bytes()); // protocols
        cat.extend_from_slice(&0u64.to_le_bytes()); // properties

        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section {
                name: "__objc_catlist".into(),
                vaddr: catlist_va,
                size: catlist.len() as u64,
                data: catlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: cat_va,
                size: cat.len() as u64,
                data: cat,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_methlist".into(),
                vaddr: mlist_va,
                size: mlist.len() as u64,
                data: mlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__TEXT".into(),
                vaddr: 0x40000,
                size: text.len() as u64,
                data: text,
                flags: SectionFlags::READ,
            },
        ];

        let info = scan_objc_classlist(&make_test_image(sections));
        assert_eq!(info.categories.len(), 1);
        let cat = &info.categories[0];
        assert_eq!(cat.name, "Ex");
        assert_eq!(cat.instance_methods.len(), 2);
        assert_eq!(cat.instance_methods[0].name, "foo");
        assert_eq!(cat.instance_methods[1].name, "bar");
        assert!(cat.class_name.is_none());
    }

    #[test]
    fn category_class_name_resolves_when_class_known() {
        // Build a real class first.
        let class_name = b"MyClass\0";
        let class_name_va: u64 = 0x40000;
        let class_ro_va: u64 = 0x30000;
        let mut class_ro_data = vec![0u8; 24];
        class_ro_data.extend_from_slice(&class_name_va.to_le_bytes());
        let class_va: u64 = 0x20000;
        let mut class_data = vec![0u8; 32];
        class_data.extend_from_slice(&class_ro_va.to_le_bytes());
        let classlist_va: u64 = 0x10000;
        let classlist_data = class_va.to_le_bytes().to_vec();

        // Category referencing that class.
        let cat_name_va: u64 = 0x40080;
        let mut text = vec![0u8; 0x200];
        text[..class_name.len()].copy_from_slice(class_name);
        text[0x80..0x86].copy_from_slice(b"Extra\0");

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&class_va.to_le_bytes()); // cls -> known class
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section {
                name: "__objc_classlist".into(),
                vaddr: classlist_va,
                size: classlist_data.len() as u64,
                data: classlist_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_catlist".into(),
                vaddr: catlist_va,
                size: catlist.len() as u64,
                data: catlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: class_va,
                size: class_data.len() as u64,
                data: class_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".into(),
                vaddr: class_ro_va,
                size: class_ro_data.len() as u64,
                data: class_ro_data,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA2".into(),
                vaddr: cat_va,
                size: cat.len() as u64,
                data: cat,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__TEXT".into(),
                vaddr: 0x40000,
                size: text.len() as u64,
                data: text,
                flags: SectionFlags::READ,
            },
        ];

        let info = scan_objc_classlist(&make_test_image(sections));
        assert_eq!(info.categories.len(), 1);
        let cat = &info.categories[0];
        assert_eq!(cat.name, "Extra");
        assert_eq!(cat.class_name.as_deref(), Some("MyClass"));
        assert_eq!(cat.class_addr, class_va);
    }

    #[test]
    fn category_class_name_unknown_when_class_external() {
        let cat_name_va: u64 = 0x40000;
        let mut text = vec![0u8; 0x40];
        text[..4].copy_from_slice(b"Ext\0");

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&0xCAFEBABEu64.to_le_bytes()); // cls outside scanned classes
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section {
                name: "__objc_catlist".into(),
                vaddr: catlist_va,
                size: catlist.len() as u64,
                data: catlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: cat_va,
                size: cat.len() as u64,
                data: cat,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__TEXT".into(),
                vaddr: 0x40000,
                size: text.len() as u64,
                data: text,
                flags: SectionFlags::READ,
            },
        ];

        let info = scan_objc_classlist(&make_test_image(sections));
        assert_eq!(info.categories.len(), 1);
        assert_eq!(info.categories[0].name, "Ext");
        assert!(info.categories[0].class_name.is_none());
        assert_eq!(info.categories[0].class_addr, 0xCAFEBABE);
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
