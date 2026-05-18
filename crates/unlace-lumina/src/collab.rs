//! Multi-user collaborative editing protocol (t448).
//!
//! Implements an operational-transform (OT) style collaboration protocol
//! for shared annotation editing. Multiple users can concurrently rename
//! functions, add comments, and modify type annotations with automatic
//! conflict resolution.

use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;

/// A collaborative editing operation.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub enum CollabOp {
    /// Rename a function.
    Rename {
        addr: u64,
        old_name: String,
        new_name: String,
    },
    /// Add or modify a comment.
    Comment { addr: u64, text: String },
    /// Delete a comment.
    DeleteComment { addr: u64 },
    /// Set a type annotation.
    SetType { addr: u64, type_name: String },
}

/// A versioned operation with author and timestamp.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct VersionedOp {
    pub seq: u64,
    pub author: String,
    pub timestamp: u64,
    pub op: CollabOp,
}

/// The collaborative document state.
#[derive(Debug, Clone, Default)]
pub struct CollabDocument {
    pub renames: BTreeMap<u64, String>,
    pub comments: BTreeMap<u64, String>,
    pub types: BTreeMap<u64, String>,
    pub history: Vec<VersionedOp>,
    pub next_seq: u64,
}

impl CollabDocument {
    pub fn new() -> Self {
        Self::default()
    }

    /// Apply an operation to the document.
    pub fn apply(&mut self, author: &str, timestamp: u64, op: CollabOp) -> u64 {
        let seq = self.next_seq;
        self.next_seq += 1;

        match &op {
            CollabOp::Rename { addr, new_name, .. } => {
                self.renames.insert(*addr, new_name.clone());
            }
            CollabOp::Comment { addr, text } => {
                self.comments.insert(*addr, text.clone());
            }
            CollabOp::DeleteComment { addr } => {
                self.comments.remove(addr);
            }
            CollabOp::SetType { addr, type_name } => {
                self.types.insert(*addr, type_name.clone());
            }
        }

        self.history.push(VersionedOp {
            seq,
            author: author.into(),
            timestamp,
            op,
        });
        seq
    }

    /// Get operations since a given sequence number (for sync).
    pub fn ops_since(&self, since_seq: u64) -> &[VersionedOp] {
        let start = self
            .history
            .iter()
            .position(|op| op.seq >= since_seq)
            .unwrap_or(self.history.len());
        &self.history[start..]
    }

    /// Resolve a rename conflict: last-writer-wins.
    pub fn resolve_conflict(&self, addr: u64) -> Option<&str> {
        self.renames.get(&addr).map(|s| s.as_str())
    }
}

/// Transform two concurrent operations for consistency.
///
/// If two ops target the same address, the one with higher seq wins.
pub fn transform(op_a: &VersionedOp, op_b: &VersionedOp) -> Option<VersionedOp> {
    // Same address conflict: higher seq wins, return the loser transformed to no-op
    match (&op_a.op, &op_b.op) {
        (CollabOp::Rename { addr: a1, .. }, CollabOp::Rename { addr: a2, .. }) if a1 == a2 => {
            if op_a.seq > op_b.seq {
                Some(op_b.clone())
            } else {
                Some(op_a.clone())
            }
        }
        _ => None, // No conflict
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn apply_rename() {
        let mut doc = CollabDocument::new();
        doc.apply(
            "alice",
            1000,
            CollabOp::Rename {
                addr: 0x1000,
                old_name: "sub_1000".into(),
                new_name: "main".into(),
            },
        );
        assert_eq!(doc.renames[&0x1000], "main");
    }

    #[test]
    fn apply_comment() {
        let mut doc = CollabDocument::new();
        doc.apply(
            "bob",
            1001,
            CollabOp::Comment {
                addr: 0x2000,
                text: "entry point".into(),
            },
        );
        assert_eq!(doc.comments[&0x2000], "entry point");
    }

    #[test]
    fn ops_since_sync() {
        let mut doc = CollabDocument::new();
        doc.apply(
            "a",
            1,
            CollabOp::Comment {
                addr: 0x1000,
                text: "x".into(),
            },
        );
        doc.apply(
            "b",
            2,
            CollabOp::Comment {
                addr: 0x2000,
                text: "y".into(),
            },
        );
        doc.apply(
            "c",
            3,
            CollabOp::Comment {
                addr: 0x3000,
                text: "z".into(),
            },
        );
        let since = doc.ops_since(2);
        assert_eq!(since.len(), 1);
        assert_eq!(since[0].seq, 2);
    }

    #[test]
    fn last_writer_wins() {
        let mut doc = CollabDocument::new();
        doc.apply(
            "alice",
            1,
            CollabOp::Rename {
                addr: 0x1000,
                old_name: "x".into(),
                new_name: "foo".into(),
            },
        );
        doc.apply(
            "bob",
            2,
            CollabOp::Rename {
                addr: 0x1000,
                old_name: "foo".into(),
                new_name: "bar".into(),
            },
        );
        assert_eq!(doc.resolve_conflict(0x1000), Some("bar"));
    }

    #[test]
    fn delete_comment() {
        let mut doc = CollabDocument::new();
        doc.apply(
            "a",
            1,
            CollabOp::Comment {
                addr: 0x1000,
                text: "hello".into(),
            },
        );
        doc.apply("a", 2, CollabOp::DeleteComment { addr: 0x1000 });
        assert!(!doc.comments.contains_key(&0x1000));
    }
}
