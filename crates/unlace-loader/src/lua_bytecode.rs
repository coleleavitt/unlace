//! Lua bytecode loader (Lua 5.1–5.4 and LuaJIT).
//!
//! Parses Lua compiled bytecode chunks to extract function prototypes,
//! constant pools, upvalue info, and debug symbols.

/// Lua 5.1+ bytecode header signature.
pub const LUA_SIGNATURE: &[u8; 4] = b"\x1bLua";
/// LuaJIT bytecode header.
pub const LUAJIT_SIGNATURE: &[u8; 3] = &[0x1b, 0x4c, 0x4a];

/// LUAC_DATA validation bytes for Lua 5.3/5.4.
const LUAC_DATA: &[u8; 6] = b"\x19\x93\r\n\x1a\n";

/// Lua bytecode version.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LuaVersion {
    Lua51,
    Lua52,
    Lua53,
    Lua54,
    LuaJIT,
}

/// Parsed Lua chunk header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaChunkHeader {
    pub version: LuaVersion,
    pub format: u8,
    pub endianness: u8,
    pub int_size: u8,
    pub size_t_size: u8,
    pub instruction_size: u8,
    pub number_size: u8,
}

/// A Lua constant value.
#[derive(Debug, Clone, PartialEq)]
pub enum LuaConstant {
    Nil,
    Boolean(bool),
    Integer(i64),
    Number(f64),
    String(String),
}

// Manual Eq implementation: NaN never equals itself but we need Eq for struct derivations.
impl Eq for LuaConstant {}

/// A Lua function prototype.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaProto {
    pub source_name: String,
    pub line_defined: u32,
    pub last_line_defined: u32,
    pub num_params: u8,
    pub is_vararg: bool,
    pub max_stack_size: u8,
    pub num_upvalues: u8,
    pub num_constants: u32,
    pub constants: Vec<LuaConstant>,
    pub code_size: u32,
    pub instructions: Vec<u32>,
    pub protos: Vec<LuaProto>,
}

/// Top-level parsed Lua bytecode.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaBytecode {
    pub version: u8,
    pub little_endian: bool,
    pub top_proto: LuaProto,
}

/// Detect Lua bytecode.
pub fn detect_lua(data: &[u8]) -> Option<LuaVersion> {
    if data.len() < 12 {
        return None;
    }
    if &data[0..3] == LUAJIT_SIGNATURE {
        return Some(LuaVersion::LuaJIT);
    }
    if &data[0..4] != LUA_SIGNATURE {
        return None;
    }
    match data[4] {
        0x51 => Some(LuaVersion::Lua51),
        0x52 => Some(LuaVersion::Lua52),
        0x53 => Some(LuaVersion::Lua53),
        0x54 => Some(LuaVersion::Lua54),
        _ => None,
    }
}

/// Parse Lua 5.x chunk header.
pub fn parse_chunk_header(data: &[u8]) -> Option<LuaChunkHeader> {
    if data.len() < 12 || &data[0..4] != LUA_SIGNATURE {
        return None;
    }
    let version = match data[4] {
        0x51 => LuaVersion::Lua51,
        0x52 => LuaVersion::Lua52,
        0x53 => LuaVersion::Lua53,
        0x54 => LuaVersion::Lua54,
        _ => return None,
    };

    Some(LuaChunkHeader {
        version,
        format: data[5],
        endianness: if data.len() > 6 { data[6] } else { 1 },
        int_size: if data.len() > 7 { data[7] } else { 4 },
        size_t_size: if data.len() > 8 { data[8] } else { 8 },
        instruction_size: if data.len() > 9 { data[9] } else { 4 },
        number_size: if data.len() > 10 { data[10] } else { 8 },
    })
}

// ---------------------------------------------------------------------------
// Cursor-based reader for parsing multi-byte fields.
// ---------------------------------------------------------------------------

struct Cursor<'a> {
    data: &'a [u8],
    pos: usize,
    little_endian: bool,
    int_size: u8,
    size_t_size: u8,
}

impl<'a> Cursor<'a> {
    fn new(data: &'a [u8], little_endian: bool, int_size: u8, size_t_size: u8) -> Self {
        Cursor {
            data,
            pos: 0,
            little_endian,
            int_size,
            size_t_size,
        }
    }

    fn read_byte(&mut self) -> Option<u8> {
        if self.pos >= self.data.len() {
            return None;
        }
        let b = self.data[self.pos];
        self.pos += 1;
        Some(b)
    }

    fn read_bytes(&mut self, n: usize) -> Option<&'a [u8]> {
        if self.pos + n > self.data.len() {
            return None;
        }
        let slice = &self.data[self.pos..self.pos + n];
        self.pos += n;
        Some(slice)
    }

    fn read_u32(&mut self) -> Option<u32> {
        let bytes = self.read_bytes(4)?;
        Some(if self.little_endian {
            u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        } else {
            u32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]])
        })
    }

    fn read_u64(&mut self) -> Option<u64> {
        let bytes = self.read_bytes(8)?;
        Some(if self.little_endian {
            u64::from_le_bytes(bytes.try_into().ok()?)
        } else {
            u64::from_be_bytes(bytes.try_into().ok()?)
        })
    }

    fn read_int(&mut self) -> Option<u32> {
        match self.int_size {
            4 => self.read_u32(),
            8 => self.read_u64().map(|v| v as u32),
            2 => {
                let bytes = self.read_bytes(2)?;
                Some(if self.little_endian {
                    u16::from_le_bytes([bytes[0], bytes[1]]) as u32
                } else {
                    u16::from_be_bytes([bytes[0], bytes[1]]) as u32
                })
            }
            _ => self.read_u32(),
        }
    }

    fn read_size_t(&mut self) -> Option<u64> {
        match self.size_t_size {
            4 => self.read_u32().map(|v| v as u64),
            8 => self.read_u64(),
            _ => self.read_u64(),
        }
    }

    fn read_i64(&mut self) -> Option<i64> {
        let bytes = self.read_bytes(8)?;
        Some(if self.little_endian {
            i64::from_le_bytes(bytes.try_into().ok()?)
        } else {
            i64::from_be_bytes(bytes.try_into().ok()?)
        })
    }

    fn read_f64(&mut self) -> Option<f64> {
        let bytes = self.read_bytes(8)?;
        Some(if self.little_endian {
            f64::from_le_bytes(bytes.try_into().ok()?)
        } else {
            f64::from_be_bytes(bytes.try_into().ok()?)
        })
    }

    /// Read a Lua 5.3/5.4 variable-length size (unsigned integer stored as a
    /// sequence of bytes where bit 7 is a continuation flag).
    fn read_lua53_size(&mut self) -> Option<u64> {
        // In Lua 5.3/5.4, sizes in the proto are stored as standard int (code_size)
        // or as a sized-int (n bytes). For strings, it's a single byte for small
        // (<=253) or 0xFF followed by a size_t.
        // Actually in the official format, string lengths use a single-byte size for
        // short strings in 5.3. Let's handle both:
        let b = self.read_byte()? as u64;
        if b == 0xFF {
            self.read_size_t()
        } else {
            Some(b)
        }
    }

    /// Read a Lua string: size (including terminator) followed by bytes.
    /// For Lua 5.1/5.2 the size is a size_t; for 5.3/5.4 it uses the
    /// variable-length encoding.
    fn read_string_51(&mut self) -> Option<String> {
        let len = self.read_size_t()? as usize;
        if len == 0 {
            return Some(String::new());
        }
        // Length includes the trailing '\0'
        let bytes = self.read_bytes(len)?;
        let s = if bytes.last() == Some(&0) {
            &bytes[..bytes.len() - 1]
        } else {
            bytes
        };
        Some(String::from_utf8_lossy(s).into_owned())
    }

    fn read_string_53(&mut self) -> Option<String> {
        let len = self.read_lua53_size()? as usize;
        if len == 0 {
            return Some(String::new());
        }
        // Lua 5.3: size includes the +1 for the size byte itself in the encoding,
        // the actual string length is (size - 1).
        let actual_len = len - 1;
        if actual_len == 0 {
            return Some(String::new());
        }
        let bytes = self.read_bytes(actual_len)?;
        Some(String::from_utf8_lossy(bytes).into_owned())
    }
}

// ---------------------------------------------------------------------------
// Proto parsing
// ---------------------------------------------------------------------------

fn parse_proto_53(cur: &mut Cursor<'_>) -> Option<LuaProto> {
    // source name
    let source_name = cur.read_string_53()?;

    // line_defined, last_line_defined
    let line_defined = cur.read_int()?;
    let last_line_defined = cur.read_int()?;

    let num_params = cur.read_byte()?;
    let is_vararg = cur.read_byte()? != 0;
    let max_stack_size = cur.read_byte()?;

    // code
    let code_size = cur.read_int()?;
    let mut instructions = Vec::with_capacity(code_size as usize);
    for _ in 0..code_size {
        instructions.push(cur.read_u32()?);
    }

    // constants
    let num_constants = cur.read_int()?;
    let mut constants = Vec::with_capacity(num_constants as usize);
    for _ in 0..num_constants {
        let tag = cur.read_byte()?;
        let c = match tag {
            0 => LuaConstant::Nil,                           // LUA_TNIL
            1 => LuaConstant::Boolean(cur.read_byte()? != 0), // LUA_TBOOLEAN
            0x03 | 0x13 => LuaConstant::Integer(cur.read_i64()?), // LUA_TNUMINT
            0x04 | 0x14 => LuaConstant::String(cur.read_string_53()?), // LUA_TSTRING
            _ => {
                // Unknown constant type — try to skip gracefully
                return None;
            }
        };
        constants.push(c);
    }

    // upvalues
    let num_upvalues_count = cur.read_int()?;
    for _ in 0..num_upvalues_count {
        // instack (1 byte) + idx (1 byte)
        cur.read_byte()?;
        cur.read_byte()?;
    }

    // nested protos
    let num_protos = cur.read_int()?;
    let mut protos = Vec::with_capacity(num_protos as usize);
    for _ in 0..num_protos {
        protos.push(parse_proto_53(cur)?);
    }

    // debug info — line info
    let line_info_size = cur.read_int()?;
    for _ in 0..line_info_size {
        cur.read_int()?; // line number per instruction
    }

    // debug — local variables
    let local_var_count = cur.read_int()?;
    for _ in 0..local_var_count {
        cur.read_string_53()?; // varname
        cur.read_int()?;       // startpc
        cur.read_int()?;       // endpc
    }

    // debug — upvalue names
    let upvalue_name_count = cur.read_int()?;
    for _ in 0..upvalue_name_count {
        cur.read_string_53()?;
    }

    Some(LuaProto {
        source_name,
        line_defined,
        last_line_defined,
        num_params,
        is_vararg,
        max_stack_size,
        num_upvalues: num_upvalues_count as u8,
        num_constants,
        constants,
        code_size,
        instructions,
        protos,
    })
}

fn parse_proto_51(cur: &mut Cursor<'_>) -> Option<LuaProto> {
    // source name
    let source_name = cur.read_string_51()?;

    let line_defined = cur.read_int()?;
    let last_line_defined = cur.read_int()?;

    // Lua 5.1: nups(1) + numparams(1) + is_vararg(1) + maxstacksize(1)
    let num_upvalues = cur.read_byte()?;
    let num_params = cur.read_byte()?;
    let is_vararg = cur.read_byte()? != 0;
    let max_stack_size = cur.read_byte()?;

    // code
    let code_size = cur.read_int()?;
    let mut instructions = Vec::with_capacity(code_size as usize);
    for _ in 0..code_size {
        instructions.push(cur.read_u32()?);
    }

    // constants
    let num_constants = cur.read_int()?;
    let mut constants = Vec::with_capacity(num_constants as usize);
    for _ in 0..num_constants {
        let tag = cur.read_byte()?;
        let c = match tag {
            0 => LuaConstant::Nil,
            1 => LuaConstant::Boolean(cur.read_byte()? != 0),
            3 => LuaConstant::Number(cur.read_f64()?),
            4 => LuaConstant::String(cur.read_string_51()?),
            _ => return None,
        };
        constants.push(c);
    }

    // nested protos
    let num_protos = cur.read_int()?;
    let mut protos = Vec::with_capacity(num_protos as usize);
    for _ in 0..num_protos {
        protos.push(parse_proto_51(cur)?);
    }

    // debug: line info
    let line_info_size = cur.read_int()?;
    for _ in 0..line_info_size {
        cur.read_int()?;
    }

    // debug: local vars
    let local_var_count = cur.read_int()?;
    for _ in 0..local_var_count {
        cur.read_string_51()?;
        cur.read_int()?;
        cur.read_int()?;
    }

    // debug: upvalue names
    let upvalue_name_count = cur.read_int()?;
    for _ in 0..upvalue_name_count {
        cur.read_string_51()?;
    }

    Some(LuaProto {
        source_name,
        line_defined,
        last_line_defined,
        num_params,
        is_vararg,
        max_stack_size,
        num_upvalues,
        num_constants,
        constants,
        code_size,
        instructions,
        protos,
    })
}

/// Parse a complete Lua bytecode chunk, returning the top-level bytecode
/// structure including version info and the main proto.
pub fn parse_lua_bytecode(bytes: &[u8]) -> Option<LuaBytecode> {
    if bytes.len() < 12 {
        return None;
    }
    if &bytes[0..4] != LUA_SIGNATURE {
        return None;
    }

    let version_byte = bytes[4];
    let version = match version_byte {
        0x51..=0x54 => version_byte,
        _ => return None,
    };

    match version_byte {
        0x53 | 0x54 => parse_lua_53_54(bytes, version),
        0x51 | 0x52 => parse_lua_51_52(bytes, version),
        _ => None,
    }
}

fn parse_lua_53_54(bytes: &[u8], version: u8) -> Option<LuaBytecode> {
    // Header layout for 5.3/5.4:
    //   magic(4) + version(1) + format(1) + LUAC_DATA(6) + sizes(5 bytes) +
    //   LUAC_INT(sizeof lua_Integer) + LUAC_NUM(sizeof lua_Number)
    //
    // Sizes: int_size(1) + size_t_size(1) + instruction_size(1) +
    //        lua_integer_size(1) + lua_number_size(1)

    let mut pos: usize = 4 + 1 + 1; // past magic + version + format

    // Validate LUAC_DATA
    if bytes.len() < pos + 6 {
        return None;
    }
    if &bytes[pos..pos + 6] != LUAC_DATA {
        return None;
    }
    pos += 6;

    // Read sizes
    if bytes.len() < pos + 5 {
        return None;
    }
    let int_size = bytes[pos];
    let size_t_size = bytes[pos + 1];
    let _instruction_size = bytes[pos + 2];
    let lua_integer_size = bytes[pos + 3];
    let lua_number_size = bytes[pos + 4];
    pos += 5;

    // LUAC_INT — sample integer to determine endianness
    if bytes.len() < pos + lua_integer_size as usize {
        return None;
    }
    let int_bytes = &bytes[pos..pos + lua_integer_size as usize];
    // The reference value is 0x5678 (stored in lua_Integer size bytes).
    let little_endian = if lua_integer_size == 8 {
        let val_le = i64::from_le_bytes(int_bytes.try_into().ok()?);
        val_le == 0x5678
    } else if lua_integer_size == 4 {
        let val_le = i32::from_le_bytes(int_bytes.try_into().ok()?);
        val_le == 0x5678
    } else {
        true
    };
    pos += lua_integer_size as usize;

    // LUAC_NUM — sample float (370.5)
    if bytes.len() < pos + lua_number_size as usize {
        return None;
    }
    pos += lua_number_size as usize;

    // For Lua 5.3, there's an upvalue count byte for the top-level function
    if bytes.len() < pos + 1 {
        return None;
    }
    let _num_upvalues = bytes[pos];
    pos += 1;

    // Now parse the top-level proto
    let mut cur = Cursor::new(bytes, little_endian, int_size, size_t_size);
    cur.pos = pos;

    let top_proto = parse_proto_53(&mut cur)?;

    Some(LuaBytecode {
        version,
        little_endian,
        top_proto,
    })
}

fn parse_lua_51_52(bytes: &[u8], version: u8) -> Option<LuaBytecode> {
    // Header layout for 5.1/5.2:
    //   magic(4) + version(1) + format(1) + endian(1) + int_size(1) +
    //   size_t_size(1) + instruction_size(1) + number_size(1) + integral_flag(1)
    if bytes.len() < 12 {
        return None;
    }

    let _format = bytes[5];
    let endian_byte = bytes[6];
    let little_endian = endian_byte == 1;
    let int_size = bytes[7];
    let size_t_size = bytes[8];
    let _instruction_size = bytes[9];
    let _number_size = bytes[10];
    let _integral_flag = bytes[11];

    let pos = 12;

    let mut cur = Cursor::new(bytes, little_endian, int_size, size_t_size);
    cur.pos = pos;

    let top_proto = parse_proto_51(&mut cur)?;

    Some(LuaBytecode {
        version,
        little_endian,
        top_proto,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_detect_lua51() {
        let mut data = vec![0u8; 32];
        data[0..4].copy_from_slice(LUA_SIGNATURE);
        data[4] = 0x51;
        assert_eq!(detect_lua(&data), Some(LuaVersion::Lua51));
    }

    #[test]
    fn test_detect_luajit() {
        let mut data = vec![0u8; 32];
        data[0..3].copy_from_slice(LUAJIT_SIGNATURE);
        assert_eq!(detect_lua(&data), Some(LuaVersion::LuaJIT));
    }

    #[test]
    fn test_parse_header() {
        let mut data = vec![0u8; 32];
        data[0..4].copy_from_slice(LUA_SIGNATURE);
        data[4] = 0x53; // Lua 5.3
        data[5] = 0; // format
        data[6] = 1; // little-endian
        data[7] = 4; // int size
        data[8] = 8; // size_t
        data[9] = 4; // instruction
        data[10] = 8; // number

        let hdr = parse_chunk_header(&data).unwrap();
        assert_eq!(hdr.version, LuaVersion::Lua53);
        assert_eq!(hdr.int_size, 4);
    }

    #[test]
    fn test_non_lua_rejected() {
        let data = vec![0xDE, 0xAD, 0xBE, 0xEF, 0, 0, 0, 0, 0, 0, 0, 0];
        assert!(detect_lua(&data).is_none());
    }

    #[test]
    fn lua_5_3_magic_and_version_recognised() {
        // Construct a minimal valid Lua 5.3 bytecode with a trivial top-level
        // proto (no instructions, no constants, no nested protos, no debug).
        let mut buf: Vec<u8> = Vec::new();

        // Header: magic + version + format
        buf.extend_from_slice(LUA_SIGNATURE);
        buf.push(0x53); // Lua 5.3
        buf.push(0x00); // official format

        // LUAC_DATA
        buf.extend_from_slice(LUAC_DATA);

        // Sizes: int(4), size_t(8), Instruction(4), lua_Integer(8), lua_Number(8)
        buf.push(4); // int_size
        buf.push(8); // size_t_size
        buf.push(4); // instruction_size
        buf.push(8); // lua_integer_size
        buf.push(8); // lua_number_size

        // LUAC_INT: 0x5678 as little-endian i64
        buf.extend_from_slice(&0x5678_i64.to_le_bytes());

        // LUAC_NUM: 370.5 as little-endian f64
        buf.extend_from_slice(&370.5_f64.to_le_bytes());

        // Top-level upvalue count
        buf.push(1); // 1 upvalue (_ENV)

        // --- Proto ---
        // source name (Lua 5.3 string: size byte, then chars)
        // size = len("@test.lua") + 1 = 10
        let source = b"@test.lua";
        buf.push((source.len() + 1) as u8); // size byte (len+1)
        buf.extend_from_slice(source);

        // line_defined (int = 4 bytes LE)
        buf.extend_from_slice(&0u32.to_le_bytes());
        // last_line_defined
        buf.extend_from_slice(&0u32.to_le_bytes());

        // numparams, is_vararg, maxstacksize
        buf.push(0); // numparams
        buf.push(1); // is_vararg
        buf.push(2); // maxstacksize

        // code_size (0 instructions... but actually need at least RETURN)
        // Use 1 instruction: RETURN 0 0
        buf.extend_from_slice(&1u32.to_le_bytes());
        // A RETURN instruction (opcode varies but we just need any 4 bytes)
        buf.extend_from_slice(&0x004E0026_u32.to_le_bytes()); // RETURN 0 1

        // constants: 0
        buf.extend_from_slice(&0u32.to_le_bytes());

        // upvalues: 1 (instack=1, idx=0)
        buf.extend_from_slice(&1u32.to_le_bytes());
        buf.push(1); // instack
        buf.push(0); // idx

        // nested protos: 0
        buf.extend_from_slice(&0u32.to_le_bytes());

        // debug — line info: 1 entry (one per instruction)
        buf.extend_from_slice(&1u32.to_le_bytes());
        buf.extend_from_slice(&0u32.to_le_bytes());

        // debug — local vars: 0
        buf.extend_from_slice(&0u32.to_le_bytes());

        // debug — upvalue names: 1
        buf.extend_from_slice(&1u32.to_le_bytes());
        let upval_name = b"_ENV";
        buf.push((upval_name.len() + 1) as u8);
        buf.extend_from_slice(upval_name);

        // Now parse
        let result = parse_lua_bytecode(&buf);
        assert!(result.is_some(), "parse_lua_bytecode should succeed for valid Lua 5.3 input");
        let bc = result.unwrap();
        assert_eq!(bc.version, 0x53);
        assert!(bc.little_endian);
        assert_eq!(bc.top_proto.source_name, "@test.lua");
        assert_eq!(bc.top_proto.num_params, 0);
        assert_eq!(bc.top_proto.num_upvalues, 1);
        assert_eq!(bc.top_proto.code_size, 1);
        assert_eq!(bc.top_proto.num_constants, 0);
        assert!(bc.top_proto.is_vararg);
    }
}
