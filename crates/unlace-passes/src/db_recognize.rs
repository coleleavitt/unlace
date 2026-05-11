//! Recognize embedded database C API calls by symbol-name prefix.
//!
//! Many native binaries link against well-known embedded key/value or
//! relational database libraries. Identifying these call sites early
//! lets later passes attach richer signatures, naming, and taint tags.

/// Embedded database family identified from an external symbol name.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum DbApiKind {
    /// SQLite (`sqlite3_*` C API).
    Sqlite,
    /// OpenLDAP LMDB (`mdb_*` C API).
    Lmdb,
    /// Facebook RocksDB C bindings (`rocksdb_*`).
    RocksDb,
    /// Google LevelDB C bindings (`leveldb_*`).
    LevelDb,
}

/// Classify a symbol name into a known embedded-DB API family.
///
/// Matching is purely prefix-based on the *unmangled* C symbol. The
/// caller is expected to strip any platform-specific leading underscore
/// (e.g. Mach-O `_sqlite3_open`) before invoking this function.
///
/// Returns `None` if the symbol does not match any recognized family.
pub fn recognize_db_api(symbol_name: &str) -> Option<DbApiKind> {
    // Order matters only insofar as prefixes must be unambiguous; the
    // four families below have disjoint prefixes.
    if symbol_name.starts_with("sqlite3_") {
        Some(DbApiKind::Sqlite)
    } else if symbol_name.starts_with("mdb_") {
        Some(DbApiKind::Lmdb)
    } else if symbol_name.starts_with("rocksdb_") {
        Some(DbApiKind::RocksDb)
    } else if symbol_name.starts_with("leveldb_") {
        Some(DbApiKind::LevelDb)
    } else {
        None
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognizes_sqlite() {
        assert_eq!(recognize_db_api("sqlite3_open"), Some(DbApiKind::Sqlite));
        assert_eq!(recognize_db_api("sqlite3_prepare_v2"), Some(DbApiKind::Sqlite));
        assert_eq!(recognize_db_api("sqlite3_step"), Some(DbApiKind::Sqlite));
    }

    #[test]
    fn recognizes_lmdb() {
        assert_eq!(recognize_db_api("mdb_env_create"), Some(DbApiKind::Lmdb));
        assert_eq!(recognize_db_api("mdb_txn_begin"), Some(DbApiKind::Lmdb));
        assert_eq!(recognize_db_api("mdb_cursor_get"), Some(DbApiKind::Lmdb));
    }

    #[test]
    fn recognizes_rocksdb() {
        assert_eq!(recognize_db_api("rocksdb_open"), Some(DbApiKind::RocksDb));
        assert_eq!(recognize_db_api("rocksdb_put"), Some(DbApiKind::RocksDb));
        assert_eq!(recognize_db_api("rocksdb_iter_next"), Some(DbApiKind::RocksDb));
    }

    #[test]
    fn recognizes_leveldb() {
        assert_eq!(recognize_db_api("leveldb_open"), Some(DbApiKind::LevelDb));
        assert_eq!(recognize_db_api("leveldb_writebatch_put"), Some(DbApiKind::LevelDb));
    }

    #[test]
    fn rejects_unknown_and_near_misses() {
        // Completely unrelated symbols.
        assert_eq!(recognize_db_api("malloc"), None);
        assert_eq!(recognize_db_api(""), None);
        assert_eq!(recognize_db_api("main"), None);
        // Near-misses that must NOT match: missing trailing underscore,
        // wrong casing, or prefix appearing mid-name.
        assert_eq!(recognize_db_api("sqlite3"), None);
        assert_eq!(recognize_db_api("Sqlite3_open"), None);
        assert_eq!(recognize_db_api("mdb"), None);
        assert_eq!(recognize_db_api("my_mdb_helper"), None);
        assert_eq!(recognize_db_api("rocksdb"), None);
        assert_eq!(recognize_db_api("leveldb"), None);
        // Leading underscore (Mach-O style) is the caller's job to strip.
        assert_eq!(recognize_db_api("_sqlite3_open"), None);
    }
}
