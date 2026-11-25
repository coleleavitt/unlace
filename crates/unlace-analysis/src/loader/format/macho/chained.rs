//! Mach-O `LC_DYLD_CHAINED_FIXUPS` resolver — the unlace analog of Ghidra's
//! `DyldChainedFixups` / the dyld `MachOAnalyzer::forEachFixupChainSegment` walk
//! (design §5 PR-O0).
//!
//! ## What it does and why
//!
//! A modern arm64(e) Mach-O does **not** store a real pointer in a `__DATA_CONST`
//! / `__DATA` pointer slot. Instead the static linker packs each slot into a
//! *chained-fixup entry* — a bit-field carrying (a) the pointer's rebase target
//! and (b) the `next` displacement to the following entry in the chain, so dyld
//! can rebase a whole page by hopping the chain rather than consulting a separate
//! relocation list. Read naively, a slot like the ObjC `class_t.isa` word reads
//! `0x0020000100008028` (the `next=2` field leaks into the high bits) instead of
//! the real `class_t*` `0x100008028`. So an ObjC walker that dereferences
//! `__objc_classlist` on such a binary reads **garbage** — this is the
//! prerequisite the design (§3.2 LOSS) flagged for arm64 ObjC.
//!
//! This module parses `LC_DYLD_CHAINED_FIXUPS`, follows every fixup chain (a
//! page with several chains lists its starts through `DYLD_CHAINED_PTR_START_MULTI`), and
//! produces a flat **VMA → resolved-pointer** overlay so a downstream consumer
//! (the ObjC walk; any future Swift/PDB-on-Mach-O reader) can read the *real*
//! address at a slot via [`ChainedFixups::resolved_ptr`].
//!
//! ## Scope (design §3.2 LOSS — chained-fixup)
//!
//! - **Plain rebase** — handled for every common pointer format:
//!   `DYLD_CHAINED_PTR_64` (2), `DYLD_CHAINED_PTR_64_OFFSET` (6),
//!   `DYLD_CHAINED_PTR_ARM64E` (1) non-auth + `DYLD_CHAINED_PTR_ARM64E_USERLAND`
//!   (9) / `_USERLAND24` (12), the 32-bit `DYLD_CHAINED_PTR_32` (3, armv7k and
//!   arm64_32 userland, including its biased small integers above
//!   `max_valid_pointer`) and `_32_FIRMWARE` (5), and `ARM64E_SEGMENTED` (14).
//!   `PTR_32_CACHE` (4) and `ARM64E_SHARED_CACHE` (13) occur only inside a
//!   dyld shared cache, whose slide info unlace applies instead.
//! - **arm64e auth-rebase** — handled: the 32-bit image-base-relative target is
//!   rebased to a real VMA (statically the resolved pointer is just
//!   `imagebase + target`), and the signing context dyld signs the slot with —
//!   key, 16-bit diversity, address diversity — is kept beside it
//!   ([`ChainedFixups::auth`]).
//! - **Bind / import-ordinal chains** — a bind entry names an *external* symbol
//!   whose runtime address is unknown statically, so it is never entered into
//!   the pointer overlay (a consumer reading that slot misses and falls back,
//!   never reads a wrong address). Its import **name** and **addend** are kept
//!   instead ([`ChainedFixups::bind`], [`ChainedFixups::bind_at`]), resolved
//!   through the blob's imports table, with its weak-import flag; the addend is
//!   the import record's plus the entry's own. A bind whose ordinal is out of
//!   range or whose name cannot be read is still kept, unnamed. The `dynrelocs`
//!   loader writes a zero into every bind slot, the word other formats leave
//!   in an import slot.
//! - **Bounded on hostile input**: the walk spends one hop budget per image
//!   (the file's length) and one page-start budget (one per 2-byte entry of
//!   the blob), so a malformed header cannot hang the load.
//! - **`SG_READ_ONLY` segments** are recorded ([`ChainedFixups::in_readonly_segment`])
//!   so a loader can treat the rebased slots dyld freezes as constant, the
//!   Mach-O twin of the ELF `PT_GNU_RELRO` rule in `unlace_dynrelocs`.
//!
//! ## Faithfulness / no-op guarantee
//!
//! Pure & total: a non-Mach-O input, a Mach-O **without** `LC_DYLD_CHAINED_FIXUPS`
//! (the classic `LC_DYLD_INFO`/`LC_DYLD_INFO_ONLY` rebase-opcode form — every
//! existing x86-64 `macho_objc`/`macho_imports` fixture), an unparsable header, or
//! a bind-only chain yields an **empty** overlay. The resolver is therefore a
//! strict no-op on a non-chained-fixup image, and the consumer's behavior there is
//! byte-identical to before this resolver existed.

use std::collections::{BTreeMap, HashMap};
use std::sync::Arc;

use object::FileKind;
use object::read::macho::{LoadCommandVariant, MachHeader, Segment};

/// Pointer-format ids from Apple's `mach-o/fixup-chains.h` (`DYLD_CHAINED_PTR_*`).
/// Only the formats unlace resolves are named; any other format leaves its chain
/// unresolved (the inert path).
mod ptr_format {
    /// `DYLD_CHAINED_PTR_ARM64E` — arm64e, 8-byte stride, auth + non-auth, rebase
    /// targets are full vmaddrs (non-auth) / image-base-relative (auth).
    pub const ARM64E: u16 = 1;
    /// `DYLD_CHAINED_PTR_64` — generic 64-bit, 4-byte stride; rebase target is the
    /// full (unslid) vmaddr packed in the low 36 bits.
    pub const PTR_64: u16 = 2;
    /// `DYLD_CHAINED_PTR_64_OFFSET` — like `PTR_64` but the target is an **offset
    /// from the image base** (add `imagebase`).
    pub const PTR_64_OFFSET: u16 = 6;
    /// `DYLD_CHAINED_PTR_ARM64E_USERLAND` — arm64e, 8-byte stride, 32-bit
    /// image-base-relative target (offset form).
    pub const ARM64E_USERLAND: u16 = 9;
    /// `DYLD_CHAINED_PTR_ARM64E_USERLAND24` — `_USERLAND` with a 24-bit ordinal
    /// (bind only differs; rebase decode is identical to `_USERLAND`).
    pub const ARM64E_USERLAND24: u16 = 12;
    /// `DYLD_CHAINED_PTR_ARM64E_KERNEL` — the arm64e layout with a 4-byte stride;
    /// every rebase target is an offset from the kernel collection's base.
    pub const ARM64E_KERNEL: u16 = 7;
    /// `DYLD_CHAINED_PTR_64_KERNEL_CACHE` — 4-byte stride, a 30-bit target offset
    /// from the base of the cache level named in bits 30..31.
    pub const PTR_64_KERNEL_CACHE: u16 = 8;
    /// `DYLD_CHAINED_PTR_X86_64_KERNEL_CACHE` — the same layout, 1-byte stride.
    pub const X86_64_KERNEL_CACHE: u16 = 11;
    /// `DYLD_CHAINED_PTR_ARM64E_FIRMWARE` — the arm64e layout with a 4-byte
    /// stride; a non-auth target is a full vmaddr, as in `ARM64E`.
    pub const ARM64E_FIRMWARE: u16 = 10;
    /// `DYLD_CHAINED_PTR_32` — 32-bit words, 4-byte stride: a 26-bit vmaddr (or,
    /// above `max_valid_pointer`, a biased small integer), or a 20-bit ordinal
    /// with a 6-bit addend. armv7k and arm64_32 userland.
    pub const PTR_32: u16 = 3;
    /// `DYLD_CHAINED_PTR_32_FIRMWARE` — 32-bit words, a 26-bit vmaddr and a 6-bit
    /// next, no binds.
    pub const PTR_32_FIRMWARE: u16 = 5;
    /// `DYLD_CHAINED_PTR_ARM64E_SEGMENTED` — 4-byte stride; the target is a
    /// 28-bit offset into the segment a 4-bit index names, no binds.
    pub const ARM64E_SEGMENTED: u16 = 14;
}

/// Import-table formats from `fixup-chains.h` (`DYLD_CHAINED_IMPORT*`): the
/// record width and where the symbol-name offset sits in it.
mod import_format {
    /// `dyld_chained_import` — `u32 { lib_ordinal:8, weak_import:1, name_offset:23 }`.
    pub const IMPORT: u32 = 1;
    /// `dyld_chained_import_addend` — the same `u32` followed by an `i32` addend.
    pub const IMPORT_ADDEND: u32 = 2;
    /// `dyld_chained_import_addend64` — `u64 { lib_ordinal:16, weak_import:1,
    /// reserved:15, name_offset:32 }` followed by a `u64` addend.
    pub const IMPORT_ADDEND64: u32 = 3;
}

/// `page_start[]` markers (`fixup-chains.h`): a page with no fixups, a page whose
/// entry indexes an overflow list of several chain starts, and the flag on the
/// last entry of such a list.
const PTR_START_NONE: u16 = 0xFFFF;
const PTR_START_MULTI: u16 = 0x8000;
const PTR_START_LAST: u16 = 0x8000;

/// `SG_READ_ONLY` (`mach-o/loader.h`): dyld maps the segment read-only once its
/// fixups are applied. The modern linker sets it on `__DATA_CONST`, which makes
/// it the Mach-O analog of ELF's `PT_GNU_RELRO`.
const SG_READ_ONLY: u32 = 0x10;

/// A resolved chained-fixup overlay: the real pointer value at each rebased VMA
/// slot. Built once per Mach-O load by [`resolve_chained_fixups`]; consulted by
/// the ObjC walk's `MachoImage::read_ptr` (and any future chained-fixup consumer).
///
/// Empty for a Mach-O without `LC_DYLD_CHAINED_FIXUPS` — the resolver is then a
/// strict no-op (every `resolved_ptr` misses, the consumer reads raw section bytes
/// exactly as before).
#[derive(Default, Debug, Clone)]
pub struct ChainedFixups {
    /// Whether the image carries `LC_DYLD_CHAINED_FIXUPS` at all. A chained
    /// image's pointer slots are packed entries even when every one of them is
    /// a bind, so this — not the rebase count — says whether a raw slot word may
    /// be read as a pointer.
    chained: bool,
    /// `slot_vma → resolved_pointer` for every plain/auth **rebase** fixup.
    rebases: BTreeMap<u64, u64>,
    /// `slot_vma → (import symbol name, addend)` for every **bind** fixup whose
    /// ordinal names an entry of the imports table (`_OBJC_CLASS_$_NSObject`,
    /// `_malloc`), the name shared by every slot bound to the same import. The
    /// run-time address is unknown statically, so a bind slot is never in
    /// [`Self::rebases`]; this is what a consumer can still say about it.
    /// A bind whose ordinal is out of range, or whose name cannot be read, is
    /// kept with an empty name.
    binds: BTreeMap<u64, ChainedBind>,
    /// `[vmaddr, vmaddr + vmsize)` of every segment flagged `SG_READ_ONLY`.
    readonly_segments: Vec<(u64, u64)>,
    /// Kernel-collection rebases as `(slot_vma, cache_level, target_offset)`,
    /// resolved into `rebases` once every chain has been read
    /// ([`resolve_kernel_cache_levels`]).
    kernel_cache: Vec<(u64, u8, u64)>,
    /// The kernel-collection rebases that target another collection, as
    /// `(slot_vma, cache_level, target_offset)`: that collection's file holds
    /// the base they are offsets from.
    linked: Vec<(u64, u8, u64)>,
    /// `slot_vma → signing context` for every authenticated arm64e entry,
    /// rebase or bind.
    auth: BTreeMap<u64, AuthContext>,
    /// Chain hops walked so far, across every chain of the image. A valid
    /// chain visits each slot once, so the file's length bounds the total.
    hops: usize,
    /// Page starts read so far, across every segment; bounded by the blob's
    /// size, since each start is one 2-byte entry of it.
    starts: usize,
    /// The slot width of the image's pointer format (4 for the 32-bit formats),
    /// 0 until a chain is walked.
    width: u8,
    /// Why some fixups were not read, the first reason met: a truncated
    /// header or start table, a pointer format the walk does not decode, a
    /// chain that leaves the mapped segments, kernel-collection rebases whose
    /// own collection level is unknown or that target another collection.
    damage: Option<String>,
}

/// One bind fixup: the import a slot is bound to at load time.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChainedBind {
    /// The imported symbol's name as the image spells it (`_printf`), shared
    /// by every bind of that import; empty when the ordinal is out of range,
    /// the names are compressed or the name is not terminated in the pool.
    pub name: Arc<[u8]>,
    /// The bind's addend plus its import record's.
    pub addend: i64,
    /// A weak import: dyld leaves the slot 0 when no image defines it.
    pub weak: bool,
}

/// How dyld signs an authenticated chained pointer at load: the key, whether
/// the slot address is blended into the discriminator, and the 16-bit constant
/// diversifier. A C++ virtual-function slot carries the hash of the method's
/// mangled name here, so the same method has the same diversifier in every
/// vtable and at every call site.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct AuthContext {
    /// `0` IA, `1` IB, `2` DA, `3` DB.
    pub key: u8,
    pub addr_div: bool,
    pub diversity: u16,
}

impl ChainedFixups {
    /// An overlay from another loader's resolved pointer slots (an ELF's
    /// `R_*_RELATIVE` addends), so a reader works the same on both formats.
    pub fn from_rebases(rebases: HashMap<u64, u64>) -> ChainedFixups {
        ChainedFixups {
            rebases: rebases.into_iter().collect(),
            ..ChainedFixups::default()
        }
    }

    /// Whether this image carried any chained-fixup rebases (`false` ⇒ the
    /// pointer overlay is a no-op; see [`Self::is_chained`] for the format probe).
    pub fn is_empty(&self) -> bool {
        self.rebases.is_empty()
    }

    /// Whether the image carries `LC_DYLD_CHAINED_FIXUPS`, bind-only images
    /// included.
    pub fn is_chained(&self) -> bool {
        self.chained
    }

    /// The resolved pointer at slot `va`, if `va` was a rebase fixup. `None` for a
    /// non-fixup slot (the consumer then reads the raw section word) or a bind slot
    /// (out of scope).
    pub fn resolved_ptr(&self, va: u64) -> Option<u64> {
        self.rebases.get(&va).copied()
    }

    /// Every resolved rebase target, in slot order.
    pub fn targets(&self) -> impl Iterator<Item = u64> + '_ {
        self.rebases.values().copied()
    }

    /// Every `(slot_vma, resolved_pointer)` rebase, in slot order.
    pub fn rebases(&self) -> impl Iterator<Item = (u64, u64)> + '_ {
        self.rebases.iter().map(|(&va, &target)| (va, target))
    }

    /// The signing context of the authenticated entry at slot `va`.
    pub fn auth(&self, va: u64) -> Option<AuthContext> {
        self.auth.get(&va).copied()
    }

    /// Every `(slot_vma, signing context)` authenticated entry, in slot order.
    pub fn auth_slots(&self) -> impl Iterator<Item = (u64, AuthContext)> + '_ {
        self.auth.iter().map(|(&va, &ctx)| (va, ctx))
    }

    /// The import symbol the bind fixup at slot `va` names, if `va` is a bind
    /// slot with a resolvable ordinal.
    pub fn bind_name(&self, va: u64) -> Option<&str> {
        self.bind(va).map(|(name, _)| name)
    }

    /// The import symbol and addend of the bind fixup at slot `va`: the slot
    /// holds `&symbol + addend` at run time.
    pub fn bind(&self, va: u64) -> Option<(&str, i64)> {
        let bind = self.binds.get(&va)?;
        let name = std::str::from_utf8(&bind.name)
            .ok()
            .filter(|n| !n.is_empty())?;
        Some((name, bind.addend))
    }

    /// Every `(slot_vma, import name)` bind whose import is named, in slot order.
    pub fn named_binds(&self) -> impl Iterator<Item = (u64, &str)> + '_ {
        self.binds
            .keys()
            .filter_map(|&va| self.bind_name(va).map(|name| (va, name)))
    }

    /// Every kernel-collection rebase into another collection, as `(slot,
    /// cache level, offset from that collection's base)`.
    pub fn linked_targets(&self) -> impl Iterator<Item = (u64, u8, u64)> + '_ {
        self.linked.iter().copied()
    }

    /// Every bind as `(slot, import)`, in slot order, unnamed ones included.
    pub fn binds(&self) -> impl Iterator<Item = (u64, &ChainedBind)> + '_ {
        self.binds.iter().map(|(&va, bind)| (va, bind))
    }

    /// The import bound at slot `va`, if `va` is a bind fixup.
    pub fn bind_at(&self, va: u64) -> Option<&ChainedBind> {
        self.binds.get(&va)
    }

    /// The width in bytes of every fixup slot this image carries.
    pub fn slot_width(&self) -> u8 {
        if self.width == 0 { 8 } else { self.width }
    }

    /// Whether `va` lies in a segment dyld maps read-only after fixups
    /// (`SG_READ_ONLY`, the `__DATA_CONST` convention).
    pub fn in_readonly_segment(&self, va: u64) -> bool {
        self.readonly_segments
            .iter()
            .any(|&(lo, hi)| va >= lo && va < hi)
    }

    /// Why the chains were not all read, when they were not: the rebases and
    /// binds are then only those read.
    pub fn damage(&self) -> Option<&str> {
        self.damage.as_deref()
    }

    fn damaged(&mut self, why: impl FnOnce() -> String) {
        if self.damage.is_none() {
            self.damage = Some(why());
        }
    }
}

/// A segment's `(vmaddr, fileoff, filesize)` — the address arithmetic the chained
/// walk needs (slot VMA = segment vmaddr + offset; raw word read at fileoff +
/// offset). Captured for every `LC_SEGMENT_64`/`LC_SEGMENT`.
#[derive(Clone, Copy, Debug)]
struct SegInfo {
    vmaddr: u64,
    fileoff: u64,
    filesize: u64,
}

/// Resolve the `LC_DYLD_CHAINED_FIXUPS` rebases of a Mach-O `file` from its raw
/// `bytes`, producing the [`ChainedFixups`] overlay.
///
/// Empty for any non-Mach-O / no-`LC_DYLD_CHAINED_FIXUPS` / unparsable input — the
/// no-op path that keeps every classic (non-chained) fixture byte-identical.
pub fn resolve_chained_fixups(file: &object::File, bytes: &[u8]) -> ChainedFixups {
    if file.format() != object::BinaryFormat::MachO {
        return ChainedFixups::default();
    }
    match FileKind::parse(bytes) {
        Ok(FileKind::MachO64) => collect::<object::macho::MachHeader64<object::Endianness>>(bytes),
        Ok(FileKind::MachO32) => collect::<object::macho::MachHeader32<object::Endianness>>(bytes),
        // Fat input is peeled to a thin slice before this runs (the engine
        // dispatch); a leftover fat / non-Mach-O here yields the empty no-op.
        _ => ChainedFixups::default(),
    }
}

/// Walk a typed Mach-O header's load commands for `LC_DYLD_CHAINED_FIXUPS` and the
/// segment table, then resolve every chain. Generic over the header width.
fn collect<Mach>(bytes: &[u8]) -> ChainedFixups
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let empty = ChainedFixups::default();
    let Ok(header) = Mach::parse(bytes, 0) else {
        return empty;
    };
    let Ok(endian) = header.endian() else {
        return empty;
    };
    let Ok(mut commands) = header.load_commands(endian, bytes, 0) else {
        return empty;
    };

    // The chained-fixups blob's file range (LC_DYLD_CHAINED_FIXUPS is a
    // LinkeditDataCommand: dataoff/datasize into the file) + the segment table
    // (for VMA↔fileoff arithmetic), harvested in one load-command pass.
    let mut fixups_range: Option<(u64, u64)> = None;
    let mut segs: Vec<SegInfo> = Vec::new();
    let mut readonly_segments: Vec<(u64, u64)> = Vec::new();
    // The lowest segment vmaddr that maps file content is the image preferred
    // base (the imagebase the OFFSET formats add). __PAGEZERO (filesize 0) is
    // skipped so it does not win as the minimum.
    let mut imagebase: u64 = u64::MAX;
    let mut prelink_info: Option<&[u8]> = None;

    while let Ok(Some(command)) = commands.next() {
        // Segment (either width) → SegInfo + imagebase candidate.
        if let Ok(Some((segment, _))) = Mach::Segment::from_command(command) {
            if trim_name(segment.name()) == b"__PRELINK_INFO" {
                prelink_info = segment.data(endian, bytes).ok();
            }
            let vmaddr = segment.vmaddr(endian).into();
            let fileoff = segment.fileoff(endian).into();
            let filesize = segment.filesize(endian).into();
            if filesize > 0 {
                segs.push(SegInfo {
                    vmaddr,
                    fileoff,
                    filesize,
                });
                imagebase = imagebase.min(vmaddr);
            }
            if segment.flags(endian) & SG_READ_ONLY != 0 {
                let vmsize: u64 = segment.vmsize(endian).into();
                readonly_segments.push((vmaddr, vmaddr.wrapping_add(vmsize)));
            }
            continue;
        }
        // LC_DYLD_CHAINED_FIXUPS is a LinkeditData command; match on its cmd id.
        if let Ok(variant) = command.variant() {
            if let LoadCommandVariant::LinkeditData(linkedit) = variant {
                if command.cmd() == object::macho::LC_DYLD_CHAINED_FIXUPS {
                    let off = linkedit.dataoff.get(endian) as u64;
                    let size = linkedit.datasize.get(endian) as u64;
                    fixups_range = Some((off, size));
                }
            }
        }
    }

    let Some((blob_off, blob_size)) = fixups_range else {
        return empty;
    };
    if imagebase == u64::MAX {
        return empty;
    }
    let Some(blob) = bytes.get(blob_off as usize..(blob_off + blob_size) as usize) else {
        return empty;
    };

    let mut out = ChainedFixups {
        chained: true,
        readonly_segments,
        ..ChainedFixups::default()
    };
    let imports = read_imports(blob);
    walk_fixups(blob, &segs, imagebase, bytes, &imports, &mut out);
    let links = prelink_info.map(CollectionLinks::read);
    resolve_kernel_cache_levels(&mut out, imagebase, links);
    out
}

/// The imports table of the chained-fixups blob: one `(symbol name, addend)` per
/// ordinal (`dyld_chained_fixups_header.imports_offset/imports_count/imports_format`,
/// names in the uncompressed symbol pool at `symbols_offset`). Empty for a
/// compressed symbol pool (`symbols_format != 0`) or an unknown record format,
/// which leaves every bind slot unnamed (the inert path).
fn read_imports(blob: &[u8]) -> Vec<ChainedBind> {
    let (
        Some(imports_offset),
        Some(symbols_offset),
        Some(count),
        Some(format),
        Some(symbols_format),
    ) = (
        rd_u32(blob, 8),
        rd_u32(blob, 12),
        rd_u32(blob, 16),
        rd_u32(blob, 20),
        rd_u32(blob, 24),
    )
    else {
        return Vec::new();
    };
    if symbols_format != 0 {
        return Vec::new();
    }
    let record = match format {
        import_format::IMPORT => 4,
        import_format::IMPORT_ADDEND => 8,
        import_format::IMPORT_ADDEND64 => 16,
        _ => return Vec::new(),
    };
    let count = (count as usize).min(blob.len() / record);
    let mut imports = Vec::with_capacity(count);
    let mut by_offset: HashMap<usize, Arc<[u8]>> = HashMap::new();
    let empty: Arc<[u8]> = Arc::from(&b""[..]);
    for i in 0..count {
        let at = imports_offset as usize + i * record;
        let (name_offset, addend) = match record {
            4 => (
                rd_u32(blob, at).map(|v| ((v >> 9) as usize, v & 0x100 != 0)),
                Some(0),
            ),
            8 => (
                rd_u32(blob, at).map(|v| ((v >> 9) as usize, v & 0x100 != 0)),
                rd_u32(blob, at + 4).map(|a| a as i32 as i64),
            ),
            _ => (
                rd_u64(blob, at).map(|v| ((v >> 32) as usize, v & 0x1_0000 != 0)),
                rd_u64(blob, at + 8).map(|a| a as i64),
            ),
        };
        let (Some((off, weak)), Some(addend)) = (name_offset, addend) else {
            imports.push(ChainedBind {
                name: Arc::clone(&empty),
                addend: 0,
                weak: false,
            });
            continue;
        };
        let name = by_offset.entry(off).or_insert_with(|| {
            blob.get(symbols_offset as usize + off..)
                .and_then(|tail| tail.split(|&b| b == 0).next())
                .map(Arc::from)
                .unwrap_or_else(|| Arc::clone(&empty))
        });
        imports.push(ChainedBind {
            name: Arc::clone(name),
            addend,
            weak,
        });
    }
    imports
}

fn trim_name(raw: &[u8]) -> &[u8] {
    &raw[..raw.iter().position(|&b| b == 0).unwrap_or(raw.len())]
}

/// Which other kernel collections a collection's `__PRELINK_INFO` plist (the
/// segment's bytes; its one section is `__info`) says it
/// was linked against: `_BootKCID` (the boot collection) and `_PageableKCID`
/// (the System collection), the UUID keys xnu's `OSKext` checks before it
/// accepts a System or Auxiliary collection. A boot collection carries neither.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct CollectionLinks {
    boot: bool,
    pageable: bool,
}

impl CollectionLinks {
    fn read(info: &[u8]) -> Self {
        let has = |key: &[u8]| info.windows(key.len()).any(|w| w == key);
        CollectionLinks {
            boot: has(b"<key>_BootKCID</key>"),
            pageable: has(b"<key>_PageableKCID</key>"),
        }
    }
}

/// Resolve the kernel-collection rebases that target this collection.
///
/// A `DYLD_CHAINED_PTR_64_KERNEL_CACHE` target is an offset from the base of
/// the collection its `cacheLevel` names -- xnu's `basePointers` index
/// (`kc_kind_t`: 0 the boot collection, 1 the pageable System one, 3 the
/// Auxiliary one). Only targets at this collection's own level can be rebased
/// from this file's base; a target in another collection needs that file, so
/// it is kept aside ([`ChainedFixups::linked_targets`]) and counted as damage.
///
/// Nothing in the Mach-O header or the chains names the own level: xnu learns a
/// collection's kind from whoever loads it. The `__PRELINK_INFO` plist does
/// say which collections it was linked against (`links`): none for the boot
/// collection (0); `_PageableKCID` only for an Auxiliary one (3); `_BootKCID`
/// alone for a System collection or for an Auxiliary one built without a
/// System collection. That last pair is told apart by the chains, which is
/// sound there because neither can name the other's level: a System
/// collection is loaded before any Auxiliary one, and an Auxiliary one that
/// links no System collection cannot point into it. Without the plist, or when
/// the chains name both levels, the own level is unknown and no
/// kernel-collection target is written at all.
fn resolve_kernel_cache_levels(
    out: &mut ChainedFixups,
    imagebase: u64,
    links: Option<CollectionLinks>,
) {
    let pending = std::mem::take(&mut out.kernel_cache);
    let names = |level: u8| pending.iter().any(|&(_, l, _)| l == level);
    let own = match links {
        Some(CollectionLinks {
            boot: false,
            pageable: false,
        }) => Some(0),
        Some(CollectionLinks { pageable: true, .. }) => Some(3),
        Some(CollectionLinks {
            boot: true,
            pageable: false,
        }) => match (names(1), names(3)) {
            (true, false) => Some(1),
            (false, true) => Some(3),
            _ => None,
        },
        None => None,
    };
    let Some(own) = own else {
        if !pending.is_empty() {
            let count = pending.len();
            out.damaged(|| format!("{count} kernel-collection rebases need this collection's own level, which is unknown"));
        }
        return;
    };
    for (va, level, offset) in pending {
        if level == own {
            out.rebases.insert(va, imagebase.wrapping_add(offset));
        } else {
            out.linked.push((va, level, offset));
        }
    }
    if let Some(&(_, level, _)) = out.linked.first() {
        let count = out.linked.len();
        out.damaged(|| {
            format!("{count} kernel-collection rebases point into another collection (level {level} first), which this file does not hold")
        });
    }
}

/// `dyld_chained_fixups_header` (fixup-chains.h): the only fields the rebase walk
/// needs are `starts_offset` (→ `dyld_chained_starts_in_image`).
fn walk_fixups(
    blob: &[u8],
    segs: &[SegInfo],
    imagebase: u64,
    file: &[u8],
    imports: &[ChainedBind],
    out: &mut ChainedFixups,
) {
    // dyld_chained_fixups_header { fixups_version, starts_offset, imports_offset,
    //                              symbols_offset, imports_count, imports_format,
    //                              symbols_format } — 7 u32 (28 bytes).
    let truncated = || "the chained-fixups header or its start table ends early".to_string();
    let Some(starts_offset) = rd_u32(blob, 4) else {
        return out.damaged(truncated);
    };
    let sio = starts_offset as usize;

    // dyld_chained_starts_in_image { uint32 seg_count; uint32 seg_info_offset[]; }
    let Some(seg_count) = rd_u32(blob, sio) else {
        return out.damaged(truncated);
    };
    for i in 0..(seg_count as usize).min(blob.len() / 4) {
        let Some(seg_info_off) = rd_u32(blob, sio + 4 + 4 * i) else {
            out.damaged(truncated);
            continue;
        };
        if seg_info_off == 0 {
            // 0 = this segment has no fixups.
            continue;
        }
        walk_segment(
            blob,
            sio + seg_info_off as usize,
            segs,
            imagebase,
            file,
            imports,
            out,
        );
    }
}

/// `dyld_chained_starts_in_segment` at `p` within `blob`: walk every page's chain.
fn walk_segment(
    blob: &[u8],
    p: usize,
    segs: &[SegInfo],
    imagebase: u64,
    file: &[u8],
    imports: &[ChainedBind],
    out: &mut ChainedFixups,
) {
    // struct dyld_chained_starts_in_segment {
    //   uint32 size; uint16 page_size; uint16 pointer_format;
    //   uint64 segment_offset; uint32 max_valid_pointer;
    //   uint16 page_count; uint16 page_start[page_count]; ... }
    let fields = (
        rd_u16(blob, p + 4),
        rd_u16(blob, p + 6),
        rd_u64(blob, p + 8),
    );
    let (Some(page_size), Some(pointer_format), Some(segment_offset)) = fields else {
        return out
            .damaged(|| format!("a segment's chain starts at blob offset 0x{p:x} end early"));
    };
    let (Some(max_valid), Some(page_count)) = (rd_u32(blob, p + 16), rd_u16(blob, p + 20)) else {
        return out
            .damaged(|| format!("a segment's chain starts at blob offset 0x{p:x} end early"));
    };
    if page_size == 0 {
        return out.damaged(|| {
            format!("the segment chain starts at blob offset 0x{p:x} give page size 0")
        });
    }

    let Some(stride) = chain_stride(pointer_format) else {
        return out.damaged(|| format!("chained pointer format {pointer_format} is not decoded"));
    };
    out.width = if matches!(
        pointer_format,
        ptr_format::PTR_32 | ptr_format::PTR_32_FIRMWARE
    ) {
        4
    } else {
        8
    };
    let start_budget = blob.len() / 2;

    // dyld computes the chain head from the **mach_header** pointer, not the
    // per-segment base: `chain = mh + segment_offset + pageIndex*page_size +
    // page_start[pageIndex]`. So `segment_offset` is **image-base-relative** (an
    // offset from the mach_header / preferred load address), and the chain head
    // VMA is `imagebase + segment_offset + page + start`. (lld writes
    // `segment_offset` as the segment's own `vmaddr - imagebase`, i.e. its
    // fileoff, so the chain head lands at the segment's first fixup byte.)
    let page_starts = p + 22;
    let exhausted = || "the chain starts name more pages than the blob can describe".to_string();
    for pi in 0..page_count as usize {
        if out.starts >= start_budget {
            return out.damaged(exhausted);
        }
        out.starts += 1;
        let Some(page_start) = rd_u16(blob, page_starts + 2 * pi) else {
            out.damaged(|| format!("a segment's page starts at blob offset 0x{p:x} end early"));
            continue;
        };
        if page_start == PTR_START_NONE {
            continue;
        }
        let page_va = imagebase
            .wrapping_add(segment_offset)
            .wrapping_add(pi as u64 * page_size as u64);
        if page_start & PTR_START_MULTI == 0 {
            walk_chain(
                file,
                segs,
                page_va.wrapping_add(page_start as u64),
                stride,
                Format {
                    id: pointer_format,
                    imagebase,
                    max_valid,
                },
                imports,
                out,
                PAGE_CHAIN_HOPS,
            );
            continue;
        }
        // Several chains on one page: the low bits index the overflow list
        // that follows `page_start[]`, its last entry flagged PTR_START_LAST.
        let mut j = (page_start & !PTR_START_MULTI) as usize;
        for _ in 0..0x8000u32 {
            if out.starts >= start_budget {
                return out.damaged(exhausted);
            }
            out.starts += 1;
            let Some(start) = rd_u16(blob, page_starts + 2 * j) else {
                break;
            };
            let offset = (start & !PTR_START_LAST) as u64;
            walk_chain(
                file,
                segs,
                page_va.wrapping_add(offset),
                stride,
                Format {
                    id: pointer_format,
                    imagebase,
                    max_valid,
                },
                imports,
                out,
                PAGE_CHAIN_HOPS,
            );
            if start & PTR_START_LAST != 0 {
                break;
            }
            j += 1;
        }
    }
}

/// The chain stride: arm64e formats hop in 8-byte units, the 64-bit generic
/// formats in 4-byte units (fixup-chains.h).
fn chain_stride(pointer_format: u16) -> Option<u64> {
    match pointer_format {
        ptr_format::ARM64E | ptr_format::ARM64E_USERLAND | ptr_format::ARM64E_USERLAND24 => Some(8),
        ptr_format::PTR_64
        | ptr_format::PTR_64_OFFSET
        | ptr_format::ARM64E_KERNEL
        | ptr_format::ARM64E_FIRMWARE
        | ptr_format::PTR_64_KERNEL_CACHE
        | ptr_format::PTR_32
        | ptr_format::PTR_32_FIRMWARE
        | ptr_format::ARM64E_SEGMENTED => Some(4),
        ptr_format::X86_64_KERNEL_CACHE => Some(1),
        _ => None,
    }
}

/// (unlace) The rebases of a static image's `__TEXT,__chain_starts` blob
/// (`dyld_chained_starts_offsets`: `u32 pointer_format, u32 starts_count, u32
/// chain_starts[]`, each an offset from the image base), as `ld -static
/// -fixup_chains` writes it for SPTM, TXM and other firmware. `segments` are
/// `(vmaddr, fileoff, filesize)`. Each rebase is `(slot, target, width)`, the
/// width 4 for the 32-bit formats.
pub fn chain_starts_rebases(
    file: &[u8],
    segments: &[(u64, u64, u64)],
    imagebase: u64,
    starts: &[u8],
) -> Vec<(u64, u64, usize)> {
    let segs: Vec<SegInfo> = segments
        .iter()
        .map(|&(vmaddr, fileoff, filesize)| SegInfo {
            vmaddr,
            fileoff,
            filesize,
        })
        .collect();
    let (Some(format), Some(count)) = (rd_u32(starts, 0), rd_u32(starts, 4)) else {
        return Vec::new();
    };
    let Some(id) = u16::try_from(format)
        .ok()
        .filter(|&f| f != ptr_format::ARM64E_SEGMENTED)
    else {
        return Vec::new();
    };
    let Some(stride) = chain_stride(id) else {
        return Vec::new();
    };
    let mut out = ChainedFixups::default();
    for i in 0..(count as usize).min(starts.len() / 4) {
        let Some(offset) = rd_u32(starts, 8 + 4 * i) else {
            break;
        };
        let format = Format {
            id,
            imagebase,
            max_valid: 0,
        };
        let hops = file.len() / stride as usize;
        walk_chain(
            file,
            &segs,
            imagebase.wrapping_add(offset as u64),
            stride,
            format,
            &[],
            &mut out,
            hops,
        );
    }
    let width = if matches!(id, ptr_format::PTR_32 | ptr_format::PTR_32_FIRMWARE) {
        4
    } else {
        8
    };
    let mut rebases: Vec<(u64, u64, usize)> = out
        .rebases
        .into_iter()
        .map(|(va, t)| (va, t, width))
        .collect();
    rebases.sort_unstable();
    rebases
}

/// A defensive cap on one page's chain: no real one is longer than
/// page_size/stride; this just bounds a hostile/corrupt header.
const PAGE_CHAIN_HOPS: usize = 0x10000;

/// What a chain's words mean: the pointer format, the image base the offset
/// formats add, and the `max_valid_pointer` of `DYLD_CHAINED_PTR_32`.
#[derive(Clone, Copy)]
struct Format {
    id: u16,
    imagebase: u64,
    max_valid: u32,
}

/// Follow one fixup chain from `first_va`, hopping `next * stride` until `next ==
/// 0`, decoding + recording each **rebase** slot. Bounded against a corrupt
/// `next` cycle by a hop cap.
fn walk_chain(
    file: &[u8],
    segs: &[SegInfo],
    first_va: u64,
    stride: u64,
    format: Format,
    imports: &[ChainedBind],
    out: &mut ChainedFixups,
    max_hops: usize,
) {
    let mut va = first_va;
    let narrow = matches!(format.id, ptr_format::PTR_32 | ptr_format::PTR_32_FIRMWARE);
    for _ in 0..max_hops {
        if out.hops >= file.len() {
            return;
        }
        out.hops += 1;
        let Some(fo) = va_to_fileoff(segs, va) else {
            return out.damaged(|| {
                format!("a fixup chain reaches 0x{va:x}, outside the segments' file data")
            });
        };
        let raw = if narrow {
            rd_u32(file, fo as usize).map(u64::from)
        } else {
            rd_u64(file, fo as usize)
        };
        let Some(raw) = raw else {
            return out
                .damaged(|| format!("a fixup chain reaches 0x{va:x}, past the end of the file"));
        };
        if let Some(ctx) = auth_context(raw, format.id) {
            out.auth.insert(va, ctx);
        }
        let next = if let Some((next, level, offset)) = kernel_cache_rebase(raw, format.id) {
            out.kernel_cache.push((va, level, offset));
            next
        } else {
            let (next, decoded) = match format.id {
                ptr_format::PTR_32 | ptr_format::PTR_32_FIRMWARE => {
                    decode_ptr32(raw as u32, format)
                }
                ptr_format::ARM64E_SEGMENTED => decode_segmented(raw, segs),
                _ => decode_ptr(raw, format.id, format.imagebase),
            };
            if let Some(target) = decoded {
                out.rebases.insert(va, target);
            } else if let Some((ordinal, addend)) = bind_entry(raw, format.id) {
                let bind = match imports.get(ordinal) {
                    Some(import) => ChainedBind {
                        addend: import.addend.wrapping_add(addend),
                        ..import.clone()
                    },
                    None => ChainedBind {
                        name: Arc::from(&b""[..]),
                        addend,
                        weak: false,
                    },
                };
                out.binds.insert(va, bind);
            }
            next
        };
        if next == 0 {
            return;
        }
        va = va.wrapping_add(next * stride);
    }
}

/// Decode one chained-pointer word: returns `(next, resolved_rebase_target)`.
/// `resolved_rebase_target` is `None` for a **bind** entry (out of scope — left
/// unresolved) or an unhandled format. `next` is the chain hop (in stride units).
fn decode_ptr(raw: u64, pointer_format: u16, imagebase: u64) -> (u64, Option<u64>) {
    match pointer_format {
        // --- DYLD_CHAINED_PTR_64 / _64_OFFSET (generic 64-bit) ---
        // bit 63 = bind; bits 62..51 = next (12); on rebase the low 36 bits are the
        // target, bits 36..44 the high8 byte. PTR_64 target is a full (unslid)
        // vmaddr; PTR_64_OFFSET target is an offset from the image base.
        ptr_format::PTR_64 | ptr_format::PTR_64_OFFSET => {
            let bind = (raw >> 63) & 1;
            let next = (raw >> 51) & 0xFFF;
            if bind == 1 {
                return (next, None); // import/bind — out of scope.
            }
            let target = raw & 0xF_FFFF_FFFF; // 36 bits
            let high8 = (raw >> 36) & 0xFF;
            let unpacked = target | (high8 << 56);
            let resolved = if pointer_format == ptr_format::PTR_64_OFFSET {
                imagebase.wrapping_add(unpacked)
            } else {
                unpacked
            };
            (next, Some(resolved))
        }
        // --- DYLD_CHAINED_PTR_ARM64E and the USERLAND variants ---
        // bit 63 = auth; bit 62 = bind; the `next` field width differs by variant
        // (11 bits for the plain ARM64E, 11 for USERLAND); both hop in 8-byte
        // stride. The auth form stores a 32-bit image-base-relative target (PAC
        // bits stripped); the non-auth form stores a 43-bit target whose meaning is
        // a full vmaddr (plain ARM64E) or an image-base offset (USERLAND).
        ptr_format::ARM64E
        | ptr_format::ARM64E_USERLAND
        | ptr_format::ARM64E_USERLAND24
        | ptr_format::ARM64E_KERNEL
        | ptr_format::ARM64E_FIRMWARE => {
            let auth = (raw >> 63) & 1;
            let bind = (raw >> 62) & 1;
            let next = (raw >> 51) & 0x7FF; // 11 bits
            if bind == 1 {
                return (next, None); // import/bind — out of scope.
            }
            if auth == 1 {
                // dyld_chained_ptr_arm64e_auth_rebase: target is the low 32 bits, an
                // offset from the image base; diversity/addrDiv/key in 32..50 are
                // the signing context [`auth_context`] reads.
                let target = raw & 0xFFFF_FFFF;
                (next, Some(imagebase.wrapping_add(target)))
            } else {
                // dyld_chained_ptr_arm64e_rebase: target is 43 bits, high8 in
                // 43..50. For the plain ARM64E format the target is a full vmaddr;
                // for the USERLAND offset variants it is an image-base offset.
                let target = raw & 0x7FF_FFFF_FFFF; // 43 bits
                let high8 = (raw >> 43) & 0xFF;
                let unpacked = target | (high8 << 56);
                let resolved = match pointer_format {
                    ptr_format::ARM64E | ptr_format::ARM64E_FIRMWARE => unpacked,
                    _ => imagebase.wrapping_add(unpacked),
                };
                (next, Some(resolved))
            }
        }
        // An unhandled format leaves the slot unresolved and stops the chain.
        _ => (0, None),
    }
}

/// The signing context of an authenticated arm64e or kernel-cache entry: `auth`
/// (bit 63) set, key in bits 49..50, address diversity bit 48, diversifier in
/// bits 32..47. The layout is shared by the auth rebase and auth bind of every
/// arm64e format and by `dyld_chained_ptr_64_kernel_cache_rebase`.
fn auth_context(raw: u64, pointer_format: u16) -> Option<AuthContext> {
    let arm64e = matches!(
        pointer_format,
        ptr_format::ARM64E
            | ptr_format::ARM64E_USERLAND
            | ptr_format::ARM64E_USERLAND24
            | ptr_format::ARM64E_KERNEL
            | ptr_format::ARM64E_FIRMWARE
            | ptr_format::PTR_64_KERNEL_CACHE
    );
    (arm64e && (raw >> 63) & 1 == 1).then(|| AuthContext {
        key: ((raw >> 49) & 3) as u8,
        addr_div: (raw >> 48) & 1 == 1,
        diversity: ((raw >> 32) & 0xFFFF) as u16,
    })
}

/// Decode a 32-bit chained word (`PTR_32`, `PTR_32_FIRMWARE`): `(next, rebase
/// value)`, `None` for a bind. A `PTR_32` target above `max_valid_pointer` is
/// not an address but a small integer, stored biased by
/// `(0x0400_0000 + max_valid_pointer) / 2`.
fn decode_ptr32(raw: u32, format: Format) -> (u64, Option<u64>) {
    let target = raw & 0x03FF_FFFF;
    if format.id == ptr_format::PTR_32_FIRMWARE {
        return (u64::from(raw >> 26), Some(u64::from(target)));
    }
    let next = u64::from((raw >> 26) & 0x1F);
    if raw >> 31 != 0 {
        return (next, None);
    }
    if format.max_valid != 0 && target > format.max_valid {
        let bias = (0x0400_0000 + format.max_valid) / 2;
        return (next, Some(u64::from(target.wrapping_sub(bias))));
    }
    (next, Some(u64::from(target)))
}

/// Decode a `DYLD_CHAINED_PTR_ARM64E_SEGMENTED` word: the target is an offset
/// into the file-backed segment its index names.
fn decode_segmented(raw: u64, segs: &[SegInfo]) -> (u64, Option<u64>) {
    let next = (raw >> 51) & 0xFFF;
    let offset = raw & 0x0FFF_FFFF;
    let index = ((raw >> 28) & 0xF) as usize;
    (next, segs.get(index).map(|s| s.vmaddr.wrapping_add(offset)))
}

/// The import ordinal and inline addend of a **bind** word, or `None` for a
/// rebase. The arm64e variants differ in the ordinal width (16 bits, 24 for
/// `_USERLAND24`); an authenticated bind carries its PAC context where the plain
/// bind carries a 19-bit signed addend. `DYLD_CHAINED_PTR_64` packs an 8-bit
/// addend above its 24-bit ordinal.
fn bind_entry(raw: u64, pointer_format: u16) -> Option<(usize, i64)> {
    match pointer_format {
        ptr_format::PTR_64 | ptr_format::PTR_64_OFFSET => ((raw >> 63) & 1 == 1)
            .then_some(((raw & 0xFF_FFFF) as usize, ((raw >> 24) & 0xFF) as i64)),
        ptr_format::PTR_32 => ((raw >> 31) & 1 == 1)
            .then_some(((raw & 0xF_FFFF) as usize, ((raw >> 20) & 0x3F) as i64)),
        ptr_format::ARM64E | ptr_format::ARM64E_USERLAND | ptr_format::ARM64E_USERLAND24 => {
            if (raw >> 62) & 1 == 0 {
                return None;
            }
            let ordinal_mask = if pointer_format == ptr_format::ARM64E_USERLAND24 {
                0xFF_FFFF
            } else {
                0xFFFF
            };
            let addend = if (raw >> 63) & 1 == 1 {
                0
            } else {
                ((((raw >> 32) & 0x7_FFFF) << 45) as i64) >> 45
            };
            Some(((raw & ordinal_mask) as usize, addend))
        }
        _ => None,
    }
}

/// `dyld_chained_ptr_64_kernel_cache_rebase` (`PTR_64_KERNEL_CACHE`,
/// `X86_64_KERNEL_CACHE`): `(next, cacheLevel, target)` — a 30-bit target
/// offset, the 2-bit level in bits 30..31, `next` in bits 51..62. `None` for any
/// other format.
fn kernel_cache_rebase(raw: u64, pointer_format: u16) -> Option<(u64, u8, u64)> {
    matches!(
        pointer_format,
        ptr_format::PTR_64_KERNEL_CACHE | ptr_format::X86_64_KERNEL_CACHE
    )
    .then(|| {
        (
            (raw >> 51) & 0xFFF,
            ((raw >> 30) & 3) as u8,
            raw & 0x3FFF_FFFF,
        )
    })
}

/// Map a VMA to its file offset via the segment table (the inverse of the load
/// arithmetic). `None` for a VMA outside every mapped segment.
fn va_to_fileoff(segs: &[SegInfo], va: u64) -> Option<u64> {
    for s in segs {
        let Some(end) = s.vmaddr.checked_add(s.filesize) else {
            continue;
        };
        if va >= s.vmaddr && va < end {
            return s.fileoff.checked_add(va - s.vmaddr);
        }
    }
    None
}

// --- little-endian scalar readers over a byte slice (bounds-checked) ---

fn rd_u16(b: &[u8], off: usize) -> Option<u16> {
    b.get(off..off + 2)
        .map(|s| u16::from_le_bytes(s.try_into().unwrap()))
}
fn rd_u32(b: &[u8], off: usize) -> Option<u32> {
    b.get(off..off + 4)
        .map(|s| u32::from_le_bytes(s.try_into().unwrap()))
}
fn rd_u64(b: &[u8], off: usize) -> Option<u64> {
    b.get(off..off + 8)
        .map(|s| u64::from_le_bytes(s.try_into().unwrap()))
}

#[cfg(test)]
mod tests;
