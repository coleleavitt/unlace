//! S1 MSVC RTTI / vftable recovery — the unlace analog of Ghidra's
//! `RttiAnalyzer` (`Ghidra/Features/MicrosoftCodeAnalyzer/.../rtti/`).
//!
//! A polymorphic C++ class compiled by MSVC carries, **entirely inside the PE
//! image** (almost always `.rdata`/`.data`), a small graph of run-time type
//! information: per class a `CompleteObjectLocator` (RTTI4) sitting immediately
//! before the class's vftable, reachable from which are a `ClassHierarchyDescriptor`
//! (RTTI3) → `BaseClassArray` (RTTI2) → `BaseClassDescriptor`s (RTTI1) → the
//! `TypeDescriptor`s (RTTI0) that carry each class's `.?A…@@`-mangled name. Without
//! parsing it, a virtual call renders `(**(code **)*plVar1)()`, the vtable slot is a
//! bare `DAT_<addr>`, and `.rdata` is raw bytes with no class names.
//!
//! This pass recovers the class names: it finds the common `type_info` vftable (the
//! pointer every RTTI0 `TypeDescriptor` shares), locates the `TypeDescriptor`s,
//! byte-searches back to each `CompleteObjectLocator` (`COL = ref − 12`), validates
//! the COL→RTTI3→RTTI2→RTTI1→RTTI0 chain, **demangles** each `.?A…@@` name via the
//! existing MSVC demangler (`demangle::demangle_rtti_class_name` — the Ghidra
//! `RttiUtil` `??_R0…@8` wrap; ZERO new demangler code), and emits:
//!   - a `Data` [`SymFact`] at each `TypeDescriptor` named `<Class>::RTTI_Type_Descriptor`;
//!   - a `Data` [`SymFact`] at each `CompleteObjectLocator` named
//!     `<Class>::RTTI_Complete_Object_Locator`;
//!   - a `Data` [`SymFact`] at the recovered vftable named `<Class>::vftable`;
//! so the decompiled output labels the metadata graph and the class names
//! (`Box`, `Shape`) surface as recovered symbols.
//!
//! # vftable discovery + virtual-method naming (R3)
//!
//! On top of the class-name recovery, the pass walks each recovered class's vftable
//! ([`vftable::walk_vftable`], the port of `VfTableModel.getVfTableCount`): from the
//! `<Class>::vftable` base it reads each pointer-width slot (an **absolute VA on both
//! arches** — vftable slots are NOT the `IBO32` displacements the COL/RTTI graph uses),
//! bounding the array at the first NULL / non-`.text` slot. For each surviving slot it
//! emits a virtual-method **function** [`SymFact`] named `<Class>::vfunc_<i>` (the
//! MSVC metadata carries the class name but not per-method names, so the slot index is
//! the disambiguator), and marks the slot array read-only ([`AnalysisOutput::readonly`]).
//! So the virtual dispatch — `(**(code **)*plVar1)()`, an unnamed `DAT_*` vtable slot
//! before — now resolves to a named function (`Box::vfunc_0` = `Box::area`). The
//! slots are those of the vftable as `vtabletypes` cuts it
//! (`msvcvtabletypes.rs (trim_overruns)`): a walk that ran on into the table
//! laid after the vftable (an RPC server's dispatch table) named its routines too.
//!
//! The slot-index name is `vfunc_<i>` and NOT `vftable_<i>`: a routine must not be named
//! after the data object that points at it. Under multiple inheritance an MSVC class
//! really does own several vftables, so `<Class>::vftable_<i>` reads as "this class's
//! i-th vftable" — which made a function inventory claim that hundreds of bytes of
//! `std::basic_stringbuf` code were vtable objects. `vfunc_<i>` names the callee, and
//! the vftable data object keeps the unindexed `<Class>::vftable` label.
//!
//! # x86 vs x64 — the one place a port goes wrong (§3.1f)
//!
//! The inter-structure references are **raw VAs on x86** but **32-bit image-base
//! relative displacements (`IBO32`) on x64**, the RTTI0 name string sits at offset
//! 8 (x86) vs 16 (x64), and the COL meta-pointer before a vftable is a full
//! pointer-width VA on both. All of this divergence is isolated in
//! [`refkind::RefKind`]; this module never branches on `is64` directly.
//!
//! # Gating + parity safety
//!
//! Default-**OFF** (`--option rtti on`), and registered only on a PE/MSVC image
//! ([`crate::passes::passes_for`] gates it on `BinaryFormat::Pe`). The XML datatest
//! path never loads a PE and never runs this pass, so the 675/675 / stage-model
//! parity oracles are structurally untouched. Defensive by construction (the
//! [`AnalysisPass`] never-fail contract): a non-PE input, a missing `type_info`
//! vftable, or any malformed structure yields an **empty** output — never a panic.

pub mod arm64evcall;
pub mod itaniumctors;
pub mod itaniumrtti;
pub mod models;
pub mod msvcctors;
pub mod msvcvtabletypes;
pub mod refkind;
pub mod vftable;
pub mod vtabletypes;

use object::read::Object;
use object::read::pe::{ImageNtHeaders, PeFile32, PeFile64};
use object::{BinaryFormat, FileKind};

use crate::demangle::demangle_rtti_class_name;
use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, SymFact, SymKind, TypedDataFact,
};
use models::{
    BaseClassDescriptor, ClassHierarchyDescriptor, CompleteObjectLocator, ImageBytes,
    TypeDescriptor, read_base_class_array,
};
use refkind::{End, RefKind};
use unlace_decomp::fasthash::{FxHashMap, FxHashSet};
use vftable::{TextRanges, walk_vftable};

/// The byte distance from a reference-to-a-`TypeDescriptor` back to the
/// `CompleteObjectLocator` that names it: the COL's `pTypeDescriptor` field is at
/// COL+12 (`signature u32`, `offset u32`, `cdOffset u32` precede it), so a word that
/// references a TD is the COL's offset-12 field ⇒ `COL = ref − 12`. The same on both
/// arches (the COL preamble is three `u32`s on x86 and x64 alike).
const COL_TD_FIELD_OFFSET: u64 = 12;

/// The minimum number of distinct `TypeDescriptor`s that must agree on a common
/// `type_info`-vftable pointer for that pointer to be accepted as the real
/// `type_info::vftable` (the §3.1 "≥ some hits agreeing" gate; Ghidra's
/// `RttiAnalyzer` uses the most-referenced common pointer). Two suffices for a real
/// polymorphic program (a base + a derived class); a coincidental pointer rarely has
/// even one matching `.?A…@@` neighbor.
const MIN_TYPE_INFO_AGREEMENT: usize = 2;

/// The MSVC RTTI / vftable recovery pass (gate id `rtti`). Default-OFF, PE/MSVC path
/// only.
#[derive(Default)]
pub struct RttiPass;

impl AnalysisPass for RttiPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "rtti"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();

        // PE/MSVC gate (belt-and-suspenders on top of the passes_for registration
        // gate): a non-PE image carries no MSVC RTTI.
        if ctx.file.format() != BinaryFormat::Pe {
            return out;
        }

        let Some(rk) = ref_kind_for(ctx) else {
            return out;
        };
        let img = ImageBytes::new(ctx.file);
        // The executable-section ranges that bound a vftable's slot walk (R3): a slot
        // is a virtual-method entry only while it points into one of these.
        let text = TextRanges::with_relocations(ctx.file, ctx.bytes);

        // 1. Find the common `type_info` vftable: the pointer every RTTI0
        //    TypeDescriptor's leading `pVFTable` field shares. We discover it by
        //    locating the `.?A…@@` type-info name strings, reading the word
        //    `name_offset` bytes before each (the TD base's pVFTable pointer), and
        //    taking the value the most TypeDescriptors agree on.
        let descriptors = find_type_descriptors(&img, &rk);
        let Some(type_info_vftable) = pick_common_type_info_vftable(&descriptors) else {
            return out;
        };

        // 2. Keep only the TypeDescriptors that point at the agreed type_info
        //    vftable (a real RTTI0), de-duplicated by address.
        let mut tds: Vec<&TypeDescriptor> = descriptors
            .iter()
            .filter(|td| td.p_vftable == type_info_vftable)
            .collect();
        tds.sort_by_key(|td| td.addr);
        tds.dedup_by_key(|td| td.addr);

        // 3. For each TypeDescriptor, find the CompleteObjectLocator that names it
        //    and emit the class it validates.
        emit_classes(&img, &rk, &text, &tds, &mut out);
        type_vftable_labels(ctx, &rk, &mut out);

        out
    }
}

/// A vftable is data, an array of its slots' code pointers, so each
/// `<Class>::vftable` label is installed with that type rather than as an untyped
/// label: an untyped one takes the `code` type, and a constructor's store of
/// its address printed as if it stored the label's value
/// (`this->__vftable = (C_vtbl *)vftable`). The slot count is the read-only range
/// the slot walk marked from the label. A label with no walked slots stays as it is.
fn type_vftable_labels(ctx: &AnalysisCtx, rk: &RefKind, out: &mut AnalysisOutput) {
    let types = ctx.arch.types();
    let (_, word_size) = ctx.arch.data_org();
    let ptr = rk.ptr_size() as u64;
    let Ok(code) = types.get_type_code() else {
        return;
    };
    let Ok(slot) = types.get_type_pointer(rk.ptr_size() as i32, code, word_size) else {
        return;
    };
    let ends: FxHashMap<u64, u64> = out.readonly.iter().copied().collect();
    let mut kept = Vec::with_capacity(out.symbols.len());
    for s in std::mem::take(&mut out.symbols) {
        let slots = ends
            .get(&s.addr)
            .map(|&end| end.saturating_sub(s.addr) / ptr)
            .filter(|&n| n > 0 && n <= 4096);
        match slots {
            Some(n) if s.kind == SymKind::Data && s.name.ends_with("::vftable") => {
                match types.get_type_array(n as i32, std::rc::Rc::clone(&slot)) {
                    Ok(array) => out.typed_data.push(TypedDataFact {
                        addr: s.addr,
                        name: s.name,
                        type_: array,
                    }),
                    Err(_) => kept.push(s),
                }
            }
            _ => kept.push(s),
        }
    }
    out.symbols = kept;
}

/// For each TypeDescriptor, take the image's references to it (`ref`), treat
/// `ref − 12` as a candidate CompleteObjectLocator, and validate the
/// COL→RTTI3→RTTI2→RTTI1→RTTI0 reachability chain. A validated COL yields the class
/// name (and the names of every base class reachable through its hierarchy) + the
/// vftable VA. Each byte-search is one scan of the image for every class at once:
/// a scan per class is `O(classes × image)`, longer than any decompile on a large
/// C++ DLL.
fn emit_classes(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    tds: &[&TypeDescriptor],
    out: &mut AnalysisOutput,
) {
    let (cols, meta_slots) = find_cols(img, rk, tds);
    let mut named = SlotNames {
        cut: msvcvtabletypes::recover_from(img, rk, text, &cols, &meta_slots)
            .into_values()
            .flat_map(|c| c.tables)
            .map(|t| (t.vt.base, t.vt.slots))
            .collect(),
        ..SlotNames::default()
    };
    for col in &cols {
        let slots = meta_slots
            .get(&col.addr)
            .map(Vec::as_slice)
            .unwrap_or_default();
        emit_for_col(img, rk, text, col, slots, &mut named, out);
    }
    named.emit(out);
}

/// The vftable slots to name, and each class's bases (itself included), so
/// a function several vftables hold is named once, for the class defining it.
#[derive(Default)]
struct SlotNames {
    /// The vftables cut where a walk ran into the table after them
    /// (`msvcvtabletypes.rs (trim_overruns)`), by first slot.
    cut: FxHashMap<u64, Vec<u64>>,
    /// `(target, class, slot)` in walk order.
    slots: Vec<(u64, String, usize)>,
    bases: FxHashMap<String, FxHashSet<String>>,
}

impl SlotNames {
    /// Name every slot target. A function the vftables of several classes hold
    /// is named for the holder that is a base of every other holder: a derived
    /// class that does not override a method keeps its base's entry, so the
    /// method is the base's (`std::exception::vfunc_1`, not the
    /// `std::bad_alloc` that inherits it). With no such holder (unrelated
    /// classes sharing one function, as `_purecall` or an identical-code fold
    /// is shared) every holder names it.
    fn emit(self, out: &mut AnalysisOutput) {
        let mut order: Vec<u64> = Vec::new();
        let mut by_addr: FxHashMap<u64, Vec<usize>> = FxHashMap::default();
        for (i, (addr, _, _)) in self.slots.iter().enumerate() {
            by_addr
                .entry(*addr)
                .or_insert_with(|| {
                    order.push(*addr);
                    Vec::new()
                })
                .push(i);
        }
        let is_base = |base: &str, of: &str| {
            base == of || self.bases.get(of).is_some_and(|set| set.contains(base))
        };
        for addr in order {
            let holders = &by_addr[&addr];
            let owner = holders.iter().copied().find(|&h| {
                holders
                    .iter()
                    .all(|&o| is_base(&self.slots[h].1, &self.slots[o].1))
            });
            let chosen: Vec<usize> = match owner {
                Some(h) => vec![h],
                None => holders.clone(),
            };
            for i in chosen {
                let (_, class, slot) = &self.slots[i];
                out.symbols.push(SymFact {
                    addr,
                    name: vfunc_name(class, *slot),
                    kind: SymKind::Function,
                });
            }
        }
    }
}

/// Every CompleteObjectLocator naming one of `tds`, in TypeDescriptor order,
/// and for each the full-pointer slots holding its address (the vftable
/// `meta` words), in image order.
pub(super) fn find_cols(
    img: &ImageBytes,
    rk: &RefKind,
    tds: &[&TypeDescriptor],
) -> (Vec<CompleteObjectLocator>, FxHashMap<u64, Vec<u64>>) {
    let refs = img.scan_refs(rk, &tds.iter().map(|td| td.addr).collect());
    let mut seen_cols = FxHashSet::<u64>::default();
    let mut cols = Vec::new();
    for td in tds {
        for &ref_vma in refs.get(&td.addr).map(Vec::as_slice).unwrap_or_default() {
            let Some(col_addr) = ref_vma.checked_sub(COL_TD_FIELD_OFFSET) else {
                continue;
            };
            if !seen_cols.insert(col_addr) {
                continue;
            }
            let Some(col) = CompleteObjectLocator::read(img, rk, col_addr) else {
                continue;
            };
            // The COL must name THIS TypeDescriptor (the ref we followed is its
            // pTypeDescriptor field) and reach a valid class hierarchy.
            if col.p_type_descriptor != td.addr {
                continue;
            }
            cols.push(col);
        }
    }
    let mut meta_slots = FxHashMap::<u64, Vec<u64>>::default();
    for (slot, col_addr) in img.scan_ptr_slots(rk, &cols.iter().map(|c| c.addr).collect()) {
        meta_slots.entry(col_addr).or_default().push(slot);
    }
    (cols, meta_slots)
}

/// Build the [`RefKind`] for a PE `ctx`: 64-bitness from the file, the image base
/// from the typed PE optional header, endianness little (every PE arch unlace
/// supports). `None` if the PE width/header is unparsable.
pub(super) fn ref_kind_for(ctx: &AnalysisCtx) -> Option<RefKind> {
    let is64 = ctx.file.is_64();
    let image_base = pe_image_base(ctx.bytes)?;
    Some(RefKind::new(is64, image_base, End::Little))
}

/// Read the PE `ImageBase` from the optional header via the typed `object` PE
/// parser (the neutral `object::File` view does not expose it). `None` on a
/// non-PE / unparsable image.
fn pe_image_base(bytes: &[u8]) -> Option<u64> {
    match FileKind::parse(bytes).ok()? {
        FileKind::Pe64 => {
            let pe = PeFile64::parse(bytes).ok()?;
            Some(image_base_of(&pe))
        }
        FileKind::Pe32 => {
            let pe = PeFile32::parse(bytes).ok()?;
            Some(image_base_of(&pe))
        }
        _ => None,
    }
}

/// `relative_address_base()` = the optional-header `ImageBase` (the addend an x64
/// `IBO32` displacement is relative to).
fn image_base_of<Pe: ImageNtHeaders>(pe: &object::read::pe::PeFile<Pe>) -> u64 {
    pe.relative_address_base()
}

/// A candidate RTTI0 found by the `.?A…@@`-name scan: the decoded
/// [`TypeDescriptor`] at the address `name_offset` bytes before a type-info name.
pub(super) fn find_type_descriptors(img: &ImageBytes, rk: &RefKind) -> Vec<TypeDescriptor> {
    let mut out = Vec::new();
    // Scan every section for `.?A` (the MSVC type-info name prefix); each occurrence
    // is a candidate name string whose TypeDescriptor base sits `name_offset` bytes
    // before it. `find_type_info_name_addrs` returns the VMAs of the `.` byte.
    for name_addr in find_type_info_name_addrs(img) {
        let Some(td_addr) = name_addr.checked_sub(rk.type_descriptor_name_offset()) else {
            continue;
        };
        if let Some(td) = TypeDescriptor::read(img, rk, td_addr) {
            // Sanity: the decoded name must START at the scanned `.?A` (read() reads
            // the name at td_addr + name_offset == name_addr).
            out.push(td);
        }
    }
    out
}

/// Scan every loaded section for the start VMA of each `.?A`-prefixed,
/// NUL-terminated ASCII string (the MSVC type-info name marker). Returns the VMA of
/// the leading `.` byte.
fn find_type_info_name_addrs(img: &ImageBytes) -> Vec<u64> {
    img.scan_prefix(b".?A")
}

/// The most-agreed-upon `type_info`-vftable pointer among the candidate
/// TypeDescriptors, or `None` if no pointer reaches [`MIN_TYPE_INFO_AGREEMENT`].
pub(super) fn pick_common_type_info_vftable(descriptors: &[TypeDescriptor]) -> Option<u64> {
    use std::collections::HashMap;
    let mut counts: HashMap<u64, usize> = HashMap::new();
    for td in descriptors {
        // A null pVFTable is never the type_info vftable.
        if td.p_vftable != 0 {
            *counts.entry(td.p_vftable).or_insert(0) += 1;
        }
    }
    counts
        .into_iter()
        .filter(|&(_, n)| n >= MIN_TYPE_INFO_AGREEMENT)
        // Highest agreement wins; ties broken by the lower VMA for determinism.
        .max_by(|a, b| a.1.cmp(&b.1).then(b.0.cmp(&a.0)))
        .map(|(vma, _)| vma)
}

/// Validate the chain rooted at `col` and emit the class-name + label facts:
///   - the COL's own class (its `pTypeDescriptor`), and
///   - every base class reachable through RTTI3→RTTI2→RTTI1.
/// Also labels the COL, each TypeDescriptor, and the recovered vftable.
fn emit_for_col(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    col: &CompleteObjectLocator,
    meta_slots: &[u64],
    named: &mut SlotNames,
    out: &mut AnalysisOutput,
) {
    // The COL's own class name (RTTI0 it points at).
    let Some(self_td) = TypeDescriptor::read(img, rk, col.p_type_descriptor) else {
        return;
    };
    let Some(self_class) = demangle_rtti_class_name(&self_td.mangled_name) else {
        return;
    };

    // Validate + walk the hierarchy: RTTI3 → RTTI2 → each RTTI1 → its RTTI0. A COL
    // whose hierarchy does not decode is rejected (a coincidental `ref−12` that is
    // not really a COL). We REQUIRE the hierarchy to resolve so a false COL never
    // emits a spurious class.
    let Some(chd) = ClassHierarchyDescriptor::read(img, rk, col.p_class_hierarchy) else {
        return;
    };
    let base_rtti1s = read_base_class_array(img, rk, chd.p_base_class_array, chd.num_base_classes);
    if base_rtti1s.is_empty() {
        return;
    }

    // Self class: label its TypeDescriptor + COL + vftable.
    emit_type_descriptor_label(&self_class, self_td.addr, out);
    out.symbols.push(SymFact {
        addr: col.addr,
        name: format!("{self_class}::RTTI_Complete_Object_Locator"),
        kind: SymKind::Data,
    });
    if let Some(vftable_base) = recover_vftable(img, rk, meta_slots) {
        out.symbols.push(SymFact {
            addr: vftable_base,
            name: format!("{self_class}::vftable"),
            kind: SymKind::Data,
        });
        // R3: walk the vftable's slots, naming each virtual-method function
        // `<Class>::vfunc_<i>` and marking the slot array read-only. The virtual
        // dispatch (an unnamed `DAT_*` slot before) now resolves to a named function.
        let vt = match named.cut.get(&vftable_base) {
            Some(slots) if !slots.is_empty() => Some(vftable::VfTable {
                base: vftable_base,
                slots: slots.clone(),
            }),
            _ => walk_vftable(img, rk, text, vftable_base),
        };
        if let Some(vt) = vt {
            emit_vftable_methods(&self_class, &vt, rk, named, out);
        }
    }

    // Each base class reachable through the hierarchy: label its TypeDescriptor.
    for r1_addr in base_rtti1s {
        let Some(r1) = BaseClassDescriptor::read(img, rk, r1_addr) else {
            continue;
        };
        let Some(base_td) = TypeDescriptor::read(img, rk, r1.p_type_descriptor) else {
            continue;
        };
        if let Some(base_class) = demangle_rtti_class_name(&base_td.mangled_name) {
            emit_type_descriptor_label(&base_class, base_td.addr, out);
            named
                .bases
                .entry(self_class.clone())
                .or_default()
                .insert(base_class);
        }
    }
}

/// Emit the `<Class>::RTTI_Type_Descriptor` Data label for a TypeDescriptor.
fn emit_type_descriptor_label(class: &str, td_addr: u64, out: &mut AnalysisOutput) {
    out.symbols.push(SymFact {
        addr: td_addr,
        name: format!("{class}::RTTI_Type_Descriptor"),
        kind: SymKind::Data,
    });
}

/// The name a recovered virtual method takes: `<Class>::vfunc_<i>` for slot `i` of the
/// class's vftable. Deliberately NOT `<Class>::vftable_<i>` — that spells the data
/// object, and a class under multiple inheritance genuinely owns several vftables, so
/// the indexed form reads as "vftable number i" rather than "the function in slot i".
fn vfunc_name(class: &str, slot: usize) -> String {
    format!("{class}::vfunc_{slot}")
}

/// Emit the per-slot virtual-method facts for a recovered vftable (R3):
///   - one `Function` [`SymFact`] per slot, named [`vfunc_name`] at the slot's
///     target VA (the virtual method the dispatch jumps to), staged in `named`
///     so a shared target is named for its defining class ([`SlotNames::emit`]);
///   - the slot array's VMA range as read-only ([`AnalysisOutput::readonly`]).
/// The `SymFact{Function}` commit is an idempotent ADD (`find_function`-gated), so a
/// slot target that already carries a real `.symtab`/import name keeps it; only a
/// never-symboled virtual method takes the `<Class>::vfunc_<i>` name.
fn emit_vftable_methods(
    class: &str,
    vt: &vftable::VfTable,
    rk: &RefKind,
    named: &mut SlotNames,
    out: &mut AnalysisOutput,
) {
    for (i, &fn_addr) in vt.slots.iter().enumerate() {
        named.slots.push((fn_addr, class.to_string(), i));
    }
    // The slot array itself is constant data — mark it read-only so a load of a vtable
    // slot can fold (the `out.readonly` commit arm ORs `Varnode::readonly` over it).
    out.readonly.push(vt.range(rk));
}

/// Recover the class's vftable VMA from a validated COL: a vftable's `meta` slot
/// (the pointer-width word immediately *before* the vftable) holds the COL's VA, so
/// the vftable starts at `meta_slot + ptr_size`. `meta_slots` are the full-pointer
/// slots holding the COL's address, in image order; the word AFTER one is the
/// vftable base.
pub(super) fn recover_vftable(img: &ImageBytes, rk: &RefKind, meta_slots: &[u64]) -> Option<u64> {
    let ptr = rk.ptr_size() as u64;
    for &slot in meta_slots {
        let vftable = slot + ptr;
        // The vftable's first slot should be a plausible pointer (into a loaded
        // section — a virtual-method entry). A weak but effective guard.
        if let Some(first) = img.read(vftable, rk.ptr_size()) {
            let first_ptr = rk.read_ptr(first);
            if first_ptr != 0 && img.contains(first_ptr) {
                return Some(vftable);
            }
        }
    }
    None
}

#[cfg(test)]
mod tests;
