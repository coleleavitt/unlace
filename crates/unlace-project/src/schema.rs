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

/// One column of a user table: name, SQLite type, description.
pub type Column = (&'static str, &'static str, &'static str);

/// Every user table: name, key columns, description, columns. `unlace project schema` prints it.
pub const DESCRIPTION: &[(&str, &[&str], &str, &[Column])] = &[
    (
        "binary",
        &["id"],
        "The binary the project is bound to (one row).",
        &[
            ("id", "INTEGER", "Always 1."),
            (
                "sha256",
                "TEXT",
                "Lowercase hex SHA-256 of the binary's bytes: the identity --project checks.",
            ),
            (
                "path",
                "TEXT",
                "The path it was recorded from (informational).",
            ),
            ("size", "INTEGER", "Its size in bytes."),
        ],
    ),
    (
        "types",
        &["name"],
        "C types interned before everything else (directive: typedef).",
        &[
            (
                "name",
                "TEXT",
                "The declared name: 'struct point', 'point_t'.",
            ),
            (
                "declaration",
                "TEXT",
                "The C declaration, as given to typedef.",
            ),
        ],
    ),
    (
        "functions",
        &["address"],
        "Function entries, extents and names (directive: function).",
        &[
            (
                "address",
                "INTEGER",
                "Entry address (64-bit, stored bit for bit; printf('0x%x', address) prints it).",
            ),
            (
                "end_address",
                "INTEGER",
                "Exclusive end of the declared extent, or NULL for the natural one.",
            ),
            (
                "name",
                "TEXT",
                "The function's name, or NULL to keep the image's.",
            ),
        ],
    ),
    (
        "data",
        &["address"],
        "Named, typed globals (directive: data).",
        &[
            ("address", "INTEGER", "Address of the global."),
            (
                "declaration",
                "TEXT",
                "The C declaration giving its type and name.",
            ),
        ],
    ),
    (
        "prototypes",
        &["function"],
        "Function signatures (directive: prototype).",
        &[
            (
                "function",
                "TEXT",
                "The function, a name or an address as written.",
            ),
            ("declaration", "TEXT", "The C declaration of the signature."),
        ],
    ),
    (
        "patches",
        &["address"],
        "Bytes overlaid on the loaded image (directive: bytes).",
        &[
            ("address", "INTEGER", "First patched address."),
            ("bytes", "BLOB", "The bytes (hex in query output)."),
        ],
    ),
    (
        "assertions",
        &["kind", "target"],
        "Directives stored verbatim: param, return, flow, format, readonly, volatile, register.",
        &[
            ("kind", "TEXT", "The directive keyword."),
            (
                "target",
                "TEXT",
                "What it is about: its first argument ([func::]addr, storage, range, register).",
            ),
            ("directive", "TEXT", "The whole directive, as applied."),
        ],
    ),
    (
        "callsites",
        &["target"],
        "Indirect-call targets and per-call prototypes (directives: callee, callproto).",
        &[
            ("target", "TEXT", "The call instruction: [func::]address."),
            (
                "callee",
                "TEXT",
                "The function it calls (name or address), or NULL.",
            ),
            (
                "prototype",
                "TEXT",
                "The C declaration of that one call, or NULL.",
            ),
        ],
    ),
    (
        "locals",
        &["target"],
        "Local variable names, types and isolation (directives: name, type, isolate).",
        &[
            (
                "target",
                "TEXT",
                "The local as the decompiler names it: [func::]symbol.",
            ),
            ("name", "TEXT", "Its new name, or NULL."),
            ("type", "TEXT", "Its C type, or NULL."),
            (
                "isolate",
                "INTEGER",
                "1: never merged with another variable.",
            ),
        ],
    ),
    (
        "comments",
        &["target"],
        "Comments rendered into the C (directive: comment).",
        &[
            ("target", "TEXT", "The instruction: [func::]address."),
            ("text", "TEXT", "The comment."),
        ],
    ),
    (
        "bookmarks",
        &["address"],
        "Places worth returning to; for the reader, never sent to the engine.",
        &[
            ("address", "INTEGER", "The address."),
            ("title", "TEXT", "A short title."),
            ("description", "TEXT", "Longer notes (empty by default)."),
        ],
    ),
    (
        "schema_migrations",
        &["version"],
        "When each schema migration ran.",
        &[
            (
                "version",
                "INTEGER",
                "The schema version the migration reached.",
            ),
            ("applied_at", "TEXT", "UTC time it ran (ISO 8601)."),
        ],
    ),
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
