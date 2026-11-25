//! (unlace, NOVEL) S1 Itanium (GCC/Clang) RTTI + vtable recovery — the capability
//! **Ghidra does not have at all**.
//!
//! Ghidra's `RttiAnalyzer` is a *Microsoft*-PE analyzer; on a GCC/Clang C++ binary
//! nothing in its auto-analysis reads the Itanium type-information graph, and its
//! GCC class recovery is script-tier (`RecoverClassesFromRTTIScript` /
//! `RTTIGccClassRecoverer`), never run by default. Measured on a stripped
//! `g++ -O0` probe, Ghidra resolves the `Shape` vtable to `DAT_00107a80`. IDA Pro
//! *does* reconstruct `_ZTV6Widget` / `_ZTI6Widget` / `_ZTS8Drawable` from
//! `.rodata` + `.data.rel.ro` alone, and this pass is the unlace analog of that
//! behaviour, built against the Itanium C++ ABI rather than a port of either tool.
//!
//! # The graph (Itanium C++ ABI §2.9.5, §2.5.2)
//!
//! A polymorphic class `C` compiled by GCC/Clang emits three linked objects:
//!
//! * `_ZTS<C>` — the **type-name string**, the bare `<mangled-name>` component
//!   (`6Widget`, `N7leveldb3EnvE`), NUL-terminated, in `.rodata`.
//! * `_ZTI<C>` — the **typeinfo object** in `.data.rel.ro`:
//!   `[vptr][name ptr]` for a base-less class, plus `[base typeinfo ptr]` for
//!   single inheritance, or `[flags u32][base_count u32][(base ptr, offset_flags)…]`
//!   for the multiple/virtual-inheritance case. The `vptr` names the flavour: it
//!   points 2 words into `__cxxabiv1::__class_type_info`'s /
//!   `__si_class_type_info`'s / `__vmi_class_type_info`'s vtable.
//! * `_ZTV<C>` — the **vtable object**: one *sub-vtable* per polymorphic base
//!   subobject, each `[offset-to-top (signed)][typeinfo ptr][slot…]`. The value an
//!   object's vptr holds is the address of the first *slot*, i.e. two words in.
//!
//! # Why this is exact rather than heuristic — the relocation anchor
//!
//! The three `__cxxabiv1` typeinfo vtables live in **libstdc++**, so on any
//! dynamically linked C++ image every `_ZTI…` object's leading `vptr` word is an
//! `UND` dynamic relocation naming one of them, with addend `2 * ptr_size`. That
//! relocation's `r_offset` **is** the typeinfo object's address and its symbol
//! **is** the flavour — both survive `strip --strip-all` untouched, because
//! `.rela.dyn` is a loader input, not debug information. So discovery here is a
//! table lookup, not a byte-pattern scan: [`ItaniumRttiPass`] never guesses which
//! bytes are a typeinfo, which is the structural difference from the MSVC sibling
//! pass ([`super::RttiPass`], which byte-searches `.?A` strings and `ref − 12`).
//! Where a `.symtab`/`.dynsym` survives, defined `_ZTI…` symbols are taken as a
//! second discovery source and their flavour is sniffed from the object's shape.
//!
//! # From typeinfo to vtable
//!
//! Every sub-vtable's second header word points at its most-derived class's
//! typeinfo, so one scan for pointer slots holding a discovered typeinfo address
//! yields every sub-vtable in the image: the slot at `s` means a sub-vtable header
//! at `s − ptr` whose first virtual slot is `s + ptr`. Two exact ABI constraints
//! reject the coincidental hits (chiefly the *base-class* pointers inside other
//! typeinfo objects, which also hold a typeinfo address): **offset-to-top is always
//! `<= 0`** (0 for the primary sub-vtable, negative for a secondary), and a real
//! sub-vtable has **at least one slot pointing into an executable section**.
//!
//! A slot whose file word is 0 but which carries a dynamic relocation is an
//! *imported* virtual method (`__cxa_pure_virtual`, a base method defined in
//! another image): the walk steps over it instead of terminating, so an abstract
//! interface's vtable keeps its true extent.
//!
//! # What it emits
//!
//! Per recovered class: `<C>::typeinfo`, `<C>::typeinfo_name`, `<C>::vtable`, and
//! for a secondary sub-vtable — named from the inheritance displacement the vmi/si
//! base list carries — `<C>::vtable_for_<Base>`; per virtual slot a **function**
//! symbol `<C>::vfunc_<i>` (`<C>::vfunc_for_<Base>_<i>` in a secondary sub-vtable),
//! and the slot array marked read-only. The stem is `vfunc_`, as in the MSVC sibling
//! pass: a routine is not named after the data object that points at it. An inherited slot
//! claimed by several classes' vtables is attributed to the **defining base**, not
//! to whichever vtable the scan reached first, using the recovered inheritance
//! graph — so `Shape::perimeter`, present in `Shape`'s, `Circle`'s and `Square`'s
//! tables, is named once, for `Shape`.
//!
//! # Gating + parity safety
//!
//! Default-**on** (`--option itaniumrtti off` disables it), and registered only on an ELF or
//! Mach-O image ([`crate::passes::passes_for`]). On a Mach-O the pointer slots
//! are fixup entries; [`MachoSlots`] resolves them before the walk. The XML
//! datatest path never loads an ELF object
//! and never runs this pass, so the datatest / stage-model parity oracles are
//! structurally untouched. Defensive by construction (the [`AnalysisPass`]
//! never-fail contract): a non-ELF input, a C binary, a `-fno-rtti` build, or any
//! malformed structure yields an **empty** output — never a panic.

use std::collections::{HashMap, HashSet};

use object::read::{Object, ObjectSymbol, ObjectSymbolTable};
use object::{BinaryFormat, RelocationTarget};

use crate::demangle::demangle_typeinfo_name;
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, SymFact, SymKind};

use super::itaniumctors::ClassVtables;
use super::models::ImageBytes;
use super::refkind::{End, RefKind};
use super::vftable::TextRanges;

/// The `__cxxabiv1` typeinfo-vtable symbol names, and the class-typeinfo flavour
/// each one identifies. A typeinfo object whose `vptr` relocation names one of
/// these IS that flavour — the ABI leaves no ambiguity.
const ABI_TYPEINFO_VTABLES: [(&str, Flavor); 3] = [
    ("_ZTVN10__cxxabiv117__class_type_infoE", Flavor::Class),
    ("_ZTVN10__cxxabiv120__si_class_type_infoE", Flavor::SiClass),
    (
        "_ZTVN10__cxxabiv121__vmi_class_type_infoE",
        Flavor::VmiClass,
    ),
];

/// The Itanium typeinfo-name symbol prefix (`_ZTI<mangled-name>`), the second
/// discovery source: a defined `_ZTI…` OBJECT symbol names a typeinfo object.
const ZTI_PREFIX: &str = "_ZTI";

/// Upper bound on virtual-method slots walked from one sub-vtable base — far beyond
/// any real class's vtable, a guard against a malformed header with no terminator.
const MAX_SLOTS: usize = 4096;

/// Upper bound on the base count a `__vmi_class_type_info` may declare before the
/// object is rejected as malformed (the ABI permits more; no real class has this
/// many direct bases, and the bound keeps a garbage `u32` from driving the walk).
const MAX_BASES: u32 = 64;

/// The largest plausible `offset-to-top`, in bytes: a sub-object displacement is a
/// class-layout offset, never an image-sized number. Bounds the sanity gate.
const MAX_SUBOBJECT_OFFSET: i64 = 1 << 24;

/// Which `__cxxabiv1` type-information class a typeinfo object is an instance of.
/// Fixes the object's byte layout past the `[vptr][name ptr]` prefix.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Flavor {
    /// `__class_type_info` — no base classes; the object is exactly two words.
    Class,
    /// `__si_class_type_info` — exactly one public, non-virtual, offset-0 base,
    /// whose typeinfo pointer follows the name pointer.
    SiClass,
    /// `__vmi_class_type_info` — everything else (multiple / virtual / non-public
    /// inheritance): `[flags u32][base_count u32][(base ptr, offset_flags)…]`.
    VmiClass,
}

impl Flavor {
    /// The flavour a `__cxxabiv1` typeinfo-vtable symbol name identifies, or `None`
    /// if `name` is not one of the three class flavours (a `__fundamental_`,
    /// `__pointer_` or `__enum_type_info` names no class and is skipped).
    fn from_abi_vtable(name: &str) -> Option<Flavor> {
        // A versioned dynamic symbol can carry an `@VER` suffix in some readers.
        let bare = name.split('@').next().unwrap_or(name);
        ABI_TYPEINFO_VTABLES
            .iter()
            .find(|(s, _)| *s == bare)
            .map(|(_, f)| *f)
    }
}

/// A decoded Itanium typeinfo object.
#[derive(Clone, Debug)]
pub(super) struct TypeInfo {
    /// VMA of the typeinfo object (`_ZTI<C>`).
    pub(super) addr: u64,
    /// VMA of its NUL-terminated type-name string (`_ZTS<C>`).
    name_addr: u64,
    /// The demangled qualified class name (`leveldb::Env`, `Widget`).
    pub(super) class: String,
    /// The demangled class name before sanitizing (`Vec<int>`).
    pub(super) demangled: String,
    /// Direct base classes as `(base typeinfo VMA, byte displacement of the base
    /// subobject within this class)`. Empty for [`Flavor::Class`]. The displacement
    /// is the Itanium `offset_flags >> 8` for a vmi base and 0 for an si base —
    /// the datum the MSVC sibling pass discards with its `pmd` fields.
    pub(super) bases: Vec<(u64, i64)>,
    /// Virtual bases as `(base typeinfo VMA, offset of the vbase-offset word from
    /// the vtable address point)`: for a base with `__virtual_mask` set,
    /// `offset_flags >> 8` locates the displacement in the vtable instead of being
    /// it. Moved into [`Self::bases`] once the vtable is known
    /// ([`resolve_virtual_bases`]).
    pub(super) virtual_bases: Vec<(u64, i64)>,
    /// Byte extent of the object, used to reject a pointer *inside* a typeinfo from
    /// being read as a vtable header.
    size: u64,
}

/// A recovered sub-vtable: one polymorphic base subobject's slice of a `_ZTV<C>`
/// object.
#[derive(Clone, Debug)]
pub(super) struct SubVtable {
    /// VMA of the sub-vtable's `offset-to-top` word — what `_ZTV<C>` names for the
    /// primary, and what a secondary base subobject's vptr is derived from.
    header: u64,
    /// VMA of the first virtual slot (the value an object's vptr holds).
    pub(super) first_slot: u64,
    /// The `offset-to-top` displacement: 0 for the primary sub-vtable, negative for
    /// a secondary (the byte distance back to the most-derived object's start).
    pub(super) offset_to_top: i64,
    /// The typeinfo (hence the most-derived class) this sub-vtable belongs to.
    pub(super) typeinfo: u64,
    /// The virtual-method target VAs, in slot order. A slot filled by the dynamic
    /// loader (an imported method) is recorded as `None` so slot INDICES stay
    /// faithful to the ABI while carrying no name.
    pub(super) slots: Vec<Option<u64>>,
}

/// The Itanium (GCC/Clang) RTTI + vtable recovery pass (gate id `itaniumrtti`).
/// Default-OFF, ELF path only.
#[derive(Default)]
pub struct ItaniumRttiPass;

impl AnalysisPass for ItaniumRttiPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "itaniumrtti"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if let Some(rec) = recover(ctx) {
            emit(&rec.typeinfos, &rec.subs, &rec.rk, &mut out);
        }
        out
    }
}

/// The recovered Itanium class graph: every decoded typeinfo and every
/// sub-vtable that names one.
pub(super) struct Recovery {
    pub(super) typeinfos: Vec<TypeInfo>,
    pub(super) subs: Vec<SubVtable>,
    pub(super) rk: RefKind,
    /// `(typeinfo, vptr)` of each primary vtable whose first two slots are null
    /// ([`null_dtor_pair`]): an abstract class's, as GCC emits it.
    pub(super) null_dtors: Vec<(u64, u64)>,
}

/// Discover, decode and walk the image's typeinfo objects and vtables, or
/// `None` for an image with none (a C binary, a `-fno-rtti` build, a PE).
pub(super) fn recover(ctx: &AnalysisCtx) -> Option<Recovery> {
    // The MSVC ABI owns PE. A Mach-O's pointer slots are fixup entries, so
    // they are resolved into a copy of the sections first.
    let macho = match ctx.file.format() {
        BinaryFormat::Elf => None,
        BinaryFormat::MachO => Some(MachoSlots::new(ctx.file, ctx.bytes)),
        _ => return None,
    };

    let rk = RefKind::new(
        ctx.file.is_64(),
        0,
        if ctx.file.is_little_endian() {
            End::Little
        } else {
            End::Big
        },
    );
    // Discovery first, and bail before building anything else: a plain-C binary
    // and a `-fno-rtti` C++ build both have no typeinfo, and that is the common
    // case this pass must stay nearly free on.
    let ptr = rk.ptr_size() as u64;
    let mut candidates = match &macho {
        None => discover_typeinfos(ctx.file, ptr),
        Some(m) => m.discover_typeinfos(ctx.file, ptr),
    };
    let copied = match &macho {
        None => copied_abi_vtables(ctx.file),
        Some(_) => Vec::new(),
    };
    if candidates.is_empty() && copied.is_empty() {
        return None;
    }
    let macho_sections = macho.as_ref().map(|m| m.sections(ctx.file));
    let img = match &macho_sections {
        None => ImageBytes::new(ctx.file),
        Some(sections) => {
            ImageBytes::from_spans(sections.iter().map(|(a, d)| (*a, d.as_slice())).collect())
        }
    };
    if !copied.is_empty() {
        let points: HashMap<u64, Flavor> = copied.iter().map(|&(a, f)| (a + 2 * ptr, f)).collect();
        for (slot, value) in img.scan_ptr_slots(&rk, &points.keys().copied().collect()) {
            if !candidates.iter().any(|&(a, _)| a == slot) {
                candidates.push((slot, Some(points[&value])));
            }
        }
        candidates.sort_by_key(|&(a, _)| a);
    }
    let mut typeinfos = decode_typeinfos(&img, &rk, &candidates);
    if typeinfos.is_empty() {
        return None;
    }

    let text = TextRanges::new(ctx.file);
    let relocated = match &macho {
        None => relocated_slots(ctx.file),
        Some(m) => m.named_binds.iter().map(|(va, ..)| *va).collect(),
    };
    let (subs, null_dtors) = recover_vtables(&img, &rk, &text, &relocated, &typeinfos);
    resolve_virtual_bases(&img, &rk, &mut typeinfos, &subs);
    Some(Recovery {
        typeinfos,
        subs,
        rk,
        null_dtors,
    })
}

/// The `__cxxabiv1` typeinfo vtables a non-PIE executable defines itself: its
/// code refers to them by absolute address, so the linker copies each into the
/// image (`R_X86_64_COPY`) and every typeinfo's vptr word is a plain pointer two
/// words into the copy, with no relocation to find it by. The copies keep their
/// `.dynsym` names through `strip`.
fn copied_abi_vtables(file: &object::File) -> Vec<(u64, Flavor)> {
    file.dynamic_symbols()
        .filter(|sym| sym.address() != 0)
        .filter_map(|sym| Some((sym.address(), Flavor::from_abi_vtable(sym.name().ok()?)?)))
        .collect()
}

/// A Mach-O's fixups in the form the walk reads. A chained-fixup image keeps
/// chain entries in its pointer slots, so [`MachoSlots::sections`] copies the
/// sections with every slot replaced by what dyld writes there: the target of
/// a rebase, or 0 for a bind (an import, the same shape an ELF slot with a
/// dynamic relocation has in the file). A classic `LC_DYLD_INFO` image already
/// has that shape; its bind names come from replaying the bind opcodes.
struct MachoSlots {
    fixups: crate::loader::format::macho::chained::ChainedFixups,
    /// `(slot, import, addend)`; the classic bind replay keeps no addend.
    named_binds: Vec<(u64, String, Option<i64>)>,
}

impl MachoSlots {
    fn new(file: &object::File, bytes: &[u8]) -> MachoSlots {
        let fixups = crate::loader::format::macho::chained::resolve_chained_fixups(file, bytes);
        let named_binds = if fixups.is_chained() {
            fixups
                .binds()
                .map(|(va, bind)| {
                    (
                        va,
                        String::from_utf8_lossy(&bind.name).into_owned(),
                        Some(bind.addend),
                    )
                })
                .collect()
        } else {
            let mut binds: Vec<(u64, String, Option<i64>)> =
                crate::loader::format::macho::dyldinfo::resolve_dyld_info_binds(file, bytes)
                    .into_iter()
                    .map(|(va, name)| (va, name.to_string(), None))
                    .collect();
            binds.sort_by_key(|(va, ..)| *va);
            binds
        };
        MachoSlots {
            fixups,
            named_binds,
        }
    }

    /// The sections as dyld leaves them, sorted by address.
    fn sections(&self, file: &object::File) -> Vec<(u64, Vec<u8>)> {
        use object::read::ObjectSection;
        let width = if file.is_64() { 8usize } else { 4 };
        let mut sections = Vec::new();
        for sec in file.sections() {
            let addr = sec.address();
            let Ok(data) = sec.data() else { continue };
            if addr == 0 || data.is_empty() {
                continue;
            }
            let mut data = data.to_vec();
            if self.fixups.is_chained() {
                let mut patch = |va: u64, value: u64| {
                    let Some(at) = va.checked_sub(addr).and_then(|at| usize::try_from(at).ok())
                    else {
                        return;
                    };
                    if let Some(slot) = at.checked_add(width).and_then(|end| data.get_mut(at..end))
                    {
                        slot.copy_from_slice(&value.to_le_bytes()[..width]);
                    }
                };
                for (va, target) in self.fixups.rebases() {
                    patch(va, target);
                }
                for (va, ..) in &self.named_binds {
                    patch(*va, 0);
                }
            }
            sections.push((addr, data));
        }
        sections.sort_by_key(|(a, _)| *a);
        sections
    }

    /// The Mach-O form of [`discover_typeinfos`]: a bind to a `__cxxabiv1`
    /// typeinfo vtable with addend `2 * ptr`, plus the `__ZTI…` symbols.
    fn discover_typeinfos(&self, file: &object::File, ptr: u64) -> Vec<(u64, Option<Flavor>)> {
        let mut found: HashMap<u64, Option<Flavor>> = HashMap::new();
        for (va, name, addend) in &self.named_binds {
            let Some(flavor) = name.strip_prefix('_').and_then(Flavor::from_abi_vtable) else {
                continue;
            };
            if addend.is_none_or(|a| a == 2 * ptr as i64) {
                found.insert(*va, Some(flavor));
            }
        }
        for sym in file.symbols() {
            let Some(name) = sym.name().ok().and_then(|n| n.strip_prefix('_')) else {
                continue;
            };
            if name.starts_with(ZTI_PREFIX) && !name.contains("__cxxabiv1") && sym.address() != 0 {
                found.entry(sym.address()).or_insert(None);
            }
        }
        let mut out: Vec<(u64, Option<Flavor>)> = found.into_iter().collect();
        out.sort_by_key(|&(a, _)| a);
        out
    }
}

/// The recovered classes' vtables, as the constructor/destructor recovery
/// ([`super::itaniumctors`]) reads them; empty on an image without the
/// Itanium graph.
pub(super) fn recovered_classes(ctx: &AnalysisCtx) -> Vec<ClassVtables> {
    recover(ctx).map_or_else(Vec::new, |rec| {
        class_vtables(&rec.typeinfos, &rec.subs, &rec.null_dtors)
    })
}

/// Each recovered class's vptr values and primary slot targets, with its bases as
/// indices into the same list — the input the constructor/destructor recovery
/// reads.
fn class_vtables(
    typeinfos: &[TypeInfo],
    subs: &[SubVtable],
    null_dtors: &[(u64, u64)],
) -> Vec<ClassVtables> {
    let null_vptr: HashMap<u64, u64> = null_dtors.iter().copied().collect();
    let by_addr: HashMap<u64, &TypeInfo> = typeinfos.iter().map(|t| (t.addr, t)).collect();
    let index: HashMap<u64, usize> = typeinfos
        .iter()
        .enumerate()
        .map(|(i, t)| (t.addr, i))
        .collect();
    typeinfos
        .iter()
        .map(|ti| {
            let mut own: Vec<&SubVtable> = subs.iter().filter(|s| s.typeinfo == ti.addr).collect();
            own.sort_by_key(|s| (s.offset_to_top != 0, s.header));
            let primary_slots = own
                .first()
                .filter(|s| s.offset_to_top == 0)
                .map(|s| s.slots.clone())
                .unwrap_or_default();
            let null = null_vptr.get(&ti.addr).copied();
            let mut vptrs: Vec<u64> = own.iter().map(|s| s.first_slot).collect();
            if let Some(v) = null.filter(|_| primary_slots.is_empty()) {
                vptrs.insert(0, v);
            }
            ClassVtables {
                name: ti.class.clone(),
                ancestors: ancestors_of(ti.addr, &by_addr)
                    .iter()
                    .filter_map(|a| index.get(a).copied())
                    .collect(),
                primary_slots,
                vptrs,
                null_dtor_pair: null.is_some(),
            }
        })
        .collect()
}

/// The address of every slot a dynamic relocation writes. A vtable slot whose file
/// word is 0 is an **imported** virtual method when it appears here (the loader
/// fills it), so the walk steps over it rather than treating the 0 as the table's
/// terminator.
fn relocated_slots(file: &object::File) -> HashSet<u64> {
    let mut out = HashSet::new();
    if let Some(relocs) = file.dynamic_relocations() {
        for (offset, _) in relocs {
            out.insert(offset);
        }
    }
    out
}

/// Discover candidate typeinfo objects as `(addr, known flavour)`.
///
/// Anchor 1 — the exact one, and the only one that survives `strip` on a shared
/// object: a dynamic relocation whose target symbol is a `__cxxabiv1` typeinfo
/// vtable and whose addend is `2 * ptr` (the typeinfo's `vptr` points past the
/// vtable's two header words). The relocation's offset IS the typeinfo address and
/// its symbol IS the flavour.
///
/// Anchor 2 — a defined `_ZTI…` OBJECT symbol, for the unstripped / statically
/// linked case where anchor 1 has nothing to name. Flavour unknown at this point;
/// [`decode_typeinfos`] sniffs it from the object's shape.
fn discover_typeinfos(file: &object::File, ptr: u64) -> Vec<(u64, Option<Flavor>)> {
    let mut found: HashMap<u64, Option<Flavor>> = HashMap::new();

    if let (Some(relocs), Some(dynsyms)) = (file.dynamic_relocations(), file.dynamic_symbol_table())
    {
        for (offset, rel) in relocs {
            let RelocationTarget::Symbol(idx) = rel.target() else {
                continue;
            };
            let Ok(sym) = dynsyms.symbol_by_index(idx) else {
                continue;
            };
            let Ok(name) = sym.name() else {
                continue;
            };
            let Some(flavor) = Flavor::from_abi_vtable(name) else {
                continue;
            };
            // A REL (implicit-addend) target stores its addend in the section bytes;
            // accept it unchecked rather than mis-reading the explicit field as 0.
            if !rel.has_implicit_addend() && rel.addend() != 2 * ptr as i64 {
                continue;
            }
            found.insert(offset, Some(flavor));
        }
    }

    for sym in file.symbols().chain(file.dynamic_symbols()) {
        let Ok(name) = sym.name() else {
            continue;
        };
        // `_ZTIN10__cxxabiv1…` is the ABI's own typeinfo, not a user class.
        if !name.starts_with(ZTI_PREFIX) || name.contains("__cxxabiv1") {
            continue;
        }
        let addr = sym.address();
        if addr != 0 {
            found.entry(addr).or_insert(None);
        }
    }

    let mut out: Vec<(u64, Option<Flavor>)> = found.into_iter().collect();
    out.sort_by_key(|&(a, _)| a);
    out
}

/// Decode each candidate into a [`TypeInfo`], keyed by address.
///
/// Two sweeps: the first accepts a candidate whose name pointer resolves to a
/// mangled type name that demangles (the gate that rejects a coincidental address),
/// the second reads the base list — which needs the accepted address set, both to
/// sniff an unknown flavour and to validate each base pointer.
fn decode_typeinfos(
    img: &ImageBytes,
    rk: &RefKind,
    candidates: &[(u64, Option<Flavor>)],
) -> Vec<TypeInfo> {
    /// Longest type-name string accepted (a deeply templated name is long).
    const MAX_NAME: usize = 4096;

    let ptr = rk.ptr_size() as u64;
    let mut named: Vec<(u64, Option<Flavor>, u64, String, String)> = Vec::new();
    for &(addr, flavor) in candidates {
        // Apple's arm64 ABI sets bit 63 of the name pointer on a type whose
        // typeinfo may be duplicated across images (compared by string, not by
        // address); the address is the low 63 bits.
        let Some(name_addr) =
            read_ptr(img, rk, addr + ptr).map(|p| if ptr == 8 { p & !(1 << 63) } else { p })
        else {
            continue;
        };
        let Some(mangled) = img.read_cstr(name_addr, MAX_NAME) else {
            continue;
        };
        let Some(demangled) = demangle_typeinfo_name(&mangled) else {
            continue;
        };
        let class = sanitize_class_name(&demangled);
        if class.is_empty() {
            continue;
        }
        named.push((addr, flavor, name_addr, class, demangled));
    }
    let accepted: HashSet<u64> = named.iter().map(|&(a, ..)| a).collect();

    let mut out = Vec::new();
    for (addr, flavor, name_addr, class, demangled) in named {
        let flavor = flavor.unwrap_or_else(|| sniff_flavor(img, rk, addr, &accepted));
        let (bases, virtual_bases, size) = read_bases(img, rk, addr, flavor, &accepted);
        out.push(TypeInfo {
            addr,
            name_addr,
            class,
            demangled,
            bases,
            virtual_bases,
            size,
        });
    }
    out
}

/// Decide the flavour of a typeinfo object discovered without a relocation to name
/// it, from the object's own shape: a word past the name pointer that resolves to
/// another accepted typeinfo means single inheritance; an in-range `base_count`
/// whose whole base array resolves means the vmi form; otherwise the two-word form.
fn sniff_flavor(img: &ImageBytes, rk: &RefKind, addr: u64, accepted: &HashSet<u64>) -> Flavor {
    let ptr = rk.ptr_size() as u64;
    if let Some(base) = read_ptr(img, rk, addr + 2 * ptr) {
        if accepted.contains(&base) {
            return Flavor::SiClass;
        }
    }
    if let Some(count) = read_u32(img, rk, addr + 2 * ptr + 4) {
        if (1..=MAX_BASES).contains(&count) {
            let all_resolve = (0..count as u64).all(|i| {
                read_ptr(img, rk, addr + 2 * ptr + 8 + i * 2 * ptr)
                    .is_some_and(|b| accepted.contains(&b))
            });
            if all_resolve {
                return Flavor::VmiClass;
            }
        }
    }
    Flavor::Class
}

/// Read a typeinfo's direct base list and the object's byte extent, per flavour.
/// A base pointer that does not resolve to an accepted typeinfo is dropped rather
/// than trusted.
fn read_bases(
    img: &ImageBytes,
    rk: &RefKind,
    addr: u64,
    flavor: Flavor,
    accepted: &HashSet<u64>,
) -> (Vec<(u64, i64)>, Vec<(u64, i64)>, u64) {
    let ptr = rk.ptr_size() as u64;
    match flavor {
        Flavor::Class => (Vec::new(), Vec::new(), 2 * ptr),
        Flavor::SiClass => {
            let base = read_ptr(img, rk, addr + 2 * ptr).filter(|b| accepted.contains(b));
            // An si base is by definition at displacement 0.
            (
                base.map(|b| vec![(b, 0)]).unwrap_or_default(),
                Vec::new(),
                3 * ptr,
            )
        }
        Flavor::VmiClass => {
            let Some(count) = read_u32(img, rk, addr + 2 * ptr + 4) else {
                return (Vec::new(), Vec::new(), 2 * ptr);
            };
            let count = count.min(MAX_BASES) as u64;
            let mut bases = Vec::new();
            let mut virtual_bases = Vec::new();
            for i in 0..count {
                let entry = addr + 2 * ptr + 8 + i * 2 * ptr;
                let Some(bti) = read_ptr(img, rk, entry) else {
                    break;
                };
                let Some(flags) = read_ptr(img, rk, entry + ptr) else {
                    break;
                };
                if !accepted.contains(&bti) {
                    continue;
                }
                // Itanium `__base_class_type_info::__offset_flags`: the low 8 bits
                // are access/virtual flags, the rest a SIGNED byte displacement --
                // or, for a virtual base (bit 0), the vtable offset of the word
                // holding it.
                let flags = sign_extend(flags, rk);
                if flags & 1 != 0 {
                    virtual_bases.push((bti, flags >> 8));
                } else {
                    bases.push((bti, flags >> 8));
                }
            }
            (bases, virtual_bases, 2 * ptr + 8 + count * 2 * ptr)
        }
    }
}

/// Give each virtual base its displacement, and add the virtual bases a class
/// inherits through its bases (`D : L, R` with `L : virtual B` lists only L and
/// R, yet B has its own sub-vtable in D). For a base subobject at `disp` whose
/// typeinfo names virtual base V at vtable offset `slot`, V lies at `disp` plus
/// the signed word at `slot` from the address point of the sub-vtable D keeps
/// for that subobject (offset-to-top `-disp`).
fn resolve_virtual_bases(
    img: &ImageBytes,
    rk: &RefKind,
    typeinfos: &mut [TypeInfo],
    subs: &[SubVtable],
) {
    let shape: HashMap<u64, (Vec<(u64, i64)>, Vec<(u64, i64)>)> = typeinfos
        .iter()
        .map(|t| (t.addr, (t.bases.clone(), t.virtual_bases.clone())))
        .collect();
    for ti in typeinfos.iter_mut() {
        let vbase_at = |disp: i64, slot: i64| -> Option<i64> {
            let sub = subs
                .iter()
                .find(|s| s.typeinfo == ti.addr && s.offset_to_top == -disp)?;
            read_ptr(img, rk, sub.first_slot.wrapping_add(slot as u64)).map(|v| sign_extend(v, rk))
        };
        let mut found: Vec<(u64, i64)> = ti.bases.clone();
        let mut work: Vec<(u64, i64, u32)> = vec![(ti.addr, 0, 0)];
        let mut seen: HashSet<u64> = HashSet::new();
        while let Some((b, disp, depth)) = work.pop() {
            if !seen.insert(b) || depth > MAX_BASES {
                continue;
            }
            let Some((nonvirtual, virtuals)) = shape.get(&b) else {
                continue;
            };
            for &(b2, d2) in nonvirtual {
                work.push((b2, disp + d2, depth + 1));
            }
            for &(b2, slot) in virtuals {
                if found.iter().any(|&(f, _)| f == b2) {
                    continue;
                }
                if let Some(d) = vbase_at(disp, slot) {
                    found.push((b2, disp + d));
                    work.push((b2, disp + d, depth + 1));
                }
            }
        }
        ti.bases = found;
    }
}

/// Recover every sub-vtable in the image: scan each loaded section once for a
/// pointer-width slot holding a discovered typeinfo address (a sub-vtable's second
/// header word), then validate and walk each candidate.
///
/// A single scan rather than one [`ImageBytes::find_ptrs`] per class: the per-class
/// form is `O(classes × image)`, which on a real C++ library with hundreds of
/// polymorphic classes is the difference between milliseconds and seconds.
fn recover_subvtables(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    relocated: &HashSet<u64>,
    typeinfos: &[TypeInfo],
) -> Vec<SubVtable> {
    recover_vtables(img, rk, text, relocated, typeinfos).0
}

/// [`recover_subvtables`], plus `(typeinfo, vptr)` of every primary vtable that
/// walks to no slot because its first two are null ([`null_dtor_pair`]).
fn recover_vtables(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    relocated: &HashSet<u64>,
    typeinfos: &[TypeInfo],
) -> (Vec<SubVtable>, Vec<(u64, u64)>) {
    let ptr = rk.ptr_size() as u64;
    let by_addr: HashMap<u64, &TypeInfo> = typeinfos.iter().map(|t| (t.addr, t)).collect();
    let mut out = Vec::new();
    let mut null_dtors = Vec::new();

    for slot in img.scan_ptr_slots(rk, &by_addr.keys().copied().collect()) {
        let (ti_slot, ti_addr) = slot;
        // The header word before the typeinfo pointer is `offset-to-top`.
        let Some(header) = ti_slot.checked_sub(ptr) else {
            continue;
        };
        // Reject a pointer that lies INSIDE a typeinfo object: a base-class pointer
        // in an si/vmi typeinfo also holds a typeinfo address, but is not a vtable.
        if typeinfos
            .iter()
            .any(|t| header >= t.addr && header < t.addr + t.size)
        {
            continue;
        }
        let Some(raw_top) = read_ptr(img, rk, header) else {
            continue;
        };
        let offset_to_top = sign_extend(raw_top, rk);
        // The ABI's exact constraint: offset-to-top is 0 for the primary sub-vtable
        // and NEGATIVE for a secondary — never positive, never image-sized.
        if offset_to_top > 0 || offset_to_top < -MAX_SUBOBJECT_OFFSET {
            continue;
        }
        let first_slot = ti_slot + ptr;
        let slots = walk_slots(img, rk, text, relocated, first_slot);
        if !slots.iter().any(|s| s.is_some()) {
            if offset_to_top == 0 && null_dtor_pair(img, rk, text, relocated, first_slot) {
                null_dtors.push((ti_addr, first_slot));
            }
            continue;
        }
        out.push(SubVtable {
            header,
            first_slot,
            offset_to_top,
            typeinfo: ti_addr,
            slots,
        });
    }
    out.sort_by_key(|s| s.header);
    null_dtors.sort_unstable();
    null_dtors.dedup();
    (out, null_dtors)
}

/// Whether the primary vtable at `first_slot` starts with two null slots, neither
/// one the dynamic loader fills, followed by a method (code or an imported
/// slot such as `__cxa_pure_virtual`). GCC writes the complete and deleting
/// destructor slots of an abstract class as 0: its vtable is only installed
/// while a derived object is being built or destroyed, when neither is called
/// through it. The pair is where every class derived from it keeps its
/// destructors.
fn null_dtor_pair(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    relocated: &HashSet<u64>,
    first_slot: u64,
) -> bool {
    let ptr = rk.ptr_size() as u64;
    let null = |at: u64| read_ptr(img, rk, at) == Some(0) && !relocated.contains(&at);
    let (Some(second), Some(third)) =
        (first_slot.checked_add(ptr), first_slot.checked_add(2 * ptr))
    else {
        return false;
    };
    null(first_slot)
        && null(second)
        && match read_ptr(img, rk, third) {
            Some(0) => relocated.contains(&third),
            Some(w) => text.contains(w),
            None => false,
        }
}

/// Walk a sub-vtable's slots from `first_slot`, bounded at the first word that is
/// neither a code pointer nor a loader-filled import slot.
///
/// A slot reading 0 with a dynamic relocation covering it is an imported virtual
/// method — the file simply does not carry its value. Recording it as `None` keeps
/// the slot INDEX faithful (so `<C>::vfunc_<i>` matches the ABI's numbering) and
/// lets the walk continue to the locally-defined methods after it, which is what
/// gives an abstract interface's vtable its true extent.
fn walk_slots(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    relocated: &HashSet<u64>,
    first_slot: u64,
) -> Vec<Option<u64>> {
    let ptr = rk.ptr_size() as u64;
    let mut slots: Vec<Option<u64>> = Vec::new();
    let mut at = first_slot;
    for _ in 0..MAX_SLOTS {
        let Some(word) = read_ptr(img, rk, at) else {
            break;
        };
        if text.contains(word) {
            slots.push(Some(word));
        } else if word == 0 && relocated.contains(&at) {
            slots.push(None);
        } else {
            break;
        }
        at += ptr;
    }
    // Trailing import slots carry no information and may be the next object's
    // relocated header; drop them so the read-only range stops at real content.
    while matches!(slots.last(), Some(None)) {
        slots.pop();
    }
    slots
}

/// Emit the recovered facts: the typeinfo/name/vtable data labels, one function
/// symbol per virtual slot, and the slot arrays as read-only ranges.
fn emit(typeinfos: &[TypeInfo], subs: &[SubVtable], rk: &RefKind, out: &mut AnalysisOutput) {
    let ptr = rk.ptr_size() as u64;
    let by_addr: HashMap<u64, &TypeInfo> = typeinfos.iter().map(|t| (t.addr, t)).collect();

    for ti in typeinfos {
        out.symbols.push(SymFact {
            addr: ti.addr,
            name: data_label(&ti.class, "typeinfo"),
            kind: SymKind::Data,
        });
        out.symbols.push(SymFact {
            addr: ti.name_addr,
            name: data_label(&ti.class, "typeinfo_name"),
            kind: SymKind::Data,
        });
    }

    let mut labelled: Vec<(&SubVtable, &str, String)> = Vec::new();
    for sub in subs {
        let Some(ti) = by_addr.get(&sub.typeinfo) else {
            continue;
        };
        let suffix = subvtable_suffix(ti, sub, &by_addr);
        out.symbols.push(SymFact {
            addr: sub.header,
            name: data_label(&ti.class, &suffix),
            kind: SymKind::Data,
        });
        // The value an object's vptr actually HOLDS is the first slot's address, two
        // words past the header a `_ZTV<C>` symbol names — that is the constant a
        // constructor stores (`*this = 0x7b98`), so it gets its own label.
        out.symbols.push(SymFact {
            addr: sub.first_slot,
            name: data_label(&ti.class, &suffix.replacen("vtable", "vptr", 1)),
            kind: SymKind::Data,
        });
        let end = sub.first_slot + sub.slots.len() as u64 * ptr;
        out.readonly.push((sub.header, end));
        labelled.push((sub, ti.class.as_str(), suffix));
    }

    for (addr, name) in attribute_slots(typeinfos, &labelled) {
        out.symbols.push(SymFact {
            addr,
            name,
            kind: SymKind::Function,
        });
    }
}

/// Compose a **data** symbol name: the class qualification is kept (so a namespaced
/// class still nests under its namespace scope) but the kind suffix is joined with
/// `_`, not `::`.
///
/// unlace's scope splitter splits a symbol name on every `::` and the C printer emits
/// a global by its LEAF name, so `Shape::vptr` and `Circle::vptr` would both render
/// as a bare `vptr` at the vptr store that is this recovery's most visible use site.
/// Joining with `_` puts the class in the leaf — `Shape_vptr`, `leveldb::Env_vtable`
/// → `Env_vtable` — which is unambiguous. Function symbols keep the `::` form: a
/// callee's qualified name IS rendered at the call site (`cppcallnames`, DIV-59).
fn data_label(class: &str, suffix: &str) -> String {
    format!("{class}_{suffix}")
}

/// The kind suffix for one sub-vtable: `vtable` for the primary, and for a secondary
/// the base subobject its `offset-to-top` identifies — `vtable_for_Drawable`, read
/// straight off the recovered inheritance displacements (the datum the MSVC sibling
/// pass discards with its `pmd` fields). A displacement no declared base claims
/// falls back to the raw offset so the label stays unique.
fn subvtable_suffix(ti: &TypeInfo, sub: &SubVtable, by_addr: &HashMap<u64, &TypeInfo>) -> String {
    if sub.offset_to_top == 0 {
        return "vtable".to_string();
    }
    let want = -sub.offset_to_top;
    if let Some(base) = ti
        .bases
        .iter()
        .find(|&&(_, off)| off == want)
        .and_then(|&(b, _)| by_addr.get(&b))
    {
        return format!("vtable_for_{}", base_tag(ti, base, by_addr));
    }
    format!("vtable_at_{want:x}")
}

/// The identifier a secondary sub-vtable label uses for its base subobject: the
/// base's innermost class name (`shapes::Drawable` → `Drawable`), which reads far
/// better inside a label than the flattened qualified form — falling back to the
/// flattened qualified name when two of `ti`'s bases share an innermost name, so
/// the label stays unique.
fn base_tag(ti: &TypeInfo, base: &TypeInfo, by_addr: &HashMap<u64, &TypeInfo>) -> String {
    let leaf = |c: &str| c.rsplit("::").next().unwrap_or(c).to_string();
    let tag = leaf(&base.class);
    let clashes = ti
        .bases
        .iter()
        .filter_map(|&(b, _)| by_addr.get(&b))
        .filter(|other| other.addr != base.addr && leaf(&other.class) == tag)
        .count();
    if clashes == 0 {
        tag
    } else {
        base.class.replace("::", "_")
    }
}

/// Name every virtual-method slot `<C>::vfunc[_for_<Base>]_<slot index>`, attributing an
/// inherited slot to the class that **defines** it rather than to whichever vtable
/// the scan reached first.
///
/// A derived class's vtable repeats its bases' slots verbatim, so one function
/// address is claimed by every class in its inheritance chain. Attributing by scan
/// order would call `Shape::perimeter` — inherited unchanged by `Circle` and
/// `Square` — `Square::vfunc_3`. The recovered base graph resolves it: among the
/// claimants, the one whose class is an ancestor of all the others wins; a tie
/// (unrelated classes sharing a thunk) falls back to the lowest typeinfo address so
/// the result is deterministic.
///
/// The sub-vtable's suffix rather than the class name alone carries the prefix
/// because a multiple-inheritance class has SEVERAL sub-vtables, whose slot indices
/// both start at 0: `Widget::vfunc_0` and `Widget::vfunc_for_Drawable_0` are
/// different functions (the second is the `this`-adjusting thunk).
fn attribute_slots(
    typeinfos: &[TypeInfo],
    subs: &[(&SubVtable, &str, String)],
) -> Vec<(u64, String)> {
    let by_addr: HashMap<u64, &TypeInfo> = typeinfos.iter().map(|t| (t.addr, t)).collect();
    let ancestors: HashMap<u64, HashSet<u64>> = typeinfos
        .iter()
        .map(|t| (t.addr, ancestors_of(t.addr, &by_addr)))
        .collect();

    // fn addr -> the claims on it, as (typeinfo addr, class, suffix, slot index).
    let mut claims: HashMap<u64, Vec<(u64, &str, &str, usize)>> = HashMap::new();
    for (sub, class, suffix) in subs {
        for (i, slot) in sub.slots.iter().enumerate() {
            if let Some(target) = slot {
                claims
                    .entry(*target)
                    .or_default()
                    .push((sub.typeinfo, class, suffix.as_str(), i));
            }
        }
    }

    let mut out: Vec<(u64, String)> = Vec::new();
    for (target, mut cs) in claims {
        cs.sort();
        cs.dedup();
        // The most-base claimant: its class is an ancestor of every other claimant's.
        let best = cs
            .iter()
            .find(|&&(ti, ..)| {
                cs.iter().all(|&(other, ..)| {
                    other == ti || ancestors.get(&other).is_some_and(|a| a.contains(&ti))
                })
            })
            .copied()
            .or_else(|| cs.first().copied());
        if let Some((_, class, suffix, idx)) = best {
            let stem = suffix.replacen("vtable", "vfunc", 1);
            out.push((target, format!("{class}::{stem}_{idx}")));
        }
    }
    out.sort();
    out
}

/// Every transitive base of `addr` in the recovered inheritance graph. Cycle-safe
/// (a malformed image could point a base back at its derived class).
fn ancestors_of(addr: u64, by_addr: &HashMap<u64, &TypeInfo>) -> HashSet<u64> {
    let mut seen = HashSet::new();
    let mut stack = vec![addr];
    while let Some(cur) = stack.pop() {
        let Some(t) = by_addr.get(&cur) else {
            continue;
        };
        for &(base, _) in &t.bases {
            if seen.insert(base) {
                stack.push(base);
            }
        }
    }
    seen
}

/// Turn a demangled class name into a `::`-qualified chain of C identifiers, keeping
/// **distinct classes distinct**.
///
/// unlace's scope splitter splits a symbol name on every `::` and each component must
/// be a legal identifier, so the raw demangled text cannot be used as-is. The obvious
/// reduction — the module-wide [`strip_bracket_groups`](crate::demangle) that
/// `demangle_name` applies — is wrong *here*: `Vec<int>` and `Vec<double>` are two
/// classes with two vtables, and collapsing both to `Vec` makes the second class's
/// methods lose the idempotent name race and stay `sub_<addr>`. Measured on a probe
/// with both instantiations: 4 of 14 virtual methods silently unrecovered.
///
/// So the template arguments are *folded into* the identifier rather than deleted.
/// The `::` split is depth-aware, so a separator inside a template argument list is
/// not mistaken for a scope boundary; each component then has every non-identifier
/// character collapsed to a single `_`.
///
/// ```text
/// Vec<int>                          -> Vec_int
/// Vec<double>                       -> Vec_double
/// a::b::c::Deep                     -> a::b::c::Deep
/// (anonymous namespace)::Hidden     -> anonymous_namespace::Hidden
/// std::vector<std::pair<int, int> > -> std::vector_std_pair_int_int
/// ```
///
/// The implementation is shared with the `symbolnamechars` option's `ident` mode
/// ([`unlace_decomp::symbolnamechars::sanitize_ident_chain`]), which is the
/// same reduction asked of a loader symbol name. It is applied here
/// UNCONDITIONALLY, gate or no gate: this recovery invents the class string
/// itself out of a `_ZTS` type-descriptor, and the string it invents has to be a
/// legal name for a type and a scope before anything downstream sees it.
fn sanitize_class_name(class: &str) -> String {
    unlace_decomp::symbolnamechars::sanitize_ident_chain(class)
}

/// Read a pointer-width word at `vma`, or `None` if it is not in a loaded section.
fn read_ptr(img: &ImageBytes, rk: &RefKind, vma: u64) -> Option<u64> {
    img.read(vma, rk.ptr_size()).map(|b| rk.read_ptr(b))
}

/// Read a 4-byte word at `vma` in the image's endianness.
fn read_u32(img: &ImageBytes, rk: &RefKind, vma: u64) -> Option<u32> {
    img.read(vma, 4).map(|b| rk.read_u32(b))
}

/// Interpret a pointer-width word as a signed displacement (`offset-to-top`).
fn sign_extend(raw: u64, rk: &RefKind) -> i64 {
    if rk.ptr_size() == 8 {
        raw as i64
    } else {
        raw as u32 as i32 as i64
    }
}

#[cfg(test)]
mod tests;
