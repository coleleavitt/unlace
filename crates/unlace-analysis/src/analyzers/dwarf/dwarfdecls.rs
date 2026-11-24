//! (unlace `dwarfdecls`) Prototypes for imported functions from their DWARF
//! declarations.
//!
//! A unit that calls a function another module defines carries a declaration-only
//! `DW_TAG_subprogram` (`DW_AT_declaration`, no `DW_AT_low_pc`) with the return
//! and parameter types the compiler saw. The definition arm of the DWARF pass skips
//! them. This module keeps those whose name is an ELF import the file does not
//! define, agree across every unit that declares them, and builds them with the
//! same type mapper, and binds each to the import's PLT entries. The commit applies
//! them ahead of every other address-keyed prototype, so a library signature or a
//! DWARF definition still wins; what they add is the import no signature pass
//! knows, whose calls then type their arguments: `gnutls_bye(session,1)` reads
//! `gnutls_bye(session,GNUTLS_SHUT_WR)` (Hex-Rays AUTOCONV_TO_ENUM on a prototype
//! the debug info supplies).

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use unlace_base::types::uint4;
use unlace_decomp::dtype::{Datatype, TypeFactory};
use unlace_decomp::fspec::PrototypePieces;

use super::{DieSnap, build_pieces};

/// Most distinct declared names kept per file.
const MAX_DECLS: usize = 65_536;

/// The declarations and definitions seen so far, across units.
#[derive(Default)]
pub(super) struct Decls {
    defined: BTreeSet<String>,
    declared: BTreeMap<String, Option<PrototypePieces>>,
}

fn key(sub: &DieSnap) -> Option<&str> {
    if !sub.linkage_name.is_empty() {
        Some(&sub.linkage_name)
    } else if !sub.name.is_empty() {
        Some(&sub.name)
    } else {
        None
    }
}

fn same_type(a: Option<&Rc<Datatype>>, b: Option<&Rc<Datatype>>) -> bool {
    match (a, b) {
        (None, None) => true,
        (Some(a), Some(b)) => a.get_size() == b.get_size() && a.get_name() == b.get_name(),
        _ => false,
    }
}

fn same(a: &PrototypePieces, b: &PrototypePieces) -> bool {
    a.first_var_arg_slot == b.first_var_arg_slot
        && a.intypes.len() == b.intypes.len()
        && same_type(a.outtype.as_ref(), b.outtype.as_ref())
        && a.intypes
            .iter()
            .zip(&b.intypes)
            .all(|(x, y)| same_type(Some(x), Some(y)))
}

impl Decls {
    /// Record one subprogram DIE: a definition's name, or a declaration of an import.
    pub(super) fn note(
        &mut self,
        sub: &DieSnap,
        dies: &BTreeMap<usize, DieSnap>,
        types: &dyn TypeFactory,
        word_size: uint4,
        imports: &BTreeMap<String, Vec<u64>>,
    ) {
        let Some(name) = key(sub) else {
            return;
        };
        if sub.low_pc.is_some() && !sub.declaration {
            if self.defined.len() < MAX_DECLS {
                self.defined.insert(name.to_owned());
                if !sub.name.is_empty() {
                    self.defined.insert(sub.name.clone());
                }
            }
            return;
        }
        if !sub.declaration
            || sub.low_pc.is_some()
            || sub.external == Some(false)
            || !imports.contains_key(name)
        {
            return;
        }
        if !sub.prototyped && sub.linkage_name.is_empty() {
            return;
        }
        let pieces = build_pieces(name, sub, dies, types, word_size);
        if let Some(slot) = self.declared.get_mut(name) {
            let agrees =
                matches!((slot.as_ref(), pieces.as_ref()), (Some(a), Some(b)) if same(a, b));
            if !agrees {
                *slot = None;
            }
            return;
        }
        if self.declared.len() < MAX_DECLS {
            self.declared.insert(name.to_owned(), pieces);
        }
    }

    /// Each agreed declaration of an import the file does not define, at every PLT
    /// entry of that import.
    pub(super) fn finish(
        self,
        imports: &BTreeMap<String, Vec<u64>>,
        out: &mut Vec<(u64, PrototypePieces)>,
    ) {
        let Decls { defined, declared } = self;
        for (name, pieces) in declared {
            let Some(pieces) = pieces else {
                continue;
            };
            if defined.contains(&name) {
                continue;
            }
            let Some(addresses) = imports.get(&name) else {
                continue;
            };
            for &address in addresses {
                out.push((address, pieces.clone()));
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn decl(name: &str) -> DieSnap {
        let mut sub = DieSnap::new(gimli::DW_TAG_subprogram, 1);
        sub.name = name.into();
        sub.declaration = true;
        sub.prototyped = true;
        sub.external = Some(true);
        sub
    }

    #[test]
    fn only_a_prototyped_declaration_of_an_undefined_import_is_kept() {
        let types = unlace_decomp::dtype::TypeFactoryImpl::new();
        types.set_default_alignment_map();
        types.set_max_basetype_size(8);
        types.setup_sizes(Some(8), 8, 4);
        types.cache_core_types().unwrap();
        let imports = BTreeMap::from([
            ("paint".to_owned(), vec![0x1030]),
            ("defined".to_owned(), vec![0x1040]),
            ("knr".to_owned(), vec![0x1050]),
        ]);
        let dies = BTreeMap::new();
        let mut decls = Decls::default();
        decls.note(&decl("paint"), &dies, &types, 8, &imports);
        decls.note(&decl("local"), &dies, &types, 8, &imports);
        decls.note(&decl("defined"), &dies, &types, 8, &imports);
        let mut definition = decl("defined");
        definition.declaration = false;
        definition.low_pc = Some(0x2000);
        decls.note(&definition, &dies, &types, 8, &imports);
        let mut knr = decl("knr");
        knr.prototyped = false;
        decls.note(&knr, &dies, &types, 8, &imports);
        let mut out = Vec::new();
        decls.finish(&imports, &mut out);
        assert_eq!(out.len(), 1);
        assert_eq!(out[0].0, 0x1030);
        assert_eq!(out[0].1.name, "paint");
    }
}
