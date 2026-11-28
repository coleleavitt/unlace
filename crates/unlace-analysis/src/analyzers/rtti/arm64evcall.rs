//! (unlace `arm64evcall`) Resolve arm64e virtual calls by their pointer-auth
//! discriminator.
//!
//! arm64e signs every C++ vtable slot and every Swift class vtable entry with
//! key IA, address diversity and a 16-bit constant: the hash of the method's
//! mangled name. The constant survives in two places a stripped image keeps.
//! Each slot's chained fixup carries it as the entry's diversifier, and every
//! virtual call site re-materializes it to authenticate the loaded pointer:
//!
//! ```text
//!   autda x16, x17           ; the vtable (or Swift isa) pointer
//!   ldr   x8, [x16, #0x10]!  ; slot 2, x16 = &slot
//!   mov   x9, x16
//!   mov   x17, x9
//!   movk  x17, #0x4444, lsl #48
//!   blraa x8, x17            ; key IA, discriminator &slot | 0x4444 << 48
//! ```
//!
//! So `(word offset from the address point, diversifier)` names a method
//! without any class type, the way IDA's arm64 module resolves these calls.
//! [`Index`] files every C++ vtable (a run of consecutive IA-signed slots in a
//! `__const` section) and every Swift class metadata (found by its signed
//! `Description` field) under that key. [`call_sites`] walks back from each
//! `blraa`/`braa` with a register modifier to the `movk #d, lsl #48` and on to
//! the authenticated vtable-pointer load, summing the slot offset on the way.
//! When the walk ends at an `adrp` instead, the slot has a fixed address (a
//! static vtable or a signed global), and so does a slot loaded from an `adrp`
//! base under a plain constant discriminator (`mov x17, #d`): its own fixup
//! then names the one target. The walk reads raw A64 words: the lifted p-code
//! has already dropped the modifier operand.
//!
//! The signed slots come from the image's own chained fixups, or, for a
//! kernelcache entry, from the whole kernel collection
//! (`loader::kernelcache`), whose fixups are applied before the entry is
//! cut out.

use std::collections::{BTreeMap, HashMap};

use object::read::{Object, ObjectSection, ObjectSymbol};

use crate::loader::format::macho::{AuthContext, ChainedFixups, resolve_chained_fixups};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// The arm64e virtual-call pass (gate id `arm64evcall`).
#[derive(Clone, Copy, Default)]
pub struct Arm64eVcallPass;

impl AnalysisPass for Arm64eVcallPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "arm64evcall"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            vcall_sites: resolve(ctx.file, ctx.bytes),
            ..AnalysisOutput::default()
        }
    }
}

/// An arm64e virtual call site and the methods its slot can hold.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct VcallSite {
    /// Address of the `blraa`/`braa`.
    pub site: u64,
    /// The general register the call branches through.
    pub register: u8,
    /// Every function a vtable of this image holds at the slot, sorted.
    pub targets: Vec<u64>,
    /// `(object, word)` when the vtable pointer was loaded from a fixed
    /// object (an `adrp`-addressed global, such as an IOKit `gMetaClass`) at
    /// a slot `word` words past its address point.
    pub object: Option<(u64, u32)>,
}

/// The authenticated pointer slots of an image and the sections that matter
/// for them.
#[derive(Clone, Debug, Default)]
pub struct SignedImage {
    /// `slot → (signing context, the target a rebase holds)`; a bind has none.
    pub slots: BTreeMap<u64, (AuthContext, Option<u64>)>,
    /// `__const` sections: where C++ vtables live.
    pub vtable_ranges: Vec<(u64, u64)>,
    /// Sections that are read-only once fixed up, where a slot's load-time
    /// target is the only one it ever holds.
    pub readonly_ranges: Vec<(u64, u64)>,
}

impl SignedImage {
    /// The signed slots `fixups` decoded for `file`.
    pub fn of_file(file: &object::File, fixups: &ChainedFixups) -> SignedImage {
        let mut vtable_ranges = Vec::new();
        let mut readonly_ranges = Vec::new();
        for s in file.sections() {
            if is_code(&s) {
                continue;
            }
            let range = (s.address(), s.address().saturating_add(s.size()));
            let segment = s.segment_name().ok().flatten().unwrap_or("");
            if s.name() == Ok("__const") {
                vtable_ranges.push(range);
                readonly_ranges.push(range);
            } else if segment.contains("CONST") || fixups.in_readonly_segment(s.address()) {
                readonly_ranges.push(range);
            }
        }
        let slots = fixups
            .auth_slots()
            .map(|(va, ctx)| (va, (ctx, fixups.resolved_ptr(va))));
        SignedImage::new(slots, vtable_ranges, readonly_ranges)
    }

    /// Keep the slots a call can be resolved through: IA-signed ones, and the
    /// Swift `Description` fields that locate class metadata.
    pub fn new(
        slots: impl Iterator<Item = (u64, (AuthContext, Option<u64>))>,
        mut vtable_ranges: Vec<(u64, u64)>,
        mut readonly_ranges: Vec<(u64, u64)>,
    ) -> SignedImage {
        let slots = slots
            .filter(|(_, (ctx, _))| {
                ctx.key == KEY_IA
                    || (ctx.key == KEY_DA && ctx.diversity == SWIFT_DESCRIPTION_DIVERSITY)
            })
            .collect();
        vtable_ranges.sort_unstable();
        readonly_ranges.sort_unstable();
        SignedImage {
            slots,
            vtable_ranges,
            readonly_ranges,
        }
    }

    /// The one target a fixed slot at `addr` holds, when it is read-only and
    /// signed exactly the way the call site authenticates it.
    fn fixed_target(&self, addr: u64, diversity: u16, addr_div: bool) -> Option<u64> {
        let (ctx, target) = self.slots.get(&addr)?;
        let signed = ctx.key == KEY_IA && ctx.addr_div == addr_div && ctx.diversity == diversity;
        (signed && in_ranges(&self.readonly_ranges, addr)).then_some(*target)?
    }
}

/// The IA key, the one C++ and Swift method slots are signed with.
const KEY_IA: u8 = 0;

/// The DA key a Swift class metadata's `Description` field is signed with.
const KEY_DA: u8 = 2;

/// The `Description` field's diversifier
/// (`SpecialPointerAuthDiscriminators::TypeDescriptor`).
const SWIFT_DESCRIPTION_DIVERSITY: u16 = 0xAE86;

/// Where `Description` sits past a Swift class metadata's address point.
const SWIFT_DESCRIPTION_OFFSET: u64 = 0x40;

/// The largest Swift class metadata the index admits.
const SWIFT_MAX_METADATA: u64 = 1 << 20;

/// The longest backward walk from a call site, IDA's bound.
const MAX_WALK: usize = 24;

/// Every resolved virtual call site of an arm64e Mach-O `file`. Empty for any
/// other image.
pub fn resolve(file: &object::File, bytes: &[u8]) -> Vec<VcallSite> {
    if file.format() != object::BinaryFormat::MachO
        || file.architecture() != object::Architecture::Aarch64
    {
        return Vec::new();
    }
    let fixups = resolve_chained_fixups(file, bytes);
    resolve_signed(file, &SignedImage::of_file(file, &fixups))
}

/// Every virtual call site in `file`'s code that `signed` resolves.
pub fn resolve_signed(file: &object::File, signed: &SignedImage) -> Vec<VcallSite> {
    if signed.slots.is_empty() {
        return Vec::new();
    }
    let index = Index::build(file, signed);
    let mut out = Vec::new();
    for section in file.sections().filter(is_code) {
        let Ok(data) = section.data() else { continue };
        for (site, register, slot, object) in call_sites_with_objects(section.address(), data) {
            let targets = match slot {
                Slot::Relative { word, diversity } => {
                    index.methods.get(&(word, diversity)).cloned()
                }
                Slot::Fixed {
                    addr,
                    diversity,
                    addr_div,
                } => signed
                    .fixed_target(addr, diversity, addr_div)
                    .map(|t| vec![t]),
            };
            if let Some(targets) = targets {
                let object = match slot {
                    Slot::Relative { word, .. } => object.map(|o| (o, word)),
                    Slot::Fixed { .. } => None,
                };
                out.push(VcallSite {
                    site,
                    register,
                    targets,
                    object,
                });
            }
        }
    }
    out
}

/// `(word offset from the address point, diversifier) → sorted method
/// addresses` over every vtable and Swift class metadata of an image.
#[derive(Debug, Default)]
pub struct Index {
    pub methods: HashMap<(u32, u16), Vec<u64>>,
}

impl Index {
    /// File every Swift class metadata's IA-signed slots under their offset from
    /// its address point, then every run of consecutive IA-signed,
    /// address-diversified `__const` slots outside them under its index in the
    /// run. A C++ vtable's address point is its first method, so the run index
    /// is the slot index a call site loads. A slot holding a bind (an inherited
    /// method of another image) keeps its place in the run but adds no method;
    /// so do the pure and deleted virtual traps.
    pub fn build(file: &object::File, signed: &SignedImage) -> Index {
        let mut methods: BTreeMap<(u32, u16), Vec<u64>> = BTreeMap::new();
        let mut swift: Vec<(u64, u64)> = Vec::new();
        for (point, lo, hi) in swift_metadata(file, signed) {
            swift.push((lo, hi));
            for (&va, &(ctx, target)) in signed.slots.range(point..hi) {
                if let (true, Some(target)) = (ctx.key == KEY_IA && ctx.addr_div, target) {
                    methods
                        .entry((((va - point) / 8) as u32, ctx.diversity))
                        .or_default()
                        .push(target);
                }
            }
        }
        swift.sort_unstable();
        let traps: Vec<u64> = file
            .symbols()
            .filter(|s| {
                s.name().is_ok_and(|n| {
                    n.contains("cxa_pure_virtual") || n.contains("cxa_deleted_virtual")
                })
            })
            .map(|s| s.address())
            .collect();
        let mut previous: Option<u64> = None;
        let mut run_start = 0u64;
        for (&va, &(ctx, target)) in &signed.slots {
            if ctx.key != KEY_IA
                || !ctx.addr_div
                || !in_ranges(&signed.vtable_ranges, va)
                || in_ranges(&swift, va)
            {
                continue;
            }
            if previous != Some(va.wrapping_sub(8)) {
                run_start = va;
            }
            previous = Some(va);
            let Some(target) = target.filter(|t| !traps.contains(t)) else {
                continue;
            };
            methods
                .entry((((va - run_start) / 8) as u32, ctx.diversity))
                .or_default()
                .push(target);
        }
        let methods = methods
            .into_iter()
            .map(|(key, mut targets)| {
                targets.sort_unstable();
                targets.dedup();
                (key, targets)
            })
            .collect();
        Index { methods }
    }
}

/// `(address point, start, end)` of every Swift class metadata with a signed
/// `Description`: the field holds the class's type descriptor, signed DA with
/// address diversity and [`SWIFT_DESCRIPTION_DIVERSITY`], at
/// [`SWIFT_DESCRIPTION_OFFSET`]; `classSize` and `classAddressPoint` sit just
/// before it and bound the metadata.
fn swift_metadata(file: &object::File, signed: &SignedImage) -> Vec<(u64, u64, u64)> {
    let mut out = Vec::new();
    for (&va, &(ctx, _)) in &signed.slots {
        if ctx.key != KEY_DA || !ctx.addr_div || ctx.diversity != SWIFT_DESCRIPTION_DIVERSITY {
            continue;
        }
        let Some(point) = va.checked_sub(SWIFT_DESCRIPTION_OFFSET) else {
            continue;
        };
        let Some(bounds) = read_bytes(file, point + 0x38, 8) else {
            continue;
        };
        let size = u32::from_le_bytes(bounds[..4].try_into().unwrap()) as u64;
        let address_point = u32::from_le_bytes(bounds[4..].try_into().unwrap()) as u64;
        if size > SWIFT_MAX_METADATA || address_point > size || address_point > point {
            continue;
        }
        let start = point - address_point;
        let end = start + size;
        if end > va {
            out.push((point, start, end));
        }
    }
    out
}

/// A section of instructions: `__TEXT,__text`, or any section flagged as
/// holding some (a kernel's `__TEXT_EXEC,__text`).
fn is_code(s: &object::Section) -> bool {
    const S_ATTR_SOME_INSTRUCTIONS: u32 = 0x400;
    const S_ATTR_PURE_INSTRUCTIONS: u32 = 0x8000_0000;
    let flags = match s.flags() {
        object::SectionFlags::MachO { flags } => flags,
        _ => 0,
    };
    s.kind() == object::SectionKind::Text
        || flags & (S_ATTR_SOME_INSTRUCTIONS | S_ATTR_PURE_INSTRUCTIONS) != 0
}

fn read_bytes<'a>(file: &'a object::File, va: u64, len: u64) -> Option<&'a [u8]> {
    file.sections()
        .find_map(|s| s.data_range(va, len).ok().flatten())
}

fn in_ranges(ranges: &[(u64, u64)], va: u64) -> bool {
    let i = ranges.partition_point(|&(lo, _)| lo <= va);
    i > 0 && va < ranges[i - 1].1
}

/// The slot a virtual call site loads its target from.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Slot {
    /// `word` words past the address point of the vtable or class metadata
    /// whose authenticated pointer the call site loaded.
    Relative { word: u32, diversity: u16 },
    /// A slot at a fixed address.
    Fixed {
        addr: u64,
        diversity: u16,
        addr_div: bool,
    },
}

/// Every `blraa`/`braa Xn, Xm` in `code` (mapped at `base`) whose modifier the
/// backward walk traces to a slot, as `(site, n, slot)`.
pub fn call_sites(base: u64, code: &[u8]) -> Vec<(u64, u8, Slot)> {
    call_sites_with_objects(base, code)
        .into_iter()
        .map(|(site, rn, slot, _)| (site, rn, slot))
        .collect()
}

/// [`call_sites`], each with the fixed object a relative slot's vtable
/// pointer was loaded from, when an `adrp` addresses it.
pub fn call_sites_with_objects(base: u64, code: &[u8]) -> Vec<(u64, u8, Slot, Option<u64>)> {
    let words: Vec<u32> = code
        .as_chunks::<4>()
        .0
        .iter()
        .map(|w| u32::from_le_bytes([w[0], w[1], w[2], w[3]]))
        .collect();
    let mut out = Vec::new();
    for (i, &w) in words.iter().enumerate() {
        if w & 0xFFDF_FC00 != 0xD71F_0800 {
            continue;
        }
        let lo = i.saturating_sub(MAX_WALK);
        let window = Window {
            words: &words[lo..i],
            base: base + 4 * lo as u64,
        };
        let rn = ((w >> 5) & 31) as u8;
        let mut object = None;
        if let Some(slot) = window.trace(rn, (w & 31) as u8, &mut object) {
            out.push((base + 4 * i as u64, rn, slot, object));
        }
    }
    out
}

/// The words ahead of a call site, the last one adjacent to it, and the
/// address of the first.
struct Window<'a> {
    words: &'a [u32],
    base: u64,
}

impl Window<'_> {
    /// Trace the modifier register `rm` of a call through `rn` back to the
    /// slot. A modifier blended with `movk #d, lsl #48` is followed along `mov`
    /// copies, `add #imm`, `add` of a constant register and pre-index `ldr`
    /// writebacks of the slot address, to the authenticated vtable-pointer load
    /// (a relative slot) or an `adrp` (a fixed one). A modifier set by a plain
    /// `mov #d` is a constant discriminator: the slot is then the one `rn` was
    /// loaded from, when its base is an `adrp`. Any branch, or any other write
    /// to the tracked register, ends the walk with no answer.
    fn trace(&self, rn: u8, rm: u8, object: &mut Option<u64>) -> Option<Slot> {
        let (at, w) = self.def(self.words.len(), rm)?;
        if w & 0xFFE0_0000 == 0xF2E0_0000 {
            return self.blended(at, rm, ((w >> 5) & 0xFFFF) as u16, object);
        }
        if w & 0xFFE0_0000 == 0xD280_0000 {
            let diversity = ((w >> 5) & 0xFFFF) as u16;
            let (at, load) = self.def(self.words.len(), rn)?;
            if load & 0xFFC0_0000 != 0xF940_0000 {
                return None;
            }
            let offset = ((load >> 10) & 0xFFF) as u64 * 8;
            let addr = self.page_base(at, ((load >> 5) & 31) as u8, offset)?;
            return Some(Slot::Fixed {
                addr,
                diversity,
                addr_div: false,
            });
        }
        None
    }

    fn blended(
        &self,
        end: usize,
        mut tracked: u8,
        diversity: u16,
        object: &mut Option<u64>,
    ) -> Option<Slot> {
        let mut offset: i64 = 0;
        for j in (0..end).rev() {
            let w = self.words[j];
            let rn = ((w >> 5) & 31) as u8;
            if self.ends_walk(j) {
                return None;
            }
            if !writes(w, tracked) {
                if w & 0xFFE0_0C00 == 0xF840_0C00 && rn == tracked {
                    offset += ((((w >> 12) & 0x1FF) << 23) as i32 >> 23) as i64;
                }
                continue;
            }
            if w & 0xFFE0_FFE0 == 0xAA00_03E0 {
                tracked = ((w >> 16) & 31) as u8;
            } else if w & 0xFF80_0000 == 0x9100_0000 {
                let imm = ((w >> 10) & 0xFFF) as i64;
                offset += if (w >> 22) & 1 == 1 { imm << 12 } else { imm };
                tracked = rn;
            } else if w & 0xFFE0_FC00 == 0x8B00_0000 {
                let rm = ((w >> 16) & 31) as u8;
                offset += self.constant(j, rm)? as i64;
                tracked = rn;
            } else if w & 0xFFFF_F800 == 0xDAC1_1800
                || w & 0xFFFF_FBE0 == 0xDAC1_3BE0
                || w & 0xFF20_0400 == 0xF820_0400
            {
                if offset < 0 || offset % 8 != 0 {
                    return None;
                }
                *object = self.object_at(j, w);
                return Some(Slot::Relative {
                    word: u32::try_from(offset / 8).ok()?,
                    diversity,
                });
            } else if w & 0x9F00_0000 == 0x9000_0000 {
                let addr = adrp_page(w, self.base + 4 * j as u64).checked_add_signed(offset)?;
                return Some(Slot::Fixed {
                    addr,
                    diversity,
                    addr_div: true,
                });
            } else {
                return None;
            }
        }
        None
    }

    /// The fixed object whose first word the authentication at word `j`
    /// checks: `ldraa xd, [xn]`, or `autd* xd` of an `ldr xd, [xn]`, with
    /// `xn` an `adrp` address.
    fn object_at(&self, j: usize, w: u32) -> Option<u64> {
        let base = if w & 0xFF20_0400 == 0xF820_0400 {
            if (w >> 12) & 0x1FF != 0 || (w >> 22) & 1 != 0 {
                return None;
            }
            ((w >> 5) & 31) as u8
        } else {
            let (at, load) = self.def(j, (w & 31) as u8)?;
            if load & 0xFFFF_FC00 != 0xF940_0000 {
                return None;
            }
            return self.page_base(at, ((load >> 5) & 31) as u8, 0);
        };
        self.page_base(j, base, 0)
    }

    /// Does word `j` end a backward walk? Every branch does, except the
    /// `b.cond #8` that skips a `brk` in a checked authentication (`autda x16,
    /// x17; mov x17, x16; xpacd x17; cmp x16, x17; b.eq #8; brk #0xc472`): the
    /// other path traps.
    fn ends_walk(&self, j: usize) -> bool {
        let w = self.words[j];
        let skips_trap = w & 0xFF00_0010 == 0x5400_0000
            && (w >> 5) & 0x7FFFF == 2
            && self
                .words
                .get(j + 1)
                .is_some_and(|&next| next & 0xFFE0_001F == 0xD420_0000);
        is_branch(w) && !skips_trap
    }

    /// The last instruction before `end` that writes `reg`, with no branch in
    /// between.
    fn def(&self, end: usize, reg: u8) -> Option<(usize, u32)> {
        for j in (0..end).rev() {
            let w = self.words[j];
            if self.ends_walk(j) {
                return None;
            }
            if writes(w, reg) {
                return Some((j, w));
            }
        }
        None
    }

    /// `reg`'s value ahead of word `end` when a `movz` and its `movk`s set it.
    fn constant(&self, end: usize, reg: u8) -> Option<u64> {
        let mut value = 0u64;
        let mut end = end;
        loop {
            let (j, w) = self.def(end, reg)?;
            let part = ((w >> 5) & 0xFFFF) as u64;
            let shift = 16 * ((w >> 21) & 3);
            match w & 0x7F80_0000 {
                0x5280_0000 => return Some(value | (part << shift)),
                0x7280_0000 => value |= part << shift,
                _ => return None,
            }
            end = j;
        }
    }

    /// `adrp reg, page` plus `add #imm` and `mov` steps ahead of word `end`,
    /// plus `offset`.
    fn page_base(&self, end: usize, mut reg: u8, mut offset: u64) -> Option<u64> {
        let mut end = end;
        loop {
            let (j, w) = self.def(end, reg)?;
            if w & 0x9F00_0000 == 0x9000_0000 {
                return adrp_page(w, self.base + 4 * j as u64).checked_add(offset);
            }
            if w & 0xFF80_0000 == 0x9100_0000 {
                let imm = ((w >> 10) & 0xFFF) as u64;
                offset += if (w >> 22) & 1 == 1 { imm << 12 } else { imm };
                reg = ((w >> 5) & 31) as u8;
            } else if w & 0xFFE0_FFE0 == 0xAA00_03E0 {
                reg = ((w >> 16) & 31) as u8;
            } else {
                return None;
            }
            end = j;
        }
    }
}

/// Might `w` write general register `reg`? An A64 instruction that writes one
/// names it in bits 4..0, a load pair also in bits 14..10. Stores, SIMD&FP
/// data processing and SIMD&FP loads name a register they do not write
/// there; anything else naming `reg` counts, which can only end a walk early.
fn writes(w: u32, reg: u8) -> bool {
    let load_store = w & 0x0A00_0000 == 0x0800_0000;
    let simd = (load_store && (w >> 26) & 1 == 1) || w & 0x0E00_0000 == 0x0E00_0000;
    let literal = w & 0x3B00_0000 == 0x1800_0000;
    if simd || (load_store && !literal && (w >> 22) & 3 == 0) {
        return false;
    }
    let load_pair = load_store && (w >> 27) & 7 == 5 && (w >> 22) & 1 == 1;
    (w & 31) as u8 == reg || (load_pair && ((w >> 10) & 31) as u8 == reg)
}

/// The 4 KiB page an `adrp` at `pc` computes.
fn adrp_page(w: u32, pc: u64) -> u64 {
    let imm = (((w >> 5) & 0x7FFFF) << 2 | ((w >> 29) & 3)) as i64;
    let imm = (imm << 43) >> 43;
    (pc & !0xFFF).wrapping_add_signed(imm << 12)
}

/// Is `w` an A64 branch of any kind (immediate, conditional, compare/test,
/// register)?
fn is_branch(w: u32) -> bool {
    w & 0x7C00_0000 == 0x1400_0000
        || w & 0xFF00_0010 == 0x5400_0000
        || w & 0x7E00_0000 == 0x3400_0000
        || w & 0x7E00_0000 == 0x3600_0000
        || w & 0xFE00_0000 == 0xD600_0000
}

#[cfg(test)]
mod tests;
