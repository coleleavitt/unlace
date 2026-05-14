//! Lua bytecode disassembler and IR lifter.
//!
//! Supports Lua 5.1, 5.2, 5.3, and 5.4 bytecode formats. Parses chunk headers,
//! function prototypes, instruction lists, constant pools, upvalue descriptors,
//! and debug info. Lifts instructions into unlace-ir `IrInsn` sequences.

pub mod chunk;
pub mod decode;
pub mod ir_lift;
pub mod opcodes;
pub mod stdlib;

use chunk::{Chunk, ParseError};
use ir_lift::{LiftedFunction, LuaLiftError};

/// Parse raw Lua bytecode bytes and lift all function prototypes to IR.
///
/// Returns a vector of lifted functions (main + nested prototypes in DFS order).
pub fn lift_lua_bytecode(bytes: &[u8]) -> Result<Vec<LiftedFunction>, LuaLiftError> {
    let chunk = Chunk::parse(bytes).map_err(LuaLiftError::Parse)?;
    ir_lift::lift_chunk(&chunk)
}

/// Parse raw Lua bytecode without lifting — just decode the chunk structure.
pub fn parse_lua_bytecode(bytes: &[u8]) -> Result<Chunk, ParseError> {
    Chunk::parse(bytes)
}
