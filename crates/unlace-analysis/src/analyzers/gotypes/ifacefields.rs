//! (kuna `goitabcalls`) Which interface each interface-typed field of a named
//! Go struct holds.
//!
//! A struct field of interface type is two words, the itab pointer then the
//! data pointer, and both the harvest and the DWARF importer give it a generic
//! two-word layout (`go.iface`, `runtime.iface`) that does not say which
//! interface it is. The struct descriptor does: each field's `typ` points at
//! the interface's own descriptor. This records, per named struct, the byte
//! offset of every such field and its interface's linker spelling as a
//! `LangFacet::GoInterfaceFields` facet on the struct's name (its reflection
//! spelling, `poll.FD`, and its linker spelling, `internal/poll.FD`, which is
//! what a DWARF-built layout is named), so the printer can name a call through
//! `h->S.tab`. Only the field's offset and interface are recorded, never a
//! layout, so the facet holds whoever completed the struct. Refused: a name the
//! harvest marked layout-ambiguous, a name whose descriptors disagree on the
//! list, a name that already carries another facet, an unprintable interface
//! spelling, and 32-bit images.

use std::collections::{BTreeMap, BTreeSet};

use super::kuna_typeglobals::{global_name_ok, linker_name, reachable};
use super::*;

/// The interface-typed fields of named struct descriptor `t`: `(byte offset,
/// interface linker spelling)` in field order, empty interfaces included
/// (they carry a type word, not an itab, and are dropped by the printer for
/// want of an itab record). `None` when the field list does not decode.
pub(super) fn interface_fields(
    img: &GoImage,
    meta: &TypeMeta,
    t: &GoType,
    packed_offsets: bool,
) -> Option<Vec<(i32, String)>> {
    let w = img.word_size;
    let base = t.vma.checked_add(img.type_base())?;
    let Some((ptr, len)) = plausible_slice(img, base.checked_add(w)?, 4096) else {
        return Some(Vec::new());
    };
    let mut out = Vec::new();
    for k in 0..len {
        let fv = ptr.checked_add(k.checked_mul(3 * w)?)?;
        let typ = word(img, fv.checked_add(w)?)?;
        let raw = word(img, fv.checked_add(2 * w)?)?;
        let offset = if packed_offsets { raw >> 1 } else { raw };
        if offset > t.size {
            return None;
        }
        let Some(field) = typ
            .checked_sub(meta.types)
            .and_then(|off| u32::try_from(off).ok())
            .and_then(|off| read_type(img, meta.types, meta.etypes, off))
        else {
            continue;
        };
        if field.kind != KIND_INTERFACE {
            continue;
        }
        let interface = linker_name(img, meta, &field);
        if global_name_ok(&interface) {
            out.push((i32::try_from(offset).ok()?, interface));
        }
    }
    Some(out)
}

/// Register the interface-field facet of every named struct the descriptor
/// walk reaches (64-bit images only). Returns how many names carry it.
pub(super) fn register(
    tf: &dyn TypeFactory,
    img: &GoImage,
    meta: &TypeMeta,
    version: Option<(u16, u16)>,
) -> usize {
    if img.word_size != 8 {
        return 0;
    }
    let packed_offsets = matches!(version, Some((1, 9..=18)));
    let mut by_name: BTreeMap<String, BTreeSet<Vec<(i32, String)>>> = BTreeMap::new();
    for t in reachable(img, meta).values() {
        if t.kind != KIND_STRUCT || t.tflag & TFLAG_NAMED == 0 || !name_ok(&t.name) {
            continue;
        }
        let fields = interface_fields(img, meta, t, packed_offsets);
        let mut names = vec![t.name.clone()];
        let full = linker_name(img, meta, t);
        if full != t.name && global_name_ok(&full) {
            names.push(full);
        }
        for name in names {
            by_name
                .entry(name)
                .or_default()
                .insert(fields.clone().unwrap_or_else(|| vec![(-1, String::new())]));
        }
    }
    let mut registered = 0;
    for (name, mut lists) in by_name {
        if lists.len() != 1 || tf.kuna_is_ambiguous_go_type(&name) {
            continue;
        }
        let Some(fields) = lists.pop_first() else {
            continue;
        };
        if fields.is_empty() || fields.iter().any(|(offset, _)| *offset < 0) {
            continue;
        }
        if tf.kuna_lang_facet(&name).is_some() {
            continue;
        }
        if tf
            .kuna_register_lang_facet(&name, LangFacet::GoInterfaceFields { fields })
            .is_ok()
        {
            registered += 1;
        }
    }
    registered
}
