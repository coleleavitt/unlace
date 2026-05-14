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

use crate::demangle_swift::{is_swift_mangled, try_demangle_swift};
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
pub struct ObjcProtocol {
    pub name: String,
    pub protocol_addr: u64,
    pub protocols: Vec<String>,
    pub instance_methods: Vec<ObjcMethod>,
    pub class_methods: Vec<ObjcMethod>,
    pub optional_instance_methods: Vec<ObjcMethod>,
    pub optional_class_methods: Vec<ObjcMethod>,
    pub properties: Vec<ObjcProperty>,
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
    pub protocols: BTreeMap<u64, ObjcProtocol>,
}

impl ObjcInfo {
    pub fn empty() -> Self {
        Self {
            classes: BTreeMap::new(),
            categories: Vec::new(),
            protocols: BTreeMap::new(),
        }
    }

    pub fn is_empty(&self) -> bool {
        self.classes.is_empty() && self.categories.is_empty() && self.protocols.is_empty()
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

fn decode_objc_selector_name(raw: String) -> String {
    if is_swift_mangled(&raw) {
        if let Some(demangled) = try_demangle_swift(&raw) {
            return demangled;
        }
    }
    raw
}

fn read_selector_at_va(image: &BinaryImage, va: u64, max_len: usize) -> Option<String> {
    read_cstring_at_va(image, va, max_len).map(decode_objc_selector_name)
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
        .map(|p| {
            if p == 0 {
                Vec::new()
            } else {
                parse_method_list(image, p).unwrap_or_default()
            }
        })
        .unwrap_or_default();
    let protocols = read_u64_at_va(image, class_ro_ptr + 40)
        .map(|p| {
            if p == 0 {
                Vec::new()
            } else {
                parse_protocol_list(image, p).unwrap_or_default()
            }
        })
        .unwrap_or_default();
    let ivars = read_u64_at_va(image, class_ro_ptr + 48)
        .map(|p| {
            if p == 0 {
                Vec::new()
            } else {
                parse_ivar_list(image, p).unwrap_or_default()
            }
        })
        .unwrap_or_default();
    let properties = read_u64_at_va(image, class_ro_ptr + 64)
        .map(|p| {
            if p == 0 {
                Vec::new()
            } else {
                parse_property_list(image, p).unwrap_or_default()
            }
        })
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
            let name = read_selector_at_va(image, name_ptr, 256).unwrap_or_default();
            let type_encoding = read_cstring_at_va(image, types_ptr, 256).unwrap_or_default();
            if name.is_empty() {
                continue;
            }
            out.push(ObjcMethod {
                name,
                type_encoding,
                imp_addr,
            });
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
        out.push(ObjcIvar {
            name,
            offset,
            type_encoding,
        });
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
fn parse_protocol_ptrs(image: &BinaryImage, list_va: u64) -> Option<Vec<u64>> {
    let count = read_u64_at_va(image, list_va)?;
    if count == 0 || count > 1024 {
        return None;
    }
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count {
        let proto_ptr = read_u64_at_va(image, list_va + 8 + i * 8)?;
        if proto_ptr != 0 {
            out.push(proto_ptr);
        }
    }
    Some(out)
}

/// protocol_list_t: count(u64) followed by `count` protocol_t pointers.
/// Each protocol_t starts: isa(ptr) name(ptr) ... — callers that only need
/// conformance names use this shallow view. The full protocol method lists are
/// parsed separately by `parse_protocol_at` / `scan_objc_protocols`.
fn parse_protocol_list(image: &BinaryImage, list_va: u64) -> Option<Vec<String>> {
    let ptrs = parse_protocol_ptrs(image, list_va)?;
    let mut out = Vec::with_capacity(ptrs.len());
    for proto_ptr in ptrs {
        if let Some(proto) = parse_protocol_at(image, proto_ptr) {
            out.push(proto.name);
        } else if let Some(name_ptr) = read_u64_at_va(image, proto_ptr + 8)
            && let Some(name) = read_cstring_at_va(image, name_ptr, 256)
            && !name.is_empty()
        {
            out.push(name);
        }
    }
    Some(out)
}

/// protocol_t (ObjC 2.0, 64-bit) partial layout:
/// isa, name, protocols, instanceMethods, classMethods, optionalInstanceMethods,
/// optionalClassMethods, instanceProperties, ...
fn parse_protocol_at(image: &BinaryImage, proto_ptr: u64) -> Option<ObjcProtocol> {
    let name_ptr = read_u64_at_va(image, proto_ptr + 8)?;
    let name = read_cstring_at_va(image, name_ptr, 256)?;
    if name.is_empty() {
        return None;
    }

    let protocols_ptr = read_u64_at_va(image, proto_ptr + 16).unwrap_or(0);
    let instance_methods_ptr = read_u64_at_va(image, proto_ptr + 24).unwrap_or(0);
    let class_methods_ptr = read_u64_at_va(image, proto_ptr + 32).unwrap_or(0);
    let optional_instance_methods_ptr = read_u64_at_va(image, proto_ptr + 40).unwrap_or(0);
    let optional_class_methods_ptr = read_u64_at_va(image, proto_ptr + 48).unwrap_or(0);
    let properties_ptr = read_u64_at_va(image, proto_ptr + 56).unwrap_or(0);

    let protocols = if protocols_ptr == 0 {
        Vec::new()
    } else {
        parse_protocol_list(image, protocols_ptr).unwrap_or_default()
    };
    let instance_methods = if instance_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, instance_methods_ptr).unwrap_or_default()
    };
    let class_methods = if class_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, class_methods_ptr).unwrap_or_default()
    };
    let optional_instance_methods = if optional_instance_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, optional_instance_methods_ptr).unwrap_or_default()
    };
    let optional_class_methods = if optional_class_methods_ptr == 0 {
        Vec::new()
    } else {
        parse_method_list(image, optional_class_methods_ptr).unwrap_or_default()
    };
    let properties = if properties_ptr == 0 {
        Vec::new()
    } else {
        parse_property_list(image, properties_ptr).unwrap_or_default()
    };

    Some(ObjcProtocol {
        name,
        protocol_addr: proto_ptr,
        protocols,
        instance_methods,
        class_methods,
        optional_instance_methods,
        optional_class_methods,
        properties,
    })
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
    let protocols = scan_objc_protocols(image, &classes);

    ObjcInfo {
        classes,
        categories,
        protocols,
    }
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

fn scan_objc_protocols(
    image: &BinaryImage,
    classes: &BTreeMap<u64, ObjcClass>,
) -> BTreeMap<u64, ObjcProtocol> {
    let mut out = BTreeMap::new();

    if let Some(section) = image
        .sections
        .iter()
        .find(|s| s.name.contains("__objc_protolist") || s.name == "__objc_protolist")
    {
        let num_entries = section.data.len() / 8;
        for i in 0..num_entries {
            let offset = i * 8;
            let proto_ptr = match read_u64(&section.data, offset, image.endian) {
                Some(p) if p != 0 => p,
                _ => continue,
            };
            if let Some(proto) = parse_protocol_at(image, proto_ptr) {
                out.insert(proto_ptr, proto);
            }
        }
    }

    for list_ptr in classes.values().filter_map(|class| {
        read_u64_at_va(
            image,
            (read_u64_at_va(image, class.class_addr + 32)? & !0x7) + 40,
        )
    }) {
        if let Some(ptrs) = parse_protocol_ptrs(image, list_ptr) {
            for proto_ptr in ptrs {
                out.entry(proto_ptr).or_insert_with(|| {
                    parse_protocol_at(image, proto_ptr).unwrap_or_else(|| ObjcProtocol {
                        name: format!("protocol_0x{proto_ptr:X}"),
                        protocol_addr: proto_ptr,
                        protocols: Vec::new(),
                        instance_methods: Vec::new(),
                        class_methods: Vec::new(),
                        optional_instance_methods: Vec::new(),
                        optional_class_methods: Vec::new(),
                        properties: Vec::new(),
                    })
                });
            }
        }
    }

    out
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

/// Strip the `_OBJC_CLASS_$_` prefix (Apple's external ObjC class symbol
/// convention) and return the bare class name. Returns `None` for symbols
/// that don't match either the leading-underscore (Mach-O) or unprefixed
/// (some tooling normalizes the leading `_`) forms.
fn strip_objc_class_symbol(sym: &str) -> Option<&str> {
    sym.strip_prefix("_OBJC_CLASS_$_")
        .or_else(|| sym.strip_prefix("OBJC_CLASS_$_"))
}

/// Resolve the target class name for a category whose `cls` field points to
/// a class defined in this image *or* bound from another dylib (e.g. UIKit
/// extending `NSObject` from `libobjc.dylib`).
///
/// Resolution order:
///   1. `cat.class_name` — already filled in by the categorylist scan when
///      the class lives in `__objc_classlist` of this image.
///   2. `image.relocations` — Mach-O bind opcodes record the class slot VA
///      as a relocation against `_OBJC_CLASS_$_<Name>`.
///   3. `image.symbols` — local symbol at the class slot VA, same convention.
fn resolve_category_target(image: &BinaryImage, cat: &ObjcCategory) -> Option<String> {
    if let Some(name) = &cat.class_name {
        return Some(name.clone());
    }
    if cat.class_addr == 0 {
        return None;
    }
    for reloc in &image.relocations {
        if reloc.addr == cat.class_addr {
            if let Some(name) = strip_objc_class_symbol(&reloc.sym_name) {
                return Some(name.to_string());
            }
        }
    }
    if let Some(sym) = image.symbols.get(&cat.class_addr) {
        if let Some(name) = strip_objc_class_symbol(&sym.name) {
            return Some(name.to_string());
        }
    }
    None
}

/// Build a map from method implementation address to its fully-qualified
/// category namespace (`"Class+CategoryName"`).
///
/// ObjC categories splice methods into existing classes at runtime — including
/// classes defined in other dylibs (e.g. UIKit extends `NSObject` which lives
/// in `libobjc.dylib`). When rendering disassembly we want those category
/// methods to surface under the host class's namespace, not a synthetic
/// `<unknown>` bucket. The convention is to print them as
/// `+[Class(Category) selector]` in the symbolic listing; this map is the
/// lookup table the printer consumes (one entry per method `imp` address,
/// covering both instance and class methods on the category).
///
/// Categories whose target class can't be resolved (no `class_name`, no
/// matching relocation, no matching local symbol) are skipped — those methods
/// stay anonymous rather than getting mislabelled.
pub fn build_category_namespace_map(image: &BinaryImage) -> BTreeMap<u64, String> {
    let info = scan_objc_classlist(image);
    let mut out = BTreeMap::new();
    for cat in &info.categories {
        let class_name = match resolve_category_target(image, cat) {
            Some(n) => n,
            None => continue,
        };
        let qualified = format!("{class_name}+{}", cat.name);
        for m in cat.instance_methods.iter().chain(cat.class_methods.iter()) {
            if m.imp_addr != 0 {
                out.insert(m.imp_addr, qualified.clone());
            }
        }
    }
    out
}


/// Deduplicate ObjC category methods by merging categories for the same class.
///
/// When multiple categories extend the same class, their methods should be
/// unified into a single namespace for the decompiler output.
pub fn merge_category_methods(categories: &[ObjcCategory]) -> std::collections::BTreeMap<String, Vec<ObjcMethod>> {
    let mut merged: std::collections::BTreeMap<String, Vec<ObjcMethod>> = std::collections::BTreeMap::new();
    for cat in categories {
        let class_name = cat.class_name.as_deref().unwrap_or("(unknown)");
        let key = format!("{}+{}", class_name, cat.name);
        merged.entry(key).or_default().extend(cat.instance_methods.iter().cloned());
        merged.entry(format!("{}+{}", class_name, cat.name))
            .or_default()
            .extend(cat.class_methods.iter().cloned());
    }
    merged
/// Check which required protocol methods a class actually implements.
///
/// Returns a map of (protocol_name, method_selector) → implemented (bool).
pub fn check_protocol_conformance(
    class: &ObjcClass,
    protocols: &[(&str, &[&str])],
) -> std::collections::BTreeMap<(String, String), bool> {
    let mut result = std::collections::BTreeMap::new();
    let class_methods: std::collections::HashSet<&str> = class
        .methods
        .iter()
        .map(|m| m.name.as_str())
        .collect();

    for &(proto_name, required_methods) in protocols {
        for &method_sel in required_methods {
            let key = (proto_name.to_string(), method_sel.to_string());
            result.insert(key, class_methods.contains(method_sel));
        }
    }
    result
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
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
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
            Section {
                name: "__objc_classlist".into(),
                vaddr: classlist_va,
                size: classlist.len() as u64,
                data: classlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: class_va,
                size: class.len() as u64,
                data: class,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".into(),
                vaddr: ro_va,
                size: ro.len() as u64,
                data: ro,
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
            Section {
                name: "__objc_classlist".into(),
                vaddr: 0x10000,
                size: 8,
                data: class_va.to_le_bytes().to_vec(),
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: class_va,
                size: class.len() as u64,
                data: class,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".into(),
                vaddr: ro_va,
                size: ro.len() as u64,
                data: ro,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_ivars".into(),
                vaddr: ivar_list_va,
                size: ivars.len() as u64,
                data: ivars,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_props".into(),
                vaddr: prop_list_va,
                size: props.len() as u64,
                data: props,
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

    fn build_method_list_section(list_va: u64, entries: &[(u64, u64, u64)]) -> Vec<u8> {
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
    fn objc_protocol_method_lists_decode_swift_mangled_selectors() {
        let proto_name_va: u64 = 0x40000;
        let mangled_sel_va: u64 = 0x40020;
        let normal_sel_va: u64 = 0x40060;
        let types_va: u64 = 0x40080;
        let class_name_va: u64 = 0x40090;
        let mut text = vec![0u8; 0x120];
        text[0x00..0x0b].copy_from_slice(b"MyProtocol\0");
        text[0x20..0x32].copy_from_slice(b"_$s4main5sayHiyyF\0");
        text[0x60..0x6a].copy_from_slice(b"required:\0");
        text[0x80..0x84].copy_from_slice(b"v@:\0");
        text[0x90..0x9d].copy_from_slice(b"AdopterClass\0");

        let inst_mlist_va: u64 = 0x50000;
        let inst_mlist = build_method_list_section(
            inst_mlist_va,
            &[
                (mangled_sel_va, types_va, 0x1111),
                (normal_sel_va, types_va, 0x2222),
            ],
        );

        let proto_va: u64 = 0x60000;
        let mut proto = vec![0u8; 8]; // isa
        proto.extend_from_slice(&proto_name_va.to_le_bytes()); // name
        proto.extend_from_slice(&0u64.to_le_bytes()); // nested protocols
        proto.extend_from_slice(&inst_mlist_va.to_le_bytes()); // instanceMethods
        proto.extend_from_slice(&0u64.to_le_bytes()); // classMethods
        proto.extend_from_slice(&0u64.to_le_bytes()); // optionalInstanceMethods
        proto.extend_from_slice(&0u64.to_le_bytes()); // optionalClassMethods
        proto.extend_from_slice(&0u64.to_le_bytes()); // properties

        let protolist_va: u64 = 0x70000;
        let protolist = proto_va.to_le_bytes().to_vec();

        let class_ro_va: u64 = 0x30000;
        let proto_ref_list_va: u64 = 0x71000;
        let mut class_ro = vec![0u8; 24];
        class_ro.extend_from_slice(&class_name_va.to_le_bytes()); // name
        class_ro.extend_from_slice(&0u64.to_le_bytes()); // methods
        class_ro.extend_from_slice(&proto_ref_list_va.to_le_bytes()); // protocols
        class_ro.extend_from_slice(&0u64.to_le_bytes()); // ivars
        class_ro.extend_from_slice(&0u64.to_le_bytes()); // weak ivars
        class_ro.extend_from_slice(&0u64.to_le_bytes()); // properties

        let class_va: u64 = 0x20000;
        let mut class = vec![0u8; 32];
        class.extend_from_slice(&class_ro_va.to_le_bytes());

        let mut proto_ref_list = Vec::new();
        proto_ref_list.extend_from_slice(&1u64.to_le_bytes());
        proto_ref_list.extend_from_slice(&proto_va.to_le_bytes());

        let sections = vec![
            Section {
                name: "__objc_classlist".into(),
                vaddr: 0x10000,
                size: 8,
                data: class_va.to_le_bytes().to_vec(),
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA".into(),
                vaddr: class_va,
                size: class.len() as u64,
                data: class,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__DATA_CONST".into(),
                vaddr: class_ro_va,
                size: class_ro.len() as u64,
                data: class_ro,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_protolist".into(),
                vaddr: protolist_va,
                size: protolist.len() as u64,
                data: protolist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_proto".into(),
                vaddr: proto_va,
                size: proto.len() as u64,
                data: proto,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_methlist".into(),
                vaddr: inst_mlist_va,
                size: inst_mlist.len() as u64,
                data: inst_mlist,
                flags: SectionFlags::READ,
            },
            Section {
                name: "__objc_protorefs".into(),
                vaddr: proto_ref_list_va,
                size: proto_ref_list.len() as u64,
                data: proto_ref_list,
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
        let cls = info.classes.values().next().expect("one class");
        assert_eq!(cls.protocols, vec!["MyProtocol"]);
        assert_eq!(info.protocols.len(), 1);
        let proto = info.protocols.values().next().expect("protocol");
        assert_eq!(proto.name, "MyProtocol");
        assert_eq!(proto.instance_methods.len(), 2);
        assert_eq!(proto.instance_methods[0].name, "main.sayHi");
        assert_eq!(proto.instance_methods[0].imp_addr, 0x1111);
        assert_eq!(proto.instance_methods[1].name, "required:");
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

    // -------- build_category_namespace_map tests (t293) --------

    /// Build a complete synthetic image containing one internal class
    /// `MyClass` plus one category `Helpers` on it that adds two instance
    /// methods and one class method. The returned image is fed to
    /// `build_category_namespace_map` directly.
    fn make_image_with_internal_category() -> BinaryImage {
        // ---- class MyClass ----
        let class_name_va: u64 = 0x40000;
        let class_ro_va: u64 = 0x30000;
        let mut class_ro = vec![0u8; 24];
        class_ro.extend_from_slice(&class_name_va.to_le_bytes());
        let class_va: u64 = 0x20000;
        let mut class = vec![0u8; 32];
        class.extend_from_slice(&class_ro_va.to_le_bytes());
        let classlist_va: u64 = 0x10000;
        let classlist = class_va.to_le_bytes().to_vec();

        // ---- category "Helpers" on MyClass ----
        let cat_name_va: u64 = 0x40080;
        let foo_name_va: u64 = 0x40090;
        let bar_name_va: u64 = 0x400a0;
        let cm_name_va: u64 = 0x400b0;
        let types_va: u64 = 0x400c0;
        let mut text = vec![0u8; 0x200];
        text[..b"MyClass\0".len()].copy_from_slice(b"MyClass\0");
        text[0x80..0x88].copy_from_slice(b"Helpers\0");
        text[0x90..0x94].copy_from_slice(b"foo\0");
        text[0xa0..0xa4].copy_from_slice(b"bar\0");
        text[0xb0..0xb6].copy_from_slice(b"cMet\0\0");
        text[0xc0..0xc4].copy_from_slice(b"v@:\0");

        // instance method list at 0x50000: foo→0x1234, bar→0x5678
        let imlist_va: u64 = 0x50000;
        let imlist = build_method_list_section(
            imlist_va,
            &[(foo_name_va, types_va, 0x1234), (bar_name_va, types_va, 0x5678)],
        );

        // class method list at 0x50100: cMet→0x9abc
        let cmlist_va: u64 = 0x50100;
        let cmlist =
            build_method_list_section(cmlist_va, &[(cm_name_va, types_va, 0x9abc)]);

        // category struct at 0x60000
        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&class_va.to_le_bytes()); // cls -> our internal class
        cat.extend_from_slice(&imlist_va.to_le_bytes());
        cat.extend_from_slice(&cmlist_va.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes()); // protocols
        cat.extend_from_slice(&0u64.to_le_bytes()); // properties

        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section { name: "__objc_classlist".into(), vaddr: classlist_va, size: classlist.len() as u64, data: classlist, flags: SectionFlags::READ },
            Section { name: "__objc_catlist".into(), vaddr: catlist_va, size: catlist.len() as u64, data: catlist, flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: class_va, size: class.len() as u64, data: class, flags: SectionFlags::READ },
            Section { name: "__DATA_CONST".into(), vaddr: class_ro_va, size: class_ro.len() as u64, data: class_ro, flags: SectionFlags::READ },
            Section { name: "__DATA2".into(), vaddr: cat_va, size: cat.len() as u64, data: cat, flags: SectionFlags::READ },
            Section { name: "__objc_methlist".into(), vaddr: imlist_va, size: imlist.len() as u64, data: imlist, flags: SectionFlags::READ },
            Section { name: "__objc_methlist2".into(), vaddr: cmlist_va, size: cmlist.len() as u64, data: cmlist, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];
        make_test_image(sections)
    }

    #[test]
    fn category_namespace_map_internal_class() {
        let image = make_image_with_internal_category();
        let map = build_category_namespace_map(&image);

        // Three methods (2 instance + 1 class), all in the MyClass+Helpers
        // namespace.
        assert_eq!(map.len(), 3);
        assert_eq!(map.get(&0x1234).map(String::as_str), Some("MyClass+Helpers"));
        assert_eq!(map.get(&0x5678).map(String::as_str), Some("MyClass+Helpers"));
        assert_eq!(map.get(&0x9abc).map(String::as_str), Some("MyClass+Helpers"));
    }

    #[test]
    fn category_namespace_map_external_class_via_relocation() {
        // Category targeting NSObject from libobjc — class isn't in our
        // __objc_classlist; the cls slot is a bound pointer recorded as a
        // relocation against `_OBJC_CLASS_$_NSObject`.
        let cat_name_va: u64 = 0x40000;
        let foo_name_va: u64 = 0x40010;
        let types_va: u64 = 0x40020;
        let mut text = vec![0u8; 0x100];
        text[..7].copy_from_slice(b"UIExtra"); // category name
        text[0x10..0x14].copy_from_slice(b"foo\0");
        text[0x20..0x24].copy_from_slice(b"v@:\0");

        let mlist_va: u64 = 0x50000;
        let mlist = build_method_list_section(mlist_va, &[(foo_name_va, types_va, 0xAA00)]);

        // The "external class slot" — category's cls field points here.
        let class_slot_va: u64 = 0x80000;

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&class_slot_va.to_le_bytes()); // cls -> external slot
        cat.extend_from_slice(&mlist_va.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());

        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section { name: "__objc_catlist".into(), vaddr: catlist_va, size: catlist.len() as u64, data: catlist, flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: cat_va, size: cat.len() as u64, data: cat, flags: SectionFlags::READ },
            Section { name: "__objc_methlist".into(), vaddr: mlist_va, size: mlist.len() as u64, data: mlist, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];

        let mut image = make_test_image(sections);
        image.relocations.push(crate::image::Relocation {
            addr: class_slot_va,
            sym_name: "_OBJC_CLASS_$_NSObject".to_string(),
            kind: crate::image::RelocKind::GlobDat,
        });

        let map = build_category_namespace_map(&image);
        assert_eq!(map.len(), 1);
        // Note: cat.name is read as "UIExtra" — the b"UIExtra" wrote 7 bytes
        // followed by zeros from the pre-allocated buffer, so the C string
        // terminates at byte 7.
        assert_eq!(map.get(&0xAA00).map(String::as_str), Some("NSObject+UIExtra"));
    }

    #[test]
    fn category_namespace_map_external_class_via_symbol() {
        // Same as above but no relocation entry — instead the class slot VA
        // appears in `image.symbols` as `_OBJC_CLASS_$_NSString`.
        let cat_name_va: u64 = 0x40000;
        let foo_name_va: u64 = 0x40010;
        let types_va: u64 = 0x40020;
        let mut text = vec![0u8; 0x100];
        text[..6].copy_from_slice(b"Trim\0\0");
        text[0x10..0x14].copy_from_slice(b"foo\0");
        text[0x20..0x24].copy_from_slice(b"v@:\0");

        let mlist_va: u64 = 0x50000;
        let mlist = build_method_list_section(mlist_va, &[(foo_name_va, types_va, 0xBB00)]);

        let class_slot_va: u64 = 0x80000;

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&class_slot_va.to_le_bytes());
        cat.extend_from_slice(&mlist_va.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());

        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section { name: "__objc_catlist".into(), vaddr: catlist_va, size: catlist.len() as u64, data: catlist, flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: cat_va, size: cat.len() as u64, data: cat, flags: SectionFlags::READ },
            Section { name: "__objc_methlist".into(), vaddr: mlist_va, size: mlist.len() as u64, data: mlist, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];

        let mut image = make_test_image(sections);
        image.symbols.insert(class_slot_va, crate::image::Symbol {
            name: "_OBJC_CLASS_$_NSString".to_string(),
            addr: class_slot_va,
            size: 8,
            kind: crate::image::SymbolKind::Object,
        });

        let map = build_category_namespace_map(&image);
        assert_eq!(map.len(), 1);
        assert_eq!(map.get(&0xBB00).map(String::as_str), Some("NSString+Trim"));
    }

    #[test]
    fn category_namespace_map_skips_unresolved_target() {
        // Category whose cls slot is neither in our classlist nor in any
        // relocation/symbol — methods MUST NOT be inserted (we'd rather have
        // an anonymous method than mislabel it).
        let cat_name_va: u64 = 0x40000;
        let foo_name_va: u64 = 0x40010;
        let types_va: u64 = 0x40020;
        let mut text = vec![0u8; 0x100];
        text[..5].copy_from_slice(b"Lost\0");
        text[0x10..0x14].copy_from_slice(b"foo\0");
        text[0x20..0x24].copy_from_slice(b"v@:\0");

        let mlist_va: u64 = 0x50000;
        let mlist = build_method_list_section(mlist_va, &[(foo_name_va, types_va, 0xCC00)]);

        let cat_va: u64 = 0x60000;
        let mut cat = Vec::new();
        cat.extend_from_slice(&cat_name_va.to_le_bytes());
        cat.extend_from_slice(&0xDEADBEEFu64.to_le_bytes()); // unresolvable
        cat.extend_from_slice(&mlist_va.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());
        cat.extend_from_slice(&0u64.to_le_bytes());

        let catlist_va: u64 = 0x70000;
        let catlist = cat_va.to_le_bytes().to_vec();

        let sections = vec![
            Section { name: "__objc_catlist".into(), vaddr: catlist_va, size: catlist.len() as u64, data: catlist, flags: SectionFlags::READ },
            Section { name: "__DATA".into(), vaddr: cat_va, size: cat.len() as u64, data: cat, flags: SectionFlags::READ },
            Section { name: "__objc_methlist".into(), vaddr: mlist_va, size: mlist.len() as u64, data: mlist, flags: SectionFlags::READ },
            Section { name: "__TEXT".into(), vaddr: 0x40000, size: text.len() as u64, data: text, flags: SectionFlags::READ },
        ];
        let image = make_test_image(sections);

        // Sanity: scan_objc_classlist should still see the category itself
        // (just with class_name=None), so this isn't a "category dropped"
        // test — it's specifically about the namespace map's resolution.
        let info = scan_objc_classlist(&image);
        assert_eq!(info.categories.len(), 1);
        assert!(info.categories[0].class_name.is_none());

        let map = build_category_namespace_map(&image);
        assert!(map.is_empty(), "unresolved category target must not pollute the namespace map");
    }
}
