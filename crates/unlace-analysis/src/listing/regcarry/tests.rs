use super::*;

/// `(constant, register, unique)`, as [`super::super::picbase`]'s tests
/// build them; a `LOAD`/`STORE` names the data space by index 2.
fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>, Rc<AddrSpace>) {
    (
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL)),
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

const MAPPED: [(u64, u64); 1] = [(0x10000, 0x40000)];
/// The callee-saved span (`x19`).
const PRESERVED: [(u64, u64); 1] = [(0x98, 0xa0)];

struct Isa {
    c: Rc<AddrSpace>,
    r: Rc<AddrSpace>,
    u: Rc<AddrSpace>,
    /// The data space a direct memory operand names.
    m: Rc<AddrSpace>,
}

impl Isa {
    fn new() -> Self {
        let (c, r, u) = spaces();
        Isa {
            c,
            r,
            u,
            m: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        }
    }
    fn machine(&self, pc_only: bool) -> Machine<'static> {
        Machine {
            reg: Rc::clone(&self.r),
            data: Some(Rc::clone(&self.m)),
            data_index: Some(2),
            big_endian: false,
            pc_only,
            preserved: &PRESERVED,
            mapped: &MAPPED,
            pool: None,
            ptr: 8,
            code: None,
            halves: HalfPairs::Off,
            a64: false,
        }
    }
    fn k(&self, v: u64) -> VarnodeData {
        vn(&self.c, v, 8)
    }
    fn x(&self, n: u64) -> VarnodeData {
        vn(&self.r, n * 8, 8)
    }
    fn t(&self, n: u64) -> VarnodeData {
        vn(&self.u, 0x100 + n * 8, 8)
    }
    /// `xD = page` (`adrp`, `lui` folded).
    fn set(&self, d: u64, v: u64) -> Vec<FullOp> {
        vec![op(OpCode::CPUI_COPY, Some(self.x(d)), vec![self.k(v)])]
    }
    /// `xD = xN + imm`.
    fn add(&self, d: u64, n: u64, imm: u64) -> Vec<FullOp> {
        vec![op(
            OpCode::CPUI_INT_ADD,
            Some(self.x(d)),
            vec![self.x(n), self.k(imm)],
        )]
    }
    /// `xD = *(xN + imm)`.
    fn load(&self, d: u64, n: u64, imm: u64) -> Vec<FullOp> {
        vec![
            op(
                OpCode::CPUI_INT_ADD,
                Some(self.t(0)),
                vec![self.x(n), self.k(imm)],
            ),
            op(
                OpCode::CPUI_LOAD,
                Some(self.x(d)),
                vec![self.k(2), self.t(0)],
            ),
        ]
    }
    /// `*(xN + imm) = xS`.
    fn store(&self, s: u64, n: u64, imm: u64) -> Vec<FullOp> {
        vec![
            op(
                OpCode::CPUI_INT_ADD,
                Some(self.t(0)),
                vec![self.x(n), self.k(imm)],
            ),
            op(
                OpCode::CPUI_STORE,
                None,
                vec![self.k(2), self.t(0), self.x(s)],
            ),
        ]
    }
    /// `bl target`, writing the link register `x30` first.
    fn call(&self, at: u64) -> Vec<FullOp> {
        vec![
            op(
                OpCode::CPUI_INT_ADD,
                Some(self.x(30)),
                vec![self.k(at), self.k(4)],
            ),
            op(OpCode::CPUI_CALL, None, vec![self.k(0x30000)]),
        ]
    }
    /// `blr xN` at `at`.
    fn call_reg(&self, at: u64, n: u64) -> Vec<FullOp> {
        vec![
            op(
                OpCode::CPUI_INT_ADD,
                Some(self.x(30)),
                vec![self.k(at), self.k(4)],
            ),
            op(OpCode::CPUI_CALLIND, None, vec![self.x(n)]),
        ]
    }
    /// The `width`-byte direct memory operand at `at` (x86's `[rip+slot]`).
    fn mem(&self, at: u64, width: u32) -> VarnodeData {
        vn(&self.m, at, width)
    }
}

/// Walk `insns` as one straight-line run starting at 0x20000, four bytes
/// apart, with `targets` entered from elsewhere.
fn walk(m: &Machine, insns: &[Vec<FullOp>], targets: &[u64]) -> Vec<(u64, u64, XrefKind)> {
    let mut t = Tracker::default();
    for &at in targets {
        t.enter(at);
    }
    for (i, ops) in insns.iter().enumerate() {
        let vma = 0x20000 + 4 * i as u64;
        let calls = ops
            .iter()
            .any(|op| matches!(op.opcode, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND));
        t.step(
            m,
            Insn {
                vma,
                ops,
                fall: Some(vma + 4),
                branches: &[],
                calls,
                formed: Formed::default(),
            },
        );
    }
    let mut out = t.finish(&BTreeSet::from([0x20000]));
    out.sort_unstable();
    out
}

/// A zero-based image's first pages.
const LOW: [(u64, u64); 1] = [(0x200, 0x2000)];

/// [`walk`] over [`LOW`] from 0x1000, each instruction with the value it
/// folded from its own address ([`super::super::pcform`]), if any.
fn walk_low(
    isa: &Isa,
    pc_only: bool,
    insns: &[(Vec<FullOp>, Option<u64>)],
) -> Vec<(u64, u64, XrefKind)> {
    let m = Machine {
        mapped: &LOW,
        ..isa.machine(pc_only)
    };
    let mut t = Tracker::default();
    for (i, (ops, formed)) in insns.iter().enumerate() {
        let vma = 0x1000 + 4 * i as u64;
        let formed = formed.map_or_else(Formed::default, Formed::one);
        t.step(
            &m,
            Insn {
                vma,
                ops,
                fall: Some(vma + 4),
                branches: &[],
                calls: false,
                formed,
            },
        );
    }
    let mut out = t.finish(&BTreeSet::from([0x1000]));
    out.sort_unstable();
    out
}

/// GH #1364: `adrp x0, 0x0` leaves page 0, no address on its own, and the
/// `add` that completes it forms one below the `checkOperands` floor. The
/// same pair after a `mov x0, #0` builds a number.
#[test]
fn a_pc_relative_page_below_the_floor_forms_an_address() {
    let isa = Isa::new();
    let pair = |formed| vec![(isa.set(0, 0), formed), (isa.add(0, 0, 0x378), None)];
    assert_eq!(
        walk_low(&isa, false, &pair(Some(0))),
        vec![(0x1004, 0x378, XrefKind::Data)]
    );
    assert!(walk_low(&isa, false, &pair(None)).is_empty());
}

/// RISC-V `auipc` keeps its own address in the p-code (`(imm << 12) +
/// inst_start`), which is all a shared object's pair below the floor needs.
#[test]
fn an_auipc_pair_below_the_floor_forms_an_address() {
    let isa = Isa::new();
    let auipc = vec![
        op(
            OpCode::CPUI_INT_LEFT,
            Some(isa.t(0)),
            vec![isa.k(0), vn(&isa.c, 0xc, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(isa.x(0)),
            vec![isa.t(0), isa.k(0x1000)],
        ),
    ];
    let got = walk_low(
        &isa,
        true,
        &[(auipc, None), (isa.add(0, 0, 0xffff_ffff_ffff_f378), None)],
    );
    assert_eq!(got, vec![(0x1004, 0x378, XrefKind::Data)]);
}

/// The difference of two PC-relative values is a distance, not an address:
/// `lea r13,[rip+a]; lea rax,[rip+b]; sub eax,r13d` in a switch.
#[test]
fn the_difference_of_two_pc_relative_values_is_not_an_address() {
    let isa = Isa::new();
    let sub = vec![op(
        OpCode::CPUI_INT_SUB,
        Some(isa.x(0)),
        vec![isa.x(0), isa.x(1)],
    )];
    let insns = [
        (isa.set(1, 0x1100), Some(0x1100)),
        (isa.set(0, 0x1500), Some(0x1500)),
        (sub, None),
    ];
    let got = walk_low(&isa, false, &insns);
    assert!(got.is_empty(), "{got:?}");
}

/// The low byte or half of a PC-relative value is a number: `lea
/// rax,[rip+a]; movzx ecx,al; lea rdx,[rcx+0x300]`, Thumb `adr; uxtb;
/// adds`. A 32-bit truncation (`lea eax,[rip+a]`, `sext.w`) is the address.
#[test]
fn a_pc_relative_value_truncated_below_32_bits_is_a_number() {
    let isa = Isa::new();
    let low = |vn: VarnodeData| vec![op(OpCode::CPUI_INT_ZEXT, Some(isa.x(1)), vec![vn])];
    let subpiece = vec![
        op(
            OpCode::CPUI_SUBPIECE,
            Some(vn(&isa.u, 0x100, 1)),
            vec![isa.x(0), vn(&isa.c, 0, 4)],
        ),
        op(
            OpCode::CPUI_INT_ZEXT,
            Some(isa.x(1)),
            vec![vn(&isa.u, 0x100, 1)],
        ),
    ];
    let run = |narrow: Vec<FullOp>| {
        walk_low(
            &isa,
            false,
            &[
                (isa.set(0, 0x5a0), Some(0x5a0)),
                (narrow, None),
                (isa.add(2, 1, 0x300), None),
            ],
        )
    };
    assert!(run(low(vn(&isa.r, 0, 1))).is_empty());
    assert!(run(low(vn(&isa.r, 0, 2))).is_empty());
    assert!(run(subpiece).is_empty());
    assert_eq!(
        run(low(vn(&isa.r, 0, 4))),
        vec![(0x1008, 0x8a0, XrefKind::Data)]
    );
}

#[test]
fn a_page_and_its_offset_form_the_address_at_the_second_instruction() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let got = walk(&m, &[isa.set(0, 0x21000), isa.add(0, 0, 0x488)], &[]);
    assert_eq!(got, vec![(0x20004, 0x21488, XrefKind::Data)]);
}

/// A pair whose address is the instruction right after it (`la a0,1f` just
/// before `1:`) forms that address; in a call, the same sum is its return
/// address.
#[test]
fn a_pair_that_lands_on_its_own_fall_through_forms_it_unless_it_calls() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let got = walk(&m, &[isa.set(0, 0x20000), isa.add(0, 0, 8)], &[]);
    assert_eq!(got, vec![(0x20004, 0x20008, XrefKind::Data)]);
    let mut call = isa.add(0, 0, 8);
    call.push(op(OpCode::CPUI_CALL, None, vec![isa.k(0x30000)]));
    assert!(walk(&m, &[isa.set(0, 0x20000), call], &[]).is_empty());
}

#[test]
fn a_load_and_a_store_through_a_carried_base_are_a_read_and_a_write() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let got = walk(
        &m,
        &[
            isa.set(1, 0x21000),
            isa.load(0, 1, 0x1d0),
            isa.store(0, 1, 0x1d8),
        ],
        &[],
    );
    assert_eq!(
        got,
        vec![
            (0x20004, 0x211d0, XrefKind::Read),
            (0x20008, 0x211d8, XrefKind::Write)
        ]
    );
}

#[test]
fn a_join_between_the_halves_drops_the_reference() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let insns = [isa.set(0, 0x21000), isa.set(1, 5), isa.add(0, 0, 0x488)];
    assert_eq!(
        walk(&m, &insns, &[0x20008]).len(),
        0,
        "the add is a branch target"
    );
    assert_eq!(
        walk(&m, &insns, &[0x20004]).len(),
        0,
        "so is the instruction it passed through"
    );
    assert_eq!(
        walk(&m, &insns, &[0x20000]).len(),
        1,
        "the page's own instruction may be a join"
    );
}

#[test]
fn a_call_keeps_a_preserved_register_and_drops_the_rest() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let saved = walk(
        &m,
        &[
            isa.set(19, 0x21000),
            isa.call(0x20004),
            isa.add(0, 19, 0x25),
        ],
        &[],
    );
    assert_eq!(saved, vec![(0x20008, 0x21025, XrefKind::Data)]);
    let scratch = walk(
        &m,
        &[isa.set(8, 0x21000), isa.call(0x20004), isa.add(0, 8, 0x25)],
        &[],
    );
    assert!(scratch.is_empty(), "{scratch:?}");
}

/// `movw r0,#0x1cc; movt r0,#3` (T32), then `movw r1,#0x1d0`; `movt r1,#3`.
const THUMB_PAIRS: [u8; 16] = [
    0x40, 0xf2, 0xcc, 0x10, 0xc0, 0xf2, 0x03, 0x00, 0x40, 0xf2, 0xd0, 0x11, 0xc0, 0xf2, 0x03, 0x01,
];

fn halves_machine<'a>(isa: &'a Isa, halves: HalfPairs) -> Machine<'a> {
    Machine {
        code: PoolImage::from_ranges(vec![(0x20000, 0x20010, &THUMB_PAIRS[..])], 4, true),
        halves,
        ..isa.machine(false)
    }
}

/// `xD = (xD & 0xffff) | (hi << 16)`, as SLEIGH lifts `movt`.
fn movt(isa: &Isa, d: u64, hi: u64) -> Vec<FullOp> {
    vec![
        op(
            OpCode::CPUI_INT_AND,
            Some(isa.t(1)),
            vec![isa.x(d), isa.k(0xffff)],
        ),
        op(
            OpCode::CPUI_INT_OR,
            Some(isa.x(d)),
            vec![isa.t(1), isa.k(hi << 16)],
        ),
    ]
}

#[test]
fn a_movw_movt_pair_below_the_floor_builds_an_address() {
    let isa = Isa::new();
    let run = [
        isa.set(0, 0x1cc),
        movt(&isa, 0, 3),
        isa.load(2, 0, 0),
        isa.store(2, 0, 4),
    ];
    let off = walk(&halves_machine(&isa, HalfPairs::Off), &run, &[]);
    assert!(off.is_empty(), "the low half starts no carry: {off:?}");
    let access = walk(&halves_machine(&isa, HalfPairs::Access), &run, &[]);
    assert_eq!(
        access,
        [
            (0x20008, 0x301cc, XrefKind::Read),
            (0x2000c, 0x301d0, XrefKind::Write)
        ],
        "the completed base is read and written through"
    );
    let on = walk(&halves_machine(&isa, HalfPairs::On), &run, &[]);
    assert_eq!(
        on,
        [
            (0x20004, 0x301cc, XrefKind::Data),
            (0x20008, 0x301cc, XrefKind::Read),
            (0x2000c, 0x301d0, XrefKind::Write),
        ],
        "and the pair forms the address it lands on"
    );
}

#[test]
fn a_half_alone_or_after_a_join_is_no_reference() {
    let isa = Isa::new();
    let m = halves_machine(&isa, HalfPairs::On);
    let alone = walk(&m, &[isa.set(0, 0x1cc), isa.load(2, 0, 0)], &[]);
    assert!(
        alone.is_empty(),
        "a low half is a number until completed: {alone:?}"
    );
    let joined = walk(
        &m,
        &[isa.set(0, 0x1cc), movt(&isa, 0, 3), isa.load(2, 0, 0)],
        &[0x20004],
    );
    assert!(joined.is_empty(), "another path into the movt: {joined:?}");
    // The pair lands outside every mapped section: no reference.
    let unmapped = walk(&m, &[isa.set(0, 0x1cc), movt(&isa, 0, 0x99)], &[]);
    assert!(unmapped.is_empty(), "{unmapped:?}");
}

#[test]
fn a_register_the_call_itself_writes_does_not_survive_it() {
    let isa = Isa::new();
    let preserved = [(0x98, 0xa0), (30 * 8, 31 * 8)];
    let m = Machine {
        preserved: &preserved,
        ..isa.machine(false)
    };
    let got = walk(&m, &[isa.call(0x20000), isa.add(0, 30, 0x10)], &[]);
    assert!(
        got.is_empty(),
        "a link register the cspec calls unaffected: {got:?}"
    );
}

#[test]
fn a_copy_bitwise_or_narrowed_composition_is_not_an_address() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let mv = walk(&m, &[isa.set(0, 0x21000), isa.add(1, 0, 0)], &[]);
    assert!(mv.is_empty(), "`addi a1,a0,0` is a move: {mv:?}");
    let ori = vec![op(
        OpCode::CPUI_INT_OR,
        Some(isa.x(0)),
        vec![isa.x(0), isa.k(0xff)],
    )];
    assert!(
        walk(&m, &[isa.set(0, 0x21000), ori], &[]).is_empty(),
        "`ori` builds a number"
    );
    let w = vn(&isa.u, 0x200, 4);
    let addiw = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(isa.t(0)),
            vec![isa.x(0), isa.k(0x4c0)],
        ),
        op(
            OpCode::CPUI_SUBPIECE,
            Some(w.clone()),
            vec![isa.t(0), vn(&isa.c, 0, 4)],
        ),
        op(OpCode::CPUI_INT_SEXT, Some(isa.x(0)), vec![w]),
    ];
    assert!(
        walk(&m, &[isa.set(0, 0x21000), addiw], &[]).is_empty(),
        "`addiw` is 32-bit arithmetic"
    );
}

#[test]
fn a_position_independent_image_carries_only_a_pc_derived_value() {
    let isa = Isa::new();
    let m = isa.machine(true);
    let lui = walk(&m, &[isa.set(0, 0x21000), isa.add(0, 0, 0x488)], &[]);
    assert!(
        lui.is_empty(),
        "an absolute immediate is a number in an ET_DYN image: {lui:?}"
    );
    let auipc = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(isa.x(0)),
        vec![isa.k(0x1000), isa.k(0x20000)],
    )];
    let got = walk(&m, &[auipc, isa.add(0, 0, 0x488)], &[]);
    assert_eq!(got, vec![(0x20004, 0x21488, XrefKind::Data)]);
}

#[test]
fn a_value_formed_only_to_form_the_next_is_a_step() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let writeback = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(isa.x(12)),
            vec![isa.x(12), isa.k(0x2f0)],
        ),
        op(OpCode::CPUI_LOAD, Some(isa.t(1)), vec![isa.k(2), isa.x(12)]),
    ];
    let got = walk(
        &m,
        &[isa.set(12, 0x20008), isa.add(12, 12, 0x1000), writeback],
        &[],
    );
    assert_eq!(
        got,
        vec![(0x20008, 0x212f8, XrefKind::Read)],
        "an A32 PLT entry reads its slot"
    );
    let kept = walk(
        &m,
        &[isa.set(8, 0x21000), isa.add(8, 8, 0x40), isa.load(0, 8, 8)],
        &[],
    );
    assert_eq!(
        kept,
        vec![
            (0x20004, 0x21040, XrefKind::Data),
            (0x20008, 0x21048, XrefKind::Read)
        ]
    );
}

#[test]
fn a_predicated_write_is_not_carried_and_the_hop_bound_ends_a_carry() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let mut predicated = isa.set(0, 0x22000);
    predicated.insert(
        0,
        op(OpCode::CPUI_CBRANCH, None, vec![isa.k(0x20008), isa.x(5)]),
    );
    let got = walk(
        &m,
        &[isa.set(0, 0x21000), predicated, isa.add(0, 0, 0x10)],
        &[],
    );
    assert!(
        got.is_empty(),
        "x0 is 0x21000 or 0x22000 after a conditional write: {got:?}"
    );
    let mut far = vec![isa.set(0, 0x21000)];
    far.extend((0..MAX_HOPS).map(|_| isa.set(1, 5)));
    far.push(isa.add(0, 0, 0x10));
    assert!(walk(&m, &far, &[]).is_empty());
}

/// GH #1376: `adrp x16,_malloc@GOTPAGE; ldr x16,[x16,..]; blr x16` reads
/// the slot and calls through it.
#[test]
fn a_call_through_a_register_loaded_from_a_slot_is_a_call_to_the_slot() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let got = walk(
        &m,
        &[
            isa.set(16, 0x24000),
            isa.load(16, 16, 0x10),
            isa.call_reg(0x20008, 16),
        ],
        &[],
    );
    assert_eq!(
        got,
        vec![
            (0x20004, 0x24010, XrefKind::Read),
            (0x20008, 0x24010, XrefKind::Call)
        ]
    );
    let mv = vec![op(OpCode::CPUI_COPY, Some(isa.x(17)), vec![isa.x(16)])];
    let copied = walk(
        &m,
        &[
            isa.set(16, 0x24000),
            isa.load(16, 16, 0x10),
            mv,
            isa.call_reg(0x2000c, 17),
        ],
        &[],
    );
    assert_eq!(
        copied.last(),
        Some(&(0x2000c, 0x24010, XrefKind::Call)),
        "{copied:?}"
    );
    let joined = walk(
        &m,
        &[
            isa.set(16, 0x24000),
            isa.load(16, 16, 0x10),
            isa.call_reg(0x20008, 16),
        ],
        &[0x20008],
    );
    assert_eq!(
        joined,
        vec![(0x20004, 0x24010, XrefKind::Read)],
        "another path into the call may hold anything"
    );
}

/// The word a slot holds is unknown: an offset from it is no address, a
/// load through it no read, and a narrow load of the slot no callee.
#[test]
fn the_word_a_slot_holds_is_not_a_value() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let loaded = || [isa.set(16, 0x24000), isa.load(16, 16, 0x10)];
    let add: Vec<_> = loaded()
        .into_iter()
        .chain([isa.add(0, 16, 0x21000)])
        .collect();
    assert_eq!(
        walk(&m, &add, &[]),
        vec![(0x20004, 0x24010, XrefKind::Read)]
    );
    let deref: Vec<_> = loaded()
        .into_iter()
        .chain([isa.load(0, 16, 0x21000)])
        .collect();
    assert_eq!(
        walk(&m, &deref, &[]),
        vec![(0x20004, 0x24010, XrefKind::Read)]
    );
    let narrow = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(isa.t(0)),
            vec![isa.x(16), isa.k(0x10)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&isa.r, 16 * 8, 4)),
            vec![isa.k(2), isa.t(0)],
        ),
    ];
    let got = walk(
        &m,
        &[isa.set(16, 0x24000), narrow, isa.call_reg(0x20008, 16)],
        &[],
    );
    assert_eq!(
        got,
        vec![(0x20004, 0x24010, XrefKind::Read)],
        "`ldr w16` loads no pointer"
    );
}

/// The `adrp` pages a straight-line run supersedes, and the rows it files.
fn pages(
    m: &Machine,
    insns: &[Vec<FullOp>],
    targets: &[u64],
) -> (Vec<(u64, u64)>, Vec<(u64, u64, XrefKind)>) {
    let mut t = Tracker::default();
    for &at in targets {
        t.enter(at);
    }
    for (i, ops) in insns.iter().enumerate() {
        let vma = 0x20000 + 4 * i as u64;
        let calls = ops
            .iter()
            .any(|op| matches!(op.opcode, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND));
        t.step(
            m,
            Insn {
                vma,
                ops,
                fall: Some(vma + 4),
                branches: &[],
                calls,
                formed: Formed::default(),
            },
        );
    }
    let funcs = BTreeSet::from([0x20000]);
    (t.superseded(&funcs), t.finish(&funcs))
}

/// An `adrp` page completed into another address was a step to it; one
/// the run also uses at offset 0, or never completes, is the page's own datum.
#[test]
fn an_adrp_page_the_pair_completes_elsewhere_is_superseded() {
    use super::super::poolref::PoolImage;
    let isa = Isa::new();
    // `adrp x16, ..`, then three `nop`s.
    let adrp: [u8; 16] = [
        0x10, 0, 0, 0x90, 0x1f, 0x20, 0x03, 0xd5, 0x1f, 0x20, 0x03, 0xd5, 0x1f, 0x20, 0x03, 0xd5,
    ];
    let img = PoolImage::from_ranges(vec![(0x20000, 0x20010, &adrp[..])], 8, true).unwrap();
    let m = Machine {
        code: Some(img),
        a64: true,
        ..isa.machine(false)
    };
    let (gone, rows) = pages(&m, &[isa.set(16, 0x24000), isa.load(16, 16, 0x10)], &[]);
    assert_eq!(gone, vec![(0x20000, 0x24000)]);
    assert_eq!(
        rows,
        vec![(0x20004, 0x24010, XrefKind::Read)],
        "the page is no row of the carry's"
    );
    let (gone, _) = pages(
        &m,
        &[
            isa.set(8, 0x24000),
            isa.add(9, 8, 0x10),
            isa.load(0, 8, 0x20),
        ],
        &[],
    );
    assert_eq!(
        gone,
        vec![(0x20000, 0x24000)],
        "the page still in x8 is still only a base"
    );
    for at_page in [
        vec![isa.set(16, 0x24000), isa.load(16, 16, 0)],
        vec![isa.set(0, 0x24000), isa.add(0, 0, 0)],
    ] {
        assert!(
            pages(&m, &at_page, &[]).0.is_empty(),
            "offset 0 names the page itself"
        );
    }
    let field = [isa.set(0, 0x24000), isa.add(0, 0, 0), isa.store(1, 0, 0x18)];
    assert!(
        pages(&m, &field, &[]).0.is_empty(),
        "`add #0` is the `:lo12:` of the symbol at the page"
    );
    let both = [isa.set(8, 0x24000), isa.load(0, 8, 0x8), isa.load(1, 8, 0)];
    assert!(
        pages(&m, &both, &[]).0.is_empty(),
        "the page's own datum is read too"
    );
    let copy = vec![op(OpCode::CPUI_COPY, Some(isa.x(9)), vec![isa.x(8)])];
    let (gone, _) = pages(&m, &[isa.set(8, 0x24000), copy, isa.load(0, 9, 0x10)], &[]);
    assert_eq!(
        gone,
        vec![(0x20000, 0x24000)],
        "a copy of the page uses nothing at it"
    );
    assert!(
        pages(
            &m,
            &[isa.set(16, 0x24000), isa.load(16, 16, 0x10)],
            &[0x20004]
        )
        .0
        .is_empty(),
        "past a join"
    );
    assert!(
        pages(&m, &[isa.set(16, 0x24010), isa.load(16, 16, 0x10)], &[])
            .0
            .is_empty(),
        "not a page"
    );
    let mut adr = adrp;
    adr[3] = 0x10;
    let img = PoolImage::from_ranges(vec![(0x20000, 0x20010, &adr[..])], 8, true).unwrap();
    let m = Machine {
        code: Some(img),
        ..isa.machine(false)
    };
    assert!(
        pages(&m, &[isa.set(16, 0x24000), isa.load(16, 16, 0x10)], &[])
            .0
            .is_empty(),
        "`adr` names its label"
    );
    let x86 = isa.machine(false);
    assert!(
        pages(&x86, &[isa.set(16, 0x24000), isa.load(16, 16, 0x10)], &[])
            .0
            .is_empty(),
        "no adrp"
    );
}

/// Swift's string literal: `adrp/add` forms the literal, `sub #0x20` biases
/// it into the string object's pointer. The literal stays the reference.
#[test]
fn a_constant_subtracted_from_an_address_is_a_bias() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let sub = vec![op(
        OpCode::CPUI_INT_SUB,
        Some(isa.x(8)),
        vec![isa.x(8), isa.k(0x20)],
    )];
    let got = walk(&m, &[isa.set(8, 0x24000), isa.add(8, 8, 0x40), sub], &[]);
    assert_eq!(got, vec![(0x20004, 0x24040, XrefKind::Data)]);
}

/// `mov rax,[rip+slot]; call rax` calls through the slot; `call [rip+slot]`
/// is one instruction, which [`super::super::xrefs`] files itself.
#[test]
fn a_register_copied_from_a_direct_slot_operand_calls_through_it() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let mov = vec![op(
        OpCode::CPUI_COPY,
        Some(isa.x(0)),
        vec![isa.mem(0x24010, 8)],
    )];
    let got = walk(&m, &[mov, isa.call_reg(0x20004, 0)], &[]);
    assert_eq!(got, vec![(0x20004, 0x24010, XrefKind::Call)]);
    let one = vec![
        op(OpCode::CPUI_COPY, Some(isa.t(0)), vec![isa.mem(0x24010, 8)]),
        op(OpCode::CPUI_CALLIND, None, vec![isa.t(0)]),
    ];
    assert!(walk(&m, &[one], &[]).is_empty());
    let word = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&isa.r, 0, 4)),
        vec![isa.mem(0x24010, 4)],
    )];
    assert!(
        walk(&m, &[word, isa.call_reg(0x20004, 0)], &[]).is_empty(),
        "a 32-bit load is no pointer"
    );
}

#[test]
fn a_value_past_a_label_inside_the_instruction_is_not_filed() {
    let isa = Isa::new();
    let m = isa.machine(false);
    let cinc = vec![
        op(OpCode::CPUI_COPY, Some(isa.t(0)), vec![isa.x(0)]),
        op(OpCode::CPUI_CBRANCH, None, vec![vn(&isa.c, 2, 8), isa.x(5)]),
        op(
            OpCode::CPUI_INT_ADD,
            Some(isa.t(0)),
            vec![isa.x(0), isa.k(1)],
        ),
        op(OpCode::CPUI_COPY, Some(isa.x(0)), vec![isa.t(0)]),
    ];
    let got = walk(&m, &[isa.set(0, 0x21000), cinc], &[]);
    assert!(
        got.is_empty(),
        "`cinc x0,x0,eq` leaves x0 or x0 + 1: {got:?}"
    );
}
