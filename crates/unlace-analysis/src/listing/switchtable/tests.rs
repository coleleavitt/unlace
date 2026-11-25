use super::*;

/// A three-entry table at 0x2000 into code at 0x1000..0x1100, then a word of
/// `0xcccccccc` padding — the shape MSVC emits.
const TABLE: [u8; 20] = [
    0x10, 0x10, 0x00, 0x00, // 0x2000 -> 0x1010
    0x20, 0x10, 0x00, 0x00, // 0x2004 -> 0x1020
    0x30, 0x10, 0x00, 0x00, // 0x2008 -> 0x1030
    0xcc, 0xcc, 0xcc, 0xcc, // 0x200c -> padding
    0x40, 0x10, 0x00, 0x00, // 0x2010 -> 0x1040 (past the padding)
];
const EXEC: [(u64, u64); 1] = [(0x1000, 0x1100)];

fn image() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x2000, 0x2014, &TABLE[..])], 4, true).unwrap()
}

#[test]
fn a_table_of_code_addresses_yields_every_case_body() {
    assert_eq!(
        targets(0x2000, 0x1008, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES),
        vec![0x1010, 0x1020, 0x1030]
    );
}

/// The stop rule: the first word that is not a code address ends the table,
/// so the entry past the padding is not taken up.
#[test]
fn the_scan_stops_at_the_first_word_that_is_not_code() {
    let t = targets(0x2000, 0x1008, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES);
    assert!(!t.contains(&0x1040));
}

/// A single plausible word after a constant is a coincidence, not a switch.
#[test]
fn a_run_shorter_than_two_entries_is_not_a_table() {
    assert!(targets(0x2008, 0x1008, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES).is_empty());
}

/// A case body is the dispatcher's own code: a word landing in another
/// executable range ends the table rather than extending it.
#[test]
fn a_word_outside_the_dispatchers_own_section_ends_the_table() {
    let exec = [(0x1000, 0x1015), (0x1020, 0x1100)];
    assert!(targets(0x2000, 0x1008, &image(), &exec, None, DEFAULT_MAX_ENTRIES).is_empty());
}

/// Nothing is read for an instruction the executable partition does not
/// contain (a relocatable object, whose sections are not the runtime ones).
#[test]
fn a_dispatch_in_no_executable_section_reads_no_table() {
    assert!(targets(0x2000, 0x9000, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES).is_empty());
}

/// The gcc form: 4-byte displacements measured from the table itself.
const DELTA: [u8; 20] = [
    0x10, 0xf0, 0xff, 0xff, // 0x3000 -> 0x3000 + (-0xff0) = 0x2010
    0x20, 0xf0, 0xff, 0xff, // 0x3004 -> 0x2020
    0x30, 0xf0, 0xff, 0xff, // 0x3008 -> 0x2030
    0x40, 0xf0, 0xff, 0xff, // 0x300c -> 0x2040, past the switch's own bound
    0xcc, 0xcc, 0xcc, 0xcc,
];
const DELTA_EXEC: [(u64, u64); 1] = [(0x2000, 0x2100)];

fn delta_image() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x3000, 0x3014, &DELTA[..])], 8, true).unwrap()
}

#[test]
fn a_delta_table_composes_every_entry_with_its_base() {
    assert_eq!(
        delta_targets(
            0x3000,
            0x3000,
            0x2008,
            &delta_image(),
            &DELTA_EXEC,
            Some(3),
            DEFAULT_MAX_ENTRIES
        ),
        vec![0x2010, 0x2020, 0x2030]
    );
}

/// The MSVC form: the entries are RVAs and the base is the image base, so the
/// table is not the base and is not even reachable from it by a fixed offset
/// the read knows about.
#[test]
fn a_delta_table_reads_from_a_base_that_is_not_the_table() {
    const RVA: [u8; 12] = [
        0x10, 0x20, 0x00, 0x00, // -> 0x1000 + 0x2010
        0x20, 0x20, 0x00, 0x00, 0x30, 0x20, 0x00, 0x00,
    ];
    let image = PoolImage::from_ranges(vec![(0x5000, 0x500c, &RVA[..])], 8, true).unwrap();
    assert_eq!(
        delta_targets(
            0x5000,
            0x1000,
            0x3020,
            &image,
            &[(0x3000, 0x3100)],
            Some(3),
            DEFAULT_MAX_ENTRIES
        ),
        vec![0x3010, 0x3020, 0x3030]
    );
}

/// The bound is the switch's own case count: without it the run continues
/// into whatever follows the table, which on a real image is another table
/// whose entries are equally good code addresses.
#[test]
fn the_case_count_stops_the_scan_at_the_end_of_the_table() {
    let t = delta_targets(
        0x3000,
        0x3000,
        0x2008,
        &delta_image(),
        &DELTA_EXEC,
        Some(3),
        DEFAULT_MAX_ENTRIES,
    );
    assert!(!t.contains(&0x2040));
    assert_eq!(t.len(), 3);
}

/// The table must be read-only image content: an unaligned or unmapped base
/// is not one.
#[test]
fn a_base_that_is_not_a_readable_word_reads_no_table() {
    assert!(targets(0x2001, 0x1008, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES).is_empty());
    assert!(targets(0x8000, 0x1008, &image(), &EXEC, None, DEFAULT_MAX_ENTRIES).is_empty());
}

fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>, Rc<AddrSpace>) {
    (
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
    )
}

fn vn(space: &Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size,
    }
}

fn op(opcode: OpCode, out: Option<VarnodeData>, ins: Vec<VarnodeData>) -> FullOp {
    FullOp { opcode, out, ins }
}

/// x86-64 writes `rax = zext(eax)` after a 32-bit load, which retires the
/// tracked `eax`; the `cltq` reading it back still sees the table entry.
#[test]
fn a_register_reads_as_the_low_part_of_the_wider_one_holding_it() {
    let (reg, _, _) = spaces();
    let entry = Val::Entry {
        table: 0x2000,
        width: 4,
        signed: false,
    };
    let vals = vec![(Key::Reg(0, 8), entry)];
    assert_eq!(value_of(&vn(&reg, 0, 4), &vals, None), Some(entry));
    assert_eq!(
        value_of(&vn(&reg, 4, 4), &vals, None),
        None,
        "the high half is not the entry"
    );
    let wide = vec![(Key::Reg(0, 8), Val::Const(0x1_0000_0002))];
    assert_eq!(value_of(&vn(&reg, 0, 4), &wide, None), Some(Val::Const(2)));
}

/// `cmp $c,sel` as x86 SLEIGH lifts it: CF and ZF for the guard to read.
fn x86_cmp(reg: &Rc<AddrSpace>, uniq: &Rc<AddrSpace>, cst: &Rc<AddrSpace>, c: u64) -> Vec<FullOp> {
    let (eax, cf, zf, diff) = (
        vn(reg, 0, 4),
        vn(reg, 0x200, 1),
        vn(reg, 0x206, 1),
        vn(uniq, 0x100, 4),
    );
    vec![
        op(
            OpCode::CPUI_INT_LESS,
            Some(cf),
            vec![eax.clone(), vn(cst, c, 4)],
        ),
        op(
            OpCode::CPUI_INT_SUB,
            Some(diff.clone()),
            vec![eax, vn(cst, c, 4)],
        ),
        op(OpCode::CPUI_INT_EQUAL, Some(zf), vec![diff, vn(cst, 0, 4)]),
    ]
}

/// The case count `guard_limit` reads for a compare `writer` and a branch
/// `branch` whose last op is the `CBRANCH`.
fn guarded(writer: &[FullOp], branch: &[FullOp], max: usize) -> Option<usize> {
    guard_cases(
        writer,
        &feeding(writer, branch),
        branch,
        branch.len() - 1,
        None,
        max,
        false,
    )
}

/// The ops of `writer` that compute what `branch`'s `CBRANCH` reads.
fn feeding(writer: &[FullOp], branch: &[FullOp]) -> Vec<usize> {
    let at = branch.len() - 1;
    let want: Vec<Key> = branch[at]
        .ins
        .get(1)
        .and_then(|v| key_of(v, None))
        .into_iter()
        .collect();
    let (reads, _) = feeders(&branch[..at], want, None);
    let reads: Vec<Key> = reads
        .into_iter()
        .filter(|k| matches!(k, Key::Reg(..)))
        .collect();
    let written: Vec<Key> = writer
        .iter()
        .filter_map(|o| o.out.as_ref().and_then(|v| key_of(v, None)))
        .filter(|w| reads.iter().any(|r| keys_overlap(*r, *w)))
        .collect();
    feeders(writer, written, None).1
}

/// `ja` sends the selectors above `c` away: the dispatch sees `c + 1`.
#[test]
fn a_ja_guard_bounds_the_table_from_above() {
    let (reg, uniq, cst) = spaces();
    let (cf, zf, t) = (vn(&reg, 0x200, 1), vn(&reg, 0x206, 1), |o| vn(&uniq, o, 1));
    let ja = vec![
        op(OpCode::CPUI_BOOL_NEGATE, Some(t(0x10)), vec![cf]),
        op(OpCode::CPUI_BOOL_NEGATE, Some(t(0x11)), vec![zf]),
        op(OpCode::CPUI_BOOL_AND, Some(t(0x12)), vec![t(0x10), t(0x11)]),
        op(
            OpCode::CPUI_CBRANCH,
            None,
            vec![vn(&reg, 0x9000, 8), t(0x12)],
        ),
    ];
    assert_eq!(guarded(&x86_cmp(&reg, &uniq, &cst, 5), &ja, 1024), Some(6));
}

/// `jb` sends the selectors below `c` away, so the dispatch sees `sel >= c`:
/// five values of a 32-bit selector above `0xfffffffb`, and no bound at all
/// above a small `c`, where the check is only the first of two.
#[test]
fn a_jb_guard_bounds_the_table_from_below() {
    let (reg, uniq, cst) = spaces();
    let jb = vec![op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![vn(&reg, 0x9000, 8), vn(&reg, 0x200, 1)],
    )];
    assert_eq!(
        guarded(&x86_cmp(&reg, &uniq, &cst, 0xffff_fffb), &jb, 1024),
        Some(5)
    );
    assert_eq!(guarded(&x86_cmp(&reg, &uniq, &cst, 5), &jb, 1024), None);
}

/// A branch into the dispatch after `cmp $3`: `jbe` keeps 3 itself in
/// range, `jb` sends it away, so the `c + 1` both count as is one too many
/// for `jb`, which the predecessor-edge read declines.
#[test]
fn a_branch_into_the_dispatch_keeps_or_sends_away_its_constant() {
    let (reg, uniq, cst) = spaces();
    let (cf, zf, t) = (vn(&reg, 0x200, 1), vn(&reg, 0x206, 1), vn(&uniq, 0x10, 1));
    let jbe = vec![
        op(OpCode::CPUI_BOOL_OR, Some(t.clone()), vec![cf.clone(), zf]),
        op(OpCode::CPUI_CBRANCH, None, vec![vn(&reg, 0x9000, 8), t]),
    ];
    let jb = vec![op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![vn(&reg, 0x9000, 8), cf],
    )];
    let cmp = x86_cmp(&reg, &uniq, &cst, 3);
    let read = |branch: &[FullOp]| {
        let (feeding, at) = (feeding(&cmp, branch), branch.len() - 1);
        (
            guard_cases(&cmp, &feeding, branch, at, None, 1024, true),
            boundary_leaves(&cmp, &feeding, branch, at, None, true),
        )
    };
    assert_eq!(read(&jbe), (Some(4), false));
    assert_eq!(read(&jb), (Some(4), true));
}

/// `je` reads only ZF: the carry of the same `cmp` is no bound.
#[test]
fn a_compare_that_does_not_reach_the_condition_is_no_bound() {
    let (reg, uniq, cst) = spaces();
    let je = vec![op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![vn(&reg, 0x9000, 8), vn(&reg, 0x206, 1)],
    )];
    assert_eq!(guarded(&x86_cmp(&reg, &uniq, &cst, 5), &je, 1024), None);
}

/// AArch64 spells `cmp x8, #6; b.hi` as `tmp = 6; tmpCY = tmp <= x8; CY =
/// tmpCY` and `CY && !ZR`.
#[test]
fn an_aarch64_guard_reads_the_constant_on_the_left() {
    let (reg, uniq, cst) = spaces();
    let (x8, tmp_cy, cy, zr) = (
        vn(&reg, 0x4040, 8),
        vn(&reg, 0x105, 1),
        vn(&reg, 0x102, 1),
        vn(&reg, 0x101, 1),
    );
    let six = vn(&uniq, 0x20, 8);
    let subs = vec![
        op(OpCode::CPUI_COPY, Some(six.clone()), vec![vn(&cst, 6, 8)]),
        op(
            OpCode::CPUI_INT_LESSEQUAL,
            Some(tmp_cy.clone()),
            vec![six, x8],
        ),
        op(OpCode::CPUI_COPY, Some(cy.clone()), vec![tmp_cy]),
    ];
    let hi = vec![
        op(OpCode::CPUI_BOOL_NEGATE, Some(vn(&uniq, 0x30, 1)), vec![zr]),
        op(
            OpCode::CPUI_BOOL_AND,
            Some(vn(&uniq, 0x31, 1)),
            vec![cy, vn(&uniq, 0x30, 1)],
        ),
        op(
            OpCode::CPUI_CBRANCH,
            None,
            vec![vn(&reg, 0x9000, 8), vn(&uniq, 0x31, 1)],
        ),
    ];
    assert_eq!(guarded(&subs, &hi, 1024), Some(7));
}

/// A `cmov` branches only to the end of its own instruction and a `rep`
/// prefix to an op inside it; a `jcc` leaves for another instruction.
#[test]
fn only_a_branch_out_of_its_own_instruction_is_a_guard() {
    let (reg, _, cst) = spaces();
    let cbranch =
        |dest: VarnodeData| op(OpCode::CPUI_CBRANCH, None, vec![dest, vn(&reg, 0x200, 1)]);
    assert_eq!(
        leaving_branch(&[cbranch(vn(&reg, 0x1004, 8))], 0x1000, 4),
        None,
        "cmov"
    );
    assert_eq!(
        leaving_branch(&[cbranch(vn(&cst, 2, 8))], 0x1000, 4),
        None,
        "rep"
    );
    assert_eq!(
        leaving_branch(&[cbranch(vn(&reg, 0x2000, 8))], 0x1000, 4),
        Some(0),
        "jcc"
    );
}
