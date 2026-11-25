//! Function attribution, display names and address records for inventory queries.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_analysis::listing::xrefs::XrefIndex;
use unlace_base::address::Address;
use unlace_console::engine::ConsoleProgram;

use crate::jsonfmt::Json;

/// Prefer the reference walk's attribution, then the engine's inventory.
pub(crate) fn owning_function(prog: &ConsoleProgram, index: &XrefIndex, vma: u64) -> Option<u64> {
    index
        .function_containing(vma)
        .or_else(|| prog.find_entry_at(vma).map(|e| e.addr.get_offset()))
}

pub(crate) fn function_name(
    prog: &ConsoleProgram,
    inventory: &BTreeMap<u64, String>,
    entry: u64,
) -> String {
    inventory
        .get(&entry)
        .cloned()
        .or_else(|| prog.find_entry_at(entry).map(|e| e.name))
        .or_else(|| prog.function_named_at(entry))
        .unwrap_or_else(|| default_function_name(prog, entry))
}

pub(crate) fn default_function_name(prog: &ConsoleProgram, entry: u64) -> String {
    match prog.arch().manage().get_default_code_space() {
        Some(space) => prog
            .arch()
            .name_function(&Address::new(Rc::clone(space), entry)),
        None => format!("sub_{entry:x}"),
    }
}

pub(crate) fn function_json(name: &str, addr: u64) -> Json {
    Json::Object(vec![
        ("name".into(), Json::Str(name.to_string())),
        ("address".into(), Json::Number(addr.to_string())),
        ("address_hex".into(), Json::Str(format!("0x{addr:x}"))),
    ])
}

#[cfg(test)]
mod tests;
