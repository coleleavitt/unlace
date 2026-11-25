use super::*;

/// Test analogue of database.hh's SymbolEntry: u64 line domain, u64
/// subsort, and a tag identifying the record.  All expected outputs
/// below were pinned by running the identical scenario against the C++
/// rangemap.hh (g++ -std=c++11).
#[derive(Debug, Clone, PartialEq, Eq)]
struct TestRecord {
    a: u64,
    b: u64,
    subsort: u64,
    tag: u32,
}

impl RangeRecord for TestRecord {
    type LineType = u64;
    type SubsortType = u64;
    type InitType = (u32, u64); // (tag, subsort)

    fn create(data: (u32, u64), a: u64, b: u64) -> Self {
        TestRecord {
            a,
            b,
            subsort: data.1,
            tag: data.0,
        }
    }
    fn get_first(&self) -> u64 {
        self.a
    }
    fn get_last(&self) -> u64 {
        self.b
    }
    fn get_subsort(&self) -> u64 {
        self.subsort
    }
}

type RM = RangeMap<TestRecord>;

fn tags(rm: &RM, it: SubRangeIter<'_, TestRecord>) -> Vec<u32> {
    it.map(|idx| rm.record(idx).tag).collect()
}

#[test]
fn test_rangemap_empty_container() {
    let rm = RM::new();
    assert!(rm.empty());
    assert_eq!(rm.iter().count(), 0);
    assert_eq!(rm.records().count(), 0);
    assert!(rm.find(0).next().is_none());
    assert!(rm.find(u64::MAX).next().is_none());
    assert!(rm.find_overlap(0, u64::MAX).is_none());
    assert_eq!(rm.find_begin(5), None);
    assert_eq!(rm.find_end(5), None);
    assert!(rm.list_begin().is_none());
}

#[test]
fn test_rangemap_single_record() {
    let mut rm = RM::new();
    let r = rm.insert((1, 10), 5, 10);
    assert!(!rm.empty());
    assert_eq!(rm.record(r).a, 5);
    assert_eq!(rm.record(r).b, 10);
    // inside / boundary / outside
    assert_eq!(tags(&rm, rm.find(5)), vec![1]);
    assert_eq!(tags(&rm, rm.find(7)), vec![1]);
    assert_eq!(tags(&rm, rm.find(10)), vec![1]);
    assert!(rm.find(4).next().is_none());
    assert!(rm.find(11).next().is_none());
    // single cell in the refinement
    assert_eq!(rm.iter().count(), 1);
    rm.erase(r);
    assert!(rm.empty());
    assert_eq!(rm.iter().count(), 0);
}

#[test]
fn test_rangemap_right_boundary_duplicate_matches_cpp() {
    // C++ oracle: A[0,10] then B[5,10] (llast == b path) gives cells
    // A,A,B,B and find(7) = [1, 2, 2] — B's last cell is DUPLICATED by
    // the trailing insert after the loop break.
    let mut rm = RM::new();
    let a = rm.insert((1, 10), 0, 10);
    let b = rm.insert((2, 20), 5, 10);
    assert_eq!(tags(&rm, rm.iter()), vec![1, 1, 2, 2]);
    assert_eq!(tags(&rm, rm.find(7)), vec![1, 2, 2]);
    let order: Vec<u32> = rm.records().map(|(_, r)| r.tag).collect();
    assert_eq!(order, vec![1, 2]);
    // erase removes every duplicate and sews the partition back together
    rm.erase(b);
    assert_eq!(tags(&rm, rm.iter()), vec![1]);
    assert_eq!(tags(&rm, rm.find(7)), vec![1]);
    rm.erase(a);
    assert!(rm.empty());
}

#[test]
fn test_rangemap_overlap_refinement() {
    // C++ oracle: A[0,10], B[5,15] refine into cells
    // [0,4]A (4), [5,10]A (10), [5,10]B (10), [11,15]B (15).
    let mut rm = RM::new();
    rm.insert((1, 10), 0, 10);
    rm.insert((2, 20), 5, 15);
    assert_eq!(tags(&rm, rm.iter()), vec![1, 1, 2, 2]);
    assert_eq!(tags(&rm, rm.find(0)), vec![1]);
    assert_eq!(tags(&rm, rm.find(7)), vec![1, 2]);
    assert_eq!(tags(&rm, rm.find(12)), vec![2]);
    assert!(rm.find(16).next().is_none());
    // internal cell boundaries (private in C++, checked via the key/data)
    let cells: Vec<(u64, u64, u32)> = rm
        .tree
        .iter()
        .map(|(k, d)| (d.first, k.last, rm.record(d.value).tag))
        .collect();
    assert_eq!(cells, vec![(0, 4, 1), (5, 10, 1), (5, 10, 2), (11, 15, 2)]);
}

#[test]
fn test_rangemap_erase_interior_record_rezips() {
    // C[0,30] then D[10,20] (both-sides refinement); erasing D must zip
    // both boundaries back, leaving C as the single cell [0,30].
    let mut rm = RM::new();
    let c = rm.insert((1, 10), 0, 30);
    let d = rm.insert((2, 20), 10, 20);
    assert_eq!(tags(&rm, rm.find(15)), vec![1, 2]);
    assert_eq!(rm.iter().count(), 4); // [0,9]C [10,20]C [10,20]D [21,30]C
    rm.erase(d);
    assert_eq!(rm.iter().count(), 1);
    let cells: Vec<(u64, u64, u32)> = rm
        .tree
        .iter()
        .map(|(k, dd)| (dd.first, k.last, rm.record(dd.value).tag))
        .collect();
    assert_eq!(cells, vec![(0, 30, 1)]);
    assert_eq!(tags(&rm, rm.find(15)), vec![1]);
    assert_eq!(tags(&rm, rm.find(25)), vec![1]);
    rm.erase(c);
    assert!(rm.empty());
}

#[test]
fn test_rangemap_identical_ranges_subsort_order() {
    // C++ oracle: identical [5,10] with subsorts 10, 20, 5 (tags 1,2,3):
    // sub-ranges iterate [3,3,1,2,2] (subsort order, insert duplicates
    // in insertion order) and the record list order is [3,1,2].
    let mut rm = RM::new();
    rm.insert((1, 10), 5, 10);
    rm.insert((2, 20), 5, 10);
    rm.insert((3, 5), 5, 10);
    assert_eq!(tags(&rm, rm.find(5)), vec![3, 3, 1, 2, 2]);
    let order: Vec<u32> = rm.records().map(|(_, r)| r.tag).collect();
    assert_eq!(order, vec![3, 1, 2]);
    // list cursor protocol agrees with the iterator
    let mut cur = rm.list_begin();
    let mut walked = Vec::new();
    while let Some(idx) = cur {
        walked.push(rm.record(idx).tag);
        cur = rm.list_next(idx);
    }
    assert_eq!(walked, vec![3, 1, 2]);
}

#[test]
fn test_rangemap_find_subsorts_matches_cpp() {
    // C++ oracle outputs for the identical-ranges trio:
    //   find(5,10,10)  -> 3 3 1
    //   find(10,0,20)  -> 3 3 1 2 2
    //   find(10,6,15)  -> 1
    let mut rm = RM::new();
    rm.insert((1, 10), 5, 10);
    rm.insert((2, 20), 5, 10);
    rm.insert((3, 5), 5, 10);
    assert_eq!(tags(&rm, rm.find_subsorts(5, 10, 10)), vec![3, 3, 1]);
    assert_eq!(tags(&rm, rm.find_subsorts(10, 0, 20)), vec![3, 3, 1, 2, 2]);
    assert_eq!(tags(&rm, rm.find_subsorts(10, 6, 15)), vec![1]);
    assert!(rm.find_subsorts(11, 0, u64::MAX).next().is_none());
}

#[test]
fn test_rangemap_find_begin_end_iteration() {
    // C++ oracle: begin..end walk at 7 visits [3,3,1,2,2]; at 11 the
    // positions are equal (empty walk).
    let mut rm = RM::new();
    rm.insert((1, 10), 5, 10);
    rm.insert((2, 20), 5, 10);
    rm.insert((3, 5), 5, 10);
    let fb = rm.find_begin(7);
    let fe = rm.find_end(7);
    assert_eq!(tags(&rm, rm.iter_between(&fb, &fe)), vec![3, 3, 1, 2, 2]);
    assert_eq!(rm.find_begin(11), rm.find_end(11));
    assert!(
        rm.iter_between(&rm.find_begin(11), &rm.find_end(11))
            .next()
            .is_none()
    );
    // reverse walk (`--res.second` in database.cc) via DoubleEnded
    let walked_back: Vec<u32> = rm
        .iter_between(&fb, &fe)
        .rev()
        .map(|i| rm.record(i).tag)
        .collect();
    assert_eq!(walked_back, vec![2, 2, 1, 3, 3]);
}

#[test]
fn test_rangemap_find_overlap_matches_cpp() {
    // C++ oracle: overlap(0,4) = end; overlap(0,5) -> tag 3;
    // overlap(8,30) -> tag 3 (first sub-range in (last,subsort) order).
    let mut rm = RM::new();
    rm.insert((1, 10), 5, 10);
    rm.insert((2, 20), 5, 10);
    rm.insert((3, 5), 5, 10);
    assert!(rm.find_overlap(0, 4).is_none());
    assert_eq!(rm.record(rm.find_overlap(0, 5).unwrap()).tag, 3);
    assert_eq!(rm.record(rm.find_overlap(8, 30).unwrap()).tag, 3);
    assert!(rm.find_overlap(11, 20).is_none());
}

#[test]
fn test_rangemap_boundaries_at_u64_max() {
    let mut rm = RM::new();
    let a = rm.insert((1, 10), u64::MAX - 5, u64::MAX);
    let b = rm.insert((2, 20), 0, u64::MAX);
    // B refines around A: [0,MAX-6]B, [MAX-5,MAX]A, [MAX-5,MAX]B x2
    // (right-boundary duplicate, as in the C++).
    assert_eq!(tags(&rm, rm.find(u64::MAX)), vec![1, 2, 2]);
    assert_eq!(tags(&rm, rm.find(0)), vec![2]);
    assert_eq!(tags(&rm, rm.find(u64::MAX - 6)), vec![2]);
    assert_eq!(
        rm.record(rm.find_overlap(u64::MAX, u64::MAX).unwrap()).tag,
        1
    );
    rm.erase(b); // exercises aminus1 wraparound (a == 0) in erase
    assert_eq!(tags(&rm, rm.iter()), vec![1]);
    assert_eq!(tags(&rm, rm.find(u64::MAX)), vec![1]);
    assert!(rm.find(u64::MAX - 6).next().is_none());
    rm.erase(a);
    assert!(rm.empty());
}

#[test]
fn test_rangemap_record_list_splice_order() {
    // Insert C[0,10] sub 1, A[0,5] sub 0, B[0,20] sub 0: the list is
    // spliced by (b, subsort) position -> [A, C, B].
    let mut rm = RM::new();
    rm.insert((3, 1), 0, 10); // C
    rm.insert((1, 0), 0, 5); // A
    rm.insert((2, 0), 0, 20); // B
    let order: Vec<u32> = rm.records().map(|(_, r)| r.tag).collect();
    assert_eq!(order, vec![1, 3, 2]);
}

#[test]
fn test_rangemap_clear_and_handle_reuse() {
    let mut rm = RM::new();
    let a = rm.insert((1, 1), 0, 4);
    rm.insert((2, 2), 2, 8);
    rm.erase(a);
    // slot reuse after erase, like a C++ list node reallocation
    let c = rm.insert((3, 3), 100, 200);
    assert_eq!(rm.record(c).tag, 3);
    assert_eq!(tags(&rm, rm.find(150)), vec![3]);
    assert_eq!(tags(&rm, rm.find(3)), vec![2]);
    rm.clear();
    assert!(rm.empty());
    assert_eq!(rm.iter().count(), 0);
    assert!(rm.find(150).next().is_none());
}

#[test]
fn test_rangemap_differential_digest_vs_cpp_oracle() {
    // 58 randomized insert/erase ops (LCG-driven), digesting after each
    // op: find() tags at every point 0..=31, find_overlap(p, p+3),
    // record-list order, and full sub-range iteration order.  The
    // expected digest and live-record count were produced by running the
    // byte-identical op sequence against the C++ rangemap.hh
    // (g++ -std=c++11 against libstdc++; FNV-1a over little-endian u64s;
    // PCG-style LCG: state*6364136223846793005+1442695040888963407,
    // output state>>33).  This pins refinement, multiset equal-key
    // ordering (including the hinted-insert placements), splice order
    // and zip/unzip behavior at scale.  The per-op traces of the two
    // implementations were verified line-identical over this prefix.
    //
    // Why 58 ops and not more: at op 58 of this sequence the UPSTREAM
    // container corrupts itself — erase() only walks sub-ranges whose
    // key (ending boundary) is >= getFirst(), but an earlier zip() had
    // legitimately extended one of the record's sub-ranges below its
    // own range (visible as find(1) returning a [3,5] record from op 21
    // on, which the Rust port reproduces exactly).  Erasing that record
    // strands the extended sub-range, whose record pointer then dangles:
    // C++ silently reads freed list memory (UB), the Rust port panics
    // ("stale RecordIdx") per ADR 0004.  Beyond this point the C++
    // output is not a sound oracle.
    struct Lcg(u64);
    impl Lcg {
        fn next(&mut self) -> u64 {
            self.0 = self
                .0
                .wrapping_mul(6364136223846793005)
                .wrapping_add(1442695040888963407);
            self.0 >> 33
        }
    }
    struct Fnv(u64);
    impl Fnv {
        fn mix(&mut self, v: u64) {
            for byte in v.to_le_bytes() {
                self.0 ^= byte as u64;
                self.0 = self.0.wrapping_mul(0x100000001b3);
            }
        }
    }
    const SEP: u64 = u64::MAX;
    const NONE: u64 = u64::MAX - 1;

    let mut rng = Lcg(0x853c49e6748fea9b);
    let mut fnv = Fnv(0xcbf29ce484222325);
    let mut rm = RM::new();
    let mut live: Vec<RecordIdx> = Vec::new();
    for op in 0..58u32 {
        let r = rng.next() % 3;
        if live.is_empty() || r != 0 {
            let a = rng.next() % 24;
            let len = rng.next() % 8;
            let ss = rng.next() % 4;
            live.push(rm.insert((op, ss), a, a + len));
        } else {
            let i = (rng.next() as usize) % live.len();
            rm.erase(live[i]);
            live.remove(i);
        }
        for p in 0..=31u64 {
            for idx in rm.find(p) {
                fnv.mix(rm.record(idx).tag as u64);
            }
            fnv.mix(SEP);
        }
        for p in 0..=31u64 {
            match rm.find_overlap(p, p + 3) {
                Some(idx) => fnv.mix(rm.record(idx).tag as u64),
                None => fnv.mix(NONE),
            }
        }
        for (_, rec) in rm.records() {
            fnv.mix(rec.tag as u64);
        }
        fnv.mix(SEP);
        for idx in rm.iter() {
            fnv.mix(rm.record(idx).tag as u64);
        }
        fnv.mix(SEP);
    }
    assert_eq!(live.len(), 26);
    assert_eq!(fnv.0, 0xa774de5500ebcb54);
}

#[test]
fn test_rangemap_full_range_record() {
    // A record spanning the whole u64 domain.
    let mut rm = RM::new();
    let a = rm.insert((1, 0), 0, u64::MAX);
    assert_eq!(tags(&rm, rm.find(0)), vec![1]);
    assert_eq!(tags(&rm, rm.find(u64::MAX)), vec![1]);
    assert_eq!(tags(&rm, rm.find(1 << 63)), vec![1]);
    let d = rm.insert((2, 1), 5, 5); // single-point record inside
    assert_eq!(tags(&rm, rm.find(5)), vec![1, 2]); // cell [5,5], subsort order A(0) then D(1)
    rm.erase(d);
    assert_eq!(tags(&rm, rm.iter()), vec![1]);
    rm.erase(a);
    assert!(rm.empty());
}
