//! (kuna `vtabletypes`) The typed-vftable facts of an MSVC C++ image, for the
//! commit that installs them ([`unlace_decomp::kuna_vtabletypes`]).
//!
//! Built on the MSVC RTTI recovery of [`super::RttiPass`], which this pass runs
//! on its own so the facts do not depend on whether the `rtti` labels are
//! committed. Each CompleteObjectLocator names a class, the offset of the
//! subobject its vftable serves, and the whole hierarchy: every base with its
//! displacement and whether it is virtual. A class is typed from its own
//! offset-0 vftable; a slot's targets are that table's function and the same
//! slot of every vftable a derived class keeps for the class's subobject. A
//! class the image never instantiates (an abstract base) has no vftable of its
//! own and takes the prefix every derived view shares. A slot is named after
//! the method a symbol names (`area`; `dtor` for `??1`, `deleting_dtor` for
//! the scalar and vector deleting destructors `??_G`/`??_E`), else `vfn_<i>`.
//!
//! A function a vftable holds is a virtual member whose `this` points at the
//! subobject the vftable serves, so its class is the class at that
//! displacement (the most derived of those sharing it). A function several
//! vftables hold takes the nearest class that is, in each of them, that class
//! or one of its bases at offset 0; with none (identical-code folding,
//! `_purecall`) it is left untyped. A vftable serving a virtual base types
//! none of its functions.

use std::collections::{BTreeMap, BTreeSet, HashMap};

use object::read::{Object, ObjectSymbol};
use object::{BinaryFormat, SymbolKind};

use unlace_decomp::kuna_vtabletypes::{VtableClass, VtableSlot};

use crate::demangle::demangle_rtti_class_name;
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

use super::kuna_vtabletypes::{VtableFacts, VtableObject, is_identifier, struct_name};
use super::models::{
    BaseClassDescriptor, ClassHierarchyDescriptor, ImageBytes, TypeDescriptor,
    read_base_class_array,
};
use super::refkind::RefKind;
use super::vftable::{TextRanges, VfTable, walk_vftable};

/// The MSVC typed-vftable pass (gate id `vtabletypes`, PE only).
#[derive(Default)]
pub struct MsvcVtableTypesPass;

impl AnalysisPass for MsvcVtableTypesPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "vtabletypes"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        if ctx.file.format() != BinaryFormat::Pe {
            return AnalysisOutput::default();
        }
        let Some(rk) = super::ref_kind_for(ctx) else {
            return AnalysisOutput::default();
        };
        let img = ImageBytes::new(ctx.file);
        let text = TextRanges::new(ctx.file);
        let classes = recover(&img, &rk, &text);
        AnalysisOutput {
            cpp_vtables: facts(&classes, &method_names(ctx.file), rk.ptr_size() as u64),
            ..AnalysisOutput::default()
        }
    }
}

/// One base of a class, from its hierarchy descriptor.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) struct Base {
    /// The base's TypeDescriptor.
    pub td: u64,
    /// Its displacement in the class (relative to its virtual base when
    /// `virtual_`).
    pub mdisp: i64,
    /// It is, or lies inside, a virtual base.
    pub virtual_: bool,
}

/// One vftable a class keeps, and the offset of the subobject it serves.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) struct Table {
    pub offset: i64,
    pub vt: VfTable,
}

/// One class of the image, by TypeDescriptor.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub(super) struct Class {
    /// The demangled, qualified name (`ns::Box`).
    pub name: String,
    /// Every base, in the hierarchy descriptor's (pre-)order, the class itself
    /// excluded; empty for a class seen only as a base.
    pub bases: Vec<Base>,
    pub tables: Vec<Table>,
}

/// Every class the image's CompleteObjectLocators name or list as a base.
pub(super) fn recover(img: &ImageBytes, rk: &RefKind, text: &TextRanges) -> BTreeMap<u64, Class> {
    let mut classes: BTreeMap<u64, Class> = BTreeMap::new();
    let descriptors = super::find_type_descriptors(img, rk);
    let Some(type_info) = super::pick_common_type_info_vftable(&descriptors) else {
        return classes;
    };
    let mut tds: Vec<&TypeDescriptor> = descriptors
        .iter()
        .filter(|td| td.p_vftable == type_info)
        .collect();
    tds.sort_by_key(|td| td.addr);
    tds.dedup_by_key(|td| td.addr);
    let (cols, meta_slots) = super::find_cols(img, rk, &tds);
    for col in &cols {
        let Some(name) = class_name(img, rk, col.p_type_descriptor) else {
            continue;
        };
        let Some(chd) = ClassHierarchyDescriptor::read(img, rk, col.p_class_hierarchy) else {
            continue;
        };
        let array = read_base_class_array(img, rk, chd.p_base_class_array, chd.num_base_classes);
        let mut bases = Vec::new();
        for &r1 in array.iter().skip(1) {
            let Some(bcd) = BaseClassDescriptor::read(img, rk, r1) else {
                continue;
            };
            let Some((mdisp, pdisp)) = bcd.pmd else {
                continue;
            };
            if bcd.p_type_descriptor == col.p_type_descriptor {
                continue;
            }
            if !classes.contains_key(&bcd.p_type_descriptor) {
                let Some(base_name) = class_name(img, rk, bcd.p_type_descriptor) else {
                    continue;
                };
                classes.insert(
                    bcd.p_type_descriptor,
                    Class {
                        name: base_name,
                        ..Class::default()
                    },
                );
            }
            bases.push(Base {
                td: bcd.p_type_descriptor,
                mdisp: i64::from(mdisp),
                virtual_: pdisp != -1,
            });
        }
        let class = classes.entry(col.p_type_descriptor).or_default();
        class.name = name;
        if class.bases.is_empty() {
            class.bases = bases;
        }
        let slots = meta_slots
            .get(&col.addr)
            .map(Vec::as_slice)
            .unwrap_or_default();
        if let Some(base) = super::recover_vftable(img, rk, slots)
            && let Some(vt) = walk_vftable(img, rk, text, base)
            && !class.tables.iter().any(|t| t.vt.base == vt.base)
        {
            class.tables.push(Table {
                offset: i64::from(col.offset),
                vt,
            });
        }
    }
    classes
}

fn class_name(img: &ImageBytes, rk: &RefKind, td: u64) -> Option<String> {
    demangle_rtti_class_name(&TypeDescriptor::read(img, rk, td)?.mangled_name)
}

/// The classes whose subobject a vftable of `class` at `offset` serves, most
/// derived first: the class itself at 0, and every non-virtual base at that
/// displacement (the hierarchy lists a base before its own bases). Empty for
/// a vftable serving a virtual base.
fn served(td: u64, class: &Class, offset: i64) -> Vec<u64> {
    let mut out: Vec<u64> = Vec::new();
    if offset == 0 {
        out.push(td);
    }
    for b in &class.bases {
        if !b.virtual_ && b.mdisp == offset && !out.contains(&b.td) {
            out.push(b.td);
        }
    }
    out
}

/// `td`, then each of its bases at offset 0, nearest first.
fn primary_chain(td: u64, classes: &BTreeMap<u64, Class>) -> Vec<u64> {
    let mut chain = vec![td];
    if let Some(c) = classes.get(&td) {
        chain.extend(
            c.bases
                .iter()
                .filter(|b| !b.virtual_ && b.mdisp == 0)
                .map(|b| b.td),
        );
    }
    chain
}

pub(super) fn facts(
    classes: &BTreeMap<u64, Class>,
    names: &HashMap<u64, String>,
    ptr: u64,
) -> VtableFacts {
    let structs: BTreeMap<u64, String> = classes
        .iter()
        .map(|(&td, c)| (td, struct_name(&c.name)))
        .collect();
    let mut count: HashMap<&str, usize> = HashMap::new();
    for s in structs.values() {
        *count.entry(s.as_str()).or_default() += 1;
    }
    let unique = |td: &u64| {
        structs
            .get(td)
            .is_some_and(|s| !s.is_empty() && count.get(s.as_str()) == Some(&1))
    };

    let mut out = VtableFacts::default();
    let mut own: BTreeMap<u64, Vec<&[u64]>> = BTreeMap::new();
    let mut views: BTreeMap<u64, Vec<&[u64]>> = BTreeMap::new();
    let mut held: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
    let mut unheld: BTreeSet<u64> = BTreeSet::new();
    let mut tables: Vec<(u64, &Class, &Table)> = Vec::new();
    for (&td, c) in classes {
        for t in &c.tables {
            let slots = t.vt.slots.as_slice();
            let bytes = (slots.len() as u64).saturating_mul(ptr);
            out.slot_ranges
                .push((t.vt.base, t.vt.base.saturating_add(bytes.saturating_sub(1))));
            let serves = served(td, c, t.offset);
            let Some(&h) = serves.first() else {
                unheld.extend(slots.iter().copied());
                continue;
            };
            for &x in &serves {
                views.entry(x).or_default().push(slots);
            }
            if h == td {
                own.entry(h).or_default().push(slots);
            }
            for &f in slots {
                held.entry(f).or_default().insert(h);
            }
            tables.push((h, c, t));
        }
    }
    out.slot_ranges.sort_unstable();
    out.slot_ranges.dedup();

    let mut typed: BTreeSet<u64> = BTreeSet::new();
    for (&td, c) in classes {
        if !unique(&td) {
            continue;
        }
        let own_views = own.get(&td).map(Vec::as_slice).unwrap_or_default();
        let all_views = views.get(&td).map(Vec::as_slice).unwrap_or_default();
        let width = if own_views.is_empty() {
            all_views.iter().map(|s| s.len()).min().unwrap_or(0)
        } else {
            own_views.iter().map(|s| s.len()).max().unwrap_or(0)
        };
        if width == 0 {
            continue;
        }
        let mut used: BTreeSet<String> = BTreeSet::new();
        let mut slots = Vec::with_capacity(width);
        for i in 0..width {
            let mut targets: Vec<u64> = Vec::new();
            for v in own_views.iter().chain(all_views) {
                if let Some(&f) = v.get(i)
                    && !targets.contains(&f)
                {
                    targets.push(f);
                }
            }
            let name = targets
                .iter()
                .find_map(|f| names.get(f))
                .filter(|n| !used.contains(*n))
                .cloned()
                .unwrap_or_else(|| format!("vfn_{i}"));
            used.insert(name.clone());
            slots.push(VtableSlot { name, targets });
        }
        let mut bases: Vec<(String, i64)> = Vec::new();
        for b in &c.bases {
            if b.virtual_ || b.mdisp <= 0 || !unique(&b.td) {
                continue;
            }
            let name = structs[&b.td].clone();
            if !bases.iter().any(|(n, _)| *n == name) {
                bases.push((name, b.mdisp));
            }
        }
        bases.sort_by_key(|&(_, off)| off);
        out.classes.push(VtableClass {
            class: structs[&td].clone(),
            slots,
            bases,
            size: 0,
            msvc: true,
        });
        typed.insert(td);
    }

    for (h, c, t) in tables {
        if typed.contains(&h) {
            out.tables.push(VtableObject {
                addr: t.vt.base,
                label: format!("{}::vftable", c.name),
                class: structs[&h].clone(),
                slots: t.vt.slots.len(),
            });
        }
    }
    out.tables.sort_by_key(|t| t.addr);
    out.tables.dedup_by_key(|t| t.addr);

    for (f, holders) in &held {
        if unheld.contains(f) {
            continue;
        }
        let chains: Vec<Vec<u64>> = holders.iter().map(|&h| primary_chain(h, classes)).collect();
        let Some(first) = chains.first() else {
            continue;
        };
        if let Some(&c) = first
            .iter()
            .find(|&&c| typed.contains(&c) && chains.iter().all(|ch| ch.contains(&c)))
        {
            out.this_types.push((*f, structs[&c].clone()));
        }
    }
    out
}

/// The method name of every function symbol a slot can name, by address.
fn method_names(file: &object::File) -> HashMap<u64, String> {
    let mut out = HashMap::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text || sym.address() == 0 {
            continue;
        }
        let Ok(raw) = sym.name() else { continue };
        if let Some(name) = method_name(raw) {
            out.entry(sym.address()).or_insert(name);
        }
    }
    out
}

/// `?area@Square@@UEBAHH@Z` → `area`; `??1Square@@UEAA@XZ` is `dtor`, a
/// scalar (`??_G`) or vector (`??_E`) deleting destructor `deleting_dtor`.
/// An adjustor thunk (`?label@Tagged@@WBA@EBAPEBDXZ`) names its method too.
fn method_name(raw: &str) -> Option<String> {
    let rest = raw.strip_prefix('?')?;
    if let Some(special) = rest.strip_prefix('?') {
        return if special.starts_with('1') {
            Some("dtor".to_string())
        } else if special.starts_with("_G") || special.starts_with("_E") {
            Some("deleting_dtor".to_string())
        } else {
            None
        };
    }
    let name = &rest[..rest.find('@')?];
    is_identifier(name).then(|| name.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn table(offset: i64, base: u64, slots: &[u64]) -> Table {
        Table {
            offset,
            vt: VfTable {
                base,
                slots: slots.to_vec(),
            },
        }
    }

    fn base(td: u64, mdisp: i64) -> Base {
        Base {
            td,
            mdisp,
            virtual_: false,
        }
    }

    /// The fixture's hierarchy (`msvc_classes.cpp`): Shape (never instantiated),
    /// Square and Circle over it, Named (never instantiated), and Tagged over
    /// Square at 0 and Named at 0x18.
    fn hierarchy() -> BTreeMap<u64, Class> {
        const SHAPE: u64 = 0x10;
        const SQUARE: u64 = 0x20;
        const CIRCLE: u64 = 0x30;
        const NAMED: u64 = 0x40;
        const TAGGED: u64 = 0x50;
        let class = |name: &str, bases: Vec<Base>, tables: Vec<Table>| Class {
            name: name.to_string(),
            bases,
            tables,
        };
        BTreeMap::from([
            (SHAPE, class("Shape", vec![], vec![])),
            (
                SQUARE,
                class(
                    "Square",
                    vec![base(SHAPE, 0)],
                    vec![table(0, 0x2018, &[0x1110, 0x1120])],
                ),
            ),
            (
                CIRCLE,
                class(
                    "geo::Circle",
                    vec![base(SHAPE, 0)],
                    vec![table(0, 0x21f8, &[0x1160, 0x1130])],
                ),
            ),
            (NAMED, class("Named", vec![], vec![])),
            (
                TAGGED,
                class(
                    "Tagged",
                    vec![base(SQUARE, 0), base(SHAPE, 0), base(NAMED, 0x18)],
                    vec![
                        table(0, 0x20d8, &[0x1110, 0x1140]),
                        table(0x18, 0x20f0, &[0x1150]),
                    ],
                ),
            ),
        ])
    }

    #[test]
    fn classes_take_their_slots_and_every_override() {
        let names = HashMap::from([(0x1110, "area".to_string())]);
        let facts = facts(&hierarchy(), &names, 8);
        let class = |n: &str| facts.classes.iter().find(|c| c.class == n).unwrap();

        let shape = class("Shape");
        assert_eq!(shape.slots.len(), 2);
        assert_eq!(shape.slots[0].name, "area");
        assert_eq!(shape.slots[0].targets, vec![0x1110, 0x1160]);
        assert_eq!(shape.slots[1].name, "vfn_1");
        assert_eq!(shape.slots[1].targets, vec![0x1120, 0x1130, 0x1140]);
        assert!(shape.msvc);

        let square = class("Square");
        assert_eq!(square.slots[1].targets, vec![0x1120, 0x1140]);
        assert_eq!(class("Circle").slots[0].targets, vec![0x1160]);
        assert_eq!(class("Named").slots[0].targets, vec![0x1150]);
        assert_eq!(class("Tagged").bases, vec![("Named".to_string(), 0x18)]);
    }

    #[test]
    fn this_is_the_subobject_the_vftable_serves() {
        let facts = facts(&hierarchy(), &HashMap::new(), 8);
        let this = |f: u64| {
            facts
                .this_types
                .iter()
                .find(|(g, _)| *g == f)
                .map(|(_, c)| c.as_str())
        };
        assert_eq!(
            this(0x1110),
            Some("Square"),
            "Square's own and inherited by Tagged"
        );
        assert_eq!(this(0x1140), Some("Tagged"));
        assert_eq!(this(0x1130), Some("Circle"));
        assert_eq!(
            this(0x1150),
            Some("Named"),
            "Tagged's override in Named's vftable"
        );
    }

    #[test]
    fn code_two_classes_share_takes_their_common_base() {
        let mut classes = hierarchy();
        classes.get_mut(&0x30).unwrap().tables[0].vt.slots[1] = 0x1120;
        let facts = facts(&classes, &HashMap::new(), 8);
        assert!(facts.this_types.contains(&(0x1120, "Shape".to_string())));
    }

    #[test]
    fn folded_code_in_unrelated_classes_types_no_this() {
        let mut classes = hierarchy();
        classes.get_mut(&0x30).unwrap().tables[0].vt.slots[1] = 0x1150;
        let facts = facts(&classes, &HashMap::new(), 8);
        assert!(!facts.this_types.iter().any(|(f, _)| *f == 0x1150));
    }

    #[test]
    fn a_virtual_base_vftable_types_none_of_its_functions() {
        let mut classes = hierarchy();
        classes
            .get_mut(&0x30)
            .unwrap()
            .tables
            .push(table(0x40, 0x2300, &[0x1170, 0x1160]));
        let facts = facts(&classes, &HashMap::new(), 8);
        assert!(
            !facts
                .this_types
                .iter()
                .any(|(f, _)| *f == 0x1170 || *f == 0x1160)
        );
        assert!(facts.slot_ranges.contains(&(0x2300, 0x230f)));
    }

    #[test]
    fn every_typed_vftable_is_listed_under_its_rtti_label() {
        let facts = facts(&hierarchy(), &HashMap::new(), 8);
        let t = |a: u64| facts.tables.iter().find(|t| t.addr == a).unwrap();
        assert_eq!(t(0x2018).class, "Square");
        assert_eq!(t(0x21f8).label, "geo::Circle::vftable");
        assert_eq!(t(0x21f8).class, "Circle");
        assert_eq!(t(0x20f0).class, "Named");
        assert_eq!(t(0x20f0).label, "Tagged::vftable");
        assert_eq!(t(0x20f0).slots, 1);
    }

    #[test]
    fn method_names_come_from_the_msvc_mangling() {
        assert_eq!(
            method_name("?area@Square@@UEBAHH@Z").as_deref(),
            Some("area")
        );
        assert_eq!(method_name("??1Square@@UEAA@XZ").as_deref(), Some("dtor"));
        assert_eq!(
            method_name("??_GSquare@@UEAAPEAXI@Z").as_deref(),
            Some("deleting_dtor")
        );
        assert_eq!(
            method_name("??_ESquare@@UEAAPEAXI@Z").as_deref(),
            Some("deleting_dtor")
        );
        assert_eq!(method_name("??0Square@@QEAA@XZ"), None);
        assert_eq!(method_name("main"), None);
    }
}
