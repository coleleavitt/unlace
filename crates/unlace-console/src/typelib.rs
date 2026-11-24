//! (unlace `typelib`) The prebuilt type library: a platform C library's
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
//! typelib 1
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

use std::borrow::Cow;
use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::rc::Rc;

use unlace_analysis::pass::{AnalysisOutput, FidMatch, TypeLibFacts};
use unlace_base::types::int4;
use unlace_decomp::architecture::Architecture;
use unlace_decomp::dtype::{Datatype, TypeFactory, TypeField, flags, type_metatype};
use unlace_decomp::fspec::PrototypePieces;
use unlace_decomp::libcnames::LibraryNames;
use unlace_decomp::typelib::TypeLib;

use crate::grammar::{DataOrg, parse_protopieces, parse_type};

/// The format version this reader accepts.
const FORMAT: &str = unlace_decomp::typelib::MAGIC;

/// The libraries built into unlace, by target.
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
        let Ok(shell) = self.types.unlace_declare_record(name, union) else {
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
        let Ok(shell) = self.types.unlace_declare_record(name, union) else {
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

/// The environment variable naming a directory of IDA type libraries (an IDA
/// install's `til` directory, or its `til/pc`) that `auto` reads for a PE.
pub const TIL_DIR_ENV: &str = "UNLACE_TIL_DIR";

/// The Windows releases an IDA type library name may carry, newest first; the
/// empty suffix is the oldest library of a family (`mssdk.til`, Windows XP).
const TIL_RELEASES: &[&str] = &[
    "_win10", "_win81", "_win8", "_win7", "_vista", "_ws03", "_xp", "_2000", "_nt", "",
];

/// The newest library of `family` (`mssdk64`, `ntddk`) in `dir` or `dir/pc`.
fn newest_til(dir: &Path, family: &str) -> Option<PathBuf> {
    TIL_RELEASES.iter().find_map(|release| {
        [dir.to_path_buf(), dir.join("pc")]
            .into_iter()
            .map(|d| d.join(format!("{family}{release}.til")))
            .find(|p| p.is_file())
    })
}

/// The first of `candidates` (paths relative to an IDA `til` directory) found
/// in `dir`, or by its file name alone in `dir` when `dir` is itself the
/// subdirectory (`til/arm`).
fn first_til(dir: &Path, candidates: &[String]) -> Option<PathBuf> {
    candidates.iter().find_map(|name| {
        let rel = Path::new(name);
        [Some(dir.join(rel)), rel.file_name().map(|f| dir.join(f))]
            .into_iter()
            .flatten()
            .find(|p| p.is_file())
    })
}

/// The IDA type libraries IDA itself would load for an image of `target`,
/// found in `dir`. For a PE, with this optional-header `subsystem`: the SDK
/// library for a user-mode image (`mssdk`), the driver kit for a native one
/// (`ntddk`), each with the Native API library (`ntapi`), and `uefi` for an
/// EFI image; the `64` libraries for an x64 image, `arm/uefi64` for an AArch64
/// EFI image. For any other image, the first existing candidate of each of
/// `slots` (`TypeLibFacts::til_slots`: `gnulnx`/`android` for a Linux ELF, the
/// macOS or iOS SDK library for a Mach-O).
fn til_choice(
    dir: &Path,
    target: &str,
    subsystem: Option<u16>,
    slots: &[Vec<String>],
) -> Vec<PathBuf> {
    let wide = match target {
        "windows x86" => "",
        "windows x86_64" => "64",
        "windows aarch64" if matches!(subsystem, Some(10..=13)) => {
            return first_til(dir, &["arm/uefi64.til".to_string()])
                .into_iter()
                .collect();
        }
        _ if target.starts_with("windows ") => return Vec::new(),
        _ => {
            return slots
                .iter()
                .filter_map(|slot| first_til(dir, slot))
                .collect();
        }
    };
    let families: Vec<String> = match subsystem {
        Some(10..=13) => vec![format!("uefi{wide}")],
        Some(1) => vec![format!("ntddk{wide}"), format!("ntapi{wide}")],
        _ => vec![format!("mssdk{wide}"), format!("ntapi{wide}")],
    };
    families
        .iter()
        .filter_map(|family| newest_til(dir, family))
        .collect()
}

/// The text of the library file at `path`. An IDA type library (`.til`) is
/// rendered as library text for `target` itself, its pointers `addr_size`
/// bytes wide when its memory model states no width.
fn file_text(path: &Path, target: &str, addr_size: u8) -> Result<String, String> {
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
        return unlace_analysis::protos::til::to_typelib(&bytes, target, addr_size)
            .map_err(|e| format!("typelib {shown}: {e}"));
    }
    if meta.len() > MAX_LIBRARY_BYTES {
        return Err(format!(
            "typelib {shown}: larger than {} MiB",
            MAX_LIBRARY_BYTES >> 20
        ));
    }
    std::fs::read_to_string(path).map_err(|e| format!("typelib {shown}: {e}"))
}

/// One library a load reads: what to call it in a message, and its text.
struct Source {
    label: String,
    text: Cow<'static, str>,
}

/// The libraries the option selects for an image of `target`, in the order
/// they are asked (the first that declares a name wins), and a note on what
/// `auto` chose or could not read from `til_dir`. `auto` reads the
/// libraries IDA would choose from `til_dir` for the image (`til_choice`),
/// then the built-in library; a list of files reads those files, and an
/// unreadable one is an error.
fn library_sources(
    choice: &TypeLib,
    target: &str,
    subsystem: Option<u16>,
    slots: &[Vec<String>],
    addr_size: u8,
    til_dir: Option<&Path>,
) -> Result<(Vec<Source>, Option<String>), String> {
    let paths = match choice {
        TypeLib::Off => return Ok((Vec::new(), None)),
        TypeLib::Files(paths) => paths,
        TypeLib::Auto => {
            let mut sources = Vec::new();
            let mut said = Vec::new();
            for path in til_dir.map_or_else(Vec::new, |d| til_choice(d, target, subsystem, slots)) {
                match file_text(&path, target, addr_size) {
                    Ok(text) => {
                        said.push(format!("read {}", path.display()));
                        sources.push(Source {
                            label: path.display().to_string(),
                            text: text.into(),
                        });
                    }
                    Err(e) => said.push(e),
                }
            }
            if let Some((_, text)) = BUILTIN.iter().find(|(t, _)| *t == target) {
                sources.push(Source {
                    label: "auto".into(),
                    text: (*text).into(),
                });
            }
            let note = (!said.is_empty()).then(|| format!("{TIL_DIR_ENV}: {}", said.join("; ")));
            return Ok((sources, note));
        }
    };
    let sources = paths
        .iter()
        .map(|path| {
            Ok(Source {
                label: path.display().to_string(),
                text: file_text(path, target, addr_size)?.into(),
            })
        })
        .collect::<Result<Vec<_>, String>>()?;
    Ok((sources, None))
}

/// The type libraries the FLIRT signatures autoload (`TypeLibFacts::flirt_tils`),
/// each read beside the signature that names it or else from `til_dir`, after the
/// libraries the option chose. Nothing is read under `typelib off`. A library that
/// is not found or cannot be read is named in the returned note.
fn autoload_sources(
    facts: &TypeLibFacts,
    typelib: &TypeLib,
    addr_size: u8,
    til_dir: Option<&Path>,
) -> (Vec<Source>, Option<String>) {
    if matches!(typelib, TypeLib::Off) {
        return (Vec::new(), None);
    }
    let mut sources = Vec::new();
    let mut said = Vec::new();
    for (sig, name) in &facts.flirt_tils {
        let file = format!("{name}.til");
        let beside = sig.parent().map(|d| d.join(&file)).filter(|p| p.is_file());
        let found =
            beside.or_else(|| til_dir.and_then(|d| first_til(d, std::slice::from_ref(&file))));
        match found {
            Some(path) => match file_text(&path, facts.target, addr_size) {
                Ok(text) => {
                    said.push(format!("autoloaded {}", path.display()));
                    sources.push(Source {
                        label: path.display().to_string(),
                        text: text.into(),
                    });
                }
                Err(e) => said.push(e),
            },
            None => said.push(format!(
                "{file} (autoloaded by {}) not found",
                sig.display()
            )),
        }
    }
    (sources, (!said.is_empty()).then(|| said.join("; ")))
}

/// `true` when `path` opens with the IDA type-library header.
fn is_til_file(path: &Path) -> bool {
    use std::io::Read;
    let mut head = [0u8; 6];
    std::fs::File::open(path)
        .and_then(|mut f| f.read_exact(&mut head))
        .is_ok()
        && unlace_analysis::protos::til::is_til(&head)
}

/// The function names FLIRT, FID or a PDB gave, one per address: a name the
/// image's own metadata states (`by_signature` false) when every such name at
/// the address agrees, else a signature name when every signature name agrees.
fn names_beyond_imports(matches: &[FidMatch]) -> Vec<(u64, String)> {
    let mut by_addr: BTreeMap<u64, (Vec<&str>, Vec<&str>)> = BTreeMap::new();
    for m in matches {
        let (metadata, signature) = by_addr.entry(m.addr).or_default();
        if m.by_signature {
            signature.push(&m.name);
        } else {
            metadata.push(&m.name);
        }
    }
    by_addr
        .into_iter()
        .filter_map(|(addr, (metadata, signature))| {
            let names = if metadata.is_empty() {
                signature
            } else {
                metadata
            };
            let first = *names.first()?;
            names
                .iter()
                .all(|n| *n == first)
                .then(|| (addr, first.to_string()))
        })
        .collect()
}

/// Add the libraries' prototype for each import of `facts`, and for each function
/// FLIRT, FID or a PDB named, that no earlier source in `merged` declared. On a
/// Windows image whose libraries were chosen (a file list, or `UNLACE_TIL_DIR`)
/// a library also replaces a `win32sigs` declaration, which spells handles and
/// records `void *`, keeping that entry's `libcnames` names; the built-in
/// library alone leaves `win32sigs` as it is. Returns how many functions took
/// one, and a note on the libraries `auto` chose from `UNLACE_TIL_DIR`.
pub fn seed(
    arch: &Architecture,
    facts: &TypeLibFacts,
    merged: &mut AnalysisOutput,
) -> Result<(usize, Option<String>), String> {
    let typelib = arch.unlace_options.get::<unlace_decomp::typelib::TypeLib>();
    let (addr_size, word_size) = arch.data_org();
    let til_dir = std::env::var_os(TIL_DIR_ENV)
        .filter(|d| !d.is_empty())
        .map(PathBuf::from);
    let (mut sources, note) = library_sources(
        &typelib,
        facts.target,
        facts.subsystem,
        &facts.til_slots,
        u8::try_from(addr_size).unwrap_or(8),
        til_dir.as_deref(),
    )?;
    let (autoloaded, autonote) = autoload_sources(
        facts,
        &typelib,
        u8::try_from(addr_size).unwrap_or(8),
        til_dir.as_deref(),
    );
    sources.extend(autoloaded);
    let note = match (note, autonote) {
        (Some(a), Some(b)) => Some(format!("{a}; {b}")),
        (a, b) => a.or(b),
    };
    if sources.is_empty() {
        return Ok((0, note));
    }
    let mut libs = Vec::with_capacity(sources.len());
    for source in &sources {
        let lib =
            Library::parse(&source.text).map_err(|e| format!("typelib {}: {e}", source.label))?;
        if lib.target != facts.target {
            return Err(format!(
                "typelib {}: the library is for {}, the image is {}",
                source.label, lib.target, facts.target
            ));
        }
        libs.push(lib);
    }
    let org = DataOrg {
        addr_size,
        word_size,
    };
    let mut readers: Vec<Reader<'_, '_>> = libs
        .iter()
        .map(|lib| Reader::new(lib, facts.glibc, arch.types(), org))
        .collect();
    let mut prototype = |name: &str| readers.iter_mut().find_map(|r| r.prototype(name));
    let chosen_windows =
        facts.target.starts_with("windows ") && sources.iter().any(|s| s.label != "auto");
    let replaceable =
        |name: &str| chosen_windows && unlace_analysis::protos::win32sigs::declares(name);
    let beyond = names_beyond_imports(&merged.fid_names);
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
            .or_insert_with(|| prototype(name.as_str()));
        if let Some(pieces) = pieces {
            by_address.push((*addr, pieces.clone()));
        }
    }
    let typed: BTreeSet<u64> = merged
        .prototypes_at
        .iter()
        .map(|(addr, _)| *addr)
        .chain(facts.imports.iter().map(|(_, addr)| *addr))
        .collect();
    let mut named_beyond = 0;
    for (addr, name) in &beyond {
        if typed.contains(addr) || declared.contains(name.as_str()) {
            continue;
        }
        if let Some(pieces) = prototype(name.as_str()) {
            by_address.push((*addr, pieces));
            named_beyond += 1;
        }
    }
    drop(declared);
    let replaced: BTreeSet<&str> = read
        .iter()
        .filter(|(name, pieces)| pieces.is_some() && replaceable(name))
        .map(|(name, _)| *name)
        .collect();
    if !replaced.is_empty() {
        let carried: BTreeMap<String, &'static LibraryNames> = merged
            .prototypes_at
            .iter()
            .filter(|(_, pieces)| replaced.contains(pieces.name.as_str()))
            .filter_map(|(_, pieces)| Some((pieces.name.clone(), pieces.unlace_library_names?)))
            .collect();
        let carry = |pieces: &mut PrototypePieces| {
            if pieces.unlace_library_names.is_none()
                && let Some(&names) = carried.get(&pieces.name)
                && names.params.len() == pieces.intypes.len()
            {
                pieces.unlace_library_names = Some(names);
            }
        };
        read.values_mut().flatten().for_each(&carry);
        by_address.iter_mut().for_each(|(_, pieces)| carry(pieces));
        merged
            .prototypes
            .retain(|pieces| !replaced.contains(pieces.name.as_str()));
        merged
            .prototypes_at
            .retain(|(_, pieces)| !replaced.contains(pieces.name.as_str()));
    }
    let mut seeded = named_beyond;
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
    Ok((seeded, note))
}

#[cfg(test)]
mod tests;
