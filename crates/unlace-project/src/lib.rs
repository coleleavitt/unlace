//! The unlace project file: user overrides in a SQLite database.
//!
//! A project file (`<binary>.unlace`) records what a person or an agent worked out about one
//! binary: function entries and names, prototypes, local names and types, `typedef`s, data
//! declarations, comments, call-site targets, byte patches, bookmarks and the rest of the
//! `--assert` vocabulary. It is an ordinary SQLite database, so scripts can read it with SQL,
//! writers are transactional, and the state is one file. `docs/project.md` is the design.
//!
//! The file is bound to one binary by its SHA-256. The decompiler applies it by rendering every row
//! back into the `--assert` directive it came from ([`Project::directives`]), so a project reaches
//! the engine through the same path as `--assert @file`.
//!
//! Concurrency: the database runs in WAL mode with a 5 s busy timeout, and every write is one
//! `BEGIN IMMEDIATE` transaction, so concurrent writers serialize and readers see a consistent
//! snapshot. Two writers setting the same key: the later commit wins.

pub mod directive;
pub mod export;
pub mod schema;

use std::path::Path;
use std::time::Duration;

use rusqlite::{Connection, OptionalExtension, TransactionBehavior, params};
use sha2::{Digest, Sha256};

pub use directive::{Change, parse as parse_directive};
pub use export::ProjectJson;

#[derive(Debug, thiserror::Error)]
pub enum ProjectError {
    #[error("{0}")]
    Sql(#[from] rusqlite::Error),
    #[error("{0}")]
    Io(#[from] std::io::Error),
    #[error("{0}")]
    Json(#[from] serde_json::Error),
    #[error("{0}")]
    Invalid(String),
}

pub type Result<T> = std::result::Result<T, ProjectError>;

/// The binary a project is bound to.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct BinaryIdentity {
    /// Lowercase hex SHA-256 of the file's bytes.
    pub sha256: String,
    /// The path it was recorded from (informational; the hash is the identity).
    pub path: Option<String>,
    pub size: Option<u64>,
}

impl BinaryIdentity {
    /// Hash a binary's bytes.
    pub fn of_bytes(bytes: &[u8], path: Option<String>) -> Self {
        let sha256 = Sha256::digest(bytes)
            .iter()
            .map(|byte| format!("{byte:02x}"))
            .collect();
        BinaryIdentity {
            sha256,
            path,
            size: Some(bytes.len() as u64),
        }
    }

    /// Hash the binary file at `path`.
    pub fn of_file(path: &Path) -> Result<Self> {
        let bytes = std::fs::read(path)?;
        Ok(Self::of_bytes(
            &bytes,
            Some(path.to_string_lossy().into_owned()),
        ))
    }
}

/// An open project file.
pub struct Project {
    conn: Connection,
}

/// Addresses are `u64`; SQLite integers are `i64`. Stored bit for bit, so an address above
/// `i64::MAX` (a kernel address) reads back unchanged; `printf('0x%x', address)` prints it.
pub fn to_sql_address(address: u64) -> i64 {
    address as i64
}

pub fn from_sql_address(value: i64) -> u64 {
    value as u64
}

impl Project {
    /// Create a project for `binary` at `path`. Refuses an existing file unless `replace`.
    pub fn create(path: &Path, binary: &BinaryIdentity, replace: bool) -> Result<Self> {
        if path.exists() {
            if !replace {
                return Err(ProjectError::Invalid(format!(
                    "{} exists (pass --force to replace it)",
                    path.display()
                )));
            }
            std::fs::remove_file(path)?;
            for suffix in ["-wal", "-shm"] {
                let side = format!("{}{suffix}", path.display());
                let _ = std::fs::remove_file(side);
            }
        }
        let conn = Connection::open(path)?;
        let mut project = Project { conn };
        project.configure(true)?;
        project.migrate()?;
        project.set_binary(binary)?;
        Ok(project)
    }

    /// Open an existing project file, migrating it to the current schema.
    pub fn open(path: &Path) -> Result<Self> {
        if !path.is_file() {
            return Err(ProjectError::Invalid(format!(
                "no project file at {} (create one with `unlace project init`)",
                path.display()
            )));
        }
        let conn = Connection::open(path)?;
        let mut project = Project { conn };
        project.configure(true)?;
        project.check_application_id()?;
        project.migrate()?;
        Ok(project)
    }

    /// An in-memory project (tests, and `import` dry runs).
    pub fn in_memory(binary: &BinaryIdentity) -> Result<Self> {
        let conn = Connection::open_in_memory()?;
        let mut project = Project { conn };
        project.configure(false)?;
        project.migrate()?;
        project.set_binary(binary)?;
        Ok(project)
    }

    fn configure(&self, file: bool) -> Result<()> {
        self.conn.busy_timeout(Duration::from_secs(5))?;
        if file {
            let _mode: String =
                self.conn
                    .pragma_update_and_check(None, "journal_mode", "WAL", |row| row.get(0))?;
        }
        self.conn.pragma_update(None, "foreign_keys", "ON")?;
        Ok(())
    }

    fn check_application_id(&self) -> Result<()> {
        let id: i64 = self
            .conn
            .query_row("PRAGMA application_id", [], |row| row.get(0))?;
        let version: i64 = self
            .conn
            .query_row("PRAGMA user_version", [], |row| row.get(0))?;
        if id != schema::APPLICATION_ID && !(id == 0 && version == 0) {
            return Err(ProjectError::Invalid(
                "not an unlace project file (wrong application_id)".into(),
            ));
        }
        Ok(())
    }

    /// The schema version of the open file.
    pub fn schema_version(&self) -> Result<i64> {
        Ok(self
            .conn
            .query_row("PRAGMA user_version", [], |row| row.get(0))?)
    }

    fn migrate(&mut self) -> Result<()> {
        let tx = self
            .conn
            .transaction_with_behavior(TransactionBehavior::Immediate)?;
        let version: i64 = tx.query_row("PRAGMA user_version", [], |row| row.get(0))?;
        if version > schema::CURRENT_VERSION {
            return Err(ProjectError::Invalid(format!(
                "project schema v{version} is newer than this unlace (v{}); upgrade unlace",
                schema::CURRENT_VERSION
            )));
        }
        for (index, sql) in schema::MIGRATIONS.iter().enumerate() {
            let target = index as i64 + 1;
            if target <= version {
                continue;
            }
            tx.execute_batch(sql)?;
            tx.execute(
                "INSERT INTO schema_migrations (version) VALUES (?1)",
                params![target],
            )?;
            tx.pragma_update(None, "user_version", target)?;
        }
        tx.pragma_update(None, "application_id", schema::APPLICATION_ID)?;
        tx.commit()?;
        Ok(())
    }

    fn set_binary(&self, binary: &BinaryIdentity) -> Result<()> {
        self.conn.execute(
            "INSERT INTO binary (id, sha256, path, size) VALUES (1, ?1, ?2, ?3)
             ON CONFLICT(id) DO UPDATE SET sha256 = excluded.sha256, path = excluded.path,
                 size = excluded.size",
            params![binary.sha256, binary.path, binary.size.map(|s| s as i64)],
        )?;
        Ok(())
    }

    /// The binary this project is bound to.
    pub fn binary(&self) -> Result<BinaryIdentity> {
        self.conn
            .query_row(
                "SELECT sha256, path, size FROM binary WHERE id = 1",
                [],
                |row| {
                    Ok(BinaryIdentity {
                        sha256: row.get(0)?,
                        path: row.get(1)?,
                        size: row.get::<_, Option<i64>>(2)?.map(|s| s as u64),
                    })
                },
            )
            .optional()?
            .ok_or_else(|| ProjectError::Invalid("project records no binary".into()))
    }

    /// Refuse a binary other than the one the project was made for.
    pub fn check_binary(&self, live: &BinaryIdentity) -> Result<()> {
        let bound = self.binary()?;
        if bound.sha256 != live.sha256 {
            return Err(ProjectError::Invalid(format!(
                "binary SHA-256 mismatch: the project was made for {}{}, this binary is {}",
                bound.sha256,
                bound.path.map(|p| format!(" ({p})")).unwrap_or_default(),
                live.sha256
            )));
        }
        Ok(())
    }

    /// Store one directive (one `BEGIN IMMEDIATE` transaction).
    pub fn set(&mut self, directive: &str) -> Result<Change> {
        let change = directive::parse(directive)?;
        let tx = self
            .conn
            .transaction_with_behavior(TransactionBehavior::Immediate)?;
        apply_change(&tx, &change)?;
        tx.commit()?;
        Ok(change)
    }

    /// Store several directives in one transaction: all or none.
    pub fn set_all<'a>(&mut self, directives: impl IntoIterator<Item = &'a str>) -> Result<usize> {
        let changes = directives
            .into_iter()
            .map(directive::parse)
            .collect::<Result<Vec<_>>>()?;
        let tx = self
            .conn
            .transaction_with_behavior(TransactionBehavior::Immediate)?;
        for change in &changes {
            apply_change(&tx, change)?;
        }
        tx.commit()?;
        Ok(changes.len())
    }

    /// Remove what a directive would set (its value part is ignored for most kinds:
    /// `unset name main::v2` drops the stored name of `main::v2`).
    pub fn unset(&mut self, directive: &str) -> Result<usize> {
        let (keyword, rest) = split_keyword(directive);
        let (key, _) = split_keyword(rest);
        let tx = self
            .conn
            .transaction_with_behavior(TransactionBehavior::Immediate)?;
        let n = match keyword {
            "function" => {
                let start = rest.split(['-', '=']).next().unwrap_or("").trim();
                tx.execute(
                    "DELETE FROM functions WHERE address = ?1",
                    params![to_sql_address(directive::parse_address(start)?)],
                )?
            }
            "prototype" => {
                tx.execute("DELETE FROM prototypes WHERE function = ?1", params![key])?
            }
            "name" | "type" | "isolate" => {
                let column = match keyword {
                    "name" => "name = NULL",
                    "type" => "type = NULL",
                    _ => "isolate = 0",
                };
                let n = tx.execute(
                    &format!("UPDATE locals SET {column} WHERE target = ?1"),
                    params![key],
                )?;
                tx.execute(
                    "DELETE FROM locals WHERE name IS NULL AND type IS NULL AND isolate = 0",
                    [],
                )?;
                n
            }
            "typedef" => {
                let name = directive::typedef_name(rest);
                tx.execute(
                    "DELETE FROM types WHERE name = ?1 OR name = ?2",
                    params![name, rest.trim()],
                )?
            }
            "data" => tx.execute(
                "DELETE FROM data WHERE address = ?1",
                params![to_sql_address(directive::parse_address(key)?)],
            )?,
            "comment" => tx.execute("DELETE FROM comments WHERE target = ?1", params![key])?,
            "callee" | "callproto" => {
                let column = if keyword == "callee" {
                    "callee"
                } else {
                    "prototype"
                };
                let n = tx.execute(
                    &format!("UPDATE callsites SET {column} = NULL WHERE target = ?1"),
                    params![key],
                )?;
                tx.execute(
                    "DELETE FROM callsites WHERE callee IS NULL AND prototype IS NULL",
                    [],
                )?;
                n
            }
            "bytes" => tx.execute(
                "DELETE FROM patches WHERE address = ?1",
                params![to_sql_address(directive::parse_address(key)?)],
            )?,
            "bookmark" => tx.execute(
                "DELETE FROM bookmarks WHERE address = ?1",
                params![to_sql_address(directive::parse_address(key)?)],
            )?,
            kind if directive::VERBATIM.contains(&kind) => {
                // the same target rule as `set`, from a directive with or without its value
                let target = match directive::parse(directive) {
                    Ok(Change::Assertion { target, .. }) => target,
                    _ => key.to_string(),
                };
                tx.execute(
                    "DELETE FROM assertions WHERE kind = ?1 AND target = ?2",
                    params![kind, target],
                )?
            }
            other => {
                return Err(ProjectError::Invalid(format!(
                    "unknown directive {other:?}"
                )));
            }
        };
        tx.commit()?;
        Ok(n)
    }

    /// Every stored override as the `--assert` directives that apply it, in application order:
    /// types, function entries, data, prototypes, patches, the verbatim kinds, call sites,
    /// locals (`isolate`, `type`, then `name`), comments. Bookmarks are not directives.
    pub fn directives(&self) -> Result<Vec<String>> {
        let mut out = Vec::new();
        let c = &self.conn;
        for row in query_strings(c, "SELECT declaration FROM types ORDER BY name", 1)? {
            out.push(format!("typedef {}", row[0]));
        }
        let mut stmt =
            c.prepare("SELECT address, end_address, name FROM functions ORDER BY address")?;
        let rows = stmt.query_map([], |row| {
            Ok((
                row.get::<_, i64>(0)?,
                row.get::<_, Option<i64>>(1)?,
                row.get::<_, Option<String>>(2)?,
            ))
        })?;
        let mut functions: Vec<(u64, Option<u64>, Option<String>)> = Vec::new();
        for row in rows {
            let (a, e, n) = row?;
            functions.push((from_sql_address(a), e.map(from_sql_address), n));
        }
        functions.sort_by_key(|f| f.0);
        for (address, end, name) in functions {
            out.push(directive::function_directive(address, end, name.as_deref()));
        }
        let mut data: Vec<(u64, String)> = Vec::new();
        let mut stmt = c.prepare("SELECT address, declaration FROM data")?;
        for row in stmt.query_map([], |row| {
            Ok((row.get::<_, i64>(0)?, row.get::<_, String>(1)?))
        })? {
            let (a, d) = row?;
            data.push((from_sql_address(a), d));
        }
        data.sort_by_key(|d| d.0);
        for (address, decl) in data {
            out.push(format!("data {address:#x} {decl}"));
        }
        for row in query_strings(
            c,
            "SELECT function, declaration FROM prototypes ORDER BY function",
            2,
        )? {
            out.push(format!("prototype {} {}", row[0], row[1]));
        }
        let mut patches: Vec<(u64, Vec<u8>)> = Vec::new();
        let mut stmt = c.prepare("SELECT address, bytes FROM patches")?;
        for row in stmt.query_map([], |row| {
            Ok((row.get::<_, i64>(0)?, row.get::<_, Vec<u8>>(1)?))
        })? {
            let (a, b) = row?;
            patches.push((from_sql_address(a), b));
        }
        patches.sort_by_key(|p| p.0);
        for (address, bytes) in patches {
            out.push(format!(
                "bytes {address:#x} {}",
                directive::hex_bytes(&bytes)
            ));
        }
        for row in query_strings(
            c,
            "SELECT directive FROM assertions ORDER BY
                 CASE kind WHEN 'readonly' THEN 0 WHEN 'volatile' THEN 1 WHEN 'register' THEN 2
                           WHEN 'flow' THEN 3 WHEN 'param' THEN 4 WHEN 'return' THEN 5 ELSE 6 END,
                 target",
            1,
        )? {
            out.push(row[0].clone());
        }
        let mut stmt =
            c.prepare("SELECT target, callee, prototype FROM callsites ORDER BY target")?;
        for row in stmt.query_map([], |row| {
            Ok((
                row.get::<_, String>(0)?,
                row.get::<_, Option<String>>(1)?,
                row.get::<_, Option<String>>(2)?,
            ))
        })? {
            let (target, callee, proto) = row?;
            if let Some(callee) = callee {
                out.push(format!("callee {target} {callee}"));
            }
            if let Some(proto) = proto {
                out.push(format!("callproto {target} {proto}"));
            }
        }
        let mut stmt =
            c.prepare("SELECT target, name, type, isolate FROM locals ORDER BY target")?;
        for row in stmt.query_map([], |row| {
            Ok((
                row.get::<_, String>(0)?,
                row.get::<_, Option<String>>(1)?,
                row.get::<_, Option<String>>(2)?,
                row.get::<_, i64>(3)?,
            ))
        })? {
            let (target, name, ty, isolate) = row?;
            if isolate != 0 {
                out.push(format!("isolate {target}"));
            }
            if let Some(ty) = ty {
                out.push(format!("type {target} {ty}"));
            }
            if let Some(name) = name {
                out.push(format!("name {target} {name}"));
            }
        }
        for row in query_strings(c, "SELECT target, text FROM comments ORDER BY target", 2)? {
            out.push(format!("comment {} {}", row[0], row[1]));
        }
        Ok(out)
    }

    /// Run a read-only SQL statement and return its column names and rows as JSON values
    /// (integers, reals, text, `null`; a blob as a hex string). A statement that could write is
    /// refused before it runs, and the connection is `query_only` while it does.
    pub fn query(&self, sql: &str) -> Result<(Vec<String>, Vec<Vec<serde_json::Value>>)> {
        self.conn.pragma_update(None, "query_only", "ON")?;
        let result = (|| -> Result<_> {
            let mut stmt = self.conn.prepare(sql)?;
            if !stmt.readonly() {
                return Err(ProjectError::Invalid(
                    "query is read-only: use `unlace project set`/`unset`/`import` to change a project"
                        .into(),
                ));
            }
            let columns: Vec<String> = stmt.column_names().map(String::from).collect();
            let width = columns.len();
            let mut rows = stmt.query([])?;
            let mut out = Vec::new();
            while let Some(row) = rows.next()? {
                let mut values = Vec::with_capacity(width);
                for i in 0..width {
                    use rusqlite::types::ValueRef;
                    values.push(match row.get_ref(i)? {
                        ValueRef::Null => serde_json::Value::Null,
                        ValueRef::Integer(v) => serde_json::Value::from(v),
                        ValueRef::Real(v) => serde_json::Value::from(v),
                        ValueRef::Text(t) => {
                            serde_json::Value::String(String::from_utf8_lossy(t).into_owned())
                        }
                        ValueRef::Blob(b) => serde_json::Value::String(directive::hex_bytes(b)),
                    });
                }
                out.push(values);
            }
            Ok((columns, out))
        })();
        self.conn.pragma_update(None, "query_only", "OFF")?;
        result
    }

    /// The connection, for the export/import module.
    pub(crate) fn conn(&self) -> &Connection {
        &self.conn
    }

    pub(crate) fn conn_mut(&mut self) -> &mut Connection {
        &mut self.conn
    }
}

fn split_keyword(s: &str) -> (&str, &str) {
    let s = s.trim_start();
    match s.find(char::is_whitespace) {
        Some(at) => (&s[..at], s[at..].trim_start()),
        None => (s, ""),
    }
}

fn query_strings(c: &Connection, sql: &str, width: usize) -> Result<Vec<Vec<String>>> {
    let mut stmt = c.prepare(sql)?;
    let rows = stmt.query_map([], |row| {
        (0..width)
            .map(|i| row.get::<_, String>(i))
            .collect::<rusqlite::Result<Vec<_>>>()
    })?;
    Ok(rows.collect::<rusqlite::Result<Vec<_>>>()?)
}

/// Write one change into the open transaction.
pub(crate) fn apply_change(c: &Connection, change: &Change) -> Result<()> {
    match change {
        Change::Function { address, end, name } => {
            c.execute(
                "INSERT INTO functions (address, end_address, name) VALUES (?1, ?2, ?3)
                 ON CONFLICT(address) DO UPDATE SET
                     end_address = COALESCE(excluded.end_address, end_address),
                     name = COALESCE(excluded.name, name)",
                params![to_sql_address(*address), end.map(to_sql_address), name],
            )?;
        }
        Change::Prototype {
            function,
            declaration,
        } => {
            c.execute(
                "INSERT INTO prototypes (function, declaration) VALUES (?1, ?2)
                 ON CONFLICT(function) DO UPDATE SET declaration = excluded.declaration",
                params![function, declaration],
            )?;
        }
        Change::LocalName { target, name } => {
            c.execute(
                "INSERT INTO locals (target, name) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET name = excluded.name",
                params![target, name],
            )?;
        }
        Change::LocalType { target, ty } => {
            c.execute(
                "INSERT INTO locals (target, type) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET type = excluded.type",
                params![target, ty],
            )?;
        }
        Change::LocalIsolate { target } => {
            c.execute(
                "INSERT INTO locals (target, isolate) VALUES (?1, 1)
                 ON CONFLICT(target) DO UPDATE SET isolate = 1",
                params![target],
            )?;
        }
        Change::Type { name, declaration } => {
            c.execute(
                "INSERT INTO types (name, declaration) VALUES (?1, ?2)
                 ON CONFLICT(name) DO UPDATE SET declaration = excluded.declaration",
                params![name, declaration],
            )?;
        }
        Change::Data {
            address,
            declaration,
        } => {
            c.execute(
                "INSERT INTO data (address, declaration) VALUES (?1, ?2)
                 ON CONFLICT(address) DO UPDATE SET declaration = excluded.declaration",
                params![to_sql_address(*address), declaration],
            )?;
        }
        Change::Comment { target, text } => {
            c.execute(
                "INSERT INTO comments (target, text) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET text = excluded.text",
                params![target, text],
            )?;
        }
        Change::Callee { target, callee } => {
            c.execute(
                "INSERT INTO callsites (target, callee) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET callee = excluded.callee",
                params![target, callee],
            )?;
        }
        Change::CallProto { target, prototype } => {
            c.execute(
                "INSERT INTO callsites (target, prototype) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET prototype = excluded.prototype",
                params![target, prototype],
            )?;
        }
        Change::Patch { address, bytes } => {
            c.execute(
                "INSERT INTO patches (address, bytes) VALUES (?1, ?2)
                 ON CONFLICT(address) DO UPDATE SET bytes = excluded.bytes",
                params![to_sql_address(*address), bytes],
            )?;
        }
        Change::Bookmark { address, title } => {
            c.execute(
                "INSERT INTO bookmarks (address, title) VALUES (?1, ?2)
                 ON CONFLICT(address) DO UPDATE SET title = excluded.title",
                params![to_sql_address(*address), title],
            )?;
        }
        Change::Assertion {
            kind,
            target,
            directive,
        } => {
            c.execute(
                "INSERT INTO assertions (kind, target, directive) VALUES (?1, ?2, ?3)
                 ON CONFLICT(kind, target) DO UPDATE SET directive = excluded.directive",
                params![kind, target, directive],
            )?;
        }
    }
    Ok(())
}

#[cfg(test)]
mod tests;
