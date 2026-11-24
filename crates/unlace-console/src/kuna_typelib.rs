//! (kuna `typelib`) The prebuilt type library: a platform C library's
//! declarations, read for the functions an image imports.
//!
//! Three libraries are built in: the libc of an x86-64 Linux ELF (from musl,
//! `scripts/typelib/gen_musl.py`) and the Windows API of an x86 and an x64 PE
//! (from IDA's Windows SDK type libraries, `scripts/typelib/gen_windows.py`).
//!
//! A library is one text file. Its first three lines name the format, the
//! target and the source the entries were generated from; every entry after
//! them is one function, one typedef or one record:
//!
//! ```text
//! kuna-typelib 1
//! target linux x86_64
//! source musl 1.2.6
//! T nfds_t *<TAB>unsigned long
//! S pollfd * 8 4
//!  0 fd<TAB>int
//!  4 events<TAB>short
//!  6 revents<TAB>short
//! F poll *<TAB>int poll(struct pollfd *, nfds_t, int)
//! ```
//!
//! A type is spelled in C and read by the grammar `--types` and `--assert`
//! use. A record (`S`, or `U` for a union) carries its size and alignment and
//! one indented line per member with the member's byte offset, so the layout is
//! the one the platform's compiler measured and is never packed again here. A
//! member the library leaves out is a hole.
//!
//! The third field of an entry says which C libraries of the target it is true
//! of: `*` for all of them, `m` for the source library alone. `m=<integer
//! type>` and `m=<size>,<alignment>` say what the other C library holds under
//! the same type name, an integer or a record of that width, so a prototype
//! that only mentions the type can still be offered with the right width.
//!
//! Nothing is interned until it is asked for. [`seed`] asks for the prototype
//! of each import no earlier source declared, and reading one prototype interns
//! the types it names and, through them, the types those name. A name the type
//! factory already holds is used as it is and never redefined, so a type from
//! the image's own debug information or from `libctypes` wins.

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use unlace_analysis::pass::{AnalysisOutput, TypeLibFacts};
use unlace_base::types::int4;
use unlace_decomp::architecture::Architecture;
use unlace_decomp::dtype::{Datatype, TypeFactory, TypeField, flags, type_metatype};
use unlace_decomp::fspec::PrototypePieces;
use unlace_decomp::kuna_typelib::TypeLib;

use crate::grammar::{DataOrg, parse_protopieces, parse_type};

/// The format version this reader accepts.
const FORMAT: &str = unlace_decomp::kuna_typelib::MAGIC;

/// The libraries built into kuna, by target.
const BUILTIN: &[(&str, &str)] = &[
    ("linux x86_64", include_str!("../typelib/linux-x86_64.ktl")),
    ("windows x86", include_str!("../typelib/windows-x86.ktl")),
    (
        "windows x86_64",
        include_str!("../typelib/windows-x86_64.ktl"),
    ),
];

/// Largest library file `typelib <path>` reads.
const MAX_LIBRARY_BYTES: u64 = 16 << 20;
/// Largest IDA type library (`.til`) `typelib <path>` reads.
const MAX_TIL_BYTES: u64 = 64 << 20;
/// Longest line of a library.
const MAX_LINE_BYTES: usize = 4096;
/// Largest record a library may declare.
const MAX_RECORD_BYTES: int4 = 1 << 24;
/// Widest floating-point value passed or returned by value that a prototype may
/// carry: a wider one (`long double`) is not placed by the compiler models.
const MAX_FLOAT_BYTES: int4 = 8;
/// How deep one type may reach through the types it names.
const MAX_DEPTH: usize = 64;

/// What an image linked against another C library of the target is offered
/// for an entry.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Other<'a> {
    /// The entry itself: both C libraries agree on it.
    Same,
    /// Nothing: the other C library declares it differently or not at all.
    Nothing,
    /// An integer of this C type under the same name.
    Integer(&'a str),
    /// A record of this size and alignment under the same name, members unknown.
    Record(int4, int4),
}

#[derive(Debug, PartialEq, Eq)]
struct Member<'a> {
    offset: int4,
    name: &'a str,
    ty: &'a str,
}

#[derive(Debug, PartialEq, Eq)]
enum Decl<'a> {
    Typedef(&'a str),
    Record {
        union: bool,
        size: int4,
        align: int4,
        members: Vec<Member<'a>>,
    },
}

/// A parsed library, borrowing its text.
#[derive(Debug)]
pub struct Library<'a> {
    /// The target the entries are true of (`linux x86_64`).
    pub target: &'a str,
    /// What the entries were generated from (`musl 1.2.6`).
    pub source: &'a str,
    types: BTreeMap<&'a str, (Other<'a>, Decl<'a>)>,
    functions: BTreeMap<&'a str, (Other<'a>, &'a str)>,
}

fn other(flag: &str) -> Option<Other<'_>> {
    match flag {
        "*" => Some(Other::Same),
        "m" => Some(Other::Nothing),
        _ => {
            let held = flag.strip_prefix("m=")?;
            match held.split_once(',') {
                Some((size, align)) => Some(Other::Record(bounded(size)?, bounded(align)?)),
                None => Some(Other::Integer(held)),
            }
        }
    }
}

/// A size, alignment or offset a record may carry.
fn bounded(text: &str) -> Option<int4> {
    text.parse::<int4>()
        .ok()
        .filter(|v| (0..=MAX_RECORD_BYTES).contains(v))
}

impl<'a> Library<'a> {
    /// Parse a library. An error names the line it is about.
    pub fn parse(text: &'a str) -> Result<Library<'a>, String> {
        let mut lines = text.lines().enumerate().map(|(n, line)| (n + 1, line));
        let mut header = |key: &str| match lines.next() {
            Some((_, line)) if line.len() <= MAX_LINE_BYTES => line
                .strip_prefix(key)
                .ok_or_else(|| format!("expected a `{}` line, got {line:?}", key.trim())),
            _ => Err(format!("expected a `{}` line", key.trim())),
        };
        if !header(FORMAT.trim_end())?.is_empty() {
            return Err(format!("not a `{}` library", FORMAT.trim_end()));
        }
        let target = header("target ")?;
        let source = header("source ")?;
        let mut lib = Library {
            target,
            source,
            types: BTreeMap::new(),
            functions: BTreeMap::new(),
        };
        let mut open: Option<&'a str> = None;
        for (n, line) in lines {
            let bad = |what: &str| format!("line {n}: {what}");
            if line.len() > MAX_LINE_BYTES {
                return Err(bad("longer than a library line may be"));
            }
            if line.is_empty() {
                continue;
            }
            if let Some(member) = line.strip_prefix(' ') {
                let record = open.ok_or_else(|| bad("a member outside a record"))?;
                let (head, ty) = member
                    .split_once('\t')
                    .ok_or_else(|| bad("a member without a type"))?;
                let (offset, name) = head
                    .split_once(' ')
                    .ok_or_else(|| bad("a member without a name"))?;
                let offset = bounded(offset).ok_or_else(|| bad("a member offset out of range"))?;
                if let Some((_, Decl::Record { members, .. })) = lib.types.get_mut(record) {
                    members.push(Member { offset, name, ty });
                }
                continue;
            }
            open = None;
            let (head, text) = line.split_once('\t').unwrap_or((line, ""));
            let mut words = head.splitn(3, ' ');
            let (kind, name, rest) = match (words.next(), words.next(), words.next()) {
                (Some(kind), Some(name), Some(rest)) if !name.is_empty() => (kind, name, rest),
                _ => return Err(bad("expected `<kind> <name> <libraries>`")),
            };
            match kind {
                "T" | "F" => {
                    let held = other(rest).ok_or_else(|| bad("unknown library field"))?;
                    if text.is_empty() {
                        return Err(bad("an entry without a declaration"));
                    }
                    if kind == "F" {
                        lib.functions.entry(name).or_insert((held, text));
                    } else {
                        lib.types.entry(name).or_insert((held, Decl::Typedef(text)));
                    }
                }
                "S" | "U" => {
                    let mut fields = rest.split(' ');
                    let held = fields
                        .next()
                        .and_then(other)
                        .ok_or_else(|| bad("unknown library field"))?;
                    let size = fields
                        .next()
                        .and_then(bounded)
                        .ok_or_else(|| bad("a record size out of range"))?;
                    let align = fields
                        .next()
                        .and_then(bounded)
                        .ok_or_else(|| bad("a record alignment out of range"))?;
                    let decl = Decl::Record {
                        union: kind == "U",
                        size,
                        align,
                        members: Vec::new(),
                    };
                    if !lib.types.contains_key(name) {
                        lib.types.insert(name, (held, decl));
                        open = Some(name);
                    }
                }
                _ => return Err(bad("unknown entry kind")),
            }
        }
        Ok(lib)
    }

    /// How many functions and types the library declares.
    pub fn counts(&self) -> (usize, usize) {
        (self.functions.len(), self.types.len())
    }
}

/// Reads entries of one library into one type factory.
pub struct Reader<'l, 'a> {
    lib: &'l Library<'a>,
    /// The image links against the target's other C library.
    other: bool,
    types: &'l dyn TypeFactory,
    org: DataOrg,
    /// Every library type asked for so far, and whether the factory holds it.
    asked: BTreeMap<&'a str, bool>,
}

fn words(text: &str) -> impl Iterator<Item = &str> {
    text.split(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
        .filter(|w| w.starts_with(|c: char| c.is_ascii_alphabetic() || c == '_'))
}

impl<'l, 'a> Reader<'l, 'a> {
    pub fn new(
        lib: &'l Library<'a>,
        other: bool,
        types: &'l dyn TypeFactory,
        org: DataOrg,
    ) -> Self {
        Reader {
            lib,
            other,
            types,
            org,
            asked: BTreeMap::new(),
        }
    }

    /// The prototype the library declares for `name`, with every type it
    /// names interned. `None` when the library has none for this C library, a
    /// type it names cannot be read, or it passes a `long double` by value.
    pub fn prototype(&mut self, name: &str) -> Option<PrototypePieces> {
        let (held, text) = *self.lib.functions.get(name)?;
        if (self.other && held != Other::Same) || !self.ready(text, Some(name), 0) {
            return None;
        }
        let pieces = parse_protopieces(&format!("{text};"), self.types, self.org).ok()?;
        let unmodeled = pieces.outtype.iter().chain(&pieces.intypes).any(|ty| {
            ty.get_metatype() == type_metatype::TYPE_FLOAT && ty.get_size() > MAX_FLOAT_BYTES
        });
        (pieces.name == name && !unmodeled).then_some(pieces)
    }

    /// Intern every library type `text` names. A `struct` or `union` tag
    /// nobody defines becomes a record of unknown members. `declared` is the
    /// function `text` declares, whose own name is not a type even when a
    /// record shares it (`stat`, `sigaction`).
    fn ready(&mut self, text: &'a str, declared: Option<&str>, depth: usize) -> bool {
        let mut tagged = false;
        for word in words(text) {
            let tag = std::mem::replace(&mut tagged, matches!(word, "struct" | "union"));
            if !tag && declared == Some(word) {
                continue;
            }
            if let Some((&name, _)) = self.lib.types.get_key_value(word) {
                if !self.define(name, depth) {
                    return false;
                }
            } else if tag && !self.held(word) && !self.shell(word, false, 1, 1) {
                return false;
            }
        }
        true
    }

    fn held(&self, name: &str) -> bool {
        matches!(self.types.find_by_name(name), Ok(Some(_)))
    }

    /// A named record of a known width whose members are not.
    fn shell(&self, name: &str, union: bool, size: int4, align: int4) -> bool {
        let Ok(shell) = self.types.kuna_declare_record(name, union) else {
            return false;
        };
        let done = if union {
            self.types
                .set_fields_union_raw(&shell, Vec::new(), size.max(1), align.max(1))
        } else {
            let incomplete = flags::type_incomplete;
            self.types.set_fields_struct_raw(
                &shell,
                Vec::new(),
                Vec::new(),
                size.max(1),
                align.max(1),
                incomplete,
            )
        };
        done.is_ok()
    }

    fn define(&mut self, name: &'a str, depth: usize) -> bool {
        if let Some(&known) = self.asked.get(name) {
            return known;
        }
        let Some((held, decl)) = self.lib.types.get(name) else {
            return false;
        };
        let done = if depth >= MAX_DEPTH {
            false
        } else if self.held(name) {
            true
        } else {
            match (if self.other { *held } else { Other::Same }, decl) {
                (Other::Nothing, _) => false,
                (Other::Integer(text), _) => self.typedef(name, text, depth),
                (Other::Record(size, align), decl) => self.shell(
                    name,
                    matches!(decl, Decl::Record { union: true, .. }),
                    size,
                    align,
                ),
                (Other::Same, Decl::Typedef(text)) => self.typedef(name, text, depth),
                (
                    Other::Same,
                    Decl::Record {
                        union,
                        size,
                        align,
                        members,
                    },
                ) => self.record(name, *union, *size, *align, members, depth),
            }
        };
        self.asked.insert(name, done);
        done
    }

    fn typedef(&mut self, name: &'a str, text: &'a str, depth: usize) -> bool {
        self.asked.insert(name, false);
        if !self.ready(text, None, depth + 1) {
            return false;
        }
        let Ok((ty, _)) = parse_type(text, self.types, self.org) else {
            return false;
        };
        self.types.get_typedef(&ty, name, 0, 0).is_ok()
    }

    /// Intern a record at the library's layout. A member that cannot be read,
    /// or that does not fit where the library puts it, is left a hole.
    fn record(
        &mut self,
        name: &'a str,
        union: bool,
        size: int4,
        align: int4,
        members: &'l [Member<'a>],
        depth: usize,
    ) -> bool {
        let Ok(shell) = self.types.kuna_declare_record(name, union) else {
            return false;
        };
        self.asked.insert(name, true);
        let mut fields: Vec<TypeField> = Vec::new();
        let mut end = 0;
        for member in members {
            let Some(ty) = self.member(member, depth) else {
                continue;
            };
            let Some(stop) = member
                .offset
                .checked_add(ty.get_size())
                .filter(|stop| *stop <= size)
            else {
                continue;
            };
            if union && member.offset == 0 {
                let ident = int4::try_from(fields.len()).unwrap_or(int4::MAX);
                fields.push(TypeField::new(ident, 0, member.name, ty));
            } else if !union && member.offset >= end {
                fields.push(TypeField::new(
                    member.offset,
                    member.offset,
                    member.name,
                    ty,
                ));
                end = stop;
            }
        }
        if fields.is_empty() {
            return self.shell(name, union, size, align);
        }
        let done = if union {
            self.types
                .set_fields_union_raw(&shell, fields, size, align.max(1))
        } else {
            self.types
                .set_fields_struct_raw(&shell, fields, Vec::new(), size, align.max(1), 0)
        };
        done.is_ok() || self.shell(name, union, size, align)
    }

    fn member(&mut self, member: &Member<'a>, depth: usize) -> Option<Rc<Datatype>> {
        if !self.ready(member.ty, None, depth + 1) {
            return None;
        }
        let (ty, _) = parse_type(member.ty, self.types, self.org).ok()?;
        let mut element = Rc::clone(&ty);
        while let Some(inner) = element.get_array_base() {
            element = inner;
        }
        (ty.get_size() > 0 && !element.is_incomplete()).then_some(ty)
    }
}

/// The library text the option selects for `target`: the built-in one, or the
/// file's when it names the same target. An IDA type library (`.til`) is
/// rendered as library text for `target` itself, its pointers `addr_size`
/// bytes wide when its memory model states no width.
fn library_text(
    choice: &TypeLib,
    target: &str,
    addr_size: u8,
) -> Result<Option<std::borrow::Cow<'static, str>>, String> {
    let builtin = || {
        BUILTIN
            .iter()
            .find(|(t, _)| *t == target)
            .map(|(_, text)| (*text).into())
    };
    let path = match choice {
        TypeLib::Off => return Ok(None),
        TypeLib::Auto => return Ok(builtin()),
        TypeLib::File(path) => path,
    };
    let shown = path.display();
    let meta = std::fs::metadata(path).map_err(|e| format!("typelib {shown}: {e}"))?;
    if is_til_file(path) {
        if meta.len() > MAX_TIL_BYTES {
            return Err(format!(
                "typelib {shown}: larger than {} MiB",
                MAX_TIL_BYTES >> 20
            ));
        }
        let bytes = std::fs::read(path).map_err(|e| format!("typelib {shown}: {e}"))?;
        let text = unlace_analysis::protos::kuna_til::to_typelib(&bytes, target, addr_size)
            .map_err(|e| format!("typelib {shown}: {e}"))?;
        return Ok(Some(text.into()));
    }
    if meta.len() > MAX_LIBRARY_BYTES {
        return Err(format!(
            "typelib {shown}: larger than {} MiB",
            MAX_LIBRARY_BYTES >> 20
        ));
    }
    let text = std::fs::read_to_string(path).map_err(|e| format!("typelib {shown}: {e}"))?;
    Ok(Some(text.into()))
}

/// `true` when `path` opens with the IDA type-library header.
fn is_til_file(path: &std::path::Path) -> bool {
    use std::io::Read;
    let mut head = [0u8; 6];
    std::fs::File::open(path)
        .and_then(|mut f| f.read_exact(&mut head))
        .is_ok()
        && unlace_analysis::protos::kuna_til::is_til(&head)
}

/// Add the library's prototype for each import of `facts` that no earlier
/// source in `merged` declared. On a Windows image the library also replaces
/// a `win32sigs` declaration, which spells handles and records `void *`.
/// Returns how many functions took one.
pub fn seed(
    arch: &Architecture,
    facts: &TypeLibFacts,
    merged: &mut AnalysisOutput,
) -> Result<usize, String> {
    let typelib = arch
        .kuna_options
        .get::<unlace_decomp::kuna_typelib::TypeLib>();
    let (addr_size, word_size) = arch.data_org();
    let Some(text) = library_text(&typelib, facts.target, u8::try_from(addr_size).unwrap_or(8))?
    else {
        return Ok(0);
    };
    let lib = Library::parse(&text).map_err(|e| format!("typelib {}: {e}", typelib.as_str()))?;
    if lib.target != facts.target {
        return Err(format!(
            "typelib {}: the library is for {}, the image is {}",
            typelib.as_str(),
            lib.target,
            facts.target
        ));
    }
    let org = DataOrg {
        addr_size,
        word_size,
    };
    let mut reader = Reader::new(&lib, facts.glibc, arch.types(), org);
    let windows = facts.target.starts_with("windows ");
    let replaceable =
        |name: &str| windows && unlace_analysis::protos::kuna_win32sigs::declares(name);
    let declared: BTreeSet<&str> = merged
        .prototypes
        .iter()
        .chain(merged.prototypes_at.iter().map(|(_, pieces)| pieces))
        .map(|pieces| pieces.name.as_str())
        .filter(|name| !replaceable(name))
        .collect();
    let mut read: BTreeMap<&str, Option<PrototypePieces>> = BTreeMap::new();
    let mut by_address = Vec::new();
    for (name, addr) in &facts.imports {
        if declared.contains(name.as_str()) {
            continue;
        }
        let pieces = read
            .entry(name.as_str())
            .or_insert_with(|| reader.prototype(name));
        if let Some(pieces) = pieces {
            by_address.push((*addr, pieces.clone()));
        }
    }
    drop(declared);
    let replaced: BTreeSet<&str> = read
        .iter()
        .filter(|(name, pieces)| pieces.is_some() && replaceable(name))
        .map(|(name, _)| *name)
        .collect();
    if !replaced.is_empty() {
        merged
            .prototypes
            .retain(|pieces| !replaced.contains(pieces.name.as_str()));
        merged
            .prototypes_at
            .retain(|(_, pieces)| !replaced.contains(pieces.name.as_str()));
    }
    let mut seeded = 0;
    for (name, pieces) in read {
        let Some(pieces) = pieces else { continue };
        seeded += 1;
        if facts
            .named
            .binary_search_by(|n| n.as_str().cmp(name))
            .is_ok()
        {
            merged.prototypes.push(pieces);
        }
    }
    merged.prototypes_at.extend(by_address);
    Ok(seeded)
}

#[cfg(test)]
mod tests;
