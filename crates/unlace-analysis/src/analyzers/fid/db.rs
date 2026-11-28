//! The unlace-native `.fid` format and full-hash lookup interface.
//!
//! [`FidDb`] stores records in full-hash buckets, preserving insertion order
//! within each bucket. [`FidDatabase`] exposes metadata and matching records.
//! Serialization visits buckets in ascending hash order and interns names in
//! first-encounter order, so unordered index iteration cannot affect the bytes.
//!
//! The flat format is distinct from Ghidra's `.fidb`/`.fidbf` containers:
//!
//! ```text
//! magic        "KFID"                         # 4 bytes
//! version      u32  (1, or FID_DB_VERSION = 2)
//! lang_id      len-prefixed UTF-8
//! cspec_id     len-prefixed UTF-8
//! n_records    u32
//! records[n]:  full_hash:u64 | specific_hash:u64 | code_unit_size:i16 |
//!              specific_addl:u8 | flags:u8 | name_off:u32
//!              (version 2 adds) proto_off:u32 | types_first:u32 | types_count:u32
//! (version 2)  n_types:u32 | types[n_types]: decl_off:u32
//! string_blob  (interned, NUL-separated UTF-8)
//! ```
//!
//! All multi-byte integers are little-endian; string lengths are `u32` byte
//! counts. A name offset points into the trailing string blob. Loading checks
//! lengths, offsets and UTF-8, bounds the text the records expand to, and
//! reports malformed input as `UnlaceError`.
//!
//! Version 2 lets a record carry the function's prototype as C text
//! ([`NO_STRING`] for none) and the type declarations it needs: a run of
//! `types_count` entries of the type table from `types_first`, each the blob
//! offset of one declaration, so records share a declaration's text. The hashes of both versions are the same, so a
//! version-1 file still loads, and a database none of whose records carries a
//! prototype is still written as version 1.

use std::collections::{BTreeMap, HashMap, hash_map::Entry};
use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};

/// `"KFID"` — the `.fid` file magic.
pub const FID_DB_MAGIC: &[u8; 4] = b"KFID";

/// The newest on-disk format version. **Bump on ANY change to the hash, the
/// skipper patterns, or the record layout** (Ghidra's `FidFileManager.VERSION = 6`
/// analog) — a mismatched version means the stored hashes were computed by a
/// different algorithm and would mis-match.
pub const FID_DB_VERSION: u32 = 2;

/// The version whose records carry a name only; its hashes are version 2's.
pub const FID_DB_VERSION_NAMES: u32 = 1;

/// The `proto_off` of a record without a prototype.
pub const NO_STRING: u32 = u32::MAX;

/// Records name their strings by offset, so any number of them can share one;
/// the text a load decodes is bounded by the larger of this floor and
/// [`DECODED_TEXT_PER_BYTE`] bytes per byte of the file.
const DECODED_TEXT_FLOOR: usize = 64 << 20;
const DECODED_TEXT_PER_BYTE: usize = 128;

/// `flags` bit 0 — the record's hash was computed over a body with a terminator
/// (return/halt) as its last code unit. Other flag bits are reserved.
pub const FLAG_HAS_TERMINATOR: u8 = 0x01;

/// One fingerprint record — a function's [`FidHashQuad`](crate::fid::hash::FidHashQuad)
/// plus its name and flags. The four hash fields mirror `FidHashQuadImpl`
/// field-for-field; `name` is resolved from the string blob at load time.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FidRecord {
    /// `fullHash` — the operand-masked, position/relocation-independent digest.
    /// This is the index key ([`FidDb::find_by_full_hash`]).
    pub full_hash: u64,
    /// `specificHash` — the digest that also folds usable scalar values (the
    /// disambiguating tiebreak; stored, not indexed, in v1).
    pub specific_hash: u64,
    /// `codeUnitSize` — the post-skip code-unit count minus calls (Ghidra
    /// `short`).
    pub code_unit_size: i16,
    /// `additionalSpecificCount` — `min(specificCount, 127)` (Ghidra `byte`).
    pub specific_addl: u8,
    /// Record flags ([`FLAG_HAS_TERMINATOR`] + reserved).
    pub flags: u8,
    /// The function name this fingerprint identifies (resolved from the interned
    /// string blob at load; interned back into it at serialize).
    pub name: String,
    /// The function's prototype as one C declaration (`int f(char *s)`).
    pub prototype: Option<String>,
    /// The type declarations the prototype needs, each one C declaration
    /// without a line break, in definition-before-use order. Records that
    /// name one run in the file share one decoded copy.
    pub typedefs: Rc<[String]>,
}

/// Read-only metadata and full-hash lookup for a fingerprint database.
pub trait FidDatabase {
    /// The SLEIGH language id the database was built for; the matching pass
    /// refuses a program whose language id does not match (a hash is only
    /// comparable within one language).
    fn lang_id(&self) -> &str;
    /// The compiler-spec id the database was built for.
    fn cspec_id(&self) -> &str;
    /// All records whose `full_hash` equals `h` — FID's only hot-path query
    /// (`FidQueryService.findRecord` by `FULL_HASH_COL`). An empty slice means no
    /// match. The order is the records' insertion order (build order).
    fn find_by_full_hash(&self, h: u64) -> &[FidRecord];
    /// The total record count (diagnostics / tests).
    fn record_count(&self) -> usize;
}

/// The in-memory `.fid` database: the language/compiler ids and the full-hash
/// index. Built by [`FidDb::load`] (parse bytes) or [`FidDb::from_records`]
/// (the generator), serialized by [`FidDb::serialize`].
#[derive(Debug, Clone, Default)]
pub struct FidDb {
    lang_id: String,
    cspec_id: String,
    /// The `FULL_HASH_COL` index: `full_hash -> records sharing it`. A full hash
    /// can map to several functions (a genuine collision, or the same function
    /// under several names).
    by_full_hash: HashMap<u64, Vec<FidRecord>>,
    /// The number of records (the `by_full_hash` buckets may merge collisions, so
    /// this is tracked separately for a faithful round-trip count).
    n_records: usize,
}

/// An empty slice returned for a full hash with no records (so `find_by_full_hash`
/// can return `&[]` without allocating).
const NO_RECORDS: &[FidRecord] = &[];

impl FidDb {
    /// Build a database directly from a record list (the generator path). Records
    /// are indexed by their `full_hash`; insertion order within a bucket is
    /// preserved.
    pub fn from_records(
        lang_id: impl Into<String>,
        cspec_id: impl Into<String>,
        records: Vec<FidRecord>,
    ) -> Self {
        let mut by_full_hash: HashMap<u64, Vec<FidRecord>> = HashMap::new();
        let n_records = records.len();
        for rec in records {
            by_full_hash.entry(rec.full_hash).or_default().push(rec);
        }
        Self {
            lang_id: lang_id.into(),
            cspec_id: cspec_id.into(),
            by_full_hash,
            n_records,
        }
    }

    /// Every record, in a deterministic order (sorted by `full_hash`, then by the
    /// in-bucket order). Used by [`serialize`](Self::serialize) and by tests.
    pub fn records(&self) -> Vec<&FidRecord> {
        let mut keys: Vec<&u64> = self.by_full_hash.keys().collect();
        keys.sort_unstable();
        let mut out: Vec<&FidRecord> = Vec::with_capacity(self.n_records);
        for k in keys {
            out.extend(self.by_full_hash[k].iter());
        }
        out
    }

    /// Serialize to the on-disk `.fid` byte stream (§5.1). The string blob is
    /// interned: identical names share one entry. Records are written in the
    /// deterministic [`records`](Self::records) order so the output is
    /// reproducible.
    pub fn serialize(&self) -> Vec<u8> {
        let records = self.records();

        let described = records
            .iter()
            .any(|rec| rec.prototype.is_some() || !rec.typedefs.is_empty());

        // Intern strings into the blob, mapping each distinct one to its offset.
        let mut blob: Vec<u8> = Vec::new();
        let mut name_off: HashMap<&str, u32> = HashMap::new();
        let mut offsets: Vec<(u32, u32, (u32, u32))> = Vec::with_capacity(records.len());
        let mut types: Vec<u32> = Vec::new();
        let mut runs: HashMap<Vec<u32>, u32> = HashMap::new();
        for rec in &records {
            let name = intern(&mut name_off, &mut blob, Some(&rec.name));
            let proto = intern(&mut name_off, &mut blob, rec.prototype.as_deref());
            let run: Vec<u32> = rec
                .typedefs
                .iter()
                .map(|decl| intern(&mut name_off, &mut blob, Some(decl)))
                .collect();
            let count = run.len() as u32;
            let first = match runs.entry(run) {
                Entry::Occupied(entry) => *entry.get(),
                Entry::Vacant(entry) => {
                    let first = types.len() as u32;
                    types.extend_from_slice(entry.key());
                    *entry.insert(first)
                }
            };
            offsets.push((name, proto, (first, count)));
        }

        let mut out: Vec<u8> = Vec::new();
        out.extend_from_slice(FID_DB_MAGIC);
        let version = if described {
            FID_DB_VERSION
        } else {
            FID_DB_VERSION_NAMES
        };
        out.extend_from_slice(&version.to_le_bytes());
        write_str(&mut out, &self.lang_id);
        write_str(&mut out, &self.cspec_id);
        out.extend_from_slice(&(records.len() as u32).to_le_bytes());
        for (rec, (name, proto, (first, count))) in records.iter().zip(offsets) {
            out.extend_from_slice(&rec.full_hash.to_le_bytes());
            out.extend_from_slice(&rec.specific_hash.to_le_bytes());
            out.extend_from_slice(&rec.code_unit_size.to_le_bytes());
            out.push(rec.specific_addl);
            out.push(rec.flags);
            out.extend_from_slice(&name.to_le_bytes());
            if described {
                out.extend_from_slice(&proto.to_le_bytes());
                out.extend_from_slice(&first.to_le_bytes());
                out.extend_from_slice(&count.to_le_bytes());
            }
        }
        if described {
            out.extend_from_slice(&(types.len() as u32).to_le_bytes());
            for decl in types {
                out.extend_from_slice(&decl.to_le_bytes());
            }
        }
        out.extend_from_slice(&blob);
        out
    }

    /// Parse a `.fid` byte stream (§5.1). **Never panics**: a truncated or
    /// malformed input is an `Err`, every read bounds-checked. On success the
    /// records are indexed by `full_hash`.
    pub fn load(bytes: &[u8]) -> UnlaceResult<Self> {
        let mut r = Reader::new(bytes);

        let magic = r.take(4)?;
        if magic != FID_DB_MAGIC {
            return Err(UnlaceError::bad_data(format!(
                "fid: bad magic {magic:02x?} (expected {FID_DB_MAGIC:02x?})"
            )));
        }
        let version = r.u32()?;
        if version != FID_DB_VERSION && version != FID_DB_VERSION_NAMES {
            return Err(UnlaceError::bad_data(format!(
                "fid: version {version} != supported {FID_DB_VERSION_NAMES} or {FID_DB_VERSION}"
            )));
        }
        let described = version == FID_DB_VERSION;
        let lang_id = r.string()?;
        let cspec_id = r.string()?;
        let n = r.u32()? as usize;

        // Read the fixed-width record table, deferring name resolution until the
        // blob (which follows the table) is in hand.
        let mut raw: Vec<RawRecord> = Vec::with_capacity(n.min(1 << 20));
        for _ in 0..n {
            raw.push(RawRecord {
                full_hash: r.u64()?,
                specific_hash: r.u64()?,
                code_unit_size: r.i16()?,
                specific_addl: r.u8()?,
                flags: r.u8()?,
                name_off: r.u32()?,
                proto_off: if described { r.u32()? } else { NO_STRING },
                types: if described {
                    (r.u32()? as usize, r.u32()? as usize)
                } else {
                    (0, 0)
                },
            });
        }
        let n_types = if described { r.u32()? as usize } else { 0 };
        let mut types: Vec<u32> = Vec::with_capacity(n_types.min(1 << 20));
        for _ in 0..n_types {
            types.push(r.u32()?);
        }
        // The remainder is the string blob.
        let blob = r.rest();

        let budget = DECODED_TEXT_FLOOR.max(bytes.len().saturating_mul(DECODED_TEXT_PER_BYTE));
        let mut decoded = 0usize;
        let mut text = |off: u32| -> UnlaceResult<String> {
            let text = read_interned_name(blob, off as usize)?;
            decoded += text.len() + std::mem::size_of::<String>();
            if decoded > budget {
                return Err(UnlaceError::bad_data(format!(
                    "fid: the records of a {}-byte file expand past {budget} bytes of text",
                    bytes.len()
                )));
            }
            Ok(text)
        };
        let mut decoded_runs: BTreeMap<(usize, usize), Rc<[String]>> = BTreeMap::new();
        let mut records: Vec<FidRecord> = Vec::with_capacity(raw.len());
        for rr in raw {
            let name = text(rr.name_off)?;
            let prototype = match rr.proto_off {
                NO_STRING => None,
                off => Some(text(off)?),
            };
            let (first, count) = rr.types;
            let run = first
                .checked_add(count)
                .and_then(|end| types.get(first..end))
                .ok_or_else(|| UnlaceError::bad_data("fid: type run past the type table"))?;
            let typedefs = match decoded_runs.get(&(first, count)) {
                Some(shared) => Rc::clone(shared),
                None => {
                    let decoded: Rc<[String]> = run
                        .iter()
                        .map(|off| text(*off))
                        .collect::<UnlaceResult<Vec<String>>>()?
                        .into();
                    decoded_runs.insert((first, count), Rc::clone(&decoded));
                    decoded
                }
            };
            records.push(FidRecord {
                full_hash: rr.full_hash,
                specific_hash: rr.specific_hash,
                code_unit_size: rr.code_unit_size,
                specific_addl: rr.specific_addl,
                flags: rr.flags,
                name,
                prototype,
                typedefs,
            });
        }

        Ok(Self::from_records(lang_id, cspec_id, records))
    }
}

impl FidDatabase for FidDb {
    fn lang_id(&self) -> &str {
        &self.lang_id
    }
    fn cspec_id(&self) -> &str {
        &self.cspec_id
    }
    fn find_by_full_hash(&self, h: u64) -> &[FidRecord] {
        self.by_full_hash
            .get(&h)
            .map(Vec::as_slice)
            .unwrap_or(NO_RECORDS)
    }
    fn record_count(&self) -> usize {
        self.n_records
    }
}

/// The blob offset of `text`, appended on first use; [`NO_STRING`] for none.
fn intern<'a>(
    offsets: &mut HashMap<&'a str, u32>,
    blob: &mut Vec<u8>,
    text: Option<&'a str>,
) -> u32 {
    let Some(text) = text else { return NO_STRING };
    match offsets.entry(text) {
        Entry::Occupied(entry) => *entry.get(),
        Entry::Vacant(entry) => {
            let off = blob.len() as u32;
            entry.insert(off);
            blob.extend_from_slice(text.as_bytes());
            blob.push(0);
            off
        }
    }
}

/// The on-disk record before name resolution.
struct RawRecord {
    full_hash: u64,
    specific_hash: u64,
    code_unit_size: i16,
    specific_addl: u8,
    flags: u8,
    name_off: u32,
    proto_off: u32,
    types: (usize, usize),
}

/// Write a length-prefixed (`u32` LE) UTF-8 string.
fn write_str(out: &mut Vec<u8>, s: &str) {
    out.extend_from_slice(&(s.len() as u32).to_le_bytes());
    out.extend_from_slice(s.as_bytes());
}

/// Read a NUL-terminated UTF-8 name from the blob at `off`. A bad offset or a
/// non-UTF-8 / unterminated name is an error (never a panic).
fn read_interned_name(blob: &[u8], off: usize) -> UnlaceResult<String> {
    if off > blob.len() {
        return Err(UnlaceError::bad_data(format!(
            "fid: name offset {off} past blob end {}",
            blob.len()
        )));
    }
    let tail = &blob[off..];
    let end = tail
        .iter()
        .position(|&b| b == 0)
        .ok_or_else(|| UnlaceError::bad_data("fid: unterminated name in string blob"))?;
    std::str::from_utf8(&tail[..end])
        .map(str::to_owned)
        .map_err(|_| UnlaceError::bad_data("fid: non-UTF-8 name in string blob"))
}

/// A bounds-checked little-endian byte reader. Every accessor returns `Err`
/// rather than panic on a short input — the load path must be robust to a
/// malformed/truncated `.fid`.
struct Reader<'a> {
    buf: &'a [u8],
    pos: usize,
}

impl<'a> Reader<'a> {
    fn new(buf: &'a [u8]) -> Self {
        Self { buf, pos: 0 }
    }

    fn take(&mut self, n: usize) -> UnlaceResult<&'a [u8]> {
        let end = self
            .pos
            .checked_add(n)
            .ok_or_else(|| UnlaceError::bad_data("fid: length overflow"))?;
        if end > self.buf.len() {
            return Err(UnlaceError::bad_data(format!(
                "fid: truncated (need {n} bytes at {}, have {})",
                self.pos,
                self.buf.len()
            )));
        }
        let s = &self.buf[self.pos..end];
        self.pos = end;
        Ok(s)
    }

    fn u8(&mut self) -> UnlaceResult<u8> {
        Ok(self.take(1)?[0])
    }

    fn u32(&mut self) -> UnlaceResult<u32> {
        let b = self.take(4)?;
        Ok(u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    }

    fn u64(&mut self) -> UnlaceResult<u64> {
        let b = self.take(8)?;
        Ok(u64::from_le_bytes([
            b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7],
        ]))
    }

    fn i16(&mut self) -> UnlaceResult<i16> {
        let b = self.take(2)?;
        Ok(i16::from_le_bytes([b[0], b[1]]))
    }

    /// A length-prefixed UTF-8 string (`u32` LE length + bytes).
    fn string(&mut self) -> UnlaceResult<String> {
        let len = self.u32()? as usize;
        let b = self.take(len)?;
        std::str::from_utf8(b)
            .map(str::to_owned)
            .map_err(|_| UnlaceError::bad_data("fid: non-UTF-8 length-prefixed string"))
    }

    /// The unconsumed remainder (the string blob).
    fn rest(&self) -> &'a [u8] {
        &self.buf[self.pos..]
    }
}

#[cfg(test)]
mod tests;
