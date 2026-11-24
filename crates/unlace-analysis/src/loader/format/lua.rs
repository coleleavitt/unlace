//! (unlace) The Lua `luac` binary chunk container, versions 5.1 to 5.4: the
//! header, every function prototype, the constant pool, upvalue descriptors,
//! nested prototypes and debug names, read into plain tables. Instructions stay
//! as their raw 32-bit words; decoding them is the lifter's job.
//!
//! The reader follows each release's dumper. Every count is checked against
//! the bytes left before anything is stored for it, nesting is capped, and a
//! malformed or truncated chunk is an error, never a panic.

/// The four bytes every chunk opens with: ESC and "Lua".
pub const LUA_SIGNATURE: &[u8; 4] = b"\x1bLua";

/// Deepest prototype nesting accepted. The reference loader stops near 200 C calls.
pub const MAX_PROTO_DEPTH: usize = 200;

/// Whether `bytes` opens with the Lua chunk signature.
pub fn is_lua_chunk(bytes: &[u8]) -> bool {
    bytes.starts_with(LUA_SIGNATURE)
}

pub type LuaResult<T> = Result<T, String>;

/// The release that wrote the chunk, from the version byte.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum LuaVersion {
    V51,
    V52,
    V53,
    V54,
}

impl LuaVersion {
    fn from_byte(byte: u8) -> Option<Self> {
        Some(match byte {
            0x51 => Self::V51,
            0x52 => Self::V52,
            0x53 => Self::V53,
            0x54 => Self::V54,
            _ => return None,
        })
    }
}

/// The header fields the rest of the chunk depends on.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LuaHeader {
    pub version: LuaVersion,
    /// The format byte; 0 is the official format.
    pub format: u8,
    pub little_endian: bool,
    /// `sizeof(int)`, 4 or 8. Lua 5.3 and 5.4 fix it at 4.
    pub int_size: u8,
    /// `sizeof(size_t)`, 4 or 8. Lua 5.3 and 5.4 do not record it; 8 is assumed.
    pub size_t_size: u8,
    /// `sizeof(Instruction)`; always 4 here.
    pub instruction_size: u8,
    /// `sizeof(lua_Integer)`, 4 or 8. Lua 5.1 and 5.2 have no integer type; 8 is recorded.
    pub integer_size: u8,
    /// `sizeof(lua_Number)`, 4 or 8.
    pub number_size: u8,
    /// Lua 5.1 and 5.2 builds whose `lua_Number` is an integer type.
    pub number_is_integer: bool,
}

/// A constant-pool entry. Strings are raw bytes: Lua strings need not be UTF-8.
#[derive(Clone, Debug, PartialEq)]
pub enum LuaConstant {
    Nil,
    Bool(bool),
    Integer(i64),
    Float(f64),
    String(Vec<u8>),
}

/// One upvalue descriptor (Lua 5.2 and later).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct LuaUpvalueDesc {
    /// The upvalue is a local of the enclosing function, not one of its upvalues.
    pub in_stack: bool,
    pub index: u8,
    /// The 5.4 kind byte; 0 before 5.4.
    pub kind: u8,
}

/// One debug local: its name and the program counters it is live over.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LuaLocVar {
    pub name: Vec<u8>,
    pub start_pc: u32,
    pub end_pc: u32,
}

/// One function prototype.
#[derive(Clone, Debug, PartialEq)]
pub struct LuaProto {
    /// The source name the function declares. `None` is the NULL encoding: the
    /// name is the enclosing function's, so a consumer resolves it through its parent.
    pub source: Option<Vec<u8>>,
    pub line_defined: u32,
    pub last_line_defined: u32,
    /// Lua 5.1 only: the upvalue count byte. Zero before 5.1 wrote it, and in
    /// 5.2 and later the count is `upvalues.len()`.
    pub num_upvalues: u8,
    pub num_params: u8,
    /// Nonzero when the function takes varargs (5.1 writes flag bits here).
    pub is_vararg: bool,
    pub max_stack_size: u8,
    /// Raw instruction words in the chunk's byte order.
    pub code: Vec<u32>,
    pub constants: Vec<LuaConstant>,
    /// Empty for Lua 5.1, which keeps upvalue names only in the debug section.
    pub upvalues: Vec<LuaUpvalueDesc>,
    /// Nested prototypes in dump order (depth first).
    pub protos: Vec<LuaProto>,
    /// Line numbers in 5.1 to 5.3; the signed 5.4 deltas, before `abs_line_info`.
    pub line_info: Vec<i32>,
    /// Lua 5.4 absolute line anchors as `(pc, line)`; empty before 5.4.
    pub abs_line_info: Vec<(u32, u32)>,
    pub locals: Vec<LuaLocVar>,
    pub upvalue_names: Vec<Vec<u8>>,
}

/// A parsed `luac` chunk.
#[derive(Clone, Debug, PartialEq)]
pub struct LuaChunk {
    pub header: LuaHeader,
    /// The main closure's upvalue count, written before the main prototype in
    /// 5.2 and later. Zero for 5.1, whose count sits in the prototype.
    pub main_upvalues: u8,
    pub main: LuaProto,
}

impl LuaChunk {
    /// Parse a whole chunk. Trailing bytes after the main prototype are ignored,
    /// as the reference loader ignores them.
    pub fn parse(bytes: &[u8]) -> LuaResult<Self> {
        let mut r = Reader::new(bytes);
        let header = parse_header(&mut r)?;
        let main_upvalues = if header.version == LuaVersion::V51 {
            0
        } else {
            r.byte()?
        };
        let main = parse_proto(&mut r, 0)?;
        Ok(Self {
            header,
            main_upvalues,
            main,
        })
    }
}

/// The byte cursor. The fields from `version` down are set by the header and
/// are only read after it.
struct Reader<'a> {
    data: &'a [u8],
    pos: usize,
    version: LuaVersion,
    little_endian: bool,
    int_size: u8,
    size_t_size: u8,
    instruction_size: u8,
    integer_size: u8,
    number_size: u8,
    number_is_integer: bool,
}

impl<'a> Reader<'a> {
    fn new(data: &'a [u8]) -> Self {
        Self {
            data,
            pos: 0,
            version: LuaVersion::V51,
            little_endian: true,
            int_size: 4,
            size_t_size: 8,
            instruction_size: 4,
            integer_size: 8,
            number_size: 8,
            number_is_integer: false,
        }
    }

    fn eof(&self) -> String {
        format!("unexpected end of chunk at offset {}", self.pos)
    }

    fn remaining(&self) -> usize {
        self.data.len() - self.pos
    }

    fn take(&mut self, n: usize) -> LuaResult<&'a [u8]> {
        let end = self
            .pos
            .checked_add(n)
            .filter(|&end| end <= self.data.len())
            .ok_or_else(|| self.eof())?;
        let data = self.data;
        let bytes = &data[self.pos..end];
        self.pos = end;
        Ok(bytes)
    }

    fn byte(&mut self) -> LuaResult<u8> {
        Ok(self.take(1)?[0])
    }

    /// An unsigned fixed-width integer of `size` bytes in the chunk's byte order.
    fn uint_fixed(&mut self, size: u8) -> LuaResult<u64> {
        let bytes = self.take(usize::from(size))?;
        Ok(if self.little_endian {
            bytes
                .iter()
                .rev()
                .fold(0, |acc, &b| (acc << 8) | u64::from(b))
        } else {
            bytes.iter().fold(0, |acc, &b| (acc << 8) | u64::from(b))
        })
    }

    /// Lua 5.4's `dumpSize` encoding: 7-bit groups, most significant first, with
    /// the high bit set on the last group.
    fn varint(&mut self) -> LuaResult<u64> {
        let mut x: u64 = 0;
        loop {
            let b = self.byte()?;
            if x > (u64::MAX >> 7) {
                return Err(format!("varint overflows at offset {}", self.pos));
            }
            x = (x << 7) | u64::from(b & 0x7f);
            if b & 0x80 != 0 {
                return Ok(x);
            }
        }
    }

    /// An `int` as the release writes it.
    fn int(&mut self) -> LuaResult<u32> {
        let v = if self.version == LuaVersion::V54 {
            self.varint()?
        } else {
            let size = self.int_size;
            self.uint_fixed(size)?
        };
        u32::try_from(v).map_err(|_| format!("int {v} out of range at offset {}", self.pos))
    }

    /// A list length. Each element takes at least `min_bytes`, so a count the
    /// rest of the chunk cannot hold is rejected before anything is stored.
    fn count(&mut self, min_bytes: usize) -> LuaResult<usize> {
        let n = usize::try_from(self.int()?).unwrap_or(usize::MAX);
        let fits = n
            .checked_mul(min_bytes)
            .is_some_and(|need| need <= self.remaining());
        if !fits {
            return Err(format!(
                "count {n} at offset {} needs more bytes than the chunk holds",
                self.pos
            ));
        }
        Ok(n)
    }

    /// A `size_t` as the release writes it.
    fn size(&mut self) -> LuaResult<u64> {
        if self.version == LuaVersion::V54 {
            self.varint()
        } else {
            let size = self.size_t_size;
            self.uint_fixed(size)
        }
    }

    /// A string, or `None` for the NULL encoding (size 0). Lua 5.1 to 5.3 count
    /// the trailing NUL in the size; Lua 5.4 stores the length plus one.
    fn string(&mut self) -> LuaResult<Option<Vec<u8>>> {
        let raw = self.size()?;
        if raw == 0 {
            return Ok(None);
        }
        let on_wire = if self.version == LuaVersion::V54 {
            raw - 1
        } else {
            raw
        };
        if on_wire > self.remaining() as u64 {
            return Err(format!(
                "string of {raw} bytes at offset {} overruns the chunk",
                self.pos
            ));
        }
        let bytes = self.take(on_wire as usize)?;
        let text = if self.version == LuaVersion::V54 {
            bytes
        } else {
            &bytes[..bytes.len() - 1]
        };
        Ok(Some(text.to_vec()))
    }

    /// A string where the NULL encoding means the empty string.
    fn string_or_empty(&mut self) -> LuaResult<Vec<u8>> {
        Ok(self.string()?.unwrap_or_default())
    }

    /// A signed integer of `size` bytes (`lua_Integer`, or an integral `lua_Number`).
    fn signed(&mut self, size: u8) -> LuaResult<i64> {
        let bits = self.uint_fixed(size)?;
        Ok(if size == 4 {
            i64::from(bits as u32 as i32)
        } else {
            bits as i64
        })
    }

    /// A floating-point `lua_Number` of `number_size` bytes.
    fn float(&mut self) -> LuaResult<f64> {
        let size = self.number_size;
        let bits = self.uint_fixed(size)?;
        Ok(if size == 4 {
            f64::from(f32::from_bits(bits as u32))
        } else {
            f64::from_bits(bits)
        })
    }

    fn constant(&mut self) -> LuaResult<LuaConstant> {
        let tag = self.byte()?;
        Ok(match (self.version, tag) {
            (_, 0x00) => LuaConstant::Nil,
            (LuaVersion::V51 | LuaVersion::V52 | LuaVersion::V53, 0x01) => {
                LuaConstant::Bool(self.byte()? != 0)
            }
            (LuaVersion::V54, 0x01) => LuaConstant::Bool(false),
            (LuaVersion::V54, 0x11) => LuaConstant::Bool(true),
            (LuaVersion::V51 | LuaVersion::V52, 0x03) => {
                if self.number_is_integer {
                    let size = self.number_size;
                    LuaConstant::Integer(self.signed(size)?)
                } else {
                    LuaConstant::Float(self.float()?)
                }
            }
            (LuaVersion::V53, 0x03) => LuaConstant::Float(self.float()?),
            (LuaVersion::V53, 0x13) => {
                let size = self.integer_size;
                LuaConstant::Integer(self.signed(size)?)
            }
            (LuaVersion::V54, 0x03) => {
                let size = self.integer_size;
                LuaConstant::Integer(self.signed(size)?)
            }
            (LuaVersion::V54, 0x13) => LuaConstant::Float(self.float()?),
            (LuaVersion::V51 | LuaVersion::V52, 0x04)
            | (LuaVersion::V53, 0x04 | 0x14)
            | (LuaVersion::V54, 0x04 | 0x14) => LuaConstant::String(self.string_or_empty()?),
            _ => {
                return Err(format!(
                    "invalid constant tag 0x{tag:02x} at offset {}",
                    self.pos
                ));
            }
        })
    }
}

fn parse_header(r: &mut Reader<'_>) -> LuaResult<LuaHeader> {
    if r.take(4)? != LUA_SIGNATURE {
        return Err("not a Lua chunk (bad signature)".to_string());
    }
    let version_byte = r.byte()?;
    let version = LuaVersion::from_byte(version_byte)
        .ok_or_else(|| format!("unsupported Lua version byte 0x{version_byte:02x}"))?;
    r.version = version;
    let format = r.byte()?;
    let instruction_size;
    match version {
        LuaVersion::V51 => {
            r.little_endian = r.byte()? == 1;
            r.int_size = r.byte()?;
            r.size_t_size = r.byte()?;
            instruction_size = r.byte()?;
            r.number_size = r.byte()?;
            r.number_is_integer = r.byte()? != 0;
        }
        LuaVersion::V52 => {
            // LUAC_TAIL, then the sizes and the integral-number flag. A 5.2
            // header carries no byte-order mark, so little-endian is assumed.
            r.take(6)?;
            r.little_endian = true;
            r.int_size = r.byte()?;
            r.size_t_size = r.byte()?;
            instruction_size = r.byte()?;
            r.number_size = r.byte()?;
            r.number_is_integer = r.byte()? != 0;
        }
        LuaVersion::V53 | LuaVersion::V54 => {
            // LUAC_DATA, the instruction, lua_Integer and lua_Number sizes, then
            // LUAC_INT (0x5678) in the writer's byte order, which gives the
            // endianness, and LUAC_NUM (370.5), which is read but not checked.
            r.take(6)?;
            instruction_size = r.byte()?;
            r.integer_size = r.byte()?;
            r.number_size = r.byte()?;
            r.int_size = 4;
            r.size_t_size = 8;
            let integer_size = r.integer_size;
            let check = r.take(usize::from(integer_size))?;
            let as_le = check
                .iter()
                .rev()
                .fold(0u64, |acc, &b| (acc << 8) | u64::from(b));
            let as_be = check.iter().fold(0u64, |acc, &b| (acc << 8) | u64::from(b));
            r.little_endian = if as_le == 0x5678 {
                true
            } else if as_be == 0x5678 {
                false
            } else {
                return Err("LUAC_INT check failed: unknown byte order".to_string());
            };
            let number_size = r.number_size;
            r.take(usize::from(number_size))?;
        }
    }
    r.instruction_size = instruction_size;
    if r.instruction_size != 4 {
        return Err(format!(
            "unsupported instruction size {}",
            r.instruction_size
        ));
    }
    for (name, size) in [
        ("int", r.int_size),
        ("size_t", r.size_t_size),
        ("lua_Integer", r.integer_size),
        ("lua_Number", r.number_size),
    ] {
        if size != 4 && size != 8 {
            return Err(format!("unsupported {name} size {size}"));
        }
    }
    Ok(LuaHeader {
        version,
        format,
        little_endian: r.little_endian,
        int_size: r.int_size,
        size_t_size: r.size_t_size,
        instruction_size: r.instruction_size,
        integer_size: r.integer_size,
        number_size: r.number_size,
        number_is_integer: r.number_is_integer,
    })
}

/// One prototype, in the field order of the release's `LoadFunction`.
fn parse_proto(r: &mut Reader<'_>, depth: usize) -> LuaResult<LuaProto> {
    if depth > MAX_PROTO_DEPTH {
        return Err(format!("prototype nesting exceeds {MAX_PROTO_DEPTH}"));
    }
    let source = r.string()?;
    let line_defined = r.int()?;
    let last_line_defined = r.int()?;
    let num_upvalues = if r.version == LuaVersion::V51 {
        r.byte()?
    } else {
        0
    };
    let num_params = r.byte()?;
    let is_vararg = r.byte()? != 0;
    let max_stack_size = r.byte()?;

    let instruction_size = r.instruction_size;
    let n_code = r.count(usize::from(instruction_size))?;
    let mut code = Vec::new();
    for _ in 0..n_code {
        code.push(r.uint_fixed(instruction_size)? as u32);
    }

    let n_constants = r.count(1)?;
    let mut constants = Vec::new();
    for _ in 0..n_constants {
        constants.push(r.constant()?);
    }

    let mut upvalues = Vec::new();
    if r.version != LuaVersion::V51 {
        let n_upvalues = r.count(2)?;
        for _ in 0..n_upvalues {
            let in_stack = r.byte()? != 0;
            let index = r.byte()?;
            let kind = if r.version == LuaVersion::V54 {
                r.byte()?
            } else {
                0
            };
            upvalues.push(LuaUpvalueDesc {
                in_stack,
                index,
                kind,
            });
        }
    }

    let n_protos = r.count(1)?;
    let mut protos = Vec::new();
    for _ in 0..n_protos {
        protos.push(parse_proto(r, depth + 1)?);
    }

    // Debug section: line numbers, 5.4 absolute anchors, locals, upvalue names.
    let n_lines = r.count(1)?;
    let mut line_info = Vec::new();
    for _ in 0..n_lines {
        line_info.push(if r.version == LuaVersion::V54 {
            i32::from(r.byte()? as i8)
        } else {
            let int_size = r.int_size;
            r.uint_fixed(int_size)? as u32 as i32
        });
    }

    let mut abs_line_info = Vec::new();
    if r.version == LuaVersion::V54 {
        let n_abs = r.count(2)?;
        for _ in 0..n_abs {
            let pc = r.int()?;
            let line = r.int()?;
            abs_line_info.push((pc, line));
        }
    }

    let n_locals = r.count(1)?;
    let mut locals = Vec::new();
    for _ in 0..n_locals {
        let name = r.string_or_empty()?;
        let start_pc = r.int()?;
        let end_pc = r.int()?;
        locals.push(LuaLocVar {
            name,
            start_pc,
            end_pc,
        });
    }

    let n_upvalue_names = r.count(1)?;
    let mut upvalue_names = Vec::new();
    for _ in 0..n_upvalue_names {
        upvalue_names.push(r.string_or_empty()?);
    }

    Ok(LuaProto {
        source,
        line_defined,
        last_line_defined,
        num_upvalues,
        num_params,
        is_vararg,
        max_stack_size,
        code,
        constants,
        upvalues,
        protos,
        line_info,
        abs_line_info,
        locals,
        upvalue_names,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A 5.4 varint: 7-bit groups, most significant first, high bit on the last.
    fn varint(mut v: u64) -> Vec<u8> {
        let mut groups = vec![(v & 0x7f) as u8];
        v >>= 7;
        while v != 0 {
            groups.push((v & 0x7f) as u8);
            v >>= 7;
        }
        groups.reverse();
        let last = groups.len() - 1;
        groups[last] |= 0x80;
        groups
    }

    /// A little-endian 5.4 chunk: one instruction, a string and an integer
    /// constant, one debug local.
    fn chunk54() -> Vec<u8> {
        let mut b = b"\x1bLua".to_vec();
        b.push(0x54);
        b.push(0);
        b.extend_from_slice(b"\x19\x93\r\n\x1a\n");
        b.push(4);
        b.push(8);
        b.push(8);
        b.extend_from_slice(&0x5678i64.to_le_bytes());
        b.extend_from_slice(&370.5f64.to_le_bytes());
        b.push(0);
        b.extend(varint(0));
        b.extend(varint(0));
        b.extend(varint(0));
        b.push(0);
        b.push(1);
        b.push(2);
        b.extend(varint(1));
        b.extend_from_slice(&1u32.to_le_bytes());
        b.extend(varint(2));
        b.push(0x04);
        b.extend(varint(3));
        b.extend_from_slice(b"hi");
        b.push(0x03);
        b.extend_from_slice(&42i64.to_le_bytes());
        b.extend(varint(0));
        b.extend(varint(0));
        b.extend(varint(1));
        b.push(5);
        b.extend(varint(0));
        b.extend(varint(1));
        b.extend(varint(2));
        b.extend_from_slice(b"x");
        b.extend(varint(0));
        b.extend(varint(1));
        b.extend(varint(0));
        b
    }

    #[test]
    fn parses_lua54_main_prototype() {
        let chunk = LuaChunk::parse(&chunk54()).expect("valid 5.4 chunk");
        assert_eq!(chunk.header.version, LuaVersion::V54);
        assert!(chunk.header.little_endian);
        assert_eq!(chunk.main_upvalues, 0);
        assert_eq!(chunk.main.source, None);
        assert!(chunk.main.is_vararg);
        assert_eq!(chunk.main.max_stack_size, 2);
        assert_eq!(chunk.main.code, vec![1]);
        assert_eq!(
            chunk.main.constants,
            vec![
                LuaConstant::String(b"hi".to_vec()),
                LuaConstant::Integer(42)
            ]
        );
        assert_eq!(chunk.main.line_info, vec![5]);
        assert_eq!(chunk.main.locals.len(), 1);
        assert_eq!(chunk.main.locals[0].name, b"x".to_vec());
        assert_eq!(chunk.main.locals[0].end_pc, 1);
    }

    #[test]
    fn every_truncation_is_an_error() {
        let full = chunk54();
        assert!(is_lua_chunk(&full));
        for n in 0..full.len() {
            assert!(
                LuaChunk::parse(&full[..n]).is_err(),
                "prefix of {n} bytes parsed"
            );
        }
    }

    #[test]
    fn rejects_bad_signature_and_huge_count() {
        assert!(!is_lua_chunk(b"\x7fELF"));
        assert!(LuaChunk::parse(b"\x7fELF\x01").is_err());
        let b = chunk54();
        // Replace the code count (varint 1, then one instruction word) with a
        // count far beyond the chunk: the reader must refuse it, not allocate.
        let at = b
            .windows(5)
            .position(|w| w == [0x81, 1, 0, 0, 0])
            .expect("code count present");
        let mut huge = b[..at].to_vec();
        huge.extend(varint(1 << 40));
        huge.extend_from_slice(&b[at + 5..]);
        assert!(LuaChunk::parse(&huge).is_err());
    }
}
