//! A database read into plain values (the shape of idb-rs's `database.rs`, written for unlace).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use std::collections::BTreeMap;
use std::path::Path;

use crate::bytes::Bytes;
use crate::id0::{ARRAY_ALT_TAG, ARRAY_SUP_TAG, Id0};
use crate::reader::{Reader, Width, cstr};
use crate::root::{self, RootInfo};
use crate::{Error, Result};

/// The largest segment whose bytes [`Database::memory`] holds; a larger one is listed but
/// not loaded.
pub const MAX_SEGMENT_BYTES: u64 = 256 << 20;
const MAX_ERRORS: usize = 64;
const NSUP_TYPEINFO: u64 = 0x3000;
const FUNC_NORET: u64 = 0x1;
const FUNC_LIB: u64 = 0x4;
const FUNC_THUNK: u64 = 0x80;
const FUNC_TAIL: u64 = 0x8000;

/// What to read besides the analysis itself.
#[derive(Clone, Copy, Debug, Default)]
pub struct Load {
    /// Read every segment's bytes into [`Database::memory`].
    pub memory: bool,
}

/// The database-wide facts.
#[derive(Clone, Debug, Default)]
pub struct Info {
    /// IDA's processor module name (`metapc`, `ARM`, `mipsl`, ...).
    pub processor: String,
    /// The width of an address in the database: 32 (`.idb`) or 64 (`.i64`).
    pub address_bits: u32,
    /// The program's own bitness: 16, 32 or 64.
    pub bitness: u32,
    pub big_endian: bool,
    /// The version of the root record (`ida_info`).
    pub version: u16,
    /// The input file format as IDA's loader named it (`Elf`, `Pe`, `Macho`, ...).
    pub file_format: String,
    /// The compiler IDA assumed (`Gnu`, `VisualStudio`, ...).
    pub compiler: String,
    /// The compiler's sizes of `int`, `bool` and `enum` and its memory model byte, for
    /// decoding a type string when the database has no type library.
    pub size_int: u8,
    pub size_bool: u8,
    pub size_enum: u8,
    pub memory_model: u8,
    pub input_file: Option<String>,
    pub input_size: Option<u64>,
    pub input_crc32: Option<u32>,
    pub input_md5: Option<String>,
    pub input_sha256: Option<String>,
    pub image_base: Option<u64>,
}

/// Read, write and execute rights.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct Perms {
    pub read: bool,
    pub write: bool,
    pub execute: bool,
}

/// One segment.
#[derive(Clone, Debug)]
pub struct Segment {
    pub start: u64,
    pub end: u64,
    pub name: Option<String>,
    pub class: Option<String>,
    /// `None` when the database records no rights.
    pub perms: Option<Perms>,
    /// 16, 32 or 64.
    pub bitness: u32,
    /// The segment type: `norm`, `xtrn`, `code`, `data`, `bss`, ...
    pub kind: String,
}

/// A type string IDA stores beside an address (`NSUP_TYPEINFO`), undecoded.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct TypeInfo {
    /// The serialized type.
    pub type_bytes: Vec<u8>,
    /// The names of its parameters and members, as a TIL entry stores them.
    pub fields: Vec<u8>,
}

/// One function (its entry chunk), with the tails it owns.
#[derive(Clone, Debug)]
pub struct Function {
    pub start: u64,
    /// The end of the entry chunk.
    pub end: u64,
    /// The name; `sub_<HEX>` when the database holds none.
    pub name: String,
    /// The database holds a name for it (not a dummy one).
    pub named: bool,
    pub no_return: bool,
    pub library: bool,
    pub thunk: bool,
    /// The prototype's type string, when the database holds one.
    pub type_info: Option<TypeInfo>,
    /// The C prototype; left empty here, for a TIL decoder to fill from [`Self::type_info`].
    pub prototype: Option<String>,
    pub comment: Option<String>,
    pub repeatable_comment: Option<String>,
    /// The other chunks, `(start, end)`.
    pub tails: Vec<(u64, u64)>,
}

/// A named address.
#[derive(Clone, Debug)]
pub struct Name {
    pub address: u64,
    pub name: String,
}

/// Where a comment shows.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum CommentKind {
    Regular,
    Repeatable,
    /// A line before the item.
    Anterior,
    /// A line after the item.
    Posterior,
}

/// One comment on an item.
#[derive(Clone, Debug)]
pub struct Comment {
    pub address: u64,
    pub kind: CommentKind,
    pub text: String,
}

/// A local type rendered as one C declaration; filled by a TIL decoder from
/// [`Database::til`].
#[derive(Clone, Debug)]
pub struct LocalType {
    pub ordinal: u64,
    pub name: String,
    pub declaration: String,
}

/// An entry point (export, program entry).
#[derive(Clone, Debug)]
pub struct EntryPoint {
    pub address: u64,
    pub name: String,
    pub forwarded: Option<String>,
}

/// Loaded bytes of one segment; bytes the database does not hold read as zero.
#[derive(Clone, Debug)]
pub struct MemoryRun {
    pub start: u64,
    pub bytes: Vec<u8>,
    /// The rights of the segment the run comes from.
    pub perms: Perms,
}

/// A database's contents.
#[derive(Clone, Debug, Default)]
pub struct Database {
    pub info: Info,
    pub segments: Vec<Segment>,
    /// Address-ordered.
    pub functions: Vec<Function>,
    /// Address-ordered.
    pub names: Vec<Name>,
    /// Address-ordered.
    pub comments: Vec<Comment>,
    /// Left empty here, for a TIL decoder to fill from [`Self::til`].
    pub types: Vec<LocalType>,
    pub entry_points: Vec<EntryPoint>,
    /// The database's type library section (an `IDATIL` image), when it has one.
    pub til: Option<Vec<u8>>,
    /// Filled when [`Load::memory`] is set; address-ordered and disjoint.
    pub memory: Vec<MemoryRun>,
    /// Items that did not parse and were skipped, at most 64.
    pub errors: Vec<String>,
}

impl Database {
    /// Read the `.idb`/`.i64` at `path`.
    pub fn open(path: impl AsRef<Path>, load: Load) -> Result<Self> {
        let data = std::fs::read(path.as_ref())?;
        Self::from_bytes(&data, load)
    }

    /// Read a database held in memory.
    pub fn from_bytes(data: &[u8], load: Load) -> Result<Self> {
        std::panic::catch_unwind(|| read(data, load))
            .unwrap_or_else(|_| Err(Error::Format("the IDB reader panicked".into())))
    }

    /// Does `bytes` start like an IDA database (`IDA0`, `IDA1`, `IDA2`)?
    pub fn is_database(bytes: &[u8]) -> bool {
        matches!(bytes.get(..4), Some(b"IDA0" | b"IDA1" | b"IDA2"))
    }
}

fn hex(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{b:02x}")).collect()
}

fn text(bytes: &[u8]) -> Option<String> {
    let s = String::from_utf8_lossy(bytes).trim_end().to_string();
    (!s.is_empty()).then_some(s)
}

fn read(data: &[u8], load: Load) -> Result<Database> {
    let sections = crate::sections::read(data)?;
    let w = Width {
        wide: sections.wide,
    };
    let Some(id0) = &sections.id0 else {
        return Err(Error::Format("the database has no ID0 section".into()));
    };
    let id0 = Id0::read(id0, w, sections.ida0)?;
    let root = root::read(&id0)?;
    let bytes = Bytes::read(
        sections.id1.as_deref(),
        sections.seg.as_deref(),
        sections.id2.as_deref(),
        w,
    )?;
    let names = match &sections.nam {
        Some(nam) => crate::nam::read(nam, w)?,
        None => Vec::new(),
    };
    let mut r = Walk {
        w,
        id0: &id0,
        root: &root,
        bytes: &bytes,
        errors: Vec::new(),
    };
    let info = r.info()?;
    let segments = r.segments();
    let functions = r.functions();
    let names = r.names(&names);
    let comments = r.comments();
    let entry_points = r.entry_points();
    let memory = if load.memory {
        r.memory(&segments)
    } else {
        Vec::new()
    };
    Ok(Database {
        info,
        segments,
        functions,
        names,
        comments,
        types: Vec::new(),
        entry_points,
        til: sections.til,
        memory,
        errors: r.errors,
    })
}

struct Walk<'a> {
    w: Width,
    id0: &'a Id0,
    root: &'a RootInfo,
    bytes: &'a Bytes,
    errors: Vec<String>,
}

impl Walk<'_> {
    fn error(&mut self, what: String) {
        if self.errors.len() < MAX_ERRORS {
            self.errors.push(what);
        }
    }

    fn node(&self, address: u64) -> u64 {
        self.root.node(self.w, address)
    }

    fn info(&mut self) -> Result<Info> {
        let id0 = self.id0;
        let w = self.w;
        let root_node = root::root_node(id0)?;
        let value = |index: i64, tag: u8| root::root_value(id0, root_node, index, tag);
        let le = |index: i64| value(index, ARRAY_ALT_TAG).and_then(|v| w.from_le(v));
        Ok(Info {
            processor: self.root.processor.clone(),
            address_bits: if w.wide { 64 } else { 32 },
            bitness: self.root.bitness(),
            big_endian: self.root.big_endian(),
            version: self.root.version,
            file_format: root::file_format_name(self.root.file_format).to_string(),
            compiler: root::compiler_name(self.root.compiler).to_string(),
            size_int: self.root.size_int,
            size_bool: self.root.size_bool,
            size_enum: self.root.size_enum,
            memory_model: self.root.cm,
            input_file: id0.node_value(root_node).and_then(|v| text(cstr(v))),
            input_size: le(root::RIDX_ALT_FSIZE),
            input_crc32: le(root::RIDX_ALT_CRC32).and_then(|v| u32::try_from(v).ok()),
            input_md5: value(root::RIDX_MD5, ARRAY_SUP_TAG)
                .filter(|v| v.len() == 16)
                .map(hex),
            input_sha256: value(root::RIDX_SHA256, ARRAY_SUP_TAG)
                .filter(|v| v.len() == 32)
                .map(hex),
            image_base: le(root::RIDX_ALT_IMAGEBASE),
        })
    }

    fn segment_names(&mut self) -> BTreeMap<u64, String> {
        let mut names = BTreeMap::new();
        let Some(node) = self.id0.node_by_name("$ segstrings") else {
            return names;
        };
        for (_, value) in self.id0.sup_range(node, ARRAY_SUP_TAG) {
            let mut r = Reader::new(value);
            let parsed = (|| -> Result<()> {
                let start = r.unpack_dd()?;
                let end = r.unpack_dd()?;
                if start == 0 || start > end || end - start > 1 << 20 {
                    return Err(Error::Format("invalid segment string range".into()));
                }
                for index in start..end {
                    let len = r.unpack_dd()? as usize;
                    let name = r.take(len)?;
                    names.insert(u64::from(index), String::from_utf8_lossy(name).into_owned());
                }
                Ok(())
            })();
            if let Err(e) = parsed {
                self.error(format!("segment strings: {e}"));
            }
        }
        names
    }

    fn segments(&mut self) -> Vec<Segment> {
        let names = self.segment_names();
        let has_strings = !names.is_empty();
        let name_of = |index: u64| -> Option<String> {
            if has_strings {
                names.get(&index).cloned()
            } else {
                self.id0.name_by_index(index).and_then(|n| text(&n))
            }
        };
        let Some(node) = self.id0.node_by_name("$ segs") else {
            return Vec::new();
        };
        let w = self.w;
        let mut out = Vec::new();
        let mut errors = Vec::new();
        for (_, value) in self.id0.sup_range(node, ARRAY_SUP_TAG) {
            let mut r = Reader::new(value);
            let parsed = (|| -> Result<Segment> {
                let start = r.unpack_usize(w)?;
                let size = r.unpack_usize(w)?;
                let name = r.unpack_usize(w)?;
                let class = r.unpack_usize(w)?;
                r.unpack_usize(w)?;
                r.unpack_dd()?;
                r.unpack_dd()?;
                r.unpack_dd()?;
                let perm = r.unpack_dd()?;
                let bitness = match r.unpack_dd()? {
                    0 => 16,
                    1 => 32,
                    2 => 64,
                    other => {
                        return Err(Error::Format(format!("invalid segment bitness {other}")));
                    }
                };
                let kind = match r.unpack_dd()? {
                    0 => "norm",
                    1 => "xtrn",
                    2 => "code",
                    3 => "data",
                    4 => "imp",
                    6 => "grp",
                    7 => "null",
                    8 => "undf",
                    9 => "bss",
                    10 => "abssym",
                    11 => "comm",
                    12 => "imem",
                    other => {
                        return Err(Error::Format(format!("invalid segment type {other}")));
                    }
                };
                let end = start
                    .checked_add(size)
                    .filter(|e| *e <= w.max())
                    .ok_or_else(|| Error::Format("a segment wraps the address space".into()))?;
                Ok(Segment {
                    start,
                    end,
                    name: name_of(name),
                    class: name_of(class),
                    perms: (1..=7).contains(&perm).then_some(Perms {
                        read: perm & 4 != 0,
                        write: perm & 2 != 0,
                        execute: perm & 1 != 0,
                    }),
                    bitness,
                    kind: kind.to_string(),
                })
            })();
            match parsed {
                Ok(seg) => out.push(seg),
                Err(e) => errors.push(format!("segment: {e}")),
            }
        }
        for e in errors {
            self.error(e);
        }
        out.sort_by_key(|s| s.start);
        out
    }

    fn label(&self, address: u64) -> Option<String> {
        let value = self.id0.node_name(self.node(address))?;
        if let [0, rest @ ..] = value {
            let reference = self.w.from_be(rest)?;
            return text(cstr(&self.id0.long_name(reference)));
        }
        text(cstr(value))
    }

    fn type_info(&self, address: u64) -> Option<TypeInfo> {
        if !self.bytes.flags(address)?.may_have_type() {
            return None;
        }
        let node = self.node(address);
        let mut streams = [Vec::new(), Vec::new()];
        let mut expected = [0u64, 1];
        let mut complete = [false, false];
        for (index, value) in self.id0.sup_range(node, ARRAY_SUP_TAG) {
            let Some(offset) = index.checked_sub(NSUP_TYPEINFO) else {
                continue;
            };
            if offset >= 0x1000 {
                break;
            }
            let stream = (offset & 1) as usize;
            if complete[stream] {
                continue;
            }
            if offset != expected[stream] {
                complete[stream] = true;
                continue;
            }
            streams[stream].extend_from_slice(value);
            expected[stream] += 2;
        }
        let [type_bytes, fields] = streams;
        (!type_bytes.is_empty()).then_some(TypeInfo { type_bytes, fields })
    }

    fn function_comment(&self, funcs: u64, address: u64, tag: u8) -> Option<String> {
        let value = self.id0.sup(funcs, address, tag)?;
        if !value.starts_with(&0x0102_0304u32.to_le_bytes()) {
            return text(cstr(value));
        }
        let indirect = self.id0.sup(funcs, self.node(address), tag)?;
        let mut r = Reader::new(indirect);
        if r.usize(self.w).ok()? != 0x0102_0304 {
            return None;
        }
        let node = r.usize(self.w).ok()?;
        let mut joined = Vec::new();
        for line in self.id0.continuous(node, ARRAY_SUP_TAG, 0) {
            joined.extend_from_slice(cstr(line));
            joined.push(b'\n');
        }
        text(&joined)
    }

    fn functions(&mut self) -> Vec<Function> {
        let Some(funcs) = self.id0.node_by_name("$ funcs") else {
            return Vec::new();
        };
        let w = self.w;
        let mut out: Vec<Function> = Vec::new();
        let mut tails: Vec<(u64, u64, u64)> = Vec::new();
        let mut errors = Vec::new();
        for (_, value) in self.id0.sup_range(funcs, ARRAY_SUP_TAG) {
            let parsed = read_chunk(value, w);
            let (start, end, flags, owner) = match parsed {
                Ok(chunk) => chunk,
                Err(e) => {
                    errors.push(format!("function: {e}"));
                    continue;
                }
            };
            if let Some(owner) = owner {
                tails.push((owner, start, end));
                continue;
            }
            let label = self.label(start);
            out.push(Function {
                start,
                end,
                named: label.is_some(),
                name: label.unwrap_or_else(|| format!("sub_{start:X}")),
                no_return: flags & FUNC_NORET != 0,
                library: flags & FUNC_LIB != 0,
                thunk: flags & FUNC_THUNK != 0,
                type_info: self.type_info(start),
                prototype: None,
                comment: self.function_comment(funcs, start, b'C'),
                repeatable_comment: self.function_comment(funcs, start, b'R'),
                tails: Vec::new(),
            });
        }
        for e in errors {
            self.error(e);
        }
        out.sort_by_key(|f| f.start);
        out.dedup_by_key(|f| f.start);
        for (owner, start, end) in tails {
            if let Ok(i) = out.binary_search_by_key(&owner, |f| f.start) {
                out[i].tails.push((start, end));
            }
        }
        for f in &mut out {
            f.tails.sort_unstable();
        }
        out
    }

    fn names(&self, addresses: &[u64]) -> Vec<Name> {
        let mut out: Vec<Name> = addresses
            .iter()
            .filter_map(|&address| {
                Some(Name {
                    address,
                    name: self.label(address)?,
                })
            })
            .collect();
        out.sort_by_key(|n| n.address);
        out.dedup_by_key(|n| n.address);
        out
    }

    fn comments(&self) -> Vec<Comment> {
        let mut out = Vec::new();
        for (address, flags) in self.bytes.heads() {
            if !flags.has_comment() && !flags.has_comment_ext() {
                continue;
            }
            let node = self.node(address);
            let mut push = |kind, raw: &[u8]| {
                if let Some(text) = text(cstr(raw)) {
                    out.push(Comment {
                        address,
                        kind,
                        text,
                    });
                }
            };
            if flags.has_comment() {
                if let Some(c) = self.id0.sup(node, 0, ARRAY_SUP_TAG) {
                    push(CommentKind::Regular, c);
                }
                if let Some(c) = self.id0.sup(node, 1, ARRAY_SUP_TAG) {
                    push(CommentKind::Repeatable, c);
                }
            }
            if flags.has_comment_ext() {
                for line in self
                    .id0
                    .continuous(node, ARRAY_SUP_TAG, 1000)
                    .into_iter()
                    .take(1000)
                {
                    push(CommentKind::Anterior, line);
                }
                for line in self
                    .id0
                    .continuous(node, ARRAY_SUP_TAG, 2000)
                    .into_iter()
                    .take(1000)
                {
                    push(CommentKind::Posterior, line);
                }
            }
        }
        out
    }

    fn entry_points(&self) -> Vec<EntryPoint> {
        let Some(node) = self.id0.node_by_name("$ entry points") else {
            return Vec::new();
        };
        let prefix = self.id0.node_key(node);
        let mut by_key: BTreeMap<u64, (Option<u64>, Option<String>, Option<String>)> =
            BTreeMap::new();
        for entry in self.id0.prefixed(&prefix) {
            let Some((&tag, sub)) = entry.key[prefix.len()..].split_first() else {
                continue;
            };
            let Some(key) = self.w.from_be(sub).filter(|k| *k != self.w.max()) else {
                continue;
            };
            let slot = by_key.entry(key).or_default();
            match tag {
                ARRAY_ALT_TAG => {
                    slot.0 = self
                        .w
                        .from_le(&entry.value)
                        .map(|a| self.w.wrap(a.wrapping_sub(1)));
                }
                ARRAY_SUP_TAG => slot.1 = text(cstr(&entry.value)),
                b'F' => slot.2 = text(cstr(&entry.value)),
                _ => {}
            }
        }
        let mut out: Vec<EntryPoint> = by_key
            .into_iter()
            .filter_map(|(key, (address, name, forwarded))| {
                Some(EntryPoint {
                    address: address?,
                    name: name.unwrap_or_else(|| format!("entry_{key}")),
                    forwarded,
                })
            })
            .collect();
        out.sort_by_key(|e| e.address);
        out
    }

    fn memory(&mut self, segments: &[Segment]) -> Vec<MemoryRun> {
        let mut out: Vec<MemoryRun> = Vec::new();
        for seg in segments {
            let size = seg.end.saturating_sub(seg.start);
            if size == 0 {
                continue;
            }
            if size > MAX_SEGMENT_BYTES {
                self.error(format!(
                    "segment {:#x}..{:#x}: too large to load",
                    seg.start, seg.end
                ));
                continue;
            }
            if out
                .last()
                .is_some_and(|last| last.start + last.bytes.len() as u64 > seg.start)
            {
                self.error(format!(
                    "segment {:#x}..{:#x}: overlaps the segment before it",
                    seg.start, seg.end
                ));
                continue;
            }
            let mut data = vec![0u8; size as usize];
            let mut any = false;
            for (i, slot) in data.iter_mut().enumerate() {
                if let Some(b) = self
                    .bytes
                    .flags(seg.start + i as u64)
                    .and_then(|f| f.value())
                {
                    *slot = b;
                    any = true;
                }
            }
            let code = seg.kind == "code";
            let perms = seg.perms.unwrap_or(Perms {
                read: true,
                write: !code,
                execute: code,
            });
            if any || seg.kind == "bss" || perms.write {
                out.push(MemoryRun {
                    start: seg.start,
                    bytes: data,
                    perms,
                });
            }
        }
        out
    }
}

/// One `$ funcs` record: `(start, end, flags, owner of a tail chunk)`.
fn read_chunk(value: &[u8], w: Width) -> Result<(u64, u64, u64, Option<u64>)> {
    let mut r = Reader::new(value);
    let start = r.unpack_usize(w)?;
    let len = r.unpack_usize(w)?;
    let end = start.saturating_add(len).min(w.max());
    let part = u64::from(r.unpack_dw()?);
    let owner = if part & FUNC_TAIL != 0 {
        let offset = r.unpack_usize(w)?;
        if r.unpack_dw()? == 0 {
            r.unpack_dd()?;
        }
        Some(w.wrap(start.wrapping_sub(offset)))
    } else {
        r.unpack_usize(w)?;
        r.unpack_usize(w)?;
        r.unpack_dw()?;
        r.unpack_usize(w)?;
        for _ in 0..4 {
            r.unpack_dw()?;
        }
        r.unpack_dd()?;
        r.unpack_dw()?;
        r.unpack_usize(w)?;
        None
    };
    let mut flags = part;
    if !r.is_empty() {
        let full = r.unpack_dq()?;
        if full & 0xffff == part {
            flags = full;
        }
    }
    Ok((start, end, flags, owner))
}
