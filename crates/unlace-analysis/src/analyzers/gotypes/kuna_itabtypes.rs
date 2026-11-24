//! (kuna `goitabcalls`) Per-interface itab layouts: an interface's method set
//! names the `Fun` slots every itab of that interface dispatches through.
//!
//! An `internal/abi.InterfaceType` descriptor carries its methods as a slice of
//! `Imethod {Name NameOff, Typ TypeOff}` after the `Type` base and the
//! `PkgPath` name pointer, sorted by name, and every itab built for the
//! interface lays its `Fun` array out in exactly that order. So one record per
//! interface, `go.itab.<interface>` (the linker's spelling, [`linker_name`]),
//! types every itab of it: the header (`inter`, `_type`, `hash`, the
//! `runtime.itab` field names) and then one `code *` slot per method at
//! `24 + 8*i`, named after the method, with a `LangFacet::GoItab` facet that
//! names the interface. Nothing binds the record by itself (interning is
//! output-neutral); the `goitabcalls` option is what types an interface
//! formal's table word with it and prints a call through a slot by name.
//!
//! The interfaces come from the descriptor graph walk ([`reachable`]) and the
//! `Inter` words of the located itabs. Refusals, each leaving the interface
//! without a record: a 32-bit image (the `Fun` offset moved with go1.22 there),
//! an empty interface (`any` values carry no itab), a method name that is not
//! an ASCII identifier or that collides with a header field, an unprintable
//! interface spelling (an anonymous `interface { ... }` literal), and a
//! spelling two descriptors give different method lists (the name is then no
//! basis for typing a value).

use std::collections::{BTreeMap, BTreeSet};

use unlace_decomp::kuna_goitabcalls::{ITAB_FUN_OFFSET_64, itab_record_name};

use super::kuna_typeglobals::{global_name_ok, linker_name, reachable};
use super::*;

/// The header fields of the record, named as `runtime.itab` names them.
const HEADER_FIELDS: [&str; 3] = ["inter", "_type", "hash"];

/// The most methods one interface's record carries; a larger count is corrupt.
const MAX_METHODS: u64 = 1024;

/// `true` when `name` can be a record field and a printed selector: an ASCII
/// Go identifier that no header field already uses.
fn method_name_ok(name: &str) -> bool {
    let mut bytes = name.bytes();
    bytes
        .next()
        .is_some_and(|b| b.is_ascii_alphabetic() || b == b'_')
        && bytes.all(|b| b.is_ascii_alphanumeric() || b == b'_')
        && !HEADER_FIELDS.contains(&name)
}

/// The method names of interface descriptor `inter`, in its `Methods` order
/// (the order of every itab's `Fun` array). `None` for a non-interface, an
/// empty interface, or any unreadable or unusable method name.
pub(super) fn interface_methods(
    img: &GoImage,
    meta: &TypeMeta,
    inter: &GoType,
) -> Option<Vec<String>> {
    if inter.kind != KIND_INTERFACE {
        return None;
    }
    let base = inter.vma.checked_add(img.type_base())?;
    let (ptr, len) = plausible_slice(img, base.checked_add(img.word_size)?, MAX_METHODS)?;
    let mut names = Vec::with_capacity(len as usize);
    for k in 0..len {
        let raw = img.read(ptr.checked_add(k * 8)?, 4)?;
        let name_off = i32::from_le_bytes(raw.try_into().ok()?);
        if name_off <= 0 {
            return None;
        }
        let name = read_go_name(img, meta.types.checked_add(name_off as u64)?)?;
        if !method_name_ok(&name) || names.contains(&name) {
            return None;
        }
        names.push(name);
    }
    Some(names)
}

/// The method set of every printable non-empty interface the image describes,
/// keyed by its linker spelling. A spelling whose descriptors disagree on the
/// method list is dropped.
pub(super) fn interface_method_sets(
    img: &GoImage,
    meta: &TypeMeta,
    itab_interfaces: &[u64],
) -> BTreeMap<String, Vec<String>> {
    let mut descriptors = reachable(img, meta);
    for &vma in itab_interfaces {
        if descriptors.contains_key(&vma) {
            continue;
        }
        if let Some(t) = vma
            .checked_sub(meta.types)
            .and_then(|off| u32::try_from(off).ok())
            .and_then(|off| read_type(img, meta.types, meta.etypes, off))
        {
            descriptors.insert(vma, t);
        }
    }
    let mut by_name: BTreeMap<String, BTreeSet<Vec<String>>> = BTreeMap::new();
    for t in descriptors.values().filter(|t| t.kind == KIND_INTERFACE) {
        let name = linker_name(img, meta, t);
        if !global_name_ok(&name) {
            continue;
        }
        let entry = by_name.entry(name).or_default();
        match interface_methods(img, meta, t) {
            Some(methods) => {
                entry.insert(methods);
            }
            None => {
                entry.insert(Vec::new());
            }
        }
    }
    by_name
        .into_iter()
        .filter_map(|(name, mut sets)| {
            if sets.len() != 1 {
                return None;
            }
            let methods = sets.pop_first()?;
            (!methods.is_empty()).then_some((name, methods))
        })
        .collect()
}

/// Intern `go.itab.<interface>` for `interface`'s method list (64-bit layout)
/// and register its facet. An existing record of that name is left alone
/// unless it is an empty shell. Returns whether the record is in place.
pub(super) fn intern_record(tf: &dyn TypeFactory, interface: &str, methods: &[String]) -> bool {
    let name = itab_record_name(interface);
    let facet = LangFacet::GoItab {
        interface: interface.to_string(),
    };
    let ct = match tf.find_by_name(&name) {
        Ok(Some(held)) if held.get_metatype() == type_metatype::TYPE_STRUCT => held,
        Ok(None) => match tf.kuna_declare_record(&name, false) {
            Ok(ct) => ct,
            Err(_) => return false,
        },
        _ => return false,
    };
    if ct.get_size() != 0 {
        return tf.kuna_lang_facet(&name) == Some(facet);
    }
    let (Ok(void), Ok(code), Ok(hash)) = (
        tf.get_type_void(),
        tf.get_type_code(),
        tf.get_base(4, type_metatype::TYPE_UINT),
    ) else {
        return false;
    };
    let (Ok(vptr), Ok(fptr)) = (
        tf.get_type_pointer(8, void, 1),
        tf.get_type_pointer(8, code, 1),
    ) else {
        return false;
    };
    let mut fields = vec![
        TypeField::new(0, 0, HEADER_FIELDS[0], Rc::clone(&vptr)),
        TypeField::new(1, 8, HEADER_FIELDS[1], vptr),
        TypeField::new(2, 16, HEADER_FIELDS[2], hash),
    ];
    for (i, method) in methods.iter().enumerate() {
        let Ok(slot) = int4::try_from(i) else {
            return false;
        };
        let offset = ITAB_FUN_OFFSET_64 + 8 * slot;
        fields.push(TypeField::new(3 + slot, offset, method, Rc::clone(&fptr)));
    }
    let Ok(size) = int4::try_from(methods.len()).map(|n| ITAB_FUN_OFFSET_64 + 8 * n) else {
        return false;
    };
    tf.set_fields_struct_raw(&ct, fields, Vec::new(), size, 8, 0)
        .is_ok()
        && tf.kuna_register_lang_facet(&name, facet).is_ok()
}

/// Intern the itab layout of every interface the image describes (64-bit
/// images only). Returns how many records are in place.
pub(super) fn intern(tf: &dyn TypeFactory, img: &GoImage, meta: &TypeMeta, anchor: u64) -> usize {
    if img.word_size != 8 {
        return 0;
    }
    let itab_interfaces: Vec<u64> =
        super::kuna_itabs::locate_itabs(img, anchor, meta.types, meta.etypes)
            .unwrap_or_default()
            .into_iter()
            .filter_map(|vma| word(img, vma))
            .collect();
    interface_method_sets(img, meta, &itab_interfaces)
        .iter()
        .filter(|(interface, methods)| intern_record(tf, interface, methods))
        .count()
}
