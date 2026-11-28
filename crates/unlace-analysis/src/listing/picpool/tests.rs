use super::*;
use crate::listing::classify::classify;
use crate::listing::model::RawOp;

/// The reduction of the filing image: a read-only pool at 0x6a0 holding the
/// displacement -0x1c1, and `.rodata` at 0x400.
const POOL: [u8; 8] = [
    0x3f, 0xfe, 0xff, 0xff, // 0x6a0 -> 0xfffffe3f (= -0x1c1)
    0x00, 0x05, 0x00, 0x00, // 0x6a4 -> 0x500 (a mapped address)
];
const MAPPED: [(u64, u64); 2] = [(0x400, 0x4c3), (0x4c4, 0x6b0)];

fn image() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x6a0, 0x6a8, &POOL[..])], 4, true).unwrap()
}

/// A throwaway space set: `ram` stands in for the default data space,
/// `register` for any other processor space, as the two are told apart in
/// the engine.
struct Spaces {
    konst: Rc<AddrSpace>,
    ram: Rc<AddrSpace>,
    reg: Rc<AddrSpace>,
    uniq: Rc<AddrSpace>,
}

fn spaces() -> Spaces {
    Spaces {
        konst: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
        ram: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        reg: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        uniq: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL)),
    }
}

/// The space-id constant a `LOAD` through `ram` carries in `in0`.
fn ram_id(s: &Spaces) -> u64 {
    u64::try_from(s.ram.get_index()).unwrap()
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

/// `ldr r0,[pc,#imm]` — SLEIGH resolves the PC-relative address at decode
/// time, so the load reads a constant location.
fn ldr(s: &Spaces, reg: u64, at: u64) -> Vec<FullOp> {
    vec![op(
        OpCode::CPUI_LOAD,
        Some(vn(&s.reg, reg, 4)),
        vec![vn(&s.konst, ram_id(s), 8), vn(&s.konst, at, 4)],
    )]
}

/// Thumb's `ldr rN,[pc,#imm]`: the slot is exported as a data-space
/// varnode, so the literal load is a `COPY`, not a `LOAD`.
fn thumb_ldr(s: &Spaces, reg: u64, at: u64) -> Vec<FullOp> {
    vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, reg, 4)),
        vec![vn(&s.ram, at, 4)],
    )]
}

/// Thumb's `add rN,pc` at `vma`: the PC reads as `inst_start + 4`.
fn thumb_add_pc(s: &Spaces, reg: u64, vma: u64) -> Vec<FullOp> {
    vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f00, 4)),
            vec![vn(&s.konst, vma, 4), vn(&s.konst, 4, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.reg, reg, 4)),
            vec![vn(&s.reg, reg, 4), vn(&s.uniq, 0x2f00, 4)],
        ),
    ]
}

/// `add rN,pc,rN` at `vma`, exactly as the ARM SLEIGH lifts it: the PC is
/// `inst_start + 8`, formed in a temporary first.
fn add_pc(s: &Spaces, reg: u64, vma: u64) -> Vec<FullOp> {
    vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f00, 4)),
            vec![vn(&s.konst, vma, 4), vn(&s.konst, 8, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.reg, reg, 4)),
            vec![vn(&s.uniq, 0x2f00, 4), vn(&s.reg, reg, 4)],
        ),
    ]
}

/// One body's walk, driven in the order the test lists the instructions.
struct Walk<'a> {
    pp: PicPool,
    pool: &'a PoolImage<'a>,
    mapped: &'a [(u64, u64)],
    extended: bool,
    got: Option<&'a GotImage<'a>>,
    /// What the walk has queued, as `step` snapshots it at the first load.
    queue: Vec<u64>,
    preserved: &'a [(u64, u64)],
    deref: bool,
    s: &'a Spaces,
}

impl<'a> Walk<'a> {
    fn new(s: &'a Spaces, pool: &'a PoolImage<'a>, mapped: &'a [(u64, u64)]) -> Self {
        Walk {
            pp: PicPool::default(),
            pool,
            mapped,
            extended: true,
            got: None,
            queue: Vec::new(),
            preserved: &[],
            deref: false,
            s,
        }
    }

    fn step(&mut self, vma: u64, ops: &[FullOp], branches: &[u64]) -> Option<u64> {
        self.step_len(vma, 4, ops, branches)
    }

    fn step_len(&mut self, vma: u64, len: u32, ops: &[FullOp], branches: &[u64]) -> Option<u64> {
        let raw: Vec<RawOp> = ops
            .iter()
            .map(|op| RawOp {
                opcode: op.opcode,
                in0: op.ins.first().cloned(),
            })
            .collect();
        let fall = classify(&raw, vma, len).fall_through;
        let img = Image {
            pool: self.pool,
            mapped: self.mapped,
            extended: self.extended,
            data_space: Some(&self.s.ram),
            got: self.got,
            preserved: self.preserved,
            deref: self.deref,
        };
        self.pp.step(
            &img,
            Insn {
                vma,
                len,
                fall,
                ops,
                branches,
            },
            || self.queue.clone(),
        )
    }

    fn finish(self) -> Verdict {
        self.pp.finish(&HashSet::new())
    }
}

fn refs(v: &Verdict) -> Vec<(u64, u64, XrefKind)> {
    v.refs.clone()
}

/// The defect: the address of the literal is in no instruction and in no pool
/// word — only in the two put together.
#[test]
fn a_pool_displacement_added_to_the_pc_is_the_address_it_forms() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert_eq!(
        refs(&w.finish()),
        vec![(0x664, 0x4ab, XrefKind::Data)],
        "0x66c + (-0x1c1)"
    );
}

/// The pair need not be adjacent: instruction scheduling separates the load
/// from the `add` when a function forms several references at once.
#[test]
fn the_add_may_sit_a_few_instructions_past_the_load() {
    let (s, pool) = (spaces(), image());
    let nop = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, 0x30, 4)),
        vec![vn(&s.reg, 0x30, 4), vn(&s.konst, 4, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &nop, &[]);
    w.step(0x668, &add_pc(&s, 0x20, 0x668), &[]);
    assert_eq!(refs(&w.finish()), vec![(0x668, 0x4af, XrefKind::Data)]);
}

/// Overwriting the register between the load and the `add` ends the value:
/// what the `add` composes is whatever was written last.
#[test]
fn a_write_to_the_register_ends_the_tracked_word() {
    let (s, pool) = (spaces(), image());
    let clobber = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.konst, 0, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &clobber, &[]);
    w.step(0x668, &add_pc(&s, 0x20, 0x668), &[]);
    assert!(w.finish().refs.is_empty());
}

/// A call clobbers the caller-saved registers, so nothing in them survives it.
#[test]
fn a_call_ends_the_tracked_word() {
    let (s, pool) = (spaces(), image());
    let mut call = ldr(&s, 0x20, 0x6a0);
    call.push(op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x700, 4)]));
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &call, &[]);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert!(w.finish().refs.is_empty());
}

/// A word in a callee-saved register survives the call between its load and
/// its `add`, as GCC schedules the GOT base's pair around a call.
#[test]
fn a_call_keeps_a_word_in_a_callee_saved_register() {
    let (s, pool) = (spaces(), image());
    let mut call = ldr(&s, 0x30, 0x6a0);
    call.push(op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x700, 4)]));
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.preserved = &[(0x30, 0x34)];
    w.step(0x660, &call, &[]);
    w.step(0x664, &add_pc(&s, 0x30, 0x664), &[]);
    assert_eq!(refs(&w.finish()), vec![(0x664, 0x4ab, XrefKind::Data)]);
}

/// Thumb's `bl` also switches the instruction set through a `CALLOTHER`;
/// inside a call that is no more than the call, so a word in a
/// callee-saved register still survives it.
#[test]
fn a_thumb_call_keeps_a_word_in_a_callee_saved_register() {
    let (s, pool) = (spaces(), image());
    let bl = vec![
        op(
            OpCode::CPUI_CALLOTHER,
            None,
            vec![vn(&s.konst, 62, 4), vn(&s.reg, 0x69, 1)],
        ),
        op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x700, 4)]),
    ];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.preserved = &[(0x30, 0x34)];
    w.step_len(0x660, 2, &thumb_ldr(&s, 0x30, 0x6a0), &[]);
    w.step_len(0x662, 4, &bl, &[]);
    w.step_len(0x666, 2, &thumb_add_pc(&s, 0x30, 0x666), &[]);
    assert_eq!(
        refs(&w.finish()),
        vec![(0x666, 0x4a9, XrefKind::Data)],
        "0x66a + (-0x1c1)"
    );
}

/// The two refusals, each of which would be a fabricated reference.
#[test]
fn arithmetic_without_the_pc_and_an_unmapped_sum_are_declined() {
    let (s, pool) = (spaces(), image());

    // `add r0,r0,#8` — the pool word used as a number, not as a base.
    let no_pc = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.reg, 0x20, 4), vn(&s.konst, 8, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &no_pc, &[]);
    assert!(w.finish().refs.is_empty());

    // A sum landing in no section is not an address, whatever formed it.
    let mut w = Walk::new(&s, &pool, &[(0x9000, 0x9100)]);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert!(w.finish().refs.is_empty());
}

/// `ldr r1,[pc,#imm]; ldr r1,[pc,r1]` composes its address into a temporary
/// and dereferences it. The address is never held in a register and is no
/// GOT base, so nothing is filed.
#[test]
fn a_composed_address_that_stays_in_a_temporary_files_nothing() {
    let (s, pool) = (spaces(), image());
    let indirect = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f00, 4)),
            vec![vn(&s.konst, 0x664, 4), vn(&s.konst, 8, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x10900, 4)),
            vec![vn(&s.uniq, 0x2f00, 4), vn(&s.reg, 0x24, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, 0x24, 4)),
            vec![vn(&s.konst, ram_id(&s), 8), vn(&s.uniq, 0x10900, 4)],
        ),
    ];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x24, 0x6a0), &[]);
    w.step(0x664, &indirect, &[]);
    assert!(w.finish().refs.is_empty());
}

/// A narrow or unaligned pool read is not a slot at all, which is
/// [`PoolImage`]'s rule and is inherited here.
#[test]
fn a_narrow_pool_read_is_not_a_displacement() {
    let (s, pool) = (spaces(), image());
    let narrow = vec![op(
        OpCode::CPUI_LOAD,
        Some(vn(&s.reg, 0x20, 2)),
        vec![vn(&s.konst, ram_id(&s), 8), vn(&s.konst, 0x6a0, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &narrow, &[]);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert!(w.finish().refs.is_empty());
}

/// A displacement that happens to be a mapped address itself, as in a
/// non-PIE image mapped low, is still a displacement once the PC is added,
/// and `poolref` must not also file it as a pointer.
#[test]
fn a_displacement_that_is_also_a_mapped_address_still_composes() {
    const P: [u8; 4] = [0x00, 0x05, 0x00, 0x00]; // 0x6a0 -> 0x500, mapped
    const MAP: [(u64, u64); 1] = [(0x400, 0x1000)];
    let pool = PoolImage::from_ranges(vec![(0x6a0, 0x6a4, &P[..])], 4, true).unwrap();
    let s = spaces();
    let mut w = Walk::new(&s, &pool, &MAP);
    assert_eq!(w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]), Some(0x500));
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    let v = w.finish();
    assert_eq!(refs(&v), vec![(0x664, 0xb6c, XrefKind::Data)]);
    assert!(v.displaced.contains(&0x660));
}

/// An image with no GOT and no dynamic section seeds neither a mapped word
/// nor a Thumb literal copy, and records nothing for them; an A32 load of
/// a word that is not an address still composes.
#[test]
fn a_static_image_without_a_got_seeds_only_an_a32_displacement() {
    const P: [u8; 4] = [0x00, 0x15, 0x00, 0x00]; // 0x6a0 -> 0x1500, mapped
    const MAP: [(u64, u64); 1] = [(0x400, 0x2000)];
    let mapped_pool = PoolImage::from_ranges(vec![(0x6a0, 0x6a4, &P[..])], 4, true).unwrap();
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &mapped_pool, &MAP);
    w.extended = false;
    assert_eq!(w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]), None);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert!(!w.pp.live);
    assert!(w.finish().refs.is_empty());

    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.extended = false;
    w.step_len(0x660, 2, &thumb_ldr(&s, 0x20, 0x6a0), &[]);
    w.step_len(0x662, 2, &thumb_add_pc(&s, 0x20, 0x662), &[]);
    assert!(!w.pp.live);
    assert!(w.finish().refs.is_empty());

    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.extended = false;
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &add_pc(&s, 0x20, 0x664), &[]);
    assert_eq!(refs(&w.finish()), vec![(0x664, 0x4ab, XrefKind::Data)]);
}

/// A mapped word that no PC fold consumes stays `poolref`'s pointer.
#[test]
fn a_mapped_word_used_as_a_number_is_not_displaced() {
    let (s, pool) = (spaces(), image());
    let no_pc = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.reg, 0x20, 4), vn(&s.konst, 8, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &MAPPED);
    assert_eq!(w.step(0x660, &ldr(&s, 0x20, 0x6a4), &[]), Some(0x500));
    w.step(0x664, &no_pc, &[]);
    let v = w.finish();
    assert!(v.refs.is_empty() && v.displaced.is_empty());
}

/// Thumb spells the literal load as a copy out of the image and reads the
/// PC as `inst_start + 4`; the pair composes the same way, and the word is
/// displaced, not `poolref`'s pointer.
#[test]
fn a_thumb_literal_copy_composes_with_the_thumb_pc() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step_len(0x660, 2, &thumb_ldr(&s, 0x20, 0x6a0), &[]);
    w.step_len(0x662, 2, &thumb_add_pc(&s, 0x20, 0x662), &[]);
    let v = w.finish();
    assert_eq!(
        refs(&v),
        vec![(0x662, 0x4a5, XrefKind::Data)],
        "0x666 + (-0x1c1)"
    );
    assert!(v.displaced.contains(&0x660));
}

/// A copy out of the image that is not a pool slot is no literal load.
#[test]
fn a_copy_from_outside_the_pool_is_not_a_literal_load() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step_len(0x660, 2, &thumb_ldr(&s, 0x20, 0x600), &[]);
    w.step_len(0x662, 2, &thumb_add_pc(&s, 0x20, 0x662), &[]);
    assert!(w.finish().refs.is_empty());
}

/// Nothing is tracked past the hop bound.
#[test]
fn a_word_is_not_believed_forever() {
    let (s, pool) = (spaces(), image());
    let nothing: Vec<FullOp> = Vec::new();
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x600, &ldr(&s, 0x20, 0x6a0), &[]);
    let mut vma = 0x604;
    for _ in 0..MAX_HOPS {
        w.step(vma, &nothing, &[]);
        vma += 4;
    }
    w.step(vma, &add_pc(&s, 0x20, vma), &[]);
    assert!(w.finish().refs.is_empty());
}

// --- GOT bases -----------------------------------------------------------

/// Pool words for a GOT at 0x800: 0x6a0 holds the base's displacement from
/// an `add` at 0x604 (0x60c + 0x1f4 = 0x800), 0x6a4 the GOT offset 0x10 of
/// the slot at 0x810, which holds the function address 0x1450.
const GOT_POOL: [u8; 8] = [
    0xf4, 0x01, 0x00, 0x00, // 0x6a0 -> 0x1f4
    0x10, 0x00, 0x00, 0x00, // 0x6a4 -> 0x10
];
const GOT_BYTES: [u8; 0x20] = {
    let mut g = [0u8; 0x20];
    g[0x10] = 0x50;
    g[0x11] = 0x14;
    g
};
const GOT_MAP: [(u64, u64); 1] = [(0x400, 0x2000)];
const R4: u64 = 0x30;
const R5: u64 = 0x34;
const R2: u64 = 0x28;

fn got_pool() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x6a0, 0x6a8, &GOT_POOL[..])], 4, true).unwrap()
}

fn got_image() -> GotImage<'static> {
    GotImage {
        lo: 0x800,
        hi: 0x820,
        data: &GOT_BYTES[..],
        ptr: 4,
        little_endian: true,
    }
}

/// `ldr r2,[r4,r2]`.
fn slot_load(s: &Spaces) -> Vec<FullOp> {
    vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f00, 4)),
            vec![vn(&s.reg, R4, 4), vn(&s.reg, R2, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, R2, 4)),
            vec![vn(&s.konst, ram_id(s), 8), vn(&s.uniq, 0x2f00, 4)],
        ),
    ]
}

fn jump(s: &Spaces, to: u64) -> Vec<FullOp> {
    vec![op(OpCode::CPUI_BRANCH, None, vec![vn(&s.ram, to, 4)])]
}

fn cbranch(s: &Spaces, to: u64) -> Vec<FullOp> {
    vec![op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![vn(&s.ram, to, 4), vn(&s.reg, 0x100, 1)],
    )]
}

const SLOT_REFS: [(u64, XrefKind); 2] = [(0x810, XrefKind::Read), (0x1450, XrefKind::Data)];

fn slot_refs(v: &Verdict, at: u64) -> Vec<(u64, XrefKind)> {
    v.refs
        .iter()
        .filter(|r| r.0 == at)
        .map(|r| (r.1, r.2))
        .collect()
}

/// The ARM GOT idiom of a `-fPIC` body: `ldr r4,[pc,#a]; add r4,pc,r4`
/// makes r4 the GOT, and `ldr r2,[pc,#b]; ldr r2,[r4,r2]` reads a slot. The
/// base survives a call (r4 is callee-saved) and a branch, and the slot's
/// word, a function address, is filed as the address the body takes.
#[test]
fn a_load_through_a_pc_composed_got_base_files_the_slot_and_its_word() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.preserved = &[(R4, R4 + 4)];
    let call = vec![op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x400, 4)])];
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &call, &[]);
    w.step(0x60c, &jump(&s, 0x700), &[0x700]);
    w.step(0x700, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x704, &slot_load(&s), &[]);
    let v = w.finish();
    assert_eq!(slot_refs(&v, 0x604), vec![(0x800, XrefKind::Data)]);
    assert_eq!(slot_refs(&v, 0x704), SLOT_REFS.to_vec());
}

/// The Thumb GOT idiom: a slot holding a Thumb function's entry with bit 0
/// set is answered as it is; whether the bit names code is the walk's to
/// decide, once it knows what it decoded.
#[test]
fn a_thumb_slot_word_is_answered_with_its_thumb_bit() {
    const ODD: [u8; 0x20] = {
        let mut g = [0u8; 0x20];
        g[0x10] = 0x51;
        g[0x11] = 0x14;
        g
    };
    let (s, pool) = (spaces(), got_pool());
    let got = GotImage {
        lo: 0x800,
        hi: 0x820,
        data: &ODD[..],
        ptr: 4,
        little_endian: true,
    };
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step_len(0x604, 2, &thumb_ldr(&s, R4, 0x6a0), &[]);
    w.step_len(0x606, 2, &thumb_ldr(&s, R2, 0x6a4), &[]);
    w.step_len(0x608, 2, &thumb_add_pc(&s, R4, 0x608), &[]);
    w.step_len(0x60a, 2, &slot_load(&s), &[]);
    assert_eq!(
        slot_refs(&w.finish(), 0x60a),
        vec![(0x810, XrefKind::Read), (0x1451, XrefKind::Data)]
    );
}

/// `mov r5,r4` copies the base: the copy files nothing, and r5 is a base
/// the slot load can go through.
#[test]
fn a_copy_of_the_base_is_a_base_and_files_nothing() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mov = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, R5, 4)),
        vec![vn(&s.reg, R4, 4)],
    )];
    let through_r5 = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f00, 4)),
            vec![vn(&s.reg, R5, 4), vn(&s.reg, R2, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, R2, 4)),
            vec![vn(&s.konst, ram_id(&s), 8), vn(&s.uniq, 0x2f00, 4)],
        ),
    ];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &mov, &[]);
    w.step(0x60c, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &through_r5, &[]);
    let v = w.finish();
    assert!(slot_refs(&v, 0x608).is_empty(), "{:?}", v.refs);
    assert_eq!(slot_refs(&v, 0x610), SLOT_REFS.to_vec());
}

/// Only base plus a pool word (GOTOFF) is an address: base plus an
/// immediate is arithmetic on the base and names nothing, even where it
/// lands in a mapped section.
#[test]
fn base_plus_an_immediate_files_nothing_and_base_plus_a_pool_word_does() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let add_imm = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, R5, 4)),
        vec![vn(&s.reg, R4, 4), vn(&s.konst, 8, 4)],
    )];
    let gotoff = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.reg, R4, 4), vn(&s.reg, R2, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &add_imm, &[]);
    w.step(0x60c, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &gotoff, &[]);
    let v = w.finish();
    assert!(slot_refs(&v, 0x608).is_empty(), "{:?}", v.refs);
    assert_eq!(slot_refs(&v, 0x610), vec![(0x810, XrefKind::Data)]);
}

/// The join rule. 0x620 is reached from 0x608, where r4 is the GOT, and from
/// 0x610, after 0x60c overwrote r4. The breadth-first walk decodes 0x620
/// before 0x610, so only the meet over both edges, taken once the body is
/// known, can tell that r4 is not the GOT there.
#[test]
fn a_base_that_one_path_overwrites_is_not_believed_at_the_join() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let clobber = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, R4, 4)),
        vec![vn(&s.konst, 0x810, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &cbranch(&s, 0x620), &[0x620]);
    w.step(0x60c, &clobber, &[]);
    w.step(0x620, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &jump(&s, 0x620), &[0x620]);
    w.step(0x624, &slot_load(&s), &[]);
    let v = w.finish();
    assert!(slot_refs(&v, 0x624).is_empty(), "got {:?}", v.refs);
}

/// The same join with both paths keeping r4: the base is equal on every
/// edge, so the meet keeps it.
#[test]
fn a_base_both_paths_keep_survives_the_join() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let other = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.konst, 0, 4)],
    )];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &cbranch(&s, 0x620), &[0x620]);
    w.step(0x60c, &other, &[]);
    w.step(0x620, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &jump(&s, 0x620), &[0x620]);
    w.step(0x624, &slot_load(&s), &[]);
    assert_eq!(slot_refs(&w.finish(), 0x624), SLOT_REFS.to_vec());
}

/// A predicated instruction (`ldrne`) spells its condition as a branch to its
/// own fall-through; that is not a join, and the word carries past it.
#[test]
fn a_predicated_instruction_between_the_load_and_the_add_keeps_the_word() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x660, &ldr(&s, 0x20, 0x6a0), &[]);
    w.step(0x664, &cbranch(&s, 0x668), &[0x668]);
    w.step(0x668, &add_pc(&s, 0x20, 0x668), &[]);
    assert_eq!(refs(&w.finish()), vec![(0x668, 0x4af, XrefKind::Data)]);
}

/// `popeq {r4-r6,pc}` as A32 lifts it: the condition, a branch to the next
/// instruction when it fails, then the pops and the return.
fn popeq(s: &Spaces, next: u64) -> Vec<FullOp> {
    let pop = |reg: u64| {
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, reg, 4)),
            vec![vn(&s.konst, ram_id(s), 8), vn(&s.reg, 0x54, 4)],
        )
    };
    vec![
        op(
            OpCode::CPUI_BOOL_NEGATE,
            Some(vn(&s.uniq, 0x100, 1)),
            vec![vn(&s.reg, 0x101, 1)],
        ),
        op(
            OpCode::CPUI_CBRANCH,
            None,
            vec![vn(&s.ram, next, 4), vn(&s.uniq, 0x100, 1)],
        ),
        pop(R4),
        pop(R5),
        pop(0x38),
        op(OpCode::CPUI_RETURN, None, vec![vn(&s.reg, 0x5c, 4)]),
    ]
}

/// A conditional return writes r4 only on the path where it runs, which
/// leaves the body; the path that falls past it keeps the base.
#[test]
fn a_base_survives_past_a_predicated_return_that_pops_it() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &popeq(&s, 0x60c), &[0x60c]);
    w.step(0x60c, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &slot_load(&s), &[]);
    assert_eq!(slot_refs(&w.finish(), 0x610), SLOT_REFS.to_vec());
}

/// A conditional write to r4 that falls through (`ldrne r4,[sp]`) leaves
/// r4 the base on one path only, so it is not believed after it.
#[test]
fn a_predicated_write_that_falls_through_ends_the_base() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let ldrne = vec![
        op(
            OpCode::CPUI_BOOL_NEGATE,
            Some(vn(&s.uniq, 0x100, 1)),
            vec![vn(&s.reg, 0x101, 1)],
        ),
        op(
            OpCode::CPUI_CBRANCH,
            None,
            vec![vn(&s.ram, 0x60c, 4), vn(&s.uniq, 0x100, 1)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, R4, 4)),
            vec![vn(&s.konst, ram_id(&s), 8), vn(&s.reg, 0x54, 4)],
        ),
    ];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &ldrne, &[0x60c]);
    w.step(0x60c, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x610, &slot_load(&s), &[]);
    assert!(slot_refs(&w.finish(), 0x610).is_empty());
}

/// A switch dispatched before any pool load: `cases` records nothing yet,
/// and a case target queued before the first load still does not believe
/// the base another path brings — the walk's dry snapshot vetoes it.
#[test]
fn a_switch_before_any_pool_load_still_vetoes_its_case_targets() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let dispatch = vec![op(OpCode::CPUI_BRANCHIND, None, vec![vn(&s.reg, 0x20, 4)])];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x5f0, &dispatch, &[]);
    w.pp.cases(0x5f0, &[0x600, 0x640]);
    w.queue = vec![0x640];
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &jump(&s, 0x640), &[0x640]);
    w.step(0x640, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x644, &slot_load(&s), &[]);
    let v = w.finish();
    assert!(slot_refs(&v, 0x644).is_empty(), "{:?}", v.refs);
}

/// An instruction another body's walk refused to enter has a predecessor
/// there that this body never saw, so nothing holds at it.
#[test]
fn nothing_holds_where_another_walk_enters() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x60c, &slot_load(&s), &[]);
    let v = w.pp.finish(&HashSet::from([0x60c]));
    assert!(slot_refs(&v, 0x60c).is_empty(), "{:?}", v.refs);
}

/// A switch's case bodies are the dispatcher's own code: the base the
/// dispatch holds reaches each case, and a slot load there finds the slot.
#[test]
fn a_switch_case_inherits_the_dispatch_base() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let dispatch = vec![op(OpCode::CPUI_BRANCHIND, None, vec![vn(&s.reg, 0x20, 4)])];
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &dispatch, &[]);
    w.pp.cases(0x608, &[0x700, 0x710]);
    w.step(0x700, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x704, &slot_load(&s), &[]);
    w.step(0x710, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x714, &slot_load(&s), &[]);
    let v = w.finish();
    assert_eq!(slot_refs(&v, 0x704), SLOT_REFS.to_vec());
    assert_eq!(slot_refs(&v, 0x714), SLOT_REFS.to_vec());
}

/// Before the body's first pool load nothing is recorded at all: on an
/// architecture or a body that never forms one of these pairs the walk
/// costs one scan of each instruction's ops.
#[test]
fn nothing_is_recorded_before_the_first_pool_load() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.step(0x5f0, &cbranch(&s, 0x640), &[0x640]);
    w.step(0x5f4, &jump(&s, 0x600), &[0x600]);
    w.pp.cases(0x5f4, &[0x600]);
    assert!(w.pp.edges.is_empty() && w.pp.nodes.is_empty() && !w.pp.live);
}

/// An instruction queued before the first pool load was queued by one that
/// carried nothing, so it holds nothing, though the edge was never recorded.
#[test]
fn what_was_queued_before_the_first_pool_load_holds_nothing() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    let other = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, 0x20, 4)),
        vec![vn(&s.konst, 0, 4)],
    )];
    w.step(0x5f8, &cbranch(&s, 0x640), &[0x640]);
    w.queue = vec![0x640];
    w.step(0x5fc, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x600, &other, &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &jump(&s, 0x640), &[0x640]);
    w.step(0x640, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x644, &slot_load(&s), &[]);
    let v = w.finish();
    assert!(slot_refs(&v, 0x644).is_empty(), "{:?}", v.refs);
    assert_eq!(slot_refs(&v, 0x604), vec![(0x800, XrefKind::Data)]);
}

/// A loop whose body does not write r4 keeps the base across its back edge.
#[test]
fn a_base_survives_a_loop_back_edge() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x60c, &slot_load(&s), &[]);
    w.step(0x610, &cbranch(&s, 0x608), &[0x608]);
    assert_eq!(slot_refs(&w.finish(), 0x60c), SLOT_REFS.to_vec());
}

/// The walk decodes the entry before any edge into it, so a branch back to
/// the entry cannot make a base hold there.
#[test]
fn nothing_holds_at_the_entry() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = Walk::new(&s, &pool, &GOT_MAP);
    w.got = Some(&got);
    w.step(0x5f8, &ldr(&s, R2, 0x6a4), &[]);
    w.step(0x5fc, &slot_load(&s), &[]);
    w.step(0x600, &ldr(&s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(&s, R4, 0x604), &[]);
    w.step(0x608, &jump(&s, 0x5f8), &[0x5f8]);
    assert!(slot_refs(&w.finish(), 0x5fc).is_empty());
}

// --- accesses through a tracked pointer ----------------------------------

/// `ldr rd,[rn,#off]`, or `str rd,[rn,#off]` when `store`.
fn access(s: &Spaces, rd: u64, rn: u64, off: u64, store: bool) -> Vec<FullOp> {
    let at = op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.uniq, 0x2f80, 4)),
        vec![vn(&s.reg, rn, 4), vn(&s.konst, off, 4)],
    );
    let mem = if store {
        op(
            OpCode::CPUI_STORE,
            None,
            vec![
                vn(&s.konst, ram_id(s), 8),
                vn(&s.uniq, 0x2f80, 4),
                vn(&s.reg, rd, 4),
            ],
        )
    } else {
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, rd, 4)),
            vec![vn(&s.konst, ram_id(s), 8), vn(&s.uniq, 0x2f80, 4)],
        )
    };
    vec![at, mem]
}

const R0: u64 = 0x20;

fn got_walk<'a>(s: &'a Spaces, pool: &'a PoolImage<'a>, got: &'a GotImage<'a>) -> Walk<'a> {
    let mut w = Walk::new(s, pool, &GOT_MAP);
    w.got = Some(got);
    w.deref = true;
    w.step(0x600, &ldr(s, R4, 0x6a0), &[]);
    w.step(0x604, &add_pc(s, R4, 0x604), &[]);
    w.step(0x608, &ldr(s, R2, 0x6a4), &[]);
    w.step(0x60c, &slot_load(s), &[]);
    w
}

/// The word a GOT slot holds is the datum's address: `ldr r2,[r4,r2]` puts
/// 0x1450 in r2, and a load and a store through it at constant offsets file
/// the addresses they access. Off, only the slot and its word are filed.
#[test]
fn an_access_through_a_slot_word_files_its_address() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = got_walk(&s, &pool, &got);
    w.step(0x610, &access(&s, R0, R2, 8, false), &[]);
    w.step(0x614, &access(&s, R0, R2, 0, true), &[]);
    let v = w.finish();
    assert_eq!(slot_refs(&v, 0x60c), SLOT_REFS.to_vec());
    assert_eq!(slot_refs(&v, 0x610), vec![(0x1458, XrefKind::Read)]);
    assert_eq!(slot_refs(&v, 0x614), vec![(0x1450, XrefKind::Write)]);

    let mut w = got_walk(&s, &pool, &got);
    w.deref = false;
    w.step(0x610, &access(&s, R0, R2, 8, false), &[]);
    assert!(slot_refs(&w.finish(), 0x610).is_empty());
}

/// A copy of the pointer into a callee-saved register, plus a constant, is
/// still the pointer after a call and a branch.
#[test]
fn a_pointer_survives_a_copy_a_call_and_a_branch() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = got_walk(&s, &pool, &got);
    w.preserved = &[(R4, R5 + 4)];
    let bump = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, R5, 4)),
        vec![vn(&s.reg, R2, 4), vn(&s.konst, 0x10, 4)],
    )];
    let call = vec![op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x400, 4)])];
    w.step(0x610, &bump, &[]);
    w.step(0x614, &call, &[]);
    w.step(0x618, &jump(&s, 0x700), &[0x700]);
    w.step(0x700, &access(&s, R0, R5, 4, false), &[]);
    assert_eq!(
        slot_refs(&w.finish(), 0x700),
        vec![(0x1464, XrefKind::Read)]
    );
}

/// A call ends a pointer held in a register the callee may clobber.
#[test]
fn a_call_ends_a_pointer_in_a_scratch_register() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = got_walk(&s, &pool, &got);
    w.preserved = &[(R4, R4 + 4)];
    let call = vec![op(OpCode::CPUI_CALL, None, vec![vn(&s.ram, 0x400, 4)])];
    w.step(0x610, &call, &[]);
    w.step(0x614, &access(&s, R0, R2, 4, false), &[]);
    assert!(slot_refs(&w.finish(), 0x614).is_empty());
}

/// Where one path writes the register, the pointer does not hold at the join.
#[test]
fn a_pointer_one_path_overwrites_is_not_believed_at_the_join() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let clobber = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, R2, 4)),
        vec![vn(&s.reg, R0, 4)],
    )];
    let mut w = got_walk(&s, &pool, &got);
    w.step(0x610, &cbranch(&s, 0x620), &[0x620]);
    w.step(0x614, &clobber, &[]);
    w.step(0x618, &jump(&s, 0x620), &[0x620]);
    w.step(0x620, &access(&s, R0, R2, 4, false), &[]);
    assert!(slot_refs(&w.finish(), 0x620).is_empty());
}

/// The pointer plus a pool word, or plus an unknown register, names nothing.
#[test]
fn a_pointer_plus_a_register_files_nothing() {
    let (s, pool, got) = (spaces(), got_pool(), got_image());
    let mut w = got_walk(&s, &pool, &got);
    let indexed = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.uniq, 0x2f80, 4)),
            vec![vn(&s.reg, R2, 4), vn(&s.reg, R0, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, R0, 4)),
            vec![vn(&s.konst, ram_id(&s), 8), vn(&s.uniq, 0x2f80, 4)],
        ),
    ];
    w.step(0x610, &indexed, &[]);
    assert!(slot_refs(&w.finish(), 0x610).is_empty());
}

/// 0x6a0 holds 0x1500, a mapped address above the `checkOperands` floor.
const PTR_POOL: [u8; 4] = [0x00, 0x15, 0x00, 0x00];
const PTR_MAP: [(u64, u64); 1] = [(0x400, 0x2000)];

fn ptr_pool() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x6a0, 0x6a4, &PTR_POOL[..])], 4, true).unwrap()
}

/// A mapped literal-pool word outside the GOT is a pointer in code built
/// without `-fPIC`: `ldr r0,=0x1500; ldr r2,[r0,#0x10]`.
#[test]
fn an_access_through_an_absolute_pool_word_files_its_address() {
    let (s, pool) = (spaces(), ptr_pool());
    let mut w = Walk::new(&s, &pool, &PTR_MAP);
    w.deref = true;
    w.step(0x660, &ldr(&s, R0, 0x6a0), &[]);
    w.step(0x664, &access(&s, R2, R0, 0x10, false), &[]);
    assert_eq!(refs(&w.finish()), vec![(0x664, 0x1510, XrefKind::Read)]);
}

/// A pool word a PC fold consumes is a displacement, so an access through
/// it on the way names nothing.
#[test]
fn a_pool_word_the_pc_displaces_is_not_a_pointer() {
    let (s, pool) = (spaces(), ptr_pool());
    let mut w = Walk::new(&s, &pool, &PTR_MAP);
    w.deref = true;
    w.step(0x660, &ldr(&s, R0, 0x6a0), &[]);
    w.step(0x664, &access(&s, R2, R0, 0x10, false), &[]);
    w.step(0x668, &add_pc(&s, R0, 0x668), &[]);
    let v = w.finish();
    assert_eq!(refs(&v), vec![(0x668, 0x1b70, XrefKind::Data)]);
    assert!(v.displaced.contains(&0x660));
}

/// An address the PC composes outside the GOT is a pointer too:
/// `add r0,pc,r0; str r2,[r0,#4]`.
#[test]
fn an_access_through_a_pc_composed_address_files_its_address() {
    let (s, pool) = (spaces(), image());
    let mut w = Walk::new(&s, &pool, &MAPPED);
    w.deref = true;
    w.step(0x660, &ldr(&s, R0, 0x6a0), &[]);
    w.step(0x664, &add_pc(&s, R0, 0x664), &[]);
    w.step(0x668, &access(&s, R2, R0, 4, true), &[]);
    assert_eq!(
        refs(&w.finish()),
        vec![
            (0x664, 0x4ab, XrefKind::Data),
            (0x668, 0x4af, XrefKind::Write)
        ]
    );
}
