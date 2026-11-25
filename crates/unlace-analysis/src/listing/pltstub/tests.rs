use super::*;

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

const MAPPED: &[(u64, u64)] = &[(0x1000, 0x2000), (0x100000, 0x104000)];
/// The `.plt` the stubs of these tests lie in.
const PLT: &[(u64, u64)] = &[(0x1000, 0x3000)];
const IP: u64 = 0x50;
const PC: u64 = 0x5c;

/// `add ip,pc,#0` as the ARM SLEIGH lifts it: a copy of `pc + 8`.
fn adr(s: &Spaces, value: u64) -> Vec<FullOp> {
    vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, IP, 4)),
        vec![vn(&s.konst, value, 4)],
    )]
}

/// `add ip,ip,#imm`, with one of the flag ops it also computes.
fn add(s: &Spaces, imm: u64) -> Vec<FullOp> {
    vec![
        op(
            OpCode::CPUI_INT_CARRY,
            Some(vn(&s.reg, 0x66, 1)),
            vec![vn(&s.reg, IP, 4), vn(&s.konst, imm, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.reg, IP, 4)),
            vec![vn(&s.reg, IP, 4), vn(&s.konst, imm, 4)],
        ),
    ]
}

/// `ldr pc,[ip,#imm]!`: the load, the Thumb bit cleared, the jump.
fn ldr_pc(s: &Spaces, imm: u64) -> Vec<FullOp> {
    let loaded = vn(&s.uniq, 0xa7300, 4);
    vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.reg, IP, 4)),
            vec![vn(&s.reg, IP, 4), vn(&s.konst, imm, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(loaded.clone()),
            vec![vn(&s.konst, 3, 8), vn(&s.reg, IP, 4)],
        ),
        op(
            OpCode::CPUI_INT_AND,
            Some(vn(&s.reg, PC, 4)),
            vec![loaded, vn(&s.konst, 0xffff_fffe, 4)],
        ),
        op(OpCode::CPUI_BRANCHIND, None, vec![vn(&s.reg, PC, 4)]),
    ]
}

/// Drive one instruction, returning its rows and the rows released.
fn step(
    stubs: &mut PltStubs,
    vma: u64,
    ops: &[FullOp],
    drefs: &[(u64, XrefKind)],
) -> (Vec<(u64, XrefKind)>, Vec<Held>) {
    let mut drefs = drefs.to_vec();
    let released = stubs.step(vma, 4, ops, &mut drefs, "text");
    (drefs, released)
}

/// A stub whose first partial sum falls in an unmapped gap (so it files no
/// row of its own) is still recognised: the mapped immediate the next
/// instruction adds files nothing, and the load files the slot.
#[test]
fn a_chain_starts_whatever_its_first_value_maps_to() {
    let s = spaces();
    assert!(!in_range(MAPPED, 0x3008));
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    assert_eq!(
        step(&mut stubs, 0x1000, &adr(&s, 0x3008), &[]),
        (vec![], vec![])
    );
    assert_eq!(
        step(
            &mut stubs,
            0x1004,
            &add(&s, 0x100000),
            &[(0x100000, XrefKind::Data)]
        ),
        (vec![], vec![])
    );
    assert_eq!(
        step(&mut stubs, 0x1008, &ldr_pc(&s, 0x10), &[]),
        (vec![(0x103018, XrefKind::Read)], vec![])
    );
    assert!(stubs.drain().is_empty());
}

/// A run that leaves the shape files the rows it held, as they were.
#[test]
fn a_broken_chain_files_its_rows() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    assert_eq!(
        step(
            &mut stubs,
            0x1000,
            &adr(&s, 0x2000),
            &[(0x2000, XrefKind::Data)]
        ),
        (vec![], vec![])
    );
    let store = vec![op(
        OpCode::CPUI_STORE,
        None,
        vec![vn(&s.konst, 3, 8), vn(&s.reg, IP, 4), vn(&s.reg, 0, 4)],
    )];
    let (rows, released) = step(&mut stubs, 0x1004, &store, &[]);
    assert_eq!(
        (rows, released),
        (vec![], vec![(0x1000, 0x2000, "text".to_string())])
    );
    step(
        &mut stubs,
        0x2000,
        &adr(&s, 0x3000),
        &[(0x3000, XrefKind::Data)],
    );
    assert_eq!(stubs.drain(), vec![(0x2000, 0x3000, "text".to_string())]);
}

/// `mov ip,#K` overwrites the register instead of adding to it: the chain
/// breaks there, the `adr`'s row is filed as it was, and the load after
/// the `mov` files no slot.
#[test]
fn an_overwrite_is_not_an_add() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    step(
        &mut stubs,
        0x1000,
        &adr(&s, 0x1800),
        &[(0x1800, XrefKind::Data)],
    );
    let (_, released) = step(
        &mut stubs,
        0x1004,
        &adr(&s, 0x101000),
        &[(0x101000, XrefKind::Data)],
    );
    assert_eq!(released, vec![(0x1000, 0x1800, "text".to_string())]);
    let (rows, released) = step(&mut stubs, 0x1008, &ldr_pc(&s, 0xc), &[]);
    assert_eq!(rows, vec![]);
    assert_eq!(released, vec![(0x1004, 0x101000, "text".to_string())]);
}

/// `add ip,ip,ip` doubles the register and `mov ip,ip` copies it: neither
/// adds a constant, so the chain breaks there, the `adr`'s row is filed as
/// it was, and the load after files no slot.
#[test]
fn a_step_must_add_one_constant() {
    let s = spaces();
    let double = vec![op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&s.reg, IP, 4)),
        vec![vn(&s.reg, IP, 4), vn(&s.reg, IP, 4)],
    )];
    let copy = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&s.reg, IP, 4)),
        vec![vn(&s.reg, IP, 4)],
    )];
    // Each load's immediate puts the slot the old rule took at 0x100000.
    for (step_ops, imm) in [(double, 0xfd000), (copy, 0xfe800)] {
        let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
        step(
            &mut stubs,
            0x1000,
            &adr(&s, 0x1800),
            &[(0x1800, XrefKind::Data)],
        );
        let (rows, released) = step(&mut stubs, 0x1004, &step_ops, &[]);
        assert_eq!(
            (rows, released),
            (vec![], vec![(0x1000, 0x1800, "text".to_string())])
        );
        assert_eq!(
            step(&mut stubs, 0x1008, &ldr_pc(&s, imm), &[]),
            (vec![], vec![])
        );
    }
}

/// A constant the instruction computes into a temporary first is still a
/// constant: `add ip,ip,t` with `t = #K` is a step.
#[test]
fn a_constant_computed_in_the_instruction_is_a_step() {
    let s = spaces();
    let t = vn(&s.uniq, 0x200, 4);
    let add_t = vec![
        op(
            OpCode::CPUI_COPY,
            Some(t.clone()),
            vec![vn(&s.konst, 0x100000, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&s.reg, IP, 4)),
            vec![t, vn(&s.reg, IP, 4)],
        ),
    ];
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    step(
        &mut stubs,
        0x1000,
        &adr(&s, 0x1008),
        &[(0x1008, XrefKind::Data)],
    );
    assert_eq!(
        step(&mut stubs, 0x1004, &add_t, &[(0x100000, XrefKind::Data)]),
        (vec![], vec![])
    );
    assert_eq!(
        step(&mut stubs, 0x1008, &ldr_pc(&s, 0x10), &[]),
        (vec![(0x101018, XrefKind::Read)], vec![])
    );
}

/// `ldm ip,{r0,pc}` loads two words and jumps to the second: the slot is
/// `pc`'s word, not the first word loaded.
#[test]
fn the_slot_is_the_word_the_jump_takes() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    let r0 = vn(&s.reg, 0x20, 4);
    let at = vn(&s.uniq, 0x100, 4);
    let ldm = vec![
        op(
            OpCode::CPUI_LOAD,
            Some(r0),
            vec![vn(&s.konst, 3, 8), vn(&s.reg, IP, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(at.clone()),
            vec![vn(&s.reg, IP, 4), vn(&s.konst, 4, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, PC, 4)),
            vec![vn(&s.konst, 3, 8), at],
        ),
        op(OpCode::CPUI_BRANCHIND, None, vec![vn(&s.reg, PC, 4)]),
    ];
    step(
        &mut stubs,
        0x1000,
        &adr(&s, 0x1008),
        &[(0x1008, XrefKind::Data)],
    );
    step(
        &mut stubs,
        0x1004,
        &add(&s, 0x100000),
        &[(0x100000, XrefKind::Data)],
    );
    assert_eq!(
        step(&mut stubs, 0x1008, &ldm, &[]),
        (vec![(0x10100c, XrefKind::Read)], vec![])
    );
}

/// A load-and-jump that reloads the chain register and then jumps through
/// the word the reload names (`ldr ip,[ip]; ldr pc,[ip]`) reads an address
/// the chain does not know: it files no slot and keeps the held rows.
#[test]
fn a_reloaded_register_names_no_slot() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    let reload = vec![
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, IP, 4)),
            vec![vn(&s.konst, 3, 8), vn(&s.reg, IP, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&s.reg, PC, 4)),
            vec![vn(&s.konst, 3, 8), vn(&s.reg, IP, 4)],
        ),
        op(OpCode::CPUI_BRANCHIND, None, vec![vn(&s.reg, PC, 4)]),
    ];
    step(
        &mut stubs,
        0x1000,
        &adr(&s, 0x1008),
        &[(0x1008, XrefKind::Data)],
    );
    step(
        &mut stubs,
        0x1004,
        &add(&s, 0x100000),
        &[(0x100000, XrefKind::Data)],
    );
    let (rows, released) = step(&mut stubs, 0x1008, &reload, &[]);
    assert_eq!(rows, vec![]);
    assert_eq!(
        released,
        vec![
            (0x1000, 0x1008, "text".to_string()),
            (0x1004, 0x100000, "text".to_string())
        ]
    );
}

/// A veneer outside the `.plt` built like a stub (`adr; add; ldr pc`) is
/// not one: each instruction keeps its rows and the load files no slot.
#[test]
fn a_veneer_outside_the_plt_keeps_its_rows() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    let adr_rows = [(0x1800, XrefKind::Data)];
    assert_eq!(
        step(&mut stubs, 0x4000, &adr(&s, 0x1800), &adr_rows),
        (adr_rows.to_vec(), vec![])
    );
    let add_rows = [(0x100000, XrefKind::Data)];
    assert_eq!(
        step(&mut stubs, 0x4004, &add(&s, 0x100000), &add_rows),
        (add_rows.to_vec(), vec![])
    );
    assert_eq!(
        step(&mut stubs, 0x4008, &ldr_pc(&s, 0x10), &[]),
        (vec![], vec![])
    );
    assert!(stubs.drain().is_empty());
}

/// A chain whose slot is in no mapped section is not a stub: it files no
/// `Read` and keeps the rows the generic rule gave it.
#[test]
fn an_unmapped_slot_is_no_stub() {
    let s = spaces();
    let mut stubs = PltStubs::new(Some(&s.ram), MAPPED, PLT.to_vec());
    step(
        &mut stubs,
        0x1000,
        &adr(&s, 0x1008),
        &[(0x1008, XrefKind::Data)],
    );
    step(
        &mut stubs,
        0x1004,
        &add(&s, 0x100000),
        &[(0x100000, XrefKind::Data)],
    );
    let (rows, released) = step(&mut stubs, 0x1008, &ldr_pc(&s, 0x4000), &[]);
    assert_eq!(rows, vec![]);
    assert_eq!(
        released,
        vec![
            (0x1000, 0x1008, "text".to_string()),
            (0x1004, 0x100000, "text".to_string())
        ]
    );
}
