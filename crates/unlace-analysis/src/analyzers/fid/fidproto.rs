//! (unlace `fid`) The prototype of a `.fid` record, at build and at match.
//!
//! At build, [`describe`] gives each record the prototype the object's own
//! committed analysis parked on its function (its DWARF signature), as the C
//! text a record stores ([`unlace_decomp::fidproto`]). At match, [`pick`]
//! chooses the prototype of a bucket whose records all carry one name: the
//! record the specific hash and code-unit count single out, else the one
//! prototype every describing record agrees on.
//!
//! The types of every match land in one program, so a record type two objects
//! define differently would lay out one object's functions with the other's
//! members; [`drop_disputed`] leaves such a type opaque in every record.

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_decomp::architecture::Architecture;

use super::db::FidRecord;
use super::hash::FidHashQuad;
use crate::loadimage_object::ObjectLoadImage;

/// Give each of `records` the prototype parked on the function symbol of its
/// name; a name several of `image`'s functions share takes none. Returns how
/// many records were described.
pub fn describe(arch: &Architecture, image: &ObjectLoadImage, records: &mut [FidRecord]) -> usize {
    let Some(space) = arch.manage().get_default_code_space() else {
        return 0;
    };
    let arm32 = arch.archid.starts_with("ARM:") && arch.archid.contains(":32:");
    let mut entries: BTreeMap<String, Option<u64>> = BTreeMap::new();
    for (addr, name) in image.func_symbols() {
        let addr = if arm32 { addr & !1 } else { addr };
        entries
            .entry(name)
            .and_modify(|seen| *seen = seen.filter(|a| *a == addr))
            .or_insert(Some(addr));
    }
    let mut described = 0;
    for record in records {
        let Some(Some(entry)) = entries.get(&record.name) else {
            continue;
        };
        let addr = Address::new(Rc::clone(space), *entry);
        let declaration = arch
            .symboltab
            .function_proto_pieces_across_scopes(&addr)
            .and_then(unlace_decomp::fidproto::declaration);
        if let Some(declaration) = declaration {
            record.prototype = Some(declaration.prototype);
            record.typedefs = declaration.typedefs.into();
            described += 1;
        }
    }
    described
}

/// Leave every record type that `records` define in more than one way as its
/// forward declaration alone. Returns the names left opaque.
pub fn drop_disputed(records: &mut [FidRecord]) -> Vec<String> {
    let mut definitions: BTreeMap<&str, BTreeSet<&str>> = BTreeMap::new();
    for text in records.iter().flat_map(|r| r.typedefs.iter()) {
        if let Some(name) = defined_record(text) {
            definitions.entry(name).or_default().insert(text);
        }
    }
    let disputed: BTreeSet<String> = definitions
        .into_iter()
        .filter(|(_, texts)| texts.len() > 1)
        .map(|(name, _)| name.to_string())
        .collect();
    for record in records.iter_mut() {
        if record
            .typedefs
            .iter()
            .any(|text| defined_record(text).is_some_and(|name| disputed.contains(name)))
        {
            record.typedefs = record
                .typedefs
                .iter()
                .filter(|text| defined_record(text).is_none_or(|name| !disputed.contains(name)))
                .cloned()
                .collect();
        }
    }
    disputed.into_iter().collect()
}

/// The tag a stored `struct N { … };`, `union N { … };` or
/// `typedef enum N [: T] { … } N;` defines.
fn defined_record(text: &str) -> Option<&str> {
    if let Some(rest) = text.strip_prefix("typedef enum ") {
        let (name, body) = rest.split_once(' ')?;
        return (body.starts_with('{') || body.starts_with(": ")).then_some(name);
    }
    let rest = text
        .strip_prefix("struct ")
        .or_else(|| text.strip_prefix("union "))?;
    let (name, body) = rest.split_once(' ')?;
    body.starts_with('{').then_some(name)
}

/// The record whose prototype a match on `records` applies.
pub(super) fn pick<'a>(records: &'a [FidRecord], query: &FidHashQuad) -> Option<&'a FidRecord> {
    let mut described = records.iter().filter(|r| r.prototype.is_some());
    let first = described.next()?;
    let exact = |r: &&FidRecord| {
        r.specific_hash == query.specific_hash && r.code_unit_size == query.code_unit_size
    };
    if let Some(record) = std::iter::once(first).chain(described.clone()).find(exact) {
        return Some(record);
    }
    described
        .all(|r| r.prototype == first.prototype && r.typedefs == first.typedefs)
        .then_some(first)
}

#[cfg(test)]
mod tests;
