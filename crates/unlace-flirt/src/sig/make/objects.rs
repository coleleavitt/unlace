//! Library functions from relocatable objects and static archives: the
//! job of IDA's `pelf`/`pcf`/`pmacho` parsers.
//!
//! Every defined function symbol with a size becomes a
//! [`LibraryFunction`]. Bytes a relocation patches are variant, and so are
//! the instruction bytes around relocations the linker may rewrite (x86-64
//! GOT and TLS relaxations): a statically linked `mov errno@gottpoff(%rip),
//! %rax` arrives as `mov $offset, %rax`.

use std::collections::BTreeMap;
use std::ops::Range;

use iced_x86::{Decoder, DecoderOptions, OpKind};
use object::read::archive::ArchiveFile;
use object::{
    Architecture, BinaryFormat, Object, ObjectSection, ObjectSymbol, RelocationFlags,
    RelocationKind, RelocationTarget, SectionKind, SymbolKind,
};
use unlace_ir::ArchId;

use super::{LibraryFunction, LibraryName, SigSpec};
use crate::FlirtError;
use crate::sig::ModuleRef;

/// The functions of one library file.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct LibraryObjects {
    /// Architecture of the objects; `None` when no object was read.
    pub arch: Option<ArchId>,
    pub format: Option<BinaryFormat>,
    pub functions: Vec<LibraryFunction>,
    /// Members that are not objects (`lib.rmeta`, symbol tables, bitcode).
    pub skipped_members: usize,
}

impl LibraryObjects {
    /// Read the functions of an object file or a static archive (`.a`,
    /// `.lib`, `.rlib`) and append them.
    pub fn add_file(&mut self, data: &[u8]) -> Result<(), FlirtError> {
        if let Ok(archive) = ArchiveFile::parse(data) {
            for member in archive.members() {
                let member = member.map_err(|err| FlirtError::ArchiveParse {
                    detail: err.to_string(),
                })?;
                let name = String::from_utf8_lossy(member.name()).into_owned();
                let bytes = member.data(data).map_err(|err| FlirtError::ArchiveParse {
                    detail: err.to_string(),
                })?;
                match object::File::parse(bytes) {
                    Ok(file) => self.add_object(&file, &name)?,
                    Err(_) => self.skipped_members += 1,
                }
            }
            return Ok(());
        }
        let file = object::File::parse(data).map_err(|err| FlirtError::ObjectParse {
            member: String::new(),
            detail: err.to_string(),
        })?;
        self.add_object(&file, "")
    }

    fn add_object(&mut self, file: &object::File<'_>, member: &str) -> Result<(), FlirtError> {
        let Some(arch) = arch_of(file.architecture()) else {
            self.skipped_members += 1;
            return Ok(());
        };
        match self.arch {
            Some(known) if known != arch => {
                return Err(FlirtError::ObjectParse {
                    member: member.to_string(),
                    detail: format!("object is {arch}, earlier objects are {known}"),
                });
            }
            _ => self.arch = Some(arch),
        }
        self.format.get_or_insert(file.format());

        // Function starts per section, with every name defined there.
        let mut starts: BTreeMap<(usize, u64), Start> = BTreeMap::new();
        for symbol in file.symbols() {
            if symbol.kind() != SymbolKind::Text || !symbol.is_definition() || symbol.size() == 0 {
                continue;
            }
            let (Ok(name), Some(section)) = (symbol.name(), symbol.section_index()) else {
                continue;
            };
            if !usable_name(name) {
                continue;
            }
            let start = starts.entry((section.0, symbol.address())).or_default();
            start.size = start.size.max(symbol.size());
            start.names.push(Named {
                name: name.to_string(),
                local: symbol.is_local(),
                weak: symbol.is_weak(),
            });
        }

        let parse_error = |err: object::Error| FlirtError::ObjectParse {
            member: member.to_string(),
            detail: err.to_string(),
        };
        // The name a branch to each function start resolves to.
        let mut function_at: BTreeMap<(usize, u64), String> = BTreeMap::new();
        for (&key, start) in &mut starts {
            start
                .names
                .sort_by(|a, b| a.preference().cmp(&b.preference()));
            function_at.insert(key, start.names[0].name.clone());
        }

        let mut section_index = None;
        let mut section_data: &[u8] = &[];
        let mut section_address = 0;
        let mut relocations: Vec<(u64, object::Relocation)> = Vec::new();
        for ((index, address), start) in starts {
            if section_index != Some(index) {
                let section = file
                    .section_by_index(object::SectionIndex(index))
                    .map_err(parse_error)?;
                if section.kind() != SectionKind::Text {
                    continue;
                }
                section_index = Some(index);
                section_data = section.data().map_err(parse_error)?;
                section_address = section.address();
                relocations = section.relocations().collect();
            }
            let Some(offset) = address.checked_sub(section_address) else {
                continue;
            };
            let Some(code) = usize::try_from(offset)
                .ok()
                .and_then(|offset| Some((offset, offset.checked_add(start.size as usize)?)))
                .and_then(|(from, to)| section_data.get(from..to))
            else {
                continue;
            };
            let mut bytes: Vec<Option<u8>> = code.iter().copied().map(Some).collect();
            let mut references = Vec::new();
            let range = offset..offset + start.size;
            for (at, relocation) in &relocations {
                if !range.contains(at) {
                    continue;
                }
                let site = (at - offset) as i64;
                let span = variant_span(arch, relocation);
                for pos in site + span.start..site + span.end {
                    if let Some(byte) = usize::try_from(pos).ok().and_then(|p| bytes.get_mut(p)) {
                        *byte = None;
                    }
                }
                if let Some(name) = referenced_name(file, relocation) {
                    references.push(ModuleRef {
                        offset: site as i32,
                        name,
                    });
                }
            }
            if let Some(bitness) = x86_bitness(arch) {
                for branch in outgoing_branches(bitness, address, code) {
                    let site = (branch.site - address) as usize;
                    for byte in &mut bytes[site..site + 4] {
                        *byte = None;
                    }
                    let site = site as i32;
                    if let Some(name) = function_at.get(&(index, branch.target))
                        && references.iter().all(|r| r.offset != site)
                    {
                        references.push(ModuleRef {
                            offset: site,
                            name: name.clone(),
                        });
                    }
                }
            }
            references.retain(|r| start.names.iter().all(|n| n.name != r.name));
            references.sort_by_key(|r| r.offset);
            self.functions.push(LibraryFunction {
                bytes,
                names: start
                    .names
                    .into_iter()
                    .map(|named| LibraryName {
                        name: named.name,
                        local: named.local,
                    })
                    .collect(),
                references,
            });
        }
        Ok(())
    }

    /// The header for a signature of these objects: the architecture
    /// they were built for, and the file and OS types their format is
    /// linked into.
    pub fn sig_spec(&self, library_name: impl Into<String>) -> Option<SigSpec> {
        let (file_types, os_types) = match self.format? {
            BinaryFormat::Coff | BinaryFormat::Pe => (SigSpec::FILE_PE, SigSpec::OSTYPE_WIN),
            BinaryFormat::MachO => (SigSpec::FILE_MACHO, SigSpec::OSTYPE_UNIX),
            _ => (SigSpec::FILE_ELF, SigSpec::OSTYPE_UNIX),
        };
        SigSpec::new(library_name, self.arch?, file_types, os_types)
    }

    /// Rewrite referenced names to the preferred name of the function
    /// they denote, so that a reference to an alias (`__GI_strlen`)
    /// resolves against the name a match gives the callee (`strlen`).
    pub fn canonicalize_references(&mut self) {
        let mut preferred: BTreeMap<String, String> = BTreeMap::new();
        for function in &self.functions {
            let Some(first) = function.names.first() else {
                continue;
            };
            for alias in &function.names {
                preferred
                    .entry(alias.name.clone())
                    .or_insert_with(|| first.name.clone());
            }
        }
        for function in &mut self.functions {
            for reference in &mut function.references {
                if let Some(name) = preferred.get(&reference.name) {
                    reference.name.clone_from(name);
                }
            }
        }
    }
}

#[derive(Default)]
struct Start {
    size: u64,
    names: Vec<Named>,
}

struct Named {
    name: String,
    local: bool,
    weak: bool,
}

impl Named {
    /// The public name of a function with several: fewest leading
    /// underscores (`puts` over `_IO_puts`, `malloc` over
    /// `__libc_malloc`), global over local, strong over weak, shortest.
    fn preference(&self) -> (usize, bool, bool, usize, &str) {
        let underscores = self.name.bytes().take_while(|&b| b == b'_').count();
        (
            underscores,
            self.local,
            self.weak,
            self.name.len(),
            &self.name,
        )
    }
}

fn arch_of(arch: Architecture) -> Option<ArchId> {
    Some(match arch {
        Architecture::X86_64 | Architecture::X86_64_X32 => ArchId::X86_64,
        Architecture::I386 => ArchId::X86,
        Architecture::Aarch64 | Architecture::Aarch64_Ilp32 => ArchId::AArch64,
        Architecture::Arm => ArchId::Arm,
        _ => return None,
    })
}

/// Assembler-local labels and ARM mapping symbols are not functions.
fn usable_name(name: &str) -> bool {
    !name.is_empty()
        && !name.starts_with(".L")
        && !name.starts_with('$')
        && name != "?"
        && name.bytes().all(|b| b >= 0x20)
}

fn x86_bitness(arch: ArchId) -> Option<u32> {
    match arch {
        ArchId::X86_64 => Some(64),
        ArchId::X86 => Some(32),
        _ => None,
    }
}

/// A `call`, `jmp` or `jcc` with a 32-bit displacement that leaves the
/// function.
struct Branch {
    /// Address of the displacement field.
    site: u64,
    target: u64,
}

/// Branches out of the function at `address`. When one linker step lays
/// out all the text (Go's `go.o`, or any linked image), their
/// displacements carry no relocations, and they change with the layout.
fn outgoing_branches(bitness: u32, address: u64, code: &[u8]) -> Vec<Branch> {
    let end = address + code.len() as u64;
    let mut decoder = Decoder::with_ip(bitness, code, address, DecoderOptions::NONE);
    let mut branches = Vec::new();
    for instruction in &mut decoder {
        if instruction.is_invalid() || instruction.len() < 5 {
            continue;
        }
        if !matches!(
            instruction.op0_kind(),
            OpKind::NearBranch16 | OpKind::NearBranch32 | OpKind::NearBranch64
        ) {
            continue;
        }
        let target = instruction.near_branch_target();
        if (address..end).contains(&target) {
            continue;
        }
        branches.push(Branch {
            site: instruction.next_ip() - 4,
            target,
        });
    }
    branches
}

/// Bytes, relative to the relocated place, that may differ in a linked
/// image.
fn variant_span(arch: ArchId, relocation: &object::Relocation) -> Range<i64> {
    let size = i64::from(relocation.size().div_ceil(8));
    match (arch, relocation.flags()) {
        (ArchId::X86_64, RelocationFlags::Elf { r_type }) => {
            use object::elf::*;
            match r_type {
                // `call/jmp *x@GOTPCREL(%rip)` and `mov x@GOTPCREL(%rip)`
                // may become `addr32 call x`, `jmp x; nop` or `lea`.
                R_X86_64_GOTPCRELX => -2..4,
                // With a REX prefix the register can move to REX.B
                // (`mov $x, %reg`).
                R_X86_64_REX_GOTPCRELX | R_X86_64_GOTTPOFF | R_X86_64_GOTPC32_TLSDESC => -3..4,
                // `data16 lea x@tlsgd(%rip), %rdi; data16 data16 rex64
                // call __tls_get_addr` becomes an initial- or local-exec
                // sequence of the same 16 bytes.
                R_X86_64_TLSGD => -4..12,
                // `lea x@tlsld(%rip), %rdi; call __tls_get_addr`.
                R_X86_64_TLSLD => -3..9,
                // `call *x@tlsdesc(%rax)` becomes a two-byte nop.
                R_X86_64_TLSDESC_CALL => 0..2,
                _ => 0..size.max(1),
            }
        }
        // Instruction-field relocations: the whole instruction.
        (ArchId::AArch64 | ArchId::Arm, _)
            if size != 8 && relocation.kind() != RelocationKind::Absolute =>
        {
            0..4
        }
        _ => 0..if size == 0 { 4 } else { size },
    }
}

/// The function a call or branch operand refers to. Data references
/// are left out: a stripped image has no names for them.
fn referenced_name(file: &object::File<'_>, relocation: &object::Relocation) -> Option<String> {
    let RelocationTarget::Symbol(index) = relocation.target() else {
        return None;
    };
    let symbol = file.symbol_by_index(index).ok()?;
    let call = match relocation.kind() {
        RelocationKind::PltRelative => true,
        RelocationKind::Relative => symbol.kind() == SymbolKind::Text,
        _ => false,
    };
    if !call {
        return None;
    }
    let name = symbol.name().ok()?;
    usable_name(name).then(|| name.to_string())
}
