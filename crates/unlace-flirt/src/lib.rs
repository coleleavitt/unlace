//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks and CRC16 checksums against raw function bytes.

pub mod builder;
mod error;
pub mod match_pass;
mod pattern;
pub mod prologue;
pub mod sig;

pub use match_pass::{FlirtApplyReport, FlirtMatchDetail, FlirtMatcher};

pub use builder::{
    FlirtSignature as SigV2, FlirtSignatureFile, build_from_function_map, build_from_library,
    crc16_ccitt, match_function,
};
pub use error::FlirtError;
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
