//! Lua bytecode instruction decoder.
//!
//! Decodes raw 32-bit instruction words into structured `DecodedInsn` values,
//! handling the different field layouts across Lua versions.

use crate::chunk::LuaVersion;
use crate::opcodes::{InsnFormat, LuaOpcode};

/// A decoded Lua bytecode instruction with all fields extracted.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DecodedInsn {
    pub opcode: LuaOpcode,
    pub raw: u32,
    /// A field (register index, always present)
    pub a: u16,
    /// B field (register/constant index)
    pub b: u16,
    /// C field (register/constant index)
    pub c: u16,
    /// k flag (5.4 only, stored in bit between B and C)
    pub k: bool,
    /// Bx field (unsigned 18-bit in 5.1-5.3, 17-bit in 5.4)
    pub bx: u32,
    /// sBx field (signed version of Bx)
    pub sbx: i32,
    /// Ax field (26-bit in 5.2-5.3, 25-bit in 5.4)
    pub ax: u32,
    /// sJ field (signed jump, 5.4 only)
    pub sj: i32,
    /// The instruction format
    pub format: InsnFormat,
}

impl DecodedInsn {
    /// Decode a 32-bit instruction word for a given Lua version.
    pub fn decode(raw: u32, version: LuaVersion) -> Self {
        match version {
            LuaVersion::Lua51 | LuaVersion::Lua52 | LuaVersion::Lua53 => {
                Self::decode_51_53(raw, version)
            }
            LuaVersion::Lua54 => Self::decode_54(raw),
        }
    }

    /// Decode for Lua 5.1/5.2/5.3 format:
    /// Bits: [opcode:6][A:8][C:9][B:9]  (from LSB)
    fn decode_51_53(raw: u32, version: LuaVersion) -> Self {
        let op_raw = (raw & 0x3F) as u8;
        let a = ((raw >> 6) & 0xFF) as u16;
        let c = ((raw >> 14) & 0x1FF) as u16;
        let b = ((raw >> 23) & 0x1FF) as u16;
        let bx = (raw >> 14) & 0x3FFFF; // 18 bits
        let sbx = bx as i32 - 131071; // bias = (2^18 - 1) / 2 = 131071
        let ax = (raw >> 6) & 0x3FFFFFF; // 26 bits

        let opcode = LuaOpcode::decode(op_raw, version);
        let format = opcode.format(version);

        Self {
            opcode,
            raw,
            a,
            b,
            c,
            k: false,
            bx,
            sbx,
            ax,
            sj: 0,
            format,
        }
    }

    /// Decode for Lua 5.4 format:
    /// Bits: [opcode:7][A:8][k:1][B:8][C:8]  (from LSB)
    /// ABx:  [opcode:7][A:8][Bx:17]
    /// AsBx: same as ABx but signed
    /// Ax:   [opcode:7][Ax:25]
    /// sJ:   [opcode:7][sJ:25]
    fn decode_54(raw: u32) -> Self {
        let op_raw = (raw & 0x7F) as u8;
        let a = ((raw >> 7) & 0xFF) as u16;
        let k = ((raw >> 15) & 1) != 0;
        let b = ((raw >> 16) & 0xFF) as u16;
        let c = ((raw >> 24) & 0xFF) as u16;
        let bx = (raw >> 15) & 0x1FFFF; // 17 bits
        let sbx = bx as i32 - 65535; // bias = (2^17 - 1) / 2 = 65535  
        let ax = (raw >> 7) & 0x1FFFFFF; // 25 bits
        let sj = ((raw >> 7) as i32) - (1 << 24); // sJ: 25-bit signed with offset

        let opcode = LuaOpcode::decode(op_raw, LuaVersion::Lua54);
        let format = opcode.format(LuaVersion::Lua54);

        Self {
            opcode,
            raw,
            a,
            b,
            c,
            k,
            bx,
            sbx,
            ax,
            sj,
            format,
        }
    }

    /// Whether the B field refers to a constant (RK(B) semantics in 5.1-5.3).
    /// In 5.1-5.3, bit 8 of B/C means "constant pool index".
    pub fn b_is_const_51(&self) -> bool {
        self.b >= 256
    }

    /// Whether the C field refers to a constant (RK(C) semantics in 5.1-5.3).
    pub fn c_is_const_51(&self) -> bool {
        self.c >= 256
    }

    /// Get the constant pool index from B (5.1-5.3 RK encoding).
    pub fn b_const_index_51(&self) -> u16 {
        self.b & 0xFF
    }

    /// Get the constant pool index from C (5.1-5.3 RK encoding).
    pub fn c_const_index_51(&self) -> u16 {
        self.c & 0xFF
    }
}

/// Decode a slice of raw bytes into instructions.
/// `endian_le` indicates if the bytes are little-endian.
pub fn decode_instructions(data: &[u8], count: usize, little_endian: bool) -> Vec<DecodedInsn> {
    // This just produces raw u32 values — the actual decode happens per-version later
    let mut words = Vec::with_capacity(count);
    for i in 0..count {
        let offset = i * 4;
        if offset + 4 > data.len() {
            break;
        }
        let word = if little_endian {
            u32::from_le_bytes([
                data[offset],
                data[offset + 1],
                data[offset + 2],
                data[offset + 3],
            ])
        } else {
            u32::from_be_bytes([
                data[offset],
                data[offset + 1],
                data[offset + 2],
                data[offset + 3],
            ])
        };
        // We store the raw word; decoding to DecodedInsn requires the version
        words.push(word);
    }
    // Return empty — caller should use decode_instructions_versioned
    words
        .into_iter()
        .map(|w| DecodedInsn {
            opcode: LuaOpcode::Unknown(0),
            raw: w,
            a: 0,
            b: 0,
            c: 0,
            k: false,
            bx: 0,
            sbx: 0,
            ax: 0,
            sj: 0,
            format: InsnFormat::ABC,
        })
        .collect()
}

/// Decode raw instruction words for a specific Lua version.
pub fn decode_instructions_versioned(
    data: &[u8],
    count: usize,
    little_endian: bool,
    version: LuaVersion,
) -> Vec<DecodedInsn> {
    let mut insns = Vec::with_capacity(count);
    for i in 0..count {
        let offset = i * 4;
        if offset + 4 > data.len() {
            break;
        }
        let word = if little_endian {
            u32::from_le_bytes([
                data[offset],
                data[offset + 1],
                data[offset + 2],
                data[offset + 3],
            ])
        } else {
            u32::from_be_bytes([
                data[offset],
                data[offset + 1],
                data[offset + 2],
                data[offset + 3],
            ])
        };
        insns.push(DecodedInsn::decode(word, version));
    }
    insns
}
