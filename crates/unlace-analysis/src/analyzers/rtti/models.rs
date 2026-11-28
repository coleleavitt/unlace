//! The MSVC RTTI byte-layout readers — the unlace ports of Ghidra's
//! `Rtti0Model`..`Rtti4Model` / `VfTableModel` / `TypeDescriptorModel` (the five
//! structures + the vftable), plus an address-resolvable image-byte view for the
//! cross-structure byte searches the walk performs.
//!
//! Each reader is a pure decode over an [`ImageBytes`] view at a candidate VMA,
//! returning `None` (never panicking) on any out-of-range / malformed read — the
//! [`crate::pass::AnalysisPass`] never-fail contract. The pointer/displacement ABI
//! (raw-VA on x86, `IBO32` on x64) is owned by [`super::refkind::RefKind`]; these
//! readers only know field *offsets* and ask the `RefKind` to resolve each ref.
//!
//! Structures (MSVC C++ RTTI ABI):
//! - RTTI0 `TypeDescriptor` — `[pVFTable (ptr)][spare (ptr)][name `.?A…@@`]`.
//! - RTTI4 `CompleteObjectLocator` (COL) — `[signature u32][offset u32]
//!   [cdOffset u32][pTypeDescriptor ref][pClassHierarchyDescriptor ref]
//!   (x64 also [pSelf ref])`. Sits immediately before its vftable (`meta` slot).
//! - RTTI3 `ClassHierarchyDescriptor` — `[signature u32][attributes u32]
//!   [numBaseClasses u32][pBaseClassArray ref]`.
//! - RTTI2 `BaseClassArray` — `numBaseClasses` refs to RTTI1s.
//! - RTTI1 `BaseClassDescriptor` — `[pTypeDescriptor ref][numContainedBases u32]
//!   [pmd.mdisp i32][pmd.pdisp i32][pmd.vdisp i32][attributes u32]
//!   (optional pClassHierarchyDescriptor ref)`.
//!
//! Origin (upstream Ghidra): `Ghidra/Features/MicrosoftCodeAnalyzer/.../rtti/`.

#[cfg(test)]
use super::refkind::End;
use super::refkind::RefKind;
use unlace_decomp::fasthash::{FxHashMap, FxHashSet};

/// A view over the loaded image's bytes addressable by virtual address — the
/// loadable sections, sorted, so a `read(vma, len)` resolves through whichever
/// section covers `[vma, vma+len)`, and a `scan_refs` byte-search scans every
/// section. The unlace analog of reading program memory through Ghidra's
/// `MemoryByteProvider`. Structurally the same view [`crate::pclntab`] uses.
pub struct ImageBytes<'a> {
    /// `(vma, bytes)` for each section with file-backed data, sorted by vma.
    sections: Vec<(u64, &'a [u8])>,
}

impl<'a> ImageBytes<'a> {
    /// Build the address-resolvable byte view from a parsed object. Only sections
    /// with a nonzero address and readable, non-empty data are included.
    pub fn new(file: &'a object::File<'a>) -> Self {
        use object::read::{Object, ObjectSection};
        let mut sections: Vec<(u64, &[u8])> = Vec::new();
        for sec in file.sections() {
            let addr = sec.address();
            if addr == 0 {
                continue;
            }
            if let Ok(data) = sec.data()
                && !data.is_empty()
            {
                sections.push((addr, data));
            }
        }
        sections.sort_by_key(|&(a, _)| a);
        ImageBytes { sections }
    }

    /// Build from explicit `(vma, bytes)` spans: a test image, or sections whose
    /// pointer slots the caller has already resolved (a Mach-O with fixups).
    pub fn from_spans(mut sections: Vec<(u64, &'a [u8])>) -> Self {
        sections.sort_by_key(|&(a, _)| a);
        ImageBytes { sections }
    }

    /// Return the `len` bytes at virtual address `vma`, or `None` if no single
    /// loaded section covers the whole span.
    pub fn read(&self, vma: u64, len: usize) -> Option<&'a [u8]> {
        for &(base, data) in &self.sections {
            if vma < base {
                continue;
            }
            let off = (vma - base) as usize;
            if let Some(end) = off.checked_add(len)
                && end <= data.len()
            {
                return Some(&data[off..end]);
            }
        }
        None
    }

    /// Up to `max` bytes from `vma` to the end of the section that holds it.
    pub fn read_up_to(&self, vma: u64, max: usize) -> Option<&'a [u8]> {
        for &(base, data) in &self.sections {
            if vma < base {
                continue;
            }
            let off = (vma - base) as usize;
            if off < data.len() {
                return Some(&data[off..data.len().min(off.saturating_add(max))]);
            }
        }
        None
    }

    /// Read a NUL-terminated ASCII string starting at `vma`, capped at `max` bytes.
    pub fn read_cstr(&self, vma: u64, max: usize) -> Option<String> {
        for &(base, data) in &self.sections {
            if vma < base {
                continue;
            }
            let off = (vma - base) as usize;
            if off >= data.len() {
                continue;
            }
            let slice = &data[off..];
            let cap = slice.len().min(max);
            if let Some(nul) = slice[..cap].iter().position(|&b| b == 0) {
                return std::str::from_utf8(&slice[..nul]).ok().map(str::to_string);
            }
            return None;
        }
        None
    }

    /// Every aligned position in any section whose `rk`-resolved reference (the
    /// 4-byte raw-VA / `IBO32` field) is one of `targets`, as the *VMAs of the
    /// reference words* grouped by the target they name, each list in scan order.
    /// This is the byte-search the walk uses to go from a TypeDescriptor back to the
    /// COL that names it (`−12` from the ref). One scan for every target: a search
    /// per TypeDescriptor is `O(classes × image)`, minutes on a large C++ DLL. Scans
    /// on a 4-byte stride (every MSVC RTTI reference is `ref_size`-aligned in practice).
    pub fn scan_refs(&self, rk: &RefKind, targets: &FxHashSet<u64>) -> FxHashMap<u64, Vec<u64>> {
        let mut hits = FxHashMap::<u64, Vec<u64>>::default();
        if targets.is_empty() {
            return hits;
        }
        let rs = rk.ref_size();
        for &(base, data) in &self.sections {
            let mut off = 0usize;
            while off + rs <= data.len() {
                if let Some(resolved) = rk.resolve_ref(&data[off..off + rs])
                    && targets.contains(&resolved)
                {
                    hits.entry(resolved).or_default().push(base + off as u64);
                }
                off += rs;
            }
        }
        hits
    }

    /// Find every aligned full-**pointer** slot (native ptr width) whose value equals
    /// `target`. Used to locate RTTI0 `TypeDescriptor`s: their first field is a full
    /// VA pointer to the common `type_info` vftable, so every TD is a pointer slot
    /// holding the shared `pVFTable`. Scans on a `ptr_size` stride.
    pub fn find_ptrs(&self, rk: &RefKind, target: u64) -> Vec<u64> {
        let mut hits = Vec::new();
        let ps = rk.ptr_size();
        for &(base, data) in &self.sections {
            let mut off = 0usize;
            while off + ps <= data.len() {
                if rk.read_ptr(&data[off..off + ps]) == target {
                    hits.push(base + off as u64);
                }
                off += ps;
            }
        }
        hits
    }

    /// Find the start VMA of every occurrence of the byte sequence `prefix` in any
    /// loaded section. Used to locate the `.?A` MSVC type-info name strings (each is
    /// a candidate RTTI0 class name). Overlapping matches are reported once per start
    /// position. A small/short prefix is fine — the caller validates each hit by
    /// decoding the surrounding `TypeDescriptor`.
    pub fn scan_prefix(&self, prefix: &[u8]) -> Vec<u64> {
        let mut hits = Vec::new();
        if prefix.is_empty() {
            return hits;
        }
        for &(base, data) in &self.sections {
            if data.len() < prefix.len() {
                continue;
            }
            for i in memchr::memchr_iter(prefix[0], &data[..=data.len() - prefix.len()]) {
                if &data[i..i + prefix.len()] == prefix {
                    hits.push(base + i as u64);
                }
            }
        }
        hits
    }

    /// Find every aligned full-**pointer** slot whose value is in `targets`, as
    /// `(slot VMA, value)`. The many-targets form of [`Self::find_ptrs`]: the
    /// Itanium walk needs the slots pointing at *any* of the image's typeinfo
    /// objects, and running `find_ptrs` per class is `O(classes × image)` — on a
    /// C++ library with hundreds of polymorphic classes that is the whole pass's
    /// cost. Scans on a `ptr_size` stride, once.
    pub fn scan_ptr_slots(&self, rk: &RefKind, targets: &FxHashSet<u64>) -> Vec<(u64, u64)> {
        let mut hits = Vec::new();
        if targets.is_empty() {
            return hits;
        }
        let ps = rk.ptr_size();
        for &(base, data) in &self.sections {
            let mut off = 0usize;
            while off + ps <= data.len() {
                let v = rk.read_ptr(&data[off..off + ps]);
                if v != 0 && targets.contains(&v) {
                    hits.push((base + off as u64, v));
                }
                off += ps;
            }
        }
        hits
    }

    /// Is `vma` inside any loaded section? (A weak validity gate for a resolved ref.)
    pub fn contains(&self, vma: u64) -> bool {
        self.sections
            .iter()
            .any(|&(base, data)| vma >= base && ((vma - base) as usize) < data.len())
    }
}

/// An RTTI0 `TypeDescriptor`: the only text-bearing RTTI struct. Carries the
/// `.?A…@@`-mangled class name and a leading pointer to the common `type_info`
/// vftable (the field every TD shares — the anchor the walk keys on).
#[derive(Clone, Debug)]
pub struct TypeDescriptor {
    /// VMA of the TypeDescriptor base.
    pub addr: u64,
    /// The full VA the `pVFTable` field points at (the shared `type_info` vftable).
    pub p_vftable: u64,
    /// The raw `.?A…@@`-mangled class name (the class-name string at the name offset).
    pub mangled_name: String,
}

impl TypeDescriptor {
    /// Decode the TypeDescriptor at `addr`. `None` if the `pVFTable` pointer or the
    /// name string is unreadable. The name is read with a generous cap (class names
    /// are short; a 4 KiB cap is far beyond any real mangling).
    pub fn read(img: &ImageBytes, rk: &RefKind, addr: u64) -> Option<Self> {
        let p_vftable = rk.read_ptr(img.read(addr, rk.ptr_size())?);
        let name_addr = addr + rk.type_descriptor_name_offset();
        let mangled_name = img.read_cstr(name_addr, 4096)?;
        // An RTTI0 type-info name is `.?A…`; reject anything else (a coincidental
        // pointer-slot match that does not lead to a real type-info string).
        if !mangled_name.starts_with(".?A") {
            return None;
        }
        Some(TypeDescriptor {
            addr,
            p_vftable,
            mangled_name,
        })
    }
}

/// An RTTI4 `CompleteObjectLocator` (COL) — the root of one class's RTTI graph.
#[derive(Clone, Debug)]
pub struct CompleteObjectLocator {
    /// VMA of the COL base.
    pub addr: u64,
    /// `signature` field (0 on x86, 1 on x64 — the `COL_SIG_REV1` marker).
    pub signature: u32,
    /// `offset`: where, in the complete object, the subobject this vftable
    /// serves starts (0 for the class's primary vftable).
    pub offset: u32,
    /// Absolute VMA of the RTTI0 `TypeDescriptor` (resolved ref).
    pub p_type_descriptor: u64,
    /// Absolute VMA of the RTTI3 `ClassHierarchyDescriptor` (resolved ref).
    pub p_class_hierarchy: u64,
}

impl CompleteObjectLocator {
    /// Field offsets (same on both arches; the refs are 4 bytes wide on both):
    /// `signature u32 @0`, `offset u32 @4`, `cdOffset u32 @8`,
    /// `pTypeDescriptor ref @12`, `pClassHierarchyDescriptor ref @16`.
    const OFF_TYPE_DESCRIPTOR: u64 = 12;
    const OFF_CLASS_HIERARCHY: u64 = 16;

    /// Decode the COL at `addr`, resolving its two cross-references. `None` if either
    /// reference is absent/unreadable.
    pub fn read(img: &ImageBytes, rk: &RefKind, addr: u64) -> Option<Self> {
        let signature = rk.read_u32(img.read(addr, 4)?);
        let offset = rk.read_u32(img.read(addr + 4, 4)?);
        let p_type_descriptor =
            rk.resolve_ref(img.read(addr + Self::OFF_TYPE_DESCRIPTOR, rk.ref_size())?)?;
        let p_class_hierarchy =
            rk.resolve_ref(img.read(addr + Self::OFF_CLASS_HIERARCHY, rk.ref_size())?)?;
        Some(CompleteObjectLocator {
            addr,
            signature,
            offset,
            p_type_descriptor,
            p_class_hierarchy,
        })
    }
}

/// An RTTI3 `ClassHierarchyDescriptor`: the head of the inheritance list.
#[derive(Clone, Debug)]
pub struct ClassHierarchyDescriptor {
    /// VMA of the CHD base.
    pub addr: u64,
    /// Number of base classes (incl. self) — the RTTI2 array length.
    pub num_base_classes: u32,
    /// Absolute VMA of the RTTI2 `BaseClassArray` (resolved ref).
    pub p_base_class_array: u64,
}

impl ClassHierarchyDescriptor {
    /// `signature u32 @0`, `attributes u32 @4`, `numBaseClasses u32 @8`,
    /// `pBaseClassArray ref @12`.
    const OFF_NUM_BASE: u64 = 8;
    const OFF_BASE_ARRAY: u64 = 12;

    /// Decode the CHD at `addr`. `None` if the base-class array reference is absent
    /// or the count is implausibly large (a corrupt/false candidate). MSVC class
    /// hierarchies are small; a cap of 1024 rejects garbage while admitting any real
    /// hierarchy.
    pub fn read(img: &ImageBytes, rk: &RefKind, addr: u64) -> Option<Self> {
        let num_base_classes = rk.read_u32(img.read(addr + Self::OFF_NUM_BASE, 4)?);
        if num_base_classes == 0 || num_base_classes > 1024 {
            return None;
        }
        let p_base_class_array =
            rk.resolve_ref(img.read(addr + Self::OFF_BASE_ARRAY, rk.ref_size())?)?;
        Some(ClassHierarchyDescriptor {
            addr,
            num_base_classes,
            p_base_class_array,
        })
    }
}

/// An RTTI1 `BaseClassDescriptor`: per-base subobject record: the base's
/// `TypeDescriptor` and where its subobject sits (`pmd`).
#[derive(Clone, Debug)]
pub struct BaseClassDescriptor {
    /// VMA of the RTTI1 base.
    pub addr: u64,
    /// Absolute VMA of this base's RTTI0 `TypeDescriptor` (resolved ref).
    pub p_type_descriptor: u64,
    /// The `PMD` `(mdisp, pdisp, vdisp)`: the base's displacement; `-1` for a
    /// non-virtual base, else the offset of the vbtable pointer; and the byte
    /// offset of the base's entry in that vbtable, when readable.
    pub pmd: Option<(i32, i32, i32)>,
}

impl BaseClassDescriptor {
    /// `pTypeDescriptor ref @0`, `numContainedBases u32 @4`, `mdisp i32 @8`,
    /// `pdisp i32 @12`, `vdisp i32 @16`.
    pub fn read(img: &ImageBytes, rk: &RefKind, addr: u64) -> Option<Self> {
        let p_type_descriptor = rk.resolve_ref(img.read(addr, rk.ref_size())?)?;
        let pmd = img.read(addr + 8, 12).map(|b| {
            (
                rk.read_u32(b) as i32,
                rk.read_u32(&b[4..]) as i32,
                rk.read_u32(&b[8..]) as i32,
            )
        });
        Some(BaseClassDescriptor {
            addr,
            p_type_descriptor,
            pmd,
        })
    }
}

/// Read the RTTI2 `BaseClassArray` at `addr`: `count` 4-byte refs to RTTI1s,
/// resolved to absolute VMAs. Stops early (returns what it has) if a ref is
/// unreadable — defensive, never partial-panics.
pub fn read_base_class_array(img: &ImageBytes, rk: &RefKind, addr: u64, count: u32) -> Vec<u64> {
    let mut out = Vec::with_capacity(count as usize);
    for i in 0..count as u64 {
        let Some(bytes) = img.read(addr + i * rk.ref_size() as u64, rk.ref_size()) else {
            break;
        };
        match rk.resolve_ref(bytes) {
            Some(v) => out.push(v),
            None => break,
        }
    }
    out
}

#[cfg(test)]
mod tests;
