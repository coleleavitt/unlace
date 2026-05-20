//! Error types for FLIRT signature matching.

use thiserror::Error;

/// Errors that can occur during FLIRT pattern loading and matching.
#[derive(Debug, Error)]
pub enum FlirtError {
    /// Pattern file could not be read.
    #[error("failed to read pattern file: {0}")]
    Io(#[from] std::io::Error),

    /// Pattern file contains invalid TOML.
    #[error("failed to parse pattern TOML: {0}")]
    Parse(#[from] toml::de::Error),

    /// Signature blob is malformed or corrupt.
    #[error("malformed signature: {0}")]
    Sig(String),

    /// Static archive parsing failed.
    #[error("failed to parse archive: {detail}")]
    ArchiveParse { detail: String },

    /// An archive member could not be parsed as an object file.
    #[error("failed to parse object member '{member}': {detail}")]
    ObjectParse { member: String, detail: String },

    /// The archive member did not contain a code/text section.
    #[error("archive member '{member}' contained no code section")]
    NoCodeSection { member: String },

    /// A pattern has an invalid byte/mask length mismatch.
    #[error("pattern '{name}': byte length ({byte_len}) != mask length ({mask_len})")]
    LengthMismatch {
        name: String,
        byte_len: usize,
        mask_len: usize,
    },

    /// A hex string in the pattern file is malformed.
    #[error("pattern '{name}': invalid hex string: {detail}")]
    InvalidHex { name: String, detail: String },
}
