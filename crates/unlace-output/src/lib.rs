//! Output formatters for the unlace decompiler.

pub mod c_printer;
pub mod cfg_dot;
pub mod demangle;
pub mod ir_dump;

pub use c_printer::{
    FunctionHeaderInfo, dedupe_ida_typedefs, print_c, print_c_full, print_c_with_dwarf,
    print_c_with_rtti, strip_ida_typedefs,
};
pub use cfg_dot::emit_cfg_dot;
pub use demangle::{DemangleResult, SymbolKind, SymbolLanguage, demangle, sanitize_for_c};
pub use ir_dump::dump_ir;
