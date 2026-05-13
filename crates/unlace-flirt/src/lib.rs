//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks, CRC16 checksums, and outbound call-reference metadata
//! against raw function bytes. Includes an iterative resolver that feeds back
//! matches from earlier passes to disambiguate colliding byte patterns.

mod error;
mod generator;
mod pattern;

pub use error::FlirtError;
pub use generator::{
    GeneratorOptions, generate_patterns_from_archive, generate_patterns_from_archive_bytes,
    render_db_as_toml,
};
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, FlirtRef, FunctionBytes, load_patterns_from_toml,
    load_patterns_from_toml_str, match_functions, resolve_iterative,
};
