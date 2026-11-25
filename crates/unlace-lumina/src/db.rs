//! The sqlite store behind `unlace lumina serve`.
//!
//! `funcs` holds the current metadata per key, `history` every pushed version, `pushes` one row per
//! `PUSH_MD` (who, from which input) and `users` the logins. With no user provisioned the store runs
//! open: anyone may pull and push, nobody is an administrator. Once a user exists every HELO must carry
//! a valid user name and password. Passwords are stored as an iterated, salted SHA-256.

use std::io;
use std::net::SocketAddr;
use std::path::Path;
use std::sync::{Mutex, MutexGuard};

use rusqlite::{Connection, OptionalExtension, params};
use sha2::{Digest, Sha256};

use crate::helo::Helo;
use crate::messages::{FuncInfo, FuncInfoAndFrequency, PushMd, codes, push_mode};
use crate::server::{FuncRecord, Handler, HeloAccept, HistoryRecord, LuminaStats, Session};

/// SHA-256 rounds of the stored password hash.
const PASSWORD_ROUNDS: u32 = 100_000;

pub struct SqliteStore {
    db: Mutex<Connection>,
}

fn map_err(e: rusqlite::Error) -> io::Error {
    io::Error::other(e.to_string())
}

fn i64_of(v: u64) -> i64 {
    i64::try_from(v).unwrap_or(i64::MAX)
}

impl SqliteStore {
    pub fn open(path: impl AsRef<Path>) -> io::Result<Self> {
        Self::init(Connection::open(path).map_err(map_err)?)
    }

    pub fn open_in_memory() -> io::Result<Self> {
        Self::init(Connection::open_in_memory().map_err(map_err)?)
    }

    fn init(conn: Connection) -> io::Result<Self> {
        conn.execute_batch(
            "CREATE TABLE IF NOT EXISTS funcs (
                 hash BLOB PRIMARY KEY,
                 name TEXT NOT NULL,
                 size INTEGER NOT NULL,
                 metadata BLOB NOT NULL,
                 popularity INTEGER NOT NULL DEFAULT 0,
                 username TEXT NOT NULL DEFAULT '',
                 updated INTEGER NOT NULL DEFAULT 0
             );
             CREATE TABLE IF NOT EXISTS history (
                 id INTEGER PRIMARY KEY AUTOINCREMENT,
                 hash BLOB NOT NULL,
                 name TEXT NOT NULL,
                 size INTEGER NOT NULL,
                 metadata BLOB NOT NULL,
                 username TEXT NOT NULL,
                 ts INTEGER NOT NULL
             );
             CREATE INDEX IF NOT EXISTS history_hash ON history(hash);
             CREATE TABLE IF NOT EXISTS pushes (
                 id INTEGER PRIMARY KEY AUTOINCREMENT,
                 username TEXT NOT NULL,
                 idb TEXT NOT NULL,
                 input_path TEXT NOT NULL,
                 input_md5 BLOB NOT NULL,
                 hostname TEXT NOT NULL,
                 funcs INTEGER NOT NULL,
                 ts INTEGER NOT NULL
             );
             CREATE TABLE IF NOT EXISTS users (
                 username TEXT PRIMARY KEY,
                 password_hash BLOB NOT NULL,
                 salt BLOB NOT NULL,
                 is_admin INTEGER NOT NULL DEFAULT 0,
                 features INTEGER NOT NULL DEFAULT 4294967295,
                 last_active INTEGER NOT NULL DEFAULT 0
             );",
        )
        .map_err(map_err)?;
        Ok(Self {
            db: Mutex::new(conn),
        })
    }

    fn conn(&self) -> MutexGuard<'_, Connection> {
        self.db.lock().unwrap_or_else(|e| e.into_inner())
    }

    /// Add or replace a login.
    pub fn upsert_user(&self, username: &str, password: &str, is_admin: bool) -> io::Result<()> {
        if username.is_empty() {
            return Err(io::Error::new(
                io::ErrorKind::InvalidInput,
                "a user needs a name",
            ));
        }
        let salt = random_salt();
        let hash = password_hash(&salt, password);
        self.conn()
            .execute(
                "INSERT INTO users(username, password_hash, salt, is_admin)
                 VALUES(?1, ?2, ?3, ?4)
                 ON CONFLICT(username) DO UPDATE SET
                   password_hash = excluded.password_hash,
                   salt = excluded.salt,
                   is_admin = excluded.is_admin",
                params![username, hash.to_vec(), salt.to_vec(), i64::from(is_admin)],
            )
            .map_err(map_err)?;
        Ok(())
    }

    pub fn user_count(&self) -> io::Result<u64> {
        let n: i64 = self
            .conn()
            .query_row("SELECT COUNT(*) FROM users", [], |r| r.get(0))
            .map_err(map_err)?;
        Ok(u64::try_from(n).unwrap_or(0))
    }

    /// `(is_admin, features)` for a valid login, `None` otherwise.
    fn authenticate(&self, username: &str, password: &str) -> io::Result<Option<(bool, u32)>> {
        let conn = self.conn();
        let row: Option<(Vec<u8>, Vec<u8>, i64, i64)> = conn
            .query_row(
                "SELECT password_hash, salt, is_admin, features FROM users WHERE username = ?1",
                params![username],
                |r| Ok((r.get(0)?, r.get(1)?, r.get(2)?, r.get(3)?)),
            )
            .optional()
            .map_err(map_err)?;
        let Some((stored, salt, is_admin, features)) = row else {
            return Ok(None);
        };
        if !constant_time_eq(&password_hash(&salt, password), &stored) {
            return Ok(None);
        }
        conn.execute(
            "UPDATE users SET last_active = ?1 WHERE username = ?2",
            params![i64_of(crate::server::unix_now()), username],
        )
        .map_err(map_err)?;
        Ok(Some((is_admin != 0, features as u32)))
    }

    /// The stored record for one key.
    pub fn get(&self, key: &[u8]) -> io::Result<Option<FuncInfoAndFrequency>> {
        self.conn()
            .query_row(
                "SELECT name, size, metadata, popularity FROM funcs WHERE hash = ?1",
                params![key],
                func_row,
            )
            .optional()
            .map_err(map_err)
    }
}

fn func_row(r: &rusqlite::Row<'_>) -> rusqlite::Result<FuncInfoAndFrequency> {
    let size: i64 = r.get(1)?;
    let popularity: i64 = r.get(3)?;
    Ok(FuncInfoAndFrequency {
        info: FuncInfo {
            name: r.get(0)?,
            size: u32::try_from(size).unwrap_or(0),
            metadata: r.get(2)?,
        },
        popularity: u32::try_from(popularity).unwrap_or(u32::MAX),
    })
}

fn random_salt() -> [u8; 16] {
    let mut salt = [0u8; 16];
    let filled = std::fs::File::open("/dev/urandom")
        .and_then(|mut f| std::io::Read::read_exact(&mut f, &mut salt))
        .is_ok();
    if !filled {
        let now = std::time::SystemTime::now()
            .duration_since(std::time::UNIX_EPOCH)
            .map(|d| d.as_nanos())
            .unwrap_or(0);
        let digest = Sha256::digest(now.to_le_bytes());
        salt.copy_from_slice(&digest.as_slice()[..16]);
    }
    salt
}

fn password_hash(salt: &[u8], password: &str) -> [u8; 32] {
    let mut state = [0u8; 32];
    for round in 0..PASSWORD_ROUNDS {
        let mut h = Sha256::new();
        h.update(round.to_le_bytes());
        h.update(salt);
        h.update(password.as_bytes());
        h.update(state);
        state.copy_from_slice(h.finalize().as_slice());
    }
    state
}

fn constant_time_eq(a: &[u8], b: &[u8]) -> bool {
    a.len() == b.len() && a.iter().zip(b).fold(0u8, |acc, (x, y)| acc | (x ^ y)) == 0
}

impl Handler for SqliteStore {
    fn handle_helo(&self, _peer: SocketAddr, helo: &Helo) -> io::Result<HeloAccept> {
        let username = helo.username.clone().unwrap_or_default();
        if self.user_count()? == 0 {
            return Ok(HeloAccept {
                username,
                is_admin: false,
                features: u32::MAX,
            });
        }
        let password = helo.password.as_deref().unwrap_or("");
        match self.authenticate(&username, password)? {
            Some((is_admin, features)) => Ok(HeloAccept {
                username,
                is_admin,
                features,
            }),
            None => Err(io::Error::new(
                io::ErrorKind::PermissionDenied,
                "Invalid user name or password",
            )),
        }
    }

    fn pull(
        &self,
        _session: &Session,
        keys: &[Vec<u8>],
    ) -> io::Result<Vec<Option<FuncInfoAndFrequency>>> {
        let conn = self.conn();
        let mut stmt = conn
            .prepare_cached("SELECT name, size, metadata, popularity FROM funcs WHERE hash = ?1")
            .map_err(map_err)?;
        let mut out = Vec::with_capacity(keys.len());
        for key in keys {
            out.push(
                stmt.query_row(params![key], func_row)
                    .optional()
                    .map_err(map_err)?,
            );
        }
        Ok(out)
    }

    fn push(&self, session: &Session, push: &PushMd) -> io::Result<Vec<i32>> {
        let now = i64_of(crate::server::unix_now());
        let mode = push.mode();
        let mut conn = self.conn();
        let tx = conn.transaction().map_err(map_err)?;
        let mut out = Vec::with_capacity(push.contents.len());
        for c in &push.contents {
            let key = &c.pattern.data;
            if key.is_empty() || key.len() > 64 {
                out.push(codes::BAD_PATTERN);
                continue;
            }
            let existing: Option<i64> = tx
                .query_row(
                    "SELECT length(metadata) FROM funcs WHERE hash = ?1",
                    params![key],
                    |r| r.get(0),
                )
                .optional()
                .map_err(map_err)?;
            let replace = match existing {
                None => true,
                Some(old_len) => match mode {
                    push_mode::DO_NOT_OVERRIDE => false,
                    push_mode::OVERRIDE | push_mode::MERGE => true,
                    // OVERRIDE_IF_BETTER: the richer blob wins.
                    _ => c.info.metadata.len() as i64 >= old_len,
                },
            };
            if existing.is_none() {
                tx.execute(
                    "INSERT INTO funcs(hash, name, size, metadata, popularity, username, updated)
                     VALUES(?1, ?2, ?3, ?4, 1, ?5, ?6)",
                    params![
                        key,
                        c.info.name,
                        i64::from(c.info.size),
                        c.info.metadata,
                        session.username,
                        now
                    ],
                )
                .map_err(map_err)?;
            } else if replace {
                tx.execute(
                    "UPDATE funcs SET name = ?2, size = ?3, metadata = ?4,
                       popularity = popularity + 1, username = ?5, updated = ?6
                     WHERE hash = ?1",
                    params![
                        key,
                        c.info.name,
                        i64::from(c.info.size),
                        c.info.metadata,
                        session.username,
                        now
                    ],
                )
                .map_err(map_err)?;
            } else {
                tx.execute(
                    "UPDATE funcs SET popularity = popularity + 1 WHERE hash = ?1",
                    params![key],
                )
                .map_err(map_err)?;
            }
            tx.execute(
                "INSERT INTO history(hash, name, size, metadata, username, ts)
                 VALUES(?1, ?2, ?3, ?4, ?5, ?6)",
                params![
                    key,
                    c.info.name,
                    i64::from(c.info.size),
                    c.info.metadata,
                    session.username,
                    now
                ],
            )
            .map_err(map_err)?;
            out.push(if existing.is_none() {
                codes::ADDED
            } else {
                codes::OK
            });
        }
        tx.execute(
            "INSERT INTO pushes(username, idb, input_path, input_md5, hostname, funcs, ts)
             VALUES(?1, ?2, ?3, ?4, ?5, ?6, ?7)",
            params![
                session.username,
                push.idb,
                push.input_path,
                push.input_md5.to_vec(),
                push.hostname,
                i64::try_from(push.contents.len()).unwrap_or(i64::MAX),
                now
            ],
        )
        .map_err(map_err)?;
        tx.commit().map_err(map_err)?;
        Ok(out)
    }

    fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        let conn = self.conn();
        let count = |table: &str| -> io::Result<u64> {
            let n: i64 = conn
                .query_row(&format!("SELECT COUNT(*) FROM {table}"), [], |r| r.get(0))
                .map_err(map_err)?;
            Ok(u64::try_from(n).unwrap_or(0))
        };
        Ok(LuminaStats {
            funcs: count("funcs")?,
            pushes: count("pushes")?,
            history: count("history")?,
            users: count("users")?,
        })
    }

    fn get_pop(&self, _session: &Session, limit: u32) -> io::Result<Vec<FuncRecord>> {
        let conn = self.conn();
        let mut stmt = conn
            .prepare(
                "SELECT name, size, metadata, popularity, hash FROM funcs
                 ORDER BY popularity DESC, name ASC
                 LIMIT ?1",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![i64::from(limit)], |r| record_at(r, 0))
            .map_err(map_err)?
            .collect::<rusqlite::Result<Vec<_>>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    fn show_history(&self, _session: &Session, max_entries: u32) -> io::Result<Vec<HistoryRecord>> {
        let conn = self.conn();
        let mut stmt = conn
            .prepare(
                "SELECT history.id, history.username, history.ts,
                        history.name, history.size, history.metadata,
                        COALESCE(funcs.popularity, 0), history.hash
                 FROM history
                 LEFT JOIN funcs ON funcs.hash = history.hash
                 ORDER BY history.id DESC
                 LIMIT ?1",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![i64::from(max_entries)], history_row)
            .map_err(map_err)?
            .collect::<rusqlite::Result<Vec<_>>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    fn dump_md(&self, _session: &Session, max_entries: u32) -> io::Result<Vec<FuncRecord>> {
        let conn = self.conn();
        let mut stmt = conn
            .prepare(
                "SELECT name, size, metadata, popularity, hash FROM funcs
                 ORDER BY rowid ASC
                 LIMIT ?1",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![i64::from(max_entries)], |r| record_at(r, 0))
            .map_err(map_err)?
            .collect::<rusqlite::Result<Vec<_>>>()
            .map_err(map_err)?;
        Ok(rows)
    }
}

/// A function whose columns start at `offset`: name, size, metadata, popularity, hash.
fn record_at(r: &rusqlite::Row<'_>, offset: usize) -> rusqlite::Result<FuncRecord> {
    let size: i64 = r.get(offset + 1)?;
    let popularity: i64 = r.get(offset + 3)?;
    Ok(FuncRecord {
        key: r.get(offset + 4)?,
        info: FuncInfo {
            name: r.get(offset)?,
            size: u32::try_from(size).unwrap_or(0),
            metadata: r.get(offset + 2)?,
        },
        popularity: u32::try_from(popularity).unwrap_or(u32::MAX),
    })
}

/// A `history` row: id, username, ts, then the function columns at 3.
fn history_row(r: &rusqlite::Row<'_>) -> rusqlite::Result<HistoryRecord> {
    let id: i64 = r.get(0)?;
    let ts: i64 = r.get(2)?;
    Ok(HistoryRecord {
        id: u64::try_from(id).unwrap_or(0),
        username: r.get(1)?,
        timestamp: u64::try_from(ts).unwrap_or(0),
        func: record_at(r, 3)?,
    })
}

#[cfg(test)]
mod tests;
