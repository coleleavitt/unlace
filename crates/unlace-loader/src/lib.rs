//! Binary format loader (ELF, PE, Mach-O) and debug-info extraction.
//!
//! This crate provides a [`Loader`] trait for parsing binary formats into a
//! uniform [`BinaryImage`] representation, plus concrete implementations
//! starting with [`ElfLoader`].

pub mod dwarf;
pub mod eh_frame;
pub mod elf;
pub mod error;
pub mod image;
pub mod pdb;
pub mod pe;
pub mod strings;

pub use dwarf::{
    import_dwarf, DwarfInfo, EnumType, FunctionDebugInfo, LocalVariable, ParameterInfo,
    SourceLocation, StructField, StructType, UnionType,
};
pub use eh_frame::{parse_eh_frame, EhFrameInfo, FunctionExtent, LsdaEntry};
pub use elf::ElfLoader;
pub use error::LoadError;
pub use pe::PeLoader;
pub use image::{
    ArchId, BinaryImage, Endian, RelocKind, Relocation, Section, SectionFlags, Symbol, SymbolKind,
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
