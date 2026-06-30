//! Itanium C++ RTTI / vtable **data-structure** recognizer.
//!
//! This is the *recognition* half of C++ runtime recovery (ROADMAP Phase
//! B.4): given a [`BinaryImage`], locate vtables in `.rodata` /
//! `.data.rel.ro` and recover the class name each belongs to from its
//! Itanium-ABI symbol. It does **not** perform devirtualization — that is
//! handled at the SSA level by [`crate::cpp_vtable`].
//!
//! ## Itanium vtable layout
//!
//! A `_ZTV<class>` symbol ("vtable for <class>") points at the *start* of
//! the vtable group. The primary subtable is laid out as:
//!
//! ```text
//!   [+0]  offset-to-top   (ptrdiff_t, 0 for the primary subtable)
//!   [+8]  RTTI pointer    (-> _ZTI<class>)
//!   [+16] virtual_func_0  <- the "address point" the object's vptr holds
//!   [+24] virtual_func_1
//!   ...
//! ```
//!
//! We recover vtables two ways, in priority order:
//!   1. **Symbol-named**: a symbol whose name starts with `_ZTV`. The class
//!      name comes straight from demangling the symbol.
//!   2. **RTTI-anchored**: a symbol whose name starts with `_ZTI`
//!      ("typeinfo for <class>"). The vtable's address point is the slot
//!      *after* an offset-to-top / RTTI-pointer pair where the RTTI pointer
//!      equals the `_ZTI` address. This recovers vtables whose own `_ZTV`
//!      symbol was stripped but whose typeinfo survived.
//!
//! When symbols are fully stripped we recover nothing rather than
//! fabricating — honest coverage over guesswork.

use std::collections::{BTreeMap, BTreeSet};

use unlace_loader::image::{BinaryImage, Endian, Section, SectionFlags};

use crate::itanium_demangle::demangle_itanium;

/// Pointer size for the targets we recognise (Itanium ABI on LP64).
const PTR_SIZE: u64 = 8;

/// A recovered C++ vtable and the methods it dispatches to.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VtableInfo {
    /// Virtual address of the vtable's *address point* — the value an
    /// object's vptr holds, i.e. the first virtual-function slot. For a
    /// `_ZTV` symbol this is `symbol_addr + 2 * PTR_SIZE` (past the
    /// offset-to-top and RTTI header).
    pub vtable_addr: u64,
    /// Demangled class name (e.g. `_ZTV4Base` -> `Base`), or `None` when the
    /// symbol could not be demangled.
    pub class_name: Option<String>,
    /// Virtual method entry points, in slot order, that fall inside an
    /// executable section.
    pub method_addrs: Vec<u64>,
}

/// Recover C++ vtables and their class names from `image`.
///
/// Deterministic: results are ordered by `vtable_addr`. Only symbol-anchored
/// vtables are recovered (`_ZTV*` directly, or `_ZTI*` typeinfo objects that
/// a vtable header points back to); stripped binaries yield an empty vector.
pub fn recognize_vtables(image: &BinaryImage) -> Vec<VtableInfo> {
    // Keyed by address point so the two recovery strategies dedupe against
    // each other and ordering is deterministic.
    let mut found: BTreeMap<u64, VtableInfo> = BTreeMap::new();

    recover_from_ztv_symbols(image, &mut found);
    recover_from_rtti_anchors(image, &mut found);

    found.into_values().collect()
}

/// Strategy 1: every `_ZTV<class>` symbol names a vtable directly.
fn recover_from_ztv_symbols(image: &BinaryImage, found: &mut BTreeMap<u64, VtableInfo>) {
    for (&sym_addr, sym) in &image.symbols {
        if !sym.name.starts_with("_ZTV") {
            continue;
        }
        // The ABI-internal typeinfo classes have their own vtables; they are
        // noise for class recovery.
        if sym.name.contains("__cxxabiv1") {
            continue;
        }

        // The address point is past the [offset-to-top, RTTI-ptr] header.
        let addr_point = sym_addr.saturating_add(2 * PTR_SIZE);
        let class_name = demangle_special(&sym.name, "_ZTV");
        let method_addrs = collect_methods(image, addr_point);

        found.entry(addr_point).or_insert(VtableInfo {
            vtable_addr: addr_point,
            class_name,
            method_addrs,
        });
    }
}

/// Strategy 2: anchor on surviving `_ZTI<class>` typeinfo objects. Scan
/// readonly data for `[offset-to-top, rtti_ptr]` pairs whose `rtti_ptr`
/// equals a known typeinfo address; the slot after is the address point.
fn recover_from_rtti_anchors(image: &BinaryImage, found: &mut BTreeMap<u64, VtableInfo>) {
    // Collect typeinfo address -> class name.
    let mut ti_names: BTreeMap<u64, Option<String>> = BTreeMap::new();
    for (&addr, sym) in &image.symbols {
        if !sym.name.starts_with("_ZTI") || sym.name.contains("__cxxabiv1") {
            continue;
        }
        ti_names.insert(addr, demangle_special(&sym.name, "_ZTI"));
    }
    if ti_names.is_empty() {
        return;
    }

    // Address points we already recovered via _ZTV symbols.
    let known: BTreeSet<u64> = found.keys().copied().collect();

    for section in &image.sections {
        if !is_readonly_data(section) {
            continue;
        }
        let base = section.vaddr;
        let data = &section.data;
        // Walk pointer-aligned positions; at each, treat [pos] as
        // offset-to-top and [pos+8] as a candidate RTTI pointer.
        let mut off = 0usize;
        while off + 2 * PTR_SIZE as usize <= data.len() {
            let rtti_ptr = read_u64(data, off + PTR_SIZE as usize, image.endian);
            if let Some(class_name) = ti_names.get(&rtti_ptr) {
                let addr_point = base + off as u64 + 2 * PTR_SIZE;
                if !known.contains(&addr_point) && !found.contains_key(&addr_point) {
                    let method_addrs = collect_methods(image, addr_point);
                    if !method_addrs.is_empty() {
                        found.insert(
                            addr_point,
                            VtableInfo {
                                vtable_addr: addr_point,
                                class_name: class_name.clone(),
                                method_addrs,
                            },
                        );
                    }
                }
            }
            off += PTR_SIZE as usize;
        }
    }
}

/// Collect the run of pointer-sized entries starting at `addr_point` that
/// point into an executable section. Stops at the first non-code entry, so a
/// trailing offset-to-top / RTTI header of the *next* subtable terminates the
/// scan.
fn collect_methods(image: &BinaryImage, addr_point: u64) -> Vec<u64> {
    let mut methods = Vec::new();
    let mut va = addr_point;
    while let Some(ptr) = read_u64_at_va(image, va) {
        if ptr == 0 || !ptr_in_executable(image, ptr) {
            break;
        }
        methods.push(ptr);
        va += PTR_SIZE;
    }
    methods
}

/// Demangle a special Itanium name (`_ZTV`/`_ZTI`/`_ZTS`) by stripping the
/// 4-byte special prefix and re-attaching a plain `_Z` so the shared
/// [`demangle_itanium`] grammar parses the `<name>` that follows.
///
/// `_ZTV4Base` -> strip `_ZTV` -> `4Base` -> `_Z4Base` -> `Base`.
/// `_ZTVN3foo3barE` -> `_ZN3foo3barE` -> `foo::bar`.
fn demangle_special(sym: &str, prefix: &str) -> Option<String> {
    let suffix = sym.strip_prefix(prefix)?;
    if suffix.is_empty() {
        return None;
    }
    demangle_itanium(&format!("_Z{suffix}"))
}

/// `true` when `p` lands inside a mapped executable section.
fn ptr_in_executable(image: &BinaryImage, p: u64) -> bool {
    image.sections.iter().any(|s| {
        s.flags.contains(SectionFlags::EXEC) && p >= s.vaddr && p < s.vaddr.saturating_add(s.size)
    })
}

/// `true` for readonly, non-executable sections that hold vtables
/// (`.rodata`, `.data.rel.ro`, and similar).
fn is_readonly_data(section: &Section) -> bool {
    !section.flags.contains(SectionFlags::EXEC) && !section.data.is_empty()
}

/// Read 8 bytes at virtual address `va`, honouring section mapping + endian.
fn read_u64_at_va(image: &BinaryImage, va: u64) -> Option<u64> {
    for section in &image.sections {
        let end = section.vaddr.saturating_add(section.data.len() as u64);
        if va >= section.vaddr && va + PTR_SIZE <= end {
            let off = (va - section.vaddr) as usize;
            return Some(read_u64(&section.data, off, image.endian));
        }
    }
    None
}

/// Read a little/big-endian u64 from `data` at byte offset `off`. Returns 0
/// when out of bounds (callers bound-check separately where it matters).
fn read_u64(data: &[u8], off: usize, endian: Endian) -> u64 {
    if off + 8 > data.len() {
        return 0;
    }
    let mut buf = [0u8; 8];
    buf.copy_from_slice(&data[off..off + 8]);
    match endian {
        Endian::Little => u64::from_le_bytes(buf),
        Endian::Big => u64::from_be_bytes(buf),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::ArchId;
    use unlace_loader::image::{Symbol, SymbolKind};

    /// Build a tiny image: one executable `.text` section holding two method
    /// entry points, and one readonly `.data.rel.ro` section holding a vtable
    /// for `Base` (offset-to-top, RTTI ptr, method0, method1).
    fn make_image() -> BinaryImage {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);

        // .text at 0x1000, two functions at 0x1000 and 0x1020.
        image.sections.push(Section {
            name: ".text".to_string(),
            vaddr: 0x1000,
            size: 0x100,
            data: vec![0x90; 0x100], // NOPs — content irrelevant.
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });

        // .data.rel.ro at 0x4000: [offset_to_top=0, rtti=0x5000, m0, m1, 0].
        let mut ro = Vec::new();
        ro.extend_from_slice(&0u64.to_le_bytes()); // offset-to-top
        ro.extend_from_slice(&0x5000u64.to_le_bytes()); // RTTI pointer
        ro.extend_from_slice(&0x1000u64.to_le_bytes()); // method 0
        ro.extend_from_slice(&0x1020u64.to_le_bytes()); // method 1
        ro.extend_from_slice(&0u64.to_le_bytes()); // terminator (null)
        image.sections.push(Section {
            name: ".data.rel.ro".to_string(),
            vaddr: 0x4000,
            size: ro.len() as u64,
            data: ro,
            flags: SectionFlags::READ,
        });

        // `_ZTV4Base` at the start of the vtable group (0x4000).
        image.symbols.insert(
            0x4000,
            Symbol {
                name: "_ZTV4Base".to_string(),
                addr: 0x4000,
                size: 40,
                kind: SymbolKind::Object,
            },
        );

        image
    }

    #[test]
    fn cxx_vtable_recognize_base() {
        let image = make_image();
        let vts = recognize_vtables(&image);

        assert_eq!(vts.len(), 1, "exactly one vtable recovered");
        let vt = &vts[0];
        // Address point is past the [offset-to-top, RTTI] header.
        assert_eq!(vt.vtable_addr, 0x4000 + 16);
        assert_eq!(vt.class_name.as_deref(), Some("Base"));
        assert_eq!(vt.method_addrs, vec![0x1000, 0x1020]);
    }

    #[test]
    fn cxx_vtable_recognize_nested_class_name() {
        // `_ZTVN3lib3FooE` demangles to `lib::Foo`.
        let demangled = demangle_special("_ZTVN3lib3FooE", "_ZTV");
        assert_eq!(demangled.as_deref(), Some("lib::Foo"));
    }

    #[test]
    fn cxx_vtable_recognize_stripped_is_empty() {
        // No _ZTV / _ZTI symbols -> nothing fabricated.
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(Section {
            name: ".text".to_string(),
            vaddr: 0x1000,
            size: 0x10,
            data: vec![0x90; 0x10],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        assert!(recognize_vtables(&image).is_empty());
    }

    #[test]
    fn cxx_vtable_recognize_via_rtti_anchor() {
        // Vtable whose own _ZTV symbol is stripped but whose _ZTI survives:
        // recovered by matching the header's RTTI pointer.
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(Section {
            name: ".text".to_string(),
            vaddr: 0x1000,
            size: 0x100,
            data: vec![0x90; 0x100],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        // typeinfo `_ZTI7Derived` lives at 0x6000.
        let mut ro = Vec::new();
        ro.extend_from_slice(&0u64.to_le_bytes()); // offset-to-top
        ro.extend_from_slice(&0x6000u64.to_le_bytes()); // RTTI -> _ZTI7Derived
        ro.extend_from_slice(&0x1040u64.to_le_bytes()); // method 0
        ro.extend_from_slice(&0u64.to_le_bytes()); // terminator
        image.sections.push(Section {
            name: ".rodata".to_string(),
            vaddr: 0x4000,
            size: ro.len() as u64,
            data: ro,
            flags: SectionFlags::READ,
        });
        image.symbols.insert(
            0x6000,
            Symbol {
                name: "_ZTI7Derived".to_string(),
                addr: 0x6000,
                size: 16,
                kind: SymbolKind::Object,
            },
        );

        let vts = recognize_vtables(&image);
        assert_eq!(vts.len(), 1);
        assert_eq!(vts[0].vtable_addr, 0x4000 + 16);
        assert_eq!(vts[0].class_name.as_deref(), Some("Derived"));
        assert_eq!(vts[0].method_addrs, vec![0x1040]);
    }
}
