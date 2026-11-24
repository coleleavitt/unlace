//! The errors the API returns.

use std::path::PathBuf;

/// Everything that can go wrong between a request and a decompiled function.
///
/// ```no_run
/// use unlace::{Decompiler, Error};
///
/// match Decompiler::open("/bin/true").and_then(|mut d| d.decompile_named("main")) {
///     Ok(function) => println!("{}", function.c),
///     Err(Error::NotFound { what, reason }) => eprintln!("{what}: {reason}"),
///     Err(other) => eprintln!("{other}"),
/// }
/// ```
#[derive(Debug, thiserror::Error)]
#[non_exhaustive]
pub enum Error {
    /// The input file could not be read, or the scratch copy of in-memory bytes
    /// could not be written.
    #[error("{}: {source}", .path.display())]
    Io {
        /// The file.
        path: PathBuf,
        /// What the operating system said.
        source: std::io::Error,
    },
    /// The input path is not valid UTF-8, which the loader requires.
    #[error("input path is not UTF-8: {}", .0.display())]
    NonUtf8Path(PathBuf),
    /// The request is not valid: an unknown option, a malformed function bound,
    /// prototype or assertion, a raw image with nothing to start from.
    #[error("invalid request: {0}")]
    Request(String),
    /// The input did not load: an unrecognized format, a missing SLEIGH
    /// specification, an analysis failure.
    #[error("load failed: {0}")]
    Load(String),
    /// No function is at the address or carries the name.
    #[error("{what}: {reason}")]
    NotFound {
        /// The address or name that was asked for.
        what: String,
        /// The lookup's own explanation.
        reason: String,
    },
    /// The function was found but did not decompile.
    #[error("{reason}")]
    Decompile {
        /// The function's name.
        name: String,
        /// The function's address.
        address: u64,
        /// Why, as `unlace decompile` words it.
        reason: String,
        /// The `unlace decompile --json` document, whose record carries the error.
        json: serde_json::Value,
    },
    /// The raw segments overlap, are empty, or wrap the address space.
    #[error("invalid segments: {0}")]
    Segments(String),
    /// The engine panicked. The loaded program is dropped; the next call
    /// loads it again.
    #[error("the decompiler panicked: {0}")]
    Panic(String),
}

/// `Result` with this crate's [`Error`].
pub type Result<T, E = Error> = std::result::Result<T, E>;
