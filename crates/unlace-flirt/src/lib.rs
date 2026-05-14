//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks and CRC16 checksums against raw function bytes.

mod error;
mod generator;
mod pattern;

pub use error::FlirtError;
pub use generator::{
    GeneratorOptions, generate_patterns_from_archive, generate_patterns_from_archive_bytes,
    render_db_as_toml,
};
pub mod fuzzy_lookup;
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, FunctionBytes, load_patterns_from_toml,
    load_patterns_from_toml_str, match_functions,
};
