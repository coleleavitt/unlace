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
pub mod eh_frame;
pub mod elf;
pub mod error;
pub mod esp32_image;
pub mod flirt;
pub mod gcc_except_table;
pub mod gopclntab;
pub mod image;
pub mod intel_hex;
pub mod java_class;
pub mod ios_img4;
pub mod macho;
pub mod msvc_rtti;
pub mod objc;
pub mod packer_detect;
pub mod pdb;
pub mod pdb_types;
pub mod pe;
pub mod python_pyc;
pub mod rtti;
pub mod seh;
pub mod go_moduledata;
pub mod go_types;
pub mod strings;
pub mod swift_metadata;
pub mod til;
pub mod uefi_module;

pub use objc::{
    ObjcCategory, ObjcClass, ObjcInfo, ObjcIvar, ObjcMethod, ObjcProperty, scan_objc_categories,
    scan_objc_classlist,
};

pub use dwarf::{
    AddressRange, DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, ParameterInfo,
    SourceLocation, StructField, StructType, UnionType, VariableLocationRange, import_dwarf,
};
pub use eh_frame::{EhFrameInfo, FunctionExtent, LsdaEntry, parse_eh_frame};
pub use elf::ElfLoader;
pub use ios_img4::{Img4Container, Img4Error, parse_img4};
pub use error::LoadError;
pub use flirt::{FlirtDb, FlirtSignature, default_db as default_flirt_db};
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
pub use macho::MachoLoader;
pub use pdb_types::{
    PdbError, PdbField, PdbType, PdbTypeKind, PdbTypes, ProcSig, import_pdb_types, walk_tpi,
};
pub use pe::PeLoader;
pub use rtti::{
    BaseClass, CppClass, InheritanceKind, RttiInfo, VtableLayout, VtableSlotKind, VtableSubtable,
    scan_rtti,
};
pub use swift_metadata::{
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
