use super::*;
use slotmap::KeyData;

/// Build a real-op CoverPoint with a synthetic order (non-MULTIEQUAL).
fn op_point(uindex: uintm) -> CoverPoint {
    CoverPoint::Op {
        uindex,
        multiequal: false,
    }
}

fn meq_point(uindex: uintm) -> CoverPoint {
    CoverPoint::Op {
        uindex,
        multiequal: true,
    }
}

fn put(c: &mut Cover, bl: int4, cb: CoverBlock) {
    let mut all: std::collections::BTreeMap<int4, CoverBlock> =
        c.iter().map(|(k, v)| (k, *v)).collect();
    all.insert(bl, cb);
    c.runs.clear();
    for (k, v) in all {
        push_block(&mut c.runs, k, v);
    }
}

#[test]
fn coverblock_empty_and_sentinels() {
    let cb = CoverBlock::new();
    assert!(cb.empty());
    assert_eq!(CoverPoint::Begin.get_uindex(), 0);
    assert_eq!(CoverPoint::Input.get_uindex(), 0);
    assert_eq!(CoverPoint::End.get_uindex(), uintm::MAX);
}

#[test]
fn coverblock_setall_covers_whole() {
    let mut cb = CoverBlock::new();
    cb.set_all();
    assert!(!cb.empty());
    assert_eq!(cb.get_start(), None);
    assert_eq!(cb.get_stop(), Some(CoverPoint::End));
}

#[test]
fn coverblock_setbegin_seeds_stop() {
    let mut cb = CoverBlock::new();
    cb.set_begin(Some(op_point(10)));
    assert_eq!(cb.get_start(), Some(op_point(10)));
    // stop was 0 -> seeded to End (1)
    assert_eq!(cb.get_stop(), Some(CoverPoint::End));
}

#[test]
fn coverblock_point_intersect() {
    // A def-point block [10,10]
    let mut a = CoverBlock::new();
    a.set_begin(Some(op_point(10)));
    a.set_end(Some(op_point(10)));
    // A def-point block [10,10] again: boundary intersection at single point
    let mut b = CoverBlock::new();
    b.set_begin(Some(op_point(10)));
    b.set_end(Some(op_point(10)));
    // ustart=ustop=10, both single point -> ustop<=u2start (10<=10) true and
    // ustart==u2stop -> boundary intersection (1).
    assert_eq!(a.intersect(&b), 1);
}

#[test]
fn coverblock_interval_intersect() {
    // [5,20] vs [10,30] -> interval overlap (2)
    let mut a = CoverBlock::new();
    a.set_begin(Some(op_point(5)));
    a.set_end(Some(op_point(20)));
    let mut b = CoverBlock::new();
    b.set_begin(Some(op_point(10)));
    b.set_end(Some(op_point(30)));
    assert_eq!(a.intersect(&b), 2);
}

#[test]
fn coverblock_no_intersect() {
    // [5,9] vs [10,20] -> disjoint (0)
    let mut a = CoverBlock::new();
    a.set_begin(Some(op_point(5)));
    a.set_end(Some(op_point(9)));
    let mut b = CoverBlock::new();
    b.set_begin(Some(op_point(10)));
    b.set_end(Some(op_point(20)));
    assert_eq!(a.intersect(&b), 0);
}

#[test]
fn coverblock_contain_and_boundary() {
    // [10,20]
    let mut a = CoverBlock::new();
    a.set_begin(Some(op_point(10)));
    a.set_end(Some(op_point(20)));
    assert!(a.contain(Some(op_point(15))));
    assert!(a.contain(Some(op_point(10))));
    assert!(!a.contain(Some(op_point(25))));
    // boundary: start point with non-zero start -> 2 (defining point)
    assert_eq!(a.boundary(Some(op_point(10))), 2);
    // tail
    assert_eq!(a.boundary(Some(op_point(20))), 1);
    // interior
    assert_eq!(a.boundary(Some(op_point(15))), 0);
}

#[test]
fn coverblock_merge_disjoint_then_full() {
    // [5,10] merge [20,25]: disjoint, earliest start (5) keeps, takes stop 25
    let mut a = CoverBlock::new();
    a.set_begin(Some(op_point(5)));
    a.set_end(Some(op_point(10)));
    let mut b = CoverBlock::new();
    b.set_begin(Some(op_point(20)));
    b.set_end(Some(op_point(25)));
    a.merge(&b);
    assert_eq!(a.get_start(), Some(op_point(5)));
    assert_eq!(a.get_stop(), Some(op_point(25)));
}

#[test]
fn coverblock_merge_into_empty() {
    let mut a = CoverBlock::new();
    let mut b = CoverBlock::new();
    b.set_begin(Some(op_point(5)));
    b.set_end(Some(op_point(10)));
    a.merge(&b);
    assert_eq!(a.get_start(), Some(op_point(5)));
    assert_eq!(a.get_stop(), Some(op_point(10)));
    // merging empty into non-empty is a no-op
    let mut c = CoverBlock::new();
    a.merge(&c);
    assert_eq!(a.get_start(), Some(op_point(5)));
    c.clear();
}

#[test]
fn cover_compare_to_and_block_walk() {
    let mut a = Cover::new();
    put(&mut a, 2, {
        let mut cb = CoverBlock::new();
        cb.set_all();
        cb
    });
    let mut b = Cover::new();
    put(&mut b, 5, {
        let mut cb = CoverBlock::new();
        cb.set_all();
        cb
    });
    // a's first block (2) < b's first block (5) -> -1
    assert_eq!(a.compare_to(&b), -1);
    assert_eq!(b.compare_to(&a), 1);
    // empty cover compares as 1000000
    let e = Cover::new();
    assert_eq!(a.compare_to(&e), -1);
    assert_eq!(e.compare_to(&a), 1);
}

#[test]
fn cover_intersect_matrix_diamond() {
    // Two covers sharing block 1 with overlapping intervals -> 2
    let mut a = Cover::new();
    let mut acb = CoverBlock::new();
    acb.set_begin(Some(op_point(5)));
    acb.set_end(Some(op_point(20)));
    put(&mut a, 1, acb);
    let mut b = Cover::new();
    let mut bcb = CoverBlock::new();
    bcb.set_begin(Some(op_point(10)));
    bcb.set_end(Some(op_point(30)));
    put(&mut b, 1, bcb);
    assert_eq!(a.intersect(&b), 2);
    assert_eq!(a.intersect_by_block(1, &b), 2);
    // disjoint blocks -> no intersection
    let mut c = Cover::new();
    let mut ccb = CoverBlock::new();
    ccb.set_all();
    put(&mut c, 7, ccb);
    assert_eq!(a.intersect(&c), 0);
}

#[test]
fn cover_intersect_list_threshold() {
    let mut a = Cover::new();
    let mut b = Cover::new();
    // block 1: point intersect (1)
    let mut a1 = CoverBlock::new();
    a1.set_begin(Some(op_point(10)));
    a1.set_end(Some(op_point(10)));
    put(&mut a, 1, a1);
    let mut b1 = CoverBlock::new();
    b1.set_begin(Some(op_point(10)));
    b1.set_end(Some(op_point(10)));
    put(&mut b, 1, b1);
    // block 2: interval intersect (2)
    let mut a2 = CoverBlock::new();
    a2.set_begin(Some(op_point(5)));
    a2.set_end(Some(op_point(20)));
    put(&mut a, 2, a2);
    let mut b2 = CoverBlock::new();
    b2.set_begin(Some(op_point(10)));
    b2.set_end(Some(op_point(30)));
    put(&mut b, 2, b2);

    let mut out = Vec::new();
    a.intersect_list(&mut out, &b, 2); // only interval (level 2)
    assert_eq!(out, vec![2]);
    a.intersect_list(&mut out, &b, 1); // both
    assert_eq!(out, vec![1, 2]);
}

#[test]
fn cover_merge_block_by_block() {
    let mut a = Cover::new();
    let mut a1 = CoverBlock::new();
    a1.set_begin(Some(op_point(5)));
    a1.set_end(Some(op_point(10)));
    put(&mut a, 1, a1);

    let mut b = Cover::new();
    let mut b1 = CoverBlock::new();
    b1.set_begin(Some(op_point(20)));
    b1.set_end(Some(op_point(25)));
    put(&mut b, 1, b1);
    let mut b2 = CoverBlock::new();
    b2.set_all();
    put(&mut b, 2, b2);

    a.merge(&b);
    // block 1 merged disjoint -> [5,25]
    assert_eq!(a.get_cover_block(1).get_start(), Some(op_point(5)));
    assert_eq!(a.get_cover_block(1).get_stop(), Some(op_point(25)));
    // block 2 brought over whole
    assert_eq!(a.get_cover_block(2).get_stop(), Some(CoverPoint::End));
}

#[test]
fn cover_add_def_point_input_vs_def() {
    // input
    let mut c = Cover::new();
    c.add_def_point(None, true);
    let cb = c.get_cover_block(0);
    assert_eq!(cb.get_start(), Some(CoverPoint::Input));
    assert_eq!(cb.get_stop(), Some(CoverPoint::Input));
    // def at block 3
    let mut c2 = Cover::new();
    c2.add_def_point(Some((3, op_point(7))), false);
    let cb2 = c2.get_cover_block(3);
    assert_eq!(cb2.get_start(), Some(op_point(7)));
    assert_eq!(cb2.get_stop(), Some(op_point(7)));
    // free (no def, not input) -> empty cover
    let mut c3 = Cover::new();
    c3.add_def_point(None, false);
    assert_eq!(c3.iter().count(), 0);
}

#[test]
fn cover_contain_varnode_def() {
    // Cover with block 2 = [10,20]; def at (2,10) is on the start boundary
    let mut c = Cover::new();
    let mut cb = CoverBlock::new();
    cb.set_begin(Some(op_point(10)));
    cb.set_end(Some(op_point(20)));
    put(&mut c, 2, cb);
    // def point (2,10) is on start boundary -> 2
    assert_eq!(c.contain_varnode_def(Some((2, op_point(10)))), 2);
    // interior (2,15) -> 1
    assert_eq!(c.contain_varnode_def(Some((2, op_point(15)))), 1);
    // tail (2,20) -> 3
    assert_eq!(c.contain_varnode_def(Some((2, op_point(20)))), 3);
    // not present block -> 0
    assert_eq!(c.contain_varnode_def(Some((9, op_point(1)))), 0);
}

/// A diamond CFG cover rebuild via CoverContext: def in block 0, read in
/// block 3 (the join). Exercises addRefRecurse filling blocks 1,2 fully and
/// block 0 to the bottom.
struct DiamondCtx;
impl CoverContext for DiamondCtx {
    fn size_in(&self, bl: int4) -> int4 {
        match bl {
            0 => 0,     // entry
            1 | 2 => 1, // each branch has one pred (block 0)
            3 => 2,     // join has two preds (1,2)
            _ => 0,
        }
    }
    fn get_in(&self, bl: int4, j: int4) -> int4 {
        match (bl, j) {
            (1, 0) => 0,
            (2, 0) => 0,
            (3, 0) => 1,
            (3, 1) => 2,
            _ => panic!("bad pred"),
        }
    }
    fn def_point(&self, _vn: crate::context::VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        // defined at block 0, order 5
        (Some((0, op_point(5))), false)
    }
    fn descend(&self, _vn: crate::context::VarnodeId) -> Vec<OpId> {
        // single reader op
        vec![OpId::from(KeyData::from_ffi(100))]
    }
    fn ref_point(
        &self,
        _op: OpId,
        _vn: crate::context::VarnodeId,
    ) -> (int4, CoverPoint, bool, Vec<int4>) {
        // read in block 3 at order 9, not a MULTIEQUAL
        (3, op_point(9), false, vec![])
    }
    fn out_implied(&self, _op: OpId) -> Option<crate::context::VarnodeId> {
        None
    }
}

#[test]
fn cover_rebuild_diamond() {
    let ctx = DiamondCtx;
    let mut c = Cover::new();
    let vn = crate::context::VarnodeId::from(KeyData::from_ffi(1));
    c.rebuild(&ctx, vn);
    // block 0: def at 5, filled to bottom (End)
    let cb0 = c.get_cover_block(0);
    assert_eq!(cb0.get_start(), Some(op_point(5)));
    assert_eq!(cb0.get_stop(), Some(CoverPoint::End));
    // block 3: ref endpoint at 9, start is begin
    let cb3 = c.get_cover_block(3);
    assert_eq!(cb3.get_stop(), Some(op_point(9)));
    // blocks 1,2 filled whole (setAll: start None, stop End)
    let cb1 = c.get_cover_block(1);
    assert!(!cb1.empty());
    assert_eq!(cb1.get_stop(), Some(CoverPoint::End));
    let cb2 = c.get_cover_block(2);
    assert!(!cb2.empty());
}

/// A loop CFG: def in block 0, MULTIEQUAL read in block 1 (the loop head)
/// pulling cover back through the back-edge block 2.
struct LoopCtx;
impl CoverContext for LoopCtx {
    fn size_in(&self, bl: int4) -> int4 {
        match bl {
            0 => 0, // entry
            1 => 2, // loop head: pred 0 (entry) and 2 (back edge)
            2 => 1, // loop body: pred 1
            _ => 0,
        }
    }
    fn get_in(&self, bl: int4, j: int4) -> int4 {
        match (bl, j) {
            (1, 0) => 0,
            (1, 1) => 2,
            (2, 0) => 1,
            _ => panic!("bad pred"),
        }
    }
    fn def_point(&self, _vn: crate::context::VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        (Some((0, op_point(3))), false)
    }
    fn descend(&self, _vn: crate::context::VarnodeId) -> Vec<OpId> {
        vec![OpId::from(KeyData::from_ffi(200))]
    }
    fn ref_point(
        &self,
        _op: OpId,
        _vn: crate::context::VarnodeId,
    ) -> (int4, CoverPoint, bool, Vec<int4>) {
        // MULTIEQUAL in block 1 reading vn from the back-edge slot (pred 2)
        (1, meq_point(0), true, vec![2])
    }
    fn out_implied(&self, _op: OpId) -> Option<crate::context::VarnodeId> {
        None
    }
}

#[test]
fn cover_rebuild_loop_multiequal() {
    let ctx = LoopCtx;
    let mut c = Cover::new();
    let vn = crate::context::VarnodeId::from(KeyData::from_ffi(1));
    c.rebuild(&ctx, vn);
    // def block 0 present, filled to bottom
    let cb0 = c.get_cover_block(0);
    assert_eq!(cb0.get_start(), Some(op_point(3)));
    // back-edge block 2 filled whole (recursed via MULTIEQUAL pred)
    let cb2 = c.get_cover_block(2);
    assert!(!cb2.empty());
}

/// `add_ref_point_until` stops exactly when the finished `add_ref_point_for`
/// Cover contains a point of the set, and builds that Cover when nothing
/// stops it.
#[test]
fn add_ref_point_until_agrees_with_the_full_cover() {
    let vn = crate::context::VarnodeId::from(KeyData::from_ffi(1));
    let reader = OpId::from(KeyData::from_ffi(100));
    let ctxs: [&dyn CoverContext; 2] = [&DiamondCtx, &LoopCtx];
    for ctx in ctxs {
        let start = || {
            let mut c = Cover::new();
            let (def, is_input) = ctx.def_point(vn);
            c.add_def_point(def, is_input);
            c
        };
        let mut full = start();
        full.add_ref_point_for(ctx, reader, vn);
        let mut walked = start();
        assert!(!walked.add_ref_point_until(ctx, reader, vn, |_, _| false));
        for bl in 0..4 {
            assert_eq!(walked.get_cover_block(bl), full.get_cover_block(bl));
        }
        let points: Vec<(int4, CoverPoint)> = (0..4)
            .flat_map(|bl| {
                (0..12)
                    .map(move |k| (bl, op_point(k)))
                    .chain([(bl, meq_point(0))])
            })
            .collect();
        for point in &points {
            let want = full.contain(point.0, point.1, 1);
            let got = start().add_ref_point_until(ctx, reader, vn, |bl, cb| {
                bl == point.0 && cb.contain(Some(point.1))
            });
            assert_eq!(got, want, "{point:?}");
        }
    }
}

/// A straight line of blocks 0 -> 1 -> ... -> 99.
struct ChainCtx;
impl CoverContext for ChainCtx {
    fn size_in(&self, bl: int4) -> int4 {
        if bl == 0 { 0 } else { 1 }
    }
    fn get_in(&self, bl: int4, _j: int4) -> int4 {
        bl - 1
    }
    fn def_point(&self, _vn: crate::context::VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        (Some((0, op_point(5))), false)
    }
    fn descend(&self, _vn: crate::context::VarnodeId) -> Vec<OpId> {
        vec![OpId::from(KeyData::from_ffi(100))]
    }
    fn ref_point(
        &self,
        _op: OpId,
        _vn: crate::context::VarnodeId,
    ) -> (int4, CoverPoint, bool, Vec<int4>) {
        (99, op_point(3), false, vec![])
    }
    fn out_implied(&self, _op: OpId) -> Option<crate::context::VarnodeId> {
        None
    }
}

/// A value defined in block 0 and read in block 99 covers the 98 blocks
/// between as one run, and still reads back block by block.
#[test]
fn whole_blocks_between_def_and_read_share_one_run() {
    let mut c = Cover::new();
    c.rebuild(
        &ChainCtx,
        crate::context::VarnodeId::from(KeyData::from_ffi(1)),
    );
    assert_eq!(c.runs.len(), 3);
    assert_eq!(c.iter().count(), 100);
    assert_eq!(c.get_cover_block(0).get_start(), Some(op_point(5)));
    assert_eq!(c.get_cover_block(0).get_stop(), Some(CoverPoint::End));
    let mut whole = CoverBlock::new();
    whole.set_all();
    assert!((1..99).all(|bl| *c.get_cover_block(bl) == whole));
    assert_eq!(c.get_cover_block(99).get_start(), None);
    assert_eq!(c.get_cover_block(99).get_stop(), Some(op_point(3)));
    assert!(c.get_cover_block(100).empty());
}

struct Rng(u64);
impl Rng {
    fn below(&mut self, n: u64) -> u64 {
        self.0 ^= self.0 << 13;
        self.0 ^= self.0 >> 7;
        self.0 ^= self.0 << 17;
        self.0 % n
    }
}

fn random_block(r: &mut Rng) -> CoverBlock {
    let mut cb = CoverBlock::new();
    if r.below(3) == 0 {
        cb.set_all();
        return cb;
    }
    let mut pt = |r: &mut Rng| match r.below(6) {
        0 => None,
        1 => Some(CoverPoint::Begin),
        2 => Some(CoverPoint::End),
        3 => Some(CoverPoint::Input),
        4 => Some(op_point(r.below(8) as uintm)),
        _ => Some(meq_point(0)),
    };
    let (start, stop) = (pt(r), pt(r));
    cb.set_start(start);
    cb.set_stop(stop);
    cb
}

fn random_cover(r: &mut Rng) -> (Cover, std::collections::BTreeMap<int4, CoverBlock>) {
    let mut model = std::collections::BTreeMap::new();
    for _ in 0..r.below(40) {
        model.insert(r.below(48) as int4, random_block(r));
    }
    if r.below(2) == 0 {
        let lo = r.below(40) as int4;
        for bl in lo..lo + r.below(12) as int4 {
            let mut cb = CoverBlock::new();
            cb.set_all();
            model.insert(bl, cb);
        }
    }
    let mut c = Cover::new();
    for (&k, &v) in &model {
        push_block(&mut c.runs, k, v);
    }
    (c, model)
}

/// Runs answer intersect/intersectList and merge exactly as a map of one
/// CoverBlock per block does, and adjacent whole blocks always share a run.
#[test]
fn runs_merge_and_intersect_as_a_block_map_does() {
    let mut r = Rng(0x9e37_79b9_7f4a_7c15);
    for _ in 0..4000 {
        let (mut a, mut ma) = random_cover(&mut r);
        let (b, mb) = random_cover(&mut r);
        let mut want = 0;
        for (k, cb) in &ma {
            if let Some(cb2) = mb.get(k) {
                match cb.intersect(cb2) {
                    2 => {
                        want = 2;
                        break;
                    }
                    1 => want = 1,
                    _ => {}
                }
            }
        }
        assert_eq!(a.intersect(&b), want);
        for level in 1..=2 {
            let mut got = Vec::new();
            a.intersect_list(&mut got, &b, level);
            let want: Vec<int4> = ma
                .iter()
                .filter(|(k, cb)| mb.get(k).is_some_and(|cb2| cb.intersect(cb2) >= level))
                .map(|(k, _)| *k)
                .collect();
            assert_eq!(got, want);
        }
        for (k, cb) in &mb {
            ma.entry(*k).or_default().merge(cb);
        }
        a.merge(&b);
        let got: Vec<(int4, CoverBlock)> = a.iter().map(|(k, v)| (k, *v)).collect();
        assert_eq!(got, ma.into_iter().collect::<Vec<_>>());
        assert!(a.runs.windows(2).all(|w| w[0].hi < w[1].lo
            && !(w[0].cb.is_full() && w[1].cb.is_full() && w[0].hi + 1 == w[1].lo)));
    }
}

/// The CoverBlock as upstream stores it: two optional points.
#[derive(Clone, Copy, Debug, PartialEq)]
struct PtBlock {
    start: Option<CoverPoint>,
    stop: Option<CoverPoint>,
}

fn uix(p: Option<CoverPoint>) -> uintm {
    p.map_or(0, CoverPoint::get_uindex)
}

impl PtBlock {
    fn empty(&self) -> bool {
        self.start.is_none() && self.stop.is_none()
    }
    fn intersect(&self, o: &PtBlock) -> int4 {
        if self.empty() || o.empty() {
            return 0;
        }
        let (s, e, s2, e2) = (uix(self.start), uix(self.stop), uix(o.start), uix(o.stop));
        let touch = |hit: bool| if hit { 1 } else { 0 };
        if s <= e {
            if s2 <= e2 {
                if e <= s2 || e2 <= s {
                    return touch(s == e2 || e == s2);
                }
            } else if s >= e2 && e <= s2 {
                return touch(s == e2 || e == s2);
            }
        } else if s2 <= e2 && s2 >= e && e2 <= s {
            return touch(s2 == e || e2 == s);
        }
        2
    }
    fn contain(&self, p: Option<CoverPoint>) -> bool {
        if self.empty() {
            return false;
        }
        let (u, s, e) = (uix(p), uix(self.start), uix(self.stop));
        if s <= e {
            return u >= s && u <= e;
        }
        u <= e || u >= s
    }
    fn boundary(&self, p: Option<CoverPoint>) -> int4 {
        if self.empty() {
            return 0;
        }
        if uix(self.start) == uix(p) && self.start.is_some() {
            return 2;
        }
        if uix(self.stop) == uix(p) {
            return 1;
        }
        0
    }
    fn merge(&mut self, o: &PtBlock) {
        if o.empty() {
            return;
        }
        if self.empty() {
            *self = *o;
            return;
        }
        let (s, s2) = (uix(self.start), uix(o.start));
        let i4 = s == 0 && o.stop == Some(CoverPoint::End);
        let i1 = i4 || o.contain(self.start);
        let i3 = s2 == 0 && self.stop == Some(CoverPoint::End);
        let i2 = i3 || self.contain(o.start);
        if i1 && i2 && (s != s2 || i3 || i4) {
            *self = PtBlock {
                start: None,
                stop: Some(CoverPoint::End),
            };
            return;
        }
        if i1 {
            self.start = o.start;
        } else if !i2 {
            if s < s2 {
                self.stop = o.stop;
            } else {
                self.start = o.start;
            }
            return;
        }
        if i3 || o.contain(self.stop) {
            self.stop = o.stop;
        }
    }
    fn packed(&self) -> CoverBlock {
        let mut cb = CoverBlock::new();
        cb.set_start(self.start);
        cb.set_stop(self.stop);
        cb
    }
}

fn point_alphabet() -> Vec<Option<CoverPoint>> {
    let mut pts = vec![
        None,
        Some(CoverPoint::Begin),
        Some(CoverPoint::End),
        Some(CoverPoint::Input),
    ];
    for u in [0, 1, 7, uintm::MAX - 1, uintm::MAX] {
        pts.push(Some(op_point(u)));
        pts.push(Some(meq_point(u)));
    }
    pts
}

/// A packed CoverBlock answers every block query and merge exactly as the
/// two-point block does, over every pair of points, and is 12 bytes.
#[test]
fn packed_blocks_answer_as_two_point_blocks_do() {
    assert_eq!(std::mem::size_of::<CoverBlock>(), 12);
    assert_eq!(std::mem::size_of::<Run>(), 20);
    let pts = point_alphabet();
    let blocks: Vec<PtBlock> = pts
        .iter()
        .flat_map(|&start| pts.iter().map(move |&stop| PtBlock { start, stop }))
        .collect();
    for a in &blocks {
        let pa = a.packed();
        assert_eq!((pa.get_start(), pa.get_stop()), (a.start, a.stop));
        assert_eq!(pa.empty(), a.empty());
        for &p in &pts {
            assert_eq!(pa.contain(p), a.contain(p), "{a:?} {p:?}");
            assert_eq!(pa.boundary(p), a.boundary(p), "{a:?} {p:?}");
        }
        for b in &blocks {
            let pb = b.packed();
            assert_eq!(pa.intersect(&pb), a.intersect(b), "{a:?} {b:?}");
            let (mut m, mut pm) = (*a, pa);
            m.merge(b);
            pm.merge(&pb);
            assert_eq!(pm, m.packed(), "{a:?} {b:?}");
        }
    }
}

/// Once its generation wraps, the scratch table holds none of the blocks
/// an earlier walk left in it.
#[test]
fn scratch_forgets_old_blocks_when_its_generation_wraps() {
    let mut s = Scratch::default();
    s.begin();
    s.entry(3).set_all();
    s.generation = u32::MAX;
    s.begin();
    assert_eq!(s.generation, 1);
    assert!(s.entry(3).empty());
    assert_eq!(s.touched, vec![3]);
}

/// A walk started inside another walk gets a table of its own, and both
/// store exactly their own blocks.
#[test]
fn a_walk_inside_a_walk_gets_its_own_table() {
    let mut full = CoverBlock::new();
    full.set_all();
    let mut tip = CoverBlock::new();
    tip.set_end(Some(op_point(4)));
    let (outer, inner) = with_scratch(
        &[Run {
            lo: 0,
            hi: 3,
            cb: full,
        }],
        |s| {
            s.entry(5).set_all();
            with_scratch(
                &[Run {
                    lo: 7,
                    hi: 7,
                    cb: tip,
                }],
                |t| *t.entry(8) = full,
            )
            .0
        },
    );
    assert_eq!(
        outer,
        vec![
            Run {
                lo: 0,
                hi: 3,
                cb: full
            },
            Run {
                lo: 5,
                hi: 5,
                cb: full
            }
        ]
    );
    assert_eq!(
        inner,
        vec![
            Run {
                lo: 7,
                hi: 7,
                cb: tip
            },
            Run {
                lo: 8,
                hi: 8,
                cb: full
            }
        ]
    );
}

/// The Cover as a map of one CoverBlock per block, with upstream's walks.
mod model {
    use super::*;
    use std::collections::BTreeMap;

    #[doc(hidden)]
    pub type Map = BTreeMap<int4, CoverBlock>;
    #[doc(hidden)]
    pub type Hit<'a> = &'a mut dyn FnMut(int4, &CoverBlock) -> bool;

    fn stop_is_multiequal(cb: &CoverBlock) -> bool {
        matches!(
            cb.get_stop(),
            Some(CoverPoint::Op {
                multiequal: true,
                ..
            })
        )
    }

    fn recurse(m: &mut Map, ctx: &dyn CoverContext, bl: int4, hit: Hit) -> bool {
        let block = m.entry(bl).or_default();
        let mut preds = false;
        if block.empty() {
            block.set_all();
            if hit(bl, block) {
                return true;
            }
            preds = true;
        } else {
            let meq = stop_is_multiequal(block);
            let (ustart, ustop) = (uix(block.get_start()), uix(block.get_stop()));
            if ustop != uintm::MAX && ustop >= ustart {
                block.set_end(Some(CoverPoint::End));
                if hit(bl, block) {
                    return true;
                }
            }
            if ustop == 0 && block.get_start().is_none() && meq {
                preds = true;
            }
        }
        preds && (0..ctx.size_in(bl)).any(|j| recurse(m, ctx, ctx.get_in(bl, j), hit))
    }

    #[doc(hidden)]
    pub fn add_ref(
        m: &mut Map,
        ctx: &dyn CoverContext,
        op: OpId,
        vn: crate::context::VarnodeId,
        hit: Hit,
    ) -> bool {
        let (bl, point, is_meq, listed) = ctx.ref_point(op, vn);
        let mut all = false;
        {
            let block = m.entry(bl).or_default();
            if block.empty() {
                block.set_end(Some(point));
                if hit(bl, block) {
                    return true;
                }
            } else if block.contain(Some(point)) {
                if !is_meq {
                    return false;
                }
            } else {
                let meq = stop_is_multiequal(block);
                let start = block.get_start();
                block.set_end(Some(point));
                if hit(bl, block) {
                    return true;
                }
                if point.get_uindex() >= uix(start) {
                    all = meq && start.is_none();
                    if !all {
                        return false;
                    }
                }
            }
        }
        let preds: Vec<int4> = if all || !is_meq {
            (0..ctx.size_in(bl)).map(|j| ctx.get_in(bl, j)).collect()
        } else {
            listed
        };
        preds.into_iter().any(|p| recurse(m, ctx, p, hit))
    }

    #[doc(hidden)]
    pub fn rebuild(ctx: &dyn CoverContext, vn: crate::context::VarnodeId) -> Map {
        let mut m = Map::new();
        let at = match ctx.def_point(vn) {
            (Some(def), _) => Some(def),
            (None, true) => Some((0, CoverPoint::Input)),
            (None, false) => None,
        };
        if let Some((blk, point)) = at {
            let cb = m.entry(blk).or_default();
            cb.set_begin(Some(point));
            cb.set_end(Some(point));
        }
        let mut path = vec![vn];
        let mut pos = 0;
        while pos < path.len() {
            let cur = path[pos];
            pos += 1;
            for op in ctx.descend(cur) {
                add_ref(&mut m, ctx, op, vn, &mut |_, _| false);
                path.extend(ctx.out_implied(op));
            }
        }
        m
    }

    #[doc(hidden)]
    pub fn walk_op_set(m: &Map, set: &PcodeOpSet, addr: &Address, stores: bool) -> bool {
        if set.op_list.is_empty() {
            return false;
        }
        let mut set_block = 0usize;
        let mut op_index = set.block_start[set_block] as usize;
        let mut set_index = set.op_list[op_index].block_index;
        let mut cover_iter = m.range(set.op_list[0].block_index..).peekable();
        while let Some((&cover_index, &cover_block)) = cover_iter.peek().copied() {
            if cover_index < set_index {
                cover_iter.next();
            } else if cover_index > set_index {
                set_block += 1;
                if set_block >= set.block_start.len() {
                    break;
                }
                op_index = set.block_start[set_block] as usize;
                set_index = set.op_list[op_index].block_index;
            } else {
                cover_iter.next();
                set_block += 1;
                let op_max = set
                    .block_start
                    .get(set_block)
                    .map_or(set.op_list.len(), |&s| s as usize);
                loop {
                    let e = &set.op_list[op_index];
                    if (!stores || e.store)
                        && cover_block.contain(Some(e.point))
                        && cover_block.boundary(Some(e.point)) == 0
                        && set.affects_test(e.id, addr)
                    {
                        return true;
                    }
                    op_index += 1;
                    if op_index >= op_max {
                        break;
                    }
                }
                if set_block >= set.block_start.len() {
                    break;
                }
                if stores {
                    set_index = set.op_list[op_index].block_index;
                }
            }
        }
        false
    }
}

/// A random flow graph and the reads of a Varnode `1` in it; op `1`'s
/// output, Varnode `2`, is implied and read by the ops after `split`.
struct RandCtx {
    preds: Vec<Vec<int4>>,
    def: (Option<(int4, CoverPoint)>, bool),
    reads: Vec<(int4, CoverPoint, bool, Vec<int4>)>,
    split: usize,
}

fn vid(n: u64) -> crate::context::VarnodeId {
    crate::context::VarnodeId::from(KeyData::from_ffi(n))
}

fn oid(n: usize) -> OpId {
    OpId::from(KeyData::from_ffi(n as u64 + 1))
}

impl CoverContext for RandCtx {
    fn size_in(&self, bl: int4) -> int4 {
        self.preds.get(bl as usize).map_or(0, |p| p.len() as int4)
    }
    fn get_in(&self, bl: int4, j: int4) -> int4 {
        self.preds[bl as usize][j as usize]
    }
    fn def_point(&self, _vn: crate::context::VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        self.def
    }
    fn descend(&self, vn: crate::context::VarnodeId) -> Vec<OpId> {
        let range = if vn == vid(1) {
            0..self.split
        } else {
            self.split..self.reads.len()
        };
        range.map(oid).collect()
    }
    fn ref_point(
        &self,
        op: OpId,
        _vn: crate::context::VarnodeId,
    ) -> (int4, CoverPoint, bool, Vec<int4>) {
        self.reads[(slotmap::Key::data(&op).as_ffi() & 0xffff_ffff) as usize - 1].clone()
    }
    fn out_implied(&self, op: OpId) -> Option<crate::context::VarnodeId> {
        (op == oid(0) && self.split < self.reads.len()).then(|| vid(2))
    }
}

fn random_ctx(r: &mut Rng) -> RandCtx {
    let n = 1 + r.below(56) as usize;
    let preds = (0..n)
        .map(|b| {
            if b == 0 {
                vec![]
            } else {
                (0..r.below(4)).map(|_| r.below(n as u64) as int4).collect()
            }
        })
        .collect::<Vec<Vec<int4>>>();
    let def = match r.below(4) {
        0 => (None, true),
        1 => (None, false),
        _ => (
            Some((r.below(n as u64) as int4, op_point(r.below(12) as uintm))),
            false,
        ),
    };
    let reads = (0..r.below(10))
        .map(|_| {
            let bl = r.below(n as u64) as int4;
            let ins = &preds[bl as usize];
            if !ins.is_empty() && r.below(3) == 0 {
                let listed = (0..1 + r.below(3))
                    .map(|_| ins[r.below(ins.len() as u64) as usize])
                    .collect();
                (bl, meq_point(0), true, listed)
            } else {
                (bl, op_point(r.below(12) as uintm), false, vec![])
            }
        })
        .collect::<Vec<_>>();
    let split = r.below(reads.len() as u64 + 1) as usize;
    RandCtx {
        preds,
        def,
        reads,
        split,
    }
}

fn assert_canonical(c: &Cover) {
    assert!(
        c.runs
            .iter()
            .all(|r| r.lo <= r.hi && (r.lo == r.hi || r.cb.is_full())),
        "{:?}",
        c.runs
    );
    assert!(
        c.runs.windows(2).all(|w| w[0].hi < w[1].lo
            && !(w[0].cb.is_full() && w[1].cb.is_full() && w[0].hi + 1 == w[1].lo)),
        "{:?}",
        c.runs
    );
}

fn blocks_of(c: &Cover) -> Vec<(int4, CoverBlock)> {
    c.iter().map(|(k, v)| (k, *v)).collect()
}

/// `rebuild`, `add_ref_points_for` and `add_ref_point_until`, walking from
/// covers that already hold runs and lone blocks, leave exactly the blocks
/// upstream's walks leave in a block map, and stop where they stop.
#[test]
fn walks_over_runs_leave_the_blocks_a_block_map_walk_leaves() {
    let mut r = Rng(0x2545_f491_4f6c_dd1d);
    for _ in 0..3000 {
        let ctx = random_ctx(&mut r);
        let mut c = Cover::new();
        c.rebuild(&ctx, vid(1));
        assert_eq!(
            blocks_of(&c),
            model::rebuild(&ctx, vid(1)).into_iter().collect::<Vec<_>>()
        );
        assert_canonical(&c);

        let (mut c, mut m) = random_cover(&mut r);
        let ops: Vec<OpId> = (0..ctx.reads.len()).map(oid).collect();
        c.add_ref_points_for(&ctx, &ops, vid(1));
        for &op in &ops {
            model::add_ref(&mut m, &ctx, op, vid(1), &mut |_, _| false);
        }
        assert_eq!(blocks_of(&c), m.into_iter().collect::<Vec<_>>());
        assert_canonical(&c);

        if ctx.reads.is_empty() {
            continue;
        }
        let (mut c, mut m) = random_cover(&mut r);
        let (tb, tp) = (r.below(60) as int4, op_point(r.below(14) as uintm));
        let mut hit = |bl: int4, cb: &CoverBlock| bl == tb && cb.contain(Some(tp));
        let want = m.iter().any(|(&bl, cb)| hit(bl, cb))
            || model::add_ref(&mut m, &ctx, oid(0), vid(1), &mut hit);
        assert_eq!(c.add_ref_point_until(&ctx, oid(0), vid(1), hit), want);
        assert_eq!(blocks_of(&c), m.into_iter().collect::<Vec<_>>());
        assert_canonical(&c);
    }
}

/// Every per-block lookup and the PcodeOpSet walk read runs as they read
/// a map of one CoverBlock per block.
#[test]
fn lookups_and_op_set_walks_read_runs_as_a_block_map() {
    let mut r = Rng(0xd1b5_4a32_d192_ed03);
    let addr = Address::new(test_ram_space(), 0);
    for _ in 0..3000 {
        let (a, ma) = random_cover(&mut r);
        let (b, mb) = random_cover(&mut r);
        let first = |m: &model::Map| m.keys().next().copied().unwrap_or(1000000);
        assert_eq!(a.compare_to(&b), first(&ma).cmp(&first(&mb)) as int4);
        for bl in -1..62 {
            let want = ma.get(&bl).copied().unwrap_or_default();
            assert_eq!(*a.get_cover_block(bl), want);
            let other = mb.get(&bl);
            let by_block = ma.get(&bl).zip(other).map_or(0, |(x, y)| x.intersect(y));
            assert_eq!(a.intersect_by_block(bl, &b), by_block);
            for p in point_alphabet().into_iter().flatten() {
                let found = ma.get(&bl);
                let contain = |max| {
                    found.is_some_and(|cb| {
                        cb.contain(Some(p)) && (max == 1 || cb.boundary(Some(p)) == 0)
                    })
                };
                assert_eq!(a.contain(bl, p, 1), contain(1));
                assert_eq!(a.contain(bl, p, 2), contain(2));
                let def = found.map_or(0, |cb| match (cb.contain(Some(p)), cb.boundary(Some(p))) {
                    (false, _) => 0,
                    (true, 0) => 1,
                    (true, 2) => 2,
                    _ => 3,
                });
                assert_eq!(a.contain_varnode_def(Some((bl, p))), def, "{bl} {p:?}");
            }
        }
        let input = ma.get(&0).map_or(0, |cb| {
            match (
                cb.contain(Some(CoverPoint::Input)),
                cb.boundary(Some(CoverPoint::Input)),
            ) {
                (false, _) => 0,
                (true, 0) => 1,
                (true, 2) => 2,
                _ => 3,
            }
        });
        assert_eq!(a.contain_varnode_def(None), input);

        let entries: Vec<PcodeOpSetEntry> = (0..r.below(14))
            .map(|i| {
                let u = r.below(12) as uintm;
                PcodeOpSetEntry {
                    id: oid(i as usize),
                    block_index: r.below(60) as int4,
                    point: op_point(u),
                    order: u,
                    store: r.below(3) == 0,
                }
            })
            .collect();
        let listed = entries.clone();
        let mut set = PcodeOpSet::new(
            Box::new(move || listed.clone()),
            Box::new(|op: OpId, _: &Address| {
                (slotmap::Key::data(&op).as_ffi() & 0xffff_ffff) % 3 != 0
            }),
        );
        set.populate();
        let want = model::walk_op_set(&ma, &set, &addr, false)
            || (entries.iter().any(|e| e.store) && model::walk_op_set(&ma, &set, &addr, true));
        assert_eq!(a.intersect_op_set(&set, &addr), want);
    }
}

#[test]
fn pcodeopset_finalize_sorts_and_blocks() {
    let populate = || {
        vec![
            PcodeOpSetEntry {
                id: OpId::from(KeyData::from_ffi(1)),
                block_index: 2,
                point: op_point(50),
                order: 50,
                store: false,
            },
            PcodeOpSetEntry {
                id: OpId::from(KeyData::from_ffi(2)),
                block_index: 0,
                point: op_point(20),
                order: 20,
                store: false,
            },
            PcodeOpSetEntry {
                id: OpId::from(KeyData::from_ffi(3)),
                block_index: 0,
                point: op_point(10),
                order: 10,
                store: false,
            },
        ]
    };
    let mut set = PcodeOpSet::new(Box::new(populate), Box::new(|_, _| false));
    assert!(!set.is_populated());
    set.populate();
    assert!(set.is_populated());
    // sorted: block 0 order 10, block 0 order 20, block 2 order 50
    assert_eq!(set.op_list[0].block_index, 0);
    assert_eq!(set.op_list[0].order, 10);
    assert_eq!(set.op_list[1].order, 20);
    assert_eq!(set.op_list[2].block_index, 2);
    // blockStart: index 0 (block 0), index 2 (block 2)
    assert_eq!(set.block_start, vec![0, 2]);
}

/// Minimal RAM-like space for the affectsTest address fixture.
fn test_ram_space() -> std::rc::Rc<unlace_base::space::AddrSpace> {
    use unlace_base::space::{AddrSpace, addrspace_flags, spacetype};
    std::rc::Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ))
}
