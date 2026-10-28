//! Building `.sig` files: the job of IDA's `sigmake`.
//!
//! A [`LibraryFunction`] is one function as a library ships it: its bytes,
//! with the positions the linker rewrites marked variant, its public names
//! and the names its operands refer to. [`make_sig`] turns a set of them
//! into a signature file:
//!
//! 1. Each function becomes a module keyed by its first `PATTERN_SIZE`
//!    bytes (padded with variant bytes past its end), the length of the
//!    fixed run after them (at most 255 bytes) and that run's CRC16.
//!    Functions with fewer than [`SigSpec::min_fixed_bytes`] fixed bytes
//!    in pattern and CRC range would name any function that happens to
//!    start the same way. They are kept only when they call a named
//!    function, with that name as the module's referenced name, so they
//!    match only where the callee is known (short wrappers such as
//!    `strftime`, which tail-calls `__strftime_l`).
//! 2. Modules with the same key but different names collide. A collision
//!    is resolved by a tail byte (a fixed byte past the CRC range where
//!    every module differs) or else by a referenced name (an operand at
//!    the same offset that refers to a different name in each module).
//!    Unresolved collisions are dropped, as `sigmake` does when the
//!    exclusion file says nothing about them.
//! 3. The keys are arranged into the prefix tree and encoded ([`tree`]).

mod objects;
mod tree;

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ArchId;

use super::{ModuleRef, NameFlags, PublicName, SigArch, SigFeatures, SigHeader, TailByte};
use crate::FlirtError;

pub use objects::LibraryObjects;

/// Length of the leading pattern written into the tree.
pub const PATTERN_SIZE: usize = 32;

/// The CRC range is stored in one byte.
const MAX_CRC_LEN: usize = 0xFF;

/// Modules with fewer fixed bytes in pattern and CRC range also check up
/// to [`EXTRA_TAIL_BYTES`] fixed bytes from the rest of the function.
const WELL_FIXED_BYTES: usize = 32;
const EXTRA_TAIL_BYTES: usize = 8;

/// A function below [`SigSpec::min_fixed_bytes`] is kept when it has at
/// least this many fixed bytes and calls a named function: the module
/// then only matches where that callee is already known.
const MIN_FIXED_BYTES_WITH_REFERENCE: usize = 4;

/// One function of a library.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LibraryFunction {
    /// The function's bytes; `None` marks a variant byte.
    pub bytes: Vec<Option<u8>>,
    /// Names defined at the function start, preferred name first.
    pub names: Vec<LibraryName>,
    /// Names that operands refer to, by offset of the operand field.
    pub references: Vec<ModuleRef>,
}

/// A name a library defines for a function.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LibraryName {
    pub name: String,
    /// File-local (`static`) symbol.
    pub local: bool,
}

/// What the signature file says about the library.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SigSpec {
    pub library_name: String,
    pub arch: SigArch,
    pub file_types: u32,
    pub os_types: u16,
    pub app_types: u16,
    /// Minimum number of fixed bytes in the pattern and CRC range.
    pub min_fixed_bytes: usize,
}

impl SigSpec {
    /// `FILE_ELF` in the SDK's `libfuncs.hpp`.
    pub const FILE_ELF: u32 = 0x0004_0000;
    pub const FILE_PE: u32 = 0x0000_0800;
    pub const FILE_MACHO: u32 = 0x0200_0000;
    pub const OSTYPE_WIN: u16 = 0x0002;
    pub const OSTYPE_UNIX: u16 = 0x0010;
    /// Console, graphic, program, library and both thread models: every
    /// application kind the code can end up in.
    pub const APPT_ANY_KIND: u16 = 0x006F;
    pub const DEFAULT_MIN_FIXED_BYTES: usize = 12;

    /// A spec for code of `arch` in files of `file_types` on `os_types`.
    pub fn new(
        library_name: impl Into<String>,
        arch: ArchId,
        file_types: u32,
        os_types: u16,
    ) -> Option<Self> {
        let (sig_arch, bitness) = match arch {
            ArchId::X86_64 => (SigArch::X86, SigHeader::APPT_64BIT),
            ArchId::X86 => (SigArch::X86, SigHeader::APPT_32BIT),
            ArchId::AArch64 => (SigArch::ARM, SigHeader::APPT_64BIT),
            ArchId::Arm => (SigArch::ARM, SigHeader::APPT_32BIT),
            _ => return None,
        };
        Some(SigSpec {
            library_name: library_name.into(),
            arch: sig_arch,
            file_types,
            os_types,
            app_types: Self::APPT_ANY_KIND | bitness,
            min_fixed_bytes: Self::DEFAULT_MIN_FIXED_BYTES,
        })
    }
}

/// What [`make_sig`] did with its input.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct MakeReport {
    /// Modules written to the file.
    pub modules: usize,
    /// Functions skipped for having too few fixed bytes.
    pub too_short: usize,
    /// Functions dropped because another function with the same name
    /// and key was kept.
    pub duplicates: usize,
    /// Collisions told apart by a tail byte or a referenced name.
    pub resolved_collisions: usize,
    /// Names of the colliding functions that could not be told apart.
    pub dropped_collisions: Vec<Vec<String>>,
}

/// Build a `.sig` file from `functions`.
pub fn make_sig(
    spec: &SigSpec,
    functions: &[LibraryFunction],
) -> Result<(Vec<u8>, MakeReport), FlirtError> {
    if spec.library_name.len() > usize::from(u8::MAX) {
        return Err(FlirtError::Sig(format!(
            "library name is longer than 255 bytes: {}",
            spec.library_name
        )));
    }
    let mut report = MakeReport::default();
    let mut groups: BTreeMap<Key, Vec<Candidate<'_>>> = BTreeMap::new();
    for function in functions {
        if function.names.is_empty() {
            continue;
        }
        if let Some(name) = function.names.iter().find(|n| !valid_name(&n.name)) {
            return Err(FlirtError::Sig(format!(
                "unencodable public name {:?}",
                name.name
            )));
        }
        let (key, tail) = Key::of(&function.bytes);
        let fixed_bytes = key.fixed_bytes();
        let short = fixed_bytes < spec.min_fixed_bytes;
        if key.pattern_fixed() == 0
            || (short
                && (key.fixed_bytes() < MIN_FIXED_BYTES_WITH_REFERENCE
                    || function.references.is_empty()))
        {
            report.too_short += 1;
            continue;
        }
        groups.entry(key).or_default().push(Candidate {
            function,
            tail,
            fixed_bytes,
            short,
        });
    }

    let mut leaves: BTreeMap<Vec<Option<u8>>, Vec<LeafModule>> = BTreeMap::new();
    for (key, candidates) in groups {
        let modules = resolve(candidates, &mut report);
        if modules.is_empty() {
            continue;
        }
        report.modules += modules.len();
        leaves
            .entry(key.pattern)
            .or_default()
            .extend(modules.into_iter().map(|module| LeafModule {
                crc_len: key.crc_len,
                crc16: key.crc16,
                module,
            }));
    }

    if leaves.is_empty() {
        return Err(FlirtError::Sig(
            "no function has enough fixed bytes for a signature".into(),
        ));
    }
    let header = SigHeader {
        version: 10,
        arch: spec.arch,
        file_types: spec.file_types,
        os_types: spec.os_types,
        app_types: spec.app_types,
        features: SigFeatures::COMPRESSED,
        n_modules: u32::try_from(report.modules)
            .map_err(|_| FlirtError::Sig("too many modules".into()))?,
        ctype_crc: 0,
        ctype_name: String::new(),
        ctype_crc_alt: 0,
        ctype_crc_3v: 0,
        pattern_size: PATTERN_SIZE as u16,
        library_name: spec.library_name.clone(),
    };
    let bytes = tree::encode(&header, &leaves)?;
    Ok((bytes, report))
}

/// Public names end at the first byte below 0x20 and may not start with
/// the `?` placeholder.
fn valid_name(name: &str) -> bool {
    !name.is_empty() && name != "?" && name.bytes().all(|b| b >= 0x20)
}

/// Where a module sits in the tree: pattern, then CRC group.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
struct Key {
    pattern: Vec<Option<u8>>,
    crc_len: u8,
    crc16: u16,
}

impl Key {
    /// The key of `bytes` and the bytes past its CRC range.
    fn of(bytes: &[Option<u8>]) -> (Self, &[Option<u8>]) {
        let mut pattern: Vec<Option<u8>> = bytes.iter().take(PATTERN_SIZE).copied().collect();
        pattern.resize(PATTERN_SIZE, None);
        let after = bytes.get(PATTERN_SIZE..).unwrap_or(&[]);
        let crc_bytes: Vec<u8> = after
            .iter()
            .take(MAX_CRC_LEN)
            .map_while(|byte| *byte)
            .collect();
        let crc_len = crc_bytes.len();
        let key = Key {
            pattern,
            crc_len: crc_len as u8,
            crc16: super::crc16(&crc_bytes),
        };
        (key, &after[crc_len..])
    }

    fn pattern_fixed(&self) -> usize {
        self.pattern.iter().filter(|byte| byte.is_some()).count()
    }

    fn fixed_bytes(&self) -> usize {
        self.pattern_fixed() + usize::from(self.crc_len)
    }
}

struct Candidate<'f> {
    function: &'f LibraryFunction,
    /// Bytes past the CRC range.
    tail: &'f [Option<u8>],
    /// Fixed bytes in pattern and CRC range.
    fixed_bytes: usize,
    /// Too few fixed bytes to stand without a referenced name.
    short: bool,
}

impl<'f> Candidate<'f> {
    fn name(&self) -> &'f str {
        &self.function.names[0].name
    }

    fn length(&self) -> u32 {
        u32::try_from(self.function.bytes.len()).unwrap_or(u32::MAX)
    }

    fn reference_at(&self, offset: i32) -> Option<ModuleRef> {
        let references = &self.function.references;
        references.iter().find(|r| r.offset == offset).cloned()
    }

    /// The module for this function, checking `check` if given. A short
    /// function always checks a referenced name.
    fn module_with(&self, check: Option<Check>) -> ModuleSpec {
        let mut module = self.module();
        match check {
            Some(Check::Tail(tail)) => module.tail_bytes.push(tail),
            Some(Check::Reference(reference)) => module.reference = Some(reference),
            None => {}
        }
        if self.short && module.reference.is_none() {
            module.reference = self.function.references.first().cloned();
        }
        self.add_tail_evidence(&mut module);
        module
    }

    /// A pattern that leaves many bytes variant can fit unrelated code
    /// that merely starts alike. Such a module also checks fixed bytes
    /// spread over the rest of the function.
    fn add_tail_evidence(&self, module: &mut ModuleSpec) {
        if self.fixed_bytes >= WELL_FIXED_BYTES {
            return;
        }
        let fixed: Vec<(usize, u8)> = self
            .tail
            .iter()
            .enumerate()
            .filter_map(|(offset, byte)| Some((offset, (*byte)?)))
            .collect();
        let count = EXTRA_TAIL_BYTES.min(fixed.len());
        for k in 0..count {
            let (offset, value) = fixed[k * fixed.len() / count];
            if module.tail_bytes.iter().all(|t| t.offset != offset as u32) {
                module.tail_bytes.push(TailByte {
                    offset: offset as u32,
                    value,
                });
            }
        }
        module.tail_bytes.sort_by_key(|t| t.offset);
    }

    fn module(&self) -> ModuleSpec {
        ModuleSpec {
            length: self.length(),
            names: self
                .function
                .names
                .iter()
                .map(|name| PublicName {
                    offset: 0,
                    name: name.name.clone(),
                    flags: if name.local {
                        NameFlags::STATIC
                    } else {
                        NameFlags::default()
                    },
                })
                .collect(),
            tail_bytes: Vec::new(),
            reference: None,
        }
    }
}

/// A module as written into a leaf, before its CRC group is known.
#[derive(Clone, Debug, PartialEq, Eq)]
struct ModuleSpec {
    length: u32,
    names: Vec<PublicName>,
    tail_bytes: Vec<TailByte>,
    reference: Option<ModuleRef>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
struct LeafModule {
    crc_len: u8,
    crc16: u16,
    module: ModuleSpec,
}

/// Turn the functions that share one key into modules.
///
/// Colliding functions are resolved as a decision list: at each tail-byte
/// offset, then at each operand offset, every function whose byte or
/// referenced name no other remaining function shares gets a module that
/// checks it and leaves the list. A leaf tries its modules in order, so
/// a module only has to differ from the functions still left when it was
/// made, and the last function left needs no check of its own.
fn resolve(candidates: Vec<Candidate<'_>>, report: &mut MakeReport) -> Vec<ModuleSpec> {
    // One module per name; the shortest body needs the fewest bytes to
    // be present at a match.
    let mut by_name: BTreeMap<&str, Candidate<'_>> = BTreeMap::new();
    for candidate in candidates {
        match by_name.get(candidate.name()) {
            Some(kept) if kept.length() <= candidate.length() => report.duplicates += 1,
            Some(_) => {
                report.duplicates += 1;
                by_name.insert(candidate.name(), candidate);
            }
            None => {
                by_name.insert(candidate.name(), candidate);
            }
        }
    }
    let mut remaining: Vec<Candidate<'_>> = by_name.into_values().collect();
    let collided = remaining.len() > 1;
    let mut modules = Vec::new();

    let shortest_tail = remaining.iter().map(|c| c.tail.len()).min().unwrap_or(0);
    for offset in 0..shortest_tail {
        if remaining.len() <= 1 {
            break;
        }
        split_off_unique(&mut remaining, &mut modules, |c| {
            let value = c.tail[offset]?;
            let tail = TailByte {
                offset: offset as u32,
                value,
            };
            Some((value, Check::Tail(tail)))
        });
    }
    let offsets: BTreeSet<i32> = remaining
        .iter()
        .flat_map(|c| c.function.references.iter().map(|r| r.offset))
        .collect();
    // A referenced name can be unknown where a match is tried, and then
    // its module fails without excluding the function it was made for.
    // Once a module checks a reference, the last function left must check
    // one too, or it would claim the code of those modules.
    let mut reference_split = None;
    for offset in offsets {
        if remaining.len() <= 1 {
            break;
        }
        let before = remaining.len();
        split_off_unique(&mut remaining, &mut modules, |c| {
            let reference = c.reference_at(offset)?;
            Some((reference.name.clone(), Check::Reference(reference)))
        });
        if remaining.len() < before && reference_split.is_none() {
            reference_split = Some(offset);
        }
    }

    match remaining.as_slice() {
        [] => {}
        [last] => {
            let check = reference_split.map(|offset| {
                let reference = last.reference_at(offset);
                Check::Reference(reference.expect("a split needs a reference in every candidate"))
            });
            modules.push(last.module_with(check));
        }
        rest => report
            .dropped_collisions
            .push(rest.iter().map(|c| c.name().to_string()).collect()),
    }

    if collided && !modules.is_empty() {
        report.resolved_collisions += 1;
    }
    modules
}

/// What tells one colliding function from the others.
enum Check {
    Tail(TailByte),
    Reference(ModuleRef),
}

/// When every remaining function has a value at one position, give each
/// function whose value is unique a module that checks it. A short
/// function only leaves through a referenced name.
fn split_off_unique<K: Ord>(
    remaining: &mut Vec<Candidate<'_>>,
    modules: &mut Vec<ModuleSpec>,
    value: impl Fn(&Candidate<'_>) -> Option<(K, Check)>,
) {
    let Some(values) = remaining.iter().map(&value).collect::<Option<Vec<_>>>() else {
        return;
    };
    let mut counts: BTreeMap<&K, usize> = BTreeMap::new();
    for (key, _) in &values {
        *counts.entry(key).or_default() += 1;
    }
    let unique: Vec<bool> = values.iter().map(|(key, _)| counts[key] == 1).collect();
    let mut kept = Vec::with_capacity(remaining.len());
    for ((candidate, (_, check)), unique) in remaining.drain(..).zip(values).zip(unique) {
        let usable = !candidate.short || matches!(check, Check::Reference(_));
        if unique && usable {
            modules.push(candidate.module_with(Some(check)));
        } else {
            kept.push(candidate);
        }
    }
    *remaining = kept;
}

#[cfg(test)]
mod tests;
