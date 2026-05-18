//! Lua bytecode chunk parser.
//!
//! Parses the binary chunk format for Lua 5.1, 5.2, 5.3, and 5.4.
//! Extracts headers, function prototypes, constants, upvalues, and debug info.

use crate::decode::{DecodedInsn, decode_instructions_versioned};

/// Lua version identifier.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum LuaVersion {
    Lua51,
    Lua52,
    Lua53,
    Lua54,
}

impl LuaVersion {
    /// Detect version from the version byte in the header.
    pub fn from_byte(byte: u8) -> Option<Self> {
        match byte {
            0x51 => Some(Self::Lua51),
            0x52 => Some(Self::Lua52),
            0x53 => Some(Self::Lua53),
            0x54 => Some(Self::Lua54),
            _ => None,
        }
    }
}

/// Chunk header containing format metadata.
#[derive(Debug, Clone)]
pub struct ChunkHeader {
    pub version: LuaVersion,
    pub format: u8,
    pub little_endian: bool,
    pub int_size: u8,
    pub size_t_size: u8,
    pub instruction_size: u8,
    pub number_size: u8,
    pub number_is_integer: bool,
}

/// A constant value in the constant pool.
#[derive(Debug, Clone, PartialEq)]
pub enum Constant {
    Nil,
    Bool(bool),
    Integer(i64),
    Float(f64),
    String(String),
}

/// An upvalue descriptor.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Upvalue {
    /// Whether this upvalue is in the enclosing function's stack (true)
    /// or in its upvalue list (false).
    pub in_stack: bool,
    /// Index into the enclosing function's stack or upvalue list.
    pub index: u8,
    /// Kind byte (5.4 only, 0 otherwise).
    pub kind: u8,
}

/// Debug info: local variable descriptor.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LocalVar {
    pub name: String,
    pub start_pc: u32,
    pub end_pc: u32,
}

/// Debug info section for a function prototype.
#[derive(Debug, Clone)]
pub struct DebugInfo {
    pub line_info: Vec<i32>,
    pub abs_line_info: Vec<(u32, u32)>,
    pub locals: Vec<LocalVar>,
    pub upvalue_names: Vec<String>,
}

/// A function prototype.
#[derive(Debug, Clone)]
pub struct Prototype {
    pub source_name: Option<String>,
    pub line_defined: u32,
    pub last_line_defined: u32,
    pub num_params: u8,
    pub is_vararg: bool,
    pub max_stack_size: u8,
    pub instructions: Vec<DecodedInsn>,
    pub constants: Vec<Constant>,
    pub upvalues: Vec<Upvalue>,
    pub protos: Vec<Prototype>,
    pub debug: DebugInfo,
}

/// A parsed Lua bytecode chunk.
#[derive(Debug, Clone)]
pub struct Chunk {
    pub header: ChunkHeader,
    pub main_proto: Prototype,
}

/// Errors during chunk parsing.
#[derive(Debug, Clone, thiserror::Error)]
pub enum ParseError {
    #[error("not a Lua bytecode file (invalid magic)")]
    InvalidMagic,
    #[error("unsupported Lua version: {0:#x}")]
    UnsupportedVersion(u8),
    #[error("unexpected end of input at offset {0}")]
    UnexpectedEof(usize),
    #[error("invalid constant type tag: {0}")]
    InvalidConstantType(u8),
    #[error("invalid format byte: {0}")]
    InvalidFormat(u8),
    #[error("header validation failed")]
    HeaderValidation,
}

/// Internal cursor for parsing.
struct Cursor<'a> {
    data: &'a [u8],
    pos: usize,
    little_endian: bool,
    size_t_size: u8,
    int_size: u8,
    number_size: u8,
    version: LuaVersion,
}

impl<'a> Cursor<'a> {
    fn new(data: &'a [u8]) -> Self {
        Self {
            data,
            pos: 0,
            little_endian: true,
            size_t_size: 8,
            int_size: 4,
            number_size: 8,
            version: LuaVersion::Lua54,
        }
    }

    fn read_byte(&mut self) -> Result<u8, ParseError> {
        if self.pos >= self.data.len() {
            return Err(ParseError::UnexpectedEof(self.pos));
        }
        let b = self.data[self.pos];
        self.pos += 1;
        Ok(b)
    }

    fn read_bytes(&mut self, n: usize) -> Result<&'a [u8], ParseError> {
        if self.pos + n > self.data.len() {
            return Err(ParseError::UnexpectedEof(self.pos));
        }
        let slice = &self.data[self.pos..self.pos + n];
        self.pos += n;
        Ok(slice)
    }

    fn read_u32(&mut self) -> Result<u32, ParseError> {
        let bytes = self.read_bytes(4)?;
        Ok(if self.little_endian {
            u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        } else {
            u32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        })
    }

    fn read_u64(&mut self) -> Result<u64, ParseError> {
        let bytes = self.read_bytes(8)?;
        Ok(if self.little_endian {
            u64::from_le_bytes(bytes.try_into().unwrap())
        } else {
            u64::from_be_bytes(bytes.try_into().unwrap())
        })
    }

    fn read_int(&mut self) -> Result<u32, ParseError> {
        match self.int_size {
            4 => self.read_u32(),
            8 => self.read_u64().map(|v| v as u32),
            _ => self.read_u32(),
        }
    }

    fn read_size(&mut self) -> Result<usize, ParseError> {
        match self.version {
            LuaVersion::Lua54 => self.read_varint(),
            _ => match self.size_t_size {
                4 => self.read_u32().map(|v| v as usize),
                8 => self.read_u64().map(|v| v as usize),
                _ => self.read_u64().map(|v| v as usize),
            },
        }
    }

    /// Lua 5.4 uses a variable-length integer encoding for sizes.
    fn read_varint(&mut self) -> Result<usize, ParseError> {
        let mut x: usize = 0;
        loop {
            let b = self.read_byte()?;
            // Accumulate 7 bits
            x = (x << 7) | (b as usize & 0x7F);
            if b >= 0x80 {
                // High bit set means this is the last byte
                // (Lua 5.4 encodes with high bit = stop)
                break;
            }
        }
        Ok(x)
    }

    fn read_lua_string(&mut self) -> Result<Option<String>, ParseError> {
        let len = self.read_size()?;
        if len == 0 {
            return Ok(None);
        }
        // In 5.1-5.3 the length includes a trailing NUL, in 5.4 the varint
        // size is the string length + 1 (where 0 means NULL, 1 means empty).
        let actual_len = match self.version {
            LuaVersion::Lua54 => len - 1,
            _ => len.saturating_sub(1), // subtract NUL terminator
        };
        if actual_len == 0 {
            // 5.4: size==1 means empty string, no bytes to read
            if self.version != LuaVersion::Lua54 {
                // skip the NUL
                let _ = self.read_byte()?;
            }
            return Ok(Some(String::new()));
        }
        let bytes = self.read_bytes(actual_len)?;
        let s = String::from_utf8_lossy(bytes).into_owned();
        // In 5.1-5.3, skip the NUL terminator
        if self.version != LuaVersion::Lua54 {
            let _ = self.read_byte()?;
        }
        Ok(Some(s))
    }

    fn read_i64(&mut self) -> Result<i64, ParseError> {
        let bytes = self.read_bytes(8)?;
        Ok(if self.little_endian {
            i64::from_le_bytes(bytes.try_into().unwrap())
        } else {
            i64::from_be_bytes(bytes.try_into().unwrap())
        })
    }

    fn read_f64(&mut self) -> Result<f64, ParseError> {
        let bytes = self.read_bytes(8)?;
        Ok(if self.little_endian {
            f64::from_le_bytes(bytes.try_into().unwrap())
        } else {
            f64::from_be_bytes(bytes.try_into().unwrap())
        })
    }

    fn read_i32(&mut self) -> Result<i32, ParseError> {
        let bytes = self.read_bytes(4)?;
        Ok(if self.little_endian {
            i32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        } else {
            i32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        })
    }

    fn read_number_as_int(&mut self) -> Result<i64, ParseError> {
        match self.number_size {
            4 => self.read_i32().map(|v| v as i64),
            8 => self.read_i64(),
            _ => self.read_i64(),
        }
    }

    fn read_number_as_float(&mut self) -> Result<f64, ParseError> {
        match self.number_size {
            4 => {
                let bytes = self.read_bytes(4)?;
                Ok(if self.little_endian {
                    f32::from_le_bytes(bytes.try_into().unwrap()) as f64
                } else {
                    f32::from_be_bytes(bytes.try_into().unwrap()) as f64
                })
            }
            8 => self.read_f64(),
            _ => self.read_f64(),
        }
    }
}

impl Chunk {
    /// Parse a Lua bytecode chunk from raw bytes.
    pub fn parse(data: &[u8]) -> Result<Self, ParseError> {
        let mut cursor = Cursor::new(data);
        let header = Self::parse_header(&mut cursor)?;
        cursor.little_endian = header.little_endian;
        cursor.size_t_size = header.size_t_size;
        cursor.int_size = header.int_size;
        cursor.number_size = header.number_size;
        cursor.version = header.version;

        // In 5.4, there's an upvalue count for the main function right after header
        let _num_upvalues = if header.version == LuaVersion::Lua54 {
            cursor.read_byte()?
        } else {
            0
        };

        let main_proto = Self::parse_prototype(&mut cursor, &header, true)?;

        Ok(Chunk { header, main_proto })
    }

    fn parse_header(cursor: &mut Cursor) -> Result<ChunkHeader, ParseError> {
        // Magic: \x1bLua
        let magic = cursor.read_bytes(4)?;
        if magic != b"\x1bLua" {
            return Err(ParseError::InvalidMagic);
        }

        let version_byte = cursor.read_byte()?;
        let version = LuaVersion::from_byte(version_byte)
            .ok_or(ParseError::UnsupportedVersion(version_byte))?;

        let format = cursor.read_byte()?;

        match version {
            LuaVersion::Lua51 => {
                let endian_byte = cursor.read_byte()?;
                let little_endian = endian_byte == 1;
                let int_size = cursor.read_byte()?;
                let size_t_size = cursor.read_byte()?;
                let instruction_size = cursor.read_byte()?;
                let number_size = cursor.read_byte()?;
                let number_is_integer = cursor.read_byte()? != 0;

                Ok(ChunkHeader {
                    version,
                    format,
                    little_endian,
                    int_size,
                    size_t_size,
                    instruction_size,
                    number_size,
                    number_is_integer,
                })
            }
            LuaVersion::Lua52 | LuaVersion::Lua53 => {
                // LUAC_DATA: 6 bytes "\x19\x93\r\n\x1a\n"
                let _luac_data = cursor.read_bytes(6)?;
                // Don't validate strictly — some compilers differ

                let int_size = cursor.read_byte()?;
                let size_t_size = cursor.read_byte()?;
                let instruction_size = cursor.read_byte()?;

                let (number_size, number_is_integer) = if version == LuaVersion::Lua53 {
                    let lua_integer_size = cursor.read_byte()?;
                    let lua_number_size = cursor.read_byte()?;
                    // Read LUAC_INT (8 bytes) and LUAC_NUM (8 bytes) for endianness detection
                    let int_check = cursor.read_bytes(lua_integer_size as usize)?;
                    let _num_check = cursor.read_bytes(lua_number_size as usize)?;
                    // Detect endianness from LUAC_INT = 0x5678
                    let little_endian = int_check.first().copied() == Some(0x78);
                    // Temporarily update cursor endianness
                    // (we'll return it from the header)
                    return Ok(ChunkHeader {
                        version,
                        format,
                        little_endian,
                        int_size,
                        size_t_size,
                        instruction_size,
                        number_size: lua_number_size,
                        number_is_integer: false,
                    });
                } else {
                    let number_size = cursor.read_byte()?;
                    let number_is_integer = cursor.read_byte()? != 0;
                    // Read LUAC_TAIL for endianness detection
                    let _tail = cursor.read_bytes(6)?;
                    (number_size, number_is_integer)
                };

                // For 5.2, assume little-endian by default (no explicit marker in format)
                Ok(ChunkHeader {
                    version,
                    format,
                    little_endian: true, // 5.2 default
                    int_size,
                    size_t_size,
                    instruction_size,
                    number_size,
                    number_is_integer,
                })
            }
            LuaVersion::Lua54 => {
                // LUAC_DATA: 6 bytes "\x19\x93\r\n\x1a\n"
                let _luac_data = cursor.read_bytes(6)?;
                let instruction_size = cursor.read_byte()?;
                let lua_integer_size = cursor.read_byte()?;
                let lua_number_size = cursor.read_byte()?;
                // LUAC_INT = 0x5678 (for endianness detection)
                let int_check = cursor.read_bytes(lua_integer_size as usize)?;
                let little_endian = int_check.first().copied() == Some(0x78);
                // LUAC_NUM
                let _num_check = cursor.read_bytes(lua_number_size as usize)?;

                Ok(ChunkHeader {
                    version,
                    format,
                    little_endian,
                    int_size: 4,
                    size_t_size: 8,
                    instruction_size,
                    number_size: lua_number_size,
                    number_is_integer: false,
                })
            }
        }
    }

    fn parse_prototype(
        cursor: &mut Cursor,
        header: &ChunkHeader,
        _is_main: bool,
    ) -> Result<Prototype, ParseError> {
        // Source name (only present for main function in 5.2+, always in 5.1)
        let source_name = cursor.read_lua_string()?;

        let line_defined = cursor.read_int()?;
        let last_line_defined = cursor.read_int()?;

        // 5.1: numparams, is_vararg, maxstacksize
        // 5.4: numparams, is_vararg, maxstacksize
        let num_params = cursor.read_byte()?;
        let is_vararg = cursor.read_byte()? != 0;
        let max_stack_size = cursor.read_byte()?;

        // Instructions
        let num_insns = cursor.read_int()? as usize;
        let insn_data = cursor.read_bytes(num_insns * 4)?;
        let instructions = decode_instructions_versioned(
            insn_data,
            num_insns,
            header.little_endian,
            header.version,
        );

        // Constants
        let num_constants = cursor.read_int()? as usize;
        let mut constants = Vec::with_capacity(num_constants);
        for _ in 0..num_constants {
            constants.push(Self::parse_constant(cursor, header)?);
        }

        // Upvalues
        let num_upvalues = cursor.read_int()? as usize;
        let mut upvalues = Vec::with_capacity(num_upvalues);
        for _ in 0..num_upvalues {
            let in_stack = cursor.read_byte()? != 0;
            let index = cursor.read_byte()?;
            let kind = if header.version == LuaVersion::Lua54 {
                cursor.read_byte()?
            } else {
                0
            };
            upvalues.push(Upvalue {
                in_stack,
                index,
                kind,
            });
        }

        // Nested prototypes
        let num_protos = cursor.read_int()? as usize;
        let mut protos = Vec::with_capacity(num_protos);
        for _ in 0..num_protos {
            protos.push(Self::parse_prototype(cursor, header, false)?);
        }

        // Debug info
        let debug = Self::parse_debug_info(cursor, header)?;

        Ok(Prototype {
            source_name,
            line_defined,
            last_line_defined,
            num_params,
            is_vararg,
            max_stack_size,
            instructions,
            constants,
            upvalues,
            protos,
            debug,
        })
    }

    fn parse_constant(cursor: &mut Cursor, header: &ChunkHeader) -> Result<Constant, ParseError> {
        let type_tag = cursor.read_byte()?;
        match header.version {
            LuaVersion::Lua51 | LuaVersion::Lua52 => match type_tag {
                0 => Ok(Constant::Nil),
                1 => {
                    let b = cursor.read_byte()?;
                    Ok(Constant::Bool(b != 0))
                }
                3 => {
                    if header.number_is_integer {
                        let v = cursor.read_number_as_int()?;
                        Ok(Constant::Integer(v))
                    } else {
                        let v = cursor.read_number_as_float()?;
                        Ok(Constant::Float(v))
                    }
                }
                4 => {
                    let s = cursor.read_lua_string()?.unwrap_or_default();
                    Ok(Constant::String(s))
                }
                _ => Err(ParseError::InvalidConstantType(type_tag)),
            },
            LuaVersion::Lua53 => match type_tag {
                0 => Ok(Constant::Nil),
                1 => {
                    let b = cursor.read_byte()?;
                    Ok(Constant::Bool(b != 0))
                }
                3 => {
                    // LUA_TNUMINT
                    let v = cursor.read_i64()?;
                    Ok(Constant::Integer(v))
                }
                19 => {
                    // LUA_TNUMFLT (0x13)
                    let v = cursor.read_f64()?;
                    Ok(Constant::Float(v))
                }
                4 | 20 => {
                    // Short string (4) or long string (20)
                    let s = cursor.read_lua_string()?.unwrap_or_default();
                    Ok(Constant::String(s))
                }
                _ => Err(ParseError::InvalidConstantType(type_tag)),
            },
            LuaVersion::Lua54 => match type_tag {
                0x00 => Ok(Constant::Nil),         // LUA_VNIL
                0x01 => Ok(Constant::Bool(false)), // LUA_VFALSE
                0x11 => Ok(Constant::Bool(true)),  // LUA_VTRUE
                0x03 => {
                    // LUA_VNUMINT
                    let v = cursor.read_i64()?;
                    Ok(Constant::Integer(v))
                }
                0x13 => {
                    // LUA_VNUMFLT
                    let v = cursor.read_f64()?;
                    Ok(Constant::Float(v))
                }
                0x04 | 0x14 => {
                    // LUA_VSHRSTR or LUA_VLNGSTR
                    let s = cursor.read_lua_string()?.unwrap_or_default();
                    Ok(Constant::String(s))
                }
                _ => Err(ParseError::InvalidConstantType(type_tag)),
            },
        }
    }

    fn parse_debug_info(
        cursor: &mut Cursor,
        header: &ChunkHeader,
    ) -> Result<DebugInfo, ParseError> {
        // Line info
        let n_line_info = cursor.read_int()? as usize;
        let mut line_info = Vec::with_capacity(n_line_info);
        match header.version {
            LuaVersion::Lua54 => {
                // 5.4 uses signed bytes for line deltas
                for _ in 0..n_line_info {
                    let b = cursor.read_byte()? as i8;
                    line_info.push(b as i32);
                }
            }
            _ => {
                for _ in 0..n_line_info {
                    line_info.push(cursor.read_i32()?);
                }
            }
        }

        // Absolute line info (5.4 only)
        let mut abs_line_info = Vec::new();
        if header.version == LuaVersion::Lua54 {
            let n_abs = cursor.read_int()? as usize;
            for _ in 0..n_abs {
                let pc = cursor.read_int()?;
                let line = cursor.read_int()?;
                abs_line_info.push((pc, line));
            }
        }

        // Local variables
        let n_locals = cursor.read_int()? as usize;
        let mut locals = Vec::with_capacity(n_locals);
        for _ in 0..n_locals {
            let name = cursor.read_lua_string()?.unwrap_or_default();
            let start_pc = cursor.read_int()?;
            let end_pc = cursor.read_int()?;
            locals.push(LocalVar {
                name,
                start_pc,
                end_pc,
            });
        }

        // Upvalue names
        let n_upvalue_names = cursor.read_int()? as usize;
        let mut upvalue_names = Vec::with_capacity(n_upvalue_names);
        for _ in 0..n_upvalue_names {
            let name = cursor.read_lua_string()?.unwrap_or_default();
            upvalue_names.push(name);
        }

        Ok(DebugInfo {
            line_info,
            abs_line_info,
            locals,
            upvalue_names,
        })
    }
}
