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
}
