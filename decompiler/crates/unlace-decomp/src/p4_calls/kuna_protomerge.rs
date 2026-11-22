//! (kuna `protomerge`) Merge two declared prototypes of one function slot by
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

use crate::dtype::{type_metatype, Datatype};
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
        && old.intypes.iter().zip(&new.intypes).all(|(a, b)| a.get_size() == b.get_size())
        && old.input_storage.is_empty()
        && new.input_storage.is_empty();
    if !same_shape {
        return new;
    }
    let intypes = old.intypes.iter().zip(&new.intypes).map(|(a, b)| better(a, b)).collect();
    let innames = new
        .innames
        .iter()
        .enumerate()
        .map(|(i, n)| if n.is_empty() { old.innames.get(i).cloned().unwrap_or_default() } else { n.clone() })
        .collect();
    let outtype = match (&old.outtype, &new.outtype) {
        (Some(a), Some(b)) => Some(better(a, b)),
        (Some(a), None) if new.output_storage.is_none() => Some(Rc::clone(a)),
        (_, b) => b.clone(),
    };
    PrototypePieces { intypes, innames, outtype, ..new }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn dt(size: i32, meta: type_metatype) -> Rc<Datatype> {
        Rc::new(Datatype::new(size, meta))
    }

    fn pieces(intypes: Vec<Rc<Datatype>>, innames: &[&str]) -> PrototypePieces {
        PrototypePieces {
            name: "f".into(),
            outtype: None,
            intypes,
            innames: innames.iter().map(|s| s.to_string()).collect(),
            first_var_arg_slot: -1,
            output_storage: None,
            input_storage: Vec::new(),
            kuna_library_names: None,
        }
    }

    #[test]
    fn keeps_the_more_specific_slot_and_fills_names() {
        let old = pieces(vec![dt(8, type_metatype::TYPE_FLOAT), dt(4, type_metatype::TYPE_INT)], &["x", "n"]);
        let new = pieces(vec![dt(8, type_metatype::TYPE_UINT), dt(4, type_metatype::TYPE_UNKNOWN)], &["", "count"]);
        // a later pointer is kept over an earlier one of another kind
        let p_old = pieces(vec![dt(8, type_metatype::TYPE_STRUCT)], &[""]);
        let p_new = pieces(vec![dt(8, type_metatype::TYPE_PTR)], &[""]);
        assert_eq!(merge(&p_old, p_new).intypes[0].get_metatype(), type_metatype::TYPE_PTR);
        let m = merge(&old, new);
        assert_eq!(m.intypes[0].get_metatype(), type_metatype::TYPE_FLOAT);
        assert_eq!(m.intypes[1].get_metatype(), type_metatype::TYPE_INT);
        assert_eq!(m.innames, vec!["x", "count"]);
    }

    #[test]
    fn a_different_shape_replaces() {
        let old = pieces(vec![dt(8, type_metatype::TYPE_FLOAT)], &["x"]);
        let new = pieces(vec![dt(4, type_metatype::TYPE_INT)], &[""]);
        let m = merge(&old, new);
        assert_eq!(m.intypes[0].get_metatype(), type_metatype::TYPE_INT);
        assert_eq!(m.innames, vec![""]);
    }
}
