//! The canonical JSON form of a project, for review in git and for moving state between files.
//!
//! Every list is sorted by its key and every address is a `0x` hex string, so exporting the
//! same state twice gives the same bytes and a diff shows only what changed.

use rusqlite::{TransactionBehavior, params};
use serde::{Deserialize, Serialize};

use crate::directive::{hex_bytes, parse_address, parse_hex_bytes};
use crate::{BinaryIdentity, Project, ProjectError, Result, from_sql_address, to_sql_address};

pub const FORMAT: &str = "unlace-project";

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct ProjectJson {
    pub format: String,
    pub schema_version: i64,
    pub binary: BinaryJson,
    #[serde(default)]
    pub functions: Vec<FunctionJson>,
    #[serde(default)]
    pub prototypes: Vec<PrototypeJson>,
    #[serde(default)]
    pub locals: Vec<LocalJson>,
    #[serde(default)]
    pub types: Vec<TypeJson>,
    #[serde(default)]
    pub data: Vec<DataJson>,
    #[serde(default)]
    pub comments: Vec<CommentJson>,
    #[serde(default)]
    pub callsites: Vec<CallsiteJson>,
    #[serde(default)]
    pub patches: Vec<PatchJson>,
    #[serde(default)]
    pub bookmarks: Vec<BookmarkJson>,
    #[serde(default)]
    pub assertions: Vec<AssertionJson>,
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct BinaryJson {
    pub sha256: String,
    pub path: Option<String>,
    pub size: Option<u64>,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct FunctionJson {
    pub address: String,
    pub end: Option<String>,
    pub name: Option<String>,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct PrototypeJson {
    pub function: String,
    pub declaration: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct LocalJson {
    pub target: String,
    pub name: Option<String>,
    #[serde(rename = "type")]
    pub ty: Option<String>,
    #[serde(default)]
    pub isolate: bool,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct TypeJson {
    pub name: String,
    pub declaration: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct DataJson {
    pub address: String,
    pub declaration: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct CommentJson {
    pub target: String,
    pub text: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct CallsiteJson {
    pub target: String,
    pub callee: Option<String>,
    pub prototype: Option<String>,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct PatchJson {
    pub address: String,
    /// Hex digits, two per byte.
    pub bytes: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct BookmarkJson {
    pub address: String,
    pub title: String,
    #[serde(default)]
    pub description: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct AssertionJson {
    pub kind: String,
    pub target: String,
    pub directive: String,
}

fn addr(a: u64) -> String {
    format!("{a:#x}")
}

impl ProjectJson {
    /// The project's whole state.
    pub fn export(project: &Project) -> Result<Self> {
        let c = project.conn();
        let binary = project.binary()?;
        let mut out = ProjectJson {
            format: FORMAT.into(),
            schema_version: project.schema_version()?,
            binary: BinaryJson {
                sha256: binary.sha256,
                path: binary.path,
                size: binary.size,
            },
            ..Default::default()
        };

        let mut stmt = c.prepare("SELECT address, end_address, name FROM functions")?;
        let mut functions = stmt
            .query_map([], |r| {
                Ok((
                    r.get::<_, i64>(0)?,
                    r.get::<_, Option<i64>>(1)?,
                    r.get::<_, Option<String>>(2)?,
                ))
            })?
            .collect::<rusqlite::Result<Vec<_>>>()?;
        functions.sort_by_key(|f| from_sql_address(f.0));
        out.functions = functions
            .into_iter()
            .map(|(a, e, n)| FunctionJson {
                address: addr(from_sql_address(a)),
                end: e.map(|e| addr(from_sql_address(e))),
                name: n,
            })
            .collect();

        let mut stmt =
            c.prepare("SELECT function, declaration FROM prototypes ORDER BY function")?;
        out.prototypes = stmt
            .query_map([], |r| {
                Ok(PrototypeJson {
                    function: r.get(0)?,
                    declaration: r.get(1)?,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;

        let mut stmt =
            c.prepare("SELECT target, name, type, isolate FROM locals ORDER BY target")?;
        out.locals = stmt
            .query_map([], |r| {
                Ok(LocalJson {
                    target: r.get(0)?,
                    name: r.get(1)?,
                    ty: r.get(2)?,
                    isolate: r.get::<_, i64>(3)? != 0,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;

        let mut stmt = c.prepare("SELECT name, declaration FROM types ORDER BY name")?;
        out.types = stmt
            .query_map([], |r| {
                Ok(TypeJson {
                    name: r.get(0)?,
                    declaration: r.get(1)?,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;

        let mut stmt = c.prepare("SELECT address, declaration FROM data")?;
        let mut data = stmt
            .query_map([], |r| Ok((r.get::<_, i64>(0)?, r.get::<_, String>(1)?)))?
            .collect::<rusqlite::Result<Vec<_>>>()?;
        data.sort_by_key(|d| from_sql_address(d.0));
        out.data = data
            .into_iter()
            .map(|(a, d)| DataJson {
                address: addr(from_sql_address(a)),
                declaration: d,
            })
            .collect();

        let mut stmt = c.prepare("SELECT target, text FROM comments ORDER BY target")?;
        out.comments = stmt
            .query_map([], |r| {
                Ok(CommentJson {
                    target: r.get(0)?,
                    text: r.get(1)?,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;

        let mut stmt =
            c.prepare("SELECT target, callee, prototype FROM callsites ORDER BY target")?;
        out.callsites = stmt
            .query_map([], |r| {
                Ok(CallsiteJson {
                    target: r.get(0)?,
                    callee: r.get(1)?,
                    prototype: r.get(2)?,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;

        let mut stmt = c.prepare("SELECT address, bytes FROM patches")?;
        let mut patches = stmt
            .query_map([], |r| Ok((r.get::<_, i64>(0)?, r.get::<_, Vec<u8>>(1)?)))?
            .collect::<rusqlite::Result<Vec<_>>>()?;
        patches.sort_by_key(|p| from_sql_address(p.0));
        out.patches = patches
            .into_iter()
            .map(|(a, b)| PatchJson {
                address: addr(from_sql_address(a)),
                bytes: hex_bytes(&b),
            })
            .collect();

        let mut stmt = c.prepare("SELECT address, title, description FROM bookmarks")?;
        let mut bookmarks = stmt
            .query_map([], |r| {
                Ok((
                    r.get::<_, i64>(0)?,
                    r.get::<_, String>(1)?,
                    r.get::<_, String>(2)?,
                ))
            })?
            .collect::<rusqlite::Result<Vec<_>>>()?;
        bookmarks.sort_by_key(|b| from_sql_address(b.0));
        out.bookmarks = bookmarks
            .into_iter()
            .map(|(a, t, d)| BookmarkJson {
                address: addr(from_sql_address(a)),
                title: t,
                description: d,
            })
            .collect();

        let mut stmt =
            c.prepare("SELECT kind, target, directive FROM assertions ORDER BY kind, target")?;
        out.assertions = stmt
            .query_map([], |r| {
                Ok(AssertionJson {
                    kind: r.get(0)?,
                    target: r.get(1)?,
                    directive: r.get(2)?,
                })
            })?
            .collect::<rusqlite::Result<_>>()?;
        Ok(out)
    }

    /// The canonical text: pretty JSON with a trailing newline.
    pub fn to_canonical_string(&self) -> Result<String> {
        Ok(serde_json::to_string_pretty(self)? + "\n")
    }

    pub fn parse(text: &str) -> Result<Self> {
        let json: ProjectJson = serde_json::from_str(text)?;
        if json.format != FORMAT {
            return Err(ProjectError::Invalid(format!(
                "not an unlace project export (format {:?}, want {FORMAT:?})",
                json.format
            )));
        }
        Ok(json)
    }

    /// The binary this export was made from.
    pub fn binary_identity(&self) -> BinaryIdentity {
        BinaryIdentity {
            sha256: self.binary.sha256.clone(),
            path: self.binary.path.clone(),
            size: self.binary.size,
        }
    }

    /// Write this state into `project` in one transaction. With `replace` every table is
    /// emptied first; otherwise rows merge, the imported value winning per key. Refuses an export
    /// made from another binary. Returns the number of rows written.
    pub fn import_into(&self, project: &mut Project, replace: bool) -> Result<usize> {
        project.check_binary(&self.binary_identity())?;
        let tx = project
            .conn_mut()
            .transaction_with_behavior(TransactionBehavior::Immediate)?;
        if replace {
            for table in crate::schema::TABLES {
                tx.execute(&format!("DELETE FROM {table}"), [])?;
            }
        }
        let mut n = 0usize;
        for f in &self.functions {
            tx.execute(
                "INSERT INTO functions (address, end_address, name) VALUES (?1, ?2, ?3)
                 ON CONFLICT(address) DO UPDATE SET end_address = excluded.end_address,
                     name = excluded.name",
                params![
                    to_sql_address(parse_address(&f.address)?),
                    f.end
                        .as_deref()
                        .map(parse_address)
                        .transpose()?
                        .map(to_sql_address),
                    f.name
                ],
            )?;
            n += 1;
        }
        for p in &self.prototypes {
            tx.execute(
                "INSERT INTO prototypes (function, declaration) VALUES (?1, ?2)
                 ON CONFLICT(function) DO UPDATE SET declaration = excluded.declaration",
                params![p.function, p.declaration],
            )?;
            n += 1;
        }
        for l in &self.locals {
            tx.execute(
                "INSERT INTO locals (target, name, type, isolate) VALUES (?1, ?2, ?3, ?4)
                 ON CONFLICT(target) DO UPDATE SET name = excluded.name, type = excluded.type,
                     isolate = excluded.isolate",
                params![l.target, l.name, l.ty, l.isolate as i64],
            )?;
            n += 1;
        }
        for t in &self.types {
            tx.execute(
                "INSERT INTO types (name, declaration) VALUES (?1, ?2)
                 ON CONFLICT(name) DO UPDATE SET declaration = excluded.declaration",
                params![t.name, t.declaration],
            )?;
            n += 1;
        }
        for d in &self.data {
            tx.execute(
                "INSERT INTO data (address, declaration) VALUES (?1, ?2)
                 ON CONFLICT(address) DO UPDATE SET declaration = excluded.declaration",
                params![to_sql_address(parse_address(&d.address)?), d.declaration],
            )?;
            n += 1;
        }
        for c in &self.comments {
            tx.execute(
                "INSERT INTO comments (target, text) VALUES (?1, ?2)
                 ON CONFLICT(target) DO UPDATE SET text = excluded.text",
                params![c.target, c.text],
            )?;
            n += 1;
        }
        for s in &self.callsites {
            tx.execute(
                "INSERT INTO callsites (target, callee, prototype) VALUES (?1, ?2, ?3)
                 ON CONFLICT(target) DO UPDATE SET callee = excluded.callee,
                     prototype = excluded.prototype",
                params![s.target, s.callee, s.prototype],
            )?;
            n += 1;
        }
        for p in &self.patches {
            tx.execute(
                "INSERT INTO patches (address, bytes) VALUES (?1, ?2)
                 ON CONFLICT(address) DO UPDATE SET bytes = excluded.bytes",
                params![
                    to_sql_address(parse_address(&p.address)?),
                    parse_hex_bytes(&p.bytes)?
                ],
            )?;
            n += 1;
        }
        for b in &self.bookmarks {
            tx.execute(
                "INSERT INTO bookmarks (address, title, description) VALUES (?1, ?2, ?3)
                 ON CONFLICT(address) DO UPDATE SET title = excluded.title,
                     description = excluded.description",
                params![
                    to_sql_address(parse_address(&b.address)?),
                    b.title,
                    b.description
                ],
            )?;
            n += 1;
        }
        for a in &self.assertions {
            tx.execute(
                "INSERT INTO assertions (kind, target, directive) VALUES (?1, ?2, ?3)
                 ON CONFLICT(kind, target) DO UPDATE SET directive = excluded.directive",
                params![a.kind, a.target, a.directive],
            )?;
            n += 1;
        }
        tx.commit()?;
        Ok(n)
    }
}
