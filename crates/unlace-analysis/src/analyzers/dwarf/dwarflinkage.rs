//! Bind a defined DWARF function's exact ELF linkage name to its PLT entries.
use object::{Object, ObjectSymbol};
use std::collections::{BTreeMap, BTreeSet};

use super::DieSnap;
use crate::pass::AnalysisCtx;
use unlace_decomp::fspec::PrototypePieces;

/// PLT entry addresses by imported name, minus names the file defines as
/// `STT_GNU_IFUNC`: such a definition's DWARF describes the resolver, not the
/// function its PLT entry dispatches to.
pub(super) fn imports(ctx: &AnalysisCtx<'_>) -> BTreeMap<String, Vec<u64>> {
    let mut result = BTreeMap::<String, Vec<u64>>::new();
    if ctx.file.format() != object::BinaryFormat::Elf {
        return result;
    }
    for import in crate::loader::format::resolve_imports(ctx.file, ctx.bytes) {
        if import.kind != crate::loader::format::ImportSymKind::Import {
            continue;
        }
        if let Ok(name) = String::from_utf8(import.name) {
            result.entry(name).or_default().push(import.addr);
        }
    }
    if result.is_empty() {
        return result;
    }
    for symbol in ctx.file.symbols().chain(ctx.file.dynamic_symbols()) {
        let object::SymbolFlags::Elf { st_info, .. } = symbol.flags() else {
            continue;
        };
        if !symbol.is_undefined() && st_info & 0xf == object::elf::STT_GNU_IFUNC {
            if let Ok(name) = symbol.name() {
                result.remove(name);
            }
        }
    }
    result
}

pub(super) fn definitions(
    ctx: &AnalysisCtx<'_>,
    imports: &BTreeMap<String, Vec<u64>>,
) -> BTreeSet<(u64, String)> {
    if imports.is_empty() {
        return BTreeSet::new();
    }
    ctx.file
        .symbols()
        .chain(ctx.file.dynamic_symbols())
        .filter(|symbol| {
            symbol.is_definition()
                && symbol.is_global()
                && symbol.kind() == object::SymbolKind::Text
        })
        .filter_map(|symbol| {
            let name = symbol.name().ok()?;
            imports
                .contains_key(name)
                .then(|| (symbol.address(), name.to_owned()))
        })
        .collect()
}

fn linkage<'a>(sub: &'a DieSnap, dies: &'a BTreeMap<usize, DieSnap>) -> Option<&'a str> {
    if !sub.linkage_name.is_empty() {
        return Some(&sub.linkage_name);
    }
    if !sub.origin_is_spec {
        return None;
    }
    let declaration = dies.get(&sub.origin_ref?)?;
    (!declaration.linkage_name.is_empty()).then_some(declaration.linkage_name.as_str())
}

pub(super) fn append(
    sub: &DieSnap,
    dies: &BTreeMap<usize, DieSnap>,
    pieces: &PrototypePieces,
    imports: &BTreeMap<String, Vec<u64>>,
    definitions: &BTreeSet<(u64, String)>,
    out: &mut Vec<(u64, PrototypePieces)>,
) {
    let external = sub.external.or_else(|| {
        sub.origin_is_spec
            .then(|| dies.get(&sub.origin_ref?))
            .flatten()
            .and_then(|declaration| declaration.external)
    });
    if sub.low_pc.is_none() || sub.declaration || external != Some(true) {
        return;
    }
    let Some(name) = linkage(sub, dies).or_else(|| {
        (imports.contains_key(&sub.name) && definitions.contains(&(sub.low_pc?, sub.name.clone())))
            .then_some(sub.name.as_str())
    }) else {
        return;
    };
    let Some(addresses) = imports.get(name) else {
        return;
    };
    for &address in addresses {
        let mut alias = pieces.clone();
        alias.name = name.to_owned();
        out.push((address, alias));
    }
}

#[cfg(test)]
mod tests;
