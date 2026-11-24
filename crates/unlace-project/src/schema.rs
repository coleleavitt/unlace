//! The project file's schema and its migrations.
//!
//! The file is an ordinary SQLite database. `PRAGMA application_id` marks it as an unlace project,
//! `PRAGMA user_version` holds the schema version, and `schema_migrations` records when each
//! migration ran. A migration runs once, in order, inside the transaction that opens the file for
//! writing; a file from a newer unlace (a higher version than [`CURRENT_VERSION`]) is refused
//! rather than half-read.

/// `PRAGMA application_id` of an unlace project file: "UNLC".
pub const APPLICATION_ID: i64 = 0x554e_4c43;

/// The schema version this build writes.
pub const CURRENT_VERSION: i64 = 1;

/// Each migration takes the schema from version `n - 1` to `n` (index `n - 1`).
pub const MIGRATIONS: &[&str] = &[
    // v1: the binary identity and one table per kind of override.
    "CREATE TABLE schema_migrations (
         version INTEGER PRIMARY KEY,
         applied_at TEXT NOT NULL DEFAULT (strftime('%Y-%m-%dT%H:%M:%SZ', 'now'))
     );
     CREATE TABLE binary (
         id INTEGER PRIMARY KEY CHECK (id = 1),
         sha256 TEXT NOT NULL,
         path TEXT,
         size INTEGER
     );
     CREATE TABLE functions (
         address INTEGER PRIMARY KEY,
         end_address INTEGER,
         name TEXT
     );
     CREATE TABLE prototypes (
         function TEXT PRIMARY KEY,
         declaration TEXT NOT NULL
     );
     CREATE TABLE locals (
         target TEXT PRIMARY KEY,
         name TEXT,
         type TEXT,
         isolate INTEGER NOT NULL DEFAULT 0
     );
     CREATE TABLE types (
         name TEXT PRIMARY KEY,
         declaration TEXT NOT NULL
     );
     CREATE TABLE data (
         address INTEGER PRIMARY KEY,
         declaration TEXT NOT NULL
     );
     CREATE TABLE comments (
         target TEXT PRIMARY KEY,
         text TEXT NOT NULL
     );
     CREATE TABLE callsites (
         target TEXT PRIMARY KEY,
         callee TEXT,
         prototype TEXT
     );
     CREATE TABLE patches (
         address INTEGER PRIMARY KEY,
         bytes BLOB NOT NULL
     );
     CREATE TABLE bookmarks (
         address INTEGER PRIMARY KEY,
         title TEXT NOT NULL,
         description TEXT NOT NULL DEFAULT ''
     );
     CREATE TABLE assertions (
         kind TEXT NOT NULL,
         target TEXT NOT NULL,
         directive TEXT NOT NULL,
         PRIMARY KEY (kind, target)
     );",
];

/// The tables a user may name in `get`/`list`, in the order their directives apply.
pub const TABLES: &[&str] = &[
    "types",
    "functions",
    "data",
    "prototypes",
    "patches",
    "assertions",
    "callsites",
    "locals",
    "comments",
    "bookmarks",
];
