//! (unlace `protomerge`) Merge two declared prototypes of one function slot by
//! slot instead of letting the later source replace the earlier one wholesale.
//!
//! Several load-time sources park a prototype on the same function: the libc
//! tables, the named-aggregate `libctypes` tables, the demangled C++ signature,
//! DWARF, a FID or FLIRT rename. Each parks the whole thing, so the last one
//! wins even where the earlier one knew more about a parameter (`FILE *` over
//! `void *`, a named struct pointer over `unsigned long`). IDA merges the
//! name-derived and the recovered prototype argument by argument with
//! `score_tinfo` (0x679920); this is that merge for two declared prototypes.
//! Two prototypes of different shape (arity, variadic slot, or a slot of a
//! different size) are not merged: the later one replaces the earlier as before.

use std::rc::Rc;

use crate::dtype::{Datatype, type_metatype};
use crate::fspec::PrototypePieces;

/// How much a type says about a value, higher is more: an undefined says
/// nothing, a plain integer little, anything else (a pointer, a float, a bool,
/// an aggregate or enum) enough that a later source keeps its own reading.
/// Pointers are not ranked against each other: a later `void *` from DWARF is
/// what the source declared even when a table spelled `unsigned char *`.
pub fn type_score(dt: &Datatype) -> i32 {
    use type_metatype::*;
    match dt.get_metatype() {
        TYPE_UNKNOWN | TYPE_VOID => 0,
        TYPE_INT | TYPE_UINT => 1,
        _ => 2,
    }
}

fn better(old: &Rc<Datatype>, new: &Rc<Datatype>) -> Rc<Datatype> {
    if old.get_size() == new.get_size() && type_score(old) > type_score(new) {
        Rc::clone(old)
    } else {
        Rc::clone(new)
    }
}

/// `new` with every slot `old` describes better taken from `old`, or `new`
/// unchanged when the two do not have the same shape.
pub fn merge(old: &PrototypePieces, new: PrototypePieces) -> PrototypePieces {
    let same_shape = old.intypes.len() == new.intypes.len()
        && old.first_var_arg_slot == new.first_var_arg_slot
        && old
            .intypes
            .iter()
            .zip(&new.intypes)
            .all(|(a, b)| a.get_size() == b.get_size())
        && old.input_storage.is_empty()
        && new.input_storage.is_empty();
    if !same_shape {
        return new;
    }
    let intypes = old
        .intypes
        .iter()
        .zip(&new.intypes)
        .map(|(a, b)| better(a, b))
        .collect();
    let innames = new
        .innames
        .iter()
        .enumerate()
        .map(|(i, n)| {
            if n.is_empty() {
                old.innames.get(i).cloned().unwrap_or_default()
            } else {
                n.clone()
            }
        })
        .collect();
    let outtype = match (&old.outtype, &new.outtype) {
        (Some(a), Some(b)) => Some(better(a, b)),
        (Some(a), None) if new.output_storage.is_none() => Some(Rc::clone(a)),
        (_, b) => b.clone(),
    };
    PrototypePieces {
        intypes,
        innames,
        outtype,
        ..new
    }
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.protomerge_merge = Some(merge);
}

#[cfg(test)]
mod tests;
