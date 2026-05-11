//! Go `runtime._type` kind-specific decoders.
//!
//! The `runtime._type` header is 48 bytes on 64-bit targets and is shared by
//! every Go type. Each concrete kind appends a kind-specific tail describing
//! its element type, fields, methods, etc. This module decodes the head plus
//! the tails we care about for reverse-engineering (pointer/slice/array/
//! struct/map/interface/chan/func).
//!
//! Layout reference: Go 1.20+, 64-bit, little-endian.
//!
//! ```text
//! type _type struct {
//!     size       uintptr  // 0
//!     ptrdata    uintptr  // 8
//!     hash       uint32   // 16
//!     tflag      uint8    // 20
//!     align      uint8    // 21
//!     fieldAlign uint8    // 22
//!     kind       uint8    // 23  (low 5 bits = kind enum)
//!     equal      *fn      // 24
//!     gcdata     *byte    // 32
//!     str        int32    // 40
//!     ptrToThis  int32    // 44
//! }                        // 48 bytes total
//! ```

const TYPE_HEAD_SIZE: usize = 48;
const KIND_MASK: u8 = 0x1F;

#[derive(Debug, Clone)]
pub struct GoType {
    pub va: u64,
    pub size: u64,
    pub kind: GoKind,
    pub name: Option<String>,
}

#[derive(Debug, Clone)]
pub enum GoKind {
    Bool,
    Int,
    Int8,
    Int16,
    Int32,
    Int64,
    Uint,
    Uint8,
    Uint16,
    Uint32,
    Uint64,
    Uintptr,
    Float32,
    Float64,
    Complex64,
    Complex128,
    String,
    UnsafePointer,
    Ptr {
        elem_va: u64,
    },
    /// `slicetype { _type; elem *type }`.
    Slice {
        elem_va: u64,
    },
    /// `arraytype { _type; elem *type; slice *type; len uintptr }`.
    Array {
        elem_va: u64,
        slice_va: u64,
        len: u64,
    },
    /// `structtype { _type; pkgpath name; fields []structfield }`.
    Struct {
        pkgpath_va: u64,
        fields: Vec<GoStructField>,
    },
    /// `maptype { _type; key *type; elem *type; bucket *type;
    /// hasher unsafe.Pointer; keysize u8; valuesize u8;
    /// bucketsize u16; flags u32 }`.
    Map {
        key_va: u64,
        elem_va: u64,
        bucket_va: u64,
        hasher_va: u64,
        key_size: u8,
        value_size: u8,
        bucket_size: u16,
        flags: u32,
    },
    /// `interfacetype { _type; pkgpath name; mhdr []imethod }`.
    /// Each `imethod` is `{ name nameOff; ityp typeOff }` (two i32s, 8 bytes).
    Interface {
        pkgpath_va: u64,
        method_count: usize,
        methods: Vec<GoIMethod>,
    },
    /// `chantype { _type; elem *type; dir uintptr }`.
    Chan {
        elem_va: u64,
        dir: u32,
    },
    /// `functype { _type; inCount u16; outCount u16 }` plus trailing
    /// `[inCount + outCount]*_type` array. The high bit of `outCount`
    /// in the on-disk layout flags a variadic final parameter; here it
    /// is split out into [`Self::Func::variadic`] and `out_count` only
    /// carries the real out-arg count.
    Func {
        in_count: u16,
        out_count: u16,
        variadic: bool,
        in_types: Vec<u64>,
        out_types: Vec<u64>,
    },
    Other(u8),
}

/// Convenience alias used by some external docs; the canonical name is
/// [`GoKind`]. Re-exported under `GoTypeKind` so consumers can pick the
/// name that reads best in their own surface.
pub type GoTypeKind = GoKind;

#[derive(Debug, Clone)]
pub struct GoStructField {
    pub name: String,
    pub typ_va: u64,
    pub offset: u64,
}

/// A single `imethod` slot inside `interfacetype.mhdr`.
///
/// Both fields are *offsets* (signed i32) into Go's name/type tables —
/// they are not absolute VAs. Resolving them to a concrete name / `_type`
/// requires the surrounding `moduledata` (out of scope for this decoder).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GoIMethod {
    pub name_off: i32,
    pub typ_off: i32,
}

fn read_u64(data: &[u8], off: usize) -> Option<u64> {
    data.get(off..off + 8)
        .map(|s| u64::from_le_bytes(s.try_into().unwrap()))
}

fn read_u16(data: &[u8], off: usize) -> Option<u16> {
    data.get(off..off + 2)
        .map(|s| u16::from_le_bytes(s.try_into().unwrap()))
}

fn read_u32(data: &[u8], off: usize) -> Option<u32> {
    data.get(off..off + 4)
        .map(|s| u32::from_le_bytes(s.try_into().unwrap()))
}

fn read_i32(data: &[u8], off: usize) -> Option<i32> {
    data.get(off..off + 4)
        .map(|s| i32::from_le_bytes(s.try_into().unwrap()))
}

fn read_u8(data: &[u8], off: usize) -> Option<u8> {
    data.get(off).copied()
}

/// Decode an encoded Go `Name`: `[flag u8][len varint][bytes...]`.
fn decode_name(data: &[u8], off: usize) -> Option<String> {
    let _flag = *data.get(off)?;
    let (len, len_bytes) = decode_varint(data, off + 1)?;
    let start = off + 1 + len_bytes;
    let bytes = data.get(start..start + len as usize)?;
    std::str::from_utf8(bytes).ok().map(String::from)
}

fn decode_varint(data: &[u8], off: usize) -> Option<(u64, usize)> {
    let mut result: u64 = 0;
    let mut shift = 0;
    let mut consumed = 0;
    loop {
        let byte = *data.get(off + consumed)?;
        consumed += 1;
        result |= u64::from(byte & 0x7F) << shift;
        if byte & 0x80 == 0 {
            break;
        }
        shift += 7;
        if shift >= 64 {
            return None;
        }
    }
    Some((result, consumed))
}

fn basic_kind(k: u8) -> Option<GoKind> {
    Some(match k {
        1 => GoKind::Bool,
        2 => GoKind::Int,
        3 => GoKind::Int8,
        4 => GoKind::Int16,
        5 => GoKind::Int32,
        6 => GoKind::Int64,
        7 => GoKind::Uint,
        8 => GoKind::Uint8,
        9 => GoKind::Uint16,
        10 => GoKind::Uint32,
        11 => GoKind::Uint64,
        12 => GoKind::Uintptr,
        13 => GoKind::Float32,
        14 => GoKind::Float64,
        15 => GoKind::Complex64,
        16 => GoKind::Complex128,
        24 => GoKind::String,
        26 => GoKind::UnsafePointer,
        _ => return None,
    })
}

pub fn parse_type_at(
    image_data: &[u8],
    va: u64,
    va_to_offset: impl Fn(u64) -> Option<usize>,
) -> Option<GoType> {
    let head_off = va_to_offset(va)?;
    let head = image_data.get(head_off..head_off + TYPE_HEAD_SIZE)?;

    let size = u64::from_le_bytes(head[0..8].try_into().ok()?);
    let kind_byte = head[23] & KIND_MASK;
    let tail_off = head_off + TYPE_HEAD_SIZE;

    let kind = match kind_byte {
        17 => {
            // arraytype { _type; elem *type; slice *type; len uintptr }
            let elem_va = read_u64(image_data, tail_off)?;
            let slice_va = read_u64(image_data, tail_off + 8)?;
            let len = read_u64(image_data, tail_off + 16)?;
            GoKind::Array {
                elem_va,
                slice_va,
                len,
            }
        }
        18 => {
            // chantype { _type; elem *type; dir uintptr }
            let elem_va = read_u64(image_data, tail_off)?;
            let dir = read_u64(image_data, tail_off + 8)? as u32;
            GoKind::Chan { elem_va, dir }
        }
        19 => {
            // functype { _type; inCount u16; outCount u16 (high bit = variadic) }
            // trailing [inCount + realOutCount]*_type
            let in_count = read_u16(image_data, tail_off)?;
            let raw_out = read_u16(image_data, tail_off + 2)?;
            let variadic = (raw_out & 0x8000) != 0;
            let out_count = raw_out & 0x7FFF;
            // Per the Go runtime, the in/out type pointer array follows the
            // functype header. Older Go (1.16+) inserts a 4-byte padding so
            // the pointer array is 8-byte aligned; we round up to 8.
            let arr_off = tail_off + 8;
            let total = in_count as usize + out_count as usize;
            let mut in_types = Vec::with_capacity(in_count as usize);
            let mut out_types = Vec::with_capacity(out_count as usize);
            // Bounds-check the trailing array up front. If truncated, fall
            // back to an empty list rather than refusing to decode the kind.
            if image_data
                .get(arr_off..arr_off + total * 8)
                .is_some()
            {
                for i in 0..in_count as usize {
                    in_types.push(read_u64(image_data, arr_off + i * 8)?);
                }
                for i in 0..out_count as usize {
                    out_types
                        .push(read_u64(image_data, arr_off + (in_count as usize + i) * 8)?);
                }
            }
            GoKind::Func {
                in_count,
                out_count,
                variadic,
                in_types,
                out_types,
            }
        }
        20 => {
            // interfacetype { _type; pkgpath name; mhdr []imethod }
            //   pkgpath:  *byte  (8)
            //   mhdr:     ptr (8) + len (8) + cap (8)
            let pkgpath_va = read_u64(image_data, tail_off)?;
            let methods_ptr = read_u64(image_data, tail_off + 8)?;
            let methods_len = read_u64(image_data, tail_off + 16)? as usize;
            let methods = parse_imethods(image_data, methods_ptr, methods_len, &va_to_offset);
            GoKind::Interface {
                pkgpath_va,
                method_count: methods_len,
                methods,
            }
        }
        21 => {
            // maptype { _type; key, elem, bucket *type; hasher unsafe.Pointer;
            //           keysize u8; valuesize u8; bucketsize u16; flags u32 }
            let key_va = read_u64(image_data, tail_off)?;
            let elem_va = read_u64(image_data, tail_off + 8)?;
            let bucket_va = read_u64(image_data, tail_off + 16)?;
            let hasher_va = read_u64(image_data, tail_off + 24)?;
            let key_size = read_u8(image_data, tail_off + 32)?;
            let value_size = read_u8(image_data, tail_off + 33)?;
            let bucket_size = read_u16(image_data, tail_off + 34)?;
            let flags = read_u32(image_data, tail_off + 36)?;
            GoKind::Map {
                key_va,
                elem_va,
                bucket_va,
                hasher_va,
                key_size,
                value_size,
                bucket_size,
                flags,
            }
        }
        22 => {
            let elem_va = read_u64(image_data, tail_off)?;
            GoKind::Ptr { elem_va }
        }
        23 => {
            // slicetype { _type; elem *type }
            let elem_va = read_u64(image_data, tail_off)?;
            GoKind::Slice { elem_va }
        }
        25 => {
            // structtype { _type; pkgpath name; fields []structfield }
            //   pkgpath:  *byte  (8)  — name encoded ptr
            //   fields:   ptr (8) + len (8) + cap (8)
            let pkgpath_va = read_u64(image_data, tail_off)?;
            let fields_ptr_va = read_u64(image_data, tail_off + 8)?;
            let fields_len = read_u64(image_data, tail_off + 16)?;
            let fields = parse_struct_fields(
                image_data,
                fields_ptr_va,
                fields_len as usize,
                &va_to_offset,
            );
            GoKind::Struct {
                pkgpath_va,
                fields,
            }
        }
        other => basic_kind(other).unwrap_or(GoKind::Other(other)),
    };

    Some(GoType {
        va,
        size,
        kind,
        name: None,
    })
}

// ---------------------------------------------------------------------------
// t137: Go runtime.itab decoder.
//
// Each itab pinned by `moduledata.itablinks` packs an (interface, concrete)
// pair plus the function pointers that satisfy the interface methods:
//
//   runtime.itab {
//       inter   *interfacetype  // 8
//       _type   *_type          // 8
//       hash    uint32          // 4   (copy of _type.hash for type-switch)
//       _       [4]byte         // 4   padding
//       fun     [1]uintptr      // 0 if interface is empty, else N method ptrs
//   }
// ---------------------------------------------------------------------------

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GoItab {
    pub va: u64,
    pub inter_type_va: u64,
    pub concrete_type_va: u64,
    pub hash: u32,
    pub methods: Vec<u64>,
}

/// Header size in bytes (inter + _type + hash + pad).
const ITAB_HEADER_SIZE: usize = 24;

/// Parse a `runtime.itab` record at virtual address `va`.
///
/// `method_count` is the number of method slots the linked interface
/// declares — callers resolve this from the interface_type. When the
/// interface is empty (`method_count == 0`), `methods` comes back empty.
pub fn parse_itab(
    image_data: &[u8],
    va: u64,
    va_to_offset: impl Fn(u64) -> Option<usize>,
    method_count: usize,
) -> Option<GoItab> {
    let off = va_to_offset(va)?;
    let head = image_data.get(off..off + ITAB_HEADER_SIZE)?;

    let inter_type_va = u64::from_le_bytes(head[0..8].try_into().ok()?);
    let concrete_type_va = u64::from_le_bytes(head[8..16].try_into().ok()?);
    let hash = u32::from_le_bytes(head[16..20].try_into().ok()?);

    let mut methods = Vec::with_capacity(method_count);
    if method_count > 0 {
        let fun_off = off + ITAB_HEADER_SIZE;
        let fun_bytes = image_data.get(fun_off..fun_off + method_count * 8)?;
        for i in 0..method_count {
            let m = u64::from_le_bytes(fun_bytes[i * 8..i * 8 + 8].try_into().ok()?);
            methods.push(m);
        }
    }

    Some(GoItab {
        va,
        inter_type_va,
        concrete_type_va,
        hash,
        methods,
    })
}

/// Hard cap on method-pointer slots scanned per itab when the interface
/// type's method count can't be resolved. Bounds the walk for unbound
/// itabs (e.g. when `inter_type_va` points outside any mapped section).
const ITAB_MAX_METHODS_FALLBACK: usize = 16;

/// Resolve `va` to a section + file offset. Walks the image's sections in
/// order, returning the first that contains `va` with enough backing bytes.
fn image_va_to_section(
    image: &crate::image::BinaryImage,
    va: u64,
) -> Option<(&crate::image::Section, usize)> {
    for sec in &image.sections {
        if va >= sec.vaddr && va < sec.vaddr.saturating_add(sec.size) {
            let off = (va - sec.vaddr) as usize;
            if off < sec.data.len() {
                return Some((sec, off));
            }
        }
    }
    None
}

/// Parse a `runtime.itab` directly from a [`BinaryImage`] at virtual
/// address `va`. Resolves the interface-type's method count by following
/// `inter_type_va` and decoding it as a Go `_type` of kind=`Interface`.
/// Falls back to [`ITAB_MAX_METHODS_FALLBACK`] when the interface type is
/// unreachable (truncated section, foreign mapping, or simply out-of-range).
///
/// Returns `None` only when `va` itself doesn't resolve into any mapped
/// section — every other failure mode (unresolvable interface type,
/// truncated method array) downgrades to an empty methods list.
pub fn parse_itab_at(image: &crate::image::BinaryImage, va: u64) -> Option<GoItab> {
    let (sec, off) = image_va_to_section(image, va)?;
    let head = sec.data.get(off..off + ITAB_HEADER_SIZE)?;
    let inter_type_va = u64::from_le_bytes(head[0..8].try_into().ok()?);
    let concrete_type_va = u64::from_le_bytes(head[8..16].try_into().ok()?);
    let hash = u32::from_le_bytes(head[16..20].try_into().ok()?);

    let method_count = resolve_inter_method_count(image, inter_type_va)
        .unwrap_or(ITAB_MAX_METHODS_FALLBACK);

    let mut methods = Vec::with_capacity(method_count);
    let fun_off = off + ITAB_HEADER_SIZE;
    for i in 0..method_count {
        let slot = fun_off + i * 8;
        let Some(slice) = sec.data.get(slot..slot + 8) else {
            break;
        };
        methods.push(u64::from_le_bytes(slice.try_into().ok()?));
    }

    Some(GoItab {
        va,
        inter_type_va,
        concrete_type_va,
        hash,
        methods,
    })
}

/// Walk every VA in `image.go_module.itablinks` and parse each as a
/// `runtime.itab`, inserting successful decodes into `image.go_itabs`.
/// No-op when the binary isn't Go (no `go_module`).
pub fn populate_itabs_from_module(image: &mut crate::image::BinaryImage) {
    let Some(module) = image.go_module.as_ref() else {
        return;
    };
    let itablinks = module.itablinks.clone();
    for itab_va in itablinks {
        if let Some(itab) = parse_itab_at(image, itab_va) {
            image.go_itabs.insert(itab_va, itab);
        }
    }
}

/// Convert a decoded [`GoType`] of [`GoKind::Interface`] into the
/// composite [`unlace_ir::types::Type::Interface`] consumed by the C
/// printer (t181). Returns `None` for any other kind — callers can chain
/// `if let Some(t) = …` cleanly.
///
/// Method names come from the resolved `name` field on each entry when
/// available (the loader pass below fills these in from Go's name table);
/// fully-decoded names are unavailable here so we fall back to `m{idx}`
/// placeholders, which keep the rendered comment readable without
/// fabricating identifiers.
pub fn go_interface_to_type(go_type: &GoType) -> Option<unlace_ir::types::Type> {
    let GoKind::Interface { methods, .. } = &go_type.kind else {
        return None;
    };
    let name = go_type.name.clone().unwrap_or_default();
    let mut converted = Vec::with_capacity(methods.len());
    for (i, _m) in methods.iter().enumerate() {
        // `imethod.name_off` is an offset into Go's name table; the full
        // name-table resolver lives in `go_moduledata`. Until that lands
        // we surface placeholder slot names so the printer still has
        // something meaningful to render. Real names overwrite these
        // when callers post-process the registry.
        converted.push(unlace_ir::types::InterfaceMethod {
            name: format!("m{i}"),
            signature: None,
        });
    }
    Some(unlace_ir::types::Type::Interface {
        name,
        methods: converted,
    })
}

/// Convert a decoded [`GoType`] of [`GoKind::Slice`] into the
/// composite [`unlace_ir::types::Type::Slice`] consumed by the C
/// printer (t191). Returns `None` for any other kind, or when the
/// resolver can't decode the element type.
///
/// `resolve_elem` is a caller-supplied closure that maps an element
/// VA to its already-recovered [`unlace_ir::types::Type`]. The
/// `populate_go_types_from_module` driver supplies a recursive
/// resolver that re-enters `parse_type_at` for nested shapes; tests
/// can supply a stub returning the element type directly.
pub fn go_slice_to_type(
    go_type: &GoType,
    resolve_elem: &mut dyn FnMut(u64) -> Option<unlace_ir::types::Type>,
) -> Option<unlace_ir::types::Type> {
    let GoKind::Slice { elem_va } = &go_type.kind else {
        return None;
    };
    let elem = resolve_elem(*elem_va)?;
    Some(unlace_ir::types::Type::Slice {
        elem: Box::new(elem),
    })
}

/// Convert a decoded [`GoType`] of [`GoKind::Map`] into the composite
/// [`unlace_ir::types::Type::Map`] consumed by the C printer (t191).
/// Returns `None` for any other kind, or when either of the key/value
/// types can't be resolved.
pub fn go_map_to_type(
    go_type: &GoType,
    resolve: &mut dyn FnMut(u64) -> Option<unlace_ir::types::Type>,
) -> Option<unlace_ir::types::Type> {
    let GoKind::Map { key_va, elem_va, .. } = &go_type.kind else {
        return None;
    };
    let key = resolve(*key_va)?;
    let value = resolve(*elem_va)?;
    Some(unlace_ir::types::Type::Map {
        key: Box::new(key),
        value: Box::new(value),
    })
}

/// Map a Go basic-kind type to its primitive [`unlace_ir::types::Type`]
/// rendering. Returns `None` for composite/unknown kinds — those need
/// the recursive resolver to follow `*_type` pointers.
fn basic_go_kind_to_type(go_type: &GoType) -> Option<unlace_ir::types::Type> {
    use unlace_ir::ssa::PrimitiveType;
    use unlace_ir::types::Type;
    let prim = match &go_type.kind {
        GoKind::Bool => PrimitiveType::Bool,
        GoKind::Int8 => PrimitiveType::Int(1),
        GoKind::Int16 => PrimitiveType::Int(2),
        GoKind::Int32 => PrimitiveType::Int(4),
        GoKind::Int64 | GoKind::Int | GoKind::Uintptr => PrimitiveType::Int(8),
        GoKind::Uint8 => PrimitiveType::UnsignedInt(1),
        GoKind::Uint16 => PrimitiveType::UnsignedInt(2),
        GoKind::Uint32 => PrimitiveType::UnsignedInt(4),
        GoKind::Uint64 | GoKind::Uint => PrimitiveType::UnsignedInt(8),
        GoKind::Float32 => PrimitiveType::Float,
        GoKind::Float64 => PrimitiveType::Double,
        // Strings, unsafe.Pointer, and complex numbers don't have a
        // direct primitive shape — render as `void *` so the recursive
        // resolver can still type-check downstream slices/maps.
        GoKind::String | GoKind::UnsafePointer | GoKind::Complex64 | GoKind::Complex128 => {
            PrimitiveType::Ptr
        }
        _ => return None,
    };
    Some(Type::Primitive(prim))
}

/// Recursively resolve a Go `_type` at `va` to the richest matching
/// [`unlace_ir::types::Type`]. Cycles are broken by a `seen` set so
/// pathological inputs (mutually recursive struct definitions) can't
/// loop the loader. Unreachable / undecodable shapes collapse to
/// `None` so the caller can skip them.
fn resolve_go_type_at(
    image_data: &[u8],
    sec_base: u64,
    va: u64,
    seen: &mut std::collections::BTreeSet<u64>,
) -> Option<unlace_ir::types::Type> {
    if va == 0 {
        return None;
    }
    if !seen.insert(va) {
        // Already resolving this VA — break the cycle with a `void *`
        // placeholder so the outer call still produces a usable type.
        return Some(unlace_ir::types::Type::void_ptr());
    }
    let sec_data_len = image_data.len() as u64;
    let va_to_offset = |a: u64| {
        if a >= sec_base && a < sec_base.saturating_add(sec_data_len) {
            Some((a - sec_base) as usize)
        } else {
            None
        }
    };
    let t = parse_type_at(image_data, va, va_to_offset)?;

    if let Some(prim) = basic_go_kind_to_type(&t) {
        seen.remove(&va);
        return Some(prim);
    }

    let result = match &t.kind {
        GoKind::Slice { elem_va } => {
            let elem = resolve_go_type_at(image_data, sec_base, *elem_va, seen)
                .unwrap_or_else(unlace_ir::types::Type::void_ptr);
            Some(unlace_ir::types::Type::Slice {
                elem: Box::new(elem),
            })
        }
        GoKind::Map { key_va, elem_va, .. } => {
            let key = resolve_go_type_at(image_data, sec_base, *key_va, seen)
                .unwrap_or_else(unlace_ir::types::Type::void_ptr);
            let value = resolve_go_type_at(image_data, sec_base, *elem_va, seen)
                .unwrap_or_else(unlace_ir::types::Type::void_ptr);
            Some(unlace_ir::types::Type::Map {
                key: Box::new(key),
                value: Box::new(value),
            })
        }
        GoKind::Interface { .. } => go_interface_to_type(&t),
        // Pointer / array / struct / func / chan resolution is out of
        // scope for t191 — surface them as opaque `void *` so a
        // map/slice that references them still registers cleanly.
        _ => Some(unlace_ir::types::Type::void_ptr()),
    };
    seen.remove(&va);
    result
}

/// Walk every offset in `image.go_module.typelinks`, decode the pointed-to
/// `_type`, and register each interface / slice / map hit in
/// `image.go_types` keyed by its absolute VA (t181 / t191).
///
/// No-op when the binary isn't Go (no `go_module`) or when `types_va` is
/// unreachable. Kinds outside the interface / slice / map set are
/// skipped — this map is the printer's recovered-Go-type registry,
/// not a general type registry.
pub fn populate_go_types_from_module(image: &mut crate::image::BinaryImage) {
    let Some(module) = image.go_module.as_ref() else {
        return;
    };
    let types_va = module.types_va;
    let typelinks = module.typelinks.clone();
    for off in typelinks {
        // typelinks entries are signed i32 offsets relative to types_va.
        let va = if off >= 0 {
            types_va.wrapping_add(off as u64)
        } else {
            types_va.wrapping_sub((-(off as i64)) as u64)
        };
        let Some((sec, _)) = image_va_to_section(image, va) else {
            continue;
        };
        let sec_base = sec.vaddr;
        let sec_data = sec.data.clone();
        let Some(t) = parse_type_at(&sec_data, va, |a: u64| {
            if a >= sec_base && a < sec_base.saturating_add(sec_data.len() as u64) {
                Some((a - sec_base) as usize)
            } else {
                None
            }
        }) else {
            continue;
        };
        match &t.kind {
            GoKind::Interface { .. } => {
                if let Some(iface_ty) = go_interface_to_type(&t) {
                    image.go_types.insert(va, iface_ty);
                }
            }
            GoKind::Slice { .. } | GoKind::Map { .. } => {
                let mut seen = std::collections::BTreeSet::new();
                seen.insert(va);
                let mut resolve = |a: u64| {
                    resolve_go_type_at(&sec_data, sec_base, a, &mut seen)
                };
                let recovered = match &t.kind {
                    GoKind::Slice { .. } => go_slice_to_type(&t, &mut resolve),
                    GoKind::Map { .. } => go_map_to_type(&t, &mut resolve),
                    _ => unreachable!(),
                };
                if let Some(ty) = recovered {
                    image.go_types.insert(va, ty);
                }
            }
            _ => {}
        }
    }
}

/// Look up the method count of a Go interface `_type` at `va`. Returns
/// `None` if the type isn't reachable, isn't kind=Interface, or its tail
/// can't be decoded.
fn resolve_inter_method_count(
    image: &crate::image::BinaryImage,
    va: u64,
) -> Option<usize> {
    if va == 0 {
        return None;
    }
    let (sec, _off) = image_va_to_section(image, va)?;
    let sec_base = sec.vaddr;
    let sec_data = sec.data.clone();
    let t = parse_type_at(&sec_data, va, |a: u64| {
        if a >= sec_base && a < sec_base.saturating_add(sec_data.len() as u64) {
            Some((a - sec_base) as usize)
        } else {
            None
        }
    })?;
    match t.kind {
        GoKind::Interface { method_count, .. } => Some(method_count),
        _ => None,
    }
}

/// Decode `interfacetype.mhdr` — `n` × `imethod { nameOff i32; ityp i32 }`
/// (8 bytes each). Returns an empty vec when the slice's data pointer is
/// out-of-image; per-entry truncation breaks early but keeps anything
/// already decoded.
fn parse_imethods(
    image_data: &[u8],
    methods_va: u64,
    methods_len: usize,
    va_to_offset: &impl Fn(u64) -> Option<usize>,
) -> Vec<GoIMethod> {
    let mut out = Vec::with_capacity(methods_len);
    if methods_len == 0 {
        return out;
    }
    let Some(base) = va_to_offset(methods_va) else {
        return out;
    };
    for i in 0..methods_len {
        let m_off = base + i * 8;
        let Some(name_off) = read_i32(image_data, m_off) else {
            break;
        };
        let Some(typ_off) = read_i32(image_data, m_off + 4) else {
            break;
        };
        out.push(GoIMethod { name_off, typ_off });
    }
    out
}

fn parse_struct_fields(
    image_data: &[u8],
    fields_va: u64,
    fields_len: usize,
    va_to_offset: &impl Fn(u64) -> Option<usize>,
) -> Vec<GoStructField> {
    let mut out = Vec::with_capacity(fields_len);
    let Some(base) = va_to_offset(fields_va) else {
        return out;
    };
    for i in 0..fields_len {
        let f_off = base + i * 24;
        let Some(name_ptr) = read_u64(image_data, f_off) else {
            break;
        };
        let Some(typ_va) = read_u64(image_data, f_off + 8) else {
            break;
        };
        let Some(offset) = read_u64(image_data, f_off + 16) else {
            break;
        };
        let name = va_to_offset(name_ptr)
            .and_then(|o| decode_name(image_data, o))
            .unwrap_or_default();
        out.push(GoStructField {
            name,
            typ_va,
            offset,
        });
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn write_head(buf: &mut Vec<u8>, size: u64, kind: u8) {
        buf.extend_from_slice(&size.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes()); // ptrdata
        buf.extend_from_slice(&0u32.to_le_bytes()); // hash
        buf.push(0); // tflag
        buf.push(0); // align
        buf.push(0); // fieldAlign
        buf.push(kind);
        buf.extend_from_slice(&0u64.to_le_bytes()); // equal
        buf.extend_from_slice(&0u64.to_le_bytes()); // gcdata
        buf.extend_from_slice(&0i32.to_le_bytes()); // str
        buf.extend_from_slice(&0i32.to_le_bytes()); // ptrToThis
    }

    /// Trivial 1:1 identity mapping: VA == offset.
    fn ident(va: u64) -> Option<usize> {
        Some(va as usize)
    }

    #[test]
    fn parse_basic_int_head() {
        let mut buf = Vec::new();
        write_head(&mut buf, 8, 2);
        let t = parse_type_at(&buf, 0, ident).expect("decode");
        assert_eq!(t.size, 8);
        assert!(matches!(t.kind, GoKind::Int));
    }

    #[test]
    fn parse_basic_string_head() {
        let mut buf = Vec::new();
        write_head(&mut buf, 16, 24);
        let t = parse_type_at(&buf, 0, ident).expect("decode");
        assert_eq!(t.size, 16);
        assert!(matches!(t.kind, GoKind::String));
    }

    #[test]
    fn parse_ptr_type() {
        let mut buf = Vec::new();
        write_head(&mut buf, 8, 22);
        buf.extend_from_slice(&0xDEAD_BEEFu64.to_le_bytes());
        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Ptr { elem_va } => assert_eq!(elem_va, 0xDEAD_BEEF),
            other => panic!("expected Ptr, got {other:?}"),
        }
    }

    #[test]
    fn parse_slice_type() {
        let mut buf = Vec::new();
        write_head(&mut buf, 24, 23);
        buf.extend_from_slice(&0x1234_5678u64.to_le_bytes());
        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Slice { elem_va } => assert_eq!(elem_va, 0x1234_5678),
            other => panic!("expected Slice, got {other:?}"),
        }
    }

    #[test]
    fn parse_array_of_int() {
        let mut buf = Vec::new();
        write_head(&mut buf, 80, 17);
        buf.extend_from_slice(&0xAAAAu64.to_le_bytes()); // elem
        buf.extend_from_slice(&0xBBBBu64.to_le_bytes()); // slice ptr
        buf.extend_from_slice(&10u64.to_le_bytes()); // len
        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Array { elem_va, len, .. } => {
                assert_eq!(elem_va, 0xAAAA);
                assert_eq!(len, 10);
            }
            other => panic!("expected Array, got {other:?}"),
        }
    }

    #[test]
    fn parse_struct_two_fields() {
        // Layout plan:
        //   0x000: _type head (struct kind = 25)
        //   0x030: tail — pkgPath name ptr (8), fields slice (ptr=0x100, len=2, cap=2)
        //   0x100: field[0] (24): name ptr=0x200, typ=0x500, offset=0
        //   0x118: field[1] (24): name ptr=0x210, typ=0x510, offset=8
        //   0x200: encoded name "x" (flag, varint 1, 'x')
        //   0x210: encoded name "y"
        let mut buf = vec![0u8; 0x400];

        let mut head = Vec::new();
        write_head(&mut head, 16, 25);
        buf[0..head.len()].copy_from_slice(&head);

        // tail: pkgPath ptr (0) then fields slice
        let tail = 0x30;
        buf[tail..tail + 8].copy_from_slice(&0u64.to_le_bytes());
        buf[tail + 8..tail + 16].copy_from_slice(&0x100u64.to_le_bytes());
        buf[tail + 16..tail + 24].copy_from_slice(&2u64.to_le_bytes());
        buf[tail + 24..tail + 32].copy_from_slice(&2u64.to_le_bytes());

        // field[0]
        buf[0x100..0x108].copy_from_slice(&0x200u64.to_le_bytes());
        buf[0x108..0x110].copy_from_slice(&0x500u64.to_le_bytes());
        buf[0x110..0x118].copy_from_slice(&0u64.to_le_bytes());
        // field[1]
        buf[0x118..0x120].copy_from_slice(&0x210u64.to_le_bytes());
        buf[0x120..0x128].copy_from_slice(&0x510u64.to_le_bytes());
        buf[0x128..0x130].copy_from_slice(&8u64.to_le_bytes());

        // names: flag=0, len=1, byte
        buf[0x200] = 0;
        buf[0x201] = 1;
        buf[0x202] = b'x';
        buf[0x210] = 0;
        buf[0x211] = 1;
        buf[0x212] = b'y';

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Struct { fields, .. } => {
                assert_eq!(fields.len(), 2);
                assert_eq!(fields[0].name, "x");
                assert_eq!(fields[0].typ_va, 0x500);
                assert_eq!(fields[0].offset, 0);
                assert_eq!(fields[1].name, "y");
                assert_eq!(fields[1].typ_va, 0x510);
                assert_eq!(fields[1].offset, 8);
            }
            other => panic!("expected Struct, got {other:?}"),
        }
    }

    // -------------------------------------------------------------------
    // t171: full per-kind layout decode tests (one per kind).
    //
    // Each test asserts that the tail-specific fields demanded by the task
    // round-trip through `parse_type_at`. Synthetic byte fixtures with the
    // identity VA-mapping; pointer payloads use distinctive cookies so
    // mis-assigned offsets fail loudly.
    // -------------------------------------------------------------------

    /// Kind 17 — `arraytype { _type; elem *type; slice *type; len uintptr }`.
    /// Verifies that `slice_va` (which the previous decoder threw away) is
    /// preserved alongside `elem_va` and `len`.
    #[test]
    fn t171_kind_array_decodes_slice_ptr_and_len() {
        let mut buf = Vec::new();
        write_head(&mut buf, 80, 17);
        buf.extend_from_slice(&0x1111_AAAAu64.to_le_bytes()); // elem
        buf.extend_from_slice(&0x2222_BBBBu64.to_le_bytes()); // slice ptr
        buf.extend_from_slice(&7u64.to_le_bytes()); // len

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Array {
                elem_va,
                slice_va,
                len,
            } => {
                assert_eq!(elem_va, 0x1111_AAAA);
                assert_eq!(slice_va, 0x2222_BBBB);
                assert_eq!(len, 7);
            }
            other => panic!("expected Array, got {other:?}"),
        }
    }

    /// Kind 18 — `chantype { _type; elem *type; dir uintptr }`.
    /// `dir` is one of {1=recv, 2=send, 3=both}; the decoder must downcast
    /// the uintptr to u32 without sign-extending or losing bits.
    #[test]
    fn t171_kind_chan_decodes_elem_and_dir() {
        let mut buf = Vec::new();
        write_head(&mut buf, 8, 18);
        buf.extend_from_slice(&0xCAFE_F00Du64.to_le_bytes()); // elem
        buf.extend_from_slice(&3u64.to_le_bytes()); // dir = chanDir(SendDir|RecvDir)

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Chan { elem_va, dir } => {
                assert_eq!(elem_va, 0xCAFE_F00D);
                assert_eq!(dir, 3);
            }
            other => panic!("expected Chan, got {other:?}"),
        }
    }

    /// Kind 19 — `functype { _type; inCount u16; outCount u16 }` plus the
    /// trailing `[in + out]*_type` array. The high bit of `outCount` flags
    /// variadic; the decoder must split it out and decode every pointer in
    /// the trailing array.
    #[test]
    fn t171_kind_func_decodes_io_arrays_and_variadic_flag() {
        let mut buf = Vec::new();
        write_head(&mut buf, 8, 19);
        // in_count = 2, out_count = 1 with variadic bit set ⇒ raw = 0x8001
        buf.extend_from_slice(&2u16.to_le_bytes());
        buf.extend_from_slice(&0x8001u16.to_le_bytes());
        // 4 bytes pad to 8-byte align the type pointer array
        buf.extend_from_slice(&0u32.to_le_bytes());
        // [in0, in1, out0]
        buf.extend_from_slice(&0xAAAA_0001u64.to_le_bytes());
        buf.extend_from_slice(&0xAAAA_0002u64.to_le_bytes());
        buf.extend_from_slice(&0xBBBB_0001u64.to_le_bytes());

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Func {
                in_count,
                out_count,
                variadic,
                in_types,
                out_types,
            } => {
                assert_eq!(in_count, 2);
                assert_eq!(out_count, 1);
                assert!(variadic, "high bit of outCount must set variadic=true");
                assert_eq!(in_types, vec![0xAAAA_0001, 0xAAAA_0002]);
                assert_eq!(out_types, vec![0xBBBB_0001]);
            }
            other => panic!("expected Func, got {other:?}"),
        }
    }

    /// Kind 20 — `interfacetype { _type; pkgpath name; mhdr []imethod }`.
    /// Each `imethod` is two i32 offsets (8 bytes). The decoder must
    /// surface both the pkgpath VA and an actual list of `GoIMethod`s
    /// rather than a bare count.
    #[test]
    fn t171_kind_interface_decodes_pkgpath_and_imethods() {
        let mut buf = vec![0u8; 0x200];
        let mut head = Vec::new();
        write_head(&mut head, 16, 20);
        buf[..head.len()].copy_from_slice(&head);

        let tail = TYPE_HEAD_SIZE;
        // pkgpath name *byte
        buf[tail..tail + 8].copy_from_slice(&0x77AAu64.to_le_bytes());
        // mhdr: ptr=0x100, len=2, cap=2
        buf[tail + 8..tail + 16].copy_from_slice(&0x100u64.to_le_bytes());
        buf[tail + 16..tail + 24].copy_from_slice(&2u64.to_le_bytes());
        buf[tail + 24..tail + 32].copy_from_slice(&2u64.to_le_bytes());

        // imethod[0] { nameOff = 0x11, typOff = 0x22 }
        buf[0x100..0x104].copy_from_slice(&0x11i32.to_le_bytes());
        buf[0x104..0x108].copy_from_slice(&0x22i32.to_le_bytes());
        // imethod[1] { nameOff = 0x33, typOff = 0x44 }
        buf[0x108..0x10C].copy_from_slice(&0x33i32.to_le_bytes());
        buf[0x10C..0x110].copy_from_slice(&0x44i32.to_le_bytes());

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Interface {
                pkgpath_va,
                method_count,
                methods,
            } => {
                assert_eq!(pkgpath_va, 0x77AA);
                assert_eq!(method_count, 2);
                assert_eq!(methods.len(), 2);
                assert_eq!(methods[0], GoIMethod { name_off: 0x11, typ_off: 0x22 });
                assert_eq!(methods[1], GoIMethod { name_off: 0x33, typ_off: 0x44 });
            }
            other => panic!("expected Interface, got {other:?}"),
        }
    }

    // ---------------------------------------------------------------
    // t181 — `go_interface_to_type` + `populate_go_types_from_module`
    // integration. Three coverage shapes (empty / two-method / embedded
    // first level) verify the conversion surfaces something the printer
    // can render in every realistic input shape.
    // ---------------------------------------------------------------

    /// t181 — empty `interface {}` (zero methods) round-trips through
    /// `go_interface_to_type` as a `Type::Interface` with an empty method
    /// list. The printer renders this as `interface {}` (no inner block).
    #[test]
    fn t181_go_interface_to_type_empty() {
        let go_type = GoType {
            va: 0x1000,
            size: 16,
            kind: GoKind::Interface {
                pkgpath_va: 0,
                method_count: 0,
                methods: vec![],
            },
            name: Some("io.Empty".into()),
        };
        let converted = go_interface_to_type(&go_type).expect("converts");
        match &converted {
            unlace_ir::types::Type::Interface { name, methods } => {
                assert_eq!(name, "io.Empty");
                assert!(methods.is_empty());
            }
            other => panic!("expected Type::Interface, got {other:?}"),
        }
        assert_eq!(
            converted.render_go_interface().as_deref(),
            Some("interface {}"),
        );
    }

    /// t181 — a two-method interface (the canonical `io.ReadWriter`
    /// shape). The converted method list has one entry per `GoIMethod`
    /// slot — names default to `m0`/`m1` until the runtime name table
    /// is wired in (out of scope for t181).
    #[test]
    fn t181_go_interface_to_type_two_methods() {
        let go_type = GoType {
            va: 0x2000,
            size: 16,
            kind: GoKind::Interface {
                pkgpath_va: 0,
                method_count: 2,
                methods: vec![
                    GoIMethod { name_off: 0x10, typ_off: 0x20 },
                    GoIMethod { name_off: 0x30, typ_off: 0x40 },
                ],
            },
            name: Some("io.ReadWriter".into()),
        };
        let converted = go_interface_to_type(&go_type).expect("converts");
        let unlace_ir::types::Type::Interface { name, methods } = &converted else {
            panic!("expected Type::Interface");
        };
        assert_eq!(name, "io.ReadWriter");
        assert_eq!(methods.len(), 2);
        assert_eq!(methods[0].name, "m0");
        assert_eq!(methods[1].name, "m1");
        assert_eq!(
            converted.render_go_interface().as_deref(),
            Some("interface { m0(); m1() }"),
        );
    }

    /// t181 — first-level embedded interface. Go source-level
    /// `interface { Reader; Close() }` lowers to a single `mhdr` slice
    /// whose first entry's `typ_off` references another `interfacetype`.
    /// The conversion preserves the slot count (no flattening at the
    /// IR level — embedding is a printer-side concern for t181).
    #[test]
    fn t181_go_interface_to_type_embedded_first_level() {
        // Two slots: one stands for the embedded `Reader` interface,
        // one for the directly-declared `Close()` method. The decoder
        // doesn't distinguish embedded from direct at this layer; both
        // are `GoIMethod` slots. The conversion surface must show both.
        let go_type = GoType {
            va: 0x3000,
            size: 16,
            kind: GoKind::Interface {
                pkgpath_va: 0,
                method_count: 2,
                methods: vec![
                    // Slot 0: embedded `Reader` — typ_off points at
                    // another interfacetype.
                    GoIMethod { name_off: 0x50, typ_off: 0x80 },
                    // Slot 1: directly-declared `Close()`.
                    GoIMethod { name_off: 0x60, typ_off: 0x00 },
                ],
            },
            name: Some("io.ReadCloser".into()),
        };
        let converted = go_interface_to_type(&go_type).expect("converts");
        let unlace_ir::types::Type::Interface { name, methods } = &converted else {
            panic!("expected Type::Interface");
        };
        assert_eq!(name, "io.ReadCloser");
        // First-level: both the embedded interface's slot and the
        // direct method's slot are surfaced as separate entries.
        assert_eq!(methods.len(), 2);
        assert_eq!(
            converted.render_go_interface().as_deref(),
            Some("interface { m0(); m1() }"),
        );
    }

    /// Non-interface kinds return `None` from `go_interface_to_type` so
    /// callers can drive the registry insertion with a simple
    /// `if let Some(t) = …` — guards the type-registry path against
    /// accidentally registering non-interface types as interfaces.
    #[test]
    fn t181_go_interface_to_type_rejects_non_interface() {
        let go_type = GoType {
            va: 0x4000,
            size: 4,
            kind: GoKind::Int32,
            name: None,
        };
        assert!(go_interface_to_type(&go_type).is_none());
    }

    /// Kind 21 — `maptype` carries layout metadata that the bucket walker
    /// needs (keysize, valuesize, bucketsize, flags). Pre-t171 the decoder
    /// only captured the three type pointers and dropped everything else.
    #[test]
    fn t171_kind_map_decodes_layout_metadata() {
        let mut buf = Vec::new();
        write_head(&mut buf, 8, 21);
        buf.extend_from_slice(&0x1u64.to_le_bytes()); // key
        buf.extend_from_slice(&0x2u64.to_le_bytes()); // elem
        buf.extend_from_slice(&0x3u64.to_le_bytes()); // bucket
        buf.extend_from_slice(&0x4u64.to_le_bytes()); // hasher
        buf.push(8); // key_size
        buf.push(16); // value_size
        buf.extend_from_slice(&144u16.to_le_bytes()); // bucket_size
        buf.extend_from_slice(&0xDEAD_BEEFu32.to_le_bytes()); // flags

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Map {
                key_va,
                elem_va,
                bucket_va,
                hasher_va,
                key_size,
                value_size,
                bucket_size,
                flags,
            } => {
                assert_eq!(key_va, 1);
                assert_eq!(elem_va, 2);
                assert_eq!(bucket_va, 3);
                assert_eq!(hasher_va, 4);
                assert_eq!(key_size, 8);
                assert_eq!(value_size, 16);
                assert_eq!(bucket_size, 144);
                assert_eq!(flags, 0xDEAD_BEEF);
            }
            other => panic!("expected Map, got {other:?}"),
        }
    }

    /// Kind 23 — `slicetype` is the minimal kind: just one elem pointer.
    /// Sanity-check that the elem VA round-trips and the variant matches.
    #[test]
    fn t171_kind_slice_decodes_elem_ptr() {
        let mut buf = Vec::new();
        write_head(&mut buf, 24, 23);
        buf.extend_from_slice(&0x7FFE_DCBAu64.to_le_bytes());

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Slice { elem_va } => assert_eq!(elem_va, 0x7FFE_DCBA),
            other => panic!("expected Slice, got {other:?}"),
        }
    }

    /// Kind 25 — `structtype { _type; pkgpath name; fields []structfield }`.
    /// In addition to the existing two-field round-trip, t171 surfaces the
    /// `pkgpath_va` so downstream resolvers can name-qualify struct types.
    #[test]
    fn t171_kind_struct_decodes_pkgpath_and_field_offset_embed() {
        let mut buf = vec![0u8; 0x400];

        let mut head = Vec::new();
        write_head(&mut head, 24, 25);
        buf[..head.len()].copy_from_slice(&head);

        let tail = TYPE_HEAD_SIZE;
        // pkgpath name *byte
        buf[tail..tail + 8].copy_from_slice(&0x9000u64.to_le_bytes());
        // fields: ptr=0x100, len=1, cap=1
        buf[tail + 8..tail + 16].copy_from_slice(&0x100u64.to_le_bytes());
        buf[tail + 16..tail + 24].copy_from_slice(&1u64.to_le_bytes());
        buf[tail + 24..tail + 32].copy_from_slice(&1u64.to_le_bytes());

        // structfield[0]: name=0x200 → "z", typ=0x600, offsetEmbed=0x21
        // (offsetEmbed encodes embed-flag in bit 0; the decoder surfaces
        // the raw uintptr — masking is the caller's job.)
        buf[0x100..0x108].copy_from_slice(&0x200u64.to_le_bytes());
        buf[0x108..0x110].copy_from_slice(&0x600u64.to_le_bytes());
        buf[0x110..0x118].copy_from_slice(&0x21u64.to_le_bytes());

        // name "z"
        buf[0x200] = 0;
        buf[0x201] = 1;
        buf[0x202] = b'z';

        let t = parse_type_at(&buf, 0, ident).expect("decode");
        match t.kind {
            GoKind::Struct {
                pkgpath_va,
                fields,
            } => {
                assert_eq!(pkgpath_va, 0x9000);
                assert_eq!(fields.len(), 1);
                assert_eq!(fields[0].name, "z");
                assert_eq!(fields[0].typ_va, 0x600);
                assert_eq!(fields[0].offset, 0x21);
            }
            other => panic!("expected Struct, got {other:?}"),
        }
    }

    // -------------------------------------------------------------------
    // t137: runtime.itab decoder tests
    // -------------------------------------------------------------------

    #[test]
    fn parse_itab_decodes_header() {
        // Header only (method_count = 0): inter ptr, concrete ptr, hash, pad.
        let mut buf = vec![0u8; ITAB_HEADER_SIZE];
        buf[0..8].copy_from_slice(&0xAAAA_AAAAu64.to_le_bytes());
        buf[8..16].copy_from_slice(&0xBBBB_BBBBu64.to_le_bytes());
        buf[16..20].copy_from_slice(&0xDEAD_BEEFu32.to_le_bytes());

        let itab = parse_itab(&buf, 0, ident, 0).expect("decode");
        assert_eq!(itab.va, 0);
        assert_eq!(itab.inter_type_va, 0xAAAA_AAAA);
        assert_eq!(itab.concrete_type_va, 0xBBBB_BBBB);
        assert_eq!(itab.hash, 0xDEAD_BEEF);
        assert!(itab.methods.is_empty());
    }

    #[test]
    fn parse_itab_with_two_methods() {
        // Header + two function pointers = 24 + 16 = 40 bytes.
        let mut buf = vec![0u8; ITAB_HEADER_SIZE + 16];
        buf[0..8].copy_from_slice(&0x1u64.to_le_bytes());
        buf[8..16].copy_from_slice(&0x2u64.to_le_bytes());
        buf[16..20].copy_from_slice(&0x1234u32.to_le_bytes());
        buf[ITAB_HEADER_SIZE..ITAB_HEADER_SIZE + 8]
            .copy_from_slice(&0x4010_0000u64.to_le_bytes());
        buf[ITAB_HEADER_SIZE + 8..ITAB_HEADER_SIZE + 16]
            .copy_from_slice(&0x4010_1000u64.to_le_bytes());

        let itab = parse_itab(&buf, 0, ident, 2).expect("decode");
        assert_eq!(itab.methods.len(), 2);
        assert_eq!(itab.methods[0], 0x4010_0000);
        assert_eq!(itab.methods[1], 0x4010_1000);
    }

    #[test]
    fn parse_itab_at_resolves_va_to_section() {
        use crate::image::{
            ArchId, BinaryImage, Endian, Section, SectionFlags,
        };
        use std::collections::BTreeMap;

        const RODATA_BASE: u64 = 0x4010_0000;
        let mut rodata = vec![0u8; 0x200];
        // itab header at offset 0x00 of .rodata:
        rodata[0..8].copy_from_slice(&0xAAAA_AAAAu64.to_le_bytes());
        rodata[8..16].copy_from_slice(&0xBBBB_BBBBu64.to_le_bytes());
        rodata[16..20].copy_from_slice(&0xCAFE_BABEu32.to_le_bytes());
        // No methods needed — interface type at 0xAAAA_AAAA is unresolvable,
        // so the walk falls back to the 16-method cap reading zeros.

        let img = BinaryImage {
            arch: ArchId::X86_64,
            endian: Endian::Little,
            entry: 0,
            sections: vec![Section {
                name: ".rodata".to_string(),
                vaddr: RODATA_BASE,
                size: rodata.len() as u64,
                data: rodata,
                flags: SectionFlags::READ,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
        };

        let itab = parse_itab_at(&img, RODATA_BASE).expect("itab decodes");
        assert_eq!(itab.va, RODATA_BASE);
        assert_eq!(itab.inter_type_va, 0xAAAA_AAAA);
        assert_eq!(itab.concrete_type_va, 0xBBBB_BBBB);
        assert_eq!(itab.hash, 0xCAFE_BABE);

        // VA outside any mapped section returns None.
        assert!(parse_itab_at(&img, 0xDEAD_BEEF).is_none());
    }

    // ---------------------------------------------------------------
    // t191 — `go_slice_to_type` / `go_map_to_type` registration.
    //
    // Each test stubs a resolver closure so the helpers don't need a
    // full `BinaryImage` to verify the conversion contract; one end-
    // to-end test then drives the populate path through a hand-rolled
    // typelinks blob.
    // ---------------------------------------------------------------

    /// t191 — `[]int` (slice of 32-bit int) lifts to `Type::Slice` whose
    /// element is the matching primitive. Verifies the registry key is
    /// the slice's own VA — element types live independently.
    #[test]
    fn t191_go_slice_of_int_registered() {
        use unlace_ir::ssa::PrimitiveType;
        use unlace_ir::types::Type;
        let go_type = GoType {
            va: 0x5000,
            size: 24,
            kind: GoKind::Slice { elem_va: 0x6000 },
            name: Some("[]int".into()),
        };
        // Resolver stub: any non-zero VA → int32 primitive.
        let mut resolve = |va: u64| {
            assert_eq!(va, 0x6000, "resolver should be called with elem_va");
            Some(Type::Primitive(PrimitiveType::Int(4)))
        };
        let ty = go_slice_to_type(&go_type, &mut resolve).expect("slice converts");
        match &ty {
            Type::Slice { elem } => {
                assert_eq!(**elem, Type::Primitive(PrimitiveType::Int(4)));
            }
            other => panic!("expected Type::Slice, got {other:?}"),
        }
        // The slice itself renders as `[]__int32`.
        assert_eq!(ty.to_string(), "[]__int32");
    }

    /// t191 — `map[string]int` lifts to `Type::Map` with both K and V
    /// resolved through the supplied closure. String maps to `void *`
    /// since Go strings don't have a single C-primitive shape.
    #[test]
    fn t191_go_map_string_int_registered() {
        use unlace_ir::ssa::PrimitiveType;
        use unlace_ir::types::Type;
        let go_type = GoType {
            va: 0x7000,
            size: 8,
            kind: GoKind::Map {
                key_va: 0x7100,
                elem_va: 0x7200,
                bucket_va: 0,
                hasher_va: 0,
                key_size: 16,
                value_size: 8,
                bucket_size: 0,
                flags: 0,
            },
            name: Some("map[string]int".into()),
        };
        let mut resolve = |va: u64| match va {
            0x7100 => Some(Type::Primitive(PrimitiveType::Ptr)),
            0x7200 => Some(Type::Primitive(PrimitiveType::Int(4))),
            _ => None,
        };
        let ty = go_map_to_type(&go_type, &mut resolve).expect("map converts");
        match &ty {
            Type::Map { key, value } => {
                assert_eq!(**key, Type::Primitive(PrimitiveType::Ptr));
                assert_eq!(**value, Type::Primitive(PrimitiveType::Int(4)));
            }
            other => panic!("expected Type::Map, got {other:?}"),
        }
        assert_eq!(ty.to_string(), "map[void *]__int32");
    }

    /// t191 — map of `S → []int` (struct keys, slice values). Verifies
    /// that the resolver may return composite shapes (here a slice)
    /// without breaking the outer map conversion.
    #[test]
    fn t191_go_map_struct_to_slice() {
        use unlace_ir::ssa::PrimitiveType;
        use unlace_ir::types::{StructFieldType, Type};
        let go_type = GoType {
            va: 0x8000,
            size: 8,
            kind: GoKind::Map {
                key_va: 0x8100,
                elem_va: 0x8200,
                bucket_va: 0,
                hasher_va: 0,
                key_size: 8,
                value_size: 24,
                bucket_size: 0,
                flags: 0,
            },
            name: Some("map[S][]int".into()),
        };
        let key_struct = Type::Struct {
            name: "S".into(),
            fields: vec![StructFieldType {
                name: "x".into(),
                ty: Type::int(4),
                offset: 0,
            }],
        };
        let value_slice = Type::Slice {
            elem: Box::new(Type::Primitive(PrimitiveType::Int(4))),
        };
        let mut resolve = |va: u64| match va {
            0x8100 => Some(key_struct.clone()),
            0x8200 => Some(value_slice.clone()),
            _ => None,
        };
        let ty = go_map_to_type(&go_type, &mut resolve).expect("map converts");
        match &ty {
            Type::Map { key, value } => {
                assert!(matches!(&**key, Type::Struct { name, .. } if name == "S"));
                assert!(matches!(&**value, Type::Slice { .. }));
            }
            other => panic!("expected Type::Map, got {other:?}"),
        }
        assert_eq!(ty.to_string(), "map[struct S][]__int32");
    }

    /// t191 — nested `map[int]map[int8]int32` round-trips through
    /// `populate_go_types_from_module`. Builds a synthetic rodata blob
    /// containing two `_type` headers (outer map at offset 0, inner at
    /// `INNER_OFF`) plus the primitive headers they reference, then
    /// drives the full populate path and checks the resulting
    /// `Type::Map`'s nested rendering.
    #[test]
    fn t191_populate_nested_map_via_typelinks() {
        use std::collections::BTreeMap;
        use unlace_ir::ssa::PrimitiveType;
        use unlace_ir::types::Type;
        use unlace_ir::ArchId;
        use crate::Endian;
        use crate::go_moduledata::GoModuleInfo;
        use crate::image::{BinaryImage, Section, SectionFlags};

        // Layout inside a single .rodata section based at RODATA_BASE.
        // The offsets are chosen so each `_type` header (48 bytes) plus
        // its tail fits before the next one starts.
        const RODATA_BASE: u64 = 0x10000;
        const OUTER_MAP_OFF: u64 = 0x000;
        const INNER_MAP_OFF: u64 = 0x100;
        const INT32_OFF: u64 = 0x200;
        const INT8_OFF: u64 = 0x280;

        let outer_map_va = RODATA_BASE + OUTER_MAP_OFF;
        let inner_map_va = RODATA_BASE + INNER_MAP_OFF;
        let int32_va = RODATA_BASE + INT32_OFF;
        let int8_va = RODATA_BASE + INT8_OFF;

        let mut rodata = vec![0u8; 0x400];

        // Helper to splice a `_type` head at a given offset.
        let write_head_at = |buf: &mut [u8], off: usize, size: u64, kind: u8| {
            buf[off..off + 8].copy_from_slice(&size.to_le_bytes()); // size
            // ptrdata, hash, tflag/align/fieldAlign, kind, equal,
            // gcdata, str, ptrToThis — all zero except `kind` at +23.
            buf[off + 23] = kind;
        };

        // int32 (kind=5), int8 (kind=3) primitive headers.
        write_head_at(&mut rodata, INT32_OFF as usize, 4, 5);
        write_head_at(&mut rodata, INT8_OFF as usize, 1, 3);

        // Inner map: map[int8]int32 (kind=21).
        write_head_at(&mut rodata, INNER_MAP_OFF as usize, 8, 21);
        let inner_tail = INNER_MAP_OFF as usize + TYPE_HEAD_SIZE;
        rodata[inner_tail..inner_tail + 8].copy_from_slice(&int8_va.to_le_bytes());
        rodata[inner_tail + 8..inner_tail + 16].copy_from_slice(&int32_va.to_le_bytes());
        // bucket_va, hasher_va: zero. key_size/value_size/bucket_size/flags: zero.

        // Outer map: map[int32]<inner-map> (kind=21).
        write_head_at(&mut rodata, OUTER_MAP_OFF as usize, 8, 21);
        let outer_tail = OUTER_MAP_OFF as usize + TYPE_HEAD_SIZE;
        rodata[outer_tail..outer_tail + 8].copy_from_slice(&int32_va.to_le_bytes());
        rodata[outer_tail + 8..outer_tail + 16].copy_from_slice(&inner_map_va.to_le_bytes());

        let mut img = BinaryImage {
            arch: ArchId::X86_64,
            endian: Endian::Little,
            entry: 0,
            sections: vec![Section {
                name: ".rodata".into(),
                vaddr: RODATA_BASE,
                size: rodata.len() as u64,
                data: rodata,
                flags: SectionFlags::READ,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: Some(GoModuleInfo {
                types_va: RODATA_BASE,
                etypes_va: RODATA_BASE + 0x400,
                typelinks: vec![
                    OUTER_MAP_OFF as i32,
                    INNER_MAP_OFF as i32,
                ],
                ..GoModuleInfo::default()
            }),
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
        };

        populate_go_types_from_module(&mut img);

        // Outer map: map[int32]map[int8]int32.
        let outer = img
            .go_types
            .get(&outer_map_va)
            .expect("outer map registered");
        match outer {
            Type::Map { key, value } => {
                assert_eq!(**key, Type::Primitive(PrimitiveType::Int(4)));
                match &**value {
                    Type::Map {
                        key: ik,
                        value: iv,
                    } => {
                        assert_eq!(**ik, Type::Primitive(PrimitiveType::Int(1)));
                        assert_eq!(**iv, Type::Primitive(PrimitiveType::Int(4)));
                    }
                    other => panic!("expected nested Type::Map, got {other:?}"),
                }
            }
            other => panic!("expected Type::Map at outer VA, got {other:?}"),
        }
        assert_eq!(outer.to_string(), "map[__int32]map[__int8]__int32");

        // Inner map should also be independently registered.
        assert!(img.go_types.contains_key(&inner_map_va));
    }
}
