//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks and CRC16 checksums against raw function bytes.

mod error;
mod pattern;
pub mod prologue;

pub use error::FlirtError;
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
