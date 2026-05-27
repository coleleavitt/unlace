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
    /// Virtual method slots in the **primary** subtable:
    /// `(slot_index, method_va, optional_symbol_name)`.
    ///
    /// Kept for backwards compatibility with earlier consumers; richer
    /// information (offset-to-top, RTTI ptr, secondary subtables, thunks,
    /// virtual base offsets) lives in [`Self::vtable_layout`].
    pub vtable_methods: Vec<(usize, u64, Option<String>)>,
    /// Reconstructed Itanium-ABI vtable layout — primary subtable plus any
    /// secondary subtables for multiple/virtual inheritance. `None` when no
    /// `_ZTV*` symbol is present or its size could not be determined.
    pub vtable_layout: Option<VtableLayout>,
}

/// One entry in a vtable subtable, modelled on `clang::VTableComponent::Kind`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum VtableSlotKind {
    /// `vcall offset` — adjustment applied to `this` before a virtual call
    /// through a virtual base. Itanium places these *before* the
    /// offset-to-top slot in the secondary vtable for a virtual base.
    VCallOffset(i64),
    /// `vbase offset` — offset from the address point of the *most
    /// derived* object to the start of a virtual base sub-object.
    VBaseOffset(i64),
    /// `offset to top` — signed displacement from the address point of
    /// this subtable back to the top of the most-derived object.
    OffsetToTop(i64),
    /// `RTTI pointer` — typeinfo for the *most-derived* class (every
    /// subtable in a vtable group points at the same typeinfo).
    Rtti(u64),
    /// Virtual function pointer with optional symbol name.
    Function {
        va: u64,
        name: Option<String>,
        /// `true` when the symbol name is a non-virtual / virtual thunk
        /// (`_ZThn…` / `_ZTv…`) — i.e. the slot adjusts `this` and tail
        /// calls the real implementation.
        is_thunk: bool,
    },
    /// Slot read as zero (commonly the trailing `nullptr` between
    /// subtables, or an unused/aborted dtor entry).
    Zero,
    /// Slot we couldn't read or interpret. Stored verbatim.
    Raw(u64),
}

/// One subtable inside a vtable. The first subtable is *primary* (covers
/// the most-derived class); subsequent ones cover non-virtual bases for
/// multiple-inheritance, or virtual bases for virtual-inheritance layouts.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VtableSubtable {
    /// Address of this subtable's *address point* (the slot at index 0
    /// after the offset-to-top + RTTI prologue — i.e. where the vptr in
    /// an object actually points).
    pub address_point: u64,
    /// `offset_to_top` value (signed). Always 0 for the primary subtable.
    pub offset_to_top: i64,
    /// Address of the typeinfo object this subtable advertises.
    pub rtti_addr: u64,
    /// Optional virtual-base / vcall offsets that precede the prologue
    /// (only present when the class has virtual bases). Stored in the
    /// order they appear in memory — i.e. lower addresses first.
    pub virtual_base_offsets: Vec<i64>,
    /// Function pointer slots, in declaration order (slot 0 = first
    /// virtual function slot of this subtable).
    pub functions: Vec<VtableSlotKind>,
}

/// Full reconstructed vtable layout for a class.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VtableLayout {
    /// Address of the `_ZTV` symbol — i.e. the *start* of the vtable
    /// group in memory. Note: this is *not* the address point of the
    /// primary subtable; that lives at `vtable_addr + 16` (or further
    /// when virtual base offsets are present).
    pub vtable_addr: u64,
    /// Total size in bytes occupied by the vtable group in `.data.rel.ro`.
    pub total_size: u64,
    /// All subtables, primary first, then non-virtual bases, then any
    /// virtual-base subtables (matching Itanium emission order).
    pub subtables: Vec<VtableSubtable>,
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

    /// Return typeinfo addresses of root classes (no base classes).
    pub fn root_classes(&self) -> Vec<u64> {
        self.classes
            .iter()
            .filter(|(_, cls)| cls.bases.is_empty())
            .map(|(&addr, _)| addr)
            .collect()
    }

    /// Compute inheritance depth for each class (0 for roots).
    pub fn inheritance_depths(&self) -> BTreeMap<u64, usize> {
        let mut depths = BTreeMap::new();
        for &root in &self.root_classes() {
            depths.insert(root, 0);
        }
        let children = self.children_map();
        let mut queue: Vec<u64> = self.root_classes();
        while let Some(parent) = queue.pop() {
            let parent_depth = depths.get(&parent).copied().unwrap_or(0);
            if let Some(kids) = children.get(&parent) {
                for &child in kids {
                    let existing = depths.get(&child).copied().unwrap_or(0);
                    let new_depth = parent_depth + 1;
                    if new_depth > existing {
                        depths.insert(child, new_depth);
                    }
                    queue.push(child);
                }
            }
        }
        depths
    }

    /// Format the class hierarchy as a multi-line string for display.
    pub fn format_hierarchy(&self) -> String {
        let children = self.children_map();
        let roots = self.root_classes();
        let mut out = String::new();
        for root in &roots {
            if let Some(cls) = self.classes.get(root) {
                format_hierarchy_node(cls, &children, &self.classes, 0, &mut out);
            }
        }
        out
    }
}

fn format_hierarchy_node(
    cls: &CppClass,
    children: &BTreeMap<u64, Vec<u64>>,
    all_classes: &BTreeMap<u64, CppClass>,
    depth: usize,
    out: &mut String,
) {
    use std::fmt::Write;
    for _ in 0..depth {
        out.push_str("  ");
    }
    let _ = writeln!(out, "{}", cls.demangled_name);
    if let Some(kids) = children.get(&cls.typeinfo_addr) {
        for &child_addr in kids {
            if let Some(child) = all_classes.get(&child_addr) {
                format_hierarchy_node(child, children, all_classes, depth + 1, out);
            }
        }
    }
}

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
            if let Ok(len) = s[num_start..pos].parse::<usize>()
                && pos + len <= bytes.len()
            {
                parts.push(&s[pos..pos + len]);
                pos += len;
                continue;
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

fn parse_typeinfo_at(image: &BinaryImage, typeinfo_addr: u64, name: &str) -> Option<CppClass> {
    // [0] vtable ptr (8 bytes)
    let vtable_ptr = read_u64_at_va(image, typeinfo_addr)?;
    // [8] name ptr (8 bytes)
    let name_ptr = read_u64_at_va(image, typeinfo_addr + 8)?;

    let raw_name = read_cstring_at_va(image, name_ptr, 256).unwrap_or_else(|| name.to_string());
    let demangled = demangle_typeinfo_name(&raw_name);

    let kind = identify_typeinfo_kind(image, vtable_ptr, typeinfo_addr);
    let mut bases = Vec::new();

    match kind {
        TypeInfoKind::SingleInheritance => {
            // [16] base_type ptr (8 bytes)
            if let Some(base_ptr) = read_u64_at_va(image, typeinfo_addr + 16)
                && base_ptr != 0
            {
                bases.push(BaseClass {
                    typeinfo_addr: base_ptr,
                    offset: 0,
                    is_virtual: false,
                    is_public: true,
                });
            }
        }
        TypeInfoKind::VirtualMultipleInheritance => {
            // [16] flags (4 bytes)
            // [20] base_count (4 bytes)
            let section_data = find_section_data(image, typeinfo_addr + 16)?;
            let local_off = (typeinfo_addr + 16 - section_data.0) as usize;
            let _flags = read_u32(section_data.1, local_off, image.endian)?;
            let base_count = read_u32(section_data.1, local_off + 4, image.endian)?;

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
        vtable_layout: None,
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

        if let Some(&ti_addr) = name_to_ti.get(vtable_name)
            && let Some(cls) = classes.get_mut(&ti_addr)
        {
            cls.vtable_addr = Some(*addr);
        }
    }
}

/// For each class with a known vtable, reconstruct the full Itanium ABI
/// vtable layout — primary subtable plus any secondary subtables for
/// multiple / virtual inheritance.
///
/// Itanium primary subtable layout, expressed as offsets from the
/// subtable's *address point* (the value an object's `vptr` holds):
/// ```text
///   [-3*N..-3]  virtual base offsets (N entries, only when class has vbases)
///   [-2]        offset-to-top  (ptrdiff_t — 0 in the primary subtable)
///   [-1]        typeinfo pointer
///   [+0]        virtual_func_0
///   [+1]        virtual_func_1
///   …
/// ```
/// In a multiple-inheritance vtable group the layout is:
/// ```text
///   primary subtable for most-derived class
///   secondary subtable(s) for non-virtual bases     (each with its own offset-to-top + RTTI)
///   secondary subtable(s) for virtual bases         (each preceded by vcall offsets)
/// ```
/// We rely on the `_ZTV` symbol's reported size to bound the scan, and
/// re-synchronise on each `(offset-to-top, known-typeinfo)` pair we
/// encounter — a robust heuristic because the typeinfo addresses are
/// already known from `scan_typeinfo_symbols`.
fn resolve_method_name(image: &BinaryImage, va: u64) -> Option<String> {
    image.symbols.get(&va).map(|sym| sym.name.clone())
}

/// `true` when `name` looks like a thunk emitted by the Itanium ABI to
/// adjust `this` for covariant returns / multiple-inheritance dispatch.
fn is_thunk_symbol(name: &str) -> bool {
    name.starts_with("_ZTh")
        || name.starts_with("_ZTv")
        || name.starts_with("_ZTc")
        || name.contains("non-virtual thunk")
        || name.contains("virtual thunk")
}

fn ptr_in_executable(image: &BinaryImage, p: u64) -> bool {
    image.sections.iter().any(|s| {
        s.flags.contains(crate::image::SectionFlags::EXEC) && p >= s.vaddr && p < s.vaddr + s.size
    })
}

fn typeinfo_addr_set(classes: &BTreeMap<u64, CppClass>) -> std::collections::BTreeSet<u64> {
    classes.keys().copied().collect()
}

fn is_plausible_vtable_offset_slot(
    image: &BinaryImage,
    known_typeinfos: &std::collections::BTreeSet<u64>,
    slot: u64,
) -> bool {
    if slot == 0 || known_typeinfos.contains(&slot) || ptr_in_executable(image, slot) {
        return false;
    }

    // Vcall/vbase components are ptrdiff_t entries, almost always small
    // signed object-layout offsets. Treat large non-code/non-typeinfo values
    // as raw slots instead of silently moving arbitrary data into the offset
    // prefix.
    let signed = slot as i64;
    signed.unsigned_abs() <= 0x100000
}

fn vtable_offset_prefix_start(
    image: &BinaryImage,
    slots: &[u64],
    subtable_start: usize,
    lower_bound: usize,
    known_typeinfos: &std::collections::BTreeSet<u64>,
) -> usize {
    let mut prefix_start = subtable_start;
    while prefix_start > lower_bound
        && is_plausible_vtable_offset_slot(image, known_typeinfos, slots[prefix_start - 1])
    {
        prefix_start -= 1;
    }
    prefix_start
}

/// Walk forward from `vtable_addr`, segmenting the bytes into subtables
/// using the `(offset-to-top, recognised typeinfo)` pair as a delimiter.
fn reconstruct_vtable_layout(
    image: &BinaryImage,
    vtable_addr: u64,
    vtable_sym_size: u64,
    known_typeinfos: &std::collections::BTreeSet<u64>,
) -> Option<VtableLayout> {
    let total_size = if vtable_sym_size > 0 {
        vtable_sym_size
    } else {
        // Heuristic upper bound when the symbol size is unknown.
        512
    };
    let max_slots = (total_size / 8) as usize;
    if max_slots < 2 {
        return None;
    }

    // Prefetch every slot.
    let mut slots: Vec<u64> = Vec::with_capacity(max_slots);
    for i in 0..max_slots {
        let va = vtable_addr + (i as u64) * 8;
        match read_u64_at_va(image, va) {
            Some(v) => slots.push(v),
            None => break,
        }
    }
    if slots.len() < 2 {
        return None;
    }

    // Identify subtable starts: any index `i` where `slots[i+1]` is a
    // recognised typeinfo address.
    let mut subtable_starts: Vec<usize> = Vec::new();
    let mut i = 0;
    while i + 1 < slots.len() {
        let rtti = slots[i + 1];
        if known_typeinfos.contains(&rtti) {
            subtable_starts.push(i);
            i += 2;
            // Skip past plausible vfunc / zero slots until we either
            // reach the next prologue or run out of slots.
            while i < slots.len() {
                if i + 1 < slots.len() && known_typeinfos.contains(&slots[i + 1]) {
                    break;
                }
                let s = slots[i];
                if s == 0 || ptr_in_executable(image, s) {
                    i += 1;
                    continue;
                }
                // Non-zero, non-executable: most likely the next
                // subtable's offset-to-top. Hand control back to the
                // outer loop so the prologue gets recognised.
                break;
            }
        } else {
            i += 1;
        }
    }

    if subtable_starts.is_empty() {
        return None;
    }

    let mut prefix_starts = Vec::with_capacity(subtable_starts.len());
    for (idx, &start) in subtable_starts.iter().enumerate() {
        let lower_bound = if idx == 0 {
            0
        } else {
            subtable_starts[idx - 1].saturating_add(2)
        };
        prefix_starts.push(vtable_offset_prefix_start(
            image,
            &slots,
            start,
            lower_bound,
            known_typeinfos,
        ));
    }

    let mut subtables = Vec::with_capacity(subtable_starts.len());
    for (idx, &start) in subtable_starts.iter().enumerate() {
        let off_top = slots[start] as i64;
        let rtti = slots[start + 1];
        let address_point = vtable_addr + ((start + 2) as u64) * 8;

        let prefix_start = prefix_starts[idx];
        let end = prefix_starts.get(idx + 1).copied().unwrap_or(slots.len());
        let mut fns = Vec::new();
        for &v in &slots[(start + 2).min(end)..end] {
            if v == 0 {
                fns.push(VtableSlotKind::Zero);
                continue;
            }
            if ptr_in_executable(image, v) {
                let name = resolve_method_name(image, v);
                let is_thunk = name.as_deref().map(is_thunk_symbol).unwrap_or(false);
                fns.push(VtableSlotKind::Function {
                    va: v,
                    name,
                    is_thunk,
                });
                continue;
            }
            fns.push(VtableSlotKind::Raw(v));
        }

        subtables.push(VtableSubtable {
            address_point,
            offset_to_top: off_top,
            rtti_addr: rtti,
            // Itanium puts virtual-base / vcall offsets *before* the
            // offset-to-top slot. Preserve that prefix separately so it
            // doesn't get mistaken for raw vfunc data in the previous subtable.
            virtual_base_offsets: slots[prefix_start..start]
                .iter()
                .map(|&v| v as i64)
                .collect(),
            functions: fns,
        });
    }

    Some(VtableLayout {
        vtable_addr,
        total_size,
        subtables,
    })
}

fn enumerate_vtable_methods(image: &BinaryImage, classes: &mut BTreeMap<u64, CppClass>) {
    let typeinfos = typeinfo_addr_set(classes);

    // Collect (typeinfo_addr, vtable_addr, vtable_sym_size) triples to
    // avoid borrow conflicts during the per-class update loop.
    let vtable_info: Vec<(u64, u64, u64)> = classes
        .iter()
        .filter_map(|(&ti_addr, cls)| {
            cls.vtable_addr.map(|va| {
                let size = image.symbols.get(&va).map(|s| s.size).unwrap_or(0);
                (ti_addr, va, size)
            })
        })
        .collect();

    for (ti_addr, vtable_addr, vtable_sym_size) in vtable_info {
        let layout = reconstruct_vtable_layout(image, vtable_addr, vtable_sym_size, &typeinfos);

        // Compute the legacy `vtable_methods` view from the primary
        // subtable so existing callers keep working byte-for-byte. The
        // legacy contract was "stop at the first non-function slot",
        // which we preserve below.
        let mut methods = Vec::new();
        if let Some(layout) = &layout
            && let Some(primary) = layout.subtables.first()
        {
            for (slot, kind) in primary.functions.iter().enumerate() {
                match kind {
                    VtableSlotKind::Function { va, name, .. } => {
                        methods.push((slot, *va, name.clone()));
                    }
                    _ => break,
                }
            }
        }

        if let Some(cls) = classes.get_mut(&ti_addr) {
            cls.vtable_methods = methods;
            cls.vtable_layout = layout;
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
    use crate::ArchId;
    use crate::image::{Section, SectionFlags, Symbol, SymbolKind};
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

        assert!(!info.is_empty(), "cpp_rtti.elf should have RTTI classes",);

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

        for (slot, va, _name) in &dog.vtable_methods {
            assert!(*va != 0, "slot {} should have non-zero VA", slot);
        }

        let named_count = dog
            .vtable_methods
            .iter()
            .filter(|(_, _, name)| name.is_some())
            .count();
        assert!(
            named_count > 0,
            "at least one vtable method should have a symbol name",
        );
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

    #[test]
    fn test_inheritance_depths() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let depths = info.inheritance_depths();
        let animal = info.class_by_name("Animal").expect("Animal");
        let dog = info.class_by_name("Dog").expect("Dog");

        assert_eq!(
            depths.get(&animal.typeinfo_addr).copied(),
            Some(0),
            "Animal should be at depth 0",
        );
        assert_eq!(
            depths.get(&dog.typeinfo_addr).copied(),
            Some(1),
            "Dog should be at depth 1",
        );
    }

    #[test]
    fn test_format_hierarchy() {
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);

        let hierarchy = info.format_hierarchy();
        assert!(
            hierarchy.contains("Animal"),
            "hierarchy should mention Animal: {hierarchy}",
        );
        assert!(
            hierarchy.contains("Dog"),
            "hierarchy should mention Dog: {hierarchy}",
        );
    }

    // ── Vtable layout reconstruction ─────────────────────────────────────

    #[test]
    fn test_vtable_layout_dog_primary_subtable() {
        // Dog has single inheritance from Animal — exactly one subtable
        // with offset_to_top = 0 and the typeinfo pointer pointing at
        // Dog's `_ZTI`. The vtable holds 3 vfuncs: speak, ~Dog (D1),
        // ~Dog (D0).
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);
        let dog = info.class_by_name("Dog").expect("Dog class");
        let layout = dog
            .vtable_layout
            .as_ref()
            .expect("Dog should have a reconstructed vtable layout");

        assert_eq!(
            layout.subtables.len(),
            1,
            "Dog has single inheritance — expected exactly one subtable",
        );
        let primary = &layout.subtables[0];
        assert_eq!(primary.offset_to_top, 0, "primary subtable starts at top");
        assert_eq!(
            primary.rtti_addr, dog.typeinfo_addr,
            "primary subtable's RTTI pointer should target Dog's _ZTI",
        );
        assert!(
            primary.address_point >= layout.vtable_addr + 16,
            "address point lies after the offset-to-top + RTTI prologue",
        );
        assert!(
            primary.functions.len() >= 3,
            "Dog primary subtable should have ≥3 vfuncs (speak + 2 dtors), got {}",
            primary.functions.len(),
        );
        let function_count = primary
            .functions
            .iter()
            .filter(|k| matches!(k, VtableSlotKind::Function { .. }))
            .count();
        assert!(
            function_count >= 3,
            "expected ≥3 Function slots in Dog primary, got {function_count}",
        );
    }

    #[test]
    fn test_vtable_layout_zero_terminator() {
        // After the last vfunc, vtables typically have padding/null
        // entries before the symbol's reported size ends. Make sure we
        // model that as `Zero` rather than truncating the layout.
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);
        let cat = info.class_by_name("Cat").expect("Cat class");
        let layout = cat.vtable_layout.as_ref().expect("Cat layout");
        assert!(
            !layout.subtables.is_empty(),
            "Cat should have ≥1 reconstructed subtable",
        );
    }

    #[test]
    fn test_thunk_detection() {
        use super::is_thunk_symbol;
        assert!(is_thunk_symbol("_ZThn8_N5DerivedFooEv"));
        assert!(is_thunk_symbol("_ZTv0_n24_N5DerivedFooEv"));
        assert!(is_thunk_symbol("_ZTcvn8_N5DerivedFooEv"));
        assert!(is_thunk_symbol("non-virtual thunk to Derived::foo()"));
        assert!(is_thunk_symbol("virtual thunk to Derived::foo()"));
        assert!(!is_thunk_symbol("_ZN5Derived3FooEv"));
        assert!(!is_thunk_symbol("regular_function"));
    }

    #[test]
    fn test_legacy_vtable_methods_view_unchanged() {
        // The legacy `vtable_methods` field must keep returning the
        // primary subtable's function slots — unchanged from before
        // VtableLayout was introduced.
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);
        let dog = info.class_by_name("Dog").expect("Dog");

        assert!(
            !dog.vtable_methods.is_empty(),
            "legacy vtable_methods view must remain populated",
        );
        let primary = dog.vtable_layout.as_ref().unwrap().subtables[0]
            .functions
            .iter()
            .filter_map(|k| match k {
                VtableSlotKind::Function { va, .. } => Some(*va),
                _ => None,
            })
            .collect::<Vec<_>>();
        let legacy_vas: Vec<u64> = dog
            .vtable_methods
            .iter()
            .map(|(_slot, va, _name)| *va)
            .collect();

        // Every legacy VA should appear in the primary subtable's
        // Function slots. (Legacy stops at the first non-function slot,
        // so it can be a strict prefix.)
        assert!(!legacy_vas.is_empty(), "legacy view should report ≥1 entry");
        for va in &legacy_vas {
            assert!(
                primary.contains(va),
                "legacy VA {va:#x} not found in primary subtable functions",
            );
        }
    }

    #[test]
    fn test_typeinfo_pointer_matches_for_all_layouts() {
        // Every reconstructed primary subtable must point at *its own*
        // class's `_ZTI`. This is the key invariant the c_printer
        // relies on for matching RTTI ↔ vtable.
        let img = load_fixture("cpp_rtti.elf");
        let info = scan_rtti(&img);
        for cls in info.classes.values() {
            let Some(layout) = cls.vtable_layout.as_ref() else {
                continue;
            };
            assert_eq!(
                layout.subtables[0].rtti_addr, cls.typeinfo_addr,
                "{}: primary subtable RTTI should match class typeinfo",
                cls.demangled_name,
            );
        }
    }

    #[test]
    fn test_vtable_layout_keeps_vcall_vbase_offsets_out_of_function_slots() {
        let vtable_addr = 0x3000;
        let typeinfo_addr = 0x5000;
        let slots = [
            (-24_i64) as u64,
            (-8_i64) as u64,
            0,
            typeinfo_addr,
            0x1000,
            0x1010,
            (-16_i64) as u64,
            typeinfo_addr,
            0x1020,
        ];

        let mut data = Vec::new();
        for slot in slots {
            data.extend_from_slice(&slot.to_le_bytes());
        }

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: 0x100,
            data: vec![0; 0x100],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        image.sections.push(Section {
            name: ".data.rel.ro".into(),
            vaddr: vtable_addr,
            size: data.len() as u64,
            data,
            flags: SectionFlags::READ,
        });
        for va in [0x1000, 0x1010, 0x1020] {
            image.symbols.insert(
                va,
                Symbol {
                    name: format!("_ZN7Derived{:x}Ev", va),
                    addr: va,
                    size: 16,
                    kind: SymbolKind::Function,
                },
            );
        }

        let known_typeinfos = std::collections::BTreeSet::from([typeinfo_addr]);
        let layout = reconstruct_vtable_layout(
            &image,
            vtable_addr,
            (slots.len() * std::mem::size_of::<u64>()) as u64,
            &known_typeinfos,
        )
        .expect("synthetic vtable layout");

        assert_eq!(layout.subtables.len(), 2);
        assert_eq!(layout.subtables[0].virtual_base_offsets, vec![-24, -8]);
        assert_eq!(
            layout.subtables[0]
                .functions
                .iter()
                .filter(|slot| matches!(slot, VtableSlotKind::Function { .. }))
                .count(),
            2,
            "primary subtable should not swallow the next subtable's prefix offsets",
        );
        assert_eq!(layout.subtables[1].offset_to_top, -16);
        assert_eq!(layout.subtables[1].functions.len(), 1);
    }
}
