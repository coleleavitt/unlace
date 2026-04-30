//! Output formatters for the unlace decompiler.

pub mod c_printer;
pub mod cfg_dot;
pub mod demangle;
pub mod ir_dump;

pub use c_printer::{print_c, print_c_with_dwarf};
pub use cfg_dot::emit_cfg_dot;
pub use demangle::{DemangleResult, SymbolLanguage, demangle, sanitize_for_c};
pub use ir_dump::dump_ir;
