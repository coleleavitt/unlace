//! (kuna `vtabletypes`) MSVC constructors and destructors from vftable stores.
//!
//! A constructor or destructor of a polymorphic class `C` stores `C`'s vftable
//! into the object it was called on; nothing else in the class's own code does.
//! The candidates are the functions the image calls directly whose first
//! kilobyte references a vftable (x64 `lea r, [rip+vftable]`; x86 the
//! vftable's address as an immediate). Each is lifted and walked along its
//! fall-through path (`itaniumctors.rs (Walker)`) with `this` where MSVC
//! passes it (RCX on x64, ECX under x86 `__thiscall`), and only a store of a
//! vftable through `this + off` counts: a factory stores through its
//! allocation, a caller building a local through its own frame. The class whose
//! offset-0 vftable is stored, every other store being its own or a base's,
//! owns the function; a store after a call that was not passed `this` (a
//! by-value return slot filled after other work) leaves it alone.
//!
//! A function in no vftable that returns `this` (MSVC constructors return the
//! object they built) is `C::C`. One that does not, and that a function in
//! `C`'s own vftable calls (the scalar or vector deleting destructor), is
//! `C::~C`, and so is that calling slot when it is the only one (the name a
//! symbol table gives an Itanium deleting destructor too). A slot of `C`'s
//! own vftable that inlined the destructor instead (it stores `C`'s vftable
//! before any call) and tests bit 0 of its flags argument, the `delete this`
//! request, is that deleting destructor too. MSVC's frame-setup helpers
//! (`__EH_prolog3`, `__SEH_prolog4`) are stepped over as if absent
//! ([`frame_setup_helpers`]). Either way, and
//! also when neither name applies (a helper storing the vftable into the
//! object it is passed), the function's `this` is `C *`:
//! the object it stores `C`'s vftable into is a `C`. A function the symbol
//! table already names keeps its name.
//!
//! The walk decodes the image, so this runs at the analysis commit, after the
//! image is attached to the decoder ([`crate::passes::run_msvc_ctors`]).

use std::collections::{BTreeMap, BTreeSet, HashMap, HashSet};

use object::read::{Object, ObjectSection};
use object::{Architecture, BinaryFormat, SectionKind};

use crate::pass::{AnalysisCtx, AnalysisOutput, SymFact, SymKind};

use super::itaniumctors::{
    ClassVtables, MAX_DTOR_INSNS, MAX_INSNS, Walker, ctor_name, dtor_name, named_already,
    owning_class, pairs,
};
use super::models::ImageBytes;
use super::msvcvtabletypes::{Class, facts, recover};
use super::vftable::TextRanges;
use super::vtabletypes::struct_name;

/// How far past a candidate's entry a vftable reference may sit.
const MAX_REF_DISTANCE: u64 = 0x400;

/// Name the constructors and destructors of an MSVC image's classes and type
/// their `this`.
pub fn run(ctx: &AnalysisCtx) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    if ctx.file.format() != BinaryFormat::Pe {
        return out;
    }
    let is64 = match ctx.file.architecture() {
        Architecture::X86_64 => true,
        Architecture::I386 => false,
        _ => return out,
    };
    let Some(rk) = super::ref_kind_for(ctx) else {
        return out;
    };
    let img = ImageBytes::new(ctx.file);
    let text = TextRanges::new(ctx.file);
    let classes = recover(&img, &rk, &text);
    if classes.is_empty() {
        return out;
    }
    let typed = facts(&classes, &HashMap::new(), rk.ptr_size() as u64);
    let typed_names: HashSet<&str> = typed.classes.iter().map(|c| c.class.as_str()).collect();
    let hinted: HashSet<u64> = typed.this_types.iter().map(|(f, _)| *f).collect();

    let index: BTreeMap<u64, usize> = classes.keys().enumerate().map(|(i, &td)| (td, i)).collect();
    let list: Vec<(&u64, &Class)> = classes.iter().collect();
    let vtables: Vec<ClassVtables> = list
        .iter()
        .map(|(_, c)| ClassVtables {
            name: c.name.clone(),
            ancestors: c
                .bases
                .iter()
                .filter_map(|b| index.get(&b.td).copied())
                .collect(),
            primary_slots: Vec::new(),
            vptrs: Vec::new(),
            null_dtor_pair: false,
        })
        .collect();
    let mut owner_of: HashMap<u64, (usize, bool)> = HashMap::new();
    let mut in_a_vftable: HashSet<u64> = HashSet::new();
    for (i, (_, c)) in list.iter().enumerate() {
        for t in &c.tables {
            owner_of.insert(t.vt.base, (i, t.offset == 0));
            in_a_vftable.extend(t.vt.slots.iter().copied());
        }
    }

    let code = executable_sections(ctx.file);
    let mut targets = call_targets(&code, &text);
    targets.sort_unstable();
    targets.dedup();
    let mut candidates: BTreeSet<u64> = BTreeSet::new();
    for site in vftable_references(&code, &owner_of, is64) {
        let at = targets.partition_point(|&t| t <= site);
        if let Some(&entry) = at.checked_sub(1).and_then(|i| targets.get(i))
            && site - entry <= MAX_REF_DISTANCE
            && !in_a_vftable.contains(&entry)
        {
            candidates.insert(entry);
        }
    }
    let model = if is64 {
        ctx.arch.default_fp()
    } else {
        ctx.arch
            .get_model("__thiscall")
            .or_else(|| ctx.arch.default_fp())
    };
    let entries = candidates.iter().copied().chain(
        list.iter()
            .flat_map(|(_, c)| c.tables.iter())
            .flat_map(|t| t.vt.slots.iter().copied()),
    );
    let helpers = frame_setup_helpers(&code, entries, &text);
    let Some(walker) = model
        .and_then(|m| Walker::with_model(ctx, m))
        .map(|w| w.with_transparent_calls(helpers))
    else {
        return out;
    };
    let _scope = ctx.arch.translate().decode_context_scope();

    // What each own-vftable slot calls: a deleting destructor calls the
    // destructor.
    let mut called_by_slots: Vec<HashSet<u64>> = vec![HashSet::new(); list.len()];
    let mut walked_slots: HashMap<u64, Vec<u64>> = HashMap::new();
    // A slot that inlined its destructor stores the vftable itself.
    let mut inlined: BTreeMap<u64, usize> = BTreeMap::new();
    for (i, (_, c)) in list.iter().enumerate() {
        for t in c.tables.iter().filter(|t| t.offset == 0) {
            for &g in &t.vt.slots {
                if !walked_slots.contains_key(&g) {
                    let walk = walker.walk(g, &owner_of, MAX_DTOR_INSNS);
                    if let Some(owner) = inlined_deleting_dtor(&walk, &owner_of, &vtables)
                        && tests_delete_flag(&code, g, is64)
                    {
                        inlined.insert(g, owner);
                    }
                    walked_slots.insert(g, walk.calls);
                }
                called_by_slots[i].extend(walked_slots[&g].iter().copied());
            }
        }
    }
    let mut named: HashSet<u64> = HashSet::new();

    for entry in candidates {
        let walk = walker.walk(entry, &owner_of, MAX_INSNS);
        if walk.stores.is_empty() || walk.stores.iter().any(|s| s.after_call && !s.after_build) {
            continue;
        }
        let Some(c) = owning_class(&pairs(walk.stores.iter()), &owner_of, &vtables) else {
            continue;
        };
        let name = if walk.returns_this {
            Some(ctor_name(&vtables[c].name))
        } else if called_by_slots[c].contains(&entry) {
            Some(dtor_name(&vtables[c].name))
        } else {
            None
        };
        if let Some(name) = &name
            && !walk.returns_this
        {
            let mut deleting: Vec<u64> = list[c]
                .1
                .tables
                .iter()
                .filter(|t| t.offset == 0)
                .flat_map(|t| t.vt.slots.iter().copied())
                .filter(|g| {
                    walked_slots
                        .get(g)
                        .is_some_and(|calls| calls.contains(&entry))
                })
                .collect();
            deleting.sort_unstable();
            deleting.dedup();
            if let [g] = deleting[..]
                && !named_already(ctx, g)
                && named.insert(g)
            {
                out.symbols.push(SymFact {
                    addr: g,
                    name: name.clone(),
                    kind: SymKind::Function,
                });
            }
        }
        if let Some(name) = name
            && !named_already(ctx, entry)
        {
            out.symbols.push(SymFact {
                addr: entry,
                name,
                kind: SymKind::Function,
            });
        }
        let class = struct_name(&vtables[c].name);
        if typed_names.contains(class.as_str()) && !hinted.contains(&entry) {
            out.cpp_vtables.this_types.push((entry, class));
        }
    }
    for (g, c) in inlined {
        if !named.contains(&g) && !named_already(ctx, g) {
            out.symbols.push(SymFact {
                addr: g,
                name: dtor_name(&vtables[c].name),
                kind: SymKind::Function,
            });
        }
    }
    out
}

/// The class a vftable slot is the deleting destructor of when it inlined the
/// destructor: it stores that class's offset-0 vftable through `this` before
/// any call (each other store its own or a base's, as a destructor stores the
/// vftables of its bases on the way down). It returns `this`, as an MSVC
/// deleting destructor does.
fn inlined_deleting_dtor(
    walk: &super::itaniumctors::Walk,
    owner_of: &HashMap<u64, (usize, bool)>,
    vtables: &[ClassVtables],
) -> Option<usize> {
    let first = walk.stores.first()?;
    if first.after_call {
        return None;
    }
    let c = owning_class(&pairs(walk.stores.iter()), owner_of, vtables)?;
    (owner_of.get(&first.vptr) == Some(&(c, true))).then_some(c)
}

/// How far into a slot the test of the deleting destructor's flags may sit.
const MAX_FLAG_TEST_DISTANCE: usize = 0x100;

/// Whether the function at `entry` tests bit 0 of its flags argument, the
/// `delete this` request of an MSVC scalar or vector deleting destructor:
/// `test byte ptr [ebp+8], 1` or `[esp+n]` on x86, `test dl, 1` (or the
/// `bl`/`dil` copy of it) or a frame copy on x64.
fn tests_delete_flag(code: &[(u64, &[u8])], entry: u64, is64: bool) -> bool {
    let Some(bytes) = code_at(code, entry, MAX_FLAG_TEST_DISTANCE) else {
        return false;
    };
    let windows = |n: usize| bytes.windows(n);
    let stack = windows(5).any(|w| w[0] == 0xf6 && w[1] == 0x44 && w[2] == 0x24 && w[4] == 0x01);
    if is64 {
        stack
            || windows(3).any(|w| w == [0xf6, 0xc2, 0x01] || w == [0xf6, 0xc3, 0x01])
            || windows(4).any(|w| w == [0x40, 0xf6, 0xc7, 0x01])
    } else {
        stack
            || windows(4).any(|w| w == [0xf6, 0x45, 0x08, 0x01])
            || windows(6).any(|w| w == [0x8b, 0x45, 0x08, 0x83, 0xe0, 0x01])
    }
}

/// Up to `len` bytes of code from `addr`.
fn code_at<'a>(code: &[(u64, &'a [u8])], addr: u64, len: usize) -> Option<&'a [u8]> {
    code.iter().find_map(|&(base, data)| {
        let off = usize::try_from(addr.checked_sub(base)?).ok()?;
        let end = off.checked_add(len)?.min(data.len());
        data.get(off..end)
    })
}

/// How many functions must open with a call to one target for it to be taken
/// as a frame-setup helper.
const MIN_HELPER_USES: usize = 2;

/// The frame-setup helpers MSVC calls first thing: `__EH_prolog3` and its
/// `_catch`/`_GS` forms (`push size; mov eax, handler; call`) and
/// `__SEH_prolog4` (`push size; push scopetable; call`). Each is the target
/// that call reaches from the entry of at least [`MIN_HELPER_USES`] of
/// `entries`. The walk steps over it: the helper builds the frame and the
/// exception registration and leaves `this` in ECX, so a destructor's vftable
/// store after it is still the first thing the function does.
fn frame_setup_helpers(
    code: &[(u64, &[u8])],
    entries: impl Iterator<Item = u64>,
    text: &TextRanges,
) -> HashSet<u64> {
    let mut uses: HashMap<u64, BTreeSet<u64>> = HashMap::new();
    for entry in entries {
        let Some(b) = code_at(code, entry, 15) else {
            continue;
        };
        let call_at = match b {
            [0x6a, _, 0xb8, _, _, _, _, 0xe8, ..] | [0x6a, _, 0x68, _, _, _, _, 0xe8, ..] => 7,
            [0x68, _, _, _, _, 0xb8, _, _, _, _, 0xe8, ..] => 10,
            _ => continue,
        };
        let Some(rel) = b.get(call_at + 1..call_at + 5) else {
            continue;
        };
        let rel = i32::from_le_bytes([rel[0], rel[1], rel[2], rel[3]]);
        let target = entry
            .wrapping_add(call_at as u64 + 5)
            .wrapping_add(i64::from(rel) as u64);
        if text.contains(target) {
            uses.entry(target).or_default().insert(entry);
        }
    }
    uses.into_iter()
        .filter(|(_, at)| at.len() >= MIN_HELPER_USES)
        .map(|(t, _)| t)
        .collect()
}

/// Every executable section's address and bytes.
fn executable_sections<'a>(file: &'a object::File<'a>) -> Vec<(u64, &'a [u8])> {
    let mut out = Vec::new();
    for sec in file.sections() {
        let exec = sec.kind() == SectionKind::Text
            || matches!(
                sec.flags(),
                object::SectionFlags::Coff { characteristics }
                    if characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
            );
        if exec
            && sec.address() != 0
            && let Ok(data) = sec.data()
        {
            out.push((sec.address(), data));
        }
    }
    out
}

/// The target of every `call rel32` (`E8`) that lands in code. A byte that
/// only looks like one adds a candidate the walk then rejects.
fn call_targets(code: &[(u64, &[u8])], text: &TextRanges) -> Vec<u64> {
    let mut out = Vec::new();
    for &(base, data) in code {
        for i in memchr::memchr_iter(0xe8, data) {
            let Some(rel) = data.get(i + 1..i + 5) else {
                break;
            };
            let rel = i32::from_le_bytes([rel[0], rel[1], rel[2], rel[3]]);
            let next = base.wrapping_add(i as u64 + 5);
            let target = next.wrapping_add(i64::from(rel) as u64);
            if text.contains(target) {
                out.push(target);
            }
        }
    }
    out
}

/// The address of every reference to a vftable in `owner_of`: on x64 the
/// displacement of a RIP-relative `lea` (`48|4C 8D modrm(00 r 101) disp32`), on
/// x86 any 32-bit word holding a vftable's address.
fn vftable_references(
    code: &[(u64, &[u8])],
    owner_of: &HashMap<u64, (usize, bool)>,
    is64: bool,
) -> Vec<u64> {
    let mut out = Vec::new();
    for &(base, data) in code {
        if data.len() < 7 {
            continue;
        }
        for i in 3..=data.len() - 4 {
            let word = u32::from_le_bytes([data[i], data[i + 1], data[i + 2], data[i + 3]]);
            let at = base.wrapping_add(i as u64);
            let target = if is64 {
                if data[i - 2] != 0x8d || data[i - 1] & 0xc7 != 0x05 || data[i - 3] & 0xfa != 0x48 {
                    continue;
                }
                at.wrapping_add(4)
                    .wrapping_add(i64::from(word as i32) as u64)
            } else {
                u64::from(word)
            };
            if owner_of.contains_key(&target) {
                out.push(at);
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    /// The `delete this` flag test of an MSVC deleting destructor, found from
    /// the slot's entry; a function without one is not taken for one.
    #[test]
    fn deleting_destructor_flag_tests() {
        // mov dword ptr [esi], vftable; ... test byte ptr [ebp+8], 1; je
        let x86 = [
            0x55, 0x8b, 0xec, 0x56, 0x8b, 0xf1, 0xc7, 0x06, 0xa4, 0x2d, 0x02, 0x10, 0xf6, 0x45,
            0x08, 0x01, 0x74, 0x09,
        ];
        assert!(tests_delete_flag(&[(0x1000, &x86)], 0x1000, false));
        assert!(!tests_delete_flag(&[(0x1000, &x86[..12])], 0x1000, false));
        // mov ebx, edx; ... test bl, 1
        let x64 = [0x8b, 0xda, 0x48, 0x8b, 0xf9, 0xf6, 0xc3, 0x01, 0x74, 0x0a];
        assert!(tests_delete_flag(&[(0x2000, &x64)], 0x2000, true));
        assert!(!tests_delete_flag(&[(0x2000, &x64)], 0x2000, false));
        assert!(!tests_delete_flag(&[(0x2000, &x64)], 0x3000, true));
    }

    /// A call every `__EH_prolog3`-shaped entry makes is a frame-setup
    /// helper; one entry alone does not make it one.
    #[test]
    fn eh_prolog_helpers_are_found_from_entries() {
        let text = TextRanges::for_test(vec![(0x1000, 0x2000)]);
        // push 4; mov eax, handler; call 0x1800
        let mut code = vec![0xccu8; 0x100];
        for &at in &[0x00usize, 0x40] {
            let rel = (0x1800i64 - (0x1000 + at as i64 + 12)) as i32;
            code[at..at + 7].copy_from_slice(&[0x6a, 0x04, 0xb8, 0xb9, 0x16, 0x3e, 0x10]);
            code[at + 7] = 0xe8;
            code[at + 8..at + 12].copy_from_slice(&rel.to_le_bytes());
        }
        let sections = [(0x1000u64, code.as_slice())];
        let found = frame_setup_helpers(&sections, [0x1000, 0x1040].into_iter(), &text);
        assert_eq!(found, HashSet::from([0x1800]));
        let alone = frame_setup_helpers(&sections, [0x1000].into_iter(), &text);
        assert!(alone.is_empty());
    }

    #[test]
    fn call_targets_follow_rel32() {
        let text = TextRanges::for_test(vec![(0x1000, 0x1100)]);
        let code = [
            0x90, 0xe8, 0x0b, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x10,
        ];
        let targets = call_targets(&[(0x1000, &code)], &text);
        assert_eq!(targets, vec![0x1011]);
    }

    #[test]
    fn x64_lea_rip_references_a_vftable() {
        // lea rcx, [rip+0x10fe] at 0x1400010f3 names 0x1400021f8.
        let code = [
            0x48, 0x89, 0xc8, 0x48, 0x8d, 0x0d, 0xfe, 0x10, 0x00, 0x00, 0x48, 0x89,
        ];
        let owner_of = HashMap::from([(0x1_4000_21f8u64, (0usize, true))]);
        let refs = vftable_references(&[(0x1_4000_10f0, &code)], &owner_of, true);
        assert_eq!(refs, vec![0x1_4000_10f6]);
    }

    #[test]
    fn x86_immediates_reference_a_vftable() {
        // mov dword ptr [eax], 0x4021a8
        let code = [0x89, 0xc8, 0xc7, 0x00, 0xa8, 0x21, 0x40, 0x00, 0xc3];
        let owner_of = HashMap::from([(0x4021a8u64, (0usize, true))]);
        let refs = vftable_references(&[(0x4010c0, &code)], &owner_of, false);
        assert_eq!(refs, vec![0x4010c4]);
    }
}
