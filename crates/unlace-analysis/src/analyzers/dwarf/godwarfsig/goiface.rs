//! (kuna `goitabcalls`) A Go interface formal keeps its two ABI words, the
//! table word typed by the interface's itab record.
//!
//! Go DWARF describes an interface type as a typedef chain named after the
//! interface (`main.Shape`, one link carrying `DW_AT_go_kind` 20) over the
//! `runtime.iface` storage struct `{tab *runtime.itab; data unsafe.Pointer}`,
//! and the register ABI passes it as that pair, `tab` first. The interface's
//! name keys the `go.itab.<interface>` record the `gotypes` harvest interned
//! from the runtime type data, so the table word becomes a pointer to it and a
//! call through one of its method slots prints by name.

use unlace_decomp::goitabcalls::{GoItabCalls, itab_record_name};

use super::*;

impl Facts {
    /// The interface a formal's type names: a nominal interface typedef chain
    /// (one link of interface kind, every link the same name, an optional
    /// `runtime.iface` alias after it) over the `runtime.iface` storage with
    /// its `tab` and `data` words. `None` for any other type.
    pub(super) fn interface_input(&self, mut offset: usize) -> Option<String> {
        let mut visited = BTreeSet::new();
        let mut name: Option<&str> = None;
        let mut interface_kind = false;
        for _ in 0..16 {
            if !visited.insert(offset) {
                return None;
            }
            let (die, extra) = self.checked_type(offset, 16)?;
            if die.tag != gimli::DW_TAG_typedef {
                if !interface_kind
                    || die.tag != gimli::DW_TAG_structure_type
                    || die.name != "runtime.iface"
                    || !matches!(extra.kind, None | Some(25))
                    || die.byte_size != Some(16)
                    || die.type_ref.is_some()
                    || die.children.len() != 2
                {
                    return None;
                }
                let mut members = die.children.iter();
                self.error_table(self.interface_member(*members.next()?, "tab", 0)?)?;
                self.error_data(self.interface_member(*members.next()?, "data", 8)?)?;
                return name.map(str::to_string);
            }
            if !die.children.is_empty() || die.name.is_empty() {
                return None;
            }
            match name {
                None => name = Some(die.name.as_str()),
                Some(held) if held == die.name => {}
                Some(_) if interface_kind && die.name == "runtime.iface" => {}
                Some(_) => return None,
            }
            match extra.kind {
                Some(20) if die.name != "runtime.iface" => interface_kind = true,
                None => {}
                Some(25) if interface_kind && die.name == "runtime.iface" => {}
                Some(_) => return None,
            }
            offset = die.type_ref?;
        }
        None
    }
}

/// The two input types of an interface formal under `goitabcalls`: a pointer
/// to the interface's itab record (`go.itab.<interface>`, interned by the
/// `gotypes` harvest with its `GoItab` facet) and an opaque data pointer.
/// `None` with the option off or when the image holds no such record.
pub(super) fn input_types(arch: &Architecture, interface: &str) -> Option<[Rc<Datatype>; 2]> {
    if !arch.kuna_options.get::<GoItabCalls>().0 {
        return None;
    }
    let types = arch.types();
    let name = itab_record_name(interface);
    let record = types.find_by_name(&name).ok()??;
    let facet = LangFacet::GoItab {
        interface: interface.to_string(),
    };
    if record.get_metatype() != type_metatype::TYPE_STRUCT
        || record.get_size() == 0
        || types.kuna_lang_facet(&name) != Some(facet)
    {
        return None;
    }
    let table = types.get_type_pointer(8, record, 1).ok()?;
    let data = types
        .get_type_pointer(8, types.get_type_void().ok()?, 1)
        .ok()?;
    Some([table, data])
}

#[cfg(test)]
mod tests {
    use super::*;

    /// `main.Shape` -> `main.Shape` (kind 20) -> `runtime.iface` {tab, data},
    /// the chain Go's linker writes for an interface formal.
    fn graph() -> Facts {
        let mut facts = Facts::default();
        for (offset, tag, name, size, kind, target) in [
            (1, gimli::DW_TAG_typedef, "main.Shape", None, None, Some(2)),
            (
                2,
                gimli::DW_TAG_typedef,
                "main.Shape",
                None,
                Some(20),
                Some(3),
            ),
            (
                3,
                gimli::DW_TAG_structure_type,
                "runtime.iface",
                Some(16),
                Some(25),
                None,
            ),
            (4, gimli::DW_TAG_member, "tab", None, None, Some(6)),
            (5, gimli::DW_TAG_member, "data", None, None, Some(9)),
            (
                6,
                gimli::DW_TAG_pointer_type,
                "*runtime.itab",
                None,
                Some(22),
                Some(7),
            ),
            (
                7,
                gimli::DW_TAG_typedef,
                "runtime.itab",
                None,
                None,
                Some(8),
            ),
            (
                8,
                gimli::DW_TAG_structure_type,
                "runtime.itab",
                Some(32),
                Some(25),
                None,
            ),
            (
                9,
                gimli::DW_TAG_pointer_type,
                "unsafe.Pointer",
                None,
                None,
                None,
            ),
        ] {
            let mut die = DieSnap::new(tag, 1);
            die.name = name.into();
            die.byte_size = size;
            die.type_ref = target;
            facts.dies.insert(offset, die);
            facts.extras.insert(
                offset,
                Extra {
                    kind,
                    ..Extra::default()
                },
            );
        }
        facts.dies.get_mut(&3).unwrap().children = vec![4, 5];
        facts.dies.get_mut(&4).unwrap().data_member_location = Some(0);
        facts.dies.get_mut(&5).unwrap().data_member_location = Some(8);
        facts
    }

    #[test]
    fn a_nominal_interface_names_itself() {
        assert_eq!(graph().interface_input(1).as_deref(), Some("main.Shape"));
        assert_eq!(graph().interface_input(2).as_deref(), Some("main.Shape"));
    }

    #[test]
    fn storage_alone_or_a_changed_chain_is_refused() {
        assert_eq!(graph().interface_input(3), None, "no interface-kind link");
        for change in 0..6 {
            let mut facts = graph();
            match change {
                0 => facts.extras.get_mut(&2).unwrap().kind = Some(25),
                1 => facts.dies.get_mut(&2).unwrap().name = "main.Other".into(),
                2 => facts.dies.get_mut(&3).unwrap().name = "runtime.eface".into(),
                3 => facts.dies.get_mut(&3).unwrap().children.reverse(),
                4 => facts.dies.get_mut(&9).unwrap().name = "*void".into(),
                _ => facts.dies.get_mut(&2).unwrap().type_ref = Some(1),
            }
            assert_eq!(facts.interface_input(1), None, "mutation {change}");
        }
    }
}
