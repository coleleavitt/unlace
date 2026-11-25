//! The subset of IDA's serialized type strings (`typeinf.hpp` `type_t`) a Lumina `MDK_TYPE` chunk needs
//! to carry a function prototype.
//!
//! A type is a byte string: the low nibble of each type byte is the base type (`BT_*`), bits 4-5 its
//! flavour (`BTMT_*`) and bits 6-7 the `const`/`volatile` modifiers. Counts and lengths use the `dt`
//! encoding (`n + 1` in one byte below `0x80`, else two bytes), so a type string holds no NUL.
//!
//! The chunk, as libida's `calc_func_metadata` builds it (`sub_872D00`, IDA 9.5): one byte that is 1
//! when the type is user-defined (`AFL_USERTI`), the type string with ordinal references replaced by
//! names (`serialize_tinfo`), then, only when a parameter has a name, a NUL and the field names (one
//! `dt`-length-prefixed string per parameter), with no trailing NUL.
//!
//! A function type is `BT_FUNC`, the calling-convention byte (`cm_t`, high nibble `CM_CC_*`), the
//! return type, the parameter count and the parameter types. Decoding refuses anything outside the
//! subset (arrays, inline aggregates, function pointers, ordinal type references, spoiled-register or
//! custom-location conventions, type attributes) by returning `None`, so a caller never applies a
//! prototype it only half read.

const BT_UNK: u8 = 0x00;
const BT_VOID: u8 = 0x01;
const BT_INT8: u8 = 0x02;
const BT_INT16: u8 = 0x03;
const BT_INT32: u8 = 0x04;
const BT_INT64: u8 = 0x05;
const BT_INT128: u8 = 0x06;
const BT_INT: u8 = 0x07;
const BT_BOOL: u8 = 0x08;
const BT_FLOAT: u8 = 0x09;
const BT_PTR: u8 = 0x0A;
const BT_FUNC: u8 = 0x0C;
const BT_COMPLEX: u8 = 0x0D;

const BTMT_SIGNED: u8 = 0x10;
const BTMT_USIGNED: u8 = 0x20;
const BTMT_CHAR: u8 = 0x30;
const BTMT_TYPEDEF: u8 = 0x30;
const BTM_CONST: u8 = 0x40;
const BTM_VOLATILE: u8 = 0x80;
/// The lead byte of a type-attribute block (`TAH_BYTE`).
const TAH_BYTE: u8 = 0xFE;

const MAX_DEPTH: u32 = 16;
const MAX_PARAMS: u32 = 256;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NamedKind {
    Typedef,
    Struct,
    Union,
    Enum,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CType {
    Void,
    Bool,
    Char,
    /// `bytes == 0` is the unsized `int` (`BT_INT`).
    Int {
        bytes: u8,
        signed: bool,
    },
    Float {
        bytes: u8,
    },
    Ptr(Box<CType>),
    Named {
        kind: NamedKind,
        name: String,
    },
    Const(Box<CType>),
    Volatile(Box<CType>),
}

impl CType {
    /// The C spelling of the type alone (`const char *`, `unsigned int`).
    pub fn spelled(&self) -> String {
        match self {
            CType::Void => "void".into(),
            CType::Bool => "bool".into(),
            CType::Char => "char".into(),
            CType::Int { bytes, signed } => {
                let base = match bytes {
                    1 => "char",
                    2 => "short",
                    0 | 4 => "int",
                    8 => "long long",
                    _ => "__int128",
                };
                match (signed, bytes) {
                    (true, 1) => "signed char".into(),
                    (true, _) => base.into(),
                    (false, _) => format!("unsigned {base}"),
                }
            }
            CType::Float { bytes } => match bytes {
                4 => "float",
                8 => "double",
                _ => "long double",
            }
            .into(),
            CType::Ptr(inner) => {
                let s = inner.spelled();
                if s.ends_with('*') {
                    format!("{s}*")
                } else {
                    format!("{s} *")
                }
            }
            CType::Named { kind, name } => match kind {
                NamedKind::Typedef => name.clone(),
                NamedKind::Struct => format!("struct {name}"),
                NamedKind::Union => format!("union {name}"),
                NamedKind::Enum => format!("enum {name}"),
            },
            CType::Const(inner) => qualified(inner, "const"),
            CType::Volatile(inner) => qualified(inner, "volatile"),
        }
    }
}

fn qualified(inner: &CType, qualifier: &str) -> String {
    match inner {
        CType::Ptr(_) => format!("{}{qualifier}", inner.spelled()),
        _ => format!("{qualifier} {}", inner.spelled()),
    }
}

/// `ty name`, with the name against a trailing `*`.
fn declare(ty: &CType, name: &str) -> String {
    let s = ty.spelled();
    if s.ends_with('*') {
        format!("{s}{name}")
    } else {
        format!("{s} {name}")
    }
}

/// Whether `s` is a C identifier.
pub fn is_identifier(s: &str) -> bool {
    let mut chars = s.chars();
    matches!(chars.next(), Some(c) if c == '_' || c.is_ascii_alphabetic())
        && chars.all(|c| c == '_' || c.is_ascii_alphanumeric())
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CallConv {
    Unknown,
    VoidArg,
    Cdecl,
    Ellipsis,
    Stdcall,
    Pascal,
    Fastcall,
    Thiscall,
}

impl CallConv {
    fn from_cm(cc: u8) -> Option<Self> {
        Some(match cc {
            0x10 => Self::Unknown,
            0x20 => Self::VoidArg,
            0x30 => Self::Cdecl,
            0x40 => Self::Ellipsis,
            0x50 => Self::Stdcall,
            0x60 => Self::Pascal,
            0x70 => Self::Fastcall,
            0x80 => Self::Thiscall,
            _ => return None,
        })
    }

    fn cm(self) -> u8 {
        match self {
            Self::Unknown => 0x10,
            Self::VoidArg => 0x20,
            Self::Cdecl => 0x30,
            Self::Ellipsis => 0x40,
            Self::Stdcall => 0x50,
            Self::Pascal => 0x60,
            Self::Fastcall => 0x70,
            Self::Thiscall => 0x80,
        }
    }

    pub fn name(self) -> &'static str {
        match self {
            Self::Unknown => "unknown",
            Self::VoidArg => "void",
            Self::Cdecl => "cdecl",
            Self::Ellipsis => "cdecl_varargs",
            Self::Stdcall => "stdcall",
            Self::Pascal => "pascal",
            Self::Fastcall => "fastcall",
            Self::Thiscall => "thiscall",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Param {
    pub ty: CType,
    pub name: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FuncType {
    pub cc: CallConv,
    pub ret: CType,
    pub params: Vec<Param>,
}

impl FuncType {
    /// A C declaration of a function `name` with this type. Parameters without a usable name are
    /// called `a1`, `a2`, ... as IDA prints them.
    pub fn declaration(&self, name: &str) -> String {
        let mut params: Vec<String> = self
            .params
            .iter()
            .enumerate()
            .map(|(i, p)| {
                let pname = p
                    .name
                    .as_deref()
                    .filter(|n| is_identifier(n))
                    .map(str::to_string)
                    .unwrap_or_else(|| format!("a{}", i + 1));
                declare(&p.ty, &pname)
            })
            .collect();
        if self.cc == CallConv::Ellipsis {
            params.push("...".into());
        }
        let list = if params.is_empty() {
            "void".to_string()
        } else {
            params.join(", ")
        };
        declare(&self.ret, &format!("{name}({list})"))
    }
}

struct Cur<'a> {
    b: &'a [u8],
    pos: usize,
}

impl<'a> Cur<'a> {
    fn new(b: &'a [u8]) -> Self {
        Self { b, pos: 0 }
    }

    fn byte(&mut self) -> Option<u8> {
        let v = *self.b.get(self.pos)?;
        self.pos += 1;
        Some(v)
    }

    fn peek(&self) -> Option<u8> {
        self.b.get(self.pos).copied()
    }

    fn at_end(&self) -> bool {
        self.pos >= self.b.len()
    }

    fn dt(&mut self) -> Option<u32> {
        let b0 = self.byte()?;
        if b0 == 0 {
            return None;
        }
        if b0 & 0x80 == 0 {
            return Some(u32::from(b0) - 1);
        }
        let b1 = self.byte()?;
        if b1 == 0 {
            return None;
        }
        Some(((u32::from(b1) << 7) | u32::from(b0 & 0x7F)) - 1)
    }

    fn pstring(&mut self) -> Option<String> {
        let n = self.dt()? as usize;
        let end = self.pos.checked_add(n)?;
        let s = self.b.get(self.pos..end)?;
        self.pos = end;
        Some(String::from_utf8_lossy(s).into_owned())
    }
}

fn read_type(c: &mut Cur<'_>, depth: u32) -> Option<CType> {
    if depth > MAX_DEPTH {
        return None;
    }
    let t = c.byte()?;
    let (base, flags, modifiers) = (t & 0x0F, t & 0x30, t & 0xC0);
    let ty = match base {
        BT_UNK => match flags {
            0x10 => CType::Int {
                bytes: 2,
                signed: false,
            },
            0x20 => CType::Int {
                bytes: 8,
                signed: false,
            },
            _ => return None,
        },
        BT_VOID => match flags {
            0x00 => CType::Void,
            0x10 => CType::Int {
                bytes: 1,
                signed: false,
            },
            0x20 => CType::Int {
                bytes: 4,
                signed: false,
            },
            _ => return None,
        },
        BT_INT8 => match flags {
            BTMT_CHAR => CType::Char,
            BTMT_USIGNED => CType::Int {
                bytes: 1,
                signed: false,
            },
            _ => CType::Int {
                bytes: 1,
                signed: true,
            },
        },
        BT_INT16 | BT_INT32 | BT_INT64 | BT_INT128 | BT_INT => CType::Int {
            bytes: match base {
                BT_INT16 => 2,
                BT_INT32 => 4,
                BT_INT64 => 8,
                BT_INT128 => 16,
                _ => 0,
            },
            signed: flags != BTMT_USIGNED,
        },
        BT_BOOL => CType::Bool,
        BT_FLOAT => match flags {
            0x00 => CType::Float { bytes: 4 },
            0x10 => CType::Float { bytes: 8 },
            0x20 => CType::Float { bytes: 10 },
            _ => return None,
        },
        BT_PTR => {
            // BTMT_CLOSURE carries a pointer size or a based pointer.
            if flags == 0x30 {
                return None;
            }
            CType::Ptr(Box::new(read_type(c, depth + 1)?))
        }
        BT_COMPLEX => {
            let kind = match flags {
                0x00 => NamedKind::Struct,
                0x10 => NamedKind::Union,
                0x20 => NamedKind::Enum,
                _ => NamedKind::Typedef,
            };
            // A struct, union or enum is only accepted as a by-name reference (member count 0).
            if kind != NamedKind::Typedef && c.dt()? != 0 {
                return None;
            }
            let name = c.pstring()?;
            // `#` names an ordinal in the producer's type library, which is not ours.
            if name.is_empty() || name.starts_with('#') {
                return None;
            }
            CType::Named { kind, name }
        }
        _ => return None,
    };
    let ty = if modifiers & BTM_CONST != 0 {
        CType::Const(Box::new(ty))
    } else {
        ty
    };
    let ty = if modifiers & BTM_VOLATILE != 0 {
        CType::Volatile(Box::new(ty))
    } else {
        ty
    };
    Some(ty)
}

/// Decode a function type string and its field names.
pub fn decode_func(ty: &[u8], fields: &[u8]) -> Option<FuncType> {
    let mut c = Cur::new(ty);
    if c.byte()? & 0x0F != BT_FUNC {
        return None;
    }
    let cc = CallConv::from_cm(c.byte()? & 0xF0)?;
    if c.peek() == Some(TAH_BYTE) {
        return None;
    }
    let ret = read_type(&mut c, 0)?;
    let mut params = Vec::new();
    if cc != CallConv::VoidArg {
        let n = c.dt()?;
        if n > MAX_PARAMS {
            return None;
        }
        for _ in 0..n {
            params.push(Param {
                ty: read_type(&mut c, 0)?,
                name: None,
            });
        }
    }
    let mut f = Cur::new(fields);
    for p in &mut params {
        if f.at_end() {
            break;
        }
        let Some(name) = f.pstring() else { break };
        if !name.is_empty() {
            p.name = Some(name);
        }
    }
    Some(FuncType { cc, ret, params })
}

/// Decode an `MDK_TYPE` chunk: the user-type flag byte, the type string, and optionally a NUL and the
/// field names. A chunk that starts directly with `BT_FUNC` (no flag byte) is read too.
pub fn decode_type_chunk(data: &[u8]) -> Option<FuncType> {
    let data = match data.first() {
        Some(&b) if b & 0x0F == BT_FUNC => data,
        Some(0 | 1) => &data[1..],
        _ => return None,
    };
    let (ty, rest) = match data.iter().position(|&b| b == 0) {
        Some(i) => (&data[..i], &data[i + 1..]),
        None => (data, &[][..]),
    };
    let fields_end = rest.iter().position(|&b| b == 0).unwrap_or(rest.len());
    decode_func(ty, &rest[..fields_end])
}

fn write_dt(out: &mut Vec<u8>, n: u32) -> Option<()> {
    let x = n.checked_add(1)?;
    if x < 0x80 {
        out.push(x as u8);
    } else if x <= 0x7FFF {
        out.push(((x & 0x7F) as u8) | 0x80);
        out.push((x >> 7) as u8);
    } else {
        return None;
    }
    Some(())
}

fn write_pstring(out: &mut Vec<u8>, s: &str) -> Option<()> {
    if s.as_bytes().contains(&0) {
        return None;
    }
    write_dt(out, u32::try_from(s.len()).ok()?)?;
    out.extend_from_slice(s.as_bytes());
    Some(())
}

fn write_type(out: &mut Vec<u8>, ty: &CType, depth: u32) -> Option<()> {
    if depth > MAX_DEPTH {
        return None;
    }
    match ty {
        CType::Void => out.push(BT_VOID),
        CType::Bool => out.push(BT_BOOL),
        CType::Char => out.push(BT_INT8 | BTMT_CHAR),
        CType::Int { bytes, signed } => {
            let base = match bytes {
                1 => BT_INT8,
                2 => BT_INT16,
                4 => BT_INT32,
                8 => BT_INT64,
                16 => BT_INT128,
                0 => BT_INT,
                _ => return None,
            };
            out.push(base | if *signed { BTMT_SIGNED } else { BTMT_USIGNED });
        }
        CType::Float { bytes } => out.push(match bytes {
            4 => BT_FLOAT,
            8 => BT_FLOAT | 0x10,
            10 => BT_FLOAT | 0x20,
            _ => return None,
        }),
        CType::Ptr(inner) => {
            out.push(BT_PTR);
            write_type(out, inner, depth + 1)?;
        }
        CType::Named { kind, name } => {
            if name.is_empty() || name.starts_with('#') {
                return None;
            }
            match kind {
                NamedKind::Typedef => out.push(BT_COMPLEX | BTMT_TYPEDEF),
                NamedKind::Struct | NamedKind::Union | NamedKind::Enum => {
                    out.push(
                        BT_COMPLEX
                            | match kind {
                                NamedKind::Struct => 0x00,
                                NamedKind::Union => 0x10,
                                _ => 0x20,
                            },
                    );
                    write_dt(out, 0)?;
                }
            }
            write_pstring(out, name)?;
        }
        CType::Const(inner) | CType::Volatile(inner) => {
            let bit = if matches!(ty, CType::Const(_)) {
                BTM_CONST
            } else {
                BTM_VOLATILE
            };
            let start = out.len();
            write_type(out, inner, depth + 1)?;
            out[start] |= bit;
        }
    }
    Some(())
}

/// Encode a function type as an `MDK_TYPE` chunk; `None` for a type outside the subset.
pub fn encode_type_chunk(f: &FuncType) -> Option<Vec<u8>> {
    if f.cc == CallConv::VoidArg && !f.params.is_empty() {
        return None;
    }
    // The flag byte: a pushed prototype is a user-defined type.
    let mut out = vec![1, BT_FUNC, f.cc.cm()];
    write_type(&mut out, &f.ret, 0)?;
    if f.cc != CallConv::VoidArg {
        write_dt(&mut out, u32::try_from(f.params.len()).ok()?)?;
        for p in &f.params {
            write_type(&mut out, &p.ty, 0)?;
        }
    }
    if f.params
        .iter()
        .any(|p| p.name.as_deref().is_some_and(|n| !n.is_empty()))
    {
        out.push(0);
        for p in &f.params {
            write_pstring(&mut out, p.name.as_deref().unwrap_or(""))?;
        }
    }
    Some(out)
}

#[cfg(test)]
mod tests;
