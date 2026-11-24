//! (unlace `btf`) BTF (BPF Type Format) reader for the `.BTF` section of a Linux
//! eBPF object. The section is the type description of the program: map and
//! context structs, helper prototypes, and the global data sections.
//!
//! Layout (kernel `include/uapi/linux/btf.h`, all little-endian): a 24-byte
//! header, then the type section at `hdr_len + type_off` and the string table at
//! `hdr_len + str_off`. Type ids start at 1; id 0 is `void` and has no record.
//! Each record is a 12-byte `btf_type` followed by kind-specific data. The
//! `kind_flag` (bit 31 of `info`) changes how struct members are read.
//!
//! This module only parses bytes and resolves names. Nothing consumes it yet:
//! typing BPF helper and map arguments is a later, option-gated step.

use super::le::read_u32;

pub const BTF_MAGIC: u16 = 0xEB9F;
const HEADER_LEN: usize = 24;
const TYPE_LEN: usize = 12;
const MEMBER_LEN: usize = 12;
const ENUM_LEN: usize = 8;
const ENUM64_LEN: usize = 12;
const PARAM_LEN: usize = 8;
const VAR_SECINFO_LEN: usize = 12;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfHeader {
    pub version: u8,
    pub flags: u8,
    pub hdr_len: u32,
    pub type_off: u32,
    pub type_len: u32,
    pub str_off: u32,
    pub str_len: u32,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum BtfError {
    /// Fewer bytes than a header, or a header field past the end of the input.
    Short,
    BadMagic(u16),
    UnsupportedVersion(u8),
    /// `hdr_len` is smaller than the 24-byte header.
    BadHeaderLen(u32),
    /// A type or string section lies outside the input, or its offset overflows.
    SectionOutOfRange,
    /// The record for type id `type_id` runs past the end of the type section.
    Truncated {
        type_id: u32,
    },
    /// The record for type id `type_id` has a kind this reader does not know.
    UnknownKind {
        type_id: u32,
        kind: u8,
    },
}

impl std::fmt::Display for BtfError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Short => write!(f, "BTF input is shorter than its header"),
            Self::BadMagic(m) => write!(f, "BTF magic {m:#06x} is not 0xeb9f"),
            Self::UnsupportedVersion(v) => write!(f, "BTF version {v} is not supported"),
            Self::BadHeaderLen(l) => write!(f, "BTF header length {l} is shorter than 24"),
            Self::SectionOutOfRange => write!(f, "BTF section lies outside the input"),
            Self::Truncated { type_id } => write!(f, "BTF type {type_id} runs past the section"),
            Self::UnknownKind { type_id, kind } => {
                write!(f, "BTF type {type_id} has unknown kind {kind}")
            }
        }
    }
}

impl std::error::Error for BtfError {}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfType {
    pub name_off: u32,
    pub kind_flag: bool,
    pub kind: BtfKind,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum BtfKind {
    /// `encoding` is the signed/char/bool bit set; `offset` and `bits` place a bit-int.
    Int {
        size: u32,
        encoding: u8,
        offset: u8,
        bits: u8,
    },
    Ptr {
        target: u32,
    },
    Array {
        elem: u32,
        index: u32,
        nelems: u32,
    },
    Struct {
        size: u32,
        members: Vec<BtfMember>,
    },
    Union {
        size: u32,
        members: Vec<BtfMember>,
    },
    Enum {
        size: u32,
        values: Vec<BtfEnumValue>,
    },
    Enum64 {
        size: u32,
        values: Vec<BtfEnumValue>,
    },
    /// A forward declaration; `kind_flag` on the record says union rather than struct.
    Fwd,
    Typedef {
        target: u32,
    },
    Volatile {
        target: u32,
    },
    Const {
        target: u32,
    },
    Restrict {
        target: u32,
    },
    TypeTag {
        target: u32,
    },
    /// `proto` is the id of the `FuncProto`; `linkage` is 0 static, 1 global, 2 extern.
    Func {
        proto: u32,
        linkage: u32,
    },
    FuncProto {
        ret: u32,
        params: Vec<BtfParam>,
    },
    Var {
        target: u32,
        linkage: u32,
    },
    Datasec {
        size: u32,
        vars: Vec<BtfVarSecinfo>,
    },
    Float {
        size: u32,
    },
    DeclTag {
        target: u32,
        component: i32,
    },
}

/// A struct or union member. With `kind_flag`, `bit_offset` and `bitfield_size`
/// come from the packed offset word; otherwise `bitfield_size` is 0.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfMember {
    pub name_off: u32,
    pub ty: u32,
    pub bit_offset: u32,
    pub bitfield_size: u32,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfEnumValue {
    pub name_off: u32,
    pub value: i64,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfParam {
    pub name_off: u32,
    pub ty: u32,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BtfVarSecinfo {
    pub ty: u32,
    pub offset: u32,
    pub size: u32,
}

/// A parsed BTF blob: its header, every type record in id order, and the string table.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Btf {
    pub header: BtfHeader,
    pub types: Vec<BtfType>,
    strings: Vec<u8>,
}

impl Btf {
    pub fn parse(bytes: &[u8]) -> Result<Btf, BtfError> {
        let header = parse_header(bytes)?;
        let types_bytes = section(bytes, header.hdr_len, header.type_off, header.type_len)?;
        let strings = section(bytes, header.hdr_len, header.str_off, header.str_len)?;
        let types = parse_types(types_bytes)?;
        Ok(Btf {
            header,
            types,
            strings: strings.to_vec(),
        })
    }

    /// The record for type id `id`; `None` for id 0 (void) and for ids past the end.
    pub fn type_by_id(&self, id: u32) -> Option<&BtfType> {
        self.types.get((id as usize).checked_sub(1)?)
    }

    /// The name at string-table offset `name_off`; `None` for offset 0 (anonymous).
    pub fn name(&self, name_off: u32) -> Option<&str> {
        if name_off == 0 {
            return None;
        }
        read_string(&self.strings, name_off)
    }
}

pub fn is_btf(bytes: &[u8]) -> bool {
    read_u16(bytes, 0) == Some(BTF_MAGIC)
}

fn read_u16(bytes: &[u8], at: usize) -> Option<u16> {
    Some(u16::from_le_bytes(bytes.get(at..at + 2)?.try_into().ok()?))
}

pub fn parse_header(bytes: &[u8]) -> Result<BtfHeader, BtfError> {
    if bytes.len() < HEADER_LEN {
        return Err(BtfError::Short);
    }
    let magic = read_u16(bytes, 0).ok_or(BtfError::Short)?;
    if magic != BTF_MAGIC {
        return Err(BtfError::BadMagic(magic));
    }
    let version = bytes[2];
    if version != 1 {
        return Err(BtfError::UnsupportedVersion(version));
    }
    let hdr_len = read_u32(bytes, 4).ok_or(BtfError::Short)?;
    if (hdr_len as usize) < HEADER_LEN {
        return Err(BtfError::BadHeaderLen(hdr_len));
    }
    Ok(BtfHeader {
        version,
        flags: bytes[3],
        hdr_len,
        type_off: read_u32(bytes, 8).ok_or(BtfError::Short)?,
        type_len: read_u32(bytes, 12).ok_or(BtfError::Short)?,
        str_off: read_u32(bytes, 16).ok_or(BtfError::Short)?,
        str_len: read_u32(bytes, 20).ok_or(BtfError::Short)?,
    })
}

/// Read a NUL-terminated string from the BTF string table at offset `idx`.
pub fn read_string(strings: &[u8], idx: u32) -> Option<&str> {
    let start = idx as usize;
    if start >= strings.len() {
        return None;
    }
    let end = strings[start..].iter().position(|&b| b == 0)?;
    std::str::from_utf8(&strings[start..start + end]).ok()
}

fn section(bytes: &[u8], hdr_len: u32, off: u32, len: u32) -> Result<&[u8], BtfError> {
    let start = (hdr_len as usize)
        .checked_add(off as usize)
        .ok_or(BtfError::SectionOutOfRange)?;
    let end = start
        .checked_add(len as usize)
        .ok_or(BtfError::SectionOutOfRange)?;
    bytes.get(start..end).ok_or(BtfError::SectionOutOfRange)
}

fn parse_types(sec: &[u8]) -> Result<Vec<BtfType>, BtfError> {
    let mut types = Vec::new();
    let mut at = 0usize;
    while at < sec.len() {
        let id = types.len() as u32 + 1;
        let (ty, used) = parse_type(sec, at, id)?;
        types.push(ty);
        at += used;
    }
    Ok(types)
}

/// The `count` fixed-size records that start at `at`, as one slice.
fn records(sec: &[u8], at: usize, count: usize, each: usize, id: u32) -> Result<&[u8], BtfError> {
    let trunc = BtfError::Truncated { type_id: id };
    let len = count.checked_mul(each).ok_or(trunc)?;
    let end = at.checked_add(len).ok_or(trunc)?;
    sec.get(at..end).ok_or(trunc)
}

/// Parse one type record at byte offset `at`; returns it and the bytes it used.
fn parse_type(sec: &[u8], at: usize, id: u32) -> Result<(BtfType, usize), BtfError> {
    let trunc = BtfError::Truncated { type_id: id };
    let name_off = read_u32(sec, at).ok_or(trunc)?;
    let info = read_u32(sec, at + 4).ok_or(trunc)?;
    let size_or_type = read_u32(sec, at + 8).ok_or(trunc)?;
    let vlen = (info & 0xffff) as usize;
    let kind_num = ((info >> 24) & 0x1f) as u8;
    let kind_flag = (info >> 31) != 0;
    let mut next = at + TYPE_LEN;

    let kind = match kind_num {
        1 => {
            let extra = read_u32(sec, next).ok_or(trunc)?;
            next += 4;
            BtfKind::Int {
                size: size_or_type,
                encoding: ((extra >> 24) & 0xf) as u8,
                offset: ((extra >> 16) & 0xff) as u8,
                bits: (extra & 0xff) as u8,
            }
        }
        2 => BtfKind::Ptr {
            target: size_or_type,
        },
        3 => {
            let data = records(sec, next, 1, 12, id)?;
            next += data.len();
            BtfKind::Array {
                elem: read_u32(data, 0).ok_or(trunc)?,
                index: read_u32(data, 4).ok_or(trunc)?,
                nelems: read_u32(data, 8).ok_or(trunc)?,
            }
        }
        4 | 5 => {
            let data = records(sec, next, vlen, MEMBER_LEN, id)?;
            next += data.len();
            let mut members = Vec::with_capacity(vlen);
            for m in data.chunks_exact(MEMBER_LEN) {
                let off = read_u32(m, 8).ok_or(trunc)?;
                let (bit_offset, bitfield_size) = if kind_flag {
                    (off & 0xff_ffff, off >> 24)
                } else {
                    (off, 0)
                };
                members.push(BtfMember {
                    name_off: read_u32(m, 0).ok_or(trunc)?,
                    ty: read_u32(m, 4).ok_or(trunc)?,
                    bit_offset,
                    bitfield_size,
                });
            }
            if kind_num == 4 {
                BtfKind::Struct {
                    size: size_or_type,
                    members,
                }
            } else {
                BtfKind::Union {
                    size: size_or_type,
                    members,
                }
            }
        }
        6 => {
            let data = records(sec, next, vlen, ENUM_LEN, id)?;
            next += data.len();
            let mut values = Vec::with_capacity(vlen);
            for e in data.chunks_exact(ENUM_LEN) {
                values.push(BtfEnumValue {
                    name_off: read_u32(e, 0).ok_or(trunc)?,
                    value: read_u32(e, 4).ok_or(trunc)? as i32 as i64,
                });
            }
            BtfKind::Enum {
                size: size_or_type,
                values,
            }
        }
        7 => BtfKind::Fwd,
        8 => BtfKind::Typedef {
            target: size_or_type,
        },
        9 => BtfKind::Volatile {
            target: size_or_type,
        },
        10 => BtfKind::Const {
            target: size_or_type,
        },
        11 => BtfKind::Restrict {
            target: size_or_type,
        },
        12 => BtfKind::Func {
            proto: size_or_type,
            linkage: vlen as u32,
        },
        13 => {
            let data = records(sec, next, vlen, PARAM_LEN, id)?;
            next += data.len();
            let mut params = Vec::with_capacity(vlen);
            for p in data.chunks_exact(PARAM_LEN) {
                params.push(BtfParam {
                    name_off: read_u32(p, 0).ok_or(trunc)?,
                    ty: read_u32(p, 4).ok_or(trunc)?,
                });
            }
            BtfKind::FuncProto {
                ret: size_or_type,
                params,
            }
        }
        14 => {
            let linkage = read_u32(sec, next).ok_or(trunc)?;
            next += 4;
            BtfKind::Var {
                target: size_or_type,
                linkage,
            }
        }
        15 => {
            let data = records(sec, next, vlen, VAR_SECINFO_LEN, id)?;
            next += data.len();
            let mut vars = Vec::with_capacity(vlen);
            for v in data.chunks_exact(VAR_SECINFO_LEN) {
                vars.push(BtfVarSecinfo {
                    ty: read_u32(v, 0).ok_or(trunc)?,
                    offset: read_u32(v, 4).ok_or(trunc)?,
                    size: read_u32(v, 8).ok_or(trunc)?,
                });
            }
            BtfKind::Datasec {
                size: size_or_type,
                vars,
            }
        }
        16 => BtfKind::Float { size: size_or_type },
        17 => {
            let component = read_u32(sec, next).ok_or(trunc)? as i32;
            next += 4;
            BtfKind::DeclTag {
                target: size_or_type,
                component,
            }
        }
        18 => BtfKind::TypeTag {
            target: size_or_type,
        },
        19 => {
            let data = records(sec, next, vlen, ENUM64_LEN, id)?;
            next += data.len();
            let mut values = Vec::with_capacity(vlen);
            for e in data.chunks_exact(ENUM64_LEN) {
                let lo = read_u32(e, 4).ok_or(trunc)? as u64;
                let hi = read_u32(e, 8).ok_or(trunc)? as u64;
                values.push(BtfEnumValue {
                    name_off: read_u32(e, 0).ok_or(trunc)?,
                    value: ((hi << 32) | lo) as i64,
                });
            }
            BtfKind::Enum64 {
                size: size_or_type,
                values,
            }
        }
        kind => return Err(BtfError::UnknownKind { type_id: id, kind }),
    };

    Ok((
        BtfType {
            name_off,
            kind_flag,
            kind,
        },
        next - at,
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn push_u32(out: &mut Vec<u8>, v: u32) {
        out.extend_from_slice(&v.to_le_bytes());
    }

    /// A type record header: name offset, `info` built from kind/vlen/kind_flag, and a size or type.
    fn rec(name_off: u32, kind: u32, vlen: u32, kind_flag: bool, size_or_type: u32) -> Vec<u8> {
        let info = vlen | (kind << 24) | ((kind_flag as u32) << 31);
        let mut out = Vec::new();
        push_u32(&mut out, name_off);
        push_u32(&mut out, info);
        push_u32(&mut out, size_or_type);
        out
    }

    fn words(vals: &[u32]) -> Vec<u8> {
        let mut out = Vec::new();
        for v in vals {
            push_u32(&mut out, *v);
        }
        out
    }

    /// A complete BTF blob: a 24-byte header, the type section, then the string table.
    fn blob(types: &[u8], strings: &[u8]) -> Vec<u8> {
        let mut out = Vec::new();
        out.extend_from_slice(&BTF_MAGIC.to_le_bytes());
        out.push(1);
        out.push(0);
        push_u32(&mut out, 24);
        push_u32(&mut out, 0);
        push_u32(&mut out, types.len() as u32);
        push_u32(&mut out, types.len() as u32);
        push_u32(&mut out, strings.len() as u32);
        out.extend_from_slice(types);
        out.extend_from_slice(strings);
        out
    }

    #[test]
    fn header_and_names() {
        let bytes = blob(&[], b"\0int\0");
        assert!(is_btf(&bytes));
        assert!(!is_btf(b"\xff\xff"));
        let btf = Btf::parse(&bytes).unwrap();
        assert_eq!(btf.header.version, 1);
        assert_eq!(btf.header.hdr_len, 24);
        assert!(btf.types.is_empty());
        assert_eq!(btf.name(1), Some("int"));
        assert_eq!(btf.name(0), None);
    }

    #[test]
    fn read_string_bounds() {
        assert_eq!(read_string(b"hello\0world\0", 6), Some("world"));
        assert_eq!(read_string(b"abc\0", 99), None);
    }

    #[test]
    fn int_and_pointer_ids_start_at_one() {
        let mut t = rec(1, 1, 0, false, 4);
        push_u32(&mut t, (1 << 24) | 32);
        t.extend(rec(0, 2, 0, false, 1));
        let btf = Btf::parse(&blob(&t, b"\0int\0")).unwrap();
        assert_eq!(
            btf.type_by_id(1).unwrap().kind,
            BtfKind::Int {
                size: 4,
                encoding: 1,
                offset: 0,
                bits: 32
            }
        );
        assert_eq!(btf.type_by_id(2).unwrap().kind, BtfKind::Ptr { target: 1 });
        assert!(btf.type_by_id(0).is_none());
        assert!(btf.type_by_id(3).is_none());
    }

    #[test]
    fn struct_bitfields_with_kind_flag() {
        let mut t = rec(3, 4, 2, true, 8);
        t.extend(words(&[3, 1, (4 << 24) | 5]));
        t.extend(words(&[0, 1, 64]));
        let btf = Btf::parse(&blob(&t, b"\0s\0a\0b\0")).unwrap();
        let BtfKind::Struct { size, members } = &btf.type_by_id(1).unwrap().kind else {
            panic!("expected struct");
        };
        assert_eq!(*size, 8);
        assert_eq!(
            members[0],
            BtfMember {
                name_off: 3,
                ty: 1,
                bit_offset: 5,
                bitfield_size: 4
            }
        );
        assert_eq!(
            members[1],
            BtfMember {
                name_off: 0,
                ty: 1,
                bit_offset: 64,
                bitfield_size: 0
            }
        );
    }

    #[test]
    fn enum_sign_extends_and_enum64_joins_halves() {
        let mut t = rec(0, 6, 1, false, 4);
        t.extend(words(&[4, 0xffff_ffff]));
        t.extend(rec(0, 19, 1, false, 8));
        t.extend(words(&[0, 0, 1]));
        let btf = Btf::parse(&blob(&t, b"\0E\0")).unwrap();
        let BtfKind::Enum { values, .. } = &btf.type_by_id(1).unwrap().kind else {
            panic!("expected enum");
        };
        assert_eq!(values[0].value, -1);
        let BtfKind::Enum64 { values, .. } = &btf.type_by_id(2).unwrap().kind else {
            panic!("expected enum64");
        };
        assert_eq!(values[0].value, 1i64 << 32);
    }

    #[test]
    fn func_proto_and_func() {
        let mut t = rec(0, 13, 1, false, 1);
        t.extend(words(&[0, 1]));
        t.extend(rec(2, 12, 1, false, 1));
        let btf = Btf::parse(&blob(&t, b"\0\0f\0")).unwrap();
        assert_eq!(
            btf.type_by_id(1).unwrap().kind,
            BtfKind::FuncProto {
                ret: 1,
                params: vec![BtfParam { name_off: 0, ty: 1 }]
            }
        );
        assert_eq!(
            btf.type_by_id(2).unwrap().kind,
            BtfKind::Func {
                proto: 1,
                linkage: 1
            }
        );
        assert_eq!(btf.name(2), Some("f"));
    }

    #[test]
    fn datasec_entries() {
        let mut t = rec(0, 15, 1, false, 16);
        t.extend(words(&[2, 0, 16]));
        let btf = Btf::parse(&blob(&t, b"")).unwrap();
        assert_eq!(
            btf.type_by_id(1).unwrap().kind,
            BtfKind::Datasec {
                size: 16,
                vars: vec![BtfVarSecinfo {
                    ty: 2,
                    offset: 0,
                    size: 16
                }]
            }
        );
    }

    #[test]
    fn rejects_bad_input_without_panicking() {
        assert_eq!(Btf::parse(b"\x9f\xeb\x01"), Err(BtfError::Short));

        let mut bad_magic = blob(&[], b"");
        bad_magic[0] = 0;
        assert!(matches!(Btf::parse(&bad_magic), Err(BtfError::BadMagic(_))));

        let mut bad_version = blob(&[], b"");
        bad_version[2] = 2;
        assert_eq!(
            Btf::parse(&bad_version),
            Err(BtfError::UnsupportedVersion(2))
        );

        let mut oversized = blob(&[], b"");
        oversized[12..16].copy_from_slice(&u32::MAX.to_le_bytes());
        assert_eq!(Btf::parse(&oversized), Err(BtfError::SectionOutOfRange));

        let unknown = rec(0, 31, 0, false, 0);
        assert_eq!(
            Btf::parse(&blob(&unknown, b"")),
            Err(BtfError::UnknownKind {
                type_id: 1,
                kind: 31
            })
        );

        let mut short_struct = rec(0, 4, 3, false, 8);
        short_struct.extend(words(&[0, 1, 0]));
        assert_eq!(
            Btf::parse(&blob(&short_struct, b"")),
            Err(BtfError::Truncated { type_id: 1 })
        );

        let huge_vlen = rec(0, 4, 0xffff, false, 8);
        assert_eq!(
            Btf::parse(&blob(&huge_vlen, b"")),
            Err(BtfError::Truncated { type_id: 1 })
        );
    }
}
