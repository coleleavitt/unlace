//! sqlite-backed [`Handler`] implementation.
//!
//! The schema covers the protocol bodies this crate can service without an
//! application-provided decompiler backend: metadata push/pull, history,
//! pushes, users, stats, and raw telemetry retention.

use std::io;
use std::net::SocketAddr;
use std::path::Path;
use std::sync::Mutex;

use rusqlite::{Connection, OptionalExtension, params};

use crate::helo::Helo;
use crate::server::{
    FuncMetadata, Handler, HeloAccept, HistoryEntry, LuminaStats, MetadataFilter, PushEntry,
    Session, TelemetrySession, UserInfo, UserOperation, UserOperationUser,
};

/// File-backed Lumina store. Holds the sqlite connection behind a `Mutex` —
/// rusqlite's `Connection` is `!Send + Sync` per the bundled docs, and our
/// access pattern is low-frequency.
pub struct SqliteStore {
    db: Mutex<Connection>,
}

impl SqliteStore {
    /// Open or create a sqlite database at `path`.
    pub fn open(path: impl AsRef<Path>) -> io::Result<Self> {
        let conn = Connection::open(path).map_err(map_err)?;
        Self::init_schema(&conn)?;
        Ok(Self {
            db: Mutex::new(conn),
        })
    }

    /// Open an in-memory database, useful for tests.
    pub fn open_in_memory() -> io::Result<Self> {
        let conn = Connection::open_in_memory().map_err(map_err)?;
        Self::init_schema(&conn)?;
        Ok(Self {
            db: Mutex::new(conn),
        })
    }

    fn init_schema(conn: &Connection) -> io::Result<()> {
        conn.execute_batch(
            r#"
            CREATE TABLE IF NOT EXISTS funcs (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL,
                size INTEGER NOT NULL,
                metadata BLOB NOT NULL,
                created_at INTEGER NOT NULL DEFAULT (strftime('%s', 'now'))
            );
            CREATE TABLE IF NOT EXISTS calcrel_hash (
                hash BLOB PRIMARY KEY,
                func_id INTEGER NOT NULL REFERENCES funcs(id) ON DELETE CASCADE
            );
            CREATE TABLE IF NOT EXISTS func_freqs (
                func_id INTEGER PRIMARY KEY REFERENCES funcs(id) ON DELETE CASCADE,
                counter INTEGER NOT NULL DEFAULT 0
            );
            CREATE TABLE IF NOT EXISTS history (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                func_id INTEGER NOT NULL REFERENCES funcs(id) ON DELETE CASCADE,
                username TEXT NOT NULL,
                ts INTEGER NOT NULL DEFAULT (strftime('%s', 'now')),
                metadata BLOB NOT NULL
            );
            CREATE TABLE IF NOT EXISTS pushes (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                func_id INTEGER NOT NULL REFERENCES funcs(id) ON DELETE CASCADE,
                username TEXT NOT NULL,
                ts INTEGER NOT NULL DEFAULT (strftime('%s', 'now'))
            );
            CREATE TABLE IF NOT EXISTS users (
                username TEXT PRIMARY KEY,
                password_hash BLOB,
                salt BLOB,
                is_admin INTEGER NOT NULL DEFAULT 0,
                features INTEGER NOT NULL DEFAULT 0xffffffff,
                deleted INTEGER NOT NULL DEFAULT 0,
                license_id TEXT NOT NULL DEFAULT '',
                license_name TEXT NOT NULL DEFAULT '',
                license_email TEXT NOT NULL DEFAULT '',
                karma INTEGER NOT NULL DEFAULT 0,
                last_active INTEGER NOT NULL DEFAULT 0
            );
            CREATE TABLE IF NOT EXISTS telemetry (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                username TEXT NOT NULL,
                ts INTEGER NOT NULL DEFAULT (strftime('%s', 'now')),
                payload BLOB NOT NULL
            );
            "#,
        )
        .map_err(map_err)?;
        Self::ensure_user_profile_columns(conn)?;
        Ok(())
    }

    fn ensure_user_profile_columns(conn: &Connection) -> io::Result<()> {
        for (column, decl) in [
            ("license_id", "TEXT NOT NULL DEFAULT ''"),
            ("license_name", "TEXT NOT NULL DEFAULT ''"),
            ("license_email", "TEXT NOT NULL DEFAULT ''"),
            ("karma", "INTEGER NOT NULL DEFAULT 0"),
            ("last_active", "INTEGER NOT NULL DEFAULT 0"),
        ] {
            Self::ensure_user_column(conn, column, decl)?;
        }
        Ok(())
    }

    fn ensure_user_column(conn: &Connection, column: &str, decl: &str) -> io::Result<()> {
        let exists: Option<i64> = conn
            .query_row(
                "SELECT 1 FROM pragma_table_info('users') WHERE name = ?",
                params![column],
                |r| r.get(0),
            )
            .optional()
            .map_err(map_err)?;
        if exists.is_none() {
            let sql = format!("ALTER TABLE users ADD COLUMN {column} {decl}");
            conn.execute(&sql, []).map_err(map_err)?;
        }
        Ok(())
    }

    /// Insert a user with a clear-text password. Stores SHA-256(salt|pw) and
    /// a 16-byte random salt. Useful for seeding test databases; production
    /// callers should hash with a stronger KDF.
    pub fn upsert_user(
        &self,
        username: &str,
        password: &str,
        is_admin: bool,
        features: u32,
    ) -> io::Result<()> {
        use sha2::{Digest, Sha256};
        // A tiny deterministic salt for now — replace with `getrandom` if a
        // production setup needs it.
        let salt: [u8; 16] = {
            let mut h = Sha256::new();
            h.update(username.as_bytes());
            h.update(b"unlace-lumina-salt");
            let d = h.finalize();
            let mut s = [0u8; 16];
            s.copy_from_slice(&d[..16]);
            s
        };
        let mut h = Sha256::new();
        h.update(salt);
        h.update(password.as_bytes());
        let pw = h.finalize();
        let conn = self.db.lock().expect("sqlite mutex");
        conn.execute(
            "INSERT INTO users(username, password_hash, salt, is_admin, features, deleted)
             VALUES(?, ?, ?, ?, ?, 0)
             ON CONFLICT(username) DO UPDATE SET
               password_hash=excluded.password_hash,
               salt=excluded.salt,
               is_admin=excluded.is_admin,
               features=excluded.features,
               deleted=0",
            params![
                username,
                pw.to_vec(),
                salt.to_vec(),
                is_admin as i64,
                features as i64,
            ],
        )
        .map_err(map_err)?;
        Ok(())
    }

    fn authenticate(&self, username: &str, password: &str) -> io::Result<Option<UserRow>> {
        use sha2::{Digest, Sha256};
        let conn = self.db.lock().expect("sqlite mutex");
        let row = conn
            .query_row(
                "SELECT password_hash, salt, is_admin, features
                 FROM users WHERE username = ? AND deleted = 0",
                params![username],
                |r| {
                    let pw: Option<Vec<u8>> = r.get(0)?;
                    let salt: Option<Vec<u8>> = r.get(1)?;
                    let is_admin: i64 = r.get(2)?;
                    let features: i64 = r.get(3)?;
                    Ok((pw, salt, is_admin, features))
                },
            )
            .optional()
            .map_err(map_err)?;
        let Some((pw_hash, salt, is_admin, features)) = row else {
            return Ok(None);
        };
        let Some(pw_hash) = pw_hash else {
            // No password set on this account — accept any password (test seed).
            return Ok(Some(UserRow {
                is_admin: is_admin != 0,
                features: features as u32,
            }));
        };
        let mut h = Sha256::new();
        if let Some(salt) = &salt {
            h.update(salt);
        }
        h.update(password.as_bytes());
        let supplied = h.finalize();
        if supplied.as_slice() == pw_hash.as_slice() {
            Ok(Some(UserRow {
                is_admin: is_admin != 0,
                features: features as u32,
            }))
        } else {
            Ok(None)
        }
    }

    fn validate_user_operation_name(user: &UserOperationUser) -> io::Result<()> {
        if user.name.is_empty() {
            return Err(io::Error::new(
                io::ErrorKind::InvalidInput,
                "USER_OPERATION requires a user name",
            ));
        }
        Ok(())
    }

    fn upsert_user_profile(conn: &Connection, user: &UserOperationUser) -> io::Result<()> {
        Self::validate_user_operation_name(user)?;
        conn.execute(
            "INSERT INTO users(
                username, is_admin, features, deleted,
                license_id, license_name, license_email, karma, last_active
             )
             VALUES(?, ?, ?, 0, ?, ?, ?, ?, ?)
             ON CONFLICT(username) DO UPDATE SET
               is_admin=excluded.is_admin,
               features=excluded.features,
               deleted=0,
               license_id=excluded.license_id,
               license_name=excluded.license_name,
               license_email=excluded.license_email,
               karma=excluded.karma,
               last_active=excluded.last_active",
            params![
                &user.name,
                i64::from((user.features & 1) != 0),
                user.features as i64,
                &user.license.id,
                &user.license.name,
                &user.license.email,
                user.karma as i64,
                user.last_active as i64,
            ],
        )
        .map_err(map_err)?;
        Ok(())
    }

    fn update_user_profile(conn: &Connection, user: &UserOperationUser) -> io::Result<()> {
        Self::validate_user_operation_name(user)?;
        conn.execute(
            "UPDATE users SET
               is_admin = ?,
               features = ?,
               license_id = ?,
               license_name = ?,
               license_email = ?,
               karma = ?,
               last_active = ?
             WHERE username = ? AND deleted = 0",
            params![
                i64::from((user.features & 1) != 0),
                user.features as i64,
                &user.license.id,
                &user.license.name,
                &user.license.email,
                user.karma as i64,
                user.last_active as i64,
                &user.name,
            ],
        )
        .map_err(map_err)?;
        Ok(())
    }
}

struct UserRow {
    is_admin: bool,
    features: u32,
}

#[async_trait::async_trait]
impl Handler for SqliteStore {
    async fn handle_helo(&self, _peer: SocketAddr, helo: &Helo) -> io::Result<HeloAccept> {
        let user = helo.username.clone().unwrap_or_default();
        let pass = helo.password.clone().unwrap_or_default();

        // When no `users` row exists at all we run in "open" mode so test
        // databases work without provisioning users. As soon as one user is
        // registered, all sessions need to authenticate.
        let user_count: i64 = {
            let conn = self.db.lock().expect("sqlite mutex");
            conn.query_row("SELECT COUNT(*) FROM users WHERE deleted = 0", [], |r| {
                r.get(0)
            })
            .map_err(map_err)?
        };
        if user_count == 0 {
            return Ok(HeloAccept {
                username: user,
                is_admin: true,
                features: u32::MAX,
            });
        }
        match self.authenticate(&user, &pass)? {
            Some(row) => Ok(HeloAccept {
                username: user,
                is_admin: row.is_admin,
                features: row.features,
            }),
            None => Err(io::Error::new(
                io::ErrorKind::PermissionDenied,
                "Operation failed",
            )),
        }
    }

    async fn pull_md(
        &self,
        _session: &Session,
        hashes: &[[u8; 32]],
    ) -> io::Result<Vec<Option<FuncMetadata>>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let mut out = Vec::with_capacity(hashes.len());
        let mut stmt = conn
            .prepare(
                "SELECT funcs.name, funcs.size, funcs.metadata,
                        COALESCE(func_freqs.counter, 0)
                 FROM calcrel_hash
                 JOIN funcs ON funcs.id = calcrel_hash.func_id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 WHERE calcrel_hash.hash = ?",
            )
            .map_err(map_err)?;
        for h in hashes {
            let row = stmt
                .query_row(params![h.as_slice()], |r| {
                    let name: String = r.get(0)?;
                    let size: i64 = r.get(1)?;
                    let metadata: Vec<u8> = r.get(2)?;
                    let counter: i64 = r.get(3)?;
                    Ok(FuncMetadata {
                        name,
                        size: size as u64,
                        metadata,
                        counter: counter as u32,
                        calcrel_hash: *h,
                    })
                })
                .optional()
                .map_err(map_err)?;
            out.push(row);
        }
        Ok(out)
    }

    async fn push_md(&self, session: &Session, recs: &[FuncMetadata]) -> io::Result<Vec<u32>> {
        let mut conn = self.db.lock().expect("sqlite mutex");
        let tx = conn.transaction().map_err(map_err)?;
        let mut statuses = Vec::with_capacity(recs.len());

        for r in recs {
            let existing: Option<i64> = tx
                .query_row(
                    "SELECT func_id FROM calcrel_hash WHERE hash = ?",
                    params![r.calcrel_hash.as_slice()],
                    |row| row.get(0),
                )
                .optional()
                .map_err(map_err)?;

            let func_id = match existing {
                Some(id) => {
                    tx.execute(
                        "UPDATE funcs SET name = ?, size = ?, metadata = ? WHERE id = ?",
                        params![r.name, r.size as i64, r.metadata, id],
                    )
                    .map_err(map_err)?;
                    tx.execute(
                        "INSERT INTO func_freqs(func_id, counter) VALUES(?, ?)
                         ON CONFLICT(func_id) DO UPDATE SET counter = excluded.counter",
                        params![id, r.counter as i64],
                    )
                    .map_err(map_err)?;
                    id
                }
                None => {
                    tx.execute(
                        "INSERT INTO funcs(name, size, metadata) VALUES(?, ?, ?)",
                        params![r.name, r.size as i64, r.metadata],
                    )
                    .map_err(map_err)?;
                    let id = tx.last_insert_rowid();
                    tx.execute(
                        "INSERT INTO calcrel_hash(hash, func_id) VALUES(?, ?)",
                        params![r.calcrel_hash.as_slice(), id],
                    )
                    .map_err(map_err)?;
                    tx.execute(
                        "INSERT INTO func_freqs(func_id, counter) VALUES(?, ?)",
                        params![id, r.counter as i64],
                    )
                    .map_err(map_err)?;
                    id
                }
            };

            tx.execute(
                "INSERT INTO history(func_id, username, metadata) VALUES(?, ?, ?)",
                params![func_id, session.username, r.metadata],
            )
            .map_err(map_err)?;
            tx.execute(
                "INSERT INTO pushes(func_id, username) VALUES(?, ?)",
                params![func_id, session.username],
            )
            .map_err(map_err)?;
            statuses.push(0);
        }

        tx.commit().map_err(map_err)?;
        Ok(statuses)
    }

    async fn lumina_stats(&self, _session: &Session) -> io::Result<LuminaStats> {
        let conn = self.db.lock().expect("sqlite mutex");
        let funcs: i64 = conn
            .query_row("SELECT COUNT(*) FROM funcs", [], |r| r.get(0))
            .map_err(map_err)?;
        let pushes: i64 = conn
            .query_row("SELECT COUNT(*) FROM pushes", [], |r| r.get(0))
            .map_err(map_err)?;
        let history: i64 = conn
            .query_row("SELECT COUNT(*) FROM history", [], |r| r.get(0))
            .map_err(map_err)?;
        Ok(LuminaStats {
            funcs: funcs as u64,
            pushes: pushes as u64,
            history: history as u64,
            idbs: 0,
            inputs: 0,
        })
    }

    async fn get_pop(&self, _session: &Session, limit: u32) -> io::Result<Vec<FuncMetadata>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(limit.min(crate::server::MAX_PACKET_ITEMS as u32));
        let mut stmt = conn
            .prepare(
                "SELECT funcs.name, funcs.size, funcs.metadata,
                        COALESCE(func_freqs.counter, 0), calcrel_hash.hash
                 FROM funcs
                 JOIN calcrel_hash ON calcrel_hash.func_id = funcs.id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 ORDER BY COALESCE(func_freqs.counter, 0) DESC, funcs.name ASC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![limit], func_row)
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn delete_history(&self, _session: &Session, filter: MetadataFilter) -> io::Result<u64> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(
            filter
                .max_entries
                .min(crate::server::MAX_PACKET_ITEMS as u32),
        );
        let deleted = conn
            .execute(
                "DELETE FROM history
                 WHERE id IN (SELECT id FROM history ORDER BY id DESC LIMIT ?)",
                params![limit],
            )
            .map_err(map_err)?;
        Ok(deleted as u64)
    }

    async fn show_history(
        &self,
        _session: &Session,
        filter: MetadataFilter,
    ) -> io::Result<Vec<HistoryEntry>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(
            filter
                .max_entries
                .min(crate::server::MAX_PACKET_ITEMS as u32),
        );
        let mut stmt = conn
            .prepare(
                "SELECT history.id, history.username, history.ts,
                        funcs.name, funcs.size, history.metadata,
                        COALESCE(func_freqs.counter, 0), calcrel_hash.hash
                 FROM history
                 JOIN funcs ON funcs.id = history.func_id
                 JOIN calcrel_hash ON calcrel_hash.func_id = funcs.id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 ORDER BY history.id DESC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![limit], history_row)
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn dump_md(
        &self,
        _session: &Session,
        filter: MetadataFilter,
    ) -> io::Result<Vec<FuncMetadata>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(
            filter
                .max_entries
                .min(crate::server::MAX_PACKET_ITEMS as u32),
        );
        let mut stmt = conn
            .prepare(
                "SELECT funcs.name, funcs.size, funcs.metadata,
                        COALESCE(func_freqs.counter, 0), calcrel_hash.hash
                 FROM funcs
                 JOIN calcrel_hash ON calcrel_hash.func_id = funcs.id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 ORDER BY funcs.id ASC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![limit], func_row)
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn clean_db(&self, _session: &Session) -> io::Result<()> {
        let mut conn = self.db.lock().expect("sqlite mutex");
        let tx = conn.transaction().map_err(map_err)?;
        tx.execute("DELETE FROM telemetry", []).map_err(map_err)?;
        tx.execute("DELETE FROM pushes", []).map_err(map_err)?;
        tx.execute("DELETE FROM history", []).map_err(map_err)?;
        tx.execute("DELETE FROM func_freqs", []).map_err(map_err)?;
        tx.execute("DELETE FROM calcrel_hash", [])
            .map_err(map_err)?;
        tx.execute("DELETE FROM funcs", []).map_err(map_err)?;
        tx.commit().map_err(map_err)?;
        Ok(())
    }

    async fn debugctl(&self, _session: &Session, args: &[String]) -> io::Result<Vec<String>> {
        Ok(args.iter().map(|s| format!("ack:{s}")).collect())
    }

    async fn push_tlm(&self, session: &Session, payload: Vec<u8>) -> io::Result<()> {
        let conn = self.db.lock().expect("sqlite mutex");
        conn.execute(
            "INSERT INTO telemetry(username, payload) VALUES(?, ?)",
            params![session.username, payload],
        )
        .map_err(map_err)?;
        Ok(())
    }

    async fn show_tlm_sessions(
        &self,
        _session: &Session,
        filter: MetadataFilter,
    ) -> io::Result<Vec<TelemetrySession>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(
            filter
                .max_entries
                .min(crate::server::MAX_PACKET_ITEMS as u32),
        );
        let mut stmt = conn
            .prepare(
                "SELECT id, username, ts, length(payload)
                 FROM telemetry
                 ORDER BY id DESC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![limit], |r| {
                let id: i64 = r.get(0)?;
                let username: String = r.get(1)?;
                let ts: i64 = r.get(2)?;
                let payload_len: i64 = r.get(3)?;
                Ok(TelemetrySession {
                    id: id as u64,
                    username,
                    timestamp: ts as u64,
                    payload_len: payload_len as u64,
                })
            })
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn show_pushes(
        &self,
        _session: &Session,
        filter: MetadataFilter,
    ) -> io::Result<Vec<PushEntry>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let limit = i64::from(
            filter
                .max_entries
                .min(crate::server::MAX_PACKET_ITEMS as u32),
        );
        let mut stmt = conn
            .prepare(
                "SELECT pushes.id, pushes.username, pushes.ts,
                        funcs.name, funcs.size, funcs.metadata,
                        COALESCE(func_freqs.counter, 0), calcrel_hash.hash
                 FROM pushes
                 JOIN funcs ON funcs.id = pushes.func_id
                 JOIN calcrel_hash ON calcrel_hash.func_id = funcs.id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 ORDER BY pushes.id DESC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        let rows = stmt
            .query_map(params![limit], push_row)
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn show_users(&self, _session: &Session, sort: u32) -> io::Result<Vec<UserInfo>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let order_by = match sort {
            1 => "last_active DESC, username ASC",
            2 => "karma DESC, username ASC",
            _ => "username ASC",
        };
        let sql = format!(
            "SELECT username, is_admin, features, deleted,
                    license_id, license_name, license_email, karma, last_active
             FROM users
             WHERE deleted = 0
             ORDER BY {order_by}
             LIMIT ?"
        );
        let mut stmt = conn.prepare(&sql).map_err(map_err)?;
        let rows = stmt
            .query_map(params![crate::server::MAX_PACKET_ITEMS as i64], |r| {
                let username: String = r.get(0)?;
                let is_admin: i64 = r.get(1)?;
                let features: i64 = r.get(2)?;
                let deleted: i64 = r.get(3)?;
                let license_id: String = r.get(4)?;
                let license_name: String = r.get(5)?;
                let license_email: String = r.get(6)?;
                let karma: i64 = r.get(7)?;
                let last_active: i64 = r.get(8)?;
                Ok(UserInfo {
                    username,
                    is_admin: is_admin != 0,
                    features: features as u32,
                    deleted: deleted != 0,
                    license_id,
                    license_name,
                    license_email,
                    karma: karma as u32,
                    last_active: last_active as u64,
                })
            })
            .map_err(map_err)?
            .collect::<Result<Vec<_>, _>>()
            .map_err(map_err)?;
        Ok(rows)
    }

    async fn set_password(
        &self,
        _session: &Session,
        username: &str,
        password: &str,
    ) -> io::Result<()> {
        let (is_admin, features) = {
            let conn = self.db.lock().expect("sqlite mutex");
            conn.query_row(
                "SELECT is_admin, features FROM users WHERE username = ?",
                params![username],
                |r| {
                    let is_admin: i64 = r.get(0)?;
                    let features: i64 = r.get(1)?;
                    Ok((is_admin != 0, features as u32))
                },
            )
            .optional()
            .map_err(map_err)?
            .unwrap_or((false, u32::MAX))
        };
        self.upsert_user(username, password, is_admin, features)
    }

    async fn user_operation(&self, _session: &Session, op: &UserOperation) -> io::Result<()> {
        let conn = self.db.lock().expect("sqlite mutex");
        match op.op_type {
            // Recovered user-management handlers:
            // 4 inserts or undeletes, 5 updates profile/license fields,
            // 6 marks a user deleted, 37 applies vault-server user sync data.
            4 | 37 => Self::upsert_user_profile(&conn, &op.user),
            5 => Self::update_user_profile(&conn, &op.user),
            6 => {
                Self::validate_user_operation_name(&op.user)?;
                conn.execute(
                    "UPDATE users SET deleted = 1 WHERE username = ?",
                    params![&op.user.name],
                )
                .map_err(map_err)?;
                Ok(())
            }
            9 => {
                Self::validate_user_operation_name(&op.user)?;
                conn.execute(
                    "UPDATE users SET last_active = ? WHERE username = ? AND deleted = 0",
                    params![op.user.last_active as i64, &op.user.name],
                )
                .map_err(map_err)?;
                Ok(())
            }
            _ => Err(io::Error::new(
                io::ErrorKind::Unsupported,
                format!("USER_OPERATION type {} not supported", op.op_type),
            )),
        }
    }

    async fn get_func_histories(
        &self,
        _session: &Session,
        hashes: &[[u8; 32]],
    ) -> io::Result<Vec<Vec<HistoryEntry>>> {
        let conn = self.db.lock().expect("sqlite mutex");
        let mut out = Vec::with_capacity(hashes.len());
        let mut stmt = conn
            .prepare(
                "SELECT history.id, history.username, history.ts,
                        funcs.name, funcs.size, history.metadata,
                        COALESCE(func_freqs.counter, 0), calcrel_hash.hash
                 FROM history
                 JOIN funcs ON funcs.id = history.func_id
                 JOIN calcrel_hash ON calcrel_hash.func_id = funcs.id
                 LEFT JOIN func_freqs ON func_freqs.func_id = funcs.id
                 WHERE calcrel_hash.hash = ?
                 ORDER BY history.id DESC
                 LIMIT ?",
            )
            .map_err(map_err)?;
        for h in hashes {
            let rows = stmt
                .query_map(
                    params![h.as_slice(), crate::server::MAX_PACKET_ITEMS as i64],
                    history_row,
                )
                .map_err(map_err)?
                .collect::<Result<Vec<_>, _>>()
                .map_err(map_err)?;
            out.push(rows);
        }
        Ok(out)
    }
}

fn func_row(r: &rusqlite::Row<'_>) -> rusqlite::Result<FuncMetadata> {
    let name: String = r.get(0)?;
    let size: i64 = r.get(1)?;
    let metadata: Vec<u8> = r.get(2)?;
    let counter: i64 = r.get(3)?;
    let hash: Vec<u8> = r.get(4)?;
    Ok(FuncMetadata {
        name,
        size: size as u64,
        metadata,
        counter: counter as u32,
        calcrel_hash: blob_to_hash(&hash),
    })
}

fn history_row(r: &rusqlite::Row<'_>) -> rusqlite::Result<HistoryEntry> {
    let id: i64 = r.get(0)?;
    let username: String = r.get(1)?;
    let ts: i64 = r.get(2)?;
    Ok(HistoryEntry {
        id: id as u64,
        username,
        timestamp: ts as u64,
        func: func_row_from_offset(r, 3)?,
    })
}

fn push_row(r: &rusqlite::Row<'_>) -> rusqlite::Result<PushEntry> {
    let id: i64 = r.get(0)?;
    let username: String = r.get(1)?;
    let ts: i64 = r.get(2)?;
    Ok(PushEntry {
        id: id as u64,
        username,
        timestamp: ts as u64,
        func: func_row_from_offset(r, 3)?,
    })
}

fn func_row_from_offset(r: &rusqlite::Row<'_>, offset: usize) -> rusqlite::Result<FuncMetadata> {
    let name: String = r.get(offset)?;
    let size: i64 = r.get(offset + 1)?;
    let metadata: Vec<u8> = r.get(offset + 2)?;
    let counter: i64 = r.get(offset + 3)?;
    let hash: Vec<u8> = r.get(offset + 4)?;
    Ok(FuncMetadata {
        name,
        size: size as u64,
        metadata,
        counter: counter as u32,
        calcrel_hash: blob_to_hash(&hash),
    })
}

fn blob_to_hash(bytes: &[u8]) -> [u8; 32] {
    let mut h = [0u8; 32];
    let n = bytes.len().min(32);
    h[..n].copy_from_slice(&bytes[..n]);
    h
}

fn map_err(e: rusqlite::Error) -> io::Error {
    io::Error::other(e)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::server::Session;
    use std::net::{IpAddr, Ipv4Addr, SocketAddr};

    fn dummy_session() -> Session {
        Session {
            peer: SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0),
            protocol_version: 6,
            username: "tester".into(),
            is_admin: true,
            features: u32::MAX,
        }
    }

    #[tokio::test]
    async fn push_and_pull_roundtrip() {
        let store = SqliteStore::open_in_memory().unwrap();
        let s = dummy_session();
        let rec = FuncMetadata {
            name: "decode".into(),
            size: 0x42,
            metadata: vec![1, 2, 3],
            counter: 7,
            calcrel_hash: [0xabu8; 32],
        };
        let st = store.push_md(&s, std::slice::from_ref(&rec)).await.unwrap();
        assert_eq!(st, vec![0]);

        let pulled = store.pull_md(&s, &[[0xabu8; 32]]).await.unwrap();
        assert_eq!(pulled.len(), 1);
        let got = pulled[0].as_ref().expect("present");
        assert_eq!(got.name, rec.name);
        assert_eq!(got.size, rec.size);
        assert_eq!(got.metadata, rec.metadata);
        // counter not echoed by push_md (initialized to value on insert).
        assert_eq!(got.counter, rec.counter);
    }

    #[tokio::test]
    async fn pull_missing_returns_none() {
        let store = SqliteStore::open_in_memory().unwrap();
        let s = dummy_session();
        let pulled = store.pull_md(&s, &[[0xff; 32]]).await.unwrap();
        assert_eq!(pulled, vec![None]);
    }

    #[tokio::test]
    async fn open_mode_when_users_table_is_empty() {
        let store = SqliteStore::open_in_memory().unwrap();
        let helo = Helo {
            protocol_version: 6,
            license_blob: vec![],
            license_id: [0u8; 6],
            record_conv: false,
            username: Some("anyone".into()),
            password: Some("".into()),
        };
        let accept = store
            .handle_helo(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0), &helo)
            .await
            .unwrap();
        assert!(accept.is_admin);
    }

    #[tokio::test]
    async fn auth_blocks_unknown_user_when_users_populated() {
        let store = SqliteStore::open_in_memory().unwrap();
        store.upsert_user("alice", "pw", true, u32::MAX).unwrap();
        let bad = Helo {
            protocol_version: 6,
            license_blob: vec![],
            license_id: [0u8; 6],
            record_conv: false,
            username: Some("mallory".into()),
            password: Some("hunter2".into()),
        };
        let err = store
            .handle_helo(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0), &bad)
            .await;
        assert!(err.is_err());

        let good = Helo {
            protocol_version: 6,
            license_blob: vec![],
            license_id: [0u8; 6],
            record_conv: false,
            username: Some("alice".into()),
            password: Some("pw".into()),
        };
        let ok = store
            .handle_helo(SocketAddr::new(IpAddr::V4(Ipv4Addr::LOCALHOST), 0), &good)
            .await
            .unwrap();
        assert!(ok.is_admin);
    }

    #[tokio::test]
    async fn stats_count_funcs_and_pushes() {
        let store = SqliteStore::open_in_memory().unwrap();
        let s = dummy_session();
        for i in 0..3 {
            let rec = FuncMetadata {
                name: format!("f{i}"),
                size: i as u64,
                metadata: vec![i as u8],
                counter: 0,
                calcrel_hash: [i as u8; 32],
            };
            store.push_md(&s, &[rec]).await.unwrap();
        }
        let stats = store.lumina_stats(&s).await.unwrap();
        assert_eq!(stats.funcs, 3);
        assert_eq!(stats.pushes, 3);
        assert!(stats.history >= 3);
    }

    #[tokio::test]
    async fn admin_surfaces_cover_users_history_pushes_and_clean() {
        let store = SqliteStore::open_in_memory().unwrap();
        let s = dummy_session();
        let low = FuncMetadata {
            name: "low".into(),
            size: 1,
            metadata: vec![1],
            counter: 1,
            calcrel_hash: [0x11; 32],
        };
        let high = FuncMetadata {
            name: "high".into(),
            size: 2,
            metadata: vec![2],
            counter: 99,
            calcrel_hash: [0x22; 32],
        };
        store
            .push_md(&s, &[low.clone(), high.clone()])
            .await
            .unwrap();

        let pop = store.get_pop(&s, 1).await.unwrap();
        assert_eq!(pop.len(), 1);
        assert_eq!(pop[0].name, "high");

        let filter = MetadataFilter { max_entries: 10 };
        assert_eq!(store.dump_md(&s, filter).await.unwrap().len(), 2);
        assert_eq!(store.show_history(&s, filter).await.unwrap().len(), 2);
        assert_eq!(store.show_pushes(&s, filter).await.unwrap().len(), 2);

        let histories = store
            .get_func_histories(&s, &[[0x22; 32], [0xff; 32]])
            .await
            .unwrap();
        assert_eq!(histories[0].len(), 1);
        assert!(histories[1].is_empty());

        store.set_password(&s, "bob", "pw").await.unwrap();
        let users = store.show_users(&s, 0).await.unwrap();
        assert!(users.iter().any(|u| u.username == "bob"));

        store.push_tlm(&s, vec![1, 2, 3]).await.unwrap();
        let tlm = store.show_tlm_sessions(&s, filter).await.unwrap();
        assert_eq!(tlm.len(), 1);
        assert_eq!(tlm[0].payload_len, 3);

        let deleted = store
            .delete_history(&s, MetadataFilter { max_entries: 1 })
            .await
            .unwrap();
        assert_eq!(deleted, 1);
        assert_eq!(store.show_history(&s, filter).await.unwrap().len(), 1);

        store.clean_db(&s).await.unwrap();
        let stats = store.lumina_stats(&s).await.unwrap();
        assert_eq!(stats.funcs, 0);
        assert_eq!(stats.pushes, 0);
        assert_eq!(stats.history, 0);
    }

    #[tokio::test]
    async fn user_operation_updates_profile_fields_and_deletes() {
        let store = SqliteStore::open_in_memory().unwrap();
        let s = dummy_session();
        let op = UserOperation {
            user: UserOperationUser {
                license: crate::server::LicenseInfo {
                    id: "lic-1".into(),
                    name: "Alice License".into(),
                    email: "alice@example.test".into(),
                },
                name: "alice".into(),
                karma: 42,
                last_active: 123456,
                features: 3,
            },
            op_type: 4,
        };

        store.user_operation(&s, &op).await.unwrap();
        let users = store.show_users(&s, 0).await.unwrap();
        assert_eq!(users.len(), 1);
        assert_eq!(users[0].username, "alice");
        assert_eq!(users[0].license_id, "lic-1");
        assert_eq!(users[0].license_name, "Alice License");
        assert_eq!(users[0].license_email, "alice@example.test");
        assert_eq!(users[0].karma, 42);
        assert_eq!(users[0].last_active, 123456);
        assert!(users[0].is_admin);

        store
            .user_operation(&s, &UserOperation { op_type: 6, ..op })
            .await
            .unwrap();
        assert!(store.show_users(&s, 0).await.unwrap().is_empty());
    }
}
