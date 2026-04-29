//! Error types for binary loading.

use thiserror::Error;

/// Errors that can occur during binary loading.
#[derive(Debug, Error)]
pub enum LoadError {
    /// The input data does not match the expected magic bytes for any supported format.
    #[error("invalid magic bytes: not a recognized binary format")]
    InvalidMagic,

    /// The ELF `e_machine` value is not mapped to a known [`ArchId`](crate::ArchId).
    #[error("unsupported architecture: e_machine = {0:#x}")]
    UnsupportedArch(u16),

    /// The underlying parser (`object` crate) failed.
    #[error("parse error: {0}")]
    Parse(#[from] object::Error),

    /// A section referenced by index or name was expected but missing.
    #[error("missing section: {0}")]
    MissingSection(String),
}
