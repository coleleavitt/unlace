//! Standard library call detection and annotation.
//!
//! Identifies calls to well-known Lua standard library functions and provides
//! metadata about their signatures and behavior.

/// Known Lua standard library functions.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum StdlibFunc {
    // Base library
    Print,
    Type,
    Tostring,
    Tonumber,
    Assert,
    Error,
    Pcall,
    Xpcall,
    Select,
    Pairs,
    Ipairs,
    Next,
    Unpack,
    Require,
    Setmetatable,
    Getmetatable,
    Rawget,
    Rawset,
    Rawequal,
    Rawlen,
    // String library
    StringFormat,
    StringFind,
    StringGsub,
    StringSub,
    StringRep,
    StringReverse,
    StringLen,
    StringByte,
    StringChar,
    StringLower,
    StringUpper,
    StringMatch,
    StringGmatch,
    StringDump,
    // Table library
    TableInsert,
    TableRemove,
    TableSort,
    TableConcat,
    TableMove,
    TablePack,
    TableUnpack,
    // Math library
    MathFloor,
    MathCeil,
    MathSqrt,
    MathAbs,
    MathSin,
    MathCos,
    MathTan,
    MathMax,
    MathMin,
    MathRandom,
    MathRandomseed,
    MathLog,
    MathExp,
    // IO library
    IoOpen,
    IoClose,
    IoRead,
    IoWrite,
    IoLines,
    // OS library
    OsClock,
    OsTime,
    OsDate,
    OsExecute,
    OsExit,
    OsRename,
    OsRemove,
    // Coroutine library
    CoroutineCreate,
    CoroutineResume,
    CoroutineYield,
    CoroutineWrap,
    CoroutineStatus,
}

/// Annotation describing a detected stdlib call.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StdlibAnnotation {
    /// The identified function.
    pub func: StdlibFunc,
    /// PC index where the call occurs.
    pub pc: usize,
    /// Human-readable name (e.g., "string.format").
    pub name: &'static str,
}

impl StdlibFunc {
    /// Return the canonical dotted name for this stdlib function.
    pub fn name(&self) -> &'static str {
        match self {
            Self::Print => "print",
            Self::Type => "type",
            Self::Tostring => "tostring",
            Self::Tonumber => "tonumber",
            Self::Assert => "assert",
            Self::Error => "error",
            Self::Pcall => "pcall",
            Self::Xpcall => "xpcall",
            Self::Select => "select",
            Self::Pairs => "pairs",
            Self::Ipairs => "ipairs",
            Self::Next => "next",
            Self::Unpack => "unpack",
            Self::Require => "require",
            Self::Setmetatable => "setmetatable",
            Self::Getmetatable => "getmetatable",
            Self::Rawget => "rawget",
            Self::Rawset => "rawset",
            Self::Rawequal => "rawequal",
            Self::Rawlen => "rawlen",
            Self::StringFormat => "string.format",
            Self::StringFind => "string.find",
            Self::StringGsub => "string.gsub",
            Self::StringSub => "string.sub",
            Self::StringRep => "string.rep",
            Self::StringReverse => "string.reverse",
            Self::StringLen => "string.len",
            Self::StringByte => "string.byte",
            Self::StringChar => "string.char",
            Self::StringLower => "string.lower",
            Self::StringUpper => "string.upper",
            Self::StringMatch => "string.match",
            Self::StringGmatch => "string.gmatch",
            Self::StringDump => "string.dump",
            Self::TableInsert => "table.insert",
            Self::TableRemove => "table.remove",
            Self::TableSort => "table.sort",
            Self::TableConcat => "table.concat",
            Self::TableMove => "table.move",
            Self::TablePack => "table.pack",
            Self::TableUnpack => "table.unpack",
            Self::MathFloor => "math.floor",
            Self::MathCeil => "math.ceil",
            Self::MathSqrt => "math.sqrt",
            Self::MathAbs => "math.abs",
            Self::MathSin => "math.sin",
            Self::MathCos => "math.cos",
            Self::MathTan => "math.tan",
            Self::MathMax => "math.max",
            Self::MathMin => "math.min",
            Self::MathRandom => "math.random",
            Self::MathRandomseed => "math.randomseed",
            Self::MathLog => "math.log",
            Self::MathExp => "math.exp",
            Self::IoOpen => "io.open",
            Self::IoClose => "io.close",
            Self::IoRead => "io.read",
            Self::IoWrite => "io.write",
            Self::IoLines => "io.lines",
            Self::OsClock => "os.clock",
            Self::OsTime => "os.time",
            Self::OsDate => "os.date",
            Self::OsExecute => "os.execute",
            Self::OsExit => "os.exit",
            Self::OsRename => "os.rename",
            Self::OsRemove => "os.remove",
            Self::CoroutineCreate => "coroutine.create",
            Self::CoroutineResume => "coroutine.resume",
            Self::CoroutineYield => "coroutine.yield",
            Self::CoroutineWrap => "coroutine.wrap",
            Self::CoroutineStatus => "coroutine.status",
        }
    }

    /// Try to identify a stdlib function from its name string found in the
    /// constant pool (e.g., loaded via GETGLOBAL or GETTABUP).
    pub fn from_name(name: &str) -> Option<Self> {
        match name {
            "print" => Some(Self::Print),
            "type" => Some(Self::Type),
            "tostring" => Some(Self::Tostring),
            "tonumber" => Some(Self::Tonumber),
            "assert" => Some(Self::Assert),
            "error" => Some(Self::Error),
            "pcall" => Some(Self::Pcall),
            "xpcall" => Some(Self::Xpcall),
            "select" => Some(Self::Select),
            "pairs" => Some(Self::Pairs),
            "ipairs" => Some(Self::Ipairs),
            "next" => Some(Self::Next),
            "unpack" | "table.unpack" => Some(Self::Unpack),
            "require" => Some(Self::Require),
            "setmetatable" => Some(Self::Setmetatable),
            "getmetatable" => Some(Self::Getmetatable),
            "rawget" => Some(Self::Rawget),
            "rawset" => Some(Self::Rawset),
            "rawequal" => Some(Self::Rawequal),
            "rawlen" => Some(Self::Rawlen),
            "format" => Some(Self::StringFormat),
            "find" => Some(Self::StringFind),
            "gsub" => Some(Self::StringGsub),
            "sub" => Some(Self::StringSub),
            "rep" => Some(Self::StringRep),
            "reverse" => Some(Self::StringReverse),
            "len" => Some(Self::StringLen),
            "byte" => Some(Self::StringByte),
            "char" => Some(Self::StringChar),
            "lower" => Some(Self::StringLower),
            "upper" => Some(Self::StringUpper),
            "match" => Some(Self::StringMatch),
            "gmatch" => Some(Self::StringGmatch),
            "dump" => Some(Self::StringDump),
            "insert" => Some(Self::TableInsert),
            "remove" => Some(Self::TableRemove),
            "sort" => Some(Self::TableSort),
            "concat" => Some(Self::TableConcat),
            "move" => Some(Self::TableMove),
            "pack" => Some(Self::TablePack),
            "floor" => Some(Self::MathFloor),
            "ceil" => Some(Self::MathCeil),
            "sqrt" => Some(Self::MathSqrt),
            "abs" => Some(Self::MathAbs),
            "sin" => Some(Self::MathSin),
            "cos" => Some(Self::MathCos),
            "tan" => Some(Self::MathTan),
            "max" => Some(Self::MathMax),
            "min" => Some(Self::MathMin),
            "random" => Some(Self::MathRandom),
            "randomseed" => Some(Self::MathRandomseed),
            "log" => Some(Self::MathLog),
            "exp" => Some(Self::MathExp),
            "open" => Some(Self::IoOpen),
            "close" => Some(Self::IoClose),
            "read" => Some(Self::IoRead),
            "write" => Some(Self::IoWrite),
            "lines" => Some(Self::IoLines),
            "clock" => Some(Self::OsClock),
            "time" => Some(Self::OsTime),
            "date" => Some(Self::OsDate),
            "execute" => Some(Self::OsExecute),
            "exit" => Some(Self::OsExit),
            "rename" => Some(Self::OsRename),
            "create" => Some(Self::CoroutineCreate),
            "resume" => Some(Self::CoroutineResume),
            "yield" => Some(Self::CoroutineYield),
            "wrap" => Some(Self::CoroutineWrap),
            "status" => Some(Self::CoroutineStatus),
            _ => None,
        }
    }
}

use crate::chunk::{Constant, Prototype};
use crate::opcodes::LuaOpcode;

/// Scan a prototype's instructions and constants to detect stdlib calls.
///
/// This performs simple pattern matching: GETGLOBAL/GETTABUP loading a known
/// name followed by a CALL instruction.
pub fn detect_stdlib_calls(proto: &Prototype) -> Vec<StdlibAnnotation> {
    let mut annotations = Vec::new();

    // Look for global name references in the constant pool
    for (pc, insn) in proto.instructions.iter().enumerate() {
        match insn.opcode {
            // 5.1: GETGLOBAL R(A), K(Bx)
            LuaOpcode::GetGlobal => {
                let k_idx = insn.bx as usize;
                if let Some(name) = get_string_constant(&proto.constants, k_idx)
                    && let Some(func) = StdlibFunc::from_name(&name)
                {
                    annotations.push(StdlibAnnotation {
                        func,
                        pc,
                        name: func.name(),
                    });
                }
            }
            // 5.2+: GETTABUP R(A), Up(B), RK(C) — loading from _ENV
            LuaOpcode::GetTabup => {
                let c_idx = if insn.c >= 256 {
                    (insn.c - 256) as usize
                } else {
                    // In 5.4, if k bit is set, C is a constant index
                    if insn.k {
                        insn.c as usize
                    } else {
                        continue;
                    }
                };
                if let Some(name) = get_string_constant(&proto.constants, c_idx)
                    && let Some(func) = StdlibFunc::from_name(&name)
                {
                    annotations.push(StdlibAnnotation {
                        func,
                        pc,
                        name: func.name(),
                    });
                }
            }
            // GETFIELD R(A), R(B), K(C) — for table.method patterns
            LuaOpcode::GetField => {
                let c_idx = insn.c as usize;
                if let Some(name) = get_string_constant(&proto.constants, c_idx)
                    && let Some(func) = StdlibFunc::from_name(&name)
                {
                    annotations.push(StdlibAnnotation {
                        func,
                        pc,
                        name: func.name(),
                    });
                }
            }
            _ => {}
        }
    }

    annotations
}

fn get_string_constant(constants: &[Constant], idx: usize) -> Option<String> {
    constants.get(idx).and_then(|c| match c {
        Constant::String(s) => Some(s.clone()),
        _ => None,
    })
}
