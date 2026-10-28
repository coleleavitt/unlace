//! Naming conventions of printed output: Ghidra's own, or the IDA/Hex-Rays spelling that unlace
//! prints. The style only chooses names (core data-types, default function names); analysis does
//! not depend on it.

use std::collections::BTreeMap;
use std::sync::Arc;

use crate::address::Address;
use crate::types::TypeMetatype;

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum OutputStyle {
    /// Ghidra's names: `int4`, `xunknown8`, `func_0x00401000`.
    #[default]
    Ghidra,
    /// IDA/Hex-Rays names: `int`, `_QWORD`, `sub_401000`.
    Ida,
}

/// Names of functions without a symbol in the database, keyed by entry offset.
pub type FunctionNames = Arc<BTreeMap<u64, String>>;

#[derive(Clone, Copy, Debug)]
pub(crate) struct CoreType {
    pub(crate) name: &'static str,
    pub(crate) size: i32,
    pub(crate) meta: TypeMetatype,
    pub(crate) chartp: bool,
}

const fn core(name: &'static str, size: i32, meta: TypeMetatype, chartp: bool) -> CoreType {
    CoreType {
        name,
        size,
        meta,
        chartp,
    }
}

const GHIDRA_CORE_TYPES: [CoreType; 22] = [
    core("void", 1, TypeMetatype::Void, false),
    core("bool", 1, TypeMetatype::Bool, false),
    core("uint1", 1, TypeMetatype::Uint, false),
    core("uint2", 2, TypeMetatype::Uint, false),
    core("uint4", 4, TypeMetatype::Uint, false),
    core("uint8", 8, TypeMetatype::Uint, false),
    core("int1", 1, TypeMetatype::Int, false),
    core("int2", 2, TypeMetatype::Int, false),
    core("int4", 4, TypeMetatype::Int, false),
    core("int8", 8, TypeMetatype::Int, false),
    core("float4", 4, TypeMetatype::Float, false),
    core("float8", 8, TypeMetatype::Float, false),
    core("float10", 10, TypeMetatype::Float, false),
    core("float16", 16, TypeMetatype::Float, false),
    core("xunknown1", 1, TypeMetatype::Unknown, false),
    core("xunknown2", 2, TypeMetatype::Unknown, false),
    core("xunknown4", 4, TypeMetatype::Unknown, false),
    core("xunknown8", 8, TypeMetatype::Unknown, false),
    core("code", 1, TypeMetatype::Code, false),
    core("char", 1, TypeMetatype::Int, true),
    core("wchar2", 2, TypeMetatype::Int, true),
    core("wchar4", 4, TypeMetatype::Int, true),
];

const IDA_CORE_TYPES: [CoreType; 22] = [
    core("void", 1, TypeMetatype::Void, false),
    core("bool", 1, TypeMetatype::Bool, false),
    core("unsigned __int8", 1, TypeMetatype::Uint, false),
    core("unsigned __int16", 2, TypeMetatype::Uint, false),
    core("unsigned int", 4, TypeMetatype::Uint, false),
    core("unsigned __int64", 8, TypeMetatype::Uint, false),
    core("__int8", 1, TypeMetatype::Int, false),
    core("__int16", 2, TypeMetatype::Int, false),
    core("int", 4, TypeMetatype::Int, false),
    core("__int64", 8, TypeMetatype::Int, false),
    core("float", 4, TypeMetatype::Float, false),
    core("double", 8, TypeMetatype::Float, false),
    core("long double", 10, TypeMetatype::Float, false),
    core("__float128", 16, TypeMetatype::Float, false),
    core("_BYTE", 1, TypeMetatype::Unknown, false),
    core("_WORD", 2, TypeMetatype::Unknown, false),
    core("_DWORD", 4, TypeMetatype::Unknown, false),
    core("_QWORD", 8, TypeMetatype::Unknown, false),
    core("code", 1, TypeMetatype::Code, false),
    core("char", 1, TypeMetatype::Int, true),
    core("char16_t", 2, TypeMetatype::Int, true),
    core("char32_t", 4, TypeMetatype::Int, true),
];

impl OutputStyle {
    pub(crate) fn core_types(self) -> &'static [CoreType] {
        match self {
            OutputStyle::Ghidra => &GHIDRA_CORE_TYPES,
            OutputStyle::Ida => &IDA_CORE_TYPES,
        }
    }

    pub fn default_function_name(self, addr: &Address) -> String {
        match self {
            OutputStyle::Ghidra => {
                let mut name = "func_".to_string();
                addr.print_raw(&mut name);
                name
            }
            OutputStyle::Ida => format!("sub_{:x}", addr.get_offset()),
        }
    }
}
