//! (unlace `goitabcalls`) A Go interface formal keeps its two ABI words, the
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
    if !arch.unlace_options.get::<GoItabCalls>().0 {
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
        || types.unlace_lang_facet(&name) != Some(facet)
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
mod tests;
