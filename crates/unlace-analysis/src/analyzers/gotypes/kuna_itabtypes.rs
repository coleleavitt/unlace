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

use unlace_decomp::fspec::PrototypePieces;
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
) -> BTreeMap<String, (Vec<String>, GoType)> {
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
    let mut first: BTreeMap<String, GoType> = BTreeMap::new();
    for t in descriptors.values().filter(|t| t.kind == KIND_INTERFACE) {
        let name = linker_name(img, meta, t);
        if !global_name_ok(&name) {
            continue;
        }
        first.entry(name.clone()).or_insert_with(|| t.clone());
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
            let descriptor = first.remove(&name)?;
            (!methods.is_empty()).then_some((name, (methods, descriptor)))
        })
        .collect()
}

/// Intern `go.itab.<interface>` for `interface`'s method list (64-bit layout)
/// and register its facet. An existing record of that name is left alone
/// unless it is an empty shell. Returns whether the record is in place.
pub(super) fn intern_record(tf: &dyn TypeFactory, interface: &str, methods: &[String]) -> bool {
    intern_record_slots(tf, interface, methods, &[])
}

/// [`intern_record`] with a function-pointer type per method slot where
/// `slots` holds one (a slot without keeps `code *`).
pub(super) fn intern_record_slots(
    tf: &dyn TypeFactory,
    interface: &str,
    methods: &[String],
    slots: &[Option<Rc<Datatype>>],
) -> bool {
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
        let ty = slots
            .get(i)
            .cloned()
            .flatten()
            .unwrap_or_else(|| Rc::clone(&fptr));
        fields.push(TypeField::new(3 + slot, offset, method, ty));
    }
    let Ok(size) = int4::try_from(methods.len()).map(|n| ITAB_FUN_OFFSET_64 + 8 * n) else {
        return false;
    };
    tf.set_fields_struct_raw(&ct, fields, Vec::new(), size, 8, 0)
        .is_ok()
        && tf.kuna_register_lang_facet(&name, facet).is_ok()
}

/// The Go register-ABI scalar a parameter or result descriptor maps to: an
/// integer or bool of its own width, or an opaque pointer for the pointer-shaped
/// kinds. `None` for every other kind (strings, slices, interfaces, structs,
/// arrays and floats take more than one integer register or a float one).
fn scalar_type(tf: &dyn TypeFactory, t: &GoType) -> Option<Rc<Datatype>> {
    let size = int4::try_from(t.size).ok()?;
    let sized = |meta| {
        matches!(size, 1 | 2 | 4 | 8)
            .then(|| tf.get_base(size, meta).ok())
            .flatten()
    };
    match t.kind {
        KIND_BOOL if size == 1 => tf.get_base(1, type_metatype::TYPE_BOOL).ok(),
        KIND_INT | KIND_INT8 | KIND_INT16 | KIND_INT32 | KIND_INT64 => {
            sized(type_metatype::TYPE_INT)
        }
        KIND_UINT | KIND_UINT8 | KIND_UINT16 | KIND_UINT32 | KIND_UINT64 | KIND_UINTPTR => {
            sized(type_metatype::TYPE_UINT)
        }
        KIND_POINTER | KIND_UNSAFEPTR | KIND_CHAN | KIND_MAP | KIND_FUNC if size == 8 => {
            tf.get_type_pointer(8, tf.get_type_void().ok()?, 1).ok()
        }
        _ => None,
    }
}

/// The prototype of method `k` of interface descriptor `inter`, from its
/// `Imethod.Typ` func descriptor: the receiver (the interface's data word, an
/// opaque pointer) and then the parameters, each a one-register scalar
/// ([`scalar_type`]), with at most one scalar result. `None` for a variadic
/// method, more than eight parameters, more than one result, or any other
/// parameter kind.
pub(super) fn method_pieces(
    tf: &dyn TypeFactory,
    img: &GoImage,
    meta: &TypeMeta,
    inter: &GoType,
    k: u64,
) -> Option<PrototypePieces> {
    let w = img.word_size;
    let base = inter.vma.checked_add(img.type_base())?;
    let (ptr, len) = plausible_slice(img, base.checked_add(w)?, MAX_METHODS)?;
    if k >= len {
        return None;
    }
    let raw = img.read(ptr.checked_add(k * 8 + 4)?, 4)?;
    let typ_off = i32::from_le_bytes(raw.try_into().ok()?);
    if typ_off <= 0 {
        return None;
    }
    let func = read_type(img, meta.types, meta.etypes, typ_off as u32)?;
    if func.kind != KIND_FUNC {
        return None;
    }
    let fbase = func.vma.checked_add(img.type_base())?;
    let counts = img.read(fbase, 4)?;
    let inc = u64::from(u16::from_le_bytes([counts[0], counts[1]]));
    let outc = u16::from_le_bytes([counts[2], counts[3]]);
    if outc & 0x8000 != 0 || inc > 8 || outc > 1 {
        return None;
    }
    let params = fbase
        .checked_add(w)?
        .checked_add(if func.tflag & TFLAG_UNCOMMON != 0 {
            UNCOMMON_SIZE
        } else {
            0
        })?;
    let mut scalars = Vec::new();
    for j in 0..inc + u64::from(outc) {
        let at = word(img, params.checked_add(j * w)?)?;
        let t = at
            .checked_sub(meta.types)
            .and_then(|off| u32::try_from(off).ok())
            .and_then(|off| read_type(img, meta.types, meta.etypes, off))?;
        scalars.push(scalar_type(tf, &t)?);
    }
    let outtype = if outc == 1 {
        scalars.pop()?
    } else {
        tf.get_type_void().ok()?
    };
    let receiver = tf.get_type_pointer(8, tf.get_type_void().ok()?, 1).ok()?;
    let mut intypes = vec![receiver];
    intypes.extend(scalars);
    let innames = (0..intypes.len())
        .map(|i| {
            if i == 0 {
                "receiver".to_string()
            } else {
                format!("a{i}")
            }
        })
        .collect();
    Some(PrototypePieces {
        name: String::new(),
        outtype: Some(outtype),
        intypes,
        innames,
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        kuna_library_names: None,
    })
}

/// The function-pointer type of each method slot of `inter` under the Go
/// register ABI model (`abi-internal`), `None` for a slot whose prototype
/// [`method_pieces`] refuses or the factory cannot build.
fn slot_types(
    tf: &dyn TypeFactory,
    img: &GoImage,
    meta: &TypeMeta,
    inter: &GoType,
    count: usize,
) -> Vec<Option<Rc<Datatype>>> {
    (0..count as u64)
        .map(|k| {
            let pieces = method_pieces(tf, img, meta, inter, k)?;
            let code = tf.get_type_code_proto_named(&pieces, GO_ABI_MODEL).ok()?;
            tf.get_type_pointer(8, code, 1).ok()
        })
        .collect()
}

/// The prototype model of the Go register ABI.
const GO_ABI_MODEL: &str = "abi-internal";

/// Intern the itab layout of every interface the image describes (64-bit
/// images only). When the image's default model is the Go register ABI
/// (`go_abi`), each method slot whose signature is all one-register scalars
/// also carries its prototype. Returns how many records are in place.
pub(super) fn intern(
    tf: &dyn TypeFactory,
    img: &GoImage,
    meta: &TypeMeta,
    anchor: u64,
    go_abi: bool,
) -> usize {
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
        .filter(|(interface, (methods, descriptor))| {
            let slots = if go_abi {
                slot_types(tf, img, meta, descriptor, methods.len())
            } else {
                Vec::new()
            };
            intern_record_slots(tf, interface, methods, &slots)
        })
        .count()
}
