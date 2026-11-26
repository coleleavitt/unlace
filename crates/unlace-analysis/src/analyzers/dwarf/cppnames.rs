//! Keep address-proven namespace names from acquiring a redundant global alias.

use std::collections::BTreeMap;

use unlace_decomp::namespaces::plain_scope;

use crate::pass::{SymFact, SymKind};

/// Fold enabled C++ DWARF symbols into the generic stream. Only a unique
/// qualified function name can replace its exact unqualified leaf at that address.
pub fn merge_symbols(symbols: &mut Vec<SymFact>, cpp: Vec<SymFact>) {
    if cpp.is_empty() {
        return;
    }
    let mut names: BTreeMap<u64, Option<&str>> = BTreeMap::new();
    for fact in cpp.iter().filter(|fact| fact.kind == SymKind::Function) {
        names
            .entry(fact.addr)
            .and_modify(|name| {
                if *name != Some(fact.name.as_str()) {
                    *name = None;
                }
            })
            .or_insert(Some(&fact.name));
    }
    for fact in symbols
        .iter()
        .filter(|fact| fact.kind == SymKind::Function && fact.name.contains("::"))
    {
        if let Some(name) = names.get_mut(&fact.addr) {
            if *name != Some(fact.name.as_str()) {
                *name = None;
            }
        }
    }
    symbols.retain(|fact| {
        if fact.kind != SymKind::Function || fact.name.contains("::") {
            return true;
        }
        let Some(Some(name)) = names.get(&fact.addr) else {
            return true;
        };
        let Some((_, leaf)) = name.rsplit_once("::") else {
            return true;
        };
        let valid = name.split("::").all(plain_scope);
        !valid || leaf != fact.name
    });
    symbols.extend(cpp);
}

#[cfg(test)]
mod tests;
