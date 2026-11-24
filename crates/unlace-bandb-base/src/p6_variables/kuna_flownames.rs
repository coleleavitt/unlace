//! (kuna `flownames`) Name locals from the fields and types they meet.
//!
//! Two kinds of evidence for a numbered local that are read from the code
//! rather than from a library table, added to the [`crate::kuna_libcnames`]
//! walk:
//!
//! 1. a named structure field the value is loaded from or stored to, through a
//!    typed pointer (`len = p->len`, `p->len = len`), or copied out of or into
//!    a member of a stack structure (`size = st.st_size`), counted only when
//!    every field the local meets has the same name;
//! 2. the local's own type: a `char` pointer is `str`, a wide-character
//!    pointer `wstr`, and a pointer to a named structure `p_<name>`
//!    (`p_passwd`).
//!
//! A field name ranks below a library argument and above a role name
//! (`dest`/`src`); a type name is the weakest evidence of all. A field the
//! analysis made up (`field_0x10`), padding, and a structure it synthesized
//! (`struct_3`) name nothing.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::context::{HighVariableId, OpId, VarnodeId};
use crate::database::symbol_category;
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::kuna_libcnames::{Evidence, FIELD, TYPE, folded_from, folded_into, local_of};

/// How deep [`field_name`] follows nested structures.
const NEST_DEPTH: usize = 4;

/// Add the field and type evidence of `fd` to `found`.
#[doc(hidden)]
pub fn evidence(fd: &mut Funcdata, found: &mut BTreeMap<HighVariableId, Vec<Evidence>>) {
    for (vn, read, op, name) in field_uses(fd) {
        let Some(o) = fd.obank().get(op) else {
            continue;
        };
        let at = (o.get_addr().clone(), o.get_time());
        let vn = if read {
            folded_into(fd, vn)
        } else {
            folded_from(fd, vn)
        };
        if let Some(high) = local_of(fd, vn) {
            found
                .entry(high)
                .or_default()
                .push((FIELD, at, -1, name.into(), true));
        }
    }
    let highs: Vec<HighVariableId> = fd.high_bank().iter().map(|(id, _)| id).collect();
    for high in highs {
        let Some(rep) = fd.high_name_representative(high) else {
            continue;
        };
        if local_of(fd, rep) != Some(high) {
            continue;
        }
        let Some(v) = fd.vbank().get(rep) else {
            continue;
        };
        let Some(name) = type_name(v.get_type()) else {
            continue;
        };
        let at = v.get_def().and_then(|op| fd.obank().get(op)).map_or_else(
            || (v.get_addr().clone(), u32::MAX),
            |o| (o.get_addr().clone(), o.get_time()),
        );
        found
            .entry(high)
            .or_default()
            .push((TYPE, at, -1, name.into(), true));
    }
}

/// A field name the code may print for a local: leading underscores dropped
/// (`_flags` is `flags`), and `None` for a name the analysis made up or one
/// that only pads the structure.
fn usable_field(name: &str) -> Option<&str> {
    let name = name.trim_start_matches('_');
    let ident = name.bytes().next().is_some_and(|b| b.is_ascii_alphabetic())
        && name.bytes().all(|b| b.is_ascii_alphanumeric() || b == b'_');
    (ident
        && !name.starts_with("field_0x")
        && !name.contains("reserved")
        && !name.starts_with("pad")
        && !name.starts_with("unused"))
    .then_some(name)
}

/// The innermost named field of structure `ct` that `[off, off+size)` is
/// exactly.
fn field_name(ct: Rc<Datatype>, mut off: i64, size: i32, op: OpId) -> Option<String> {
    let mut cur = ct;
    for _ in 0..NEST_DEPTH {
        if cur.get_metatype() != type_metatype::TYPE_STRUCT {
            return None;
        }
        let (i, noff) = cur.find_truncation(off, size, op, 0).ok()??;
        let next = {
            let field = cur.get_field(i)?;
            let ft = &field.field_type;
            if noff == 0 && ft.get_size() == size && ft.get_metatype() != type_metatype::TYPE_STRUCT
            {
                return usable_field(&field.name).map(str::to_string);
            }
            Rc::clone(ft)
        };
        cur = next;
        off = noff;
    }
    None
}

/// The field a pointer `addr` addresses, `size` bytes of it: `addr` is a
/// `PTRSUB` of a pointer to a named structure.
fn field_at_pointer(fd: &Funcdata, addr: VarnodeId, size: i32, at: OpId) -> Option<String> {
    let op = fd.obank().get(fd.vbank().get(addr)?.get_def()?)?;
    if op.code() != OpCode::CPUI_PTRSUB {
        return None;
    }
    let base = fd.vbank().get(op.get_in(0)?)?;
    let off = fd.vbank().get(op.get_in(1)?)?;
    if !off.is_constant() || base.is_spacebase() {
        return None;
    }
    let ptr = base.get_type();
    if ptr.get_word_size().is_some_and(|ws| ws != 1) {
        return None;
    }
    let to = ptr.get_ptr_to()?;
    if !named_struct(&to) {
        return None;
    }
    field_name(to, off.get_offset() as i64, size, at)
}

/// The field of a stack structure the value `vn` is a member of.
fn field_in_object(fd: &Funcdata, vn: VarnodeId, at: OpId) -> Option<String> {
    let v = fd.vbank().get(vn)?;
    if !v.is_addr_tied() || v.is_constant() {
        return None;
    }
    let addr = v.get_addr().clone();
    let size = v.get_size();
    let lm = fd.get_scope_local()?;
    let db = lm.database();
    let entry = db.entry(
        lm.scope_id(),
        db.find_container(lm.scope_id(), &addr, size, &Address::default())?,
    );
    let sym = db.symbol(entry.symbol);
    if sym.category != symbol_category::NO_CATEGORY {
        return None;
    }
    let ct = Rc::clone(sym.dtype.as_ref()?);
    if !named_struct(&ct) {
        return None;
    }
    let off = addr
        .get_offset()
        .checked_sub(entry.get_addr().get_offset())? as i64
        + entry.get_offset() as i64;
    field_name(ct, off, size, at)
}

/// Is `ct` a structure the program or a type library named, not one the
/// analysis synthesized (`struct_3`, `astruct_1`)?
fn named_struct(ct: &Datatype) -> bool {
    ct.get_metatype() == type_metatype::TYPE_STRUCT && type_word(ct.get_name()).is_some()
}

/// The identifier a type name gives: the last `::` component, without
/// template arguments or leading underscores, `None` for a name the analysis
/// made up.
fn type_word(name: &str) -> Option<&str> {
    let name = name
        .split('<')
        .next()?
        .rsplit("::")
        .next()?
        .trim_start_matches('_');
    let synthesized = ["struct_", "astruct", "union_", "anon", "frame_"]
        .iter()
        .any(|p| {
            name.strip_prefix(p).is_some_and(|rest| {
                rest.is_empty() || rest.bytes().all(|b| b.is_ascii_digit() || b == b'_')
            })
        });
    let ident = name.bytes().next().is_some_and(|b| b.is_ascii_alphabetic())
        && name.bytes().all(|b| b.is_ascii_alphanumeric() || b == b'_');
    (ident && !synthesized).then_some(name)
}

/// The name a local's type gives it: `str` for a `char` pointer, `wstr` for a
/// wide-character pointer, `p_<name>` for a pointer to a named structure.
fn type_name(ct: &Datatype) -> Option<String> {
    let to = ct.get_ptr_to()?;
    if to.get_metatype() == type_metatype::TYPE_STRUCT {
        return type_word(to.get_name()).map(|w| format!("p_{w}"));
    }
    if to.is_ascii() && to.get_size() == 1 {
        return Some("str".to_string());
    }
    if to.is_utf16() || to.is_utf32() {
        return Some("wstr".to_string());
    }
    None
}

/// Every value a load, store or member copy in `fd` gives a field name, as
/// (the value, whether the op reads the field, the op, the name): the output
/// of a load from a field or of a copy out of a stack structure's member, and
/// the value a store or a copy writes into one.
fn field_uses(fd: &Funcdata) -> Vec<(VarnodeId, bool, OpId, String)> {
    let mut out = Vec::new();
    for id in fd.obank().iter_alive() {
        let Some(op) = fd.obank().get(id) else {
            continue;
        };
        match op.code() {
            OpCode::CPUI_LOAD => {
                let (Some(addr), Some(val)) = (op.get_in(1), op.get_out()) else {
                    continue;
                };
                let Some(size) = fd.vbank().get(val).map(|v| v.get_size()) else {
                    continue;
                };
                if let Some(name) = field_at_pointer(fd, addr, size, id) {
                    out.push((val, true, id, name));
                }
            }
            OpCode::CPUI_STORE => {
                let (Some(addr), Some(val)) = (op.get_in(1), op.get_in(2)) else {
                    continue;
                };
                let Some(size) = fd.vbank().get(val).map(|v| v.get_size()) else {
                    continue;
                };
                if let Some(name) = field_at_pointer(fd, addr, size, id) {
                    out.push((val, false, id, name));
                }
            }
            OpCode::CPUI_COPY => {
                let (Some(src), Some(dst)) = (op.get_in(0), op.get_out()) else {
                    continue;
                };
                if let Some(name) = field_in_object(fd, src, id) {
                    out.push((dst, true, id, name));
                } else if let Some(name) = field_in_object(fd, dst, id) {
                    out.push((src, false, id, name));
                }
            }
            _ => {}
        }
    }
    out
}

crate::kuna_flag!(
    /// (kuna `flownames`) Name locals from the fields and types they meet.
    /// See [`crate::kuna_flownames`].
    FlowNames,
    "flownames",
    "field- and type-derived local names",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn made_up_field_names_name_nothing() {
        assert_eq!(usable_field("st_size"), Some("st_size"));
        assert_eq!(usable_field("_flags"), Some("flags"));
        for name in [
            "field_0x10",
            "__glibc_reserved",
            "__pad0",
            "",
            "_",
            "0x10",
            "a b",
            "reserved_x",
            "unused2",
        ] {
            assert_eq!(usable_field(name), None, "{name}");
        }
    }

    #[test]
    fn synthesized_structures_have_no_type_word() {
        assert_eq!(type_word("passwd"), Some("passwd"));
        assert_eq!(type_word("_IO_FILE"), Some("IO_FILE"));
        assert_eq!(type_word("std::vector<int>"), Some("vector"));
        for name in [
            "struct_3",
            "astruct",
            "astruct_12",
            "frame_1",
            "anon",
            "1abc",
        ] {
            assert_eq!(type_word(name), None, "{name}");
        }
    }
}
