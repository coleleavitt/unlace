//! (unlace) `dynrelocs` — apply a **linked** ELF image's dynamic relocations into
//! the loaded image, and report the slots `PT_GNU_RELRO` freezes as constant.
//!
//! ## The gap
//!
//! [`crate::loadimage_object::ObjectLoadImage`] maps the `PT_LOAD` bytes as the
//! linker wrote them. That is the *file*, not the run-time image: every slot an
//! `R_*_RELATIVE` / `R_*_GLOB_DAT` / `R_*_JUMP_SLOT` relocation fills is left at
//! **0** for the dynamic loader. In a PIE — which every modern toolchain emits by
//! default — that includes the whole `.got`, so an indirect call through a
//! function pointer the linker itself resolved reads a null target and renders
//! `(*dat_e0dc8)(…)` instead of the callee's name.
//!
//! ## What this module does
//!
//! Two facts, both derived from the same walk of `.rela.dyn`/`.rel.dyn`/
//! `.rela.plt`:
//!
//! 1. **The writes.** One `(vma, value, width)` per relocation whose result is
//!    knowable without a dynamic loader — `RELATIVE` (the image's own load bias
//!    plus the addend) and `GLOB_DAT`/`JUMP_SLOT` **whose symbol is defined in
//!    this same image**. An *undefined* symbol is an import: there is nothing to
//!    write, the run-time value comes from another object, and the existing
//!    PLT/import naming ([`crate::loader::elf_plt`]) already covers the call. It
//!    is skipped, so that path is untouched.
//! 2. **The constant slots.** Those same written slots, intersected with the
//!    `PT_GNU_RELRO` segment. `.got` is `SHF_WRITE`, so nothing downstream would
//!    trust its contents — but `PT_GNU_RELRO` is exactly the linker's statement
//!    that the range is `mprotect`ed read-only once startup relocation is done.
//!    That is what makes the relocated value foldable, and the two halves are
//!    useless apart: applying the relocation without the constancy leaves the
//!    load unfolded, and declaring constancy without applying the relocation
//!    would fold the call target to *zero*.
//!
//! Both are returned to the loader, which patches its own segment bytes and adds
//! the constant slots to `ObjectLoadImage::dynreloc_const` (see
//! [`crate::loadimage_object`]).
//!
//! ## Scope
//!
//! A Mach-O image's analog is its `LC_DYLD_CHAINED_FIXUPS` chains: on disk a
//! pointer slot holds a packed chain entry (`1004000000000000` for a pointer to
//! `0x100000410`), not the pointer. [`resolve`] writes each rebase's target and
//! zeroes each bind, the word every other format's loader leaves in an import
//! slot (the [`super::machorelocs`] arm). Only the rebased slots of an
//! `SG_READ_ONLY` segment are reported constant. A classic `LC_DYLD_INFO` image
//! needs neither: its rebased words are already the unslid pointers.
//!
//! [`fixup_sites`] lists the same slots for a reader of the loaded image (`unlace
//! read`), every one of them, including the ones [`resolve`] leaves as the file
//! holds them and the `SHT_RELR` ones it never needs to write, so the reader can
//! say which of its bytes are the file's.
//!
//! Linked images only (`ET_EXEC`/`ET_DYN`); an `ET_REL` `.o` takes the separate
//! `relocobjects` layout path, which applies its own relocations. A Mach-O's
//! chained fixups are the same fact stream in Apple's format; they take the
//! [`super::machorelocs`] arm under the same gate. Architectures:
//! x86-64, AArch64, i386 and ARM — the four whose `RELATIVE`/`GLOB_DAT`/
//! `JUMP_SLOT` triple is all that is needed. Both `RELA` (explicit addend) and
//! `REL` (addend in the slot) tables are handled. Relocation kinds outside the
//! triple (`COPY`, `IRELATIVE`, `TLS*`, …) are not knowable statically and are
//! skipped.

use object::read::{Object, ObjectSymbol, ObjectSymbolTable};
use object::{RelocationFlags, RelocationTarget};

/// One relocation whose run-time value is statically knowable.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DynRelocWrite {
    /// Virtual address of the slot being filled in.
    pub vma: u64,
    /// The value the dynamic loader would store there.
    pub value: u64,
    /// Slot width in bytes (the image's pointer size).
    pub width: u8,
}

/// The two fact streams [`resolve`] produces. Empty whenever the gate is off,
/// the image is not a linked ELF, or the machine is not one of the four handled.
#[derive(Debug, Default)]
pub struct DynRelocs {
    /// Slots to fill in, in relocation-table order.
    pub writes: Vec<DynRelocWrite>,
    /// `[start, stop]` **inclusive** byte ranges of the written slots that
    /// `PT_GNU_RELRO` covers — the ones a reader may treat as constant.
    pub const_ranges: Vec<(u64, u64)>,
    /// `IRELATIVE` resolvers: functions only the dynamic loader calls.
    pub ifunc_resolvers: Vec<u64>,
    /// (unlace `opaquepredicate globals`) `[lo, hi)` of every slot whose run-time
    /// content this image does not determine: an import's bind, a `COPY`
    /// relocation's whole object, any relocation unlace does not apply. `None`
    /// when the tables were not all read, or the image's format keeps such
    /// slots where this walk does not look.
    pub runtime_written: Option<Vec<(u64, u64)>>,
}

/// The `RELATIVE` / `GLOB_DAT` / `JUMP_SLOT` `r_type` triple for `machine`, or
/// `None` if unlace does not handle this architecture's dynamic relocations.
pub(crate) fn reloc_triple(arch: object::Architecture) -> Option<(u32, u32, u32)> {
    use object::elf;
    match arch {
        object::Architecture::X86_64 => Some((
            elf::R_X86_64_RELATIVE,
            elf::R_X86_64_GLOB_DAT,
            elf::R_X86_64_JUMP_SLOT,
        )),
        object::Architecture::Aarch64 => Some((
            elf::R_AARCH64_RELATIVE,
            elf::R_AARCH64_GLOB_DAT,
            elf::R_AARCH64_JUMP_SLOT,
        )),
        object::Architecture::I386 => Some((
            elf::R_386_RELATIVE,
            elf::R_386_GLOB_DAT,
            elf::R_386_JMP_SLOT,
        )),
        object::Architecture::Arm => Some((
            elf::R_ARM_RELATIVE,
            elf::R_ARM_GLOB_DAT,
            elf::R_ARM_JUMP_SLOT,
        )),
        _ => None,
    }
}

/// The dynamic relocation types `resolve` applies for one machine.
#[derive(Debug, Clone, Copy)]
pub(crate) struct DynTypes {
    pub relative: u32,
    pub glob_dat: Option<u32>,
    pub jump_slot: u32,
    /// The word-sized absolute relocation (`S + A`).
    pub abs: Option<u32>,
    pub irelative: Option<u32>,
}

/// [`DynTypes`] for `arch`, or `None` if unlace does not handle this
/// architecture's dynamic relocations.
pub(crate) fn dyn_types(arch: object::Architecture) -> Option<DynTypes> {
    use object::elf;
    let (relative, glob_dat, jump_slot) = match reloc_triple(arch) {
        Some((r, g, j)) => (r, Some(g), j),
        None => match arch {
            object::Architecture::PowerPc64 => (
                elf::R_PPC64_RELATIVE,
                Some(elf::R_PPC64_GLOB_DAT),
                elf::R_PPC64_JMP_SLOT,
            ),
            object::Architecture::Riscv64 | object::Architecture::Riscv32 => {
                (elf::R_RISCV_RELATIVE, None, elf::R_RISCV_JUMP_SLOT)
            }
            object::Architecture::S390x => (
                elf::R_390_RELATIVE,
                Some(elf::R_390_GLOB_DAT),
                elf::R_390_JMP_SLOT,
            ),
            _ => return None,
        },
    };
    let (abs, irelative) = match arch {
        object::Architecture::X86_64 => (elf::R_X86_64_64, elf::R_X86_64_IRELATIVE),
        object::Architecture::Aarch64 => (elf::R_AARCH64_ABS64, elf::R_AARCH64_IRELATIVE),
        object::Architecture::I386 => (elf::R_386_32, elf::R_386_IRELATIVE),
        object::Architecture::Arm => (elf::R_ARM_ABS32, elf::R_ARM_IRELATIVE),
        object::Architecture::PowerPc64 => (elf::R_PPC64_ADDR64, elf::R_PPC64_IRELATIVE),
        object::Architecture::Riscv64 => (elf::R_RISCV_64, elf::R_RISCV_IRELATIVE),
        object::Architecture::Riscv32 => (elf::R_RISCV_32, elf::R_RISCV_IRELATIVE),
        object::Architecture::S390x => (elf::R_390_64, elf::R_390_IRELATIVE),
        _ => return None,
    };
    Some(DynTypes {
        relative,
        glob_dat,
        jump_slot,
        abs: Some(abs),
        irelative: Some(irelative),
    })
}

/// ELF `p_type` of the RELRO program header (`PT_GNU_RELRO`).
const PT_GNU_RELRO: u32 = 0x6474_e552;

/// `[start, end)` of the image's `PT_GNU_RELRO` segment, read straight off the
/// program-header table (the generic `object` segment iterator yields `PT_LOAD`
/// only, so the raw walk is the only route). `None` when the image declares no
/// RELRO segment — a `-z norelro` link, or a static non-PIE.
pub(crate) fn relro_range(bytes: &[u8]) -> Option<(u64, u64)> {
    if bytes.len() < 64 || &bytes[..4] != b"\x7fELF" {
        return None;
    }
    let is64 = bytes[4] == 2;
    let le = bytes[5] == 1;
    let u16at = |o: usize| -> Option<u16> {
        let b: [u8; 2] = bytes.get(o..o + 2)?.try_into().ok()?;
        Some(if le {
            u16::from_le_bytes(b)
        } else {
            u16::from_be_bytes(b)
        })
    };
    let u32at = |o: usize| -> Option<u32> {
        let b: [u8; 4] = bytes.get(o..o + 4)?.try_into().ok()?;
        Some(if le {
            u32::from_le_bytes(b)
        } else {
            u32::from_be_bytes(b)
        })
    };
    let u64at = |o: usize| -> Option<u64> {
        let b: [u8; 8] = bytes.get(o..o + 8)?.try_into().ok()?;
        Some(if le {
            u64::from_le_bytes(b)
        } else {
            u64::from_be_bytes(b)
        })
    };

    let (phoff, phentsize, phnum) = if is64 {
        (u64at(0x20)?, u16at(0x36)? as usize, u16at(0x38)? as usize)
    } else {
        (
            u32at(0x1c)? as u64,
            u16at(0x2a)? as usize,
            u16at(0x2c)? as usize,
        )
    };
    let min = if is64 { 56 } else { 32 };
    if phentsize < min {
        return None;
    }
    for i in 0..phnum {
        let ph = (phoff as usize).checked_add(i.checked_mul(phentsize)?)?;
        if u32at(ph)? != PT_GNU_RELRO {
            continue;
        }
        let (vaddr, memsz) = if is64 {
            (u64at(ph + 0x10)?, u64at(ph + 0x28)?)
        } else {
            (u32at(ph + 8)? as u64, u32at(ph + 20)? as u64)
        };
        if memsz == 0 {
            return None;
        }
        return Some((vaddr, vaddr.wrapping_add(memsz)));
    }
    None
}

/// Read the `width`-byte slot at `vma` out of the mapped `PT_LOAD` bytes — the
/// implicit addend a `REL`-style table (i386/ARM `.rel.dyn`) stores in the field
/// being patched rather than in the entry.
fn implicit_addend(file: &object::File, vma: u64, width: usize, le: bool) -> Option<u64> {
    use object::read::ObjectSegment;
    for seg in file.segments() {
        let base = seg.address();
        if vma < base {
            continue;
        }
        let data = seg.data().ok()?;
        let off = (vma - base) as usize;
        let end = off.checked_add(width)?;
        if end > data.len() {
            continue;
        }
        let mut v: u64 = 0;
        if le {
            for b in data[off..end].iter().rev() {
                v = (v << 8) | *b as u64;
            }
        } else {
            for b in &data[off..end] {
                v = (v << 8) | *b as u64;
            }
        }
        return Some(v);
    }
    None
}

/// Walk the image's dynamic relocation tables and produce the statically
/// knowable writes plus the RELRO-frozen subset of their slots.
///
/// Returns an empty result whenever the file is neither an ELF nor a Mach-O,
/// the file is an `ET_REL` object (the `relocobjects` path owns those), or the
/// machine is not one of the four handled. A Mach-O takes the chained-fixup
/// arm in [`super::machorelocs`]. Never errors: a malformed entry is
/// skipped, never applied on a guess.
pub fn resolve(file: &object::File, bytes: &[u8]) -> DynRelocs {
    let mut out = DynRelocs::default();
    if file.format() == object::BinaryFormat::MachO {
        return super::machorelocs::resolve(file, bytes);
    }
    if file.format() != object::BinaryFormat::Elf {
        return out;
    }
    // A pre-link object is the `relocobjects` layout path's business; it applies
    // its own relocations against a synthetic layout, and the tables here name a
    // different address space.
    if file.kind() == object::ObjectKind::Relocatable {
        return out;
    }
    let Some(types) = dyn_types(file.architecture()) else {
        return out;
    };
    let width: usize = if file.is_64() { 8 } else { 4 };
    let le = file.is_little_endian();
    let relro = relro_range(bytes);
    let mask = if width == 8 {
        u64::MAX
    } else {
        u32::MAX as u64
    };

    // The run-time loader's view first: `PT_DYNAMIC`'s tables, which also hold
    // the RELR and Android packed encodings and survive a stripped section
    // table. An image without `PT_DYNAMIC` falls back to the section walk.
    let entries: Vec<(u64, u32, Option<(u64, bool, u64)>, Option<i64>)> =
        match dtable::ElfView::new(bytes).and_then(|view| {
            let (entries, symtab) = dtable::dynamic_relocations(&view)?;
            Some(
                entries
                    .into_iter()
                    .map(|e| {
                        let r_type = if e.r_type == dtable::RELR_RELATIVE {
                            types.relative
                        } else {
                            e.r_type
                        };
                        let sym = symtab
                            .filter(|_| e.sym != 0)
                            .and_then(|table| view.symbol(table, e.sym))
                            .map(|s| (s.value, !s.defined, s.size));
                        (e.offset, r_type, sym, e.addend)
                    })
                    .collect(),
            )
        }) {
            Some(entries) => entries,
            None => {
                let Some(relocs) = file.dynamic_relocations() else {
                    return out;
                };
                let mut dynsyms: std::collections::HashMap<usize, (u64, bool, u64)> =
                    std::collections::HashMap::new();
                for s in file.dynamic_symbols() {
                    dynsyms.insert(s.index().0, (s.address(), s.is_undefined(), s.size()));
                }
                relocs
                    .filter_map(|(offset, reloc)| {
                        let RelocationFlags::Elf { r_type } = reloc.flags() else {
                            return None;
                        };
                        let sym = match reloc.target() {
                            RelocationTarget::Symbol(idx) => dynsyms.get(&idx.0).copied(),
                            _ => None,
                        };
                        let addend = (!reloc.has_implicit_addend()).then(|| reloc.addend());
                        Some((offset, r_type, sym, addend))
                    })
                    .collect()
            }
        };

    // unlace maps a linked image at the vaddrs the ELF itself declares, so the load
    // bias every `RELATIVE` relocation adds is zero. Named rather than folded
    // away so the formula stays the ABI's `B + A`.
    let load_bias: u64 = 0;

    let mut unknown = Vec::new();
    for (offset, r_type, sym, explicit) in entries {
        let object = sym.map_or(0, |(_, _, size)| size).max(width as u64);
        let mut unwritten = || unknown.push((offset, offset.saturating_add(object)));
        // A REL-style table keeps the addend in the slot being patched.
        let addend = match explicit {
            Some(a) => a as u64,
            None => match implicit_addend(file, offset, width, le) {
                Some(a) => a,
                None => {
                    unwritten();
                    continue;
                }
            },
        };
        let defined = |sym: Option<(u64, bool, u64)>| match sym {
            Some((addr, false, _)) => Some(addr),
            _ => None,
        };
        let value = if r_type == types.relative {
            load_bias.wrapping_add(addend)
        } else if Some(r_type) == types.irelative {
            // The slot receives whatever the resolver returns; the resolver itself
            // is a function the image never names.
            out.ifunc_resolvers
                .push(load_bias.wrapping_add(addend) & mask);
            unwritten();
            continue;
        } else if Some(r_type) == types.glob_dat || r_type == types.jump_slot {
            // An undefined symbol is an import: the value lives in another
            // image. Nothing to write, and the PLT/import naming already covers
            // the call — leave the slot exactly as the linker left it. A
            // REL-style GLOB_DAT/JUMP_SLOT is `S`, not `S + A`.
            let Some(addr) = defined(sym) else {
                unwritten();
                continue;
            };
            addr.wrapping_add(if explicit.is_some() { addend } else { 0 })
        } else if Some(r_type) == types.abs {
            let Some(addr) = defined(sym) else {
                unwritten();
                continue;
            };
            addr.wrapping_add(addend)
        } else {
            unwritten();
            continue;
        };

        let value = value & mask;
        out.writes.push(DynRelocWrite {
            vma: offset,
            value,
            width: width as u8,
        });

        if let Some((lo, hi)) = relro {
            let last = offset.wrapping_add(width as u64 - 1);
            if offset >= lo && last < hi {
                out.const_ranges.push((offset, last));
            }
        }
    }
    out.runtime_written = unread_tables(file).is_empty().then_some(unknown);

    out
}

mod dtable;
/// A linked ELF image's dynamic-relocation tables, as [`resolve`] and
/// [`fixup_sites`] read them.
struct ElfTable {
    triple: Option<(u32, u32, u32)>,
    width: usize,
    le: bool,
    mask: u64,
    /// `.dynsym` by index — the index a dynamic relocation's `r_sym` names. The
    /// generic `symbol_by_index` reads `.symtab`, which is a different table (and
    /// is absent from a stripped image), so the map is built here.
    dynsyms: std::collections::HashMap<usize, (u64, bool)>,
}

/// What one dynamic relocation stores, as far as this image alone says.
struct ElfFixup {
    kind: FixupKind,
    symbol: Option<object::SymbolIndex>,
    addend: Option<i64>,
    /// The value the dynamic loader stores, where this image determines it.
    value: Option<u64>,
}

impl ElfFixup {
    /// The value [`resolve`] writes: a `RELATIVE` slot's, or a `GLOB_DAT` /
    /// `JUMP_SLOT` slot's whose symbol this image defines.
    fn written(&self) -> Option<u64> {
        self.value.filter(|_| self.kind != FixupKind::Relocation)
    }
}

impl ElfTable {
    /// `None` for anything but a linked ELF (an `ET_REL` `.o` is the
    /// `relocobjects` layout path's business; it applies its own relocations
    /// against a synthetic layout, and the tables here name a different address
    /// space).
    fn new(file: &object::File) -> Option<ElfTable> {
        if file.format() != object::BinaryFormat::Elf
            || file.kind() == object::ObjectKind::Relocatable
        {
            return None;
        }
        file.dynamic_relocations()?;
        let width: usize = if file.is_64() { 8 } else { 4 };
        let triple = reloc_triple(file.architecture());
        let mut dynsyms = std::collections::HashMap::new();
        if triple.is_some() {
            for s in file.dynamic_symbols() {
                dynsyms.insert(s.index().0, (s.address(), s.is_undefined()));
            }
        }
        Some(ElfTable {
            triple,
            width,
            le: file.is_little_endian(),
            mask: if width == 8 {
                u64::MAX
            } else {
                u32::MAX as u64
            },
            dynsyms,
        })
    }

    /// `relocation` at `offset`: a `RELATIVE` one is a [`FixupKind::Rebase`],
    /// a `GLOB_DAT` / `JUMP_SLOT` one a [`FixupKind::Bind`], and any other a
    /// [`FixupKind::Relocation`] whose value is not modelled.
    fn classify(&self, file: &object::File, offset: u64, reloc: &object::Relocation) -> ElfFixup {
        let symbol = match reloc.target() {
            RelocationTarget::Symbol(idx) => Some(idx),
            _ => None,
        };
        let other = ElfFixup {
            kind: FixupKind::Relocation,
            symbol,
            addend: None,
            value: None,
        };
        let (RelocationFlags::Elf { r_type }, Some((r_relative, r_glob_dat, r_jump_slot))) =
            (reloc.flags(), self.triple)
        else {
            return other;
        };
        // unlace maps a linked image at the vaddrs the ELF itself declares, so the
        // load bias every `RELATIVE` relocation adds is zero. Named rather than
        // folded away so the formula stays the ABI's `B + A`.
        let load_bias: u64 = 0;
        let addend = if reloc.has_implicit_addend() {
            implicit_addend(file, offset, self.width, self.le)
        } else {
            Some(reloc.addend() as u64)
        };
        if r_type == r_relative {
            let value = addend.map(|a| load_bias.wrapping_add(a) & self.mask);
            return ElfFixup {
                kind: FixupKind::Rebase,
                symbol: None,
                addend: None,
                value,
            };
        }
        if dyn_types(file.architecture()).and_then(|t| t.abs) == Some(r_type) {
            // The word-sized absolute relocation against a defined symbol, which
            // [`resolve`] writes as `S + A`.
            let value = match (symbol.and_then(|idx| self.dynsyms.get(&idx.0)), addend) {
                (Some(&(addr, false)), Some(a)) => Some(addr.wrapping_add(a) & self.mask),
                _ => None,
            };
            return ElfFixup {
                kind: FixupKind::Relocation,
                symbol,
                addend: addend.map(|a| a as i64),
                value,
            };
        }
        if r_type != r_glob_dat && r_type != r_jump_slot {
            return other;
        }
        // A `REL`-style GLOB_DAT/JUMP_SLOT ignores the in-place word (the ABI is
        // `S`, not `S + A`); only a RELA addend counts.
        let a = if reloc.has_implicit_addend() {
            addend.map(|_| 0)
        } else {
            addend
        };
        // An undefined symbol is an import: the value lives in another image.
        // Nothing to write, and the PLT/import naming already covers the call —
        // the slot stays exactly as the linker left it.
        let value = match (symbol.and_then(|idx| self.dynsyms.get(&idx.0)), a) {
            (Some(&(addr, false)), Some(a)) => Some(addr.wrapping_add(a) & self.mask),
            _ => None,
        };
        ElfFixup {
            kind: FixupKind::Bind,
            symbol,
            addend: a.map(|a| a as i64),
            value,
        }
    }
}

/// What a load-time fixup stores in its slot.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FixupKind {
    /// An address in this image, which the loader slides: a chained-fixup
    /// rebase, an ELF `RELATIVE` relocation.
    Rebase,
    /// A symbol's address, which the loader looks up: a chained-fixup bind, an
    /// ELF `GLOB_DAT` / `JUMP_SLOT` relocation.
    Bind,
    /// Any other dynamic relocation (`COPY`, `IRELATIVE`, an absolute word, TLS),
    /// which unlace does not apply.
    Relocation,
}

impl FixupKind {
    /// The name the CLI reports.
    pub fn as_str(self) -> &'static str {
        match self {
            FixupKind::Rebase => "rebase",
            FixupKind::Bind => "bind",
            FixupKind::Relocation => "relocation",
        }
    }
}

/// One slot a load-time fixup fills (GH #1379).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FixupSite {
    /// Virtual address of the slot.
    pub vma: u64,
    /// Slot width in bytes.
    pub width: u8,
    pub kind: FixupKind,
    /// The symbol a bind or relocation names, as the image spells it.
    pub symbol: Option<String>,
    /// A bind's addend.
    pub addend: Option<i64>,
    /// The value the loader stores, where this image alone determines it: a
    /// rebase's target, a bind to a symbol this image defines.
    pub target: Option<u64>,
}

/// Every load-time fixup slot of an image, sorted by address, and the metadata
/// that listed them. `reason` says what was not read when the coverage is
/// partial.
#[derive(Debug, Clone)]
pub struct FixupSites {
    pub coverage: crate::loader::dataptrs::Coverage,
    pub reason: Option<String>,
    pub sites: Vec<FixupSite>,
}

/// Every slot `file`'s load-time fixups fill (`bytes` is its raw image): a
/// Mach-O's `LC_DYLD_CHAINED_FIXUPS` rebases and binds, a linked ELF's dynamic
/// relocations, its `SHT_RELR` ones included. These are the slots whose loaded
/// bytes [`resolve`] may have rewritten (rebase targets, a zero for each bind),
/// so a reader of the load image can say which of its bytes are the file's.
/// Empty, with [`Coverage::None`], for any other image; partial, with the
/// reason, when some of an ELF's tables could not be read ([`unread_tables`])
/// or a Mach-O's chain walk stopped short.
///
/// [`Coverage::None`]: crate::loader::dataptrs::Coverage::None
pub fn fixup_sites(file: &object::File, bytes: &[u8]) -> FixupSites {
    use crate::loader::dataptrs::{Coverage, Source};
    let mut sites = Vec::new();
    let mut reason = None;
    let coverage = if file.format() == object::BinaryFormat::MachO {
        let fixups = crate::loader::format::macho::resolve_chained_fixups(file, bytes);
        let width = fixups.slot_width();
        sites.extend(fixups.rebases().map(|(vma, target)| FixupSite {
            vma,
            width,
            kind: FixupKind::Rebase,
            symbol: None,
            addend: None,
            target: Some(target),
        }));
        sites.extend(fixups.binds().map(|(vma, bind)| FixupSite {
            vma,
            width,
            kind: FixupKind::Bind,
            symbol:
                Some(String::from_utf8_lossy(&bind.name).into_owned()).filter(|n| !n.is_empty()),
            addend: Some(bind.addend),
            target: None,
        }));
        if let Some(why) = fixups.damage() {
            reason = Some(format!("the chained fixups were not all read: {why}"));
            Coverage::Partial(Source::ChainedFixups)
        } else if sites.is_empty() {
            Coverage::None
        } else {
            Coverage::Complete(Source::ChainedFixups)
        }
    } else if let Some(table) = ElfTable::new(file) {
        let symbols = file.dynamic_symbol_table();
        let name = |idx: object::SymbolIndex| {
            let symbol = symbols.as_ref()?.symbol_by_index(idx).ok()?;
            symbol
                .name()
                .ok()
                .filter(|n| !n.is_empty())
                .map(str::to_owned)
        };
        for (offset, reloc) in file.dynamic_relocations().into_iter().flatten() {
            let fixup = table.classify(file, offset, &reloc);
            sites.push(FixupSite {
                vma: offset,
                width: table.width as u8,
                kind: fixup.kind,
                symbol: fixup.symbol.and_then(name),
                addend: fixup.addend,
                target: fixup.value,
            });
        }
        let (relr, relr_unread) = relr_sites(file, &table);
        sites.extend(relr);
        let mut unread = unread_tables(file);
        unread.extend(relr_unread);
        if unread.is_empty() {
            Coverage::Complete(Source::DynamicRelocations)
        } else {
            reason = Some(unread.join("; "));
            Coverage::Partial(Source::DynamicRelocations)
        }
    } else {
        Coverage::None
    };
    sites.sort_by_key(|site| site.vma);
    FixupSites {
        coverage,
        reason,
        sites,
    }
}

/// The `(d_tag, d_val)` entries of a linked ELF's `PT_DYNAMIC` segment, empty
/// when it has none or it cannot be read.
pub(crate) fn dynamic_entries(file: &object::File) -> Vec<(i64, u64)> {
    match file {
        object::File::Elf32(elf) => elf_dynamic_entries(elf),
        object::File::Elf64(elf) => elf_dynamic_entries(elf),
        _ => Vec::new(),
    }
}

fn elf_dynamic_entries<'data, Elf, R>(
    elf: &object::read::elf::ElfFile<'data, Elf, R>,
) -> Vec<(i64, u64)>
where
    Elf: object::read::elf::FileHeader,
    R: object::ReadRef<'data>,
{
    use object::read::elf::{Dyn, ProgramHeader};
    let endian = elf.endian();
    elf.elf_program_headers()
        .iter()
        .find_map(|ph| ph.dynamic(endian, elf.data()).ok().flatten())
        .map(|entries| {
            entries
                .iter()
                .map(|d| (d.tag(endian), d.val(endian)))
                .collect()
        })
        .unwrap_or_default()
}

/// The dynamic relocation tables of a linked ELF that the walk above does not
/// read, one line each: an allocated `SHT_REL` / `SHT_RELA` section whose
/// `sh_link` is not the dynamic symbol table (the generic walk skips it), a
/// table section whose bytes lie outside the file or are not a whole number of
/// entries (the walk skips that too), and a table the dynamic section declares
/// (`DT_RELA`, `DT_REL`, `DT_JMPREL`, `DT_RELR`, `DT_ANDROID_RELR`, Android's
/// packed `DT_ANDROID_RELA` / `DT_ANDROID_REL`) that no readable section covers,
/// as in an image without section headers. Empty when every table was read,
/// and for an image without a dynamic section, whose tables (a static
/// executable's `IRELATIVE` ones) no dynamic loader applies.
pub(crate) fn unread_tables(file: &object::File) -> Vec<String> {
    match file {
        object::File::Elf32(elf) => elf_unread_tables(elf),
        object::File::Elf64(elf) => elf_unread_tables(elf),
        _ => Vec::new(),
    }
}

fn elf_unread_tables<'data, Elf, R>(elf: &object::read::elf::ElfFile<'data, Elf, R>) -> Vec<String>
where
    Elf: object::read::elf::FileHeader,
    R: object::ReadRef<'data>,
{
    use object::elf::{
        DT_ANDROID_REL, DT_ANDROID_RELA, DT_ANDROID_RELASZ, DT_ANDROID_RELR, DT_ANDROID_RELRSZ,
        DT_ANDROID_RELSZ, DT_JMPREL, DT_PLTRELSZ, DT_REL, DT_RELA, DT_RELASZ, DT_RELR, DT_RELRSZ,
        DT_RELSZ, SHF_ALLOC, SHT_ANDROID_RELR, SHT_DYNSYM, SHT_REL, SHT_RELA, SHT_RELR,
    };
    use object::read::elf::SectionHeader;
    let entries = elf_dynamic_entries(elf);
    if entries.is_empty() {
        return Vec::new();
    }
    let endian = elf.endian();
    let sections = elf.elf_section_table();
    let dynsym = sections
        .iter()
        .position(|s| s.sh_type(endian) == SHT_DYNSYM)
        .unwrap_or(0);
    let mut out = Vec::new();
    let mut spans: Vec<(u64, u64)> = Vec::new();
    for (index, section) in sections.iter().enumerate() {
        let kind = section.sh_type(endian);
        let flags: u64 = section.sh_flags(endian).into();
        let packed = matches!(kind, SHT_RELR | SHT_ANDROID_RELR);
        if !(packed || matches!(kind, SHT_REL | SHT_RELA)) || flags & u64::from(SHF_ALLOC) == 0 {
            continue;
        }
        let addr: u64 = section.sh_addr(endian).into();
        let size: u64 = section.sh_size(endian).into();
        spans.push((addr, addr.saturating_add(size)));
        let link = section.sh_link(endian);
        let whole = match kind {
            SHT_REL => section.rel(endian, elf.data()).is_ok(),
            SHT_RELA => section.rela(endian, elf.data()).is_ok(),
            _ => true,
        };
        let why = if !packed && link as usize != dynsym {
            format!("sh_link {link} is not the dynamic symbol table")
        } else if section.data(endian, elf.data()).is_err() {
            "its entries lie outside the file".to_string()
        } else if !whole {
            format!("its size {size} is not a whole number of entries")
        } else {
            continue;
        };
        let name = sections
            .section_name(endian, section)
            .ok()
            .filter(|n| !n.is_empty())
            .map_or_else(
                || "a relocation section".to_string(),
                |n| String::from_utf8_lossy(n).into_owned(),
            );
        out.push(format!("{name} (section {index}): {why}"));
    }
    spans.sort_unstable();
    let covered = |start: u64, end: u64| {
        let mut at = start;
        for &(lo, hi) in &spans {
            if lo <= at && at < hi {
                at = hi;
            }
        }
        at >= end
    };
    let value = |tag: i64| entries.iter().find(|&&(t, _)| t == tag).map(|&(_, v)| v);
    let tables = [
        ("DT_RELA", DT_RELA, DT_RELASZ, false),
        ("DT_REL", DT_REL, DT_RELSZ, false),
        ("DT_JMPREL", DT_JMPREL, DT_PLTRELSZ, false),
        ("DT_RELR", DT_RELR, DT_RELRSZ, false),
        ("DT_ANDROID_RELR", DT_ANDROID_RELR, DT_ANDROID_RELRSZ, false),
        ("DT_ANDROID_RELA", DT_ANDROID_RELA, DT_ANDROID_RELASZ, true),
        ("DT_ANDROID_REL", DT_ANDROID_REL, DT_ANDROID_RELSZ, true),
    ];
    for (name, at, size, packed) in tables {
        let (Some(start), Some(size)) = (value(at), value(size)) else {
            continue;
        };
        if size == 0 {
            continue;
        }
        if packed {
            out.push(format!("the {name} table at 0x{start:x} ({size} bytes) is Android-packed, which unlace does not decode"));
        } else if !covered(start, start.saturating_add(size)) {
            out.push(format!(
                "the {name} table at 0x{start:x} ({size} bytes) is in no relocation section"
            ));
        }
    }
    out
}

/// Every slot the `SHT_RELR` (or Android's `SHT_ANDROID_RELR`) sections of a
/// linked ELF rebase, `width` bytes apart, and why the list stops short when it
/// does ([`relr_decode`]).
pub(crate) fn elf_relr_slots(file: &object::File, width: usize) -> (Vec<u64>, Option<String>) {
    match file {
        object::File::Elf32(elf) => relr_slots(elf, width),
        object::File::Elf64(elf) => relr_slots(elf, width),
        _ => (Vec::new(), None),
    }
}

/// The slots an ELF's `SHT_RELR` tables rebase (`-z pack-relative-relocs`), on
/// any machine: packed `RELATIVE` relocations, whose addend is the word the slot
/// already holds. [`resolve`] writes none of them, since at the image's own
/// vaddrs that word is the target.
fn relr_sites(file: &object::File, table: &ElfTable) -> (Vec<FixupSite>, Option<String>) {
    let (slots, unread) = elf_relr_slots(file, table.width);
    let sites = slots
        .into_iter()
        .map(|vma| FixupSite {
            vma,
            width: table.width as u8,
            kind: FixupKind::Rebase,
            symbol: None,
            addend: None,
            target: implicit_addend(file, vma, table.width, table.le).map(|a| a & table.mask),
        })
        .collect();
    (sites, unread)
}

/// Every slot address the `SHT_RELR` / `SHT_ANDROID_RELR` sections of `elf`
/// encode. A valid table names distinct, aligned words the file holds, so
/// never more slots than the file has words: decoding stops there.
fn relr_slots<'data, Elf, R>(
    elf: &object::read::elf::ElfFile<'data, Elf, R>,
    width: usize,
) -> (Vec<u64>, Option<String>)
where
    Elf: object::read::elf::FileHeader,
    R: object::ReadRef<'data>,
{
    use object::Endian;
    use object::read::elf::SectionHeader;
    let endian = elf.endian();
    let mut entries = Vec::new();
    for section in elf.elf_section_table().iter() {
        if !matches!(
            section.sh_type(endian),
            object::elf::SHT_RELR | object::elf::SHT_ANDROID_RELR
        ) {
            continue;
        }
        let Ok(data) = section.data(endian, elf.data()) else {
            continue;
        };
        entries.extend(data.chunks_exact(width).map(|word| {
            let mut raw = [0u8; 8];
            if endian.is_little_endian() {
                raw[..width].copy_from_slice(word);
                u64::from_le_bytes(raw)
            } else {
                raw[8 - width..].copy_from_slice(word);
                u64::from_be_bytes(raw)
            }
        }));
    }
    let words = usize::try_from(elf.data().len().unwrap_or(0) / width as u64).unwrap_or(usize::MAX);
    let (slots, overflow) = relr_decode(&entries, width as u64, words);
    let unread =
        overflow.then(|| format!("the SHT_RELR entries name more than the file's {words} words"));
    (slots, unread)
}

/// Decode `SHT_RELR` entries: an even word is a slot address, and an odd word a
/// bitmap whose bit `i` (from 1) marks the slot `i - 1` words past the last
/// address, the window then advancing by the bitmap's `8 * width - 1` words.
/// At most `limit` slots; `true` when the entries name more.
fn relr_decode(entries: &[u64], width: u64, limit: usize) -> (Vec<u64>, bool) {
    let mut slots = Vec::new();
    let mut next = 0u64;
    for &entry in entries {
        if entry & 1 == 0 {
            slots.push(entry);
            next = entry.wrapping_add(width);
        } else {
            let mut bits = entry >> 1;
            let mut at = next;
            while bits != 0 {
                if bits & 1 == 1 {
                    slots.push(at);
                }
                bits >>= 1;
                at = at.wrapping_add(width);
            }
            next = next.wrapping_add((8 * width - 1) * width);
        }
        if slots.len() > limit {
            slots.truncate(limit);
            return (slots, true);
        }
    }
    (slots, false)
}

#[cfg(test)]
mod tests;
