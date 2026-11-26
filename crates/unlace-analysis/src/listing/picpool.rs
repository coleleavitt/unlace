//! (unlace) `picpool` — compose a literal-pool word with the PC that adds it, so a
//! position-independent string reference has an owning function.
//!
//! # The gap
//!
//! [`super::poolref`] follows a pool word as an **absolute** pointer. In a
//! position-independent ARM image the pool holds no pointer at all: it holds the
//! signed distance from the `add` that consumes it to the datum, and the address
//! only exists once the two are put together.
//!
//! ```text
//! 0x660  ldr r0,[0x6a0]     ; r0 = the word at 0x6a0 = 0xfffffe3f
//! 0x664  add r0,pc,r0       ; r0 = 0x66c + (-0x1c1) = 0x4ab, "Benar! Flag: ..."
//! 0x668  bl  printf
//! ...
//! 0x6a0  3f fe ff ff
//! ```
//!
//! `poolref` correctly declines 0xfffffe3f — it is not an address and lands in no
//! section — so nothing in the program references 0x4ab, `unlace xrefs --to` it
//! answers zero and `unlace strings --json` reports it with no owning function, on
//! a binary whose disassembly plainly shows which function prints it. The idiom
//! is not one site either: the filing image forms every one of its four string
//! references this way.
//!
//! This is [`super::picbase`]'s defect with a per-site base instead of a
//! module-wide one. There the PIC base is a register a prologue establishes once
//! and the whole function inherits; here each reference carries its own base —
//! the PC of its own `add` — so there is nothing to detect once and nothing to
//! scope.
//!
//! # The rule
//!
//! Two decode-time constants, composed, and nothing else. A pool word is admitted
//! as a *displacement* only when
//!
//!  * it comes out of the same read-only, pointer-sized, pointer-aligned slot
//!    [`PoolImage`] already vouches for — the image's copy of it is what runs —
//!    by a `LOAD` from a constant address (A32) or a `COPY` of the slot itself
//!    (Thumb's 16-bit `ldr` and `ldr.w`, whose SLEIGH exports the slot);
//!  * whatever the word itself looks like: in an image mapped low (a non-PIE
//!    ARM executable at 0x10000) a displacement often lands in a mapped section
//!    by chance, and only the PC fold below decides that it is one. This, and
//!    Thumb's `COPY`, hold only in an image that has a GOT or a dynamic
//!    section ([`Image::extended`]); a static image without one (bare-metal
//!    firmware) seeds only an A32 `LOAD` of a word that is not a mapped address;
//!  * a later instruction in the same straight-line run folds it, through
//!    `COPY`/`INT_ADD`/`INT_SUB` alone, together with a constant this
//!    instruction materialized from its **own address** (SLEIGH spells a PC read
//!    that way: `inst_start + 8` on A32, `+ 4` on Thumb, the fall-through on
//!    x86);
//!  * and the folded value lands in a **register** and in a mapped section.
//!
//! Then the composed address is filed as [`XrefKind::Data`](super::xrefs::XrefKind::Data)
//! from the instruction that completed it — the address-taken case, which is
//! exactly what the `add` did, and attributing it to an instruction rather than
//! to the pool word is what gives the reference an owning function.
//!
//! `ScalarOperandAnalyzer.checkOperands`' "below 4096 could be a number" floor
//! is deliberately **not** applied to the composed value. That floor asks whether
//! an *immediate* is an address or an integer; here the question is already
//! settled by the PC, and applying it would discard every reference in an image
//! mapped low — which the filing Android PIE is, its whole layout living under
//! 0x2828.
//!
//! # GOT bases
//!
//! ARM `-fPIC` code makes the GOT address once per function with the same pair
//! (`ldr r4,[pc,#a]; add r4,pc,r4`), keeps it in a callee-saved register, and
//! reads slots through it (`ldr r2,[pc,#b]; ldr r2,[r4,r2]`). A composed value
//! that lands in `.got` is therefore tracked as a base along every edge of the
//! body, and across calls when its register is preserved, until the register is
//! written. A load through base plus a pool word is filed as a
//! [`XrefKind::Read`] of the slot, and the slot's file word, when it is a mapped
//! address, as a [`XrefKind::Data`] reference: in a non-PIE executable the
//! linker writes a local function's address there with no relocation. On ARM a
//! Thumb function's word, and a Thumb function's PC-composed address, carry
//! bit 0; they are answered as they are, and the walk strips the bit once it
//! knows what is code ([`super::xrefs`]). Only base plus a pool
//! word (GOTOFF) is an address; a plain copy of the base is a base and files
//! nothing; a switch's cases receive the dispatch's bases.
//!
//! # Pointers
//!
//! The slot's word, a PC-composed address and a GOTOFF address are a datum's
//! address, and the program reads and writes through the register that holds
//! it (`ldr r3,[r4,r2]; str r0,[r3,#0x20]`), as non-PIC code does with a mapped
//! pool word (`ldr r5,=g_cfg; str r4,[r5,#0x14]`). Each one
//! outside `.got` travels like a base, and a load or store through it plus
//! constants files a `Read` or `Write` of the address. A pool word is a pointer
//! only if no PC fold in the body consumes it as a displacement.
//!
//! # Joins
//!
//! A tracked value holds at an instruction only if every predecessor in the body
//! hands it the same one; the walk decodes the entry first, so nothing is ever
//! carried into it from a back edge. The walk cannot apply that rule as it goes,
//! since it decodes a join before it has seen every edge into it, so
//! [`PicPool::finish`] applies it to the recorded body and answers only what
//! survives. A predicated instruction's skip is an edge of its own
//! (`Edge::Skip`). Nothing is recorded before the body's first pool load;
//! what the walk had queued by then holds nothing (`dry`), as does an
//! instruction another body's walk refused to enter.

use std::collections::{HashMap, HashSet};
use std::rc::Rc;

use unlace_base::space::{AddrSpace, spacetype};
use unlace_decomp::fasthash::FxBuildHasher;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use object::read::{Object, ObjectSection};

use super::poolref::PoolImage;
use super::xrefs::{FullOp, XrefKind, in_range, looks_like_address};

/// The file bytes of `.got`, which [`PoolImage`] leaves out because the section
/// is writable. A slot for a local function holds its address in a non-PIE
/// executable and the same word as an in-place `R_ARM_RELATIVE` addend in a PIE;
/// an import's slot holds 0 and names nothing.
pub(super) struct GotImage<'a> {
    lo: u64,
    hi: u64,
    data: &'a [u8],
    ptr: u32,
    little_endian: bool,
}

impl<'a> GotImage<'a> {
    pub(super) fn new(file: &'a object::File<'a>) -> Option<Self> {
        let sec = file.section_by_name(".got")?;
        let lo = sec.address();
        let data = sec.data().ok()?;
        if lo == 0 || data.is_empty() {
            return None;
        }
        let hi = lo.saturating_add(sec.size().min(data.len() as u64));
        Some(GotImage {
            lo,
            hi,
            data,
            ptr: if file.is_64() { 8 } else { 4 },
            little_endian: file.is_little_endian(),
        })
    }

    fn contains(&self, vma: u64) -> bool {
        vma >= self.lo && vma < self.hi
    }

    /// The pointer-sized, pointer-aligned slot word at `vma`.
    fn word_at(&self, vma: u64) -> Option<u64> {
        if !self.contains(vma) || vma % u64::from(self.ptr) != 0 {
            return None;
        }
        let off = usize::try_from(vma - self.lo).ok()?;
        let b = self.data.get(off..off.checked_add(self.ptr as usize)?)?;
        Some(match (self.ptr, self.little_endian) {
            (8, true) => u64::from_le_bytes(b.try_into().ok()?),
            (8, false) => u64::from_be_bytes(b.try_into().ok()?),
            (_, true) => u64::from(u32::from_le_bytes(b.try_into().ok()?)),
            (_, false) => u64::from(u32::from_be_bytes(b.try_into().ok()?)),
        })
    }
}

/// What every [`PicPool::step`] over one image reads.
pub(super) struct Image<'a> {
    pub pool: &'a PoolImage<'a>,
    pub mapped: &'a [(u64, u64)],
    /// The image has a GOT or a dynamic section, so its code may be
    /// position-independent: a pool word that is a mapped address, and a Thumb
    /// literal `COPY`, are seeded too.
    pub extended: bool,
    pub data_space: Option<&'a Rc<AddrSpace>>,
    pub got: Option<&'a GotImage<'a>>,
    /// The callee-saved register spans, which a value survives a call in.
    pub preserved: &'a [(u64, u64)],
    /// (unlace) Track the addresses the walk composes as pointers and
    /// file each access through one.
    pub deref: bool,
}

/// How many instructions a pool value may travel before the `add` that composes
/// it. GCC and Clang emit the pair adjacent (the displacement is measured from
/// the `add`'s own label, so the two are one template), but instruction
/// scheduling separates them when several references are formed at once. Bounded
/// because every hop is one more instruction over which the tracked register is
/// believed.
const MAX_HOPS: u8 = 8;

/// How far past an instruction's own address a constant may lie and still be its
/// materialized PC. A32 reads `pc` as `inst_start + 8`, Thumb as `+ 4`, x86 `rip`
/// as the fall-through; nothing needs more slack than that.
const PC_WINDOW: u64 = 16;

/// How many pool values may be tracked into one instruction. A join point can be
/// reached from several predecessors, each carrying its own; the cap keeps that
/// from accumulating on a pathological CFG.
const MAX_TRACKED: usize = 8;

/// A pool word in flight: the register holding it, its value, and how far it has
/// travelled from the load.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct Pending {
    /// Register-space offset and size of the varnode holding the word.
    off: u64,
    size: u32,
    /// The word, zero-extended out of the image. The composition is a wrapping
    /// add masked to the register width, so a negative displacement needs no
    /// separate sign extension.
    word: u64,
    hops: u8,
    /// The pool load the word came from; 0 for a GOT base.
    origin: u64,
    /// (unlace) A pointer, not a GOT base: an address in the image the
    /// register holds, travelling every edge as a base does.
    ptr: bool,
}

/// The pool values one function's walk is carrying, keyed by the address of the
/// instruction they reach.
///
/// Keyed by address rather than held as "the previous instruction's state"
/// because [`super::xrefs::build_with_focus`] walks a function breadth-first: at
/// a conditional branch the queue interleaves the two successors, so "the
/// instruction decoded before this one" is not the instruction that precedes it.
///
/// The same order means an instruction can be decoded before every edge into it
/// is known, so what the walk carries is only a candidate. Each instruction that
/// sees a tracked value is recorded as a [`Node`], every edge as it is taken, and
/// [`PicPool::finish`] keeps a value at an instruction only where every
/// predecessor delivers the same one (a meet), before it answers any address.
#[derive(Default)]
pub(super) struct PicPool {
    at: HashMap<u64, Vec<Fact>, FxBuildHasher>,
    /// GOT bases, keyed by the instruction they reach like `at`, but carried
    /// along every edge with no hop bound.
    bases_at: HashMap<u64, Vec<Pending>, FxBuildHasher>,
    nodes: Vec<Node>,
    /// `(from, to, kind)`.
    edges: Vec<(u64, u64, Edge)>,
    /// Set by the body's first pool load; nothing is recorded before it.
    live: bool,
    /// What the walk had queued at the first pool load: each was queued by an
    /// instruction that carried nothing, so nothing holds there.
    dry: HashSet<u64, FxBuildHasher>,
}

/// One decoded instruction, as [`PicPool::step`] reads it.
#[derive(Clone, Copy)]
pub(super) struct Insn<'a> {
    pub vma: u64,
    pub len: u32,
    /// `classify`'s fall-through: `None` when the instruction, once it runs,
    /// does not fall through.
    pub fall: Option<u64>,
    pub ops: &'a [FullOp],
    /// The static branch targets; none for a call.
    pub branches: &'a [u64],
}

/// How control reaches the next instruction, which decides what it carries.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Edge {
    /// The instruction ran and fell through: every value it passes on.
    Fall,
    /// A static branch or a switch case: only GOT bases.
    Branch,
    /// A predicated instruction's condition failed and it did not run: every
    /// value it was handed and its condition did not overwrite.
    Skip,
}

/// One instruction's effect on the values it was handed: `ins` are the values,
/// and every value it passes on and every address it forms names, as a bit mask
/// over `ins`, the values it was computed from.
struct Node {
    vma: u64,
    ins: Vec<Fact>,
    outs: Vec<(Fact, u32)>,
    /// What the [`Edge::Skip`] edge carries, when the instruction is predicated.
    skip: Vec<(Fact, u32)>,
    refs: Vec<Ref>,
}

/// A tracked value. A GOT base travels every edge; a pool word only the
/// fall-through one.
#[derive(Debug, Clone, Copy)]
struct Fact {
    p: Pending,
    base: bool,
}

impl Fact {
    fn same(&self, o: &Fact) -> bool {
        self.base == o.base
            && self.p.ptr == o.p.ptr
            && self.p.off == o.p.off
            && self.p.size == o.p.size
            && self.p.word == o.p.word
    }
}

/// `(to, kind, deps, origin, via)`: `origin` is the pool load a PC fold or a
/// GOTOFF consumed, `via` the pool load whose word a pointer access went
/// through, which a fold elsewhere that consumes it as a displacement vetoes.
type Ref = (u64, XrefKind, u32, u64, u64);

/// What [`PicPool::finish`] answers for one body.
#[derive(Default)]
pub(super) struct Verdict {
    /// `(from, to, kind)`.
    pub refs: Vec<(u64, u64, XrefKind)>,
    /// Pool loads whose word a PC fold consumed: a displacement, never a pointer.
    pub displaced: HashSet<u64>,
}

impl PicPool {
    /// Consume one decoded instruction, and answer the pool word it loaded and
    /// carries on, whose [`super::poolref`] pointer edge waits for
    /// [`Verdict::displaced`].
    ///
    /// Called for every instruction of the function in whatever order the walk
    /// reaches them. Until the body's first pool load nothing can be in flight,
    /// so nothing is recorded; at that load, `queued` names what the walk has
    /// queued and not yet decoded. Every one of those was queued by an
    /// instruction that carried nothing, whose edge the meet would count
    /// against it, so marking them `dry` answers exactly what recording every
    /// edge from the entry would, at no cost per instruction before the load.
    ///
    /// A predicated instruction (`if (!cond) goto inst_next` ahead of its body)
    /// reaches the next instruction along two edges: [`Edge::Fall`] when it ran
    /// and fell through, [`Edge::Skip`] when it did not run. A conditional
    /// write to a base therefore kills it only on the path where it ran, and a
    /// predicated return (`popeq {r4-r6,pc}`) leaves the base to the path that
    /// falls past it.
    pub(super) fn step(
        &mut self,
        img: &Image,
        insn: Insn,
        queued: impl FnOnce() -> Vec<u64>,
    ) -> Option<u64> {
        let Insn {
            vma,
            len,
            fall,
            ops,
            branches: branch_targets,
        } = insn;
        let fresh = seed(vma, ops, img);
        if !self.live {
            fresh?;
            self.live = true;
            self.dry = queued().into_iter().collect();
        }
        let next = vma.wrapping_add(u64::from(len));
        let skip_at = ops
            .iter()
            .position(|op| op.opcode == OpCode::CPUI_CBRANCH && branches_to(op, next));
        if let Some(next) = fall {
            self.edges.push((vma, next, Edge::Fall));
        }
        if skip_at.is_some() {
            self.edges.push((vma, next, Edge::Skip));
        }
        self.edges.extend(
            branch_targets
                .iter()
                .filter(|&&to| !(skip_at.is_some() && to == next) && Some(to) != fall)
                .map(|&to| (vma, to, Edge::Branch)),
        );

        // Hashing every instruction's address would be this walk's whole cost on
        // an architecture that never forms one of these pairs; nothing is in
        // flight until a pool load puts it there.
        let pending = if self.at.is_empty() {
            Vec::new()
        } else {
            self.at.remove(&vma).unwrap_or_default()
        };
        let bases = if self.bases_at.is_empty() {
            Vec::new()
        } else {
            self.bases_at.remove(&vma).unwrap_or_default()
        };
        if pending.is_empty() && bases.is_empty() && fresh.is_none() {
            return None;
        }
        let ins: Vec<Fact> = if bases.is_empty() {
            pending
        } else {
            bases
                .iter()
                .map(|&p| Fact { p, base: true })
                .chain(pending)
                .collect()
        };
        let ev = evaluate(vma, ops, &ins, img);
        let calls = ops
            .iter()
            .any(|op| matches!(op.opcode, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND));
        let kept = |f: &Fact| {
            !ev.written
                .iter()
                .any(|&(off, size)| spans_overlap(f.p.off, f.p.size, off, size))
                && (!calls || survives_calls(&f.p, img.preserved))
        };

        let mut outs: Vec<(Fact, u32)> = Vec::new();
        for (i, f) in ins.iter().enumerate().filter(|(_, f)| f.base) {
            if kept(f) {
                outs.push((*f, 1 << i));
            }
        }
        for &(p, deps) in &ev.new_bases {
            let f = Fact { p, base: true };
            if !calls || survives_calls(&p, img.preserved) {
                outs.retain(|(o, _)| !(o.base && spans_overlap(o.p.off, o.p.size, p.off, p.size)));
                outs.push((f, deps));
            }
        }
        if let Some(p) = fresh.filter(|p| img.deref && is_pointer(p.word, img)) {
            if !calls || survives_calls(&p, img.preserved) {
                outs.retain(|(o, _)| !(o.base && overlaps(&o.p, &p)));
                outs.push((
                    Fact {
                        p: Pending { ptr: true, ..p },
                        base: true,
                    },
                    0,
                ));
            }
        }
        if !leaves_the_run(ops) {
            let loaded = fresh.filter(|p| !calls || survives_calls(p, img.preserved));
            let carry = ins
                .iter()
                .enumerate()
                .filter(|(_, f)| !f.base && kept(f) && !loaded.is_some_and(|p| overlaps(&f.p, &p)))
                .map(|(i, f)| (*f, 1u32 << i))
                .chain(loaded.map(|p| (Fact { p, base: false }, 0)));
            let mut tracked = 0;
            for (mut f, deps) in carry {
                f.p.hops += 1;
                if f.p.hops <= MAX_HOPS && tracked < MAX_TRACKED {
                    outs.push((f, deps));
                    tracked += 1;
                }
            }
        }

        // The path where the instruction did not run: what it was handed, less
        // what its condition wrote. Its pool words follow the instruction when
        // that falls through, since a predicated pair (`ldrne; addne`) runs
        // under one condition; only a base meets both paths.
        let mut skip: Vec<(Fact, u32)> = Vec::new();
        if let Some(k) = skip_at {
            let cond_writes: Vec<(u64, u32)> = ops[..k]
                .iter()
                .filter_map(
                    |op| match op.out.as_ref().and_then(|o| key_of(o, img.data_space)) {
                        Some(Key::Reg(off, size)) => Some((off, size)),
                        _ => None,
                    },
                )
                .collect();
            let untouched = |f: &Fact| {
                !cond_writes
                    .iter()
                    .any(|&(off, size)| spans_overlap(f.p.off, f.p.size, off, size))
            };
            for (i, f) in ins.iter().enumerate() {
                if f.base && untouched(f) {
                    skip.push((*f, 1 << i));
                } else if !f.base && fall.is_none() && untouched(f) && f.p.hops < MAX_HOPS {
                    let mut f = *f;
                    f.p.hops += 1;
                    skip.push((f, 1 << i));
                }
            }
            if fall.is_some() {
                skip.extend(outs.iter().filter(|(f, _)| !f.base).copied());
            }
        }

        if let Some(next) = fall.filter(|_| outs.iter().any(|(f, _)| !f.base)) {
            self.at
                .entry(next)
                .or_default()
                .extend(outs.iter().filter(|(f, _)| !f.base).map(|(f, _)| *f));
        }
        if fall.is_none() {
            if skip.iter().any(|(f, _)| !f.base) {
                self.at
                    .entry(next)
                    .or_default()
                    .extend(skip.iter().filter(|(f, _)| !f.base).map(|(f, _)| *f));
            }
        }
        let based: Vec<Pending> = outs
            .iter()
            .filter(|(f, _)| f.base)
            .map(|(f, _)| f.p)
            .take(MAX_TRACKED)
            .collect();
        let skipped: Vec<Pending> = skip
            .iter()
            .filter(|(f, _)| f.base)
            .map(|(f, _)| f.p)
            .collect();
        let reach = fall
            .into_iter()
            .chain(
                branch_targets
                    .iter()
                    .copied()
                    .filter(|&to| !(skip_at.is_some() && to == next)),
            )
            .map(|to| (to, &based))
            .chain(skip_at.map(|_| (next, &skipped)));
        if !(based.is_empty() && skipped.is_empty()) {
            for (to, carry) in reach {
                self.reach(to, carry);
            }
        }

        let seeded = fresh.and_then(|p| {
            outs.iter()
                .any(|(f, deps)| *deps == 0 && !f.base && f.p.origin == p.origin)
                .then_some(p.word)
        });
        // A node that passes nothing on and forms nothing delivers nothing,
        // which an absent one already does.
        if !(outs.is_empty() && skip.is_empty() && ev.found.is_empty()) {
            self.nodes.push(Node {
                vma,
                ins,
                outs,
                skip,
                refs: ev.found,
            });
        }
        seeded
    }

    /// Record the case edges of a switch dispatch at `vma`, which the walk reads
    /// after the dispatch's own [`PicPool::step`], and hand each case the GOT
    /// bases the dispatch passes on: a case body is the dispatcher's own code.
    /// Recorded whether or not the dispatch carried anything: a case target may
    /// still be reached with a value along another edge, and a dispatch that
    /// carried nothing must veto it there. Before the first pool load the walk
    /// queues the targets, which [`PicPool::step`] then marks `dry`.
    pub(super) fn cases(&mut self, vma: u64, targets: &[u64]) {
        if !self.live {
            return;
        }
        self.edges
            .extend(targets.iter().map(|&to| (vma, to, Edge::Branch)));
        let Some(n) = self.nodes.iter().rev().find(|n| n.vma == vma) else {
            return;
        };
        let based: Vec<Pending> = n
            .outs
            .iter()
            .filter(|(f, _)| f.base)
            .map(|(f, _)| f.p)
            .collect();
        for &to in targets {
            self.reach(to, &based);
        }
    }

    /// Hand `carry` to the instruction at `to`. What the walk carries is a
    /// candidate the meet in [`PicPool::finish`] settles, so a second edge into
    /// an undecoded instruction only narrows it.
    fn reach(&mut self, to: u64, carry: &[Pending]) {
        if carry.is_empty() {
            return;
        }
        match self.bases_at.get_mut(&to) {
            Some(have) => have.retain(|h| carry.contains(h)),
            None => {
                self.bases_at.insert(to, carry.to_vec());
            }
        }
    }

    /// The addresses the body formed, once the whole body is known.
    ///
    /// Starting from what the walk carried, a value is dropped at an instruction
    /// unless every recorded predecessor passes on the same one, and everything
    /// computed from a dropped value goes with it, until nothing changes. An
    /// address is answered only when all the values it was formed from survived.
    /// The entry needs no rule of its own: the walk decodes it first, so nothing
    /// is carried into it. An instruction in `entered` has a predecessor in
    /// another body's walk, outside this record, so nothing holds there.
    pub(super) fn finish(self, entered: &HashSet<u64>) -> Verdict {
        let mut verdict = Verdict::default();
        if self.nodes.iter().all(|n| n.refs.is_empty()) {
            return verdict;
        }
        let index: HashMap<u64, usize, FxBuildHasher> = self
            .nodes
            .iter()
            .enumerate()
            .map(|(i, n)| (n.vma, i))
            .collect();
        let mut preds: HashMap<u64, Vec<(u64, Edge)>, FxBuildHasher> = HashMap::default();
        for &(from, to, kind) in &self.edges {
            if index.contains_key(&to) {
                preds.entry(to).or_default().push((from, kind));
            }
        }
        let mut valid: Vec<u32> = self
            .nodes
            .iter()
            .map(|n| {
                if entered.contains(&n.vma) || self.dry.contains(&n.vma) {
                    0
                } else {
                    all(n.ins.len())
                }
            })
            .collect();
        let delivers = |valid: &[u32], from: u64, kind: Edge, f: &Fact| {
            index.get(&from).is_some_and(|&i| {
                let n = &self.nodes[i];
                let carried = if kind == Edge::Skip { &n.skip } else { &n.outs };
                carried.iter().any(|(o, deps)| {
                    deps & !valid[i] == 0 && (o.base || kind != Edge::Branch) && o.same(f)
                })
            })
        };
        let mut changed = true;
        while changed {
            changed = false;
            for (i, n) in self.nodes.iter().enumerate() {
                let mut keep = valid[i];
                let ps = preds.get(&n.vma).map_or(&[][..], Vec::as_slice);
                for (j, f) in n.ins.iter().enumerate() {
                    if keep & (1 << j) == 0 {
                        continue;
                    }
                    if ps.is_empty()
                        || !ps
                            .iter()
                            .all(|&(from, kind)| delivers(&valid, from, kind, f))
                    {
                        keep &= !(1 << j);
                    }
                }
                if keep != valid[i] {
                    valid[i] = keep;
                    changed = true;
                }
            }
        }
        for (i, n) in self.nodes.iter().enumerate() {
            for &(_, _, deps, origin, _) in &n.refs {
                if deps & !valid[i] == 0 && origin != 0 {
                    verdict.displaced.insert(origin);
                }
            }
        }
        for (i, n) in self.nodes.iter().enumerate() {
            for &(to, kind, deps, _, via) in &n.refs {
                if deps & !valid[i] == 0 && !(via != 0 && verdict.displaced.contains(&via)) {
                    verdict.refs.push((n.vma, to, kind));
                }
            }
        }
        verdict.refs.sort_unstable();
        verdict.refs.dedup();
        verdict
    }
}

/// The mask with the low `n` bits set.
fn all(n: usize) -> u32 {
    if n >= 32 { u32::MAX } else { (1u32 << n) - 1 }
}

/// What one instruction did to the tracked values.
struct Eval {
    found: Vec<Ref>,
    written: Vec<(u64, u32)>,
    new_bases: Vec<(Pending, u32)>,
}

/// The addresses this instruction forms from the values it was handed, the
/// registers it writes, and the GOT bases it establishes: a PC-composed value
/// in `.got`, or a plain copy of a base.
fn evaluate(vma: u64, ops: &[FullOp], ins: &[Fact], img: &Image) -> Eval {
    let (mapped, data, got) = (img.mapped, img.data_space, img.got);
    // Without a base among its inputs or its own PC among its constants, nothing
    // this instruction computes is an address; only its writes matter.
    let inert = !ins.iter().any(|f| f.base)
        && !ops
            .iter()
            .flat_map(|op| op.ins.iter())
            .any(|vn| is_constant(vn) && is_own_pc(vn.offset, vma));
    if inert
        || !ops
            .iter()
            .flat_map(|op| op.ins.iter())
            .any(|vn| match key_of(vn, data) {
                Some(Key::Reg(off, size)) => ins
                    .iter()
                    .any(|f| spans_overlap(f.p.off, f.p.size, off, size)),
                _ => false,
            })
    {
        let written = ops
            .iter()
            .filter_map(|op| match op.out.as_ref().and_then(|o| key_of(o, data)) {
                Some(Key::Reg(off, size))
                    if ins
                        .iter()
                        .any(|f| spans_overlap(f.p.off, f.p.size, off, size)) =>
                {
                    Some((off, size))
                }
                _ => None,
            })
            .collect();
        return Eval {
            found: Vec::new(),
            written,
            new_bases: Vec::new(),
        };
    }
    let mut vals: Vec<(Key, Known)> = Vec::with_capacity(ins.len());
    for (i, f) in ins.iter().enumerate() {
        let key = Key::Reg(f.p.off, f.p.size);
        let k = if f.p.ptr {
            Known {
                via: f.p.origin,
                ..Known::ptr(f.p.word, 1 << i)
            }
        } else if f.base {
            Known {
                v: f.p.word,
                seed: false,
                pc: false,
                got: true,
                ptr: false,
                alias: false,
                origin: 0,
                via: 0,
                deps: 1 << i,
                pdeps: 0,
            }
        } else {
            Known {
                deps: 1 << i,
                ..Known::seed(f.p.word, f.p.origin)
            }
        };
        // The word a pool load just put in a register is both a pool word and,
        // under `armderef`, the pointer it reads as.
        match vals
            .iter_mut()
            .find(|(k2, v)| *k2 == key && v.v == k.v && v.ptr != k.ptr && !v.got && !k.got)
        {
            Some((_, v)) => {
                let (p, w) = if v.ptr { (*v, k) } else { (k, *v) };
                *v = Known {
                    seed: true,
                    alias: true,
                    origin: w.origin,
                    deps: p.deps | w.deps,
                    ..p
                };
            }
            None => vals.push((key, k)),
        }
    }
    let mut written: Vec<(u64, u32)> = Vec::new();
    let mut found: Vec<Ref> = Vec::new();
    let mut new_bases: Vec<(Pending, u32)> = Vec::new();

    for op in ops {
        let mut slot_word = None;
        if op.opcode == OpCode::CPUI_LOAD {
            if let (Some(g), Some(addr)) = (
                got,
                op.ins.get(1).and_then(|vn| value_of(vn, vma, &vals, data)),
            ) {
                let slot = addr.v & mask(op.ins[1].size);
                if addr.got && addr.seed && !addr.pc && g.contains(slot) {
                    found.push((slot, XrefKind::Read, addr.deps, addr.origin, 0));
                    if let Some(word) = g.word_at(slot) {
                        if looks_like_address(word) && in_range(mapped, word) {
                            found.push((word, XrefKind::Data, addr.deps, addr.origin, 0));
                            if img.deref
                                && word & 1 == 0
                                && op.out.as_ref().is_some_and(|o| o.size == g.ptr)
                            {
                                slot_word = Some(Known::ptr(word, addr.deps));
                            }
                        }
                    }
                }
            }
        }
        if img.deref && matches!(op.opcode, OpCode::CPUI_LOAD | OpCode::CPUI_STORE) {
            if let Some(addr) = op.ins.get(1).and_then(|vn| value_of(vn, vma, &vals, data)) {
                let to = addr.v & mask(op.ins[1].size);
                if addr.pointer() && in_range(mapped, to) {
                    let kind = if op.opcode == OpCode::CPUI_LOAD {
                        XrefKind::Read
                    } else {
                        XrefKind::Write
                    };
                    found.push((to, kind, addr.pdeps, 0, addr.via));
                }
            }
        }
        let folded = slot_word.or_else(|| fold(op, vma, &vals, data));
        let Some(out) = &op.out else { continue };
        let key = key_of(out, data);
        if let Some(Key::Reg(off, size)) = key {
            written.push((off, size));
        }
        invalidate(&mut vals, key);
        let (Some(key), Some(mut val)) = (key, folded) else {
            continue;
        };
        val.v &= mask(out.size);
        if let Key::Reg(off, size) = key {
            let composed = val.seed && val.pc && !val.got;
            let gotoff = val.seed && val.got && !val.pc;
            if (composed || gotoff) && in_range(mapped, val.v) {
                found.push((val.v, XrefKind::Data, val.deps, val.origin, 0));
            }
            let copied = val.got
                && !val.seed
                && !val.pc
                && ins.iter().any(|f| f.base && !f.p.ptr && f.p.word == val.v);
            let in_got = got.is_some_and(|g| g.contains(val.v));
            let made = composed && in_range(mapped, val.v) && in_got;
            let pointer = img.deref
                && in_range(mapped, val.v)
                && !in_got
                && (val.pointer() || ((composed || gotoff) && size == img.pool.ptr_width()));
            if made || copied || pointer {
                new_bases.retain(|(b, _)| !spans_overlap(b.off, b.size, off, size));
                let ptr = pointer && !(made || copied);
                let (origin, deps) = if ptr && val.pointer() {
                    (val.via, val.pdeps)
                } else {
                    (0, val.deps)
                };
                new_bases.push((
                    Pending {
                        off,
                        size,
                        word: val.v,
                        hops: 0,
                        origin,
                        ptr,
                    },
                    deps,
                ));
            }
        }
        vals.push((key, val));
    }
    Eval {
        found,
        written,
        new_bases,
    }
}

/// The pool word this instruction loads into a register.
///
/// The first such load, which on every architecture that forms these pairs is
/// also the only one: a literal load's address is a decode-time constant, and a
/// multi-register load (`ldm`) computes its addresses from a base register.
///
/// A32 lifts `ldr rX,[pc,#..]` as a `LOAD` from a constant address. Thumb's
/// literal loads, both the 16-bit form and `ldr.w`, export the slot itself
/// (`*:4 reloc`, the PC already word-aligned), so they lift as a `COPY` out of
/// a data-space varnode. Outside an [`Image::extended`] image only the `LOAD`
/// is read, and only of a word that is not a mapped address.
fn seed(vma: u64, ops: &[FullOp], img: &Image) -> Option<Pending> {
    let (pool, data) = (img.pool, img.data_space);
    let data_index = data.map(|d| d.get_index());
    for op in ops {
        let Some(out) = &op.out else { continue };
        let addr = match op.opcode {
            OpCode::CPUI_LOAD => {
                // `in0` is the space id: a load through some other space is not
                // a read of the image.
                let through_image =
                    op.ins.first().zip(data_index).is_some_and(|(vn, idx)| {
                        vn.offset == u64::try_from(idx).unwrap_or(u64::MAX)
                    });
                match op.ins.get(1).filter(|vn| through_image && is_constant(vn)) {
                    Some(vn) => vn.offset,
                    None => continue,
                }
            }
            OpCode::CPUI_COPY if img.extended => match op.ins.first() {
                Some(vn) if in_data_space(vn, data) && vn.size == out.size => vn.offset,
                _ => continue,
            },
            _ => continue,
        };
        if !matches!(key_of(out, data), Some(Key::Reg(..))) || out.size != pool.ptr_width() {
            continue;
        }
        let Some(word) = pool.word_at(addr) else {
            continue;
        };
        if !img.extended && looks_like_address(word) && in_range(img.mapped, word) {
            continue;
        }
        return Some(Pending {
            off: out.offset,
            size: out.size,
            word,
            hops: 0,
            origin: vma,
            ptr: false,
        });
    }
    None
}

/// (unlace) Could a pool word be a pointer to data? A mapped, even
/// address outside the GOT, whose slots are read as slots.
fn is_pointer(word: u64, img: &Image) -> bool {
    word & 1 == 0
        && looks_like_address(word)
        && in_range(img.mapped, word)
        && !img.got.is_some_and(|g| g.contains(word))
}

fn in_data_space(vn: &VarnodeData, data: Option<&Rc<AddrSpace>>) -> bool {
    matches!((vn.space.as_ref(), data), (Some(s), Some(d)) if Rc::ptr_eq(s, d))
}

/// Is `op` a branch to the absolute address `to`? A constant-space target is
/// p-code-relative, inside the instruction.
fn branches_to(op: &FullOp, to: u64) -> bool {
    op.ins
        .first()
        .is_some_and(|vn| !is_constant(vn) && vn.offset == to)
}

/// Does control leave the straight-line run here, so the fall-through is not the
/// next thing executed?
///
/// A `CBRANCH` is deliberately not in the set: its fall-through IS a successor,
/// it writes nothing, and ARM spells a predicated instruction that way. A call is
/// not either: it ends only the values the calling convention does not preserve
/// (`survives_calls`), since GCC schedules `ldr r4,[pc,#..]` before a call and
/// its `add r4,pc,r4` after it. A `CALLOTHER` ends everything, except inside a
/// call, where it is the Thumb `bl`'s mode switch and the call already decides.
fn leaves_the_run(ops: &[FullOp]) -> bool {
    let calls = ops
        .iter()
        .any(|op| matches!(op.opcode, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND));
    ops.iter().any(|op| match op.opcode {
        OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN => true,
        OpCode::CPUI_CALLOTHER => !calls,
        _ => false,
    })
}

/// Is the value's whole register callee-saved?
fn survives_calls(p: &Pending, preserved: &[(u64, u64)]) -> bool {
    preserved
        .iter()
        .any(|&(lo, hi)| p.off >= lo && p.off + u64::from(p.size) <= hi)
}

// --- the one-instruction constant fold ---------------------------------------

/// A value the fold knows, and where it came from. A PIC address is a pool word
/// plus either the PC (`seed` and `pc`) or a GOT base (`seed` and `got`, the
/// GOTOFF form): `seed` alone is the pool word used as a number, `pc` alone is
/// any PC-relative arithmetic, and `got` alone is the base itself or base plus
/// an immediate, which names nothing.
#[derive(Debug, Clone, Copy)]
struct Known {
    v: u64,
    /// A pool word contributed to this value.
    seed: bool,
    /// This instruction's own PC contributed to this value.
    pc: bool,
    /// A GOT base contributed to this value.
    got: bool,
    /// (unlace) A tracked pointer contributed to this value.
    ptr: bool,
    /// The pointer and the pool word are one register's one word, not two
    /// values added together.
    alias: bool,
    /// The pool load of the word that contributed, or 0.
    origin: u64,
    /// The tracked values that contributed, as a mask over the node's `ins`.
    deps: u32,
    /// The pool load of the word a contributing pointer was read from, or 0.
    via: u64,
    /// The tracked pointers that contributed, as a mask over the node's `ins`.
    pdeps: u32,
}

impl Known {
    fn seed(v: u64, origin: u64) -> Self {
        Known {
            v,
            seed: true,
            pc: false,
            got: false,
            ptr: false,
            alias: false,
            origin,
            deps: 0,
            via: 0,
            pdeps: 0,
        }
    }

    fn ptr(v: u64, deps: u32) -> Self {
        Known {
            v,
            seed: false,
            pc: false,
            got: false,
            ptr: true,
            alias: false,
            origin: 0,
            deps,
            via: 0,
            pdeps: deps,
        }
    }

    /// A tracked pointer plus or minus constants alone: the address of a datum.
    fn pointer(&self) -> bool {
        self.ptr && !self.pc && !self.got && (!self.seed || self.alias)
    }
}

/// The value a varnode holds, as [`fold`] reads its inputs.
fn value_of(
    vn: &VarnodeData,
    vma: u64,
    vals: &[(Key, Known)],
    data: Option<&Rc<AddrSpace>>,
) -> Option<Known> {
    if is_constant(vn) {
        return Some(Known {
            v: vn.offset & mask(vn.size),
            seed: false,
            pc: is_own_pc(vn.offset, vma),
            got: false,
            ptr: false,
            alias: false,
            origin: 0,
            deps: 0,
            via: 0,
            pdeps: 0,
        });
    }
    let key = key_of(vn, data)?;
    vals.iter().rev().find(|(k, _)| *k == key).map(|(_, v)| *v)
}

/// A varnode's identity, in the two classes the fold models. `register` and `ram`
/// are both processor spaces, so the space type alone cannot tell them apart —
/// the default data space is what separates them.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Key {
    Reg(u64, u32),
    Tmp(u64, u32),
}

fn key_of(vn: &VarnodeData, data: Option<&Rc<AddrSpace>>) -> Option<Key> {
    let space = vn.space.as_ref()?;
    match space.get_type() {
        spacetype::IPTR_INTERNAL => Some(Key::Tmp(vn.offset, vn.size)),
        spacetype::IPTR_PROCESSOR if !matches!(data, Some(d) if Rc::ptr_eq(space, d)) => {
            Some(Key::Reg(vn.offset, vn.size))
        }
        _ => None,
    }
}

fn is_constant(vn: &VarnodeData) -> bool {
    vn.space
        .as_ref()
        .is_some_and(|s| s.get_type() == spacetype::IPTR_CONSTANT)
}

/// The value this op produces, or `None` when the fold does not model it.
fn fold(
    op: &FullOp,
    vma: u64,
    vals: &[(Key, Known)],
    data: Option<&Rc<AddrSpace>>,
) -> Option<Known> {
    let get = |i: usize| -> Option<Known> { value_of(op.ins.get(i)?, vma, vals, data) };
    let a = get(0)?;
    match op.opcode {
        OpCode::CPUI_COPY => Some(a),
        OpCode::CPUI_INT_ADD => {
            let b = get(1)?;
            Some(Known {
                v: a.v.wrapping_add(b.v),
                seed: a.seed || b.seed,
                pc: a.pc || b.pc,
                got: a.got || b.got,
                ptr: a.ptr || b.ptr,
                alias: (a.alias && !b.seed && !b.ptr) || (b.alias && !a.seed && !a.ptr),
                origin: if a.origin != 0 { a.origin } else { b.origin },
                deps: a.deps | b.deps,
                via: if a.via != 0 { a.via } else { b.via },
                pdeps: a.pdeps | b.pdeps,
            })
        }
        OpCode::CPUI_INT_SUB => {
            let b = get(1)?;
            Some(Known {
                v: a.v.wrapping_sub(b.v),
                seed: a.seed || b.seed,
                pc: a.pc || b.pc,
                got: a.got || b.got,
                ptr: a.ptr || b.ptr,
                alias: (a.alias && !b.seed && !b.ptr) || (b.alias && !a.seed && !a.ptr),
                origin: if a.origin != 0 { a.origin } else { b.origin },
                deps: a.deps | b.deps,
                via: if a.via != 0 { a.via } else { b.via },
                pdeps: a.pdeps | b.pdeps,
            })
        }
        _ => None,
    }
}

/// Is `c` this instruction materializing its own program counter?
fn is_own_pc(c: u64, vma: u64) -> bool {
    c >= vma && c <= vma.wrapping_add(PC_WINDOW)
}

/// Drop every tracked value whose bytes overlap the write to `key`. Keying on the
/// exact triple would let a write to `r0` leave a stale two-byte view of it
/// behind, which is the one way this fold could hand out a value the program does
/// not hold.
fn invalidate(vals: &mut Vec<(Key, Known)>, key: Option<Key>) {
    let Some(key) = key else { return };
    let (cls, off, size) = split(key);
    vals.retain(|(k, _)| {
        let (c, o, s) = split(*k);
        c != cls || !spans_overlap(o, s, off, size)
    });
}

fn split(key: Key) -> (u8, u64, u32) {
    match key {
        Key::Reg(off, size) => (0, off, size),
        Key::Tmp(off, size) => (1, off, size),
    }
}

fn spans_overlap(a_off: u64, a_size: u32, b_off: u64, b_size: u32) -> bool {
    let a_end = a_off.saturating_add(u64::from(a_size));
    let b_end = b_off.saturating_add(u64::from(b_size));
    a_off < b_end && b_off < a_end
}

fn overlaps(a: &Pending, b: &Pending) -> bool {
    spans_overlap(a.off, a.size, b.off, b.size)
}

/// The byte mask of an `n`-byte value.
fn mask(size: u32) -> u64 {
    if size == 0 || size >= 8 {
        u64::MAX
    } else {
        (1u64 << (8 * size)) - 1
    }
}

#[cfg(test)]
mod tests;
