//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! Provides pattern-based function identification by matching byte sequences
//! with optional masks and CRC16 checksums against raw function bytes.

mod error;
mod library;
mod pattern;

pub use error::FlirtError;
pub use library::{
    SHIPPED_SIGNATURE_LIBRARIES, ShippedSignatureLibrary, load_all_shipped_signature_libraries,
    load_shipped_signature_library, shipped_signature_libraries, shipped_signature_library,
};
pub use pattern::{
    FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, load_patterns_from_toml_str,
    match_functions,
};
