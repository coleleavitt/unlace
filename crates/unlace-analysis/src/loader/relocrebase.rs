//! (unlace `relocrebase`) Rebase the LOAD-TIME analysis facts of a relocatable
//! object into the loaded image's address space.
//!
//! ## The bug this closes (GH-289)
//!
//! [`crate::loader::reloc_object`] lays a relocatable object (an ELF `ET_REL`
//! `.o`, a COFF `.obj`) out synthetically above [`RELOC_BASE`], applies its
//! relocations and rebases its symbols, so **every address the engine holds is a
//! post-layout one**. The analyzer tier, however, re-parses the same file through
//! its own `object::File` and therefore computes **pre-link, section-relative**
//! addresses. The two spaces then mix in one inventory:
//!
//! - `unlace functions ptx.o` reported 26 real functions at `0x400000+` beside 27
//!   phantoms at `0x0`, `0x20`, `0x34`, … — the `.eh_frame` FDE oracle's
//!   *unrelocated* `initial_location` fields (a PC-relative field in a `.o` reads
//!   back as its own section offset) plus one DWARF `DW_AT_low_pc` that reads 0
//!   because its relocation was never applied. `decompile-all` filters to the
//!   loader's CODE sections and so reported the correct 26 — the two surfaces
//!   disagreed on a `.o`, violating the invariant DIV-68 established.
//! - Silently, every string literal and DWARF-named global was keyed to a
//!   pre-link address and never attached to the loaded image at all.
//!
//! ## Why "rebase", not "decline"
//!
//! Declining (what the Listing/xref tier does — `run_listing_consumers`) would
//! throw real information away: a `.o` compiled `-g` carries full DWARF. So this
//! module rebases instead.
//!
//! ## How: rebase the INPUT, not each output fact
//!
//! A fact is a bare `u64` by the time it reaches [`AnalysisOutput`], and in a
//! relocatable object **every** section sits at address 0 — `.text`+0x20 and
//! `.rodata`+0x20 are the same number — so a post-hoc rebase cannot tell which
//! section's delta to apply. Worse, the interesting fields (a `.eh_frame`
//! `initial_location`, a `.debug_info` `DW_AT_low_pc`, a `DW_FORM_strp` offset)
//! are not offsets at all until their relocation is applied.
//!
//! So the rebase is applied to the analyzer tier's **input**: a patched copy of
//! the image bytes in which
//!
//! 1. every laid-out section's contents are replaced by the loader's own
//!    relocated bytes (so `.eh_frame` and `.text` read exactly as the engine
//!    decodes them),
//! 2. every *non*-laid-out section that carries relocations (`.debug_info`,
//!    `.debug_line`, …) has them applied here, resolving a target in a laid-out
//!    section to its load VMA and a target in another debug section to its own
//!    section-relative offset (`S = 0`, which is what a single-object link
//!    produces),
//! 3. each laid-out section's address field (ELF `sh_addr`, COFF
//!    `VirtualAddress`) is set to its load VMA, and
//! 4. each ELF symbol defined in a laid-out section has `st_value` shifted by
//!    that section's VMA (a COFF symbol needs no patch — `object` reports it as
//!    `section.virtual_address + value`, so step 3 already moved it).
//!
//! Every pass then reads a coherent, post-layout address space with no source
//! change, and each fact is produced already rebased through its OWN section's
//! delta. Sections are laid out non-contiguously (alignment padding between them,
//! and the empty-section skip), so there is no single global offset — the map is
//! per-section, [`RelocLayout::section_vma`].
//!
//! ## The safety net
//!
//! A field with no relocation (a hand-written `.eh_frame`, a `SHN_COMMON`
//! symbol whose `st_value` is an alignment, a symbol in a discarded section)
//! still yields an address in no laid-out section. [`retain_in_image`] drops
//! exactly those — the phantom class — rather than letting them through
//! unrebased. The one documented exception is a [`NoReturnFact`], which the
//! commit boundary resolves by NAME when its address does not resolve (an
//! undefined `exit` in a `.o` has always had address 0); it is retained with its
//! address zeroed so the name path still fires.
//!
//! [`RELOC_BASE`]: crate::loader::reloc_object::RELOC_BASE
//! [`AnalysisOutput`]: crate::pass::AnalysisOutput
//! [`NoReturnFact`]: crate::pass::NoReturnFact
//! [`RelocLayout::section_vma`]: crate::loader::reloc_object::RelocLayout::section_vma

use std::collections::HashMap;

use object::read::{Object, ObjectSection, ObjectSymbol};
use object::{RelocationKind, RelocationTarget, SectionFlags, SectionIndex, SymbolSection};

use crate::loader::reloc_object::{self, RelocLayout};
use crate::pass::AnalysisOutput;

/// A relocatable object re-presented in the loaded image's address space.
pub struct RebasedView {
    /// The patched image bytes the analyzer tier parses instead of the original.
    pub bytes: Vec<u8>,
    /// Every `[lo, hi)` extent that exists in the loaded image — one per laid-out
    /// section plus the synthetic extern area. A fact outside all of them is a
    /// phantom (see [`retain_in_image`]).
    pub ranges: Vec<(u64, u64)>,
}

impl RebasedView {
    /// Does `addr` lie in the loaded image?
    pub fn contains(&self, addr: u64) -> bool {
        self.ranges.iter().any(|&(lo, hi)| addr >= lo && addr < hi)
    }
}

/// Build the rebased analyzer-tier view of `file`, or `None` when this object is
/// not synthetically laid out or the image's headers cannot be patched (in which
/// case the caller keeps today's behavior).
pub fn rebased_view(file: &object::File, bytes: &[u8]) -> Option<RebasedView> {
    if !reloc_object::is_synthetically_laid_out(file) {
        return None;
    }
    let fmt = crate::loader::format::detect(file).ok()?;
    let layout = reloc_object::layout_relocatable(file, fmt.as_ref());
    if layout.section_vma.is_empty() && layout.shortened.is_empty() {
        return None; // nothing was laid out; the loader itself has no image
    }

    let mut out = bytes.to_vec();
    splice_laid_sections(file, &layout, &mut out);
    let inflated = relocate_unlaid_sections(file, &layout, &mut out);
    patch_section_addresses(file, &layout, &inflated, &mut out)?;

    let mut ranges: Vec<(u64, u64)> = layout
        .sections
        .iter()
        .map(|&(vma, size, _)| (vma, vma.wrapping_add(size)))
        .collect();
    if let Some((lo, hi)) = layout.extern_range {
        ranges.push((lo, hi));
    }
    if let Some(range) = layout.common_range {
        ranges.push(range);
    }
    if let Some(range) = layout.got_range {
        ranges.push(range);
    }
    Some(RebasedView { bytes: out, ranges })
}

/// Pick the view the analyzer tier reads: the rebased one when [`rebased_view`]
/// produced it (and it still parses), else the raw pre-link one unchanged.
pub fn select<'a>(
    raw: object::File<'a>,
    bytes: &'a [u8],
    view: &'a Option<RebasedView>,
) -> (object::File<'a>, &'a [u8]) {
    match view {
        Some(v) => match crate::loadimage_object::parse_object(&v.bytes) {
            Ok(file) => (file, &v.bytes[..]),
            Err(_) => (raw, bytes),
        },
        None => (raw, bytes),
    }
}

/// Replace each laid-out section's file bytes with the loader's own relocated
/// copy, so the analyzer tier decodes exactly the bytes the engine does.
/// `NOBITS`/uninitialized sections have no file extent and are skipped.
fn splice_laid_sections(file: &object::File, layout: &RelocLayout, out: &mut [u8]) {
    let by_vma: HashMap<u64, &Vec<u8>> = layout
        .segments
        .iter()
        .map(|(vma, data)| (*vma, data))
        .collect();
    for sec in file.sections() {
        let Some(&vma) = layout.section_vma.get(&sec.index()) else {
            continue;
        };
        let Some(data) = by_vma.get(&vma) else {
            continue;
        };
        let Some((off, len)) = sec.file_range() else {
            continue;
        };
        let off = off as usize;
        let len = (len as usize).min(data.len());
        if off.saturating_add(len) > out.len() {
            continue;
        }
        out[off..off + len].copy_from_slice(&data[..len]);
    }
}

/// Apply the relocations of every section the layout did NOT lay out — the
/// `.debug_*` tables above all. Without this a `.o`'s `DW_AT_low_pc` reads 0 and
/// every `DW_FORM_strp` resolves to `.debug_str`+0, so the DWARF pass names one
/// phantom function after whatever string happens to sit at offset 0.
///
/// An ELF section stored compressed (`SHF_COMPRESSED`, which Gentoo's toolchain
/// and `-gz` emit) is inflated first: its relocation offsets address the
/// uncompressed bytes, and patching the compressed stream in place corrupts it.
/// The relocated bytes are appended to `out`, and the returned list tells
/// [`patch_elf`] which section headers to point at them.
fn relocate_unlaid_sections(
    file: &object::File,
    layout: &RelocLayout,
    out: &mut Vec<u8>,
) -> Vec<Inflated> {
    let mut inflated = Vec::new();
    for sec in file.sections() {
        if layout.section_vma.contains_key(&sec.index()) {
            continue; // already spliced with the loader's relocated bytes
        }
        if is_gabi_compressed(&sec) {
            if sec.relocations().next().is_none() {
                continue;
            }
            let Ok(data) = sec.uncompressed_data() else {
                continue;
            };
            let mut data = data.into_owned();
            apply_relocations(file, layout, &sec, &mut data);
            let at = out.len().next_multiple_of(8);
            out.resize(at, 0);
            out.extend_from_slice(&data);
            inflated.push(Inflated {
                index: sec.index(),
                offset: at as u64,
                size: data.len() as u64,
            });
            continue;
        }
        let Some((sec_off, sec_len)) = sec.file_range() else {
            continue;
        };
        let (Ok(lo), Ok(len)) = (usize::try_from(sec_off), usize::try_from(sec_len)) else {
            continue;
        };
        let hi = lo.saturating_add(len).min(out.len());
        let Some(buf) = out.get_mut(lo..hi) else {
            continue;
        };
        apply_relocations(file, layout, &sec, buf);
    }
    inflated
}

/// A non-laid-out section rewritten uncompressed at the end of the image.
struct Inflated {
    index: SectionIndex,
    offset: u64,
    size: u64,
}

/// Does `sec` carry the gABI `SHF_COMPRESSED` flag (a `Chdr` then zlib or zstd)?
/// The older GNU `.zdebug_*` form is recognised by name, so rewriting its header
/// would not stop a reader from inflating it again; it is left as it was.
fn is_gabi_compressed(sec: &object::Section) -> bool {
    matches!(sec.flags(), SectionFlags::Elf { sh_flags } if sh_flags & u64::from(object::elf::SHF_COMPRESSED) != 0)
}

/// Apply `sec`'s relocations to `buf`, its contents. A relocation whose field
/// falls outside `buf` is skipped.
fn apply_relocations(
    file: &object::File,
    layout: &RelocLayout,
    sec: &object::Section,
    buf: &mut [u8],
) {
    let order = Order::of(file);
    for (offset, reloc) in sec.relocations() {
        let nbytes = (reloc.size() / 8) as usize;
        if nbytes != 4 && nbytes != 8 {
            continue;
        }
        let Some(field) = usize::try_from(offset)
            .ok()
            .and_then(|at| buf.get_mut(at..at.checked_add(nbytes)?))
        else {
            continue;
        };
        let Some(s) = resolve_target(file, layout, &reloc) else {
            continue;
        };
        // A Mach-O in-place addend is a pre-link address (the target section's
        // `addr` plus the offset); subtract that origin to get the offset.
        let origin = match reloc.target() {
            RelocationTarget::Section(sidx) => section_origin(file, sidx) as i128,
            _ => 0,
        };
        let a = reloc.addend() as i128
            + if reloc.has_implicit_addend() {
                order.signed(field) - origin
            } else {
                0
            };
        // A non-laid-out section has no load VMA, so `P` is its own
        // section-relative position — the same convention `S = 0` uses for a
        // debug-to-debug reference.
        let p = offset as i128;
        let value: i128 = match reloc.kind() {
            RelocationKind::Absolute => s as i128 + a,
            RelocationKind::Relative | RelocationKind::PltRelative => s as i128 + a - p,
            _ => continue,
        };
        order.write(field, value as u64);
    }
}

/// Resolve a relocation target to its address in the rebased space. A symbol in a
/// laid-out section resolves to `section_vma + st_value`; an undefined symbol to
/// its already-assigned extern slot; a symbol in a section the layout skipped
/// (every `.debug_*` table) resolves to `0 + st_value`, which is exactly what a
/// single-object link leaves in place.
fn resolve_target(
    file: &object::File,
    layout: &RelocLayout,
    reloc: &object::Relocation,
) -> Option<u64> {
    match reloc.target() {
        RelocationTarget::Symbol(idx) => {
            let sym = file.symbol_by_index(idx).ok()?;
            match sym.section() {
                SymbolSection::Section(sec_idx) => Some(
                    layout
                        .section_vma
                        .get(&sec_idx)
                        .copied()
                        .unwrap_or(0)
                        .wrapping_add(sym.address().wrapping_sub(section_origin(file, sec_idx))),
                ),
                SymbolSection::Undefined | SymbolSection::Common => {
                    layout.extern_addr.get(&idx).copied()
                }
                SymbolSection::Absolute => Some(sym.address()),
                _ => None,
            }
        }
        RelocationTarget::Section(sidx) => {
            Some(layout.section_vma.get(&sidx).copied().unwrap_or(0))
        }
        _ => None,
    }
}

/// The pre-link address a Mach-O section was given in its object (its `addr`), which
/// a symbol value and an in-place relocation addend both carry. Zero for every other
/// format, whose symbol and addend offsets are already section-relative.
fn section_origin(file: &object::File, sidx: SectionIndex) -> u64 {
    if file.format() != object::BinaryFormat::MachO {
        return 0;
    }
    file.section_by_index(sidx).map_or(0, |s| s.address())
}

/// The byte order of the fields an object stores: its own (COFF's is always
/// little-endian).
#[derive(Clone, Copy)]
struct Order {
    big: bool,
}

impl Order {
    fn of(file: &object::File) -> Order {
        Order {
            big: !file.is_little_endian(),
        }
    }

    fn uint(self, field: &[u8]) -> u64 {
        let fold = |acc: u64, b: &u8| (acc << 8) | u64::from(*b);
        if self.big {
            field.iter().fold(0, fold)
        } else {
            field.iter().rev().fold(0, fold)
        }
    }

    /// The in-place addend of a REL-style relocation (COFF, 32-bit ELF), the
    /// twin of `reloc_object`'s helper.
    fn signed(self, field: &[u8]) -> i128 {
        match field.len() {
            4 => self.uint(field) as u32 as i32 as i128,
            8 => self.uint(field) as i64 as i128,
            _ => 0,
        }
    }

    fn read(self, b: &[u8], at: usize, width: usize) -> Option<u64> {
        Some(self.uint(b.get(at..at.checked_add(width)?)?))
    }

    fn write(self, field: &mut [u8], value: u64) {
        let n = field.len();
        for (i, byte) in field.iter_mut().enumerate() {
            let shift = if self.big { (n - 1 - i) * 8 } else { i * 8 };
            *byte = (value >> shift) as u8;
        }
    }
}

/// Write each laid-out section's load VMA into its header address field, the laid
/// size of each section the layout shortened into its size field, (ELF only) the
/// new extent of each section [`relocate_unlaid_sections`] inflated, and (ELF only)
/// shift each defined symbol's `st_value` by its section's VMA. Returns
/// `None` for a header shape this cannot patch, so the caller falls back to the
/// unrebased view rather than emitting a half-patched image.
fn patch_section_addresses(
    file: &object::File,
    layout: &RelocLayout,
    inflated: &[Inflated],
    out: &mut [u8],
) -> Option<()> {
    match file.format() {
        object::BinaryFormat::Elf => patch_elf(file, layout, inflated, out),
        object::BinaryFormat::Coff => patch_coff(layout, out),
        object::BinaryFormat::MachO => patch_macho(layout, out),
        _ => None,
    }
}

/// The fixed offsets of the ELF header/section-header/symbol fields this patcher
/// writes, resolved for one ELF class.
struct ElfShape {
    /// `sh_flags`'s offset inside a section header.
    sh_flags: usize,
    /// `sh_addr`'s offset inside a section header.
    sh_addr: usize,
    /// `sh_offset`'s offset inside a section header.
    sh_offset: usize,
    /// `sh_size`'s offset inside a section header.
    sh_size: usize,
    /// `st_value`'s offset inside a symbol table entry.
    st_value: usize,
    /// Width of every field (4 on ELF32, 8 on ELF64).
    width: usize,
}

fn patch_elf(
    file: &object::File,
    layout: &RelocLayout,
    inflated: &[Inflated],
    out: &mut [u8],
) -> Option<()> {
    if out.len() < 64 || out[..4] != [0x7f, b'E', b'L', b'F'] {
        return None;
    }
    let is64 = match out[4] {
        1 => false,
        2 => true,
        _ => return None,
    };
    let order = match out[5] {
        1 => Order { big: false },
        2 => Order { big: true },
        _ => return None,
    };
    let shape = if is64 {
        ElfShape {
            sh_flags: 8,
            sh_addr: 16,
            sh_offset: 24,
            sh_size: 32,
            st_value: 8,
            width: 8,
        }
    } else {
        ElfShape {
            sh_flags: 8,
            sh_addr: 12,
            sh_offset: 16,
            sh_size: 20,
            st_value: 4,
            width: 4,
        }
    };
    let (e_shoff, e_shentsize, e_shnum) = if is64 {
        (
            order.read(out, 0x28, 8)?,
            order.read(out, 0x3a, 2)? as usize,
            order.read(out, 0x3c, 2)? as usize,
        )
    } else {
        (
            order.read(out, 0x20, 4)?,
            order.read(out, 0x2e, 2)? as usize,
            order.read(out, 0x30, 2)? as usize,
        )
    };
    let shoff = usize::try_from(e_shoff).ok()?;
    if e_shentsize < shape.sh_size + shape.width {
        return None;
    }
    if shoff.checked_add(e_shnum.checked_mul(e_shentsize)?)? > out.len() {
        return None;
    }

    // (3) sh_addr <- the section's load VMA. `object`'s ELF `SectionIndex` is the
    // raw section-header index, so the header sits at a fixed stride.
    for (&SectionIndex(i), &vma) in &layout.section_vma {
        if i >= e_shnum {
            return None;
        }
        let at = shoff + i * e_shentsize + shape.sh_addr;
        order.write(out.get_mut(at..at + shape.width)?, vma);
    }

    for &(SectionIndex(i), size) in &layout.shortened {
        if i >= e_shnum {
            return None;
        }
        let at = shoff + i * e_shentsize + shape.sh_size;
        order.write(out.get_mut(at..at + shape.width)?, size);
    }

    // An inflated section now sits uncompressed at the end of the image.
    let limit = if is64 { u64::MAX } else { u64::from(u32::MAX) };
    for item in inflated {
        let SectionIndex(i) = item.index;
        if i >= e_shnum || item.offset.checked_add(item.size)? > limit {
            return None;
        }
        let header = shoff + i * e_shentsize;
        let flags = order.read(out, header + shape.sh_flags, shape.width)?;
        let compressed = u64::from(object::elf::SHF_COMPRESSED);
        for (field, value) in [
            (shape.sh_flags, flags & !compressed),
            (shape.sh_offset, item.offset),
            (shape.sh_size, item.size),
        ] {
            let at = header + field;
            order.write(out.get_mut(at..at + shape.width)?, value);
        }
    }

    // (4) st_value <- section VMA + st_value, for every symbol defined in a
    // laid-out section. An undefined/common/absolute symbol is left alone: the
    // engine addresses an extern through the loader's own synthetic slot, and a
    // pass that reads a zero address already treats it as "no address".
    let (sym_off, sym_entsize) = elf_symtab_extent(out, shoff, e_shentsize, e_shnum, is64, order)?;
    if sym_entsize < shape.st_value + shape.width {
        return None;
    }
    for sym in file.symbols() {
        let SymbolSection::Section(sec_idx) = sym.section() else {
            continue;
        };
        let Some(&base) = layout.section_vma.get(&sec_idx) else {
            continue;
        };
        let at = sym_off.checked_add(sym.index().0.checked_mul(sym_entsize)?)? + shape.st_value;
        if at + shape.width > out.len() {
            return None;
        }
        order.write(
            out.get_mut(at..at + shape.width)?,
            base.wrapping_add(sym.address()),
        );
    }
    Some(())
}

/// Locate the `SHT_SYMTAB` section's `(file offset, entry size)` — the table
/// `object::File::symbols()` enumerates for an ELF.
fn elf_symtab_extent(
    out: &[u8],
    shoff: usize,
    shentsize: usize,
    shnum: usize,
    is64: bool,
    order: Order,
) -> Option<(usize, usize)> {
    const SHT_SYMTAB: u64 = 2;
    for i in 0..shnum {
        let h = shoff + i * shentsize;
        if order.read(out, h + 4, 4)? != SHT_SYMTAB {
            continue;
        }
        return if is64 {
            Some((
                usize::try_from(order.read(out, h + 24, 8)?).ok()?,
                usize::try_from(order.read(out, h + 56, 8)?).ok()?,
            ))
        } else {
            Some((
                order.read(out, h + 16, 4)? as usize,
                order.read(out, h + 36, 4)? as usize,
            ))
        };
    }
    // No symbol table at all: nothing to shift, which is not a failure.
    Some((0, usize::MAX))
}

/// COFF: write each laid-out section's load VMA into its `VirtualAddress`.
/// `object` reports a COFF symbol as `section.virtual_address + value`, so this
/// single write rebases the symbols too.
fn patch_coff(layout: &RelocLayout, out: &mut [u8]) -> Option<()> {
    const COFF_HEADER: usize = 20;
    const SECTION_HEADER: usize = 40;
    const VIRTUAL_ADDRESS: usize = 12;
    const SIZE_OF_RAW_DATA: usize = 16;
    if out.len() < COFF_HEADER {
        return None;
    }
    let machine = read_u16(out, 0)?;
    let nsections = read_u16(out, 2)? as usize;
    if machine == 0 && nsections == 0xffff {
        return None; // ANON_OBJECT_HEADER_BIGOBJ: a different header shape
    }
    let table = COFF_HEADER + read_u16(out, 16)? as usize;
    if table.checked_add(nsections.checked_mul(SECTION_HEADER)?)? > out.len() {
        return None;
    }
    // `object`'s COFF `SectionIndex` is the 1-based section NUMBER.
    for (&SectionIndex(n), &vma) in &layout.section_vma {
        if n == 0 || n > nsections {
            return None;
        }
        let vma = u32::try_from(vma).ok()?;
        write_uint(
            out,
            table + (n - 1) * SECTION_HEADER + VIRTUAL_ADDRESS,
            4,
            vma as u64,
        )?;
    }
    for &(SectionIndex(n), size) in &layout.shortened {
        if n == 0 || n > nsections {
            return None;
        }
        write_uint(
            out,
            table + (n - 1) * SECTION_HEADER + SIZE_OF_RAW_DATA,
            4,
            size,
        )?;
    }
    Some(())
}

use super::le::{read_u16, read_u32, read_u64};

/// Move a little-endian Mach-O object's sections and symbols to their laid-out
/// addresses: each `section_64`/`section` `addr` (and `size`, when the layout
/// shortened it) and each `N_SECT` symbol's `n_value`, which is an address in
/// the object's own pre-link layout, by its section's move. `object` numbers the
/// sections from 1 in load-command order, as `n_sect` does.
fn patch_macho(layout: &RelocLayout, out: &mut [u8]) -> Option<()> {
    const MH_MAGIC: u32 = 0xfeed_face;
    const MH_MAGIC_64: u32 = 0xfeed_facf;
    const LC_SEGMENT: u32 = 0x1;
    const LC_SEGMENT_64: u32 = 0x19;
    const LC_SYMTAB: u32 = 0x2;
    const N_TYPE: u8 = 0x0e;
    const N_SECT: u8 = 0x0e;
    let is64 = match read_u32(out, 0)? {
        MH_MAGIC_64 => true,
        MH_MAGIC => false,
        _ => return None,
    };
    let (header, seg_size, nsects_at, sect_size, word) = if is64 {
        (32usize, 72usize, 64usize, 80usize, 8usize)
    } else {
        (28, 56, 48, 68, 4)
    };
    let ncmds = read_u32(out, 16)? as usize;
    let mut moves: Vec<u64> = Vec::new();
    let mut symtab: Option<(usize, usize)> = None;
    let mut at = header;
    for _ in 0..ncmds {
        let cmd = read_u32(out, at)?;
        let size = read_u32(out, at + 4)? as usize;
        if size < 8 {
            return None;
        }
        if cmd == (if is64 { LC_SEGMENT_64 } else { LC_SEGMENT }) {
            let nsects = read_u32(out, at + nsects_at)? as usize;
            for i in 0..nsects {
                let s = at
                    .checked_add(seg_size)?
                    .checked_add(i.checked_mul(sect_size)?)?;
                let ordinal = moves.len() + 1;
                let old = if is64 {
                    read_u64(out, s + 32)?
                } else {
                    u64::from(read_u32(out, s + 32)?)
                };
                let new = layout.section_vma.get(&SectionIndex(ordinal)).copied();
                moves.push(new.map_or(0, |v| v.wrapping_sub(old)));
                if let Some(vma) = new {
                    write_uint(out, s + 32, word, vma)?;
                }
                if let Some(&(_, short)) = layout
                    .shortened
                    .iter()
                    .find(|(idx, _)| *idx == SectionIndex(ordinal))
                {
                    write_uint(out, s + 32 + word, word, short)?;
                }
            }
        } else if cmd == LC_SYMTAB {
            symtab = Some((
                read_u32(out, at + 8)? as usize,
                read_u32(out, at + 12)? as usize,
            ));
        }
        at = at.checked_add(size)?;
    }
    if let Some((symoff, nsyms)) = symtab {
        let entry = if is64 { 16 } else { 12 };
        for i in 0..nsyms {
            let e = symoff.checked_add(i.checked_mul(entry)?)?;
            let n_type = *out.get(e + 4)?;
            let n_sect = *out.get(e + 5)? as usize;
            if n_type & N_TYPE != N_SECT || n_sect == 0 {
                continue;
            }
            let Some(&delta) = moves.get(n_sect - 1) else {
                continue;
            };
            let value = if is64 {
                read_u64(out, e + 8)?
            } else {
                u64::from(read_u32(out, e + 8)?)
            };
            write_uint(out, e + 8, word, value.wrapping_add(delta))?;
        }
    }
    Some(())
}

fn write_uint(b: &mut [u8], at: usize, width: usize, value: u64) -> Option<()> {
    let field = b.get_mut(at..at + width)?;
    field.copy_from_slice(&value.to_le_bytes()[..width]);
    Some(())
}

/// Drop every address-keyed fact that lands outside the loaded image — the
/// phantom class a field with no relocation still produces. See the module docs
/// for the one exception (a [`crate::pass::NoReturnFact`] keeps its name, which
/// is the commit's fallback resolution key, and only loses its address).
pub fn retain_in_image(out: &mut AnalysisOutput, view: &RebasedView) {
    let keep = |a: u64| view.contains(a);
    let keep_range =
        |&(lo, hi): &(u64, u64)| view.contains(lo) && (hi <= lo || view.contains(hi - 1));

    out.symbols.retain(|s| keep(s.addr));
    out.go_chanrecv2 = out.go_chanrecv2.filter(|&addr| keep(addr));
    out.go_pointer_methods.retain(|&addr, _| keep(addr));
    out.data_objects.retain(|d| keep(d.addr));
    out.entries.retain(|&a| keep(a));
    out.fde_bodies.retain(keep_range);
    out.pdb_bodies.retain(keep_range);
    out.entry_names.retain(|(a, _)| keep(*a));
    for fact in &mut out.noreturn {
        if !keep(fact.addr) {
            fact.addr = 0;
        }
    }
    out.no_fallthru_calls.retain(|&a| keep(a));
    out.eh_call_sites.retain(|s| keep(s.start) && keep(s.pad));
    out.readonly.retain(keep_range);
    out.externref.retain(keep_range);
    out.strings.retain(|s| keep(s.addr));
    out.wide_strings32.retain(|s| keep(s.addr));
    out.context_paints.retain(|p| keep(p.addr));
    out.tracked_regs.retain(|t| keep(t.func_addr));
    out.entry_tracks.retain(|t| keep(t.func_addr));
    out.locals.retain(|l| keep(l.func_addr));
    out.comments.retain(|c| keep(c.func_addr) && keep(c.addr));
    out.fid_names.retain(|f| keep(f.addr));
    out.signature_vetoes.retain(|f| keep(f.addr));
    out.fid_prototypes.retain(|f| keep(f.addr));
    out.fallback_names.retain(|f| keep(f.addr));
    out.cpp_dwarf.symbols.retain(|s| keep(s.addr));
    out.cpp_dwarf.locals.retain(|l| keep(l.func_addr));
    out.cpp_dwarf.prototypes.retain(|(a, _)| keep(*a));
    out.cpp_sig.proven.retain(|(a, _)| keep(*a));
    out.cpp_sig.inferred.retain(|(a, _)| keep(*a));
    out.cpp_sig.msvc.retain(|(a, _, _)| keep(*a));
}

#[cfg(test)]
mod tests;
