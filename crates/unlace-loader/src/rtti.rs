//! C++ RTTI (Run-Time Type Information) scanner and class hierarchy recovery.
//!
//! Parses `_ZTI*` typeinfo objects and `_ZTV*` vtable symbols to reconstruct
//! C++ class hierarchies and virtual method tables from stripped or
//! partially-stripped binaries.
//!
//! RTTI memory layouts (Itanium C++ ABI):
//!   - `__class_type_info`     : 16 bytes — no base classes
//!   - `__si_class_type_info`  : 24 bytes — single non-virtual base
//!   - `__vmi_class_type_info` : 24 + 16*N bytes — multiple/virtual bases

use std::collections::BTreeMap;

use crate::image::{BinaryImage, Endian};

/// Relationship to a base class.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BaseClass {
    /// Typeinfo address of the base class.
    pub typeinfo_addr: u64,
    /// Offset of the base sub-object within the derived class.
    pub offset: i64,
    /// Whether this is a virtual base.
    pub is_virtual: bool,
    /// Whether this is a public base.
    pub is_public: bool,
}

/// A recovered C++ class from RTTI.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CppClass {
    /// Mangled name (e.g. `6Animal`).
    pub mangled_name: String,
    /// Demangled name (e.g. `Animal`).
    pub demangled_name: String,
    /// Address of the typeinfo object (`_ZTI*`).
    pub typeinfo_addr: u64,
    /// Direct base classes.
    pub bases: Vec<BaseClass>,
    /// Address of the vtable (`_ZTV*`), if found.
    pub vtable_addr: Option<u64>,
    /// Virtual method slots: (slot_index, method_va).
    pub vtable_methods: Vec<(usize, u64)>,
}

/// Inheritance kind detected for a class.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InheritanceKind {
    None,
    Single,
    Multiple,
}

impl CppClass {
    pub fn inheritance_kind(&self) -> InheritanceKind {
        match self.bases.len() {
            0 => InheritanceKind::None,
            1 => InheritanceKind::Single,
            _ => InheritanceKind::Multiple,
        }
    }
}

/// All RTTI data recovered from a binary.
#[derive(Debug, Clone)]
pub struct RttiInfo {
    /// Classes keyed by typeinfo address.
    pub classes: BTreeMap<u64, CppClass>,
}

impl RttiInfo {
    pub fn empty() -> Self {
        Self {
            classes: BTreeMap::new(),
        }
    }

    pub fn is_empty(&self) -> bool {
        self.classes.is_empty()
    }

    /// Look up a class by its demangled name.
    pub fn class_by_name(&self, name: &str) -> Option<&CppClass> {
        self.classes.values().find(|c| c.demangled_name == name)
    }

    /// Build a map of typeinfo_addr -> Vec<child_typeinfo_addr> for hierarchy
    /// traversal.
    pub fn children_map(&self) -> BTreeMap<u64, Vec<u64>> {
        let mut map: BTreeMap<u64, Vec<u64>> = BTreeMap::new();
        for cls in self.classes.values() {
            for base in &cls.bases {
                map.entry(base.typeinfo_addr)
                    .or_default()
                    .push(cls.typeinfo_addr);
            }
        }
        map
    }
}

/// Known vtable-pointer prefixes that identify typeinfo kind.
const CLASS_TYPE_INFO_SUFFIX: &str = "__cxxabiv117__class_type_infoE";
const SI_CLASS_TYPE_INFO_SUFFIX: &str = "__cxxabiv120__si_class_type_infoE";
const VMI_CLASS_TYPE_INFO_SUFFIX: &str = "__cxxabiv121__vmi_class_type_infoE";

fn read_u32(data: &[u8], offset: usize, endian: Endian) -> Option<u32> {
    if offset + 4 > data.len() {
        return None;
    }
    let bytes: [u8; 4] = data[offset..offset + 4].try_into().ok()?;
    Some(match endian {
        Endian::Little => u32::from_le_bytes(bytes),
        Endian::Big => u32::from_be_bytes(bytes),
    })
}

fn read_bytes_at_va(image: &BinaryImage, va: u64, len: usize) -> Option<&[u8]> {
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
            let end = remaining.iter().position(|&b| b == 0).unwrap_or(remaining.len());
            let len = end.min(max_len);
            return String::from_utf8(remaining[..len].to_vec()).ok();
        }
    }
    None
}

/// Identify typeinfo kind by checking if the vtable pointer matches a known
/// ABI class. We check both resolved symbols and relocation targets.
fn identify_typeinfo_kind(
    image: &BinaryImage,
    vtable_ptr: u64,
    typeinfo_addr: u64,
) -> TypeInfoKind {
    // The vtable pointer in a typeinfo object points to the vtable of the
    // typeinfo class itself (e.g. __cxxabiv1::__si_class_type_info's vtable).
    // In a dynamically-linked binary, this slot may contain 0 (unresolved) and
    // the actual address is patched via relocation. Check relocations first.
    for reloc in &image.relocations {
        if reloc.addr == typeinfo_addr {
            if reloc.sym_name.contains(SI_CLASS_TYPE_INFO_SUFFIX) {
                return TypeInfoKind::SingleInheritance;
            }
            if reloc.sym_name.contains(VMI_CLASS_TYPE_INFO_SUFFIX) {
                return TypeInfoKind::VirtualMultipleInheritance;
            }
            if reloc.sym_name.contains(CLASS_TYPE_INFO_SUFFIX) {
                return TypeInfoKind::NoInheritance;
            }
        }
    }

    // Also check the symbol name at the vtable pointer address (+16 is the
    // standard offset from vtable start to the slot that typeinfo points to).
    if let Some(sym) = image.symbol_at(vtable_ptr) {
        if sym.name.contains(SI_CLASS_TYPE_INFO_SUFFIX) {
            return TypeInfoKind::SingleInheritance;
        }
        if sym.name.contains(VMI_CLASS_TYPE_INFO_SUFFIX) {
            return TypeInfoKind::VirtualMultipleInheritance;
        }
        if sym.name.contains(CLASS_TYPE_INFO_SUFFIX) {
            return TypeInfoKind::NoInheritance;
        }
    }

    TypeInfoKind::Unknown
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum TypeInfoKind {
    NoInheritance,
    SingleInheritance,
    VirtualMultipleInheritance,
    Unknown,
}

/// Demangle a typeinfo name string (the `_ZTS*` content, which is the mangled
/// class name without the `_ZTS` prefix). For example, `6Animal` → `Animal`,
/// `3Cat` → `Cat`.
fn demangle_typeinfo_name(raw: &str) -> String {
    parse_itanium_name(raw)
}

fn parse_itanium_name(s: &str) -> String {
    let bytes = s.as_bytes();
    let mut pos = 0;
    let mut parts = Vec::new();

    while pos < bytes.len() {
        if bytes[pos].is_ascii_digit() {
            let num_start = pos;
            while pos < bytes.len() && bytes[pos].is_ascii_digit() {
                pos += 1;
            }
            if let Ok(len) = s[num_start..pos].parse::<usize>() {
                if pos + len <= bytes.len() {
                    parts.push(&s[pos..pos + len]);
                    pos += len;
                    continue;
                }
            }
        }
        // Skip non-digit prefix characters (like 'N' for nested names).
        pos += 1;
    }

    if parts.is_empty() {
        s.to_string()
    } else {
        parts.join("::")
    }
}

fn parse_typeinfo_at(
    image: &BinaryImage,
    typeinfo_addr: u64,
    name: &str,
) -> Option<CppClass> {
    // [0] vtable ptr (8 bytes)
    let vtable_ptr = read_u64_at_va(image, typeinfo_addr)?;
    // [8] name ptr (8 bytes)
    let name_ptr = read_u64_at_va(image, typeinfo_addr + 8)?;

    let raw_name = read_cstring_at_va(image, name_ptr, 256)
        .unwrap_or_else(|| name.to_string());
    let demangled = demangle_typeinfo_name(&raw_name);

    let kind = identify_typeinfo_kind(image, vtable_ptr, typeinfo_addr);
    let mut bases = Vec::new();

    match kind {
        TypeInfoKind::SingleInheritance => {
            // [16] base_type ptr (8 bytes)
            if let Some(base_ptr) = read_u64_at_va(image, typeinfo_addr + 16) {
                if base_ptr != 0 {
                    bases.push(BaseClass {
                        typeinfo_addr: base_ptr,
                        offset: 0,
                        is_virtual: false,
                        is_public: true,
                    });
                }
            }
        }
        TypeInfoKind::VirtualMultipleInheritance => {
            // [16] flags (4 bytes)
            // [20] base_count (4 bytes)
            let section_data = find_section_data(image, typeinfo_addr + 16)?;
            let local_off = (typeinfo_addr + 16 - section_data.0) as usize;
            let _flags = read_u32(&section_data.1, local_off, image.endian)?;
            let base_count = read_u32(&section_data.1, local_off + 4, image.endian)?;

            for i in 0..base_count.min(32) {
                let base_offset = typeinfo_addr + 24 + (i as u64) * 16;
                let base_type_ptr = read_u64_at_va(image, base_offset)?;
                let offset_flags_raw = read_u64_at_va(image, base_offset + 8)?;

                let offset_val = (offset_flags_raw as i64) >> 8;
                let is_virtual = (offset_flags_raw & 1) != 0;
                let is_public = (offset_flags_raw & 2) != 0;

                if base_type_ptr != 0 {
                    bases.push(BaseClass {
                        typeinfo_addr: base_type_ptr,
                        offset: offset_val,
                        is_virtual,
                        is_public,
                    });
                }
            }
        }
        TypeInfoKind::NoInheritance | TypeInfoKind::Unknown => {}
    }

    Some(CppClass {
        mangled_name: raw_name,
        demangled_name: demangled,
        typeinfo_addr,
        bases,
        vtable_addr: None,
        vtable_methods: Vec::new(),
    })
}

fn find_section_data(image: &BinaryImage, va: u64) -> Option<(u64, &[u8])> {
    for section in &image.sections {
        let sec_end = section.vaddr + section.data.len() as u64;
        if va >= section.vaddr && va < sec_end {
            return Some((section.vaddr, &section.data));
        }
    }
    None
}

/// Scan for `_ZTI*` symbols and parse the typeinfo at each address.
fn scan_typeinfo_symbols(image: &BinaryImage) -> BTreeMap<u64, CppClass> {
    let mut classes = BTreeMap::new();

    for (addr, sym) in &image.symbols {
        if !sym.name.starts_with("_ZTI") {
            continue;
        }
        // Skip the ABI-internal typeinfo classes themselves.
        if sym.name.contains("__cxxabiv1") {
            continue;
        }

        let name_suffix = &sym.name[4..]; // strip "_ZTI"
        if let Some(cls) = parse_typeinfo_at(image, *addr, name_suffix) {
            classes.insert(*addr, cls);
        }
    }

    classes
}

/// Scan `_ZTV*` symbols to find vtable addresses and associate them with
/// typeinfo objects.
fn associate_vtables(image: &BinaryImage, classes: &mut BTreeMap<u64, CppClass>) {
    let name_to_ti: BTreeMap<String, u64> = classes
        .iter()
        .map(|(&addr, cls)| (cls.mangled_name.clone(), addr))
        .collect();

    for (addr, sym) in &image.symbols {
        if !sym.name.starts_with("_ZTV") {
            continue;
        }
        if sym.name.contains("__cxxabiv1") {
            continue;
        }

        let vtable_name = &sym.name[4..];

        if let Some(&ti_addr) = name_to_ti.get(vtable_name) {
            if let Some(cls) = classes.get_mut(&ti_addr) {
                cls.vtable_addr = Some(*addr);
            }
        }
    }
}

/// For each class with a known vtable, enumerate the virtual method slots.
///
/// Vtable layout (Itanium ABI):
///   [+0]  offset-to-top (ptrdiff_t)
///   [+8]  typeinfo pointer
///   [+16] virtual_func_0
///   [+24] virtual_func_1
///   ...
fn enumerate_vtable_methods(image: &BinaryImage, classes: &mut BTreeMap<u64, CppClass>) {
    // Collect (typeinfo_addr, vtable_addr, vtable_sym_size) triples to avoid
    // borrowing issues.
    let vtable_info: Vec<(u64, u64, u64)> = classes
        .iter()
        .filter_map(|(&ti_addr, cls)| {
            cls.vtable_addr.map(|va| {
                let size = image
                    .symbols
                    .get(&va)
                    .map(|s| s.size)
                    .unwrap_or(0);
                (ti_addr, va, size)
            })
        })
        .collect();

    for (ti_addr, vtable_addr, vtable_sym_size) in vtable_info {
        let mut methods = Vec::new();
        // Virtual methods start at vtable_addr + 16 (skip offset-to-top and
        // typeinfo ptr).
        let methods_start = vtable_addr + 16;
        let max_slots = if vtable_sym_size > 16 {
            ((vtable_sym_size - 16) / 8) as usize
        } else {
            64 // reasonable upper bound when symbol size is unknown
        };

        for slot in 0..max_slots {
            let slot_va = methods_start + (slot as u64) * 8;
            let method_ptr = match read_u64_at_va(image, slot_va) {
                Some(p) => p,
                None => break,
            };

            // Stop at null pointer or clearly invalid addresses.
            if method_ptr == 0 {
                break;
            }

            // A valid method pointer should be in the executable code range.
            let in_exec = image.sections.iter().any(|s| {
                s.flags.contains(crate::image::SectionFlags::EXEC)
                    && method_ptr >= s.vaddr
                    && method_ptr < s.vaddr + s.size
            });

            if !in_exec {
                break;
            }

            methods.push((slot, method_ptr));
        }

        if let Some(cls) = classes.get_mut(&ti_addr) {
            cls.vtable_methods = methods;
        }
    }
}

/// Scan the binary for RTTI data and build the class hierarchy.
pub fn scan_rtti(image: &BinaryImage) -> RttiInfo {
    let mut classes = scan_typeinfo_symbols(image);

    if classes.is_empty() {
        return RttiInfo::empty();
    }

    associate_vtables(image, &mut classes);
    enumerate_vtable_methods(image, &mut classes);

    RttiInfo { classes }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{ElfLoader, Loader};

    fn load_fixture(name: &str) -> BinaryImage {
        let path = format!("../../fixtures/{name}");
        let data = std::fs::read(&path).unwrap_or_else(|e| panic!("fixture {name}: {e}"));
        ElfLoader::load(&data).unwrap_or_else(|e| panic!("parse {name}: {e}"))
    }

    #[test]
    fn test_scan_rtti_finds_classes() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        assert!(
            !info.is_empty(),
            "cpp_rtti.elf should have RTTI classes",
        );

        // Should find Animal, Dog, Cat.
        let names: Vec<&str> = info
            .classes
            .values()
            .map(|c| c.demangled_name.as_str())
            .collect();

        assert!(
            names.contains(&"Animal"),
            "should find Animal class, got: {names:?}",
        );
        assert!(
            names.contains(&"Dog"),
            "should find Dog class, got: {names:?}",
        );
        assert!(
            names.contains(&"Cat"),
            "should find Cat class, got: {names:?}",
        );
    }

    #[test]
    fn test_rtti_inheritance_detected() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let animal = info.class_by_name("Animal").expect("Animal class");
        assert_eq!(
            animal.inheritance_kind(),
            InheritanceKind::None,
            "Animal should have no base classes",
        );

        let dog = info.class_by_name("Dog").expect("Dog class");
        assert_eq!(
            dog.inheritance_kind(),
            InheritanceKind::Single,
            "Dog should have single inheritance (from Animal)",
        );
        assert_eq!(dog.bases.len(), 1);
        assert_eq!(dog.bases[0].typeinfo_addr, animal.typeinfo_addr);
    }

    #[test]
    fn test_rtti_class_hierarchy_tree() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let children = info.children_map();
        let animal = info.class_by_name("Animal").expect("Animal");

        let animal_children = children.get(&animal.typeinfo_addr);
        assert!(
            animal_children.is_some(),
            "Animal should have derived classes",
        );

        let child_addrs = animal_children.unwrap();
        assert!(
            child_addrs.len() >= 2,
            "Animal should have at least 2 children (Dog, Cat), got {}",
            child_addrs.len(),
        );
    }

    #[test]
    fn test_rtti_vtable_association() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let dog = info.class_by_name("Dog").expect("Dog class");
        assert!(
            dog.vtable_addr.is_some(),
            "Dog should have a vtable address",
        );

        let cat = info.class_by_name("Cat").expect("Cat class");
        assert!(
            cat.vtable_addr.is_some(),
            "Cat should have a vtable address",
        );
    }

    #[test]
    fn test_vtable_methods_enumerated() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let dog = info.class_by_name("Dog").expect("Dog class");
        assert!(
            !dog.vtable_methods.is_empty(),
            "Dog should have virtual methods in its vtable",
        );

        // All method VAs should be non-zero.
        for (slot, va) in &dog.vtable_methods {
            assert!(*va != 0, "slot {} should have non-zero VA", slot);
        }
    }

    #[test]
    fn test_no_rtti_returns_empty() {
        let img = load_fixture("hello_world.elf");
        let info = scan_rtti(&img);
        assert!(info.is_empty(), "C binary should have no RTTI");
    }

    #[test]
    fn test_demangle_typeinfo_name() {
        assert_eq!(demangle_typeinfo_name("6Animal"), "Animal");
        assert_eq!(demangle_typeinfo_name("3Dog"), "Dog");
        assert_eq!(demangle_typeinfo_name("3Cat"), "Cat");
    }
}
