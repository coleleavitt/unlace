use std::rc::Rc;

use unlace_base::space::{AddrSpace, spacetype};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use super::*;

/// Only `$a`, `$t`, `$d` and their `.`-suffixed forms are mapping symbols,
/// and a `$` name with a multi-byte character after it is read without
/// slicing through that character.
#[test]
fn mapping_symbol_names_are_read_by_byte() {
    for (name, kind) in [
        ("$a", b'a'),
        ("$t", b't'),
        ("$d", b'd'),
        ("$t.foo", b't'),
        ("$d.realdata", b'd'),
    ] {
        assert_eq!(mapping_kind(name), Some(kind), "{name}");
    }
    for name in ["$", "$x", "$é", "$\u{e9}t", "$ta", "$t_", "t", "", "é"] {
        assert_eq!(mapping_kind(name), None, "{name:?}");
    }
}

/// A throwaway `(ram, constant)` space pair. `ram` stands in for the default
/// data space; its index is what [`data_refs`] is told to match.
fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>) {
    (
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
    )
}

fn vn(space: &Rc<AddrSpace>, offset: u64) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size: 8,
    }
}

fn op(opcode: OpCode, out: Option<VarnodeData>, ins: Vec<VarnodeData>) -> FullOp {
    FullOp { opcode, out, ins }
}

const MAPPED: [(u64, u64); 2] = [(0x1000, 0x2000), (0x4000, 0x4100)];

/// A read-only literal pool at 0x1000: a mapped address, a number, a mapped
/// address. See [`super::super::poolref`].
const POOL: [u8; 12] = [
    0x00, 0x40, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x10, 0x40, 0x00, 0x00,
];

fn pool_image() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x1000, 0x100c, &POOL[..])], 4, true).unwrap()
}

/// Run [`data_refs`] with `ram` as the default data space and a fall-through
/// no op under test materializes.
fn refs(ram: &Rc<AddrSpace>, ops: &[FullOp]) -> Vec<(u64, XrefKind)> {
    data_refs(
        ops,
        Some(ram),
        &MAPPED,
        0,
        None,
        &Formed::default(),
        &|| false,
    )
}

/// The shape a constant-address memory operand actually lifts to: a direct
/// data-space varnode. An input reads it, an output writes it.
#[test]
fn a_direct_data_space_varnode_is_a_read_or_a_write() {
    let (ram, _cst) = spaces();
    let load = op(OpCode::CPUI_COPY, None, vec![vn(&ram, 0x4014)]);
    assert_eq!(refs(&ram, &[load]), vec![(0x4014, XrefKind::Read)]);
    let store = op(OpCode::CPUI_COPY, Some(vn(&ram, 0x4010)), vec![]);
    assert_eq!(refs(&ram, &[store]), vec![(0x4010, XrefKind::Write)]);
}

/// GH #1364: below the `checkOperands` floor a mapped constant is a
/// reference only where the instruction computed it from its own address
/// (`adr x0, 0x378` in a dylib's first page); `mov x0, #0x378` is a number.
#[test]
fn a_pc_relative_constant_below_the_floor_is_a_reference() {
    let (ram, cst) = spaces();
    let low = [(0x300, 0x2000)];
    let copy = [op(OpCode::CPUI_COPY, None, vec![vn(&cst, 0x378)])];
    let formed = data_refs(
        &copy,
        Some(&ram),
        &low,
        0x3a4,
        None,
        &Formed::one(0x378),
        &|| false,
    );
    assert_eq!(formed, vec![(0x378, XrefKind::Data)]);
    assert!(
        data_refs(
            &copy,
            Some(&ram),
            &low,
            0x3a4,
            None,
            &Formed::default(),
            &|| false
        )
        .is_empty()
    );
    let unmapped = [op(OpCode::CPUI_COPY, None, vec![vn(&cst, 0x200)])];
    assert!(
        data_refs(
            &unmapped,
            Some(&ram),
            &low,
            0x3a4,
            None,
            &Formed::one(0x200),
            &|| false
        )
        .is_empty()
    );
}

/// A branch/call target is also a data-space varnode, and it is already
/// filed as control flow — it must never come back as a read.
#[test]
fn a_flow_ops_target_is_not_a_data_reference() {
    let (ram, cst) = spaces();
    for opcode in [OpCode::CPUI_CALL, OpCode::CPUI_BRANCH, OpCode::CPUI_CBRANCH] {
        assert!(
            refs(&ram, &[op(opcode, None, vec![vn(&ram, 0x1030)])]).is_empty(),
            "{opcode:?} target leaked as a data reference"
        );
        assert!(
            refs(&ram, &[op(opcode, None, vec![vn(&cst, 0x1030)])]).is_empty(),
            "{opcode:?} constant target leaked as a data reference"
        );
    }
}

/// An *indirect* flow op's `in0` is the opposite case: it is the varnode the
/// destination is read out of, not a static target, and no Call/Jump edge is
/// filed for it. This is the whole import-veneer shape — `JMP qword ptr
/// [__imp_X]` is one `BRANCHIND` on the slot — so skipping it loses the only
/// reference the instruction makes. A veneer's forwarding jump is a jump
/// edge to the slot; unified inbound queries remove that alias-internal edge.
#[test]
fn an_indirect_flow_ops_operand_is_the_slot_it_reads() {
    let (ram, _cst) = spaces();
    // `CALLIND` straight off the slot is not a shape x86 emits, but the
    // walk must not depend on which of the two it gets.
    for (opcode, kind) in [
        (OpCode::CPUI_BRANCHIND, XrefKind::Jump),
        (OpCode::CPUI_CALLIND, XrefKind::Call),
    ] {
        assert_eq!(
            refs(&ram, &[op(opcode, None, vec![vn(&ram, 0x1030)])]),
            vec![(0x1030, kind)],
            "{opcode:?} lost the slot it jumps through"
        );
    }
    // A register destination is neither a slot nor an address.
    let regs = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL));
    let ops = [op(OpCode::CPUI_BRANCHIND, None, vec![vn(&regs, 0x10)])];
    assert!(refs(&ram, &ops).is_empty());
}

/// `CALL qword ptr [__imp_X]` never puts the slot in the flow op's own
/// `in0`: SLEIGH copies the operand into a temporary first, and reading the
/// chain is the only thing that tells the import call from a plain load of
/// a global.
#[test]
fn a_call_through_a_slot_is_a_call_edge_across_the_copy() {
    let (ram, _cst) = spaces();
    let tmp = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL));
    let ops = [
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x100)),
            vec![vn(&ram, 0x1030)],
        ),
        op(OpCode::CPUI_CALLIND, None, vec![vn(&tmp, 0x100)]),
    ];
    assert_eq!(refs(&ram, &ops), vec![(0x1030, XrefKind::Call)]);

    // The same instruction reading an unrelated global still reads it: only
    // the operand the destination actually comes from becomes an edge.
    let ops = [
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x100)),
            vec![vn(&ram, 0x1030)],
        ),
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x200)),
            vec![vn(&ram, 0x4010)],
        ),
        op(OpCode::CPUI_CALLIND, None, vec![vn(&tmp, 0x100)]),
    ];
    assert_eq!(
        refs(&ram, &ops),
        vec![(0x1030, XrefKind::Call), (0x4010, XrefKind::Read)]
    );
}

#[test]
fn a_resolved_call_keeps_both_physical_slot_reads_without_a_stale_call_edge() {
    let (ram, _cst) = spaces();
    let tmp = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL));
    let ops = [
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x100)),
            vec![vn(&ram, 0x1030)],
        ),
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x100)),
            vec![vn(&ram, 0x4010)],
        ),
        op(
            OpCode::CPUI_COPY,
            Some(vn(&ram, 0x4020)),
            vec![vn(&tmp, 0x200)],
        ),
        op(OpCode::CPUI_CALLIND, None, vec![vn(&tmp, 0x100)]),
    ];
    let mut references = refs(&ram, &ops);
    assert_eq!(
        references,
        vec![
            (0x1030, XrefKind::Call),
            (0x4010, XrefKind::Read),
            (0x4020, XrefKind::Write),
        ]
    );
    super::super::gotcall::resolved_slot_reads(&mut references, 0x4010);
    assert_eq!(
        references,
        vec![
            (0x1030, XrefKind::Read),
            (0x4010, XrefKind::Read),
            (0x4020, XrefKind::Write),
        ]
    );
    let outside_sections = [
        op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, 0x100)),
            vec![vn(&ram, 0x3000)],
        ),
        op(OpCode::CPUI_CALLIND, None, vec![vn(&tmp, 0x100)]),
    ];
    let mut references = refs(&ram, &outside_sections);
    assert!(references.is_empty());
    super::super::gotcall::resolved_slot_reads(&mut references, 0x3000);
    assert_eq!(references, vec![(0x3000, XrefKind::Read)]);
}

/// The chain is bounded: a temporary the flow op reaches only through more
/// than [`MAX_SLOT_COPIES`] copies is not read as the operand fetch.
#[test]
fn the_copy_chain_to_a_slot_is_bounded() {
    let (ram, _cst) = spaces();
    let tmp = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL));
    let mut ops = vec![op(
        OpCode::CPUI_COPY,
        Some(vn(&tmp, 0)),
        vec![vn(&ram, 0x1030)],
    )];
    for i in 0..MAX_SLOT_COPIES as u64 {
        ops.push(op(
            OpCode::CPUI_COPY,
            Some(vn(&tmp, i + 1)),
            vec![vn(&tmp, i)],
        ));
    }
    ops.push(op(
        OpCode::CPUI_CALLIND,
        None,
        vec![vn(&tmp, MAX_SLOT_COPIES as u64)],
    ));
    assert_eq!(refs(&ram, &ops), vec![(0x1030, XrefKind::Read)]);
}

/// A `LOAD` through a constant pointer is a read of that address; the
/// space-id `in0` (a huge constant) must never be mistaken for one.
#[test]
fn load_through_a_constant_pointer_is_a_read() {
    let (ram, cst) = spaces();
    let ops = [op(
        OpCode::CPUI_LOAD,
        None,
        vec![vn(&cst, 0x1b), vn(&cst, 0x4010)],
    )];
    assert_eq!(refs(&ram, &ops), vec![(0x4010, XrefKind::Read)]);
}

/// A `STORE` through a constant pointer is a write of the pointer, and the
/// stored value is judged on its own merits.
#[test]
fn store_reports_the_pointer_it_writes_through() {
    let (ram, cst) = spaces();
    let ops = [op(
        OpCode::CPUI_STORE,
        None,
        vec![vn(&cst, 0x1b), vn(&cst, 0x4010), vn(&cst, 0x1900)],
    )];
    assert_eq!(
        refs(&ram, &ops),
        vec![(0x1900, XrefKind::Data), (0x4010, XrefKind::Write)]
    );
}

/// Every architecture materializes a call's return address as this
/// instruction's fall-through, and it is never a reference: not beside a
/// `CALL` (x86 `call` pushes it, A32 `bl` copies it to `lr`), nor beside the
/// `BRANCH` of x86 `call $+5` and PowerPC `bcl 20,31,$+4`, the `BRANCHIND`
/// of a RISC-V PLT's `jalr t1,t3`, or x86-64 `syscall`'s `CALLOTHER`; nor
/// where nothing branches but the value is a link: A32 `mov lr,pc` adds the
/// fall-through to 4, and MIPS `nal` copies it into `ra` from behind a delay
/// slot.
#[test]
fn a_calls_own_return_address_is_never_a_data_reference() {
    let (ram, cst) = spaces();
    let reg = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR));
    let r = |offset| VarnodeData {
        space: Some(Rc::clone(&reg)),
        offset,
        size: 4,
    };
    let fall = || vn(&cst, 0x1104);
    let push = op(
        OpCode::CPUI_STORE,
        None,
        vec![vn(&cst, 0x1b), r(0x10), fall()],
    );
    let to_lr = op(OpCode::CPUI_COPY, Some(r(0x58)), vec![fall()]);
    let call = op(OpCode::CPUI_CALL, None, vec![vn(&ram, 0x1180)]);
    let to_next = op(OpCode::CPUI_BRANCH, None, vec![vn(&ram, 0x1104)]);
    let links = [
        ("x86 call", vec![push.clone(), call.clone()]),
        ("A32 bl", vec![to_lr.clone(), call]),
        ("x86 call $+5", vec![push, to_next.clone()]),
        ("PowerPC bcl 20,31,$+4", vec![to_lr, to_next]),
        (
            "RISC-V jalr t1,t3",
            vec![
                op(OpCode::CPUI_COPY, Some(r(0x30)), vec![fall()]),
                op(OpCode::CPUI_BRANCHIND, None, vec![r(0xe0)]),
            ],
        ),
        (
            "x86-64 syscall",
            vec![
                op(OpCode::CPUI_COPY, Some(r(0x8)), vec![fall()]),
                op(OpCode::CPUI_CALLOTHER, None, vec![vn(&cst, 5)]),
            ],
        ),
        (
            "A32 mov lr,pc",
            vec![op(
                OpCode::CPUI_INT_ADD,
                Some(r(0x58)),
                vec![fall(), vn(&cst, 4)],
            )],
        ),
    ];
    for (what, ops) in &links {
        let decoded = || panic!("{what}: a link needs no second decode");
        assert!(
            data_refs(
                ops,
                Some(&ram),
                &MAPPED,
                0x1104,
                None,
                &Formed::default(),
                &decoded
            )
            .is_empty(),
            "{what}"
        );
    }
    let nal = [op(OpCode::CPUI_COPY, Some(r(0x7c)), vec![fall()])];
    assert!(
        data_refs(
            &nal,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| true
        )
        .is_empty()
    );
    let nal_movz = [
        op(OpCode::CPUI_COPY, Some(r(0x7c)), vec![fall()]),
        op(OpCode::CPUI_CBRANCH, None, vec![vn(&cst, 2), r(0x200)]),
    ];
    assert!(
        data_refs(
            &nal_movz,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| true
        )
        .is_empty()
    );
}

/// A delay slot behind a branch is an ordinary instruction: SuperH `rts;
/// mova` and `bt/s; mova` form the address right after the slot in `r0`.
#[test]
fn an_address_formed_in_a_branchs_delay_slot_is_a_data_reference() {
    let (ram, cst) = spaces();
    let reg = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR));
    let r = |offset| VarnodeData {
        space: Some(Rc::clone(&reg)),
        offset,
        size: 4,
    };
    let mova = op(OpCode::CPUI_COPY, Some(r(0)), vec![vn(&cst, 0x1104)]);
    for (what, flow) in [
        ("rts", op(OpCode::CPUI_RETURN, None, vec![r(0x188)])),
        (
            "bt/s",
            op(OpCode::CPUI_CBRANCH, None, vec![vn(&ram, 0x1180), r(0x200)]),
        ),
    ] {
        let ops = [mova.clone(), flow];
        assert_eq!(
            data_refs(
                &ops,
                Some(&ram),
                &MAPPED,
                0x1104,
                None,
                &Formed::default(),
                &|| true
            ),
            vec![(0x1104, XrefKind::Data)],
            "{what}"
        );
    }
}

/// An instruction that transfers no control and moves its own fall-through
/// whole has formed that address (GH #1360): AArch64 `adr x0,.+4` and x86-64
/// `lea rax,[rip]` copy it, `mov eax,offset next` zero-extends it, `push
/// offset next` stores it, and a predicated A32 `adreq` only branches to skip
/// itself.
#[test]
fn an_address_formed_at_the_fall_through_is_a_data_reference() {
    let (ram, cst) = spaces();
    let reg = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR));
    let r = |offset| VarnodeData {
        space: Some(Rc::clone(&reg)),
        offset,
        size: 4,
    };
    let fall = || vn(&cst, 0x1104);
    let formed = [
        (
            "adr x0,.+4",
            vec![op(OpCode::CPUI_COPY, Some(r(0)), vec![fall()])],
        ),
        (
            "mov eax,offset next",
            vec![op(OpCode::CPUI_INT_ZEXT, Some(r(0)), vec![fall()])],
        ),
        (
            "push offset next",
            vec![
                op(
                    OpCode::CPUI_INT_SUB,
                    Some(r(0x10)),
                    vec![r(0x10), vn(&cst, 8)],
                ),
                op(
                    OpCode::CPUI_STORE,
                    None,
                    vec![vn(&cst, 0x1b), r(0x10), fall()],
                ),
            ],
        ),
        (
            "A32 adreq r0,.+4",
            vec![
                op(OpCode::CPUI_CBRANCH, None, vec![vn(&ram, 0x1104), r(0x200)]),
                op(OpCode::CPUI_COPY, Some(r(0)), vec![fall()]),
            ],
        ),
    ];
    for (what, ops) in &formed {
        assert_eq!(
            data_refs(
                ops,
                Some(&ram),
                &MAPPED,
                0x1104,
                None,
                &Formed::default(),
                &|| false
            ),
            vec![(0x1104, XrefKind::Data)],
            "{what}"
        );
    }
}

/// An AArch64 `bl`/`blr` lifts its link value as `x30 = inst_start + 4`: the
/// sum is the fall-through, so neither constant is the instruction
/// referencing itself. A real self-reference (`adr x0,.`), a PC-relative sum
/// that is not the fall-through, and the same sum outside a call (Thumb-2's
/// `pc` read) are reported as before.
#[test]
fn an_aarch64_link_value_is_never_a_data_reference() {
    let (ram, cst) = spaces();
    let reg = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR));
    let x30 = VarnodeData {
        space: Some(Rc::clone(&reg)),
        offset: 0xf0,
        size: 8,
    };
    let x0 = VarnodeData {
        space: Some(Rc::clone(&reg)),
        offset: 0,
        size: 8,
    };
    let bl = [
        op(
            OpCode::CPUI_INT_ADD,
            Some(x30),
            vec![vn(&cst, 0x1100), vn(&cst, 4)],
        ),
        op(OpCode::CPUI_CALL, None, vec![vn(&ram, 0x1180)]),
    ];
    assert!(
        data_refs(
            &bl,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| false
        )
        .is_empty()
    );
    let adr = [op(
        OpCode::CPUI_COPY,
        Some(x0.clone()),
        vec![vn(&cst, 0x1100)],
    )];
    assert_eq!(
        data_refs(
            &adr,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| false
        ),
        vec![(0x1100, XrefKind::Data)]
    );
    let add_pc = [op(
        OpCode::CPUI_INT_ADD,
        Some(x0.clone()),
        vec![vn(&cst, 0x1100), vn(&cst, 0x10)],
    )];
    assert_eq!(
        data_refs(
            &add_pc,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| false
        ),
        vec![(0x1100, XrefKind::Data)]
    );
    let pc_read = [op(
        OpCode::CPUI_INT_ADD,
        Some(x0),
        vec![vn(&cst, 0x1100), vn(&cst, 4)],
    )];
    assert_eq!(
        data_refs(
            &pc_read,
            Some(&ram),
            &MAPPED,
            0x1104,
            None,
            &Formed::default(),
            &|| false
        ),
        vec![(0x1100, XrefKind::Data)]
    );
}

/// (unlace) `poolref`: a pointer-sized read of a read-only word files the
/// address that word holds, from the same instruction. The ARM shape — the
/// `LOAD`'s address is a direct `ram` varnode and its OUTPUT carries the
/// access width.
#[test]
fn a_literal_pool_load_also_references_what_the_pool_word_holds() {
    let (ram, cst) = spaces();
    let pool = pool_image();
    let mut out = vn(&ram, 0x4020);
    out.size = 4;
    let load = op(
        OpCode::CPUI_LOAD,
        Some(out),
        vec![vn(&cst, 0x1b), vn(&ram, 0x1000)],
    );
    assert_eq!(
        data_refs(
            &[load],
            Some(&ram),
            &MAPPED,
            0,
            Some(&pool),
            &Formed::default(),
            &|| false
        ),
        vec![
            (0x1000, XrefKind::Read),
            (0x4000, XrefKind::Data),
            (0x4020, XrefKind::Write)
        ]
    );
}

/// `ldrh r0,[pool]` reads a number out of the pool, not a pointer — and the
/// `LOAD`'s address varnode is pointer-sized either way, so the width has to
/// come from the output.
#[test]
fn a_narrow_load_of_a_pool_word_files_only_the_read() {
    let (ram, cst) = spaces();
    let pool = pool_image();
    let mut out = vn(&ram, 0x4020);
    out.size = 2;
    let load = op(
        OpCode::CPUI_LOAD,
        Some(out),
        vec![vn(&cst, 0x1b), vn(&ram, 0x1000)],
    );
    assert_eq!(
        data_refs(
            &[load],
            Some(&ram),
            &MAPPED,
            0,
            Some(&pool),
            &Formed::default(),
            &|| false
        ),
        vec![(0x1000, XrefKind::Read), (0x4020, XrefKind::Write)]
    );
}

/// The x86 shape: the operand is a direct `ram` varnode input of a `COPY`,
/// which carries its own access width.
#[test]
fn a_direct_ram_read_of_a_pool_word_follows_it_too() {
    let (ram, _cst) = spaces();
    let pool = pool_image();
    let mut src = vn(&ram, 0x1008);
    src.size = 4;
    let copy = op(OpCode::CPUI_COPY, None, vec![src]);
    assert_eq!(
        data_refs(
            &[copy],
            Some(&ram),
            &MAPPED,
            0,
            Some(&pool),
            &Formed::default(),
            &|| false
        ),
        vec![(0x1008, XrefKind::Read), (0x4010, XrefKind::Data)]
    );
}

/// Without the read-only image nothing is followed — the pre-feature answer.
#[test]
fn no_pool_image_leaves_every_reference_as_it_was() {
    let (ram, _cst) = spaces();
    let mut src = vn(&ram, 0x1008);
    src.size = 4;
    let copy = op(OpCode::CPUI_COPY, None, vec![src]);
    assert_eq!(refs(&ram, &[copy]), vec![(0x1008, XrefKind::Read)]);
}

/// The `LEA` shape: a materialized address is address-taken data, even when
/// it points into code — that is what makes an indirect-call target findable.
#[test]
fn a_materialized_code_address_is_a_data_reference() {
    let (ram, cst) = spaces();
    let ops = [op(OpCode::CPUI_COPY, None, vec![vn(&cst, 0x13c9)])];
    assert_eq!(refs(&ram, &ops), vec![(0x13c9, XrefKind::Data)]);
}

/// The upstream `checkOperands` filter: small integers and byte masks are
/// numbers, not addresses, however well they land in a mapped range — and an
/// unmapped value is rejected even though it clears the filter.
#[test]
fn small_integers_byte_masks_and_unmapped_values_are_not_addresses() {
    let (ram, cst) = spaces();
    for value in [0x8, 0xff, 0xffff, 0xfff, 0x9000] {
        let ops = [op(OpCode::CPUI_COPY, None, vec![vn(&cst, value)])];
        assert!(
            refs(&ram, &ops).is_empty(),
            "{value:#x} accepted as an address"
        );
    }
}

/// A register/temp input lives in neither space and is never an address.
#[test]
fn varnodes_outside_the_data_and_constant_spaces_are_ignored() {
    let (ram, _cst) = spaces();
    let regs = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL));
    let ops = [op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&regs, 0x10)),
        vec![vn(&regs, 0x1040)],
    )];
    assert!(refs(&ram, &ops).is_empty());
}

/// The PE/ELF import shape, hand-built: a veneer at `0x1030` jumping through
/// the slot at `0x4008`, one call site on the veneer and one slot read
/// somewhere else. Both addresses must answer with both references, and
/// neither may report the veneer's own forwarding jump as a caller.
fn import_index() -> XrefIndex {
    let mk = |from, to, kind| Xref {
        from,
        to,
        kind,
        instruction: "".into(),
    };
    let edges = [
        mk(0x1102, 0x1030, XrefKind::Call), // a direct call to the veneer
        mk(0x1030, 0x4008, XrefKind::Jump), // the veneer's own jmp [slot]
        mk(0x1200, 0x4008, XrefKind::Read), // a call straight through the slot
    ];
    let mut st = State {
        refs: Vec::new(),
        texts: HashSet::new(),
        decoded: HashSet::from([0x1030, 0x1102, 0x1200]),
        funcs: BTreeSet::from([0x1000, 0x1030, 0x1180]),
        indirect_call_sites: BTreeSet::new(),
        computed_jumps: BTreeSet::new(),
        flow: None,
        switches: Vec::new(),
        refused: HashSet::new(),
        carry: regcarry::Tracker::default(),
        skips: Vec::new(),
    };
    for e in edges {
        st.file(e.from, e.to, e.kind, "");
    }
    // The veneer is the single 6-byte `jmp [0x4008]` at 0x1030.
    st.finish(
        BTreeMap::from([(
            0x1030,
            Veneer {
                slot: 0x4008,
                end: 0x1036,
            },
        )]),
        false,
    )
}

/// The alias class is the veneer plus its slot, and it is symmetric: asking
/// either address is asking the same question.
#[test]
fn a_veneer_and_its_slot_are_one_alias_class() {
    let index = import_index();
    let class = BTreeSet::from([0x1030, 0x4008]);
    assert_eq!(index.alias_class(0x1030), class);
    assert_eq!(index.alias_class(0x4008), class);
    assert_eq!(index.veneer_slot(0x1030), Some(0x4008));
    // Everything that is not an import is a class of one.
    assert_eq!(index.alias_class(0x1000), BTreeSet::from([0x1000]));
    assert!(index.veneer_slot(0x1000).is_none());
}

/// Both members answer with both real references, and the forwarding jump —
/// the edge that defines the class — is never one of them.
#[test]
fn both_ends_of_an_import_answer_with_every_real_reference() {
    let index = import_index();
    for at in [0x1030u64, 0x4008] {
        let rows = index.refs_to_unified(at);
        let got: Vec<(u64, u64)> = rows.iter().map(|r| (r.from, r.to)).collect();
        assert_eq!(
            got,
            vec![(0x1102, 0x1030), (0x1200, 0x4008)],
            "asking 0x{at:x} gave the wrong references"
        );
    }
    // The per-address buckets are untouched: `refs_to` still answers for the
    // literal address, which is what `strings` and the call graph read.
    assert_eq!(index.refs_to(0x1030).len(), 1);
    assert_eq!(index.refs_to(0x4008).len(), 2);
}

/// A computed call belongs to the function that CONTAINS it, which is the
/// rule `refs_from_function` buckets by. The walk can reach an instruction
/// while descending from a different entry — a fall-through into a body some
/// later CALL names as its own function — and attributing the call site to
/// that descent would make the two answers name different functions.
#[test]
fn a_computed_call_is_attributed_to_the_function_containing_it() {
    let mut st = State {
        refs: Vec::new(),
        texts: HashSet::new(),
        decoded: HashSet::from([0x1188]),
        funcs: BTreeSet::from([0x1000, 0x1030, 0x1180]),
        indirect_call_sites: BTreeSet::from([0x1188]),
        computed_jumps: BTreeSet::new(),
        flow: None,
        switches: Vec::new(),
        refused: HashSet::new(),
        carry: regcarry::Tracker::default(),
        skips: Vec::new(),
    };
    st.file(0x1188, 0x4008, XrefKind::Read, "");
    let index = st.finish(BTreeMap::new(), false);
    assert!(
        index.has_indirect_calls(0x1180),
        "the call site lost its own function"
    );
    assert!(
        !index.has_indirect_calls(0x1030),
        "attributed to the preceding entry"
    );
    // And it lands in the same bucket the instruction's references do.
    assert_eq!(index.refs_from_function(0x1180).len(), 1);
}

/// The gcc `.cold` shape: the fragment at 0x1000 sits below its parent at
/// 0x2000 and jumps into the middle of it, so the walk decodes the parent's
/// tail from the fragment before the parent is walked. The parent's own
/// descent still counts its whole body, the fragment counts the tail it
/// reaches too, and a descent stops at the other entry's first instruction.
#[test]
fn each_entry_counts_its_own_descent_whatever_order_the_walk_claimed_it_in() {
    let fragment = [(0x1000, 1, true), (0x1001, 5, false)];
    let tail = [(0x2004, 1, true), (0x2005, 1, true), (0x2006, 1, false)];
    let head = [(0x2000, 2, true), (0x2002, 2, true)];
    let mut insns: Vec<(u64, u32, bool)> = fragment.to_vec();
    insns.extend(tail);
    insns.extend(head);
    insns.push((0x3000, 1, false));
    let st = State {
        refs: Vec::new(),
        texts: HashSet::new(),
        decoded: insns.iter().map(|&(vma, _, _)| vma).collect(),
        funcs: BTreeSet::from([0x1000, 0x2000, 0x3000]),
        indirect_call_sites: BTreeSet::new(),
        computed_jumps: BTreeSet::new(),
        flow: Some(FlowGraph {
            insns,
            jumps: vec![(0x2006, 0x3000), (0x1001, 0x2004)],
            seeds: vec![0x3000, 0x1000, 0x3000, 0x2000],
        }),
        switches: Vec::new(),
        refused: HashSet::new(),
        carry: regcarry::Tracker::default(),
        skips: Vec::new(),
    };
    let index = st.finish(BTreeMap::new(), true);
    assert_eq!(index.function_containing(0x1001), Some(0x1000));
    assert_eq!(index.function_containing(0x2004), Some(0x2000));
    assert_eq!(index.function_containing(0x3000), Some(0x3000));
    assert_eq!(
        index.function_instruction_counts(&[0x2000, 0x1000, 0x3000], usize::MAX),
        [5, 5, 1]
    );
    assert_eq!(index.function_instruction_counts(&[0x2000], 3), [3]);
    assert_eq!(
        index.function_instruction_counts(&[0x4000], usize::MAX),
        [0]
    );

    let unmeasured = import_index();
    assert_eq!(
        unmeasured.function_instruction_counts(&[0x1000], usize::MAX),
        [0]
    );
}

/// Off an alias class, unifying is exactly `refs_to`.
#[test]
fn a_plain_target_is_unaffected_by_unification() {
    let index = import_index();
    assert_eq!(index.refs_to_unified(0x1102).len(), 0);
    let direct: Vec<_> = index.refs_to(0x1030).iter().collect();
    let mut plain = import_index();
    plain.veneers.clear();
    plain.veneers_of_slot.clear();
    assert_eq!(plain.refs_to_unified(0x1030).len(), direct.len());
}

/// A section-less image is classified against its program header. With no
/// section table [`mapped_ranges`] would otherwise answer "nothing is
/// mapped", and every data operand in the image — the `LEA RDI,[0x2000]`
/// this fixture is built around — would be discarded while its control flow
/// survived.
#[test]
fn mapped_ranges_falls_back_to_load_segments_without_a_section_table() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/sectionless_x86_64"
    );
    let data = std::fs::read(path).unwrap();
    let file = object::File::parse(&*data).unwrap();
    assert!(
        file.sections().next().is_none(),
        "fixture grew a section table"
    );
    let mapped = mapped_ranges(&file);
    assert_eq!(mapped, vec![(0x1000, 0x100d), (0x2000, 0x200e)]);
    assert!(
        in_range(&mapped, 0x2000),
        "the string the LEA forms reads as unmapped"
    );
}

/// A binary search over the union answers every address exactly as the
/// pairwise rule over the raw ranges does.
#[test]
fn in_range_over_the_union_matches_the_pairwise_rule() {
    let ranges = vec![
        (0x60, 0x40),
        (0x10, 0x20),
        (0x20, 0x30),
        (0x0, 0x18),
        (0x50, 0x50),
        (0x38, 0x3c),
    ];
    let union = range_union(ranges.clone());
    assert!(union.windows(2).all(|w| w[0].1 < w[1].0), "{union:x?}");
    for vma in 0..0x70 {
        let want = ranges.iter().any(|&(lo, hi)| vma >= lo && vma < hi);
        assert_eq!(in_range(&union, vma), want, "{vma:#x}");
    }
    assert!(!in_range(&range_union(Vec::new()), 0));
}

/// The fallback is the no-section-table arm only: an image that has sections
/// is still classified against them, so the segments' coarser spans (a
/// `PT_LOAD` also covers inter-section padding and the ELF header) never
/// widen the oracle on an ordinary linked image.
#[test]
fn mapped_ranges_answers_from_the_sections_when_there_are_some() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let data = std::fs::read(path).unwrap();
    let file = object::File::parse(&*data).unwrap();
    let mapped = mapped_ranges(&file);
    assert!(!mapped.is_empty());
    let sections: Vec<(u64, u64)> = file
        .sections()
        .map(|s| (s.address(), s.address() + s.size()))
        .collect();
    for r in &mapped {
        assert!(sections.contains(r), "{r:x?} is not any section's span");
    }
    assert!(!in_range(&mapped, 0), "the ELF header read as mapped data");
}

/// GH #1376: `object` names no kind for `__DATA_CONST,__got`, and dyld maps
/// it like every other section of a loaded segment.
#[test]
fn every_section_of_a_macho_segment_is_mapped() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/gotcall_macho_arm64"
    );
    let data = std::fs::read(path).unwrap();
    let file = object::File::parse(&*data).unwrap();
    let got = file.section_by_name("__got").unwrap();
    assert_eq!(
        got.kind(),
        SectionKind::Unknown,
        "object learned the section's kind"
    );
    assert!(
        in_range(&range_union(mapped_ranges(&file)), got.address()),
        "the GOT slot reads as unmapped"
    );
}

/// `finish` collapses the `(from, to, kind)` triple: one row per site.
#[test]
fn duplicate_edges_from_one_site_collapse() {
    let mut st = State::new(&BTreeSet::from([0x1000]), false);
    st.file(0x1102, 0x1030, XrefKind::Call, "first");
    st.file(0x1102, 0x1030, XrefKind::Call, "second");
    st.file(0x1010, 0x1030, XrefKind::Jump, "");
    let index = st.finish(BTreeMap::new(), false);
    let rows = index.refs_to(0x1030);
    assert_eq!(rows.len(), 2);
    assert_eq!(rows[0].from, 0x1010);
    assert_eq!((rows[1].from, &*rows[1].instruction), (0x1102, "first"));
    assert_eq!(index.refs_from_instruction(0x1102).len(), 1);
    assert_eq!(index.refs_from_function(0x1000).len(), 2);
}
