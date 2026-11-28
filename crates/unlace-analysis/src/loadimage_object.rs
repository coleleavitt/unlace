//! Real-ELF [`LoadImage`] backend (W11, item `w11-elf-loader`) — the unlace
//! analog of `decompiler/cpp/loadimage_bfd.{cc,hh}` (`LoadImageBfd`, the GNU
//! BFD-backed loader used by the C++ console for real binaries).
//!
//! ## Why a substitution, not a transcription
//!
//! `LoadImageBfd` links the GNU BFD library (GPL-3, *excluded from the upstream
//! build* — see the `loadimage_bfd.cc` header note).  The unlace Rust port cannot
//! carry a GPL-3 link dependency into an Apache-2.0 tree, so per the plan's
//! dependency-substitution LOSS the BFD object model is replaced by the
//! permissively-licensed [`object`] crate (read-only ELF parsing).  The
//! *semantics* of the C++ `LoadImage` interface are preserved exactly; only the
//! object-file backend differs.  See `docs/rust-port/losses.md`.
//!
//! ## Faithful semantics (vs `loadimage_bfd.cc`)
//!
//! - `loadFill(ptr,size,addr)` reproduces the BFD loader byte-for-byte: a
//!   512-byte read buffer (`bufoffset`/`bufsize`/`buffer`), the same
//!   `findSection`-style "containing segment, else closest-greater segment"
//!   walk, the same gap zero-fill (`memset` to the next segment), the same
//!   "initial address not mapped -> `break` -> DataUnavailError" contract, and
//!   the same final `memcpy` of the requested window out of the buffer.  The
//!   *unit* of mapping is the ELF **loadable segment** (`PT_LOAD`, the bytes
//!   actually present in RAM at run time) rather than a BFD `asection`; this is
//!   the faithful choice for a real process image (BFD's section vmas and the
//!   `PT_LOAD` vmas coincide for the code/data a decompiler reads, and segments
//!   are what the loader maps).
//! - `getArchType()` returns the SLEIGH **language id** for the ELF machine
//!   (e.g. `x86:LE:64:default:gcc`).  C++ `LoadImageBfd::getArchType` returns a
//!   BFD-internal `"<printable>:<target>"` string that the Ghidra Java side
//!   re-maps; unlace has no such map, so the loader resolves the language id
//!   directly off the ELF header (machine + endianness + class), which is
//!   exactly what `SleighArchitecture::resolveArchitecture` consumes.  The
//!   compiler field (`:gcc`) is the System V/Linux default (the only ABI a bare
//!   ELF identifies); other ABIs are a hook.
//! - `adjustVma(adjust)` shifts every segment/section/symbol vma by
//!   `addressToByte(adjust,wordsize)`, exactly as `LoadImageBfd::adjustVma`
//!   walks `thebfd->sections` adding the byte-scaled adjustment.
//! - `openSymbols`/`getNextSymbol` iterate function symbols (BFD `BSF_FUNCTION`
//!   with a non-null name -> [`object::SymbolKind::Text`] with a non-empty
//!   name), reporting `(name, address)` in symbol-table order.
//! - `openSectionInfo`/`getNextSection` and `getReadonly` walk the ELF sections
//!   with the BFD flag translation (`SEC_ALLOC`/`SEC_LOAD`/`SEC_READONLY`/
//!   `SEC_CODE`/`SEC_DATA` -> [`section_flags`]).
//!
//! ## Scope (PARTIAL)
//!
//! Machine -> language-id mapping is wired for the common Linux/SysV ELF
//! machines unlace ships a `.sla` for (x86 32/64, ARM/AArch64, MIPS, PPC, SPARC,
//! RISC-V).  An unmapped machine surfaces a `LowlevelError` naming the machine
//! (the caller falls back to an explicit `--target`).  Non-ELF object formats
//! (PE/Mach-O) are a hook — this loader is ELF-only, matching the W11 task.

use std::cell::RefCell;
use std::collections::HashSet;
use std::rc::Rc;
use std::sync::Arc;

use object::read::{Object, ObjectSection, ObjectSegment, ObjectSymbol};
use object::{Architecture, SegmentFlags, SymbolKind};

use unlace_base::address::{Address, RangeList};
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::AddrSpace;
use unlace_base::types::Wrap;

use unlace_sleigh::loadimage::{
    IMAGE_WINDOW_BYTES, ImageBytes, LoadImage, LoadImageFunc, LoadImageSection, section_flags,
};
use unlace_sleigh::sharedbytes::{restore_window, windowed_load_fill};

use unlace_decomp::symbolnamechars::{NameChars, sanitize_symbol_name_bytes, symbolnamechars_mode};

/// Default read-buffer size (C++ `LoadImageBfd::bufsize`, `loadimage_bfd.cc:36`).
const BUFSIZE: usize = IMAGE_WINDOW_BYTES;

/// The `(addr, name)` pairs of `aliases` that neither `primary` nor an earlier
/// alias already carries.
fn distinct_aliases(primary: &[FuncSym], aliases: Vec<FuncSym>) -> Vec<FuncSym> {
    let mut known: HashSet<(u64, Vec<u8>)> =
        primary.iter().map(|s| (s.addr, s.name.clone())).collect();
    aliases
        .into_iter()
        .filter(|s| known.insert((s.addr, s.name.clone())))
        .collect()
}

/// Demangle a loader funcsym name (the unlace analog of Ghidra's
/// `GnuDemanglerAnalyzer`; see [`crate::demangle`]).  Applied to every
/// `.symtab` / PLT / `.dynsym` name *after* `@VERSION` stripping and *before* it
/// is installed as a `FunctionSymbol`, so `_ZN3foo3barEv` -> `foo::bar` and
/// unlace's `::`-namespace splitter nests the call.  Operates on the byte-string
/// name: a non-UTF-8 name (or one that is not a recognized mangled symbol) is
/// returned unchanged.  Reduces to the qualified name only (no signature /
/// template args), which is a hard requirement of the scope splitter.
///
/// (unlace `symbolnamechars`, GH-340) The character sanitizer runs LAST, on the
/// reduced name: before it, `safe`'s byte pass would be looking at the mangled
/// `_ZN…` envelope rather than at what actually reaches emitted C, and `ident`
/// would fold the demangler's own output twice.  It still runs before
/// `find_create_scope_from_symbol_name`, so the sanitizer and `symbolnamerepair`
/// never contend over the same empty component.
fn demangle_funcsym_name(name: Vec<u8>, mode: NameChars) -> Vec<u8> {
    let name = match std::str::from_utf8(&name) {
        Ok(s) => match crate::demangle::demangle_name(s) {
            Some(d) => d.into_bytes(),
            None => name,
        },
        Err(_) => name, // not a textual symbol; leave the raw bytes
    };
    match sanitize_symbol_name_bytes(&name, mode) {
        std::borrow::Cow::Borrowed(_) => name,
        std::borrow::Cow::Owned(v) => v,
    }
}

/// One loadable region of the image (the analog of a BFD `asection` for the
/// purpose of [`SegmentBytes::find_section`]/`loadFill`): a vma, the bytes
/// that live there, and BFD-style section flags.
#[derive(Debug)]
enum SegmentData {
    Owned(Vec<u8>),
    Shared {
        image: crate::image_bytes::ImageBytes,
        start: usize,
        end: usize,
    },
}

impl SegmentData {
    fn from_slice(data: &[u8], image: Option<&crate::image_bytes::ImageBytes>) -> Self {
        if let Some(image) = image {
            let start = (data.as_ptr() as usize).checked_sub(image.as_ptr() as usize);
            if let Some(start) =
                start.filter(|&start| start <= image.len() && data.len() <= image.len() - start)
            {
                return Self::Shared {
                    image: image.clone(),
                    start,
                    end: start + data.len(),
                };
            }
        }
        Self::Owned(data.to_vec())
    }

    fn as_slice(&self) -> &[u8] {
        match self {
            Self::Owned(data) => data,
            Self::Shared { image, start, end } => &image[*start..*end],
        }
    }

    fn make_owned(&mut self) -> &mut Vec<u8> {
        if let Self::Shared { .. } = self {
            *self = Self::Owned(self.as_slice().to_vec());
        }
        let Self::Owned(data) = self else {
            unreachable!()
        };
        data
    }

    fn len(&self) -> usize {
        self.as_slice().len()
    }
}

impl From<Vec<u8>> for SegmentData {
    fn from(data: Vec<u8>) -> Self {
        Self::Owned(data)
    }
}

#[derive(Debug)]
struct Segment {
    /// Virtual address the bytes map to (C++ `asection::vma`).
    vma: u64,
    /// The bytes present at `vma`, shared from the input image until a relocation
    /// or assertion writes this segment (the C++ `secsize` is `data.len()`).
    data: SegmentData,
    /// (unlace, `pe-zero-filled-data`) The segment's RAM footprint — ELF
    /// `p_memsz`, PE `VirtualSize`, Mach-O `vmsize` — which may exceed the file
    /// extent in [`Self::data`]. The excess is the `.bss`-style zero-filled
    /// tail: mapped memory the file does not back, which the loader must still
    /// hand out as zeroes rather than as a hole. Recorded only for a segment the
    /// image marks as data, and clamped at construction so a tail never reaches
    /// into the next segment.
    memsz: u64,
}

impl Segment {
    /// A segment whose file data is its whole RAM footprint.
    fn file_backed(vma: u64, data: Vec<u8>) -> Segment {
        let memsz = data.len() as u64; // cast: segment byte count
        Segment {
            vma,
            data: data.into(),
            memsz,
        }
    }

    /// The mapped extent at [`Self::vma`] — the file data plus any zero-filled
    /// RAM tail. Never shorter than the file extent.
    fn mapped_size(&self) -> u64 {
        self.memsz.max(self.data.len() as u64) // cast: segment byte count
    }
}

/// Trim every segment's zero-filled tail so it stops at the next segment's vma.
///
/// `segments` must already be vma-sorted. Only the tail is trimmed: a segment's
/// own file extent is left alone, so a layout that stacks several segments at
/// one address (a COFF object read through the linked path) maps exactly what it
/// mapped before.
fn clamp_virtual_tails(segments: &mut [Segment]) {
    for i in 0..segments.len() {
        let Some(next) = segments.get(i + 1).map(|s| s.vma) else {
            continue;
        };
        let seg = &mut segments[i];
        let room = next.saturating_sub(seg.vma);
        seg.memsz = seg.memsz.min(room).max(seg.data.len() as u64); // cast: byte count
    }
}

/// (unlace) The image's mapped bytes: the vma-sorted segment list and the
/// byte-serving routines over it.
///
/// Split out of [`ObjectLoadImage`] so the bytes can outlive one reader and be
/// read from another thread ([`ImageBytes`]). Every read of image bytes -- the
/// loader's own `load_fill` included -- goes through this one implementation, so
/// a second reader cannot drift from the first.
///
/// Written only at load time, before any share exists; [`ObjectLoadImage`] holds
/// it behind an `Arc` and requires sole ownership at each write site.
#[derive(Debug)]
struct SegmentBytes {
    segments: Vec<Segment>,
}

impl SegmentBytes {
    /// Find the segment containing `offset`, or the closest segment above it
    /// (C++ `LoadImageBfd::findSection`, `loadimage_bfd.cc:99`).  Returns the
    /// index into [`Self::segments`] and the segment size, or `None` for "no
    /// segment at or above `offset`" (the C++ null `champ`).
    ///
    /// The size is the segment's *mapped* extent ([`Segment::mapped_size`]), so
    /// an address in a zero-filled RAM tail resolves to the segment that maps
    /// it instead of falling through to the "closest above" scan.
    fn find_section(&self, offset: u64) -> Option<(usize, u64)> {
        // First pass: the segment that actually contains `offset`.
        for (i, s) in self.segments.iter().enumerate() {
            let start = s.vma;
            let secsize = s.mapped_size();
            let stop = start.wadd(secsize);
            // C++ uses raw `<`/`>=`; a
            // wrapped stop (segment at the top of the space) cannot occur for a
            // real ELF, matching the BFD assumption.
            if offset >= start && offset < stop {
                return Some((i, secsize));
            }
        }
        // Second pass: the closest segment strictly above `offset` (segments are
        // vma-sorted, so the first such is the closest — the C++ `champ` scan).
        for (i, s) in self.segments.iter().enumerate() {
            if s.vma > offset {
                return Some((i, s.mapped_size()));
            }
        }
        None
    }

    /// Copy `len` bytes out of segment `idx` starting at file-relative
    /// `seg_off` into `dst` (the C++ `bfd_get_section_contents`).  A read past
    /// the segment's file data zero-fills the remainder (a `.bss`-style RAM tail
    /// whose bytes BFD would report as zero).
    fn copy_segment(&self, idx: usize, seg_off: u64, dst: &mut [u8]) {
        let data = self.segments[idx].data.as_slice();
        for (i, b) in dst.iter_mut().enumerate() {
            let pos = seg_off.wadd(i as u64); // cast: small loop index
            *b = data.get(pos as usize).copied().unwrap_or(0); // cast: pos within data here
        }
    }
}

impl ImageBytes for SegmentBytes {
    /// Fill `dst` with the image bytes starting at address `start`, zero-filling
    /// any part of the span no segment maps (a `.bss`-style RAM tail, or a hole
    /// between two segments).  This is the body of the C++
    /// `LoadImageBfd::loadFill` read loop, lifted out so it can fill either the
    /// staging buffer or the caller's slice directly.
    ///
    /// Returns the number of bytes it could not fill: `0` on success, and
    /// `dst.len()` when the very first byte is unmapped (the C++ `offset == 0`
    /// break, which is the only failure the loop reports).  The loop counter is
    /// a `usize` rather than the C++ `int4`, so a span longer than 2 GiB is
    /// still counted correctly instead of wrapping negative.
    fn fill_span(&self, dst: &mut [u8], start: u64) -> usize {
        let mut offset: usize = 0;
        let mut cursize: usize = dst.len();
        let mut curaddr = start;

        while cursize > 0 {
            let Some((idx, secsize)) = self.find_section(curaddr) else {
                if offset == 0 {
                    break; // Initial address not mapped
                }
                // Fill the rest with zero.
                dst[offset..].fill(0);
                return 0;
            };
            let seg_vma = self.segments[idx].vma;
            let readsize: usize;
            if seg_vma > curaddr {
                // No section matches at curaddr: zeroes to the next section.
                if offset == 0 {
                    break; // Initial address not mapped
                }
                readsize = (seg_vma - curaddr).min(cursize as u64) as usize;
                dst[offset..offset + readsize].fill(0);
            } else {
                let avail = seg_vma.wadd(secsize).wsub(curaddr);
                readsize = avail.min(cursize as u64) as usize;
                let seg_off = curaddr - seg_vma; // file-relative read offset
                self.copy_segment(idx, seg_off, &mut dst[offset..offset + readsize]);
            }
            offset += readsize;
            cursize -= readsize;
            curaddr = curaddr.wadd(readsize as u64);
        }
        cursize
    }

    fn mapped_covers(&self, lo: u64, hi: u64) -> bool {
        let mut cur = lo;
        while cur < hi {
            // The furthest mapped extent of every segment that contains `cur`:
            // segments may stack at one vma (a COFF object read through the
            // linked path), so the first hit is not necessarily the best.
            let mut reach: Option<u64> = None;
            for s in &self.segments {
                let stop = s.vma.wadd(s.mapped_size());
                if cur >= s.vma && cur < stop {
                    reach = Some(match reach {
                        Some(r) => r.max(stop),
                        None => stop,
                    });
                }
            }
            match reach {
                Some(stop) if stop > cur => cur = stop,
                _ => return false,
            }
        }
        true
    }
}

/// A load segment's [`section_flags`] bits, from the format's own permission
/// word — the segment-level counterpart of the per-format `section_bits`.
///
/// Execute permission is what the CODE bit means here; everything else mapped
/// is DATA, and a segment that cannot be written is READONLY. A permission word
/// in a format this does not model yields no bits, so a reader that keys on
/// CODE ignores the segment rather than guessing.
fn segment_bits(flags: SegmentFlags) -> u32 {
    let (exec, write) = match flags {
        SegmentFlags::Elf { p_flags, .. } => (p_flags & 1 != 0, p_flags & 2 != 0),
        SegmentFlags::MachO { initprot, .. } => (initprot & 4 != 0, initprot & 2 != 0),
        SegmentFlags::Coff { characteristics } => (
            characteristics & 0x2000_0000 != 0,
            characteristics & 0x8000_0000 != 0,
        ),
        _ => return 0,
    };
    let mut bits = if exec {
        section_flags::CODE
    } else {
        section_flags::DATA
    };
    if !write {
        bits |= section_flags::READONLY;
    }
    bits
}

/// One named section as format-neutral export metadata: the project README's
/// section table. `kind` is the parsed object's `SectionKind` rendered with
/// `Debug`, which is what the README printed from its own re-parse before the
/// loader carried the names.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ObjectSectionMetadata {
    pub name: String,
    pub vma: u64,
    pub size: u64,
    pub kind: String,
    /// Where the section's bytes start in the input file; `None` for a section
    /// with no file bytes (`.bss`) or a format that does not say.
    pub file_offset: Option<u64>,
    /// How many of the section's bytes the file holds from `file_offset` (a PE
    /// section's virtual size can exceed its raw data).
    pub file_size: Option<u64>,
    /// The loader's [`section_flags`] bits for the section.
    pub flags: u32,
}

impl ObjectSectionMetadata {
    /// The one place the `SectionKind` is rendered for export.
    pub fn new(
        name: &str,
        vma: u64,
        size: u64,
        kind: object::SectionKind,
        file_range: Option<(u64, u64)>,
        flags: u32,
    ) -> Self {
        Self {
            name: name.to_string(),
            vma,
            size,
            kind: format!("{kind:?}"),
            file_offset: file_range.map(|(offset, _)| offset),
            file_size: file_range.map(|(_, size)| size),
            flags,
        }
    }
}

/// One ELF section, for the `getNextSection`/`getReadonly` info walks (the BFD
/// `asection` list).
#[derive(Debug, Clone)]
struct SectionInfo {
    /// Section vma (C++ `asection::vma`).
    vma: u64,
    /// Section size (C++ `asection::size`).
    size: u64,
    /// unlace [`section_flags`] (the translated BFD `SEC_*` flags).
    flags: u32,
}

/// One function symbol (the BFD `BSF_FUNCTION` entries the loader iterates).
#[derive(Debug, Clone)]
struct FuncSym {
    /// Symbol vma (C++ `bfd_asymbol_value`).
    addr: u64,
    /// Symbol name (byte string, per the workspace marshal convention).
    name: Vec<u8>,
    /// The byte size the symbol table states (`st_size`); 0 when it states
    /// none or the symbol is synthetic (a PLT stub, an extern call target).
    size: u64,
}

/// Linked ELF definitions and import stubs at normalized code addresses, before
/// call naming combines them into the same function inventory.
#[derive(Debug, Clone, Default)]
pub struct ElfFunctionProvenance {
    pub definitions: HashSet<u64>,
    pub imports: HashSet<u64>,
}

/// One **data** symbol: a defined `.symtab`/`.dynsym` `STT_OBJECT` entry (the BFD
/// `BSF_OBJECT` twin of [`FuncSym`]).
///
/// The function half of the symbol table has always been read (the `funcsyms`
/// stream that names `main`/`fmt`); the data half was dropped, so an imported
/// libc global — `optind`, `stdin`, `stdout`, `optarg` — rendered `dat_20a098`
/// where IDA Pro and Ghidra show its name. Both of those name data objects from
/// the symbol table independently of any debug info, which is what reaches a
/// copy-relocated (`R_X86_64_COPY`) extern: it has a real defined address in the
/// importing binary's `.bss` and a `STT_OBJECT` `.dynsym` entry, but never
/// appears in the program's own `.debug_info`.
///
/// `size` is the symbol's `st_size`, carried so the commit can map a covering
/// `SymbolEntry` of the right extent — a size-1 entry does not contain a 4-/8-byte
/// access, which is exactly the bug the DWARF data globals hit (see
/// [`crate::pass::DataObjectFact`]).
#[derive(Debug, Clone)]
struct DataSym {
    /// Symbol vma.
    addr: u64,
    /// Symbol name, `@VERSION` suffix already stripped.
    name: Vec<u8>,
    /// `st_size` (bytes); `0` when the object declares no size.
    size: u64,
}

/// \brief A [`LoadImage`] over a real ELF executable, backed by the [`object`]
/// crate (the unlace substitution for C++ `LoadImageBfd`).
///
/// The ELF is parsed once at construction into the in-memory model (segments,
/// sections, function symbols, the resolved language id) so the struct owns no
/// borrow of the file buffer — `loadFill` reads from the owned segment bytes,
/// exactly as `LoadImageBfd` reads from BFD's section contents.
#[derive(Debug)]
pub struct ObjectLoadImage {
    /// Name of the loadimage (the `LoadImage` base-class `filename` member).
    filename: String,
    /// (unlace) The ARM container states the VFP procedure-call standard
    /// ([`crate::loader::armfloatabi::vfp_args`]).
    arm_vfp_args: bool,
    /// (unlace) The container's floating-point argument convention
    /// ([`crate::loader::floatabi::float_arg_registers`]).
    float_arg_registers: Option<bool>,
    /// (unlace) Whether the container states floating-point register hardware
    /// ([`crate::loader::armfloatabi::fp_hardware`]).
    float_hardware: Option<bool>,
    /// (unlace) Whether the callee extends a narrow return value
    /// ([`crate::loader::returnext::callee_extends_returns`]).
    callee_extends_returns: Option<bool>,
    /// The resolved SLEIGH language id (the `getArchType` payload).
    archtype: Vec<u8>,
    /// The per-arch *default-model* fallback language id (design §2.2): the same
    /// arch/endian stem with the compiler model forced to the arch default
    /// (`gcc`/`default`). Used by the engine when [`Self::archtype`] (which may
    /// carry a format-specific model like `:windows`) does not resolve in the
    /// vendored SLEIGH DB — wrong calling-convention details beat no decompile.
    /// `None` when the fallback equals the primary (the common ELF case).
    fallback_archtype: Option<Vec<u8>>,
    /// Loadable regions, in *ascending vma order* (the BFD section list, used by
    /// `find_section`/`loadFill`), behind an `Arc` so a decoder on another thread
    /// can read the same bytes. Every write site requires sole ownership: the
    /// image is fully built -- relocations patched, overlays applied, vmas
    /// adjusted -- before anything shares it.
    bytes: Arc<SegmentBytes>,
    /// ELF sections, in file order (the BFD `asection` list for the info walks).
    sections: Vec<SectionInfo>,
    /// The named sections as export metadata, in file order; see
    /// [`ObjectSectionMetadata`].
    section_metadata: Vec<ObjectSectionMetadata>,
    /// The container's declared entry as a code address (the Thumb bit folded
    /// on ARM), `None` for a relocatable object or an image that declares none.
    image_entry: Option<u64>,
    /// (unlace) The loadable segments as mapping *metadata*, ascending by vma —
    /// the same `(vma, size, flags)` shape as [`Self::sections`], reported by
    /// `getSegments` so a section-keyed reader has a container to fall back on
    /// when the image carries no usable section table. Distinct from
    /// [`Self::bytes`], which owns the bytes and covers only what the file
    /// backs; this records each segment's whole RAM footprint. Empty for an
    /// `ET_REL` load, which has no program headers.
    segment_info: Vec<SectionInfo>,
    /// Executable ELF segment extents, used when section headers are absent.
    executable_segments: Vec<(u64, u64)>,
    /// `(vma, size)` of each segment the image declares inaccessible; see
    /// [`LoadImage::inaccessible_segments`].
    inaccessible_segments: Vec<(u64, u64)>,
    /// Function symbols, in symbol-table order.
    funcsyms: Vec<FuncSym>,
    /// ELF function names that share an address with an earlier name in
    /// [`Self::funcsyms`]; see [`ObjectLoadImage::func_symbol_aliases`].
    funcsym_aliases: Vec<FuncSym>,
    /// Relocatable-object section coordinates. Empty for linked images.
    reloc_sections: Vec<crate::loader::reloc_object::RelocSectionInfo>,
    /// Relocatable-object function provenance. Empty for linked images.
    reloc_symbols: Vec<crate::loader::reloc_object::RelocSymbolInfo>,
    /// Defined data symbols (`STT_OBJECT`), in symbol-table order. See
    /// [`DataSym`]; surfaced through [`ObjectLoadImage::data_symbols`].
    datasyms: Vec<DataSym>,
    /// A PE or Mach-O image's data exports as `(vma, name)`; see [`ObjectLoadImage::data_exports`].
    data_exports: Vec<(u64, String)>,
    /// (unlace) A thin Mach-O's dependency list and run paths; see [`crate::loader::macho_dylibs`]. Empty for any other format.
    macho_dependencies: crate::loader::macho_dylibs::MachODependencies,
    /// (unlace `globalref`) Sorted, merged `[start, stop]` ranges of the sections
    /// the program's own data objects live in; see
    /// [`crate::loader::globalref`].
    data_objects: Vec<(u64, u64)>,
    /// (unlace) Extra `[start, stop]` (inclusive) byte ranges to treat as *constant*
    /// (read-only) beyond the section-flag scan — the MIPS GOT external slots,
    /// whose static contents (the `.MIPS.stubs` stub addresses) the engine folds
    /// so a `lw $t9, off($gp); jalr $t9` indirect call resolves to the import name.
    /// Empty off-MIPS.  See [`crate::loader::elf_plt::mips_got_const_ranges`].
    const_ranges: Vec<(u64, u64)>,
    /// (unlace) `[start, stop]` (inclusive) byte ranges whose contents the engine
    /// may fold to a constant **without** the program-wide `option readonly` —
    /// values that are known by construction rather than by policy. Reported
    /// through `get_readonly` (so the varnodes carry `Varnode::readonly`) *and*
    /// through [`ObjectLoadImage::dynreloc_const_ranges`] (so the fold is enabled
    /// for exactly these ranges without turning on global read-only propagation).
    /// Two producers, each on its own path and never both:
    ///
    /// * `dynrelocs` (linked image): the dynamic-relocation slots this loader
    ///   filled in that `PT_GNU_RELRO` freezes — the GOT entries whose relocated
    ///   value turns `(*dat_e0dc8)(…)` back into a named call. See
    ///   [`crate::loader::dynrelocs`].
    /// * `msvcfpconst` (relocatable object): the MSVC `__real@` floating-point
    ///   COMDATs, whose value is spelled in the symbol name. See
    ///   [`crate::loader::msvcfpconst`].
    ///
    /// Empty for a non-ELF linked image, and with both gates off.
    dynreloc_const: Vec<(u64, u64)>,
    /// (unlace `opaquepredicate globals`) `[lo, hi)` of the mapped bytes the
    /// run-time loader fills with a value this image does not determine
    /// ([`crate::loader::dynrelocs::DynRelocs::runtime_written`] and the
    /// import slots). `None` when the image cannot list them.
    runtime_written: Option<Vec<(u64, u64)>>,
    /// (unlace) The image's **import pointer slots** as half-open `[lo, hi)` VMA
    /// ranges — the PE Import Address Table words a run-time loader fills with a
    /// resolved import address. [`Self::funcsyms`] carries a `FunctionSymbol` at
    /// each of them so a `call [slot]` renders the import name; this records that
    /// those addresses hold a POINTER rather than a function body, which is what
    /// a whole-binary enumeration needs to keep them out of the decompile set.
    /// Empty for every non-PE image and for a relocatable object.
    import_slots: Vec<(u64, u64)>,
    nullable_relocations: Vec<unlace_decomp::nullable_reloc::NullableRelocation>,
    function_address_aliases: Vec<(u64, u64)>,
    /// (unlace `pltlocal`) `(stub, definition)` for each PLT stub the image's own
    /// dynamic relocations bind to a function it defines, ascending by stub. See
    /// [`crate::loader::pltlocal`].
    plt_local: Vec<(u64, u64)>,
    /// MIPS ELF lazy-binding stubs and GOT-proven imports, found once at load.
    mips_linkage: Option<crate::loader::mipsstubs::MipsLinkage>,
    elfv1: crate::loader::elfv1::Descriptors,
    elf_functions: ElfFunctionProvenance,
    /// The address space the file bytes map to (C++ `spaceid`, null until
    /// `attachToSpace`).
    spaceid: Option<Rc<AddrSpace>>,
    /// Read buffer (C++ `buffer`); reused across `loadFill` calls.
    buffer: RefCell<Vec<u8>>,
    /// Starting offset of the buffered bytes (C++ `bufoffset`; `!0` = "nothing
    /// buffered", the C++ sentinel).
    bufoffset: RefCell<u64>,
    /// `openSymbols`/`getNextSymbol` cursor (C++ `mutable cursymbol`).
    cursymbol: RefCell<usize>,
    /// `openSectionInfo`/`getNextSection` cursor (C++ `mutable secinfoptr`).
    cursection: RefCell<usize>,
}

/// Admit one defined `STT_OBJECT` symbol into the data-symbol stream, deduped by
/// address (first table wins, so `.symtab` beats `.dynsym` exactly as the funcsym
/// walk orders them).
///
/// The filters mirror the funcsym walk: an *undefined* entry is an import
/// placeholder with no address of its own, an empty name carries no information,
/// and an `@VERSION` suffix is stripped so a versioned glibc export
/// (`optind@@GLIBC_2.2.5`) installs as `optind`.  A **zero `st_size`** entry is
/// dropped as well — with no extent there is nothing to size a covering
/// `SymbolEntry` against, and the linker's section-boundary markers
/// (`__bss_start`, `_edata`, `_end`) are exactly the zero-size entries that would
/// otherwise plant a spurious name on the first byte of an unrelated object.
fn collect_data_sym<'a>(
    sym: &impl object::ObjectSymbol<'a>,
    addr: u64,
    out: &mut Vec<DataSym>,
    seen: &mut HashSet<u64>,
    mode: NameChars,
) {
    if sym.is_undefined() {
        return;
    }
    let size = sym.size();
    if size == 0 {
        return;
    }
    let name = match sym.name_bytes() {
        Ok(n) if !n.is_empty() => crate::loader::elf_plt::strip_version(n),
        _ => return,
    };
    if name.is_empty() {
        return;
    }
    // (unlace `symbolnamechars`, GH-340) A data symbol's name reaches emitted C
    // exactly as a function symbol's does, so it is sanitized at the same mint.
    // Defer identifier folding until all data names can be reserved together.
    let data_mode = if mode == NameChars::Ident {
        NameChars::Safe
    } else {
        mode
    };
    let name = sanitize_symbol_name_bytes(&name, data_mode).into_owned();
    if seen.insert(addr) {
        out.push(DataSym { addr, name, size });
    }
}

/// (unlace `dynrelocs`) Store `value` into the `width`-byte slot at `vma`, in the
/// image's own byte order (`le`), if a loaded segment actually backs it.
///
/// Returns whether the write landed: a slot in a `.bss`-style RAM tail past the
/// segment's file extent has no bytes to patch and is skipped rather than
/// synthesized, so the loader's zero-fill contract is untouched.
fn patch_segments(segments: &mut [Segment], vma: u64, value: u64, width: usize, le: bool) -> bool {
    for seg in segments.iter_mut() {
        if vma < seg.vma {
            continue;
        }
        let off = (vma - seg.vma) as usize;
        let Some(end) = off.checked_add(width) else {
            continue;
        };
        let data = seg.data.make_owned();
        if end > data.len() {
            continue;
        }
        let raw = value.to_le_bytes();
        if le {
            data[off..end].copy_from_slice(&raw[..width]);
        } else {
            for (i, b) in raw[..width].iter().rev().enumerate() {
                data[off + i] = *b;
            }
        }
        return true;
    }
    false
}

impl ObjectLoadImage {
    pub fn elf_function_provenance(&self) -> &ElfFunctionProvenance {
        &self.elf_functions
    }
    /// Open an ELF file as a [`LoadImage`] (the analog of
    /// `LoadImageBfd::LoadImageBfd` + `open()`).
    ///
    /// Reads the whole file, parses the ELF, resolves the SLEIGH language id off
    /// the machine/endianness, and snapshots the loadable segments, sections,
    /// and function symbols.  Errors (the C++ `open()` `LowlevelError`s) on an
    /// unreadable file, an unrecognized object format, a non-ELF object, or a
    /// machine with no unlace `.sla`.
    pub fn open(filename: &str) -> UnlaceResult<ObjectLoadImage> {
        // Read the image file.
        let bytes = std::fs::read(filename).map_err(|e| {
            UnlaceError::lowlevel(format!("Unable to open image file: {filename}: {e}"))
        })?;
        Self::from_bytes(filename, &bytes)
    }

    /// Open from an in-memory image (the testable core of [`Self::open`]).
    pub fn from_bytes(filename: &str, bytes: &[u8]) -> UnlaceResult<ObjectLoadImage> {
        Self::from_bytes_with_diagnostics(filename, bytes, true, None, None)
    }

    /// Open an object while letting an explicit SLEIGH language select the
    /// decoder. The recognized container still supplies all image mappings.
    pub fn from_bytes_with_target(
        filename: &str,
        bytes: &[u8],
        target: &str,
    ) -> UnlaceResult<ObjectLoadImage> {
        Self::from_bytes_with_diagnostics(filename, bytes, true, Some(target), None)
    }

    /// Reconstruct a load image for an internal analysis consumer without
    /// repeating diagnostics already emitted by the primary load.
    pub fn from_bytes_silent(filename: &str, bytes: &[u8]) -> UnlaceResult<ObjectLoadImage> {
        Self::from_bytes_with_diagnostics(filename, bytes, false, None, None)
    }

    /// Silent counterpart of [`Self::from_bytes_with_target`] for an internal
    /// analysis-side reconstruction of the primary load.
    pub fn from_bytes_silent_with_target(
        filename: &str,
        bytes: &[u8],
        target: &str,
    ) -> UnlaceResult<ObjectLoadImage> {
        Self::from_bytes_with_diagnostics(filename, bytes, false, Some(target), None)
    }

    pub fn from_shared_bytes_with_target(
        filename: &str,
        bytes: Arc<[u8]>,
        target: &str,
    ) -> UnlaceResult<ObjectLoadImage> {
        Self::from_image_bytes_with_target(filename, bytes.into(), target)
    }

    pub fn from_image_bytes_with_target(
        filename: &str,
        bytes: crate::image_bytes::ImageBytes,
        target: &str,
    ) -> UnlaceResult<ObjectLoadImage> {
        Self::from_bytes_with_diagnostics(filename, &bytes, true, Some(target), Some(bytes.clone()))
    }

    fn from_bytes_with_diagnostics(
        filename: &str,
        bytes: &[u8],
        emit_diagnostics: bool,
        target: Option<&str>,
        shared_image: Option<crate::image_bytes::ImageBytes>,
    ) -> UnlaceResult<ObjectLoadImage> {
        // Parse the object file.
        let file = parse_object(bytes).map_err(|e| {
            UnlaceError::lowlevel(format!(
                "File: {filename} : not in recognized object file format: {e}"
            ))
        })?;
        // (B) Select the per-format `ObjectFormat` behind the boundary. Today only ELF
        // is constructible (`detect` rejects everything else, and the engine
        // dispatch only routes `\x7fELF` here), so this is the verbatim ELF path;
        // PE/Mach-O/COFF impls land behind this same call in later PRs. The error
        // text differs from the old "not an ELF object" string, but the rejected
        // arm is unreachable on the live path (the engine never hands a non-ELF
        // here), so no behavior changes.
        let fmt = crate::loader::format::detect(&file)?;

        let target = target.and_then(explicit_language_target);
        if emit_diagnostics
            && let Some(note) = target.and_then(|t| target_endian_note(&file, t)) {
                unlace_base::notes::say_once(
                    filename,
                    &format!("[unlace target] {filename}: {note}"),
                );
            }
        let effective_arch = effective_architecture(&file, bytes);
        let archtype =
            language_id_for(&file, fmt.as_ref(), bytes, filename, effective_arch, target)?;
        if emit_diagnostics {
            for note in crate::loader::ppcaputarget::notes(
                &file,
                &String::from_utf8_lossy(&archtype),
                target.is_some(),
            ) {
                unlace_base::notes::say_once(
                    filename,
                    &format!("[unlace target] {filename}: {note}"),
                );
            }
        }
        if emit_diagnostics {
            for note in crate::loader::mipstarget::notes(
                &file,
                &String::from_utf8_lossy(&archtype),
                target.is_some(),
            ) {
                unlace_base::notes::say_once(
                    filename,
                    &format!("[unlace target] {filename}: {note}"),
                );
            }
        }
        // (unlace §2.2) The default-model fallback id: the same arch/endian stem
        // with the model dropped to the per-arch default. If the format's chosen
        // model (e.g. PE's `:windows`) isn't vendored for this arch, the engine
        // retries with this before erroring.
        let fallback_archtype = target
            .is_none()
            .then(|| fallback_language_id(&file, effective_arch, &archtype))
            .flatten();

        // (unlace) Relocatable-object (`.o` / `.obj`) path: a pre-link object does
        // not say where its bytes live.  An ELF `ET_REL` has no `PT_LOAD` program
        // headers, so `file.segments()` is empty and the linked path below would
        // map zero bytes (every function failing with "Unable to load N bytes"); a
        // COFF object *does* present segments, but stacks every one of them at VMA
        // 0, so the linked path maps only whichever section sorts first and drops
        // every function of the other twelve into a single address-0 collision.
        // Both need the same answer: synthesize a section layout, apply the
        // relocations, and rebase symbols — the angr CLE relocatable backend's job.
        // Gated on the per-format predicate (a linked image of any format is
        // byte-identical — it keeps the mapped path).  See
        // [`crate::loader::reloc_object`].
        if fmt.relocatable_layout(&file) {
            return Self::from_relocatable(
                filename,
                &file,
                fmt.as_ref(),
                archtype,
                fallback_archtype,
                emit_diagnostics,
            );
        }

        // Snapshot the loadable segments (PT_LOAD), sharing their file bytes when
        // the caller owns the complete image and copying only on a later write.
        // `data()` returns only the file-backed bytes; a segment's `size()`
        // (its RAM footprint) may exceed that for `.bss`-style tails, so both
        // are kept: `data` is the file extent and `memsz` the mapped extent,
        // and a read past the file extent zero-fills to `memsz` the way BFD
        // reports a `SEC_LOAD`-less section.
        let mut segments: Vec<Segment> = Vec::new();
        let mut segment_info: Vec<SectionInfo> = Vec::new();
        let mut executable_segments = Vec::new();
        let mut inaccessible_segments = Vec::new();
        for seg in file.segments() {
            let vma = seg.address();
            if matches!(seg.flags(), SegmentFlags::MachO { initprot: 0, .. }) && seg.size() != 0 {
                inaccessible_segments.push((vma, seg.size()));
            }
            if matches!(seg.flags(), object::SegmentFlags::Elf { p_flags }
                if p_flags & object::elf::PF_X != 0)
            {
                executable_segments.push((vma, seg.size()));
            }
            let data = seg.data().map_err(|e| {
                UnlaceError::lowlevel(format!("File: {filename} : unreadable segment data: {e}"))
            })?;
            // The metadata records the RAM footprint whether or not the file
            // backs it, so a `.bss` tail still reads as mapped.
            let bits = segment_bits(seg.flags());
            if seg.size() != 0 {
                segment_info.push(SectionInfo {
                    vma,
                    size: seg.size(),
                    flags: bits,
                });
            }
            // (unlace, `pe-zero-filled-data`) The RAM footprint is what the tail
            // is zero-filled to — but only where the image says the region holds
            // data. An *executable* uninitialized region is a packer's staging
            // area (`UPX0`: `VirtualSize` 0x9000 over `SizeOfRawData` 0), and
            // its file-time contents are not its run-time contents, so handing
            // out zeroes there would put 36 KB of `add [eax],al` into the
            // instruction stream in place of the honest "unpack first".
            let memsz = if bits & section_flags::CODE != 0 {
                0
            } else {
                seg.size()
            };
            if data.is_empty() && memsz == 0 {
                continue;
            }
            segments.push(Segment {
                vma,
                data: SegmentData::from_slice(data, shared_image.as_ref()),
                memsz,
            });
        }
        // (unlace, `pe-header-entry-mapped`) The header page a format maps ahead
        // of its first section. `file.segments()` enumerates sections, so a PE's
        // `SizeOfHeaders` bytes at `ImageBase` were mapped nowhere and an entry
        // declared inside them read back "not mapped" even with an explicit
        // `--define-function`. Read-only, as Windows maps it, and DATA unless
        // the image declares its own entry point inside it (a packer stub in the
        // slack after the section table), so the code scans stay out of every
        // PE's MZ/PE bytes without also hiding the one address the image itself
        // calls code.
        // `None` for every other format; see [`crate::loader::pe_headers`].
        let header = fmt.header_region(&file, bytes).map(|region| SectionInfo {
            vma: region.vma,
            size: region.len as u64, // cast: clamped to the file length
            flags: if region.code {
                section_flags::CODE
            } else {
                section_flags::DATA
            } | section_flags::READONLY,
        });
        if let Some(region) = &header {
            segments.push(Segment::file_backed(
                region.vma,
                bytes[..region.size as usize].to_vec(), // cast: ditto
            ));
            segment_info.push(region.clone());
        }
        segment_info.sort_by_key(|s| s.vma);
        // Ascending vma order so find_section's "closest greater" walk is a
        // simple scan (the BFD list is already address-ordered for ELF).
        segments.sort_by_key(|s| s.vma);
        clamp_virtual_tails(&mut segments);

        // Snapshot the sections for the info walks (the BFD `asection` list).
        // (C) The per-format section-flag translation goes through the boundary; for
        // ELF this is the old `section_kind_flags` body, lifted verbatim into
        // `ElfFormat::section_bits`.
        let mut sections: Vec<SectionInfo> = Vec::new();
        let mut section_metadata: Vec<ObjectSectionMetadata> = Vec::new();
        let mut data_object_rows: Vec<(u64, u64)> = Vec::new();
        let readonly_segments = crate::loader::format::macho::readonly_segments(&file);
        for sec in file.sections() {
            let mut flags = fmt.section_bits(sec.name().unwrap_or(""), sec.kind(), sec.flags());
            if flags & section_flags::NOLOAD == 0
                && crate::loader::format::macho::in_readonly_segment(&readonly_segments, &sec)
            {
                flags |= section_flags::READONLY;
            }
            sections.push(SectionInfo {
                vma: sec.address(),
                size: sec.size(),
                flags,
            });
            if flags & section_flags::UNALLOC == 0
                && crate::loader::globalref::holds_program_objects(
                    sec.name().unwrap_or(""),
                    sec.kind(),
                )
            {
                data_object_rows.push((sec.address(), sec.size()));
            }
            if let Ok(name) = sec.name() {
                section_metadata.push(ObjectSectionMetadata::new(
                    name,
                    sec.address(),
                    sec.size(),
                    sec.kind(),
                    sec.file_range(),
                    flags,
                ));
            }
        }
        sections.extend(header);
        let arm32_decoder = is_arm32_language(&String::from_utf8_lossy(&archtype));
        let dynamic_pointers = if file.architecture() == object::Architecture::PowerPc64 {
            crate::analyzers::entry::dynamic_function_pointers(&file)
        } else {
            Vec::new()
        };
        let elfv1 = crate::loader::elfv1::Descriptors::read_at(&file, &dynamic_pointers);
        let image_entry = crate::analyzers::entry::image_entry_vma(&file, bytes)
            .map(|vma| elfv1.code_address(vma))
            .map(|vma| if arm32_decoder { vma & !1 } else { vma });

        // Snapshot the function symbols.  Three sources, deduped by address so an
        // import that appears in several tables is registered exactly once:
        //   1. `.symtab` defined functions (BFD BSF_FUNCTION with a name),
        //   2. PLT stubs → imported library names (the unlace analog of Ghidra's
        //      `ElfDefaultGotPltMarkup`; see [`crate::loader::elf_plt`]),
        //   3. `.dynsym` defined functions, for stripped-but-dynamic binaries
        //      whose `.symtab` is gone.
        // A name the address dedup drops is kept in `aliases` instead.
        // (unlace `symbolnamechars`, GH-340) Read the gate ONCE for the whole walk:
        // a large image carries a few hundred thousand names and the mode is a
        // process env var.
        let namechars = symbolnamechars_mode();
        let mut funcsyms: Vec<FuncSym> = Vec::new();
        let mut aliases: Vec<FuncSym> = Vec::new();
        let mut seen: HashSet<u64> = HashSet::new();
        // gcc's `f.localalias` (a local alias of a recursive weak `f`) lists before `f`
        // in `.symtab` but shares its body; it waits here until the other names are in.
        let mut deferred_local_aliases: Vec<FuncSym> = Vec::new();
        let mut elf_functions = ElfFunctionProvenance::default();
        let is_elf = file.format() == object::BinaryFormat::Elf;
        let is_macho = file.format() == object::BinaryFormat::MachO;
        // The data half of the same two symbol tables (`STT_OBJECT`), collected in
        // the same walks and deduped on its own address set.  See [`DataSym`].
        let mut datasyms: Vec<DataSym> = Vec::new();
        let mut seen_data: HashSet<u64> = HashSet::new();
        // A Mach-O `N_SECT` symbol's kind comes from its section's name, so the
        // Mach header symbol (`__mh_execute_header`, numbered into `__text` but
        // addressed at the image base) reads as text. An entry must lie inside a
        // section the loader classifies as code.
        let macho_code = (file.format() == object::BinaryFormat::MachO)
            .then(|| crate::loader::macho_stubs::code_ranges(&file));
        let outside_code = |addr: u64| {
            macho_code
                .as_ref()
                .is_some_and(|code| !crate::loader::macho_stubs::in_ranges(code, addr))
        };

        // 1. `.symtab` defined functions.  Skip *undefined* (import-placeholder)
        //    entries — e.g. the ELF UND `puts@@GLIBC_2.2.5` (`st_value == 0`),
        //    whose real address comes from the §3 import resolver, not the symbol
        //    table — and strip any `@VERSION` suffix.
        //
        //    The skip keys off `is_undefined()`, *not* `addr == 0`: a relocatable
        //    COFF object (PR-5) places its first defined function at section-
        //    relative VMA 0 (`compute @ .text+0`), so an `addr == 0` skip would
        //    silently drop it.  `is_undefined()` is the format-faithful predicate —
        //    for every ELF the two agree (UND syms are exactly the `addr == 0`
        //    ones, and no defined ELF/relocatable-ELF symbol sits at VMA 0), so
        //    this is behavior-identical on the ELF arm and additionally admits a
        //    COFF object's defined-at-0 function (design §3.6 object-vs-image).
        for sym in file.symbols() {
            if sym.kind() == SymbolKind::Data {
                collect_data_sym(
                    &sym,
                    sym.address(),
                    &mut datasyms,
                    &mut seen_data,
                    namechars,
                );
                continue;
            }
            if sym.kind() != SymbolKind::Text {
                continue;
            }
            if sym.is_undefined() {
                continue; // UND / import placeholder, not a real code address
            }
            if sym
                .name_bytes()
                .is_ok_and(crate::loader::tilocallabels::is_ti_local_label)
            {
                continue;
            }
            let addr = elfv1.code_address(sym.address());
            if outside_code(addr) {
                continue;
            }
            if is_elf {
                elf_functions
                    .definitions
                    .insert(if arm32_decoder { addr & !1 } else { addr });
            }
            let name = match sym.name_bytes() {
                Ok(n) if !n.is_empty() => crate::loader::elf_plt::strip_version(n),
                _ => continue,
            };
            if name.is_empty() {
                continue;
            }
            let gcc_local_alias = name.ends_with(b".localalias");
            let name = demangle_funcsym_name(name, namechars);
            let size = sym.size();
            if gcc_local_alias {
                deferred_local_aliases.push(FuncSym { addr, name, size });
            } else if seen.insert(addr) || !elfv1.0.is_empty() {
                funcsyms.push(FuncSym { addr, name, size });
            } else {
                aliases.push(FuncSym { addr, name, size });
            }
        }
        for FuncSym { addr, name, size } in deferred_local_aliases {
            if seen.insert(addr) || !elfv1.0.is_empty() {
                funcsyms.push(FuncSym { addr, name, size });
            } else {
                aliases.push(FuncSym { addr, name, size });
            }
        }

        // A Mach-O export-trie name in code the symbol table lacks (a dylib
        // after `strip -N`), spelled as the symbol table spells its names; at an
        // entry another name holds, it is an alias.
        for (addr, name) in crate::loader::macho_stubs::trie_functions(&file) {
            let name = demangle_funcsym_name(name, namechars);
            if seen.insert(addr) {
                funcsyms.push(FuncSym {
                    addr,
                    name,
                    size: 0,
                });
            } else {
                aliases.push(FuncSym {
                    addr,
                    name,
                    size: 0,
                });
            }
        }

        // A Mach-O `nlist` records no size; `data_symbols` guesses one from
        // the next symbol of its section, capped at 8 bytes. Demangled as the
        // function stream's names are.
        for (addr, name, size) in crate::loader::macho_stubs::data_symbols(&file) {
            let name = match std::str::from_utf8(&name)
                .ok()
                .and_then(crate::demangle::demangle_name)
            {
                Some(demangled) => demangled.into_bytes(),
                None => name,
            };
            let data_mode = if namechars == NameChars::Ident {
                NameChars::Safe
            } else {
                namechars
            };
            let name = sanitize_symbol_name_bytes(&name, data_mode).into_owned();
            if !name.is_empty() && seen_data.insert(addr) {
                datasyms.push(DataSym { addr, name, size });
            }
        }

        // A PE load configuration names the CRT's security cookie and guard
        // pointer slots; each is one pointer wide.
        let pointer_size = if file.is_64() { 8 } else { 4 };
        for (addr, name) in crate::loader::peloadconfig::image_named_slots(bytes) {
            if seen_data.insert(addr) {
                datasyms.push(DataSym {
                    addr,
                    name: name.as_bytes().to_vec(),
                    size: pointer_size,
                });
            }
        }

        // 2. PLT stubs → imported library names.
        // (F) Per-format import resolution goes through the boundary; for ELF
        // `ElfFormat::resolve_imports` just calls the unchanged
        // `elf_plt::resolve_plt_imports`.
        let import_names: std::collections::HashMap<_, _> = funcsyms
            .iter()
            .enumerate()
            .filter(|(_, s)| {
                is_elf
                    && (file.architecture() == Architecture::PowerPc
                        || (crate::loader::mipsabi::is_mips(file.architecture())
                            && s.name == b"_MIPS_STUBS_"))
            })
            .map(|(i, s)| (s.addr, i))
            .collect();
        // A Mach-O export the symbol table already named is that name in its C
        // spelling (`audit_export_a` for `_audit_export_a`), which lookup accepts
        // anyway; it is a second name only where this stream named the address.
        let mut named_by_imports: HashSet<u64> = HashSet::new();
        for p in fmt.resolve_imports(&file, bytes) {
            if is_elf {
                elf_functions
                    .imports
                    .insert(if arm32_decoder { p.addr & !1 } else { p.addr });
            }
            if seen.insert(p.addr) {
                if is_macho {
                    named_by_imports.insert(p.addr);
                }
                let name = demangle_funcsym_name(p.name, namechars);
                funcsyms.push(FuncSym {
                    addr: p.addr,
                    name,
                    size: 0,
                });
            } else if let Some(&i) = import_names.get(&p.addr) {
                let name = demangle_funcsym_name(p.name, namechars);
                let previous = std::mem::replace(&mut funcsyms[i].name, name);
                aliases.push(FuncSym {
                    addr: p.addr,
                    name: previous,
                    size: 0,
                });
            } else if !is_macho
                || p.kind != crate::loader::format::ImportSymKind::Export
                || named_by_imports.contains(&p.addr)
            {
                let name = demangle_funcsym_name(p.name, namechars);
                aliases.push(FuncSym {
                    addr: p.addr,
                    name,
                    size: 0,
                });
            }
        }

        // 3. `.dynsym` defined functions (stripped-but-dynamic fallback): a
        //    dynamic binary stripped of `.symtab` still exports its defined
        //    functions in `.dynsym`.
        for sym in file.dynamic_symbols() {
            if sym.kind() == SymbolKind::Data {
                collect_data_sym(
                    &sym,
                    sym.address(),
                    &mut datasyms,
                    &mut seen_data,
                    namechars,
                );
                continue;
            }
            if sym.kind() != SymbolKind::Text {
                continue;
            }
            if sym.is_undefined() {
                continue; // UND import placeholder (mirrors source #1)
            }
            let addr = elfv1.code_address(sym.address());
            if is_elf {
                elf_functions
                    .definitions
                    .insert(if arm32_decoder { addr & !1 } else { addr });
            }
            let name = match sym.name_bytes() {
                Ok(n) if !n.is_empty() => crate::loader::elf_plt::strip_version(n),
                _ => continue,
            };
            if name.is_empty() {
                continue;
            }
            let name = demangle_funcsym_name(name, namechars);
            let size = sym.size();
            if seen.insert(addr) || !elfv1.0.is_empty() {
                funcsyms.push(FuncSym { addr, name, size });
            } else if is_elf {
                aliases.push(FuncSym { addr, name, size });
            }
        }

        if !elfv1.0.is_empty() {
            let mut aliases = HashSet::new();
            funcsyms.retain(|s| aliases.insert((s.addr, s.name.clone())));
        }
        let funcsym_aliases = distinct_aliases(&funcsyms, aliases);

        // (unlace) MIPS GOT external slots → constant ranges, so the engine folds the
        // `lw $t9, off($gp)` indirect-call load to the stub address and resolves the
        // call to the import name (the analog of Ghidra's `setConstant` on the GOT
        // pointer entries in `MIPS_ElfExtension.fixupGot`).  Empty off-MIPS.
        // Through the boundary: `ElfFormat::const_ranges` is `mips_got_const_ranges`.
        let const_ranges = fmt.const_ranges(&file, bytes);

        let plt_local = fmt.local_import_targets(&file, bytes);
        let mips_linkage = crate::loader::mipsstubs::linkage(&file);

        // (unlace) The import pointer slots the funcsym walk above just registered
        // names at — recorded as addresses so the enumeration can tell a pointer
        // word from a function entry. Empty off-PE.
        let import_slots = fmt.import_slots(&file, bytes);

        // (unlace `dynrelocs`) A linked image's `PT_LOAD` bytes are the LINKER's,
        // not the run-time loader's: every slot a dynamic relocation fills reads
        // back as 0. Fill them in here, on the owned segment copies, before
        // anything reads them; the RELRO-frozen subset that actually landed is
        // carried separately so the engine can fold those loads.
        let le_image = file.is_little_endian();
        let dynrelocs = crate::loader::dynrelocs::resolve(&file, bytes);
        let mut applied: HashSet<u64> = HashSet::new();
        let track = !dynrelocs.const_ranges.is_empty();
        for w in &dynrelocs.writes {
            if patch_segments(&mut segments, w.vma, w.value, w.width as usize, le_image) && track {
                applied.insert(w.vma);
            }
        }
        let runtime_written = dynrelocs.runtime_written.map(|mut slots| {
            slots.extend(import_slots.iter().copied());
            slots
        });
        let dynreloc_const: Vec<(u64, u64)> = dynrelocs
            .const_ranges
            .into_iter()
            .filter(|(lo, _)| applied.contains(lo))
            .collect();
        // (unlace `debuglink`) A stripped ELF's function names from its debug
        // companion (build-id / `.gnu_debuglink`) or its `.gnu_debugdata`.
        if unlace_decomp::debuglink::debuglink_enabled() {
            let (symbols, source) = crate::loader::elf_debuglink::companion_symbols(
                &file,
                Some(std::path::Path::new(filename)).filter(|p| p.is_file()),
            );
            let mut added = 0usize;
            for (addr, name) in symbols {
                if seen.insert(addr) {
                    funcsyms.push(FuncSym {
                        addr,
                        name,
                        size: 0,
                    });
                    added += 1;
                }
            }
            if let (Some(source), true) = (source, added != 0) {
                unlace_base::notes::say_once(
                    filename,
                    &format!("[unlace debuglink] {filename}: {added} function names from {source}"),
                );
            }
        }
        for (first, second) in crate::loader::elf_debuglink::overlapping_loads(bytes) {
            unlace_base::notes::say_once(
                filename,
                &format!(
                    "[unlace] {filename}: PT_LOAD at 0x{second:x} overwrites the segment at 0x{first:x} with different file bytes"
                ),
            );
        }
        // (unlace `dynrelocs`) An `IRELATIVE` resolver is code only the dynamic
        // loader calls; name the unnamed ones, as IDA's `ifunc_<addr>` does.
        for &resolver in &dynrelocs.ifunc_resolvers {
            let addr = if file.architecture() == object::Architecture::Arm {
                resolver & !1
            } else {
                resolver
            };
            if seen.insert(addr) {
                funcsyms.push(FuncSym {
                    addr,
                    name: format!("ifunc_{addr:x}").into_bytes(),
                    size: 0,
                });
            }
        }

        Ok(ObjectLoadImage {
            filename: filename.to_string(),
            arm_vfp_args: crate::loader::armfloatabi::vfp_args(&file),
            float_arg_registers: crate::loader::floatabi::float_arg_registers(&file),
            float_hardware: crate::loader::armfloatabi::fp_hardware(&file),
            callee_extends_returns: crate::loader::returnext::callee_extends_returns(&file),
            archtype,
            fallback_archtype,
            bytes: Arc::new(SegmentBytes { segments }),
            sections,
            section_metadata,
            image_entry,
            segment_info,
            executable_segments,
            inaccessible_segments,
            funcsyms,
            funcsym_aliases,
            reloc_sections: Vec::new(),
            reloc_symbols: Vec::new(),
            datasyms,
            data_exports: crate::loader::pe_iat::data_exports(&file)
                .into_iter()
                .chain(crate::loader::macho_stubs::data_exports(&file))
                .map(|(addr, name)| (addr, String::from_utf8_lossy(&name).into_owned()))
                .collect(),
            macho_dependencies: if file.format() == object::BinaryFormat::MachO {
                crate::loader::macho_dylibs::dependencies(bytes)
            } else {
                Default::default()
            },
            data_objects: crate::loader::globalref::merged_ranges(data_object_rows),
            const_ranges,
            dynreloc_const,
            runtime_written,
            import_slots,
            nullable_relocations: Vec::new(),
            function_address_aliases: Vec::new(),
            plt_local,
            mips_linkage,
            elfv1,
            elf_functions,
            spaceid: None,
            buffer: RefCell::new(vec![0u8; BUFSIZE]),
            bufoffset: RefCell::new(!0u64), // ~((uintb)0)
            cursymbol: RefCell::new(0),
            cursection: RefCell::new(0),
        })
    }

    /// (unlace) Build the image from a **relocatable object** (`ET_REL`): lay the
    /// `SHF_ALLOC` sections out above
    /// [`RELOC_BASE`](crate::loader::reloc_object::RELOC_BASE), apply the `.rela.*`
    /// relocations, and rebase / extern-bind the symbols — producing
    /// the same `(segments, sections, funcsyms)` triple the linked `PT_LOAD` path
    /// produces.  Funcsym names are demangled + deduped exactly as on the linked
    /// path.  See [`crate::loader::reloc_object`].
    fn from_relocatable(
        filename: &str,
        file: &object::File,
        fmt: &dyn crate::loader::format::ObjectFormat,
        archtype: Vec<u8>,
        fallback_archtype: Option<Vec<u8>>,
        emit_diagnostics: bool,
    ) -> UnlaceResult<ObjectLoadImage> {
        use crate::loader::reloc_object;

        let layout = reloc_object::layout_relocatable(file, fmt);
        let import_slots = layout.import_slots.clone();
        let nullable_relocations = layout.nullable_relocations.clone();
        let function_address_aliases = layout.function_address_aliases.clone();
        let elfv1 = crate::loader::elfv1::Descriptors(
            layout
                .opd
                .iter()
                .map(|&(address, entry, toc)| crate::loader::elfv1::Descriptor {
                    address,
                    entry,
                    toc,
                })
                .collect(),
        );
        let reloc_sections = layout.section_info.clone();
        let reloc_symbols = layout.symbol_info.clone();

        // (unlace `msvcfpconst`) MSVC spells each floating-point literal in the name
        // of the COMDAT that holds it, and COMDAT folding leaves that symbol
        // undefined in every object but one. Decode the name back into the datum:
        // the undefined half gets bytes at its synthetic extern slot (which has no
        // backing at all otherwise), and both halves get a foldable range.
        let fpconst = crate::loader::msvcfpconst::plan(file, &layout);
        let got_range = layout.got_range;
        for w in &fpconst.warnings {
            unlace_base::notes::say_once(
                filename,
                &format!("[unlace msvcfpconst] {filename}: {w}"),
            );
        }

        // One bounded report per loader construction. Analysis-side consumers
        // may construct another layout for address rebasing, but never print it.
        if emit_diagnostics {
            for line in layout.diagnostics.report_lines() {
                unlace_base::notes::say_once(
                    filename,
                    &format!("[unlace ET_REL loader] {filename}: {line}"),
                );
            }
        }

        let mut segments: Vec<Segment> = layout
            .segments
            .into_iter()
            .map(|(vma, data)| Segment::file_backed(vma, data))
            .collect();
        segments.extend(
            fpconst
                .writes
                .into_iter()
                .map(|(vma, data)| Segment::file_backed(vma, data)),
        );
        segments.sort_by_key(|s| s.vma);

        let sections: Vec<SectionInfo> = layout
            .sections
            .into_iter()
            .map(|(vma, size, flags)| SectionInfo { vma, size, flags })
            .collect();
        // The laid-out sections at their synthetic load VMAs, so the export
        // metadata names the addresses the rest of the export uses.
        let section_metadata: Vec<ObjectSectionMetadata> = file
            .sections()
            .filter_map(|sec| {
                let vma = *layout.section_vma.get(&sec.index())?;
                let name = sec.name().ok()?;
                Some(ObjectSectionMetadata::new(
                    name,
                    vma,
                    sec.size(),
                    sec.kind(),
                    sec.file_range(),
                    fmt.section_bits(name, sec.kind(), sec.flags()),
                ))
            })
            .collect();
        // Common symbols have allocated storage but no input section. Include
        // that storage without treating unresolved external slots as objects.
        let common_objects = layout.common_range.map(|(lo, hi)| (lo, hi - lo));
        let data_objects = crate::loader::globalref::merged_ranges(
            file.sections()
                .filter_map(|sec| {
                    let vma = *layout.section_vma.get(&sec.index())?;
                    crate::loader::globalref::holds_program_objects(sec.name().ok()?, sec.kind())
                        .then_some((vma, sec.size()))
                })
                .chain(common_objects),
        );

        // Defined functions (rebased) + extern call targets, demangled + deduped
        // by address — the same `seen`/`demangle_funcsym_name` discipline the
        // linked path's `.symtab` loop uses, including its alias list.
        let namechars = symbolnamechars_mode();
        let mut funcsyms: Vec<FuncSym> = Vec::new();
        let mut aliases: Vec<FuncSym> = Vec::new();
        let mut seen: HashSet<u64> = HashSet::new();
        let sizes: std::collections::HashMap<u64, u64> = layout.funcsizes.iter().copied().collect();
        for (addr, name) in layout.funcsyms {
            let size = sizes.get(&addr).copied().unwrap_or(0);
            if addr == 0 {
                continue;
            }
            let name = crate::loader::elf_plt::strip_version(&name);
            if name.is_empty() {
                continue;
            }
            let name = demangle_funcsym_name(name, namechars);
            if seen.insert(addr) {
                funcsyms.push(FuncSym { addr, name, size });
            } else {
                aliases.push(FuncSym { addr, name, size });
            }
        }
        let funcsym_aliases = distinct_aliases(&funcsyms, aliases);

        let mut datasyms = Vec::new();
        let mut seen_data = HashSet::new();
        for sym in file.symbols().filter(|sym| sym.kind() == SymbolKind::Data) {
            let addr = match sym.section() {
                object::SymbolSection::Section(section) => layout
                    .section_vma
                    .get(&section)
                    .and_then(|base| base.checked_add(sym.address())),
                object::SymbolSection::Common => layout.extern_addr.get(&sym.index()).copied(),
                _ => None,
            };
            if let Some(addr) = addr {
                collect_data_sym(&sym, addr, &mut datasyms, &mut seen_data, namechars);
            }
        }

        Ok(ObjectLoadImage {
            filename: filename.to_string(),
            arm_vfp_args: crate::loader::armfloatabi::vfp_args(file),
            float_arg_registers: crate::loader::floatabi::float_arg_registers(file),
            float_hardware: crate::loader::armfloatabi::fp_hardware(file),
            callee_extends_returns: crate::loader::returnext::callee_extends_returns(file),
            archtype,
            fallback_archtype,
            bytes: Arc::new(SegmentBytes { segments }),
            sections,
            section_metadata,
            // A pre-link object declares no entry.
            image_entry: None,
            // No program headers on a relocatable object: the section table is
            // the only mapping story it has, and it always has one.
            segment_info: Vec::new(),
            executable_segments: Vec::new(),
            inaccessible_segments: Vec::new(),
            funcsyms,
            funcsym_aliases,
            reloc_sections,
            reloc_symbols,
            datasyms,
            data_exports: Vec::new(),
            // A pre-link object names no dylib; it is linked against them later.
            macho_dependencies: Default::default(),
            data_objects,
            const_ranges: Vec::new(),
            // (unlace) The foldable-range exception list. `dynrelocs` itself is
            // linked-image only (a relocatable object's relocations are already
            // applied by the layout pass); on this path the entries come from
            // `msvcfpconst`, whose ranges qualify for exactly the same reason —
            // a datum that is known by construction, not by policy — and from
            // a MIPS object's synthetic GOT.
            dynreloc_const: fpconst
                .const_ranges
                .into_iter()
                .chain(
                    got_range
                        .into_iter()
                        .flat_map(|range| outside(range, &import_slots)),
                )
                .collect(),
            runtime_written: None,
            // A pre-link object has no Import Address Table: its external calls
            // are relocations, resolved by the layout pass. A MIPS object's
            // undefined weak symbols keep GOT entries the run-time loader fills.
            import_slots,
            nullable_relocations,
            function_address_aliases,
            plt_local: Vec::new(),
            mips_linkage: crate::loader::mipsstubs::class_linkage(file),
            elfv1,
            elf_functions: ElfFunctionProvenance::default(),
            spaceid: None,
            buffer: RefCell::new(vec![0u8; BUFSIZE]),
            bufoffset: RefCell::new(!0u64),
            cursymbol: RefCell::new(0),
            cursection: RefCell::new(0),
        })
    }

    /// Attach the image to a particular space (C++
    /// `LoadImageBfd::attachToSpace`).
    pub fn attach_to_space(&mut self, id: Rc<AddrSpace>) {
        self.spaceid = Some(id);
    }

    /// The resolved SLEIGH language id (also returned by [`LoadImage::get_arch_type`]).
    pub fn arch_id(&self) -> &[u8] {
        &self.archtype
    }

    /// The per-arch default-model fallback language id (design §2.2), if it
    /// differs from [`Self::arch_id`]. The engine tries this when the primary id
    /// — which may carry a format-specific compiler model (e.g. PE `:windows`) —
    /// does not resolve in the vendored SLEIGH DB.
    pub fn fallback_arch_id(&self) -> Option<&[u8]> {
        self.fallback_archtype.as_deref()
    }

    /// The mapped sections as `(vma, size, section_flags)` triples (the snapshot
    /// the `get_readonly`/`getNextSection` info walks ride). Exposed so a
    /// cross-crate gate can assert the per-format `section_bits` produced the
    /// right exec (`CODE`) / `READONLY` / `NOLOAD` bits on a real PE/Mach-O/ELF
    /// without re-parsing the object. The flags are
    /// `unlace_sleigh::loadimage::section_flags::*`.
    pub fn section_snapshot(&self) -> Vec<(u64, u64, u32)> {
        self.sections
            .iter()
            .map(|s| (s.vma, s.size, s.flags))
            .collect()
    }

    /// The named sections as export metadata (see [`ObjectSectionMetadata`]).
    pub fn section_metadata(&self) -> &[ObjectSectionMetadata] {
        &self.section_metadata
    }

    /// The container's declared entry as a code address, if it declares one.
    pub fn image_entry(&self) -> Option<u64> {
        self.image_entry
    }

    /// The validated PowerPC64 ELFv1 function descriptors; empty for every other image.
    pub fn elfv1_descriptors(&self) -> &crate::loader::elfv1::Descriptors {
        &self.elfv1
    }

    /// Executable `(vma, size)` extents. Sectionless ELF images use PF_X
    /// PT_LOAD ranges, including their in-memory tails.
    pub fn executable_ranges(&self) -> Vec<(u64, u64)> {
        if self.sections.is_empty() {
            return self.executable_segments.clone();
        }
        self.sections
            .iter()
            .filter(|s| s.flags & section_flags::CODE != 0)
            .map(|s| (s.vma, s.size))
            .collect()
    }

    /// (unlace) The `[start, stop]` (inclusive) ranges whose contents fold to a
    /// constant with the program-wide `option readonly` still off — the
    /// `PT_GNU_RELRO`-frozen dynamic-relocation slots (`dynrelocs`) on a linked
    /// image, the MSVC `__real@` FP-constant COMDATs (`msvcfpconst`) on a
    /// relocatable object.
    ///
    /// `get_readonly` already reports them, which paints `Varnode::readonly` — but
    /// the constant FOLD of a read-only global is gated globally by `option
    /// readonly` (`Architecture::readonlypropagate`, default off, and turning it on
    /// would fold every `.rodata` read in the program). These ranges are the
    /// narrow exception: values the LINKER computed, in memory the loader
    /// `mprotect`s read-only before `main`. The engine carries them on
    /// `Architecture::dynreloc_const` and `ActionVarnodeProps` folds a read-only
    /// varnode inside one even when global propagation is off.
    pub fn dynreloc_const_ranges(&self) -> &[(u64, u64)] {
        &self.dynreloc_const
    }

    /// (unlace `pltlocal`) `(stub, definition)` for each PLT stub the image's own
    /// relocations bind to a function it defines, ascending by stub.
    pub fn plt_local_targets(&self) -> &[(u64, u64)] {
        &self.plt_local
    }

    /// The MIPS ELF lazy-binding stubs and GOT-proven imports; `None` for any
    /// other image.
    pub fn mips_linkage(&self) -> Option<&crate::loader::mipsstubs::MipsLinkage> {
        self.mips_linkage.as_ref()
    }

    /// (unlace `globalref`) Sorted, merged `[start, stop]` ranges of the sections
    /// a program's own data objects live in ([`crate::loader::globalref`]).
    pub fn data_object_ranges(&self) -> &[(u64, u64)] {
        &self.data_objects
    }

    /// (unlace) The image's import pointer slots as half-open `[lo, hi)` VMA
    /// ranges — the PE Import Address Table words.
    ///
    /// The loader registers a `FunctionSymbol` at each slot so a
    /// `call dword ptr [slot]` renders the import name, and that registration is
    /// what a name-keyed lookup and an explicit `--addr` selection resolve
    /// through. It is not a claim that a function BODY starts there: the slot
    /// holds a pointer the run-time loader writes. The engine reports these
    /// ranges so its whole-binary enumeration can decompile the image's code
    /// without inventing a body for every import.
    pub fn nullable_relocations(&self) -> &[unlace_decomp::nullable_reloc::NullableRelocation] {
        &self.nullable_relocations
    }

    pub fn import_slot_ranges(&self) -> &[(u64, u64)] {
        &self.import_slots
    }

    /// (unlace) `(alias, canonical)` VMA pairs for one function the image names
    /// at two addresses, such as a weak import's direct address and its slot.
    pub fn function_address_aliases(&self) -> &[(u64, u64)] {
        &self.function_address_aliases
    }

    /// The loader's function symbols as `(load_vma, name)` pairs — the SAME list
    /// `getNextSymbol` yields, but already **rebased** to the load VMA (for an
    /// `ET_REL` `.o` the raw `object` symbol address is section-relative; the
    /// loader's layout pass rebases each `SHF_ALLOC` section above
    /// [`RELOC_BASE`](crate::loader::reloc_object::RELOC_BASE) and rebases the
    /// symbols with it). Exposed for the FID generator
    /// ([`crate::fid::build`]), which needs the rebased `(addr, name)` to seed
    /// the Listing and label the hashed functions — the raw `object::File`
    /// addresses would point into the unrebased `.o` and miss every instruction.
    /// Names are lossy-UTF-8 decoded (the marshal convention stores them as bytes).
    pub fn func_symbols(&self) -> Vec<(u64, String)> {
        self.funcsyms
            .iter()
            .map(|s| (s.addr, String::from_utf8_lossy(&s.name).into_owned()))
            .collect()
    }

    /// The `(address, size)` of each function symbol whose symbol table states
    /// a size, sorted by address, the largest when names share one; raw
    /// addresses, Thumb bit included, rebased as [`Self::func_symbols`] is.
    pub fn func_symbol_sizes(&self) -> Vec<(u64, u64)> {
        let mut out: Vec<(u64, u64)> = self
            .funcsyms
            .iter()
            .chain(&self.funcsym_aliases)
            .filter(|s| s.size > 0)
            .map(|s| (s.addr, s.size))
            .collect();
        out.sort_unstable_by(|a, b| a.0.cmp(&b.0).then(b.1.cmp(&a.1)));
        out.dedup_by_key(|s| s.0);
        out
    }

    /// The function names [`Self::func_symbols`] leaves out because an earlier
    /// name holds the same address (a local veneer ahead of its global, a weak
    /// alias beside its strong symbol, a second Mach-O `nlist` label at one entry,
    /// a MinGW `_fpreset` beside `fpreset`). Lookup-only aliases, never the
    /// reported name; raw addresses, Thumb bit included. A Mach-O export's C
    /// spelling (`audit_export_a` for `_audit_export_a`) is not a second name:
    /// lookup already accepts it.
    pub fn func_symbol_aliases(&self) -> Vec<(u64, String)> {
        self.funcsym_aliases
            .iter()
            .map(|s| (s.addr, String::from_utf8_lossy(&s.name).into_owned()))
            .collect()
    }

    /// The original section coordinates retained for a relocatable object.
    /// Empty for a linked image.
    pub fn reloc_sections(&self) -> &[crate::loader::reloc_object::RelocSectionInfo] {
        &self.reloc_sections
    }

    /// Function-symbol provenance retained for a relocatable object. Defined
    /// records carry section coordinates; undefined records carry their
    /// synthetic extern VMA and no object location.
    /// These records contain functions only: undefined symbols require either
    /// a function symbol kind or external call/branch relocation evidence.
    /// Data-only external references have allocated VMAs but no record here.
    pub fn reloc_symbols(&self) -> &[crate::loader::reloc_object::RelocSymbolInfo] {
        &self.reloc_symbols
    }

    /// The loader's **data** symbols as `(vma, name, size)` triples — the
    /// `STT_OBJECT` half of the same `.symtab`/`.dynsym` walks [`Self::func_symbols`]
    /// reads, filtered to defined, named, non-zero-size entries (see [`DataSym`]).
    ///
    /// The engine installs each as a named, `undefined<size>`-typed global so a
    /// memory access of the object renders the symbol name (`optind`) rather than
    /// `dat_<addr>`, matching IDA Pro and Ghidra. A relocatable object's entries
    /// carry their section's synthetic load VMA.
    pub fn data_symbols(&self) -> Vec<(u64, String, u64)> {
        self.datasyms
            .iter()
            .map(|s| {
                (
                    s.addr,
                    String::from_utf8_lossy(&s.name).into_owned(),
                    s.size,
                )
            })
            .collect()
    }

    /// A PE or Mach-O image's data exports as `(vma, name)`: the named exports outside
    /// every code section. They carry no extent, so they name addresses for
    /// lookup only and never become globals.
    pub fn data_exports(&self) -> &[(u64, String)] {
        &self.data_exports
    }

    /// The Mach-O dependency list and `LC_RPATH` run paths; see [`crate::loader::macho_dylibs`].
    pub fn macho_dependencies(&self) -> &crate::loader::macho_dylibs::MachODependencies {
        &self.macho_dependencies
    }

    /// Write `data` over the mapped bytes at `vma` (the write twin of
    /// [`SegmentBytes::fill_span`], and the loader half of `--assert bytes`).
    ///
    /// Resolved through [`SegmentBytes::find_section`] so an overlay lands in
    /// exactly the segment a read at the same address would come from, and
    /// refused unless that segment maps the whole span: a partial write would
    /// leave half a stated instruction stream in place, which is worse than not
    /// taking the statement at all.  A span reaching into the segment's
    /// zero-filled RAM tail materialises that tail first — the caller is stating
    /// what the running program put there, which is precisely a `.bss`-style
    /// region's content.
    fn overlay_span(&mut self, vma: u64, data: &[u8]) -> Result<(), String> {
        if data.is_empty() {
            return Err("an overlay needs at least one byte".into());
        }
        let end = vma
            .checked_add(data.len() as u64) // cast: overlay byte count
            .ok_or_else(|| "the overlay wraps past the end of the address space".to_string())?;
        let bytes = Arc::get_mut(&mut self.bytes).ok_or_else(|| {
            "cannot overlay image bytes while a shared decode view is active".to_string()
        })?;
        let idx = bytes
            .find_section(vma)
            .filter(|(idx, secsize)| {
                let seg_vma = bytes.segments[*idx].vma;
                vma >= seg_vma && end <= seg_vma.wadd(*secsize)
            })
            .map(|(idx, _)| idx)
            .ok_or_else(|| format!("no loaded segment maps {vma:#x}-{end:#x}"))?;
        let seg = &mut bytes.segments[idx];
        let off = (vma - seg.vma) as usize; // cast: offset within a mapped segment
        let stop = off + data.len();
        let segment = seg.data.make_owned();
        if stop > segment.len() {
            segment.resize(stop, 0);
        }
        segment[off..stop].copy_from_slice(data);
        // The 512-byte read window may straddle what just moved; drop it.
        *self.bufoffset.borrow_mut() = !0u64;
        Ok(())
    }
}

impl LoadImage for ObjectLoadImage {
    fn arm_vfp_args(&self) -> bool {
        self.arm_vfp_args
    }

    fn float_arg_registers(&self) -> Option<bool> {
        self.float_arg_registers
    }

    fn float_hardware(&self) -> Option<bool> {
        self.float_hardware
    }

    fn callee_extends_returns(&self) -> Option<bool> {
        self.callee_extends_returns
    }

    fn get_file_name(&self) -> &str {
        &self.filename
    }

    fn unlace_runtime_written(&self) -> Option<Vec<(u64, u64)>> {
        self.runtime_written.clone()
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        let space = addr
            .get_space()
            .expect("ObjectLoadImage::loadFill: address with null space (C++ UB)");
        match &self.spaceid {
            Some(sp) if Rc::ptr_eq(sp, space) => {}
            _ => {
                return Err(UnlaceError::data_unavail(format!(
                    "Trying to get loadimage bytes from space: {}",
                    space.get_name()
                )));
            }
        }
        windowed_load_fill(&*self.bytes, &self.buffer, &self.bufoffset, ptr, addr)
    }

    fn shared_bytes(&self) -> Option<Arc<dyn ImageBytes>> {
        Some(Arc::clone(&self.bytes) as Arc<dyn ImageBytes>)
    }

    fn read_window(&self) -> Option<u64> {
        Some(*self.bufoffset.borrow())
    }

    fn restore_read_window(&self, offset: u64) {
        restore_window(&*self.bytes, &self.buffer, &self.bufoffset, offset);
    }

    fn open_symbols(&self) {
        *self.cursymbol.borrow_mut() = 0;
    }

    fn get_next_symbol(&self, record: &mut LoadImageFunc) -> bool {
        let mut cur = self.cursymbol.borrow_mut();
        if *cur >= self.funcsyms.len() {
            return false;
        }
        let sym = &self.funcsyms[*cur];
        *cur += 1;
        record.name = sym.name.clone();
        let space = self
            .spaceid
            .as_ref()
            .expect("ObjectLoadImage::getNextSymbol before attachToSpace (C++ null space)");
        record.address = Address::new(Rc::clone(space), sym.addr);
        true
    }

    fn open_section_info(&self) {
        *self.cursection.borrow_mut() = 0;
    }

    fn get_next_section(&self, record: &mut LoadImageSection) -> bool {
        let mut cur = self.cursection.borrow_mut();
        if *cur >= self.sections.len() {
            return false;
        }
        let sec = &self.sections[*cur];
        let space = self
            .spaceid
            .as_ref()
            .expect("ObjectLoadImage::getNextSection before attachToSpace (C++ null space)");
        record.address = Address::new(Rc::clone(space), sec.vma);
        record.size = sec.size;
        record.flags = sec.flags;
        *cur += 1;
        // C++ returns whether *another* section follows.
        *cur < self.sections.len()
    }

    fn get_segments(&self) -> Vec<(u64, u64, u32)> {
        self.segment_info
            .iter()
            .map(|s| (s.vma, s.size, s.flags))
            .collect()
    }

    fn inaccessible_segments(&self) -> Vec<(u64, u64)> {
        self.inaccessible_segments.clone()
    }

    fn unlace_overlay_bytes(&mut self, addr: &Address, data: &[u8]) -> UnlaceResult<()> {
        let space = addr
            .get_space()
            .expect("ObjectLoadImage::unlace_overlay_bytes: address with null space");
        match &self.spaceid {
            Some(sp) if Rc::ptr_eq(sp, space) => {}
            _ => {
                return Err(UnlaceError::data_unavail(format!(
                    "Trying to overlay loadimage bytes in space: {}",
                    space.get_name()
                )));
            }
        }
        self.overlay_span(addr.get_offset(), data)
            .map_err(UnlaceError::data_unavail)
    }

    fn get_readonly(&self, list: &mut RangeList) {
        // List all ranges that are read only (C++ `LoadImageBfd::getReadonly`).
        let Some(space) = self.spaceid.as_ref() else {
            return;
        };
        // (unlace) The MIPS GOT external slots, marked constant so the engine folds
        // the `lw $t9, off($gp)` indirect-call load to the stub address (the analog
        // of Ghidra's `setConstant` on the GOT pointer entries).  Empty off-MIPS.
        for &(start, stop) in &self.const_ranges {
            list.insert_range(Rc::clone(space), start, stop);
        }
        // (unlace) The constant-by-construction ranges: the dynamic-relocation slots
        // `PT_GNU_RELRO` freezes (read-only in the run-time image, so their
        // relocated contents are trustworthy) and the MSVC `__real@` FP-constant
        // COMDATs (whose value is spelled in the symbol name).
        for &(start, stop) in &self.dynreloc_const {
            list.insert_range(Rc::clone(space), start, stop);
        }
        for sec in &self.sections {
            if sec.flags & section_flags::READONLY != 0 {
                if sec.size == 0 {
                    continue;
                }
                let start = sec.vma;
                let stop = start.wadd(sec.size).wsub(1);
                list.insert_range(Rc::clone(space), start, stop);
            }
        }
    }

    fn get_arch_type(&self) -> Vec<u8> {
        self.archtype.clone()
    }

    fn adjust_vma(&mut self, adjust: i64) {
        // C++ `LoadImageBfd::adjustVma` (`loadimage_bfd.cc:67`): scale the shift by wordsize.
        let spaceid = self
            .spaceid
            .as_ref()
            .expect("ObjectLoadImage::adjustVma before attachToSpace (C++ null space deref)");
        let badjust = AddrSpace::address_to_byte(adjust as u64, spaceid.get_word_size());
        let bytes = Arc::get_mut(&mut self.bytes).expect("image bytes already shared");
        for s in &mut bytes.segments {
            s.vma = s.vma.wadd(badjust);
        }
        for s in &mut self.sections {
            s.vma = s.vma.wadd(badjust);
        }
        for s in &mut self.segment_info {
            s.vma = s.vma.wadd(badjust);
        }
        for (vma, _) in self
            .executable_segments
            .iter_mut()
            .chain(&mut self.inaccessible_segments)
        {
            *vma = vma.wadd(badjust);
        }
        self.elfv1.adjust_vma(badjust);
        self.elf_functions.definitions = self
            .elf_functions
            .definitions
            .drain()
            .map(|addr| addr.wadd(badjust))
            .collect();
        self.elf_functions.imports = self
            .elf_functions
            .imports
            .drain()
            .map(|addr| addr.wadd(badjust))
            .collect();
        for s in self.funcsyms.iter_mut().chain(&mut self.funcsym_aliases) {
            s.addr = s.addr.wadd(badjust);
        }
        for s in &mut self.section_metadata {
            s.vma = s.vma.wadd(badjust);
        }
        if let Some(entry) = &mut self.image_entry {
            *entry = entry.wadd(badjust);
        }
        for r in &mut self.const_ranges {
            r.0 = r.0.wadd(badjust);
            r.1 = r.1.wadd(badjust);
        }
        for r in self
            .dynreloc_const
            .iter_mut()
            .chain(self.runtime_written.iter_mut().flatten())
        {
            r.0 = r.0.wadd(badjust);
            r.1 = r.1.wadd(badjust);
        }
        for r in &mut self.nullable_relocations {
            r.field = r.field.wadd(badjust);
            r.symbol = r.symbol.wadd(badjust);
            if r.slot != 0 {
                r.slot = r.slot.wadd(badjust);
            }
        }
        for r in self
            .function_address_aliases
            .iter_mut()
            .chain(&mut self.import_slots)
        {
            r.0 = r.0.wadd(badjust);
            r.1 = r.1.wadd(badjust);
        }
        for r in &mut self.plt_local {
            r.0 = r.0.wadd(badjust);
            r.1 = r.1.wadd(badjust);
        }
        if let Some(linkage) = &mut self.mips_linkage {
            for r in &mut linkage.transfers {
                r.0 = r.0.wadd(badjust);
                r.1 = r.1.wadd(badjust);
            }
        }
        for r in &mut self.data_objects {
            r.0 = r.0.wadd(badjust);
            r.1 = r.1.wadd(badjust);
        }
        // A shifted segment set may no longer be vma-sorted only if `badjust`
        // wraps a subset past the top of the space; for a real ELF every vma
        // shifts by the same amount so the order is preserved (matching BFD,
        // which never re-sorts).
    }
}

/// Resolve the SLEIGH **language id** for an object (the `getArchType` payload).
/// This is the unlace substitution for the Ghidra Java-side BFD-name -> language
/// map: it reads the machine + endianness + class directly and returns the id
/// `SleighArchitecture::resolveArchitecture` consumes (e.g.
/// `x86:LE:64:default:gcc`).
///
/// The arch -> language-stem match is format-independent (`object` collapses
/// `e_machine`/`IMAGE_FILE_MACHINE_*`/Mach-O `cputype` into one
/// [`Architecture`]). The compiler-model field comes from
/// [`ObjectFormat::compiler_model`](crate::loader::format::ObjectFormat::compiler_model),
/// falling back to the per-architecture default (`gcc`/`default`) when the
/// format has no model for that architecture.
///
/// PARTIAL: covers the common machines unlace ships a `.sla` for.  An unmapped
/// machine is a `LowlevelError` naming it (the caller falls back to an explicit
/// `--target` language id).
fn language_id_for(
    file: &object::File,
    fmt: &dyn crate::loader::format::ObjectFormat,
    bytes: &[u8],
    filename: &str,
    arch: Architecture,
    target: Option<&str>,
) -> UnlaceResult<Vec<u8>> {
    if let Some(target) = target {
        return Ok(target.as_bytes().to_vec());
    }
    if let Some(id) = crate::loader::mipsocteon::language_id(file).map_err(|error| {
        UnlaceError::lowlevel(format!(
            "File: {filename}: {error}; pass an explicit --target"
        ))
    })? {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::arctarget::language_id(file) {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::elfmachinetarget::language_id(file) {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::ppcaputarget::language_id(file) {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::nanomips::language_id(file) {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::ppc64elfv2target::language_id(file) {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::mipstarget::language_id(file)? {
        return Ok(id.into_bytes());
    }
    if let Some(id) = crate::loader::riscvzc::language_id(file).map_err(|error| {
        UnlaceError::lowlevel(format!(
            "File: {filename}: {error}; pass an explicit --target"
        ))
    })? {
        return Ok(id.into_bytes());
    }
    let little = file.is_little_endian();
    let endian = if little { "LE" } else { "BE" };
    // (PR-8 §3.7) Pointer-auth arm64e spec selection, GATED + opt-in: an arm64e
    // Mach-O (`cpusubtype` CPU_SUBTYPE_ARM64E) selects the Apple-Silicon SLEIGH
    // spec (`AARCH64:LE:64:AppleSilicon`) instead of the generic v8A. This is the
    // ONLY thing arm64e changes (import naming / symbols are unaffected). On by
    // default (the `macho-arm64e` gate); unless it is off, on an arm64e Mach-O
    // the AppleSilicon id wins over the composed `v8A` id below.
    if let Some(apple_id) = crate::loader::format::macho::apple_silicon_id(fmt, arch, bytes) {
        return Ok(apple_id.into_bytes());
    }
    // The format's default-ABI compiler model for this arch.  For ELF this is
    // `gcc` (x86/RISCV) / `default` (everything else), reproducing the old
    // hard-coded id strings exactly.
    let model = fmt.compiler_model(arch);
    // (unlace `goabi`) A Go image takes the vendored golang compiler spec on the
    // three architectures that ship one: Go's register ABI is not the platform
    // C ABI (RAX/RBX/… carry arguments and multiple returns on x86-64), so
    // under the default model every Go function's parameters are invisible and
    // a second return value is dead-coded away with the statements feeding it.
    // Cheap gates first: the env toggle (`option goabi off` clears it), the
    // arch allowlist, then language detection (which honours the
    // `UNLACE_SOURCELANG` force). Everything else keeps `model` untouched, and
    // the engine's default-model retry covers a spec that fails to load.
    let model = if unlace_decomp::goabi::goabi_env_enabled()
        && little
        && matches!(
            arch,
            Architecture::X86_64 | Architecture::I386 | Architecture::Aarch64
        )
        && crate::sourcelang::effective_compiler(file, bytes).is_golang()
    {
        Some("golang")
    } else {
        model
    };
    // (unlace `delphiabi`) A 32-bit Delphi PE takes the vendored Delphi compiler
    // spec, whose default model is the `register` convention (EAX, EDX, ECX,
    // then the stack). Under the `windows` model those three registers are not
    // inputs, so every method loses `Self` and its first arguments.
    let model = if unlace_decomp::delphiabi::delphiabi_enabled()
        && arch == Architecture::I386
        && file.format() == object::BinaryFormat::Pe
        && crate::delphi::is_delphi_image(file)
    {
        Some("borlanddelphi")
    } else {
        model
    };
    let id: String = match compose_language_id(arch, endian, model) {
        Some(id) => id,
        None => {
            return Err(UnlaceError::lowlevel(format!(
                "File: {filename} : unsupported machine {arch:?} \
                 (no unlace SLEIGH language; pass an explicit --target language id)"
            )));
        }
    };
    Ok(id.into_bytes())
}

/// The per-arch *default-model* fallback language id (design §2.2): the same
/// arch/endian stem as `primary`, but with the compiler model dropped to the
/// per-arch default (`compose_language_id(arch, endian, None)` — `gcc` for
/// x86/RISCV, `default` elsewhere). Returns `Some` only when it differs from
/// `primary` (so an ELF, whose primary already uses the default model, gets
/// `None` — no behavior change on the established path).
///
/// The engine uses this as a one-step retry: if a format's chosen model (e.g.
/// PE's `:windows`) is not vendored for this arch, falling back to the arch
/// default beats erroring out — wrong calling-convention details still yield a
/// decompile.
fn fallback_language_id(
    file: &object::File,
    arch: Architecture,
    primary: &[u8],
) -> Option<Vec<u8>> {
    if file.format() == object::BinaryFormat::Elf && arch == Architecture::PowerPc {
        return None;
    }
    if file.format() == object::BinaryFormat::Elf
        && matches!(
            arch,
            Architecture::Mips | Architecture::Mips64 | Architecture::Mips64_N32
        )
    {
        return None;
    }
    let endian = if file.is_little_endian() { "LE" } else { "BE" };
    let fallback = compose_language_id(arch, endian, None)?;
    if fallback.as_bytes() == primary {
        None
    } else {
        Some(fallback.into_bytes())
    }
}

use object::pe::{IMAGE_FILE_MACHINE_ARM, IMAGE_FILE_MACHINE_ARMNT, IMAGE_FILE_MACHINE_THUMB};

/// Parse an object, including bare THUMB COFF omitted by `object`'s magic dispatch.
pub fn parse_object(bytes: &[u8]) -> object::read::Result<object::File<'_>> {
    if bytes.starts_with(&IMAGE_FILE_MACHINE_THUMB.to_le_bytes()) {
        object::read::coff::CoffFile::parse(bytes).map(object::File::Coff)
    } else {
        object::File::parse(bytes)
    }
}

/// Architecture used for language selection when the neutral parser does not
/// recognize a container's machine value. PE/COFF machines `0x01c0` (`ARM`)
/// and `0x01c2` (`THUMB`) are both documented 32-bit little-endian ARM code
/// values the parser leaves `Unknown`; what each says about the decode mode is
/// [`pe_arm_mode_policy`]'s question, not this one's.
pub fn effective_architecture(file: &object::File, bytes: &[u8]) -> Architecture {
    let parsed = file.architecture();
    if parsed != Architecture::Unknown {
        return parsed;
    }
    match container_machine(file, bytes) {
        Some(IMAGE_FILE_MACHINE_ARM | IMAGE_FILE_MACHINE_THUMB) => Architecture::Arm,
        _ => parsed,
    }
}

/// The PE-family machine words unlace ships a SLEIGH language for. One list,
/// read by the bare-COFF dispatcher, the TE probe, and both loaders' machine
/// tables, so a machine added to one is added to all.
pub const PE_MACHINES: [u16; 6] = [
    object::pe::IMAGE_FILE_MACHINE_I386,
    object::pe::IMAGE_FILE_MACHINE_AMD64,
    IMAGE_FILE_MACHINE_ARM,
    IMAGE_FILE_MACHINE_THUMB,
    IMAGE_FILE_MACHINE_ARMNT,
    object::pe::IMAGE_FILE_MACHINE_ARM64,
];

/// The `object` architecture a PE-family machine word names, for
/// [`PE_MACHINES`]. The three ARM words share one architecture; what each says
/// about the decode mode is [`pe_arm_mode_policy`]'s question.
pub fn pe_machine_architecture(machine: u16) -> Option<Architecture> {
    Some(match machine {
        object::pe::IMAGE_FILE_MACHINE_I386 => Architecture::I386,
        object::pe::IMAGE_FILE_MACHINE_AMD64 => Architecture::X86_64,
        IMAGE_FILE_MACHINE_ARM | IMAGE_FILE_MACHINE_THUMB | IMAGE_FILE_MACHINE_ARMNT => {
            Architecture::Arm
        }
        object::pe::IMAGE_FILE_MACHINE_ARM64 => Architecture::Aarch64,
        _ => return None,
    })
}

/// Whether a SLEIGH language id decodes as 32-bit ARM (processor `ARM`, width
/// `32`) — the property every Thumb-bit rule keys on.
pub fn is_arm32_language(arch_id: &str) -> bool {
    let mut fields = arch_id.split(':');
    fields.next() == Some("ARM") && fields.nth(1) == Some("32")
}

/// What a PE-family machine word says about the ARM decode mode.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ArmModePolicy {
    /// The whole instruction stream is Thumb.
    WholeImageThumb,
    /// Only the entry's low bit is evidence; the `entrythumbflow` walk carries
    /// it along the reachable flow.
    EntryBit,
}

/// The one table both PE-family loaders read. `ARMNT` is Thumb-only by
/// definition on every container and `ARM` may interwork on every container;
/// `THUMB` (`0x1c2`) is the word the two families read differently. Windows
/// names it Thumb and a PE carrying it is painted as such; the UEFI bindings
/// name the same value `ARMTHUMB_MIXED` and its modules interwork, so a TE
/// carrying it relies on the entry bit. That is a container-family decision,
/// and it is made here once rather than in each loader.
pub fn pe_arm_mode_policy(machine: u16, uefi_te: bool) -> Option<ArmModePolicy> {
    match machine {
        IMAGE_FILE_MACHINE_ARMNT => Some(ArmModePolicy::WholeImageThumb),
        IMAGE_FILE_MACHINE_THUMB if !uefi_te => Some(ArmModePolicy::WholeImageThumb),
        IMAGE_FILE_MACHINE_THUMB | IMAGE_FILE_MACHINE_ARM => Some(ArmModePolicy::EntryBit),
        _ => None,
    }
}

/// Container-level whole-image ARM decode-mode evidence for a PE/COFF image:
/// `Some(true)` when [`pe_arm_mode_policy`] says the whole stream is Thumb.
/// Other formats and machines provide no whole-image hint.
pub fn arm_isa_hint(file: &object::File, bytes: &[u8]) -> Option<bool> {
    match pe_arm_mode_policy(container_machine(file, bytes)?, false)? {
        ArmModePolicy::WholeImageThumb => Some(true),
        ArmModePolicy::EntryBit => None,
    }
}

/// The normalized entry of a PE image whose machine word leaves the mode to the
/// entry bit and whose `AddressOfEntryPoint` carries it: the seed for the
/// `entrythumbflow` walk. `None` for every other image.
pub fn arm_entry_thumb_hint(file: &object::File, bytes: &[u8]) -> Option<u64> {
    if pe_arm_mode_policy(container_machine(file, bytes)?, false)? != ArmModePolicy::EntryBit {
        return None;
    }
    let (entry, thumb) = crate::analyzers::entry::image_code_entry(file, bytes)?;
    thumb.then_some(entry)
}

fn container_machine(file: &object::File, bytes: &[u8]) -> Option<u16> {
    match file.format() {
        object::BinaryFormat::Pe => pe_machine(bytes),
        object::BinaryFormat::Coff => bytes
            .get(..2)
            .map(|raw| u16::from_le_bytes([raw[0], raw[1]])),
        _ => None,
    }
}

fn pe_machine(bytes: &[u8]) -> Option<u16> {
    let pe_offset = u32::from_le_bytes(bytes.get(0x3c..0x40)?.try_into().ok()?) as usize;
    if bytes.get(pe_offset..pe_offset.checked_add(4)?)? != b"PE\0\0" {
        return None;
    }
    let machine = bytes.get(pe_offset.checked_add(4)?..pe_offset.checked_add(6)?)?;
    Some(u16::from_le_bytes([machine[0], machine[1]]))
}

/// Empty input and the `default` sentinel request container-derived selection,
/// including the normal compiler-model fallback.
pub fn explicit_language_target(target: &str) -> Option<&str> {
    match target.trim() {
        "" | "default" => None,
        target => Some(target),
    }
}

/// An explicit target whose endian field contradicts the container's. Reported,
/// not refused: `--target` overrides what the container declares, and forcing a
/// byte-swapped decode of a mislabeled image is a legitimate use of it.
fn target_endian_note(file: &object::File, target: &str) -> Option<String> {
    let endian = target
        .split(':')
        .nth(1)
        .filter(|value| matches!(*value, "LE" | "BE"))?;
    let container = if file.is_little_endian() { "LE" } else { "BE" };
    (endian != container).then(|| {
        format!("target {target:?} is {endian}-endian but the container is {container}-endian")
    })
}

/// Compose the SLEIGH language id from the format-neutral `arch` + `endian`
/// stem and the per-format compiler `model`. `None` for an arch unlace has no
/// `.sla` stem for. The single source of truth for the id string shape, shared
/// by [`language_id_for`] and [`elf_language_ids`] so the resolves-in-the-DB
/// test cannot drift from the producer.
pub(crate) fn compose_language_id(
    arch: Architecture,
    endian: &str,
    model: Option<&str>,
) -> Option<String> {
    Some(match arch {
        Architecture::X86_64 => format!("x86:LE:64:default:{}", model.unwrap_or("gcc")),
        Architecture::I386 => format!("x86:LE:32:default:{}", model.unwrap_or("gcc")),
        Architecture::Aarch64 => format!("AARCH64:{endian}:64:v8A:{}", model.unwrap_or("default")),
        Architecture::Aarch64_Ilp32 => {
            format!("AARCH64:{endian}:32:ilp32:{}", model.unwrap_or("default"))
        }
        Architecture::Arm => format!("ARM:{endian}:32:v8:{}", model.unwrap_or("default")),
        Architecture::Mips => format!("MIPS:{endian}:32:default:{}", model.unwrap_or("default")),
        Architecture::PowerPc => {
            format!("PowerPC:{endian}:32:default:{}", model.unwrap_or("default"))
        }
        Architecture::PowerPc64 => {
            format!("PowerPC:{endian}:64:default:{}", model.unwrap_or("default"))
        }
        Architecture::Riscv64 => format!("RISCV:{endian}:64:RV64GC:{}", model.unwrap_or("gcc")),
        Architecture::Riscv32 => format!("RISCV:{endian}:32:RV32GC:{}", model.unwrap_or("gcc")),
        Architecture::Sparc | Architecture::Sparc32Plus => {
            format!("sparc:{endian}:32:default:{}", model.unwrap_or("default"))
        }
        Architecture::Sparc64 => {
            format!("sparc:{endian}:64:default:{}", model.unwrap_or("default"))
        }
        Architecture::Bpf => format!("eBPF:{endian}:64:default:{}", model.unwrap_or("default")),
        Architecture::S390x => format!("s390x:BE:64:default:{}", model.unwrap_or("default")),
        Architecture::Hexagon => format!("Hexagon:LE:32:default:{}", model.unwrap_or("default")),
        _ => return None,
    })
}

/// The inclusive pieces of the half-open `range` that none of the half-open
/// `holes` covers.
fn outside((lo, hi): (u64, u64), holes: &[(u64, u64)]) -> Vec<(u64, u64)> {
    let mut holes: Vec<_> = holes
        .iter()
        .copied()
        .filter(|&(a, b)| a < hi && b > lo)
        .collect();
    holes.sort_unstable();
    let mut out = Vec::new();
    let mut at = lo;
    for (a, b) in holes {
        if a > at {
            out.push((at, a - 1));
        }
        at = at.max(b);
    }
    if at < hi {
        out.push((at, hi - 1));
    }
    out
}

/// Every SLEIGH language id the **ELF** loader (`ElfFormat` + [`language_id_for`])
/// can produce, for both endiannesses, over the supported ELF machines. This is
/// the exact set a real ELF resolves to today — exposed so the cross-crate
/// console gate (`verify_elf_language_ids`) can assert every one of them resolves
/// in the SLEIGH language database (`scan_language_database`), proving the §2.2
/// `compiler_model` refactor still yields only valid, vendored ids. Derived from
/// the same [`compose_language_id`] + [`crate::loader::format::elf::ElfFormat`]
/// the loader uses, so it cannot drift from the producer.
pub fn elf_language_ids() -> Vec<String> {
    use crate::loader::format::ObjectFormat;
    use crate::loader::format::elf::ElfFormat;
    let fmt = ElfFormat;
    // Per arch, the endiannesses a real ELF actually carries *and* the vendored
    // `.ldefs` declare a stem for (so each enumerated id is one a real binary
    // resolves to): x86 is LE-only; RISC-V is LE-only; SPARC is BE-only; the
    // bi-endian arches (ARM/AArch64/MIPS/PowerPC) ship both. `language_id_for`
    // composes the id from the binary's real endianness, so this is exactly the
    // reachable id set, not a cartesian over-generation.
    let arches: &[(Architecture, &[&str])] = &[
        (Architecture::X86_64, &["LE"]),
        (Architecture::I386, &["LE"]),
        (Architecture::Aarch64, &["LE", "BE"]),
        (Architecture::Arm, &["LE", "BE"]),
        (Architecture::Mips, &["LE", "BE"]),
        (Architecture::PowerPc, &["LE", "BE"]),
        (Architecture::PowerPc64, &["LE", "BE"]),
        (Architecture::Riscv64, &["LE"]),
        (Architecture::Riscv32, &["LE"]),
        (Architecture::Sparc, &["BE"]),
        (Architecture::Sparc64, &["BE"]),
        (Architecture::Bpf, &["LE", "BE"]),
        (Architecture::S390x, &["BE"]),
        (Architecture::Hexagon, &["LE"]),
    ];
    let mut out = Vec::new();
    for &(arch, endians) in arches {
        for &endian in endians {
            if let Some(id) = compose_language_id(arch, endian, fmt.compiler_model(arch)) {
                out.push(id);
            }
        }
    }
    // (unlace `goabi`) The golang-model ids a Go ELF composes on the three
    // architectures that vendor a golang cspec (LE only — Go has no big-endian
    // target among them), so the resolves-in-the-DB gate proves them too.
    for arch in [
        Architecture::X86_64,
        Architecture::I386,
        Architecture::Aarch64,
    ] {
        if let Some(id) = compose_language_id(arch, "LE", Some("golang")) {
            out.push(id);
        }
    }
    // (unlace `delphiabi`) The Delphi-model id a Delphi PE composes.
    if let Some(id) = compose_language_id(Architecture::I386, "LE", Some("borlanddelphi")) {
        out.push(id);
    }
    out.extend(crate::loader::arctarget::language_ids());
    out.extend(crate::loader::elfmachinetarget::language_ids());
    out.extend(crate::loader::ppcaputarget::language_ids());
    out.extend(crate::loader::ppc64elfv2target::language_ids());
    out.extend(crate::loader::mipstarget::language_ids());
    out.extend(crate::loader::mipsocteon::language_ids());
    out.extend(crate::loader::riscvzc::language_ids());
    out.extend(crate::loader::nanomips::language_ids());
    out.sort();
    out.dedup();
    out
}

/// Every SLEIGH language id a given [`crate::loader::format::ObjectFormat`]
/// produces over `arches`, paired with the *fallback* id [`fallback_language_id`]
/// would compute for the same arch/endian (design §2.2). The console gate
/// (`verify_object_language_ids`) asserts that for every entry **either the
/// primary or the fallback resolves** in the SLEIGH DB — proving the per-format
/// `compiler_model` tokens are real, vendored ids (or that the fallback rule
/// saves a non-vendored model from erroring). Derived from the same
/// [`compose_language_id`] the loader uses, so it cannot drift from the producer.
///
/// `arches` is `(arch, endians, machine-is-LE/BE-on-disk)`; the third flag is
/// what `is_little_endian()` would report (it drives the fallback's endian), so
/// the enumerated pair is exactly what a real binary of that arch produces.
pub fn format_language_ids(
    fmt: &dyn crate::loader::format::ObjectFormat,
    arches: &[(Architecture, &[&str])],
) -> Vec<(String, Option<String>)> {
    let mut out = Vec::new();
    for &(arch, endians) in arches {
        for &endian in endians {
            if let Some(primary) = compose_language_id(arch, endian, fmt.compiler_model(arch)) {
                // The §2.2 fallback for the same stem: the default-model id, if it
                // differs from the primary.
                let fallback = compose_language_id(arch, endian, None).filter(|fb| *fb != primary);
                out.push((primary, fallback));
            }
        }
    }
    out.sort();
    out.dedup();
    out
}

/// The arch/endian set a **PE** image realistically carries (the Windows arches
/// unlace ships a `.sla` for): x86 (LE only), ARM/AArch64 (LE only on Windows).
pub fn pe_language_ids() -> Vec<(String, Option<String>)> {
    use crate::loader::format::pe::PeFormat;
    format_language_ids(
        &PeFormat,
        &[
            (Architecture::X86_64, &["LE"]),
            (Architecture::I386, &["LE"]),
            (Architecture::Aarch64, &["LE"]),
            (Architecture::Arm, &["LE"]),
        ],
    )
}

/// The arch/endian set a **Mach-O** image realistically carries: x86-64 (LE) and
/// arm64 (LE) — the two macOS arches.
pub fn macho_language_ids() -> Vec<(String, Option<String>)> {
    use crate::loader::format::macho::MachOFormat;
    format_language_ids(
        &MachOFormat,
        &[
            (Architecture::X86_64, &["LE"]),
            (Architecture::I386, &["LE"]),
            (Architecture::Aarch64, &["LE"]),
        ],
    )
}

/// The arch/endian set a **COFF object** realistically carries (the MSVC/clang
/// Windows-object arches): x86 (LE), ARM/AArch64 (LE).
pub fn coff_language_ids() -> Vec<(String, Option<String>)> {
    use crate::loader::format::coff::CoffFormat;
    format_language_ids(
        &CoffFormat,
        &[
            (Architecture::X86_64, &["LE"]),
            (Architecture::I386, &["LE"]),
            (Architecture::Aarch64, &["LE"]),
            (Architecture::Arm, &["LE"]),
        ],
    )
}

#[cfg(test)]
#[path = "../tests/fixtures/arm_aliases.rs"]
mod alias_test_fixture;

#[cfg(test)]
#[path = "loadimage_object/alias_tests.rs"]
mod alias_tests;

#[cfg(test)]
mod tests;
