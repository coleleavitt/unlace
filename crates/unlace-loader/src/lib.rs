//! Binary format loader (ELF, PE, Mach-O) and debug-info extraction.
//!
//! This crate provides a [`Loader`] trait for parsing binary formats into a
//! uniform [`BinaryImage`] representation, plus concrete implementations
//! starting with [`ElfLoader`].

pub mod android_boot;
pub mod demangle_rust;
pub mod demangle_swift;
pub mod dwarf;
pub mod dyld_cache;
pub mod dyld_mmap;
pub mod eh_frame;
pub mod elf;
pub mod error;
pub mod esp32_image;
pub mod flirt;
pub mod gcc_except_table;
pub mod go_moduledata;
pub mod go_types;
pub mod gopclntab;
pub mod image;
pub mod intel_hex;
pub mod ios_img4;
pub mod java_class;
pub mod macho;
pub mod minidump;
pub mod msvc_rtti;
pub mod objc;
pub mod packer_detect;
pub mod pdb;
pub mod pdb_types;
pub mod pe;
pub mod python_pyc;
pub mod rtti;
pub mod seh;
pub mod strings;
pub mod swift_metadata;
pub mod til;
pub mod uefi_module;
pub mod wasm_component;
pub mod rr_trace;

pub use objc::{
    ObjcCategory, ObjcClass, ObjcInfo, ObjcIvar, ObjcMethod, ObjcProperty, scan_objc_categories,
    scan_objc_classlist,
};

pub use dwarf::{
    DwarfInfo, EnumType, ExprLocation, ExprPiece, FunctionDebugInfo, LocalVariable,
    MacroDefinition, ParameterInfo, PieceLocation, SourceLocation, StructField, StructType,
    UnionType, evaluate_dwarf_expr, evaluate_location_attr, import_dwarf,
    DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, ParameterInfo, SourceLocation,
    StructField, StructType, UnionType, import_dwarf,
    DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, MacroEntry, ParameterInfo, SourceLocation,
    StructField, StructType, UnionType, import_dwarf, parse_debug_macro,
    DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, ParameterInfo, SourceLocation,
    StructField, StructType, UnionType, import_dwarf,
    DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, MacroDefinition, ParameterInfo,
    SourceLocation, StructField, StructType, UnionType, import_dwarf,
};
pub use pdb::{InlineeSite, PdbInfo, import_pdb, merge_pdb_symbols};
pub use eh_frame::{EhFrameInfo, FunctionExtent, LsdaEntry, parse_eh_frame};
pub use elf::ElfLoader;
pub use error::LoadError;
pub use flirt::{
    FlirtDb, FlirtSignature, GeneratedSigPattern, SigGenerateError, SigGenerateOptions,
    default_db as default_flirt_db, generate_archive_patterns, generate_archive_patterns_from_bytes,
    render_patterns_toml,
pub use flirt::{FlirtDb, FlirtSignature, default_db as default_flirt_db};
pub use flirt::{FlirtDb, FlirtSignature, default_db as default_flirt_db};
pub use flirt::{FlirtDb, FlirtMatch, FlirtSignature, default_db as default_flirt_db};
pub use gcc_except_table::{FunctionLsda, GccExceptTableInfo, TryRegion, parse_gcc_except_table};
pub use intel_hex::{
    IntelHexError, IntelHexImage, SRecordError, SRecordImage, load_intel_hex, load_s_record,
    FlirtDb, FlirtMatch, FlirtRef, FlirtSignature, default_db as default_flirt_db,
};
pub use ios_img4::{Img4Container, Img4Error, parse_img4};
pub use gcc_except_table::{FunctionLsda, GccExceptTableInfo, TryRegion, parse_gcc_except_table};
pub use intel_hex::{
    IntelHexError, IntelHexImage, SRecordError, SRecordImage, load_intel_hex, load_s_record,
};
pub use gcc_except_table::{FunctionLsda, GccExceptTableInfo, TryRegion, parse_gcc_except_table};
pub use intel_hex::{
    IntelHexError, IntelHexImage, SRecordError, SRecordImage, load_intel_hex, load_s_record,
};
pub use java_class::{JAVA_CLASS_MAGIC, JavaClass, JavaError, JavaField, JavaMethod, parse_class};
pub use image::{
    ArchId, BinaryImage, BoundImport, DebugRecord, DylibDep, DylibKind, Endian, LoadConfig,
    RelocKind, Relocation, ResourceEntry, RichHeader, RichRecord, Section, SectionFlags, Symbol,
    SymbolKind,
};
pub use intel_hex::{
    IntelHexError, IntelHexImage, SRecordError, SRecordImage, load_intel_hex, load_s_record,
};
pub use ios_img4::{Img4Container, Img4Error, parse_img4};
pub use java_class::{JAVA_CLASS_MAGIC, JavaClass, JavaError, JavaField, JavaMethod, parse_class};
pub use macho::MachoLoader;
pub use pdb::{InlineeSite, PdbInfo, import_pdb, merge_pdb_symbols};
pub use pdb::{PdbInfo, import_pdb, merge_pdb_symbols};
pub use pdb_types::{
    CanonicalPdbType, PdbError, PdbField, PdbType, PdbTypeAlias, PdbTypeKind, PdbTypeUnification,
    PdbTypes, ProcSig, import_pdb_types, ipi_type_hash, resolve_cross_dll_forward_decls,
    unify_pdb_type_sets, walk_tpi,
    PdbError, PdbField, PdbType, PdbTypeKind, PdbTypes, ProcSig, import_pdb_types, walk_tpi,
    PdbTypes, ProcSig, import_pdb_types, ipi_type_hash, unify_pdb_type_sets, walk_tpi,
};
pub use pe::PeLoader;
pub use wasm_component::{
    WasmCanonicalFunction, WasmComponentExport, WasmComponentImport, WasmComponentInfo,
    WasmComponentStart, WasmCoreExport, WasmCoreImport, WasmEncoding, WasmLoader,
    WasmNestedComponent, WasmNestedModule, WasmStartFunction,
};
pub use rtti::{
    BaseClass, CppClass, InheritanceKind, RttiInfo, VtableLayout, VtableSlotKind, VtableSubtable,
    scan_rtti,
};
pub use swift_metadata::{
    SwiftBuiltinAsyncFunction, SwiftConformance, SwiftInfo, SwiftProtocolDescriptor,
    SwiftTypeDescriptor, scan_swift_metadata,
    SwiftConformance, SwiftInfo, SwiftProtocolDescriptor, SwiftTypeDescriptor,
    scan_swift_metadata,
    SwiftConformance, SwiftInfo, SwiftProtocolDescriptor, SwiftTypeDescriptor, scan_swift_metadata,
    SwiftConformance, SwiftInfo, SwiftProtocolDescriptor, SwiftTypeDescriptor,
    scan_swift_metadata,
};

/// Trait for binary format loaders.
///
/// Each implementation handles one format family (ELF, PE, Mach-O, etc.)
/// and produces a [`BinaryImage`] on success.
pub trait Loader {
    /// Returns `true` if `data` appears to be in this loader's format
    /// (typically by checking magic bytes).
    fn can_load(data: &[u8]) -> bool;

    /// Parse `data` into a [`BinaryImage`].
    ///
    /// # Errors
    ///
    /// Returns [`LoadError`] if the data is malformed or contains
    /// unsupported features.
    fn load(data: &[u8]) -> Result<BinaryImage, LoadError>;
}
