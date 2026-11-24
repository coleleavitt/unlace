//! (unlace `typelib`) IDA type libraries (`.til`, the `IDATIL` format) read into
//! the type-library text the `typelib` option consumes.
//!
//! A `.til` holds a header (format, title, compiler, pointer model, the sizes of
//! `int`, `bool` and `enum`), then two buckets of entries, optionally
//! zlib-compressed: the symbols (function prototypes) and the named types
//! (records, enums, typedefs). Each entry is a name, an ordinal, a serialized
//! type string and the names of the members and parameters it lists. The
//! decoder follows idb-rs (Vector 35, Apache-2.0), whose `til` module documents
//! the encoding; it keeps only what a C declaration needs.
//!
//! [`to_typelib`] renders every entry it can as a library line: a function as
//! `F`, a typedef or a named enum (as its integer) as `T`, a record as `S`/`U`
//! with the member offsets laid out here from the member sizes and alignments
//! the type string states (a `.til` records no offsets), and an anonymous
//! member record as its own entry named `<record>__<member>`. An entry whose
//! type cannot be spelled in C (a `__usercall` location, a closure pointer, a
//! 128-bit integer, a C++ method table) is left out, a record member that
//! cannot be is left a hole, and a record whose layout cannot be computed is
//! left to the reader, which makes a `struct` tag no entry defines a record of
//! unknown members. Every count, length and nesting depth is bounded.

use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write as _;
use std::io::Read;

const MAGIC: &[u8; 6] = b"IDATIL";
const TIL_ZIP: u32 = 0x0001;
const TIL_ESI: u32 = 0x0004;
const TIL_ORD: u32 = 0x0010;
const TIL_ALI: u32 = 0x0020;
const TIL_SLD: u32 = 0x0100;

const MAX_DEPTH: usize = 48;
const MAX_ENTRIES: u32 = 1 << 21;
const MAX_BUCKET_BYTES: u32 = 256 << 20;
const MAX_ARGS: u16 = 512;
const MAX_MEMBERS: u32 = 1 << 14;
const MAX_LINE: usize = 4000;
const MAX_RECORD: u64 = 1 << 24;

type Res<T> = Result<T, String>;

fn err<T>(what: &str) -> Res<T> {
    Err(what.to_string())
}

/// A bounded cursor over one buffer.
struct Cur<'a> {
    buf: &'a [u8],
    pos: usize,
}

impl<'a> Cur<'a> {
    fn new(buf: &'a [u8]) -> Self {
        Cur { buf, pos: 0 }
    }

    fn rest(&self) -> &'a [u8] {
        &self.buf[self.pos.min(self.buf.len())..]
    }

    fn peek(&self) -> Option<u8> {
        self.buf.get(self.pos).copied()
    }

    fn u8(&mut self) -> Res<u8> {
        let b = self.peek().ok_or("unexpected end of data")?;
        self.pos += 1;
        Ok(b)
    }

    fn bytes(&mut self, n: usize) -> Res<&'a [u8]> {
        let end = self.pos.checked_add(n).ok_or("length overflow")?;
        let out = self
            .buf
            .get(self.pos..end)
            .ok_or("unexpected end of data")?;
        self.pos = end;
        Ok(out)
    }

    fn u16(&mut self) -> Res<u16> {
        let b = self.bytes(2)?;
        Ok(u16::from_le_bytes([b[0], b[1]]))
    }

    fn u32(&mut self) -> Res<u32> {
        let b = self.bytes(4)?;
        Ok(u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    }

    fn u64(&mut self) -> Res<u64> {
        let lo = u64::from(self.u32()?);
        let hi = u64::from(self.u32()?);
        Ok(lo | (hi << 32))
    }

    /// Bytes up to a NUL (consumed); the rest of the buffer when none.
    fn cstr(&mut self) -> &'a [u8] {
        let rest = self.rest();
        match rest.iter().position(|&b| b == 0) {
            Some(n) => {
                self.pos += n + 1;
                &rest[..n]
            }
            None => {
                self.pos = self.buf.len();
                rest
            }
        }
    }

    fn len_u8(&mut self) -> Res<&'a [u8]> {
        let n = self.u8()?;
        self.bytes(usize::from(n))
    }

    /// A `dt`: 1 or 2 bytes, 0..=0x7FFE.
    fn dt(&mut self) -> Res<u16> {
        let value = match self.u8()? {
            0 => return Ok(0),
            v @ 0x80.. => {
                let inter = self.peek().map_or(0, |b| {
                    self.pos += 1;
                    b
                });
                (u16::from(v) & 0x7f) | (u16::from(inter) << 7)
            }
            v => u16::from(v),
        };
        value
            .checked_sub(1)
            .ok_or_else(|| "malformed dt value".to_string())
    }

    /// A `de`: 1 to 5 bytes of 7-bit groups, the last carrying 6 bits.
    fn de(&mut self) -> Res<u32> {
        let mut acc: u32 = 0;
        for _ in 0..5 {
            let Some(b) = self.peek() else {
                return Ok(acc);
            };
            self.pos += 1;
            if b & 0x80 == 0 {
                return Ok(u32::from(b & 0x3f) | (acc << 6));
            }
            acc = (acc << 7) | u32::from(b & 0x7f);
        }
        err("unterminated de value")
    }

    /// A `dt` count, or a `de` one after the `0x7FFE` escape; `None` for 0.
    fn dt_de(&mut self) -> Res<Option<u32>> {
        match self.dt()? {
            0 => Ok(None),
            0x7ffe => self.de().map(Some),
            n => Ok(Some(u32::from(n))),
        }
    }

    /// A `da` array descriptor: `(nelem, base)`.
    fn da(&mut self) -> Res<(u32, u32)> {
        let (mut a, mut b) = (0, 0);
        let (mut da, mut base, mut nelem) = (0u32, 0u32, 0u32);
        loop {
            let Some(typ) = self.peek() else {
                return Ok((nelem, base));
            };
            if typ & 0x80 == 0 {
                break;
            }
            self.pos += 1;
            da = (da << 7) | u32::from(typ & 0x7f);
            b += 1;
            if b >= 4 {
                let z = self.u8()?;
                if z != 0 {
                    base = (da << 4) | u32::from(z & 0xf);
                }
                nelem = u32::from((z >> 4) & 7);
                loop {
                    let Some(y) = self.peek() else {
                        return Ok((nelem, base));
                    };
                    if y & 0x80 == 0 {
                        break;
                    }
                    self.pos += 1;
                    nelem = (nelem << 7) | u32::from(y & 0x7f);
                    a += 1;
                    if a >= 4 {
                        return Ok((nelem, base));
                    }
                }
            }
        }
        Ok((nelem, base))
    }

    fn dt_bytes(&mut self) -> Res<&'a [u8]> {
        let n = self.dt()?;
        let n = usize::from(n).min(self.rest().len());
        self.bytes(n)
    }

    /// A type attribute (`tah`/`sdacl` payload): its bits, extended pairs skipped.
    fn type_attribute(&mut self) -> Res<u16> {
        let Some(byte0) = self.peek() else {
            return Ok(0);
        };
        self.pos += 1;
        let mut tattr: u16 = 0;
        if byte0 != 0xfe {
            tattr = ((u16::from(byte0) & 1) | ((u16::from(byte0) >> 3) & 6)) + 1;
        }
        if byte0 == 0xfe || tattr == 8 {
            let mut shift = 0u32;
            while let Some(next) = self.peek() {
                self.pos += 1;
                if next == 0 {
                    return err("zero byte in a type attribute");
                }
                tattr |= u16::from(next & 0x7f) << shift;
                if next & 0x80 == 0 {
                    break;
                }
                shift += 7;
                if shift >= u16::BITS {
                    return err("unterminated type attribute");
                }
            }
        }
        const TAH_HASATTRS: u16 = 0x0010;
        if tattr & TAH_HASATTRS != 0 {
            tattr &= !TAH_HASATTRS;
            let n = self.dt()?;
            for _ in 0..n.min(256) {
                self.dt_bytes()?;
                self.dt_bytes()?;
            }
        }
        Ok(tattr)
    }

    fn tah(&mut self) -> Res<Option<u16>> {
        match self.peek() {
            Some(0xfe) => self.type_attribute().map(Some),
            _ => Ok(None),
        }
    }

    fn sdacl(&mut self) -> Res<Option<u16>> {
        match self.peek() {
            Some(0xc0..=0xc1 | 0xd0..=0xd1 | 0xe0..=0xe1 | 0xf0..=0xf1) => {
                self.type_attribute().map(Some)
            }
            _ => Ok(None),
        }
    }

    fn ext_att(&mut self) -> Res<u64> {
        let start = match self.dt()? {
            0x400 => return Ok(u64::MAX),
            0x200 => return Ok(u64::from(u32::MAX)),
            other => other,
        };
        let mut acc = 0u64;
        for bit in 0..8 {
            if (start >> bit) & 1 != 0 {
                acc |= u64::from(self.u8()?) << (bit * 8);
            }
        }
        if start & 0x100 != 0 {
            acc = !acc;
        }
        Ok(acc)
    }
}

/// The header fields the renderer needs.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Header {
    pub format: u32,
    pub flags: u32,
    pub title: String,
    pub compiler: u8,
    pub size_int: u8,
    pub size_bool: u8,
    pub size_enum: u8,
    pub size_long_double: u8,
    /// Near pointer size from the memory model, 0 when it states none.
    pub ptr_size: u8,
}

/// A decoded type.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Type {
    pub is_const: bool,
    pub kind: Kind,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Kind {
    Void,
    /// An untyped value of this many bytes (0: unknown).
    Unknown(u8),
    Bool(u8),
    Char,
    /// An integer of this many bytes (0: the header's `int`), and its sign.
    Int(u8, Option<bool>),
    Float(u8),
    Ptr(Box<Type>),
    Array(Box<Type>, u32),
    Func(Box<Func>),
    Ref(Ref),
    Struct(Box<Udt>),
    Union(Box<Udt>),
    /// An enum's storage bytes (0: the header's) and signedness.
    Enum(u8, bool),
    Bitfield {
        nbytes: u8,
        width: u16,
    },
    /// Something C cannot spell here (a closure pointer, a segment register).
    Unsupported,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum RefKind {
    Struct,
    Union,
    Enum,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Ref {
    pub name: Option<String>,
    pub ordinal: Option<u32>,
    pub kind: Option<RefKind>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Func {
    /// The calling-convention nibble (`CM_CC_*` >> 4).
    pub cc: u8,
    pub ret: Type,
    pub args: Vec<(Option<String>, Type)>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Member {
    pub name: Option<String>,
    pub ty: Type,
    pub align: Option<u64>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Udt {
    pub members: Vec<Member>,
    pub pack: Option<u64>,
    pub align: Option<u64>,
    pub unaligned: bool,
    /// Member offsets are stated rather than laid out; not rendered.
    pub fixed: bool,
}

/// One bucket entry.
#[derive(Clone, Debug)]
pub struct Entry {
    pub name: String,
    pub ordinal: u64,
    pub ty: Option<Type>,
}

/// A parsed type library.
#[derive(Clone, Debug)]
pub struct Til {
    pub header: Header,
    pub symbols: Vec<Entry>,
    pub types: Vec<Entry>,
    pub aliases: BTreeMap<u32, u32>,
}

const CC_VOIDARG: u8 = 0x2;
const CC_ELLIPSIS: u8 = 0x4;
const CC_STDCALL: u8 = 0x5;
const CC_PASCAL: u8 = 0x6;
const CC_FASTCALL: u8 = 0x7;
const CC_THISCALL: u8 = 0x8;

/// Decodes one entry's type string, drawing member and parameter names from
/// the entry's field list in order.
struct TypeReader<'h, 'f> {
    header: &'h Header,
    fields: std::slice::Iter<'f, Option<String>>,
}

impl TypeReader<'_, '_> {
    fn field(&mut self) -> Option<String> {
        self.fields.next().cloned().flatten()
    }

    fn read(&mut self, c: &mut Cur, depth: usize) -> Res<Type> {
        if depth > MAX_DEPTH {
            return err("type nested too deeply");
        }
        let meta = c.u8()?;
        let base = meta & 0x0f;
        let flags = meta & 0x30;
        let is_const = meta & 0x40 != 0;
        let kind = match base {
            0x00..=0x09 => self.basic(c, base, flags)?,
            0x0a => self.pointer(c, flags, depth)?,
            0x0b => {
                let nelem = if flags == 0x10 {
                    u32::from(c.dt()?)
                } else {
                    c.da()?.1
                };
                c.tah()?;
                let elem = self.read(c, depth + 1)?;
                Kind::Array(Box::new(elem), nelem)
            }
            0x0c => self.function(c, flags, depth)?,
            0x0d => match flags {
                0x30 => Kind::Ref(Self::typeref(c)?),
                0x00 => self.udt(c, false, depth)?,
                0x10 => self.udt(c, true, depth)?,
                _ => self.enumeration(c)?,
            },
            0x0e => {
                let nbytes = 1u8 << (flags >> 4);
                let dt = c.dt()?;
                c.tah()?;
                Kind::Bitfield {
                    nbytes,
                    width: dt >> 1,
                }
            }
            _ => return err("reserved type byte"),
        };
        Ok(Type { is_const, kind })
    }

    fn basic(&mut self, c: &mut Cur, bt: u8, btmt: u8) -> Res<Kind> {
        let kind = match bt {
            0x00 => Kind::Unknown(match btmt {
                0x10 => 2,
                0x20 => 8,
                _ => 0,
            }),
            0x01 => match btmt {
                0x00 => Kind::Void,
                0x10 => Kind::Unknown(1),
                0x20 => Kind::Unknown(4),
                _ => Kind::Unknown(16),
            },
            0x02..=0x07 => {
                let sign = match btmt {
                    0x10 => Some(true),
                    0x20 => Some(false),
                    0x30 => {
                        let kind = if bt == 0x02 {
                            Kind::Char
                        } else {
                            Kind::Unsupported
                        };
                        c.tah()?;
                        return Ok(kind);
                    }
                    _ => None,
                };
                let bytes = match bt {
                    0x02 => 1,
                    0x03 => 2,
                    0x04 => 4,
                    0x05 => 8,
                    0x06 => 16,
                    _ => 0,
                };
                Kind::Int(bytes, sign)
            }
            0x08 => Kind::Bool(match btmt {
                0x00 => self.header.size_bool,
                0x10 => 1,
                0x20 => {
                    if self.header.ptr_size == 8 {
                        8
                    } else {
                        2
                    }
                }
                _ => 4,
            }),
            _ => Kind::Float(match btmt {
                0x00 => 4,
                0x10 => 8,
                0x20 => self.header.size_long_double.max(8),
                _ => 2,
            }),
        };
        if bt != 0x00 {
            c.tah()?;
        }
        Ok(kind)
    }

    fn pointer(&mut self, c: &mut Cur, btmt: u8, depth: usize) -> Res<Kind> {
        let mut closure = false;
        if btmt == 0x30 {
            closure = true;
            if c.u8()? == 0xff {
                const NONE: &[Option<String>] = &[];
                let mut sub = TypeReader {
                    header: self.header,
                    fields: NONE.iter(),
                };
                sub.read(c, depth + 1)?;
            } else {
                c.u8()?;
            }
        }
        const TAPTR_SHIFTED: u16 = 0x0080;
        let shifted = c.tah()?.is_some_and(|t| t & TAPTR_SHIFTED != 0);
        let target = self.read(c, depth + 1)?;
        if shifted {
            self.read(c, depth + 1)?;
            c.de()?;
        }
        c.tah()?;
        Ok(if closure {
            Kind::Unsupported
        } else {
            Kind::Ptr(Box::new(target))
        })
    }

    fn function(&mut self, c: &mut Cur, _btmt: u8, depth: usize) -> Res<Kind> {
        let cc = read_cc(c)?;
        let ret = self.read(c, depth + 1)?;
        let special = matches!(cc, 0xd | 0xe | 0xf);
        if special {
            return err("explicit argument locations");
        }
        let mut args = Vec::new();
        if cc != CC_VOIDARG {
            let n = c.dt()?;
            if n > MAX_ARGS {
                return err("too many arguments");
            }
            for _ in 0..n {
                let name = self.field();
                if c.peek() == Some(0xff) {
                    c.pos += 1;
                    c.de()?;
                }
                let ty = self.read(c, depth + 1)?;
                args.push((name, ty));
            }
        }
        Ok(Kind::Func(Box::new(Func { cc, ret, args })))
    }

    fn typeref(c: &mut Cur) -> Res<Ref> {
        let buf = c.dt_bytes()?;
        let r = typeref_from(buf)?;
        c.tah()?;
        Ok(r)
    }

    /// A reference to a named type: `=` + a serialized reference, or the bare
    /// reference payload.
    fn reference(&mut self, c: &mut Cur, kind: RefKind) -> Res<Kind> {
        let bytes = c.dt_bytes()?;
        let mut r = if bytes.first() == Some(&b'=') {
            let mut inner = Cur::new(&bytes[1..]);
            Self::typeref(&mut inner)?
        } else {
            typeref_from(bytes)?
        };
        c.sdacl()?;
        r.kind = Some(kind);
        Ok(Kind::Ref(r))
    }

    fn udt(&mut self, c: &mut Cur, union: bool, depth: usize) -> Res<Kind> {
        let Some(n) = c.dt_de()? else {
            let kind = if union {
                RefKind::Union
            } else {
                RefKind::Struct
            };
            return self.reference(c, kind);
        };
        let count = n >> 3;
        if count > MAX_MEMBERS {
            return err("too many members");
        }
        let pack = (n & 7 != 0).then(|| 1u64 << ((n & 7) - 1));
        const TAUDT_UNALIGNED: u16 = 0x0040;
        const TAUDT_FIXED: u16 = 0x0400;
        const TAFLD_METHOD: u16 = 0x0200;
        const TAFLD_VIRTBASE: u16 = 0x0080;
        let tattr = c.sdacl()?.unwrap_or(0);
        let align_raw = tattr & 0x0f;
        let align = (align_raw & 7 != 0).then(|| 1u64 << ((align_raw & 7) - 1));
        let unaligned = tattr & TAUDT_UNALIGNED != 0;
        let fixed = tattr & TAUDT_FIXED != 0;
        if tattr & TAFLD_METHOD != 0 {
            return err("C++ method members");
        }
        let mut members = Vec::new();
        for _ in 0..count {
            let name = self.field();
            let ty = self.read(c, depth + 1)?;
            let mattr = c.sdacl()?.unwrap_or(0);
            if mattr & TAFLD_VIRTBASE != 0 {
                return err("virtual base");
            }
            let a = mattr & 7;
            let member_method = mattr & TAFLD_METHOD != 0;
            if fixed && !member_method {
                c.ext_att()?;
            }
            members.push(Member {
                name,
                ty,
                align: (a != 0).then(|| 1u64 << (a - 1)),
            });
        }
        if fixed {
            c.ext_att()?;
        }
        let udt = Box::new(Udt {
            members,
            pack,
            align,
            unaligned,
            fixed,
        });
        Ok(if union {
            Kind::Union(udt)
        } else {
            Kind::Struct(udt)
        })
    }

    fn enumeration(&mut self, c: &mut Cur) -> Res<Kind> {
        let Some(count) = c.dt_de()? else {
            return self.reference(c, RefKind::Enum);
        };
        const TAENUM_64BIT: u16 = 0x0020;
        const TAENUM_SIGNED: u16 = 0x0080;
        let tattr = c.tah()?.unwrap_or(0);
        let is_64 = tattr & TAENUM_64BIT != 0;
        let signed = tattr & TAENUM_SIGNED != 0;
        let bte = c.u8()?;
        if bte & 0x80 == 0 {
            return err("enum without its always-on bit");
        }
        let size = match bte & 7 {
            0 => 0,
            n @ 1..=4 => 1u8 << (n - 1),
            _ => return err("reserved enum size"),
        };
        if count > MAX_MEMBERS {
            return err("too many enum members");
        }
        if bte & 0x10 != 0 {
            for _ in 0..count {
                let group = c.dt()?;
                if group == 0 {
                    return err("empty enum group");
                }
                self.field();
                c.de()?;
                if is_64 {
                    c.de()?;
                }
                for _ in 0..group - 1 {
                    self.field();
                    c.de()?;
                    if is_64 {
                        c.de()?;
                    }
                }
            }
        } else {
            for _ in 0..count {
                self.field();
                c.de()?;
                if is_64 {
                    c.de()?;
                }
            }
        }
        Ok(Kind::Enum(size, signed))
    }
}

fn typeref_from(buf: &[u8]) -> Res<Ref> {
    if let Some(rest) = buf.strip_prefix(b"#") {
        let mut c = Cur::new(rest);
        let ordinal = c.de()?;
        return Ok(Ref {
            name: None,
            ordinal: Some(ordinal),
            kind: None,
        });
    }
    Ok(Ref {
        name: (!buf.is_empty()).then(|| String::from_utf8_lossy(buf).into_owned()),
        ordinal: None,
        kind: None,
    })
}

/// The calling-convention nibble of a function type, past any spoiled-register
/// and attribute prefixes.
fn read_cc(c: &mut Cur) -> Res<u8> {
    let mut cc = c.u8()?;
    if cc & 0xf0 != 0xa0 {
        return cc_nibble(cc);
    }
    let next = c.peek();
    if cc & 0x0f != 0x0f || next.is_some_and(|b| b & 0x80 == 0) {
        for _ in 0..64 {
            if cc & 0x0f == 0x0f {
                c.u8()?;
            } else {
                spoiled(c, u16::from(cc & 0x0f))?;
            }
            cc = c.u8()?;
            if cc & 0xf0 != 0xa0 {
                return cc_nibble(cc);
            }
        }
        err("unterminated calling-convention prefix")
    } else {
        let byte2 = c.u8()?;
        c.de()?;
        if byte2 & 1 != 0 {
            let n = c.dt()?;
            spoiled(c, n)?;
        }
        cc_nibble(c.u8()?)
    }
}

fn cc_nibble(cc: u8) -> Res<u8> {
    match cc >> 4 {
        0x0 => err("invalid calling convention"),
        0xa => err("spoiled calling convention"),
        n => Ok(n),
    }
}

fn spoiled(c: &mut Cur, n: u16) -> Res<()> {
    for _ in 0..n.min(256) {
        let b = c.u8()?;
        if b & 0x80 != 0 {
            if b == 0xff {
                c.dt()?;
            }
            c.u8()?;
        }
    }
    Ok(())
}

/// The field list of an entry: `dt`-length-prefixed strings.
fn split_fields(buf: &[u8]) -> Vec<Option<String>> {
    let mut out = Vec::new();
    let mut c = Cur::new(buf);
    while c.pos < buf.len() && out.len() < (MAX_MEMBERS as usize) * 4 {
        let Ok(bytes) = c.dt_bytes() else {
            break;
        };
        out.push((!bytes.is_empty()).then(|| String::from_utf8_lossy(bytes).into_owned()));
    }
    out
}

fn read_header(c: &mut Cur) -> Res<Header> {
    if c.bytes(6)? != MAGIC {
        return err("not an IDA type library (no IDATIL magic)");
    }
    let format = c.u32()?;
    if format >= 0x13 {
        return Err(format!("unsupported .til format {format:#x}"));
    }
    let flags = if (0x10..=0x12).contains(&format) {
        c.u32()?
    } else {
        format
    };
    let title = String::from_utf8_lossy(c.len_u8()?).into_owned();
    c.len_u8()?;
    let compiler = c.u8()?;
    let cm = c.u8()?;
    let size_int = c.u8()?;
    let size_bool = c.u8()?;
    let size_enum = c.u8()?;
    c.u8()?;
    if flags & TIL_ESI != 0 {
        c.bytes(3)?;
    }
    let size_long_double = if flags & TIL_SLD != 0 { c.u8()? } else { 0 };
    let ptr_size = match cm & 3 {
        1 if size_int <= 2 => 1,
        1 => 8,
        2 => 2,
        3 => 4,
        _ => 0,
    };
    Ok(Header {
        format,
        flags,
        title,
        compiler,
        size_int: size_int.max(1),
        size_bool: size_bool.max(1),
        size_enum,
        size_long_double,
        ptr_size,
    })
}

/// One bucket's bytes, inflated when the library is compressed.
fn bucket(c: &mut Cur, zip: bool) -> Res<(u32, Vec<u8>)> {
    let ndefs = c.u32()?;
    let len = c.u32()?;
    if ndefs > MAX_ENTRIES || len > MAX_BUCKET_BYTES {
        return err("bucket larger than a library may be");
    }
    if !zip {
        return Ok((ndefs, c.bytes(len as usize)?.to_vec()));
    }
    if ndefs == 0 && len == 0 {
        return Ok((0, Vec::new()));
    }
    let clen = c.u32()?;
    let packed = c.bytes(clen as usize)?;
    let mut out = Vec::with_capacity((len as usize).min(16 << 20));
    flate2::read::ZlibDecoder::new(packed)
        .take(u64::from(len))
        .read_to_end(&mut out)
        .map_err(|e| format!("inflating a bucket: {e}"))?;
    Ok((ndefs, out))
}

fn entries(header: &Header, ndefs: u32, data: &[u8]) -> Res<Vec<Entry>> {
    let mut c = Cur::new(data);
    let mut out = Vec::new();
    for _ in 0..ndefs {
        let flags = c.u32()?;
        if flags != 0xffff_ffff && flags != 0x7fff_ffff {
            return err("unknown entry flags");
        }
        let name = String::from_utf8_lossy(c.cstr()).into_owned();
        let ordinal = if header.format >= 0x12 && flags >> 31 != 0 {
            c.u64()?
        } else {
            u64::from(c.u32()?)
        };
        let tinfo = c.cstr();
        c.cstr();
        let fields = split_fields(c.cstr());
        c.cstr();
        c.u8()?;
        let mut reader = TypeReader {
            header,
            fields: fields.iter(),
        };
        let ty = reader.read(&mut Cur::new(tinfo), 0).ok();
        out.push(Entry { name, ordinal, ty });
    }
    Ok(out)
}

impl Til {
    /// Parse a whole `.til` file.
    pub fn parse(bytes: &[u8]) -> Result<Til, String> {
        let mut c = Cur::new(bytes);
        let header = read_header(&mut c)?;
        let zip = header.flags & TIL_ZIP != 0;
        let (n, data) = bucket(&mut c, zip)?;
        let symbols = entries(&header, n, &data)?;
        let mut aliases = BTreeMap::new();
        if header.flags & TIL_ORD != 0 {
            let next = c.u32()?;
            if header.flags & TIL_ALI != 0 && next > 0 {
                for _ in 0..MAX_ENTRIES {
                    let src = c.u32()?;
                    if src == u32::MAX {
                        break;
                    }
                    let dst = c.u32()?;
                    aliases.insert(src, dst);
                }
            }
        }
        let (n, data) = bucket(&mut c, zip)?;
        let types = entries(&header, n, &data)?;
        Ok(Til {
            header,
            symbols,
            types,
            aliases,
        })
    }
}

fn is_ident(s: &str) -> bool {
    s.len() <= 255
        && s.starts_with(|c: char| c.is_ascii_alphabetic() || c == '_')
        && s.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
}

/// A type name spelled as a C identifier: IDA's anonymous-type names
/// (`$<hash>`, `Outer::$<hash>`) become `_<hash>` and `Outer___<hash>`, the
/// same way at the definition and at every reference.
fn c_name(name: &str) -> Option<String> {
    let s = name.replace("::", "__").replace('$', "_");
    let s = if s.starts_with(|c: char| c.is_ascii_digit()) {
        format!("_{s}")
    } else {
        s
    };
    (is_ident(&s) && !RESERVED.contains(&s.as_str())).then_some(s)
}

/// Words the C grammar reserves, never a type or parameter name here.
const RESERVED: &[&str] = &[
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
    "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register",
    "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while", "_Bool", "bool", "wchar_t",
];

/// What a named type is, for spelling a reference to it.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Named {
    Struct,
    Union,
    Enum,
    Typedef,
}

/// Renders a parsed library as type-library text.
struct Renderer<'t> {
    til: &'t Til,
    ptr_size: u64,
    by_name: BTreeMap<&'t str, usize>,
    by_ordinal: BTreeMap<u64, usize>,
    layouts: BTreeMap<usize, Option<(u64, u64)>>,
    visiting: BTreeSet<usize>,
    /// Anonymous member records synthesized while rendering, as library lines.
    extra: Vec<String>,
    extra_names: BTreeSet<String>,
}

fn align_up(v: u64, a: u64) -> u64 {
    let a = a.max(1);
    v.div_ceil(a).saturating_mul(a)
}

impl<'t> Renderer<'t> {
    fn new(til: &'t Til, ptr_size: u64) -> Self {
        let mut by_name = BTreeMap::new();
        let mut by_ordinal = BTreeMap::new();
        for (i, e) in til.types.iter().enumerate() {
            if e.ty.is_some() {
                by_name.entry(e.name.as_str()).or_insert(i);
                by_ordinal.entry(e.ordinal).or_insert(i);
            }
        }
        Renderer {
            til,
            ptr_size,
            by_name,
            by_ordinal,
            layouts: BTreeMap::new(),
            visiting: BTreeSet::new(),
            extra: Vec::new(),
            extra_names: BTreeSet::new(),
        }
    }

    fn resolve(&self, r: &Ref) -> Option<usize> {
        if let Some(name) = &r.name {
            return self.by_name.get(name.as_str()).copied();
        }
        let ord = r.ordinal?;
        let ord = self.til.aliases.get(&ord).copied().unwrap_or(ord);
        self.by_ordinal.get(&u64::from(ord)).copied()
    }

    fn named(&self, idx: usize) -> Named {
        match self.til.types[idx].ty.as_ref().map(|t| &t.kind) {
            Some(Kind::Struct(_)) => Named::Struct,
            Some(Kind::Union(_)) => Named::Union,
            Some(Kind::Enum(..)) => Named::Enum,
            _ => Named::Typedef,
        }
    }

    fn int_name(bytes: u64, sign: Option<bool>) -> Option<&'static str> {
        Some(match (bytes, sign) {
            (1, Some(true)) => "signed char",
            (1, Some(false)) => "unsigned char",
            (1, None) => "char",
            (2, Some(false)) => "unsigned short",
            (2, _) => "short",
            (4, Some(false)) => "unsigned int",
            (4, _) => "int",
            (8, Some(false)) => "unsigned long long",
            (8, _) => "long long",
            _ => return None,
        })
    }

    /// The base spelling of a non-derived type.
    fn base(&mut self, ty: &Type, owner: &str, member: &str) -> Option<String> {
        let (size_int, size_enum) = (self.til.header.size_int, self.til.header.size_enum);
        let text: String = match &ty.kind {
            Kind::Void => "void".into(),
            Kind::Unknown(n) => match n {
                1 => "unsigned char",
                2 => "unsigned short",
                4 => "unsigned int",
                8 => "unsigned long long",
                _ => return None,
            }
            .into(),
            Kind::Bool(1) => "_Bool".into(),
            Kind::Bool(n) => Self::int_name(u64::from(*n), Some(false))?.into(),
            Kind::Char => "char".into(),
            Kind::Int(n, sign) => {
                let bytes = if *n == 0 { size_int } else { *n };
                Self::int_name(u64::from(bytes), *sign)?.into()
            }
            Kind::Float(4) => "float".into(),
            Kind::Float(8) => "double".into(),
            Kind::Float(n) if *n > 8 => "long double".into(),
            Kind::Float(_) => return None,
            Kind::Enum(size, signed) => {
                let bytes = match (*size, size_enum) {
                    (0, 0) => 4,
                    (0, n) | (n, _) => n,
                };
                Self::int_name(u64::from(bytes), Some(*signed))?.into()
            }
            Kind::Ref(r) => {
                let idx = self.resolve(r);
                let raw = match (&r.name, idx) {
                    (Some(n), _) => n.clone(),
                    (None, Some(i)) => self.til.types[i].name.clone(),
                    (None, None) => return None,
                };
                let name = c_name(&raw)?;
                let named = idx.map(|i| self.named(i));
                match (&r.kind, named) {
                    (_, Some(Named::Struct)) | (Some(RefKind::Struct), None) => {
                        format!("struct {name}")
                    }
                    (_, Some(Named::Union)) | (Some(RefKind::Union), None) => {
                        format!("union {name}")
                    }
                    (_, Some(Named::Enum | Named::Typedef)) => name,
                    _ => return None,
                }
            }
            Kind::Struct(udt) | Kind::Union(udt) => {
                let union = matches!(ty.kind, Kind::Union(_));
                let name = format!("{owner}__{member}");
                if !is_ident(&name) {
                    return None;
                }
                if self.extra_names.insert(name.clone()) {
                    let lines = self.record_lines(&name, udt, union)?;
                    self.extra.extend(lines);
                }
                format!("{} {name}", if union { "union" } else { "struct" })
            }
            _ => return None,
        };
        Some(if ty.is_const {
            format!("const {text}")
        } else {
            text
        })
    }

    /// The C declaration of `ty` around the declarator `decl` (`""` for an
    /// abstract one).
    fn declare(
        &mut self,
        ty: &Type,
        decl: &str,
        owner: &str,
        member: &str,
        depth: usize,
    ) -> Option<String> {
        if depth > MAX_DEPTH {
            return None;
        }
        match &ty.kind {
            Kind::Ptr(inner) => {
                let star = format!("*{decl}");
                let wrapped = match inner.kind {
                    Kind::Array(..) | Kind::Func(_) => format!("({star})"),
                    _ => star,
                };
                self.declare(inner, &wrapped, owner, member, depth + 1)
            }
            Kind::Array(elem, n) => {
                self.declare(elem, &format!("{decl}[{n}]"), owner, member, depth + 1)
            }
            Kind::Func(f) => {
                let params = self.params(f, owner, depth)?;
                self.declare(
                    &f.ret,
                    &format!("{decl}({params})"),
                    owner,
                    member,
                    depth + 1,
                )
            }
            _ => {
                let base = self.base(ty, owner, member)?;
                Some(if decl.is_empty() {
                    base
                } else if decl.starts_with('[') {
                    format!("{base}{decl}")
                } else {
                    format!("{base} {decl}")
                })
            }
        }
    }

    fn params(&mut self, f: &Func, owner: &str, depth: usize) -> Option<String> {
        if f.cc == CC_VOIDARG || (f.args.is_empty() && f.cc != CC_ELLIPSIS) {
            return Some("void".into());
        }
        let mut parts = Vec::new();
        for (i, (name, ty)) in f.args.iter().enumerate() {
            let name = name
                .as_deref()
                .filter(|n| is_ident(n) && !RESERVED.contains(n) && !self.by_name.contains_key(*n))
                .unwrap_or("");
            parts.push(self.declare(ty, name, owner, &format!("arg{i}"), depth + 1)?);
        }
        if f.cc == CC_ELLIPSIS {
            parts.push("...".into());
        }
        Some(parts.join(", "))
    }

    /// Size and alignment of `ty`, or `None` when it cannot be laid out.
    fn layout(&mut self, ty: &Type, depth: usize) -> Option<(u64, u64)> {
        if depth > MAX_DEPTH {
            return None;
        }
        let (size_int, size_enum) = (self.til.header.size_int, self.til.header.size_enum);
        let scalar = |n: u64| (n > 0).then_some((n, n.next_power_of_two().min(16)));
        match &ty.kind {
            Kind::Unknown(n) | Kind::Bool(n) | Kind::Float(n) => scalar(u64::from(*n)),
            Kind::Char => scalar(1),
            Kind::Int(n, _) => scalar(u64::from(if *n == 0 { size_int } else { *n })),
            Kind::Enum(n, _) => {
                let n = match (*n, size_enum) {
                    (0, 0) => 4,
                    (0, e) | (e, _) => e,
                };
                scalar(u64::from(n))
            }
            Kind::Ptr(_) => scalar(self.ptr_size),
            Kind::Array(elem, n) => {
                let (size, align) = self.layout(elem, depth + 1)?;
                Some((
                    size.checked_mul(u64::from(*n))
                        .filter(|s| *s <= MAX_RECORD)?,
                    align,
                ))
            }
            Kind::Ref(r) => {
                let idx = self.resolve(r)?;
                self.layout_of(idx, depth + 1)
            }
            Kind::Struct(udt) => self.struct_layout(udt, depth + 1).map(|(s, a, _)| (s, a)),
            Kind::Union(udt) => self.union_layout(udt, depth + 1),
            _ => None,
        }
    }

    fn layout_of(&mut self, idx: usize, depth: usize) -> Option<(u64, u64)> {
        if let Some(known) = self.layouts.get(&idx) {
            return *known;
        }
        if !self.visiting.insert(idx) {
            return None;
        }
        let ty = self.til.types[idx].ty.clone();
        let result = ty.and_then(|ty| self.layout(&ty, depth));
        self.visiting.remove(&idx);
        self.layouts.insert(idx, result);
        result
    }

    /// Size, alignment and per-member offsets (`None` for a bit-field run).
    fn struct_layout(&mut self, udt: &Udt, depth: usize) -> Option<(u64, u64, Vec<Option<u64>>)> {
        if udt.fixed {
            return None;
        }
        let pack = udt.pack.unwrap_or(u64::MAX);
        let mut offset = 0u64;
        let mut max_align = 1u64;
        let mut offsets = Vec::with_capacity(udt.members.len());
        let mut i = 0;
        while i < udt.members.len() {
            let m = &udt.members[i];
            if let Kind::Bitfield { nbytes, width } = m.ty.kind {
                let unit = u64::from(nbytes);
                let bits = unit * 8;
                let mut used = u64::from(width);
                offsets.push(None);
                i += 1;
                while let Some(Kind::Bitfield {
                    nbytes: nb,
                    width: w,
                }) = udt.members.get(i).map(|m| &m.ty.kind)
                {
                    if *nb != nbytes || used + u64::from(*w) > bits {
                        break;
                    }
                    used += u64::from(*w);
                    offsets.push(None);
                    i += 1;
                }
                let a = if udt.unaligned { 1 } else { unit.min(pack) };
                offset = align_up(offset, a) + unit;
                max_align = max_align.max(a);
                continue;
            }
            let (size, natural) = self.layout(&m.ty, depth + 1)?;
            let a = if udt.unaligned {
                1
            } else {
                natural.max(m.align.unwrap_or(1)).min(pack)
            };
            offset = align_up(offset, a);
            offsets.push(Some(offset));
            offset = offset.checked_add(size).filter(|o| *o <= MAX_RECORD)?;
            max_align = max_align.max(a);
            i += 1;
        }
        let align = if udt.unaligned {
            1
        } else {
            max_align.max(udt.align.unwrap_or(1))
        };
        Some((align_up(offset, align), align, offsets))
    }

    fn union_layout(&mut self, udt: &Udt, depth: usize) -> Option<(u64, u64)> {
        let mut size = 0u64;
        let mut align = 1u64;
        for m in &udt.members {
            let (s, a) = match m.ty.kind {
                Kind::Bitfield { nbytes, .. } => (u64::from(nbytes), u64::from(nbytes)),
                _ => self.layout(&m.ty, depth + 1)?,
            };
            size = size.max(s);
            align = align.max(a.max(m.align.unwrap_or(1)));
        }
        if udt.unaligned {
            align = 1;
        }
        align = align.max(udt.align.unwrap_or(1));
        Some((align_up(size, align), align))
    }

    /// The `S`/`U` entry of a record and its member lines, or `None` when it
    /// cannot be laid out.
    fn record_lines(&mut self, name: &str, udt: &Udt, union: bool) -> Option<Vec<String>> {
        let (size, align, offsets) = if union {
            let (s, a) = self.union_layout(udt, 0)?;
            (s, a, vec![Some(0); udt.members.len()])
        } else {
            self.struct_layout(udt, 0)?
        };
        let mut lines = vec![format!(
            "{} {name} * {size} {align}",
            if union { "U" } else { "S" }
        )];
        for (i, (m, off)) in udt.members.iter().zip(offsets).enumerate() {
            let Some(off) = off else { continue };
            let member = m
                .name
                .clone()
                .filter(|n| is_ident(n))
                .unwrap_or_else(|| format!("field_{i}"));
            let Some(text) = self.declare(&m.ty, "", name, &member, 0) else {
                continue;
            };
            let line = format!(" {off} {member}\t{text}");
            if line.len() <= MAX_LINE {
                lines.push(line);
            }
        }
        Some(lines)
    }
}

fn cc_keyword(cc: u8, ptr_size: u64) -> Option<&'static str> {
    if ptr_size != 4 {
        return None;
    }
    match cc {
        CC_STDCALL | CC_PASCAL => Some("__stdcall"),
        CC_FASTCALL => Some("__fastcall"),
        CC_THISCALL => Some("__thiscall"),
        _ => None,
    }
}

/// Render `til` as type-library text for `target`. `ptr_size` stands in for
/// the pointer size when the library's memory model states none.
pub fn render(til: &Til, target: &str, ptr_size: u8) -> String {
    let ptr = match til.header.ptr_size {
        0 => u64::from(ptr_size),
        n => u64::from(n),
    };
    let mut r = Renderer::new(til, ptr);
    let mut out = String::new();
    let title = til.header.title.replace(['\n', '\r'], " ");
    let _ = writeln!(out, "{FORMAT_LINE}");
    let _ = writeln!(out, "target {target}");
    let source = if title.trim().is_empty() {
        "-"
    } else {
        title.trim()
    };
    let _ = writeln!(out, "source til {source}");
    let mut lines: Vec<String> = Vec::new();
    let mut seen = BTreeSet::new();
    for (idx, e) in til.types.iter().enumerate() {
        let Some(ty) = &e.ty else { continue };
        let Some(name) = c_name(&e.name) else {
            continue;
        };
        if !seen.insert(name.clone()) {
            continue;
        }
        match &ty.kind {
            Kind::Struct(udt) | Kind::Union(udt) => {
                let union = matches!(ty.kind, Kind::Union(_));
                if r.layout_of(idx, 0).is_none() {
                    continue;
                }
                if let Some(rec) = r.record_lines(&name, udt, union) {
                    lines.extend(rec);
                }
            }
            Kind::Func(_) => {}
            Kind::Ref(rf) if rf.name.as_deref() == Some(e.name.as_str()) => {}
            _ => {
                if let Some(text) = r.declare(ty, "", &name, "type", 0) {
                    let line = format!("T {name} *\t{text}");
                    if line.len() <= MAX_LINE {
                        lines.push(line);
                    }
                }
            }
        }
    }
    let mut fseen = BTreeSet::new();
    for e in &til.symbols {
        let Some(Type {
            kind: Kind::Func(f),
            ..
        }) = &e.ty
        else {
            continue;
        };
        if !is_ident(&e.name) || !fseen.insert(e.name.clone()) {
            continue;
        }
        let decl = match cc_keyword(f.cc, ptr) {
            Some(kw) => format!("{kw} {}", e.name),
            None => e.name.clone(),
        };
        let Some(params) = r.params(f, &e.name, 0) else {
            continue;
        };
        let Some(text) = r.declare(&f.ret, &format!("{decl}({params})"), &e.name, "ret", 0) else {
            continue;
        };
        let line = format!("F {} *\t{text}", e.name);
        if line.len() <= MAX_LINE {
            lines.push(line);
        }
    }
    for line in r.extra.iter().chain(&lines) {
        out.push_str(line);
        out.push('\n');
    }
    out
}

/// The C declaration, named `name`, of a type string stored outside a library's
/// buckets: the prototype an IDA database keeps beside a function (`NSUP_TYPEINFO`).
/// `fields` is the raw list of parameter and member names stored with it; named types
/// resolve through `til` (the database's own library), whose header sizes `int`,
/// `bool` and `enum`. `None` when the type cannot be spelled in C.
pub fn declare_type_string(
    til: &Til,
    type_bytes: &[u8],
    fields: &[u8],
    name: &str,
    ptr_size: u8,
) -> Option<String> {
    let end = fields.iter().position(|b| *b == 0).unwrap_or(fields.len());
    let fields = split_fields(&fields[..end]);
    let mut reader = TypeReader {
        header: &til.header,
        fields: fields.iter(),
    };
    let ty = reader.read(&mut Cur::new(type_bytes), 0).ok()?;
    let ptr = match til.header.ptr_size {
        0 => u64::from(ptr_size),
        n => u64::from(n),
    };
    let mut r = Renderer::new(til, ptr);
    let text = match &ty.kind {
        Kind::Func(f) => {
            let decl = match cc_keyword(f.cc, ptr) {
                Some(kw) => format!("{kw} {name}"),
                None => name.to_string(),
            };
            let params = r.params(f, name, 0)?;
            r.declare(&f.ret, &format!("{decl}({params})"), name, "ret", 0)?
        }
        _ => r.declare(&ty, name, name, "type", 0)?,
    };
    (text.len() <= MAX_LINE).then_some(text)
}

/// Every named type of `til` as `(ordinal, name, C declaration ending in ';')`: a record as its
/// definition (`struct name { ... };`, bit-fields as `unsigned int f : 3;`), anything
/// else as a typedef (an enum as its integer). A type whose name or a member of which
/// C cannot spell here is left out, as is a record laid out at stated offsets.
pub fn c_declarations(til: &Til, ptr_size: u8) -> Vec<(u64, String, String)> {
    let ptr = match til.header.ptr_size {
        0 => u64::from(ptr_size),
        n => u64::from(n),
    };
    let mut r = Renderer::new(til, ptr);
    let mut out = Vec::new();
    let mut seen = BTreeSet::new();
    for e in &til.types {
        let Some(ty) = &e.ty else { continue };
        let Some(name) = c_name(&e.name) else {
            continue;
        };
        if !seen.insert(name.clone()) {
            continue;
        }
        let decl = match &ty.kind {
            Kind::Struct(udt) | Kind::Union(udt) => {
                if udt.fixed {
                    continue;
                }
                let keyword = if matches!(ty.kind, Kind::Union(_)) {
                    "union"
                } else {
                    "struct"
                };
                let mut members = String::new();
                let mut ok = true;
                for (i, m) in udt.members.iter().enumerate() {
                    let member = m
                        .name
                        .clone()
                        .filter(|n| is_ident(n) && !RESERVED.contains(&n.as_str()))
                        .unwrap_or_else(|| format!("field_{i}"));
                    let text = match m.ty.kind {
                        Kind::Bitfield { nbytes, width } => {
                            Renderer::int_name(u64::from(nbytes), Some(false))
                                .map(|base| format!("{base} {member} : {width}"))
                        }
                        _ => r.declare(&m.ty, &member, &name, &member, 0),
                    };
                    let Some(text) = text else {
                        ok = false;
                        break;
                    };
                    members.push_str(&text);
                    members.push_str("; ");
                }
                if !ok {
                    continue;
                }
                format!("{keyword} {name} {{ {members}}};")
            }
            Kind::Ref(rf) if rf.name.as_deref() == Some(e.name.as_str()) => continue,
            _ => match r.declare(ty, &name, &name, "type", 0) {
                Some(text) => format!("typedef {text};"),
                None => continue,
            },
        };
        if decl.len() <= MAX_LINE {
            out.push((e.ordinal, name, decl));
        }
    }
    out
}

/// The first line of every type-library text (`typelib 1`).
pub const FORMAT_LINE: &str = "typelib 1";

/// `true` when `bytes` opens like an IDA type library.
pub fn is_til(bytes: &[u8]) -> bool {
    bytes.starts_with(MAGIC)
}

/// Parse a `.til` file and render it as type-library text for `target`.
pub fn to_typelib(bytes: &[u8], target: &str, ptr_size: u8) -> Result<String, String> {
    Til::parse(bytes).map(|til| render(&til, target, ptr_size))
}

#[cfg(test)]
mod tests;
