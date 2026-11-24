//! IDA databases (`.idb`, `.i64`) read into plain values: the segments and their bytes,
//! functions with names, flags and the raw type strings of their prototypes, names,
//! comments, entry points and the database's own type library (TIL) section.
//!
//! The container, ID0 B-tree, root record, ID1/IDAS/ID2 flags and NAM readers are ported
//! from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens Brandao and
//! the idb-rs contributors; see NOTICE. Type strings are left undecoded here: unlace's TIL
//! decoder (`unlace_analysis::protos::til`) renders them as C.
//!
//! Every read is bounded by its section; malformed input is an [`Error`] or a skipped
//! item listed in [`Database::errors`], never a panic.

mod bytes;
mod database;
mod id0;
mod nam;
mod reader;
mod root;
mod sections;

#[cfg(test)]
mod tests;

pub use database::{
    Comment, CommentKind, Database, EntryPoint, Function, Info, Load, LocalType, MemoryRun, Name,
    Perms, Segment, TypeInfo,
};

/// Why a database could not be read.
#[derive(Debug, thiserror::Error)]
pub enum Error {
    #[error("{0}")]
    Io(#[from] std::io::Error),
    #[error("{0}")]
    Format(String),
}

pub type Result<T, E = Error> = std::result::Result<T, E>;
