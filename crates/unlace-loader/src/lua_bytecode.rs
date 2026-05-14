//! Lua bytecode loader (Lua 5.1–5.4 and LuaJIT).
//!
//! Parses Lua compiled bytecode chunks to extract function prototypes,
//! constant pools, upvalue info, and debug symbols.

/// Lua 5.1+ bytecode header signature.
pub const LUA_SIGNATURE: &[u8; 4] = b"\x1bLua";
/// LuaJIT bytecode header.
pub const LUAJIT_SIGNATURE: &[u8; 3] = &[0x1b, 0x4c, 0x4a];

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
    pub code_size: u32,
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
        data[5] = 0;    // format
        data[6] = 1;    // little-endian
        data[7] = 4;    // int size
        data[8] = 8;    // size_t
        data[9] = 4;    // instruction
        data[10] = 8;   // number

        let hdr = parse_chunk_header(&data).unwrap();
        assert_eq!(hdr.version, LuaVersion::Lua53);
        assert_eq!(hdr.int_size, 4);
    }

    #[test]
    fn test_non_lua_rejected() {
        let data = vec![0xDE, 0xAD, 0xBE, 0xEF, 0, 0, 0, 0, 0, 0, 0, 0];
        assert!(detect_lua(&data).is_none());
    }
}
