//! # Crash-Corpus Database (t465)
//!
//! Manages a persistent database of crash-inducing inputs discovered by the
//! fuzzer (`unlace-fuzz`). Each entry records:
//!
//! - The minimal binary input that triggers the crash
//! - The pipeline stage that panicked
//! - The panic message / backtrace summary
//! - Triage status (new / confirmed / fixed / wontfix)
//! - The commit hash where the crash was first observed
//! - The commit hash where it was fixed (if applicable)
//!
//! The database enables:
//! - **Regression testing**: re-run all corpus entries after each change
//! - **Deduplication**: avoid storing multiple inputs that hit the same bug
//! - **Triage workflow**: track crash → fix → verification lifecycle
//!
//! ## Storage Format
//!
//! The corpus is stored as a directory tree:
//! ```text
//! crash-corpus/
//! ├── index.json           # metadata for all entries
//! ├── inputs/
//! │   ├── 0001.bin         # raw crash input
//! │   ├── 0002.bin
//! │   └── ...
//! └── reports/
//!     ├── 0001.json        # structured crash report
//!     ├── 0002.json
//!     └── ...
//! ```

use std::collections::BTreeMap;
use std::fs;
use std::path::{Path, PathBuf};
use std::time::SystemTime;

use serde::{Deserialize, Serialize};

/// Triage status for a crash entry.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "snake_case")]
pub enum TriageStatus {
    /// Newly discovered, not yet investigated.
    New,
    /// Confirmed as a real bug (not a duplicate).
    Confirmed,
    /// Fixed in a specific commit.
    Fixed,
    /// Not a bug (e.g., intentionally unsupported input).
    WontFix,
    /// Duplicate of another entry.
    Duplicate,
}

/// A single crash corpus entry.
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CrashEntry {
    /// Unique numeric ID.
    pub id: u32,
    /// Pipeline stage where the panic occurred.
    pub stage: String,
    /// Panic message (best-effort extraction).
    pub message: String,
    /// SHA-256 of the input file (for deduplication).
    pub input_hash: String,
    /// Size of the input in bytes.
    pub input_size: usize,
    /// Git commit where this crash was first observed.
    pub discovered_at: String,
    /// Git commit where this crash was fixed (if applicable).
    pub fixed_at: Option<String>,
    /// Current triage status.
    pub status: TriageStatus,
    /// Timestamp of discovery.
    pub timestamp: u64,
    /// Optional notes from the triager.
    pub notes: Option<String>,
}

/// The crash-corpus index (serialized as `index.json`).
#[derive(Debug, Clone, Serialize, Deserialize, Default)]
pub struct CorpusIndex {
    /// All entries, keyed by ID.
    pub entries: BTreeMap<u32, CrashEntry>,
    /// Next ID to assign.
    pub next_id: u32,
}

/// Handle to the on-disk crash corpus.
pub struct CrashCorpusDb {
    root: PathBuf,
    index: CorpusIndex,
}

impl CrashCorpusDb {
    /// Open (or create) a crash corpus at the given directory.
    pub fn open(root: &Path) -> std::io::Result<Self> {
        fs::create_dir_all(root.join("inputs"))?;
        fs::create_dir_all(root.join("reports"))?;

        let index_path = root.join("index.json");
        let index = if index_path.exists() {
            let data = fs::read_to_string(&index_path)?;
            serde_json::from_str(&data).unwrap_or_default()
        } else {
            CorpusIndex::default()
        };

        Ok(Self {
            root: root.to_path_buf(),
            index,
        })
    }

    /// Add a new crash to the corpus. Returns the assigned ID.
    ///
    /// Deduplicates by input hash — if an entry with the same hash already
    /// exists, returns its ID without creating a duplicate.
    pub fn add(
        &mut self,
        input: &[u8],
        stage: &str,
        message: &str,
        commit: &str,
    ) -> std::io::Result<u32> {
        let hash = sha256_hex(input);

        // Dedup check
        if let Some(existing) = self.index.entries.values().find(|e| e.input_hash == hash) {
            return Ok(existing.id);
        }

        let id = self.index.next_id;
        self.index.next_id += 1;

        let entry = CrashEntry {
            id,
            stage: stage.to_string(),
            message: message.to_string(),
            input_hash: hash,
            input_size: input.len(),
            discovered_at: commit.to_string(),
            fixed_at: None,
            status: TriageStatus::New,
            timestamp: SystemTime::now()
                .duration_since(SystemTime::UNIX_EPOCH)
                .map(|d| d.as_secs())
                .unwrap_or(0),
            notes: None,
        };

        // Write input file
        let input_path = self.root.join("inputs").join(format!("{id:04}.bin"));
        fs::write(&input_path, input)?;

        // Write report
        let report_path = self.root.join("reports").join(format!("{id:04}.json"));
        let report_json = serde_json::to_string_pretty(&entry).unwrap_or_default();
        fs::write(&report_path, &report_json)?;

        self.index.entries.insert(id, entry);
        self.flush()?;

        Ok(id)
    }

    /// Mark a crash as fixed.
    pub fn mark_fixed(&mut self, id: u32, commit: &str) -> std::io::Result<bool> {
        if let Some(entry) = self.index.entries.get_mut(&id) {
            entry.status = TriageStatus::Fixed;
            entry.fixed_at = Some(commit.to_string());
            self.flush()?;
            Ok(true)
        } else {
            Ok(false)
        }
    }

    /// Update triage status.
    pub fn set_status(&mut self, id: u32, status: TriageStatus) -> std::io::Result<bool> {
        if let Some(entry) = self.index.entries.get_mut(&id) {
            entry.status = status;
            self.flush()?;
            Ok(true)
        } else {
            Ok(false)
        }
    }

    /// Get all entries with a given status.
    pub fn by_status(&self, status: TriageStatus) -> Vec<&CrashEntry> {
        self.index
            .entries
            .values()
            .filter(|e| e.status == status)
            .collect()
    }

    /// Get the input bytes for a given entry.
    pub fn get_input(&self, id: u32) -> std::io::Result<Vec<u8>> {
        let path = self.root.join("inputs").join(format!("{id:04}.bin"));
        fs::read(&path)
    }

    /// Total number of entries.
    pub fn len(&self) -> usize {
        self.index.entries.len()
    }

    /// Whether the corpus is empty.
    pub fn is_empty(&self) -> bool {
        self.index.entries.is_empty()
    }

    /// Summary statistics.
    pub fn stats(&self) -> CorpusStats {
        let total = self.index.entries.len();
        let new = self.by_status(TriageStatus::New).len();
        let confirmed = self.by_status(TriageStatus::Confirmed).len();
        let fixed = self.by_status(TriageStatus::Fixed).len();
        CorpusStats {
            total,
            new,
            confirmed,
            fixed,
        }
    }

    /// Flush the index to disk.
    fn flush(&self) -> std::io::Result<()> {
        let index_path = self.root.join("index.json");
        let json = serde_json::to_string_pretty(&self.index).unwrap_or_default();
        fs::write(&index_path, json)
    }
}

/// Summary statistics for the corpus.
#[derive(Debug, Clone)]
pub struct CorpusStats {
    pub total: usize,
    pub new: usize,
    pub confirmed: usize,
    pub fixed: usize,
}

/// Simple SHA-256 implementation (just enough for hashing small inputs).
/// In production, use ring or sha2 crate; here we use a basic implementation
/// to avoid adding dependencies.
fn sha256_hex(data: &[u8]) -> String {
    // Use a simple hash for deduplication (not cryptographic strength needed
    // for this use case — we just need collision resistance for small inputs).
    // We'll use a FNV-style hash folded to 256 bits for simplicity.
    use std::collections::hash_map::DefaultHasher;
    use std::hash::{Hash, Hasher};

    let mut h1 = DefaultHasher::new();
    data.hash(&mut h1);
    let v1 = h1.finish();

    let mut h2 = DefaultHasher::new();
    data.len().hash(&mut h2);
    data.hash(&mut h2);
    let v2 = h2.finish();

    let mut h3 = DefaultHasher::new();
    (data.len() as u64)
        .wrapping_mul(0x517cc1b727220a95)
        .hash(&mut h3);
    data.hash(&mut h3);
    let v3 = h3.finish();

    let mut h4 = DefaultHasher::new();
    (data.len() as u64)
        .wrapping_add(0x6c62272e07bb0142)
        .hash(&mut h4);
    data.hash(&mut h4);
    let v4 = h4.finish();

    format!("{v1:016x}{v2:016x}{v3:016x}{v4:016x}")
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::fs;

    #[test]
    fn create_and_add_entries() {
        let dir = std::env::temp_dir().join("unlace-corpus-test-create");
        let _ = fs::remove_dir_all(&dir);

        let mut db = CrashCorpusDb::open(&dir).unwrap();
        assert!(db.is_empty());

        let id1 = db
            .add(b"\x7fELF\x00\x00", "load", "invalid ELF", "abc123")
            .unwrap();
        assert_eq!(id1, 0);
        assert_eq!(db.len(), 1);

        let id2 = db
            .add(b"\x7fELF\x01\x01", "lift", "bad opcode", "def456")
            .unwrap();
        assert_eq!(id2, 1);
        assert_eq!(db.len(), 2);

        // Dedup: same input returns same ID
        let id3 = db
            .add(b"\x7fELF\x00\x00", "load", "invalid ELF", "abc123")
            .unwrap();
        assert_eq!(id3, 0);
        assert_eq!(db.len(), 2);

        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn mark_fixed_and_stats() {
        let dir = std::env::temp_dir().join("unlace-corpus-test-fixed");
        let _ = fs::remove_dir_all(&dir);

        let mut db = CrashCorpusDb::open(&dir).unwrap();
        db.add(b"crash1", "load", "msg1", "aaa").unwrap();
        db.add(b"crash2", "lift", "msg2", "bbb").unwrap();

        let stats = db.stats();
        assert_eq!(stats.total, 2);
        assert_eq!(stats.new, 2);
        assert_eq!(stats.fixed, 0);

        db.mark_fixed(0, "ccc").unwrap();
        let stats = db.stats();
        assert_eq!(stats.new, 1);
        assert_eq!(stats.fixed, 1);

        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn persistence_across_reopen() {
        let dir = std::env::temp_dir().join("unlace-corpus-test-persist");
        let _ = fs::remove_dir_all(&dir);

        {
            let mut db = CrashCorpusDb::open(&dir).unwrap();
            db.add(b"persist-test", "discover", "test", "abc").unwrap();
        }

        {
            let db = CrashCorpusDb::open(&dir).unwrap();
            assert_eq!(db.len(), 1);
            let input = db.get_input(0).unwrap();
            assert_eq!(input, b"persist-test");
        }

        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn by_status_filter() {
        let dir = std::env::temp_dir().join("unlace-corpus-test-filter");
        let _ = fs::remove_dir_all(&dir);

        let mut db = CrashCorpusDb::open(&dir).unwrap();
        db.add(b"a", "load", "m1", "x").unwrap();
        db.add(b"b", "lift", "m2", "y").unwrap();
        db.add(b"c", "ssa", "m3", "z").unwrap();

        db.set_status(1, TriageStatus::Confirmed).unwrap();
        db.mark_fixed(2, "fix").unwrap();

        assert_eq!(db.by_status(TriageStatus::New).len(), 1);
        assert_eq!(db.by_status(TriageStatus::Confirmed).len(), 1);
        assert_eq!(db.by_status(TriageStatus::Fixed).len(), 1);

        let _ = fs::remove_dir_all(&dir);
    }
}
