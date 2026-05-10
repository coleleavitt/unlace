//! Binary format loader (ELF, PE, Mach-O) and debug-info extraction.
//!
//! This crate provides a [`Loader`] trait for parsing binary formats into a
//! uniform [`BinaryImage`] representation, plus concrete implementations
//! starting with [`ElfLoader`].

pub mod dwarf;
pub mod eh_frame;
pub mod elf;
pub mod error;
pub mod flirt;
pub mod gcc_except_table;
pub mod gopclntab;
pub mod image;
pub mod macho;
pub mod objc;
pub mod pdb;
pub mod pdb_types;
pub mod pe;
pub mod rtti;
pub mod strings;

pub use dwarf::{
    DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, ParameterInfo, SourceLocation,
    StructField, StructType, UnionType, import_dwarf,
};
pub use eh_frame::{EhFrameInfo, FunctionExtent, LsdaEntry, parse_eh_frame};
pub use elf::ElfLoader;
pub use error::LoadError;
pub use flirt::{FlirtDb, FlirtSignature, default_db as default_flirt_db};
pub use gcc_except_table::{FunctionLsda, GccExceptTableInfo, TryRegion, parse_gcc_except_table};
pub use image::{
    ArchId, BinaryImage, BoundImport, DebugRecord, DylibDep, DylibKind, Endian, LoadConfig,
    RelocKind, Relocation, ResourceEntry, RichHeader, RichRecord, Section, SectionFlags, Symbol,
    SymbolKind,
};
pub use macho::MachoLoader;
pub use pdb_types::{PdbTypes, ProcSig, import_pdb_types};
pub use pe::PeLoader;
pub use rtti::{
    BaseClass, CppClass, InheritanceKind, RttiInfo, VtableLayout, VtableSlotKind, VtableSubtable,
    scan_rtti,
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
