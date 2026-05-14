//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks and CRC16 checksums against raw function bytes.
//!
//! # Bundled Signature Libraries
//!
//! This crate ships pre-built signature databases for common runtime libraries:
//! - glibc (x86-64)
//! - musl (x86-64)
//! - MSVCRT (x86-64)
//! - MinGW (x86-64)
//! - dietlibc (x86-64)
//! - Go runtime (x86-64)
//! - Rust libcore/std (x86-64)
//!
//! Use [`SignatureLibrary`] or [`load_all_bundled`] to access them.
//! with optional masks and CRC16 checksums against raw function bytes.
//! with optional masks, CRC16 checksums, and outbound call-reference metadata
//! against raw function bytes. Includes an iterative resolver that feeds back
//! matches from earlier passes to disambiguate colliding byte patterns.

mod error;
mod generator;
mod library;
mod pattern;
pub mod prologue;

pub use error::FlirtError;
pub use generator::{
    GeneratorOptions, generate_patterns_from_archive, generate_patterns_from_archive_bytes,
    render_db_as_toml,
};
pub use library::{
    SignatureLibrary, list_bundled_libraries, load_all_bundled, load_bundled_libraries,
    load_bundled_library,
};
pub mod fuzzy_lookup;
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, FunctionBytes, load_patterns_from_toml,
    load_patterns_from_toml_str, match_functions,
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
pub use library::{
    SHIPPED_SIGNATURE_LIBRARIES, ShippedSignatureLibrary, load_all_shipped_signature_libraries,
    load_shipped_signature_library, shipped_signature_libraries, shipped_signature_library,
};
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, load_patterns_from_toml_str,
    match_functions,
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, FlirtRef, FunctionBytes, load_patterns_from_toml,
    load_patterns_from_toml_str, match_functions, resolve_iterative,
};
