//! Output formatters for the unlace decompiler.

pub mod c_printer;
pub mod cfg_dot;
pub mod cpp_class;
pub mod cpp_stl;
pub mod demangle;
pub mod instruction_annotations;
pub mod ir_dump;
pub mod cfg_svg;

pub use c_printer::{
    FunctionHeaderInfo, PrintConfig, PrinterAnnotations, compute_array_struct_indices,
    dedupe_ida_typedefs, dedupe_rtti_hierarchy, emit_inferred_struct_preamble, print_c,
    print_c_full, print_c_with_annotations, print_c_with_dwarf, print_c_with_rtti,
    print_c_with_rtti_config, strip_ida_typedefs,
};
pub use cfg_dot::emit_cfg_dot;
pub use cpp_class::annotate_cpp_class_info;
pub use cpp_stl::{
    StlType, looks_like_function_sbo_layout, looks_like_shared_ptr_layout,
    looks_like_string_layout, looks_like_unique_ptr_layout, looks_like_vector_layout,
    recognize_stl,
};
pub use demangle::{DemangleResult, SymbolKind, SymbolLanguage, demangle, sanitize_for_c};
pub use instruction_annotations::collect_function_annotations;
pub use ir_dump::dump_ir;
