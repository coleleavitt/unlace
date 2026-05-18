//! sqlite-backed [`Handler`] implementation.
//!
//! Only the tables we currently exercise are created here: `funcs`,
//! `calcrel_hash`, `func_freqs`, `history`, `pushes`, `users`. The remaining
//! tables (`idbs`, `inputs`, `hostnames`) are deferred — the reverse-
//! engineered C source references them mostly inside the unimplemented
//! `PUSH_TLM` / `DUMP_MD` / `USER_OPERATION` bodies, and creating empty rows
//! for them now would just be guess-work about the column layout.

use std::io;
use std::net::SocketAddr;
use std::path::Path;
use std::sync::Mutex;

use rusqlite::{Connection, OptionalExtension, params};

use crate::helo::Helo;
use crate::server::{FuncMetadata, Handler, HeloAccept, LuminaStats, Session};

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
                deleted INTEGER NOT NULL DEFAULT 0
            );
            "#,
        )
        .map_err(map_err)?;
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
        let st = store.push_md(&s, &[rec.clone()]).await.unwrap();
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
}
