//! Port of `decompiler/cpp/cover.{hh,cc}` (W7, item `w7-s6-variable-cover`) —
//! the topological scope (`Cover`/`CoverBlock`) of a variable within a function
//! and the [`PcodeOpSet`] used for secondary intersection testing.
//!
//! ## ADR 0001 (IR arenas) realization
//!
//! The C++ `CoverBlock` stores `const PcodeOp *start`/`stop` raw pointers, with
//! three sentinel values (`(PcodeOp *)0` = beginning-of-block, `(PcodeOp *)1` =
//! end-of-block, `(PcodeOp *)2` = input).  In the arena model a boundary point is
//! a [`CoverPoint`] enum carrying the three sentinels explicitly plus an `Op`
//! variant.  The `Op` variant caches the two things the C++ reads off the stored
//! pointer — the `getUIndex` comparison value (a `uintm`) and whether the op is a
//! MULTIEQUAL — so [`CoverBlock`] comparison/merge stay pure (no op-arena
//! access).  The single place that *resolves* a `PcodeOp *` into a point is
//! [`CoverContext`], filled by `Funcdata`.
//!
//! ## ADR 0002 (ordered containers) realization
//!
//! `Cover::runs` holds the C++ `map<int4,CoverBlock>` as disjoint runs sorted
//! on block index, so `intersect`/`intersectList`/`merge`/`compareTo` visit
//! block indices in the same ascending order the C++ `std::map` iterator does.
//! A run of adjacent whole blocks (`setAll`) is one entry; any other block is an
//! entry of its own.  A [`CoverBlock`] packs each boundary into a `uindex` and a
//! one-byte kind, 12 bytes for the pair.  A long-lived value's Cover names most
//! blocks of the function, nearly all of them whole, and a function keeps one
//! Cover per Varnode and per HighVariable, so this storage is what variable
//! merging's memory is made of.  Walks that add blocks in predecessor order
//! ([`Cover::rebuild`], [`Cover::add_ref_point_for`]) fill a per-thread scratch
//! table indexed by block and store the touched blocks once, sorted, so a
//! block's insertion never shifts the rest of the Cover.  Every entry the C++
//! map would hold (including an empty block a merge creates) is kept.
//! `PcodeOpSet::opList` is a `Vec` sorted by [`PcodeOpSet::compare_by_block`]
//! (block index, then `SeqNum::order`) exactly as `finalize`'s `std::sort`.

use std::cell::RefCell;

use unlace_base::address::Address;
use unlace_base::types::{int4, uintm};

use crate::context::OpId;

/// A boundary point of a [`CoverBlock`] (the C++ `const PcodeOp *` with its three
/// sentinel encodings).
///
/// The C++ stores `(const PcodeOp *)0/1/2` as special markers and any other
/// value as a real op pointer.  `Op` caches the `getUIndex` value and whether the
/// op is a MULTIEQUAL, the only facts the geometric methods read.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoverPoint {
    /// `(const PcodeOp *)0` — the very beginning of the block.
    Begin,
    /// `(const PcodeOp *)1` — the very end of the block.
    End,
    /// `(const PcodeOp *)2` — an input (special marker), `getUIndex` == 0.
    Input,
    /// A real `PcodeOp *`.
    Op {
        /// Cached `CoverBlock::getUIndex(op)` value.
        uindex: uintm,
        /// `op->code() == CPUI_MULTIEQUAL`.
        multiequal: bool,
    },
}

impl CoverPoint {
    /// The comparison index for this point (C++ `CoverBlock::getUIndex`,
    /// `cover.cc:29-49`).  The sentinel cases mirror the `switch(switchval)`:
    /// `Begin`/`Input` -> 0, `End` -> ~0; the `Op` case caches the value the C++
    /// computes from `getSeqNum().getOrder()` (with the MULTIEQUAL/INDIRECT
    /// special-casing already folded in when the point was constructed).
    pub fn get_uindex(self) -> uintm {
        match self {
            CoverPoint::Begin => 0,
            CoverPoint::End => uintm::MAX, // ~((uintm)0)
            CoverPoint::Input => 0,
            CoverPoint::Op { uindex, .. } => uindex,
        }
    }
}

const K_NONE: u8 = 0;
const K_BEGIN: u8 = 1;
const K_END: u8 = 2;
const K_INPUT: u8 = 3;
const K_OP: u8 = 4;
const K_MULTI: u8 = 5;

#[inline(always)]
fn pack(p: Option<CoverPoint>) -> (uintm, u8) {
    match p {
        None => (0, K_NONE),
        Some(CoverPoint::Begin) => (0, K_BEGIN),
        Some(CoverPoint::End) => (uintm::MAX, K_END),
        Some(CoverPoint::Input) => (0, K_INPUT),
        Some(CoverPoint::Op {
            uindex,
            multiequal: false,
        }) => (uindex, K_OP),
        Some(CoverPoint::Op {
            uindex,
            multiequal: true,
        }) => (uindex, K_MULTI),
    }
}

#[inline(always)]
fn unpack(u: uintm, k: u8) -> Option<CoverPoint> {
    match k {
        K_NONE => None,
        K_BEGIN => Some(CoverPoint::Begin),
        K_END => Some(CoverPoint::End),
        K_INPUT => Some(CoverPoint::Input),
        K_OP => Some(CoverPoint::Op {
            uindex: u,
            multiequal: false,
        }),
        _ => Some(CoverPoint::Op {
            uindex: u,
            multiequal: true,
        }),
    }
}

/// The topological scope of a variable within a basic block (C++ `class
/// CoverBlock`, `cover.hh:75-96`).
///
/// Each boundary is its `getUIndex` value plus a kind byte: none (the C++
/// `(const PcodeOp *)0`), the three sentinels, an op, or a MULTIEQUAL op.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct CoverBlock {
    ustart: uintm,
    ustop: uintm,
    kstart: u8,
    kstop: u8,
}

impl CoverBlock {
    /// Construct an empty/uncovered block (C++ default constructor).
    pub fn new() -> CoverBlock {
        CoverBlock::default()
    }

    /// Get the start of the range (C++ `getStart`).
    pub fn get_start(&self) -> Option<CoverPoint> {
        unpack(self.ustart, self.kstart)
    }
    /// Get the end of the range (C++ `getStop`).
    pub fn get_stop(&self) -> Option<CoverPoint> {
        unpack(self.ustop, self.kstop)
    }
    #[inline(always)]
    fn set_start(&mut self, p: Option<CoverPoint>) {
        (self.ustart, self.kstart) = pack(p);
    }
    #[inline(always)]
    fn set_stop(&mut self, p: Option<CoverPoint>) {
        (self.ustop, self.kstop) = pack(p);
    }
    #[inline(always)]
    fn stop_is_end(&self) -> bool {
        self.kstop == K_END
    }
    /// The whole block (`setAll`'s `start=0; stop=1`).
    #[inline(always)]
    fn is_full(&self) -> bool {
        self.kstart == K_NONE && self.kstop == K_END
    }
    /// Clear \b this block to empty/uncovered (C++ `clear`).
    pub fn clear(&mut self) {
        *self = CoverBlock::default();
    }
    /// Mark whole block as covered (C++ `setAll`): `start=0; stop=1`.
    pub fn set_all(&mut self) {
        self.set_start(None);
        self.set_stop(Some(CoverPoint::End));
    }
    /// Reset start of range (C++ `setBegin`): if `stop==0` set it to `1`.
    pub fn set_begin(&mut self, begin: Option<CoverPoint>) {
        self.set_start(begin);
        if self.kstop == K_NONE {
            self.set_stop(Some(CoverPoint::End));
        }
    }
    /// Reset end of range (C++ `setEnd`).
    pub fn set_end(&mut self, end: Option<CoverPoint>) {
        self.set_stop(end);
    }
    /// Return \b true if \b this is empty/uncovered (C++ `empty`):
    /// `start==0 && stop==0`.
    pub fn empty(&self) -> bool {
        self.kstart == K_NONE && self.kstop == K_NONE
    }

    /// Characterize the intersection of \b this range with another CoverBlock
    /// (C++ `CoverBlock::intersect`, `cover.cc:59-102`).
    ///
    /// Returns 0 (no intersection), 1 (boundary-only), or 2 (whole interval).
    pub fn intersect(&self, op2: &CoverBlock) -> int4 {
        if self.empty() {
            return 0;
        }
        if op2.empty() {
            return 0;
        }

        let ustart = self.ustart;
        let ustop = self.ustop;
        let u2start = op2.ustart;
        let u2stop = op2.ustop;
        if ustart <= ustop {
            if u2start <= u2stop {
                // We are both one piece
                if (ustop <= u2start) || (u2stop <= ustart) {
                    if (ustart == u2stop) || (ustop == u2start) {
                        return 1; // Boundary intersection
                    } else {
                        return 0; // No intersection
                    }
                }
            } else {
                // They are two-piece, we are one-piece
                if (ustart >= u2stop) && (ustop <= u2start) {
                    if (ustart == u2stop) || (ustop == u2start) {
                        return 1;
                    } else {
                        return 0;
                    }
                }
            }
        } else if u2start <= u2stop {
            // They are one piece, we are two-piece
            if (u2start >= ustop) && (u2stop <= ustart) {
                if (u2start == ustop) || (u2stop == ustart) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
        // If both are two-pieces, then the intersection must be an interval
        2 // Interval intersection
    }

    /// Check containment of a given point (C++ `CoverBlock::contain`,
    /// `cover.cc:107-120`).
    pub fn contain(&self, point: Option<CoverPoint>) -> bool {
        if self.empty() {
            return false;
        }
        let upoint = pack(point).0;
        let ustart = self.ustart;
        let ustop = self.ustop;

        if ustart <= ustop {
            return (upoint >= ustart) && (upoint <= ustop);
        }
        (upoint <= ustop) || (upoint >= ustart)
    }

    /// Characterize a point as a boundary (C++ `CoverBlock::boundary`,
    /// `cover.cc:129-142`): 0 = not on boundary, 1 = on tail, 2 = on defining
    /// point.
    pub fn boundary(&self, point: Option<CoverPoint>) -> int4 {
        if self.empty() {
            return 0;
        }
        let val = pack(point).0;
        if self.ustart == val && self.kstart != K_NONE {
            return 2;
        }
        if self.ustop == val {
            return 1;
        }
        0
    }

    /// Merge another CoverBlock into \b this (C++ `CoverBlock::merge`,
    /// `cover.cc:147-184`).
    pub fn merge(&mut self, op2: &CoverBlock) {
        if op2.empty() {
            return; // Nothing to merge in
        }
        if self.empty() {
            *self = *op2;
            return;
        }
        let ustart = self.ustart;
        let u2start = op2.ustart;
        // Is start contained in op2
        let internal4 = (ustart == 0) && op2.stop_is_end();
        let internal1 = internal4 || op2.contain(self.get_start());
        // Is op2.start contained in this
        let internal3 = (u2start == 0) && self.stop_is_end();
        let internal2 = internal3 || self.contain(op2.get_start());

        if internal1 && internal2 && ((ustart != u2start) || internal3 || internal4) {
            // Covered entire block
            self.set_all();
            return;
        }
        if internal1 {
            self.ustart = op2.ustart; // Pick non-internal start
            self.kstart = op2.kstart;
        } else if !internal2 {
            // Disjoint intervals
            if ustart < u2start {
                // Pick earliest start, then take other stop
                self.ustop = op2.ustop;
                self.kstop = op2.kstop;
            } else {
                self.ustart = op2.ustart;
                self.kstart = op2.kstart;
            }
            return;
        }
        if internal3 || op2.contain(self.get_stop()) {
            // Pick non-internal stop
            self.ustop = op2.ustop;
            self.kstop = op2.kstop;
        }
    }
}

/// One entry of a [`Cover`]: blocks `lo..=hi`, each covered by `cb`.  Only a
/// whole-block CoverBlock spans more than one block.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct Run {
    lo: int4,
    hi: int4,
    cb: CoverBlock,
}

/// Append block `bl` (above every block already in `out`) covered by `cb`,
/// extending the last run when both are whole blocks and adjacent.
#[inline(always)]
fn push_block(out: &mut Vec<Run>, bl: int4, cb: CoverBlock) {
    if cb.is_full()
        && let Some(last) = out.last_mut()
            && last.cb.is_full() && last.hi.checked_add(1) == Some(bl) {
                last.hi = bl;
                return;
            }
    out.push(Run { lo: bl, hi: bl, cb });
}

/// Append blocks `lo..=hi`, each covered by `cb`.
fn push_span(out: &mut Vec<Run>, lo: int4, hi: int4, cb: CoverBlock) {
    if cb.is_full() {
        push_block(out, lo, cb);
        out.last_mut().expect("push_span: just pushed").hi = hi;
    } else {
        for bl in lo..=hi {
            out.push(Run { lo: bl, hi: bl, cb });
        }
    }
}

/// A per-thread table of CoverBlocks indexed by block, for the walks that add
/// blocks out of order.  A slot belongs to the current walk when its stamp is
/// the walk's generation; `touched` lists those slots, loaded ones first.
#[derive(Default)]
struct Scratch {
    generation: u32,
    stamp: Vec<u32>,
    slot: Vec<CoverBlock>,
    touched: Vec<int4>,
    loaded: usize,
}

impl Scratch {
    fn begin(&mut self) {
        self.generation = self.generation.wrapping_add(1);
        if self.generation == 0 {
            self.stamp.iter_mut().for_each(|s| *s = 0);
            self.generation = 1;
        }
        self.touched.clear();
        self.loaded = 0;
    }

    fn load(&mut self, runs: &[Run]) {
        for r in runs {
            for bl in r.lo..=r.hi {
                *self.entry(bl) = r.cb;
            }
        }
        self.loaded = self.touched.len();
    }

    #[inline(always)]
    fn entry(&mut self, bl: int4) -> &mut CoverBlock {
        let i = usize::try_from(bl).expect("Cover: negative block index");
        if i >= self.stamp.len() {
            let n = (i + 1).max(self.stamp.len() * 2).max(64);
            self.stamp.resize(n, 0);
            self.slot.resize(n, CoverBlock::default());
        }
        if self.stamp[i] != self.generation {
            self.stamp[i] = self.generation;
            self.slot[i] = CoverBlock::default();
            self.touched.push(bl);
        }
        &mut self.slot[i]
    }

    /// The touched blocks in ascending order, as runs.
    fn store(&mut self) -> Vec<Run> {
        let (old, new) = self.touched.split_at_mut(self.loaded);
        new.sort_unstable();
        let mut out = Vec::new();
        let (mut i, mut j) = (0, 0);
        while i < old.len() || j < new.len() {
            let bl = if j >= new.len() || (i < old.len() && old[i] < new[j]) {
                i += 1;
                old[i - 1]
            } else {
                j += 1;
                new[j - 1]
            };
            push_block(&mut out, bl, self.slot[bl as usize]);
        }
        out.shrink_to_fit();
        out
    }
}

thread_local! {
    static SCRATCH: RefCell<Scratch> = RefCell::new(Scratch::default());
}

/// Run `f` on a scratch table holding `runs` and return the table's blocks as
/// runs.  A nested call gets a table of its own.
fn with_scratch<R>(runs: &[Run], f: impl FnOnce(&mut Scratch) -> R) -> (Vec<Run>, R) {
    let run = |s: &mut Scratch| {
        s.begin();
        s.load(runs);
        let r = f(s);
        (s.store(), r)
    };
    SCRATCH.with(|cell| match cell.try_borrow_mut() {
        Ok(mut s) => run(&mut s),
        Err(_) => run(&mut Scratch::default()),
    })
}

/// The topological scope of a single variable object (C++ `class Cover`,
/// `cover.hh:108-131`).
#[derive(Debug, Clone, Default)]
pub struct Cover {
    /// The C++ `map<int4,CoverBlock> cover` as disjoint runs sorted on block
    /// index; adjacent whole blocks share one run.
    runs: Vec<Run>,
}

/// Global empty CoverBlock for blocks not covered (C++ `Cover::emptyBlock`).
const EMPTY_BLOCK: CoverBlock = CoverBlock {
    ustart: 0,
    ustop: 0,
    kstart: K_NONE,
    kstop: K_NONE,
};

impl Cover {
    /// Construct an empty Cover.
    pub fn new() -> Cover {
        Cover { runs: Vec::new() }
    }

    /// Clear \b this to an empty Cover (C++ `clear`).
    pub fn clear(&mut self) {
        self.runs = Vec::new();
    }

    #[inline]
    fn find(&self, bl: int4) -> Option<&CoverBlock> {
        let i = self.runs.partition_point(|r| r.hi < bl);
        match self.runs.get(i) {
            Some(r) if r.lo <= bl => Some(&r.cb),
            _ => None,
        }
    }

    /// The inclusive block-index ranges \b this covers, ascending.
    pub fn block_runs(&self) -> impl Iterator<Item = (int4, int4)> + '_ {
        self.runs.iter().map(|r| (r.lo, r.hi))
    }

    /// Iterate the `(block_index, CoverBlock)` entries in ascending block order
    /// (C++ `begin`/`end`).
    pub fn iter(&self) -> impl Iterator<Item = (int4, &CoverBlock)> {
        self.runs
            .iter()
            .flat_map(|r| (r.lo..=r.hi).map(move |bl| (bl, &r.cb)))
    }

    /// Give ordering of \b this and another Cover (C++ `Cover::compareTo`,
    /// `cover.cc:223-247`): compares the index of the first partly-covered block.
    pub fn compare_to(&self, op2: &Cover) -> int4 {
        let a = match self.runs.first() {
            None => 1000000,
            Some(r) => r.lo,
        };
        let b = match op2.runs.first() {
            None => 1000000,
            Some(r) => r.lo,
        };
        if a < b {
            -1
        } else if a == b {
            0
        } else {
            1
        }
    }

    /// Get the CoverBlock for the i-th block (C++ `getCoverBlock`,
    /// `cover.cc:253-260`): the global empty block when not present.
    pub fn get_cover_block(&self, i: int4) -> &CoverBlock {
        self.find(i).unwrap_or(&EMPTY_BLOCK)
    }

    /// Visit, in ascending order, each stretch of blocks both covers hold with
    /// the two CoverBlocks covering it; stop when `f` returns true.
    fn overlaps(
        &self,
        op2: &Cover,
        mut f: impl FnMut(int4, int4, &CoverBlock, &CoverBlock) -> bool,
    ) {
        let (a, b) = (&self.runs, &op2.runs);
        let (mut i, mut j) = (0, 0);
        while i < a.len() && j < b.len() {
            let (ra, rb) = (&a[i], &b[j]);
            if ra.hi < rb.lo {
                i += 1;
            } else if rb.hi < ra.lo {
                j += 1;
            } else {
                if f(ra.lo.max(rb.lo), ra.hi.min(rb.hi), &ra.cb, &rb.cb) {
                    return;
                }
                if ra.hi <= rb.hi {
                    i += 1;
                }
                if rb.hi <= ra.hi {
                    j += 1;
                }
            }
        }
    }

    /// Characterize the intersection between \b this and another Cover (C++
    /// `Cover::intersect`, `cover.cc:269-297`): 0/1/2 as `CoverBlock::intersect`.
    pub fn intersect(&self, op2: &Cover) -> int4 {
        let mut res = 0;
        self.overlaps(op2, |_, _, a, b| {
            let newres = a.intersect(b);
            if newres == 1 {
                res = 1; // At least a point intersection
            }
            if newres == 2 {
                res = 2;
            }
            res == 2
        });
        res
    }

    /// Generate the list of blocks that intersect above `level` (C++
    /// `Cover::intersectList`, `cover.cc:307-334`).
    pub fn intersect_list(&self, listout: &mut Vec<int4>, op2: &Cover, level: int4) {
        listout.clear();
        self.overlaps(op2, |lo, hi, a, b| {
            if a.intersect(b) >= level {
                listout.extend(lo..=hi);
            }
            false
        });
    }

    /// Characterize the intersection on a specific block (C++
    /// `Cover::intersectByBlock`, `cover.cc:392-406`).
    pub fn intersect_by_block(&self, blk: int4, op2: &Cover) -> int4 {
        let iter = match self.find(blk) {
            None => return 0,
            Some(cb) => cb,
        };
        let iter2 = match op2.find(blk) {
            None => return 0,
            Some(cb) => cb,
        };
        iter.intersect(iter2)
    }

    /// Merge \b this with another Cover block by block (C++ `Cover::merge`,
    /// `cover.cc:465-472`).  A block only in `op2` is added the way the C++
    /// `cover[k].merge(...)` default-constructs it.
    pub fn merge(&mut self, op2: &Cover) {
        if op2.runs.is_empty() {
            return;
        }
        let (a, b) = (&self.runs, &op2.runs);
        let only_b = |cb: &CoverBlock| {
            let mut m = CoverBlock::default();
            m.merge(cb);
            m
        };
        let mut out = Vec::with_capacity(a.len() + b.len());
        let (mut i, mut j) = (0, 0);
        let mut ca = a.first().map_or(0, |r| r.lo);
        let mut cb = b[0].lo;
        loop {
            match (a.get(i), b.get(j)) {
                (None, None) => break,
                (Some(ra), None) => {
                    push_span(&mut out, ca, ra.hi, ra.cb);
                    i += 1;
                    ca = a.get(i).map_or(0, |r| r.lo);
                }
                (None, Some(rb)) => {
                    push_span(&mut out, cb, rb.hi, only_b(&rb.cb));
                    j += 1;
                    cb = b.get(j).map_or(0, |r| r.lo);
                }
                (Some(ra), Some(rb)) => {
                    if ra.hi < cb {
                        push_span(&mut out, ca, ra.hi, ra.cb);
                        i += 1;
                        ca = a.get(i).map_or(0, |r| r.lo);
                    } else if rb.hi < ca {
                        push_span(&mut out, cb, rb.hi, only_b(&rb.cb));
                        j += 1;
                        cb = b.get(j).map_or(0, |r| r.lo);
                    } else if ca < cb {
                        push_span(&mut out, ca, cb - 1, ra.cb);
                        ca = cb;
                    } else if cb < ca {
                        push_span(&mut out, cb, ca - 1, only_b(&rb.cb));
                        cb = ca;
                    } else {
                        let end = ra.hi.min(rb.hi);
                        let mut m = ra.cb;
                        m.merge(&rb.cb);
                        push_span(&mut out, ca, end, m);
                        if ra.hi == end {
                            i += 1;
                            ca = a.get(i).map_or(0, |r| r.lo);
                        } else {
                            ca = end + 1;
                        }
                        if rb.hi == end {
                            j += 1;
                            cb = b.get(j).map_or(0, |r| r.lo);
                        } else {
                            cb = end + 1;
                        }
                    }
                }
            }
        }
        out.shrink_to_fit();
        self.runs = out;
    }

    /// Reset to the single point where the given Varnode is defined (C++
    /// `Cover::addDefPoint`, `cover.cc:501-519`).
    ///
    /// `def` is the `(block_index, CoverPoint)` of the defining op (resolved by
    /// the caller from `vn->getDef()->getParent()->getIndex()`), or `None` when
    /// the Varnode is an input (the C++ `vn->isInput()` branch), in which case
    /// `is_input` distinguishes the input case from "no cover".
    pub fn add_def_point(&mut self, def: Option<(int4, CoverPoint)>, is_input: bool) {
        self.clear();
        if let Some((blk, point)) = def {
            self.runs.push(Run {
                lo: blk,
                hi: blk,
                cb: Self::def_block(point),
            });
        } else if is_input {
            // Special mark for input
            self.runs.push(Run {
                lo: 0,
                hi: 0,
                cb: Self::def_block(CoverPoint::Input),
            });
        }
    }

    fn def_block(point: CoverPoint) -> CoverBlock {
        let mut block = CoverBlock::default();
        block.set_begin(Some(point)); // Set the point topology
        block.set_end(Some(point));
        block
    }

    /// Add a single read of `vn` by op `ref_op` to \b this Cover (C++
    /// `Cover::addRefPoint(const PcodeOp *ref,const Varnode *vn)`, `cover.cc:489`).
    ///
    /// Resolves the `(block, ref_point, is_multiequal, pred_blocks)` of the read
    /// via the [`CoverContext`] then folds it in.  Used by
    /// `Merge::buildDominantCopy`, where the cover of a hypothetical dominant
    /// Varnode is built from `addDefPoint(domVn)` followed by `addRefPoint(*iter,
    /// outVn)` for each read `*iter` of a *different* Varnode (`outVn`), so it is
    /// distinct from the [`Cover::rebuild`] single-varnode walk.
    pub fn add_ref_point_for(
        &mut self,
        ctx: &dyn CoverContext,
        ref_op: OpId,
        vn: crate::context::VarnodeId,
    ) {
        self.add_ref_points_for(ctx, &[ref_op], vn);
    }

    /// (unlace) [`Self::add_ref_point_for`] for each of `ref_ops` in turn.
    pub fn add_ref_points_for(
        &mut self,
        ctx: &dyn CoverContext,
        ref_ops: &[OpId],
        vn: crate::context::VarnodeId,
    ) {
        if ref_ops.is_empty() {
            return;
        }
        let (runs, ()) = with_scratch(&self.runs, |s| {
            for &ref_op in ref_ops {
                let (bl, ref_point, is_multiequal, pred_blocks) = ctx.ref_point(ref_op, vn);
                Self::add_ref_point(
                    s,
                    ctx,
                    bl,
                    ref_point,
                    is_multiequal,
                    &pred_blocks,
                    &mut |_, _| false,
                );
            }
        });
        self.runs = runs;
    }

    /// (unlace) Does `hit` hold for some block of \b this?
    pub fn any_block(&self, mut hit: impl FnMut(int4, &CoverBlock) -> bool) -> bool {
        self.iter().any(|(bl, cb)| hit(bl, cb))
    }

    /// (unlace) [`Self::add_ref_point_for`] that stops at the first block of
    /// \b this, already present or just set or extended by the walk, for which
    /// `hit` holds, and says whether it stopped.  A block only grows during the
    /// walk, so for a `hit` that holds on every block containing one it holds
    /// on, this stops exactly when `hit` holds for a block of the finished
    /// Cover.
    pub fn add_ref_point_until(
        &mut self,
        ctx: &dyn CoverContext,
        ref_op: OpId,
        vn: crate::context::VarnodeId,
        mut hit: impl FnMut(int4, &CoverBlock) -> bool,
    ) -> bool {
        if self.any_block(&mut hit) {
            return true;
        }
        let (bl, ref_point, is_multiequal, pred_blocks) = ctx.ref_point(ref_op, vn);
        let (runs, stopped) = with_scratch(&self.runs, |s| {
            Self::add_ref_point(s, ctx, bl, ref_point, is_multiequal, &pred_blocks, &mut hit)
        });
        self.runs = runs;
        stopped
    }

    /// Add to the Cover recursively, starting at the bottom of the given
    /// block and filling backward until existing cover is hit (C++
    /// `Cover::addRefRecurse`, `cover.cc:524-558`).
    ///
    /// (unlace) Stops, returning true, once `hit` holds for a block it has just
    /// set or extended (see [`Self::add_ref_point_until`]).
    fn add_ref_recurse<F: FnMut(int4, &CoverBlock) -> bool>(
        s: &mut Scratch,
        ctx: &dyn CoverContext,
        bl: int4,
        hit: &mut F,
    ) -> bool {
        let block = s.entry(bl);
        if block.empty() {
            block.set_all(); // No cover encountered, fill in entire block
            if hit(bl, block) {
                return true;
            }
            let n = ctx.size_in(bl);
            for j in 0..n {
                // Recurse to predecessors
                if Self::add_ref_recurse(s, ctx, ctx.get_in(bl, j), hit) {
                    return true;
                }
            }
        } else {
            let stop_multiequal = block.kstop == K_MULTI;
            let ustart = block.ustart;
            let ustop = block.ustop;
            if (ustop != uintm::MAX) && (ustop >= ustart) {
                block.set_end(Some(CoverPoint::End)); // Fill in to the bottom
                if hit(bl, block) {
                    return true;
                }
            }

            // getStart() is unchanged by the fill above
            let start_is_zero = block.kstart == K_NONE;
            if (ustop == 0) && start_is_zero && stop_multiequal {
                // Block contains only an infinitesimal tip of cover
                // through one branch of a MULTIEQUAL; still traverse.
                let n = ctx.size_in(bl);
                for j in 0..n {
                    if Self::add_ref_recurse(s, ctx, ctx.get_in(bl, j), hit) {
                        return true;
                    }
                }
            }
        }
        false
    }

    /// Add a variable read to the Cover (C++ `Cover::addRefPoint`,
    /// `cover.cc:565-612`).
    ///
    /// `ref_op` is `(block_index, CoverPoint, code)` for the reading PcodeOp.
    /// `ref_inputs`, when the read is a MULTIEQUAL, lists the input slots whose
    /// Varnode equals `vn` (the C++ `ref->getIn(j)==vn` loop), as predecessor
    /// block indices to recurse into.  (unlace) Stops, returning true, once `hit`
    /// holds for a block it has just set or extended.
    fn add_ref_point<F: FnMut(int4, &CoverBlock) -> bool>(
        s: &mut Scratch,
        ctx: &dyn CoverContext,
        bl: int4,
        ref_point: CoverPoint,
        is_multiequal: bool,
        multiequal_pred_blocks: &[int4],
        hit: &mut F,
    ) -> bool {
        let mut recurse_all = false;
        {
            let block = s.entry(bl);
            if block.empty() {
                block.set_end(Some(ref_point));
                if hit(bl, block) {
                    return true;
                }
            } else if block.contain(Some(ref_point)) {
                if !is_multiequal {
                    return false;
                }
                // Even if MULTIEQUAL ref is contained we may be adding new
                // cover because we are looking at a different branch.
            } else {
                let old_stop_multiequal = block.kstop == K_MULTI;
                let start_is_none = block.kstart == K_NONE;
                let ustart = block.ustart;
                block.set_end(Some(ref_point)); // Otherwise update endpoint
                if hit(bl, block) {
                    return true;
                }
                if block.ustop >= ustart {
                    if old_stop_multiequal && start_is_none {
                        recurse_all = true; // Traverse predecessors below
                    }
                    if !recurse_all {
                        return false;
                    }
                }
            }
        }

        if recurse_all {
            let n = ctx.size_in(bl);
            for j in 0..n {
                if Self::add_ref_recurse(s, ctx, ctx.get_in(bl, j), hit) {
                    return true;
                }
            }
            return false;
        }

        if is_multiequal {
            for &pred in multiequal_pred_blocks {
                if Self::add_ref_recurse(s, ctx, pred, hit) {
                    return true;
                }
            }
        } else {
            let n = ctx.size_in(bl);
            for j in 0..n {
                if Self::add_ref_recurse(s, ctx, ctx.get_in(bl, j), hit) {
                    return true;
                }
            }
        }
        false
    }

    /// Reset \b this based on def-use of a single Varnode (C++ `Cover::rebuild`,
    /// `cover.cc:477-496`).
    ///
    /// The def/use graph walk is driven by [`CoverContext`]; the implied-output
    /// chase (`outVn->isImplied()`) keeps the exact `path` BFS order of the C++.
    pub fn rebuild(&mut self, ctx: &dyn CoverContext, vn: crate::context::VarnodeId) {
        // addDefPoint(vn)
        let (def, is_input) = ctx.def_point(vn);
        self.add_def_point(def, is_input);

        let (runs, ()) = with_scratch(&self.runs, |s| {
            let mut path = vec![vn];
            let mut pos = 0usize;
            while pos < path.len() {
                let cur_vn = path[pos];
                pos += 1;
                for op in ctx.descend(cur_vn) {
                    let (bl, ref_point, is_multiequal, pred_blocks) = ctx.ref_point(op, vn);
                    let never = &mut |_, _: &CoverBlock| false;
                    Self::add_ref_point(s, ctx, bl, ref_point, is_multiequal, &pred_blocks, never);
                    if let Some(out_vn) = ctx.out_implied(op) {
                        path.push(out_vn);
                    }
                }
            }
        });
        self.runs = runs;
    }

    /// Check the definition of a Varnode for containment (C++
    /// `Cover::containVarnodeDef`, `cover.cc:441-462`).
    ///
    /// `def` is `(block_index, CoverPoint)` for the defining op, or `None` for an
    /// input (the C++ `op = (const PcodeOp *)2; blk = 0;` branch).
    /// Returns 0 (not contained), 1 (interior), 2 (defining points intersect),
    /// 3 (Cover's tail is the varnode definition).
    pub fn contain_varnode_def(&self, def: Option<(int4, CoverPoint)>) -> int4 {
        let (blk, point) = match def {
            None => (0, Some(CoverPoint::Input)), // input -> (PcodeOp *)2
            Some((b, p)) => (b, Some(p)),
        };
        let cb = match self.find(blk) {
            None => return 0,
            Some(cb) => cb,
        };
        if cb.contain(point) {
            let boundtype = cb.boundary(point);
            if boundtype == 0 {
                return 1;
            }
            if boundtype == 2 {
                return 2;
            }
            return 3;
        }
        0
    }

    /// Does \b this contain the given PcodeOp (C++ `Cover::contain`,
    /// `cover.cc:413-425`): `max` 1 tests any containment, 2 forces interior.
    pub fn contain(&self, op_blk: int4, op_point: CoverPoint, max: int4) -> bool {
        let cb = match self.find(op_blk) {
            None => return false,
            Some(cb) => cb,
        };
        if cb.contain(Some(op_point)) {
            if max == 1 {
                return true;
            }
            if 0 == cb.boundary(Some(op_point)) {
                return true;
            }
        }
        false
    }

    /// Does \b this cover any PcodeOp in the given PcodeOpSet (C++
    /// `Cover::intersect(const PcodeOpSet &,Varnode *)`, `cover.cc:342-382`).
    ///
    /// `rep_addr` is the address of the representative Varnode for the secondary
    /// `affectsTest` (the C++ passes `Varnode *vn` and reads only `vn->getAddr()`
    /// in `StackAffectingOps::affectsTest`, so we thread the resolved address).
    /// (unlace) Upstream's walk keeps the index of the block it just tested, so
    /// it skips the set's next block after every block it shares with the
    /// cover. A second walk that reads each block's index tests every guarded
    /// STORE; CALLs keep upstream's walk.
    pub fn intersect_op_set(&self, op_set: &PcodeOpSet, rep_addr: &Address) -> bool {
        self.walk_op_set(op_set, rep_addr, false)
            || (op_set.op_list.iter().any(|e| e.store) && self.walk_op_set(op_set, rep_addr, true))
    }

    /// The block walk of [`Cover::intersect_op_set`]; `stores` re-reads the
    /// set's block index after a shared block and tests only STORE entries.
    fn walk_op_set(&self, op_set: &PcodeOpSet, rep_addr: &Address, stores: bool) -> bool {
        if op_set.op_list.is_empty() {
            return false;
        }
        let mut set_block = 0usize;
        let mut op_index = op_set.block_start[set_block] as usize;
        let mut set_index = op_set.op_list[op_index].block_index;
        let first_block = op_set.op_list[0].block_index;
        let from = self.runs.partition_point(|r| r.hi < first_block);
        let mut cover_iter = self.runs[from..]
            .iter()
            .flat_map(|r| (r.lo.max(first_block)..=r.hi).map(move |bl| (bl, r.cb)))
            .peekable();
        while let Some(&(cover_index, cover_block)) = cover_iter.peek() {
            if cover_index < set_index {
                cover_iter.next();
            } else if cover_index > set_index {
                set_block += 1;
                if set_block >= op_set.block_start.len() {
                    break;
                }
                op_index = op_set.block_start[set_block] as usize;
                set_index = op_set.op_list[op_index].block_index;
            } else {
                cover_iter.next();
                let mut op_max = op_set.op_list.len();
                set_block += 1;
                if set_block < op_set.block_start.len() {
                    op_max = op_set.block_start[set_block] as usize;
                }
                loop {
                    let entry = &op_set.op_list[op_index];
                    if (!stores || entry.store) && cover_block.contain(Some(entry.point)) {
                        // Does range contain the call?
                        if cover_block.boundary(Some(entry.point)) == 0 {
                            // Is the call on the boundary
                            if op_set.affects_test(entry.id, rep_addr) {
                                return true;
                            }
                        }
                    }
                    op_index += 1;
                    if op_index >= op_max {
                        break;
                    }
                }
                if set_block >= op_set.block_start.len() {
                    break;
                }
                if stores {
                    set_index = op_set.op_list[op_index].block_index;
                }
            }
        }
        false
    }
}

/// Cross-arena graph access for the [`Cover`] def/use walk (the C++ reads off the
/// held `Varnode *`/`PcodeOp *`/`FlowBlock *` directly; here `Funcdata` supplies
/// them).  Implemented in `funcdata.rs` per the W7 boundary.
pub trait CoverContext {
    /// `bl->sizeIn()` — number of predecessor blocks of block index `bl`.
    fn size_in(&self, bl: int4) -> int4;
    /// `bl->getIn(j)->getIndex()` — index of the j-th predecessor of block `bl`.
    fn get_in(&self, bl: int4, j: int4) -> int4;
    /// `addDefPoint`'s resolution of `vn`: the `(block_index, CoverPoint)` of its
    /// defining op (`None` if it has no def), and whether `vn->isInput()`.
    fn def_point(&self, vn: crate::context::VarnodeId) -> (Option<(int4, CoverPoint)>, bool);
    /// `vn->beginDescend()..endDescend()` — the reading ops, in C++ order.
    fn descend(&self, vn: crate::context::VarnodeId) -> Vec<OpId>;
    /// `addRefPoint` inputs for reading op `op` of Varnode `vn`:
    /// `(block_index, ref_point, is_multiequal, multiequal_pred_blocks)`.
    /// `multiequal_pred_blocks` lists the predecessor block index for each input
    /// slot `j` with `ref->getIn(j)==vn` (only meaningful when `is_multiequal`).
    fn ref_point(
        &self,
        op: OpId,
        vn: crate::context::VarnodeId,
    ) -> (int4, CoverPoint, bool, Vec<int4>);
    /// `op->getOut()` when it exists and `isImplied()` (the rebuild path-chase);
    /// `None` otherwise.
    fn out_implied(&self, op: OpId) -> Option<crate::context::VarnodeId>;
}

/// One entry of a [`PcodeOpSet`] — a `PcodeOp *` resolved into the fields the set
/// reads (block index, the [`CoverPoint`] used for containment, and the op id for
/// the secondary `affectsTest`).
#[derive(Debug, Clone, Copy)]
pub struct PcodeOpSetEntry {
    /// The op id (C++ `PcodeOp *`).
    pub id: OpId,
    /// `op->getParent()->getIndex()`.
    pub block_index: int4,
    /// The `CoverBlock::contain`/`boundary` point for this op.
    pub point: CoverPoint,
    /// `op->getSeqNum().getOrder()` — the `compareByBlock` within-block key.
    pub order: uintm,
    /// (unlace) A guarded stack STORE the second walk of
    /// [`Cover::intersect_op_set`] tests (under `stackstoreguard`).
    pub store: bool,
}

/// A set of PcodeOps that can be tested for Cover intersections (C++ `class
/// PcodeOpSet`, `cover.hh:35-65`).
///
/// The C++ `affectsTest` is a pure virtual the owner overrides; here it is a
/// boxed closure supplied at construction, since the only owner (the call-cross
/// intersection test in `variable.cc`) is data-driven.
pub struct PcodeOpSet {
    /// Ops in this set, sorted on block index then `SeqNum::order` (C++ `opList`).
    op_list: Vec<PcodeOpSetEntry>,
    /// Index of first op in each non-empty block (C++ `blockStart`).
    block_start: Vec<int4>,
    /// Has `populate()` been called (C++ `is_pop`).
    is_pop: bool,
    /// The `affectsTest` secondary test (C++ pure-virtual override).  The C++
    /// `affectsTest(PcodeOp *op,Varnode *vn)` reads only `vn->getAddr()`, so the
    /// closure takes the resolved `Address`.
    affects: Box<dyn Fn(OpId, &Address) -> bool>,
    /// The `populate()` call-back: returns the unsorted op entries to add.
    populate_fn: Box<dyn Fn() -> Vec<PcodeOpSetEntry>>,
}

impl PcodeOpSet {
    /// Construct an empty, unpopulated set (C++ `PcodeOpSet()`), with the
    /// `affectsTest` override and the `populate()` call-back.
    pub fn new(
        populate_fn: Box<dyn Fn() -> Vec<PcodeOpSetEntry>>,
        affects: Box<dyn Fn(OpId, &Address) -> bool>,
    ) -> PcodeOpSet {
        PcodeOpSet {
            op_list: Vec::new(),
            block_start: Vec::new(),
            is_pop: false,
            affects,
            populate_fn,
        }
    }

    /// Return \b true if \b this set is populated (C++ `isPopulated`).
    pub fn is_populated(&self) -> bool {
        self.is_pop
    }

    /// Clear all PcodeOps in \b this (C++ `clear`).
    pub fn clear(&mut self) {
        self.is_pop = false;
        self.op_list.clear();
        self.block_start.clear();
    }

    /// Secondary test that the given PcodeOp affects the Varnode (C++
    /// `affectsTest`).
    fn affects_test(&self, op: OpId, vn_addr: &Address) -> bool {
        (self.affects)(op, vn_addr)
    }

    /// Add a single resolved op entry directly (the owner-driven `populate()`
    /// path: `Funcdata::populateAffectingOps` adds each op via `addOp`).  The
    /// caller must follow with [`finalize_pub`](Self::finalize_pub).
    pub fn add_op_entry(&mut self, entry: PcodeOpSetEntry) {
        self.op_list.push(entry);
    }

    /// Install the secondary `affectsTest` (C++ pure-virtual override) — used by
    /// the owner-driven populate path to bind the freshly snapshotted
    /// store-guard data.
    pub fn set_affects(&mut self, affects: Box<dyn Fn(OpId, &Address) -> bool>) {
        self.affects = affects;
    }

    /// Sort the directly-added ops into blocks and mark the set populated (C++
    /// `finalize`).  Pairs with [`add_op_entry`](Self::add_op_entry).
    pub fn finalize_pub(&mut self) {
        self.finalize();
    }

    /// Compare PcodeOps for \b this set: block index, then `SeqNum::order` (C++
    /// `PcodeOpSet::compareByBlock`, `cover.cc:646-652`).
    fn compare_by_block(a: &PcodeOpSetEntry, b: &PcodeOpSetEntry) -> std::cmp::Ordering {
        if a.block_index != b.block_index {
            return a.block_index.cmp(&b.block_index);
        }
        a.order.cmp(&b.order)
    }

    /// Populate \b this by calling the owner's `populate()` call-back, then
    /// `finalize()` (C++ `populate` override + `finalize`, `cover.cc:627-640`).
    pub fn populate(&mut self) {
        self.op_list = (self.populate_fn)();
        self.finalize();
    }

    /// Sort ops in the set into blocks (C++ `PcodeOpSet::finalize`,
    /// `cover.cc:627-640`).
    fn finalize(&mut self) {
        self.op_list.sort_by(PcodeOpSet::compare_by_block);
        let mut block_num: int4 = -1;
        for (i, entry) in self.op_list.iter().enumerate() {
            let new_block_num = entry.block_index;
            if new_block_num > block_num {
                self.block_start.push(i as int4);
                block_num = new_block_num;
            }
        }
        self.is_pop = true;
    }
}

#[cfg(test)]
mod tests;
