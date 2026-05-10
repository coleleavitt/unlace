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
    Ptr { elem_va: u64 },
    Slice { elem_va: u64 },
    Array { elem_va: u64, len: u64 },
    Struct { fields: Vec<GoStructField> },
    Map { key_va: u64, elem_va: u64, bucket_va: u64 },
    Interface { method_count: usize },
    Chan { elem_va: u64, dir: u32 },
    Func { in_count: u16, out_count: u16 },
    Other(u8),
}

#[derive(Debug, Clone)]
pub struct GoStructField {
    pub name: String,
    pub typ_va: u64,
    pub offset: u64,
}

fn read_u64(data: &[u8], off: usize) -> Option<u64> {
    data.get(off..off + 8)
        .map(|s| u64::from_le_bytes(s.try_into().unwrap()))
}

fn read_u16(data: &[u8], off: usize) -> Option<u16> {
    data.get(off..off + 2)
        .map(|s| u16::from_le_bytes(s.try_into().unwrap()))
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
            let elem_va = read_u64(image_data, tail_off)?;
            let _slice_va = read_u64(image_data, tail_off + 8)?;
            let len = read_u64(image_data, tail_off + 16)?;
            GoKind::Array { elem_va, len }
        }
        18 => {
            let elem_va = read_u64(image_data, tail_off)?;
            let dir = read_u64(image_data, tail_off + 8)? as u32;
            GoKind::Chan { elem_va, dir }
        }
        19 => {
            let in_count = read_u16(image_data, tail_off)?;
            let out_count = read_u16(image_data, tail_off + 2)?;
            GoKind::Func {
                in_count,
                out_count,
            }
        }
        20 => {
            // uncommonType (16) + pkgPath name ptr (8) + methods slice (ptr+len+cap=24)
            let methods_len = read_u64(image_data, tail_off + 8 + 8)?;
            GoKind::Interface {
                method_count: methods_len as usize,
            }
        }
        21 => {
            let key_va = read_u64(image_data, tail_off)?;
            let elem_va = read_u64(image_data, tail_off + 8)?;
            let bucket_va = read_u64(image_data, tail_off + 16)?;
            GoKind::Map {
                key_va,
                elem_va,
                bucket_va,
            }
        }
        22 => {
            let elem_va = read_u64(image_data, tail_off)?;
            GoKind::Ptr { elem_va }
        }
        23 => {
            let elem_va = read_u64(image_data, tail_off)?;
            GoKind::Slice { elem_va }
        }
        25 => {
            // pkgPath name ptr (8) + fields slice (ptr+len+cap = 24)
            let fields_ptr_va = read_u64(image_data, tail_off + 8)?;
            let fields_len = read_u64(image_data, tail_off + 16)?;
            let fields = parse_struct_fields(
                image_data,
                fields_ptr_va,
                fields_len as usize,
                &va_to_offset,
            );
            GoKind::Struct { fields }
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
        GoKind::Interface { method_count } => Some(method_count),
        _ => None,
    }
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
            GoKind::Array { elem_va, len } => {
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
            GoKind::Struct { fields } => {
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
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
        };

        let itab = parse_itab_at(&img, RODATA_BASE).expect("itab decodes");
        assert_eq!(itab.va, RODATA_BASE);
        assert_eq!(itab.inter_type_va, 0xAAAA_AAAA);
        assert_eq!(itab.concrete_type_va, 0xBBBB_BBBB);
        assert_eq!(itab.hash, 0xCAFE_BABE);

        // VA outside any mapped section returns None.
        assert!(parse_itab_at(&img, 0xDEAD_BEEF).is_none());
    }
}
