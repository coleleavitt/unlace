//! FLIRT (Fast Library Identification and Recognition Technology) signature matching.
//!
//! [`sig`] reads IDA's `.sig` (IDASGN) files and matches them the way the
//! IDA kernel does; [`match_pass`] applies them to a loaded image. The
//! other modules hold unlace's own TOML pattern format.

pub mod builder;
mod error;
pub mod match_pass;
mod pattern;
#[cfg(feature = "unwired")]
pub mod prologue;
pub mod sig;

pub use match_pass::{FlirtAppliedMatch, FlirtApplyReport, FlirtHit, FlirtMatcher};
pub use sig::SigFile;
pub use sig::matching::CodeWindow;

pub use builder::{
    FlirtSignature as SigV2, FlirtSignatureFile, build_from_function_map, build_from_library,
    crc16_ccitt, match_function,
};
pub use error::FlirtError;
pub use pattern::{FlirtDb, FlirtMatch, FlirtPattern, load_patterns_from_toml, match_functions};
