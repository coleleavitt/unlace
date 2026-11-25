use super::*;
use unlace_base::space::AddrSpace;

/// A throwaway `(constant, register, unique)` space triple, in the idiom
/// [`super::xrefs`]' own tests use. The unique space matters: an address a
/// real instruction computes lands in a temporary first, and only what
/// reaches a *register* is address-taken.
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

fn ctx(reg: &Rc<AddrSpace>) -> Ctx {
    Ctx {
        sp: vn(reg, 0x10, 4),
        data_index: Some(2),
    }
}

fn op(opcode: OpCode, out: Option<VarnodeData>, ins: Vec<VarnodeData>) -> FullOp {
    FullOp { opcode, out, ins }
}

const MAPPED: [(u64, u64); 2] = [(0x8048000, 0x8049200), (0x804a000, 0x804a400)];

#[test]
fn a_base_relative_lea_is_a_data_reference() {
    let (k, r, _u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    // EAX = EBX + (-0x1119)
    let ops = [op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&r, 0, 4)),
        vec![vn(&r, 0xc, 4), vn(&k, 0xffffeee7, 4)],
    )];
    let got = refs_through_base(&ops, &base, &ctx(&r), &MAPPED, 0);
    assert_eq!(got, vec![(0x8049127, XrefKind::Data)]);
}

/// GH #1364: an address composed through the base is one below the
/// `checkOperands` floor too (ld.lld puts a PIE's `.rodata` in its first
/// page); the same value as a plain immediate is a number.
#[test]
fn a_base_relative_address_below_the_floor_is_a_reference() {
    let (k, r, _u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x3208,
    };
    let low = [(0x170, 0x200), (0x3208, 0x3214)];
    // EAX = EBX + (-0x3088)
    let lea = [op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&r, 0, 4)),
        vec![vn(&r, 0xc, 4), vn(&k, 0xffffcf78, 4)],
    )];
    assert_eq!(
        refs_through_base(&lea, &base, &ctx(&r), &low, 0x119e),
        vec![(0x180, XrefKind::Data)]
    );
    let mov = [op(
        OpCode::CPUI_COPY,
        Some(vn(&r, 0, 4)),
        vec![vn(&k, 0x180, 4)],
    )];
    assert!(refs_through_base(&mov, &base, &ctx(&r), &low, 0x119e).is_empty());
}

#[test]
fn a_base_relative_load_is_a_read_and_a_store_a_write() {
    let (k, r, u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    let tmp = vn(&u, 0x80, 4);
    let addr = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(tmp.clone()),
            vec![vn(&r, 0xc, 4), vn(&k, 0xa8, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&r, 0, 4)),
            vec![vn(&k, 2, 4), tmp.clone()],
        ),
    ];
    assert_eq!(
        refs_through_base(&addr, &base, &ctx(&r), &MAPPED, 0),
        vec![(0x804a2e8, XrefKind::Read)]
    );
    let store = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(tmp.clone()),
            vec![vn(&r, 0xc, 4), vn(&k, 0xa8, 4)],
        ),
        op(
            OpCode::CPUI_STORE,
            None,
            vec![vn(&k, 2, 4), tmp, vn(&k, 0xa, 1)],
        ),
    ];
    assert_eq!(
        refs_through_base(&store, &base, &ctx(&r), &MAPPED, 0),
        vec![(0x804a2e8, XrefKind::Write)]
    );
}

#[test]
fn an_indexed_access_reports_nothing_rather_than_its_array_base() {
    let (k, r, u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    let tmp = vn(&u, 0x80, 4);
    // $tmp = EBX + 0x87; $tmp = $tmp + EDX (unknown); AL = *$tmp
    let ops = vec![
        op(
            OpCode::CPUI_INT_ADD,
            Some(tmp.clone()),
            vec![vn(&r, 0xc, 4), vn(&k, 0x87, 4)],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(tmp.clone()),
            vec![tmp.clone(), vn(&r, 0x8, 4)],
        ),
        op(
            OpCode::CPUI_LOAD,
            Some(vn(&r, 0, 1)),
            vec![vn(&k, 2, 4), tmp],
        ),
    ];
    // The array base is computed into a temporary, which is not something a
    // later instruction can read, so nothing at all is claimed: the address
    // this instruction actually forms is unknown.
    assert!(refs_through_base(&ops, &base, &ctx(&r), &MAPPED, 0).is_empty());
}

#[test]
fn a_partial_write_to_the_base_invalidates_the_whole_register() {
    let (k, r, _u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    // BL = 0; EAX = EBX + (-0x1119)  -- EBX is no longer known.
    let ops = vec![
        op(OpCode::CPUI_COPY, Some(vn(&r, 0xc, 1)), vec![vn(&k, 0, 1)]),
        op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&r, 0, 4)),
            vec![vn(&r, 0xc, 4), vn(&k, 0xffffeee7, 4)],
        ),
    ];
    assert!(refs_through_base(&ops, &base, &ctx(&r), &MAPPED, 0).is_empty());
}

#[test]
fn an_unmapped_or_small_result_is_not_a_reference() {
    let (k, r, _u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    // EAX = EBX - 0x804a000 -- lands at 0x240, below the address floor.
    let ops = [op(
        OpCode::CPUI_INT_SUB,
        Some(vn(&r, 0, 4)),
        vec![vn(&r, 0xc, 4), vn(&k, 0x804a000, 4)],
    )];
    assert!(refs_through_base(&ops, &base, &ctx(&r), &MAPPED, 0).is_empty());
}

/// A register a call leaves holding its fall-through is the return address;
/// a `lea` that lands on the instruction after it formed that address.
#[test]
fn a_calls_own_return_address_is_not_a_reference() {
    let (k, r, _u) = spaces();
    let base = PicBase {
        reg: vn(&r, 0xc, 4),
        value: 0x804a240,
    };
    let ops = [
        op(
            OpCode::CPUI_COPY,
            Some(vn(&r, 0, 4)),
            vec![vn(&k, 0x8048ad9, 4)],
        ),
        op(OpCode::CPUI_CALL, None, vec![vn(&r, 0x100, 4)]),
    ];
    assert!(refs_through_base(&ops, &base, &ctx(&r), &MAPPED, 0x8048ad9).is_empty());
    // EAX = EBX + (-0x1767), the instruction's own fall-through.
    let lea = [op(
        OpCode::CPUI_INT_ADD,
        Some(vn(&r, 0, 4)),
        vec![vn(&r, 0xc, 4), vn(&k, 0xffffe899, 4)],
    )];
    assert_eq!(
        refs_through_base(&lea, &base, &ctx(&r), &MAPPED, 0x8048ad9),
        vec![(0x8048ad9, XrefKind::Data)]
    );
}

#[test]
fn the_stack_carries_a_pushed_return_address_back_into_a_register() {
    let (k, r, u) = spaces();
    let c = ctx(&r);
    let mut m = Machine::default();
    m.seed(&c.sp, Val::Stack(0));
    let tmp = vn(&u, 0x80, 4);
    // push 0x80489f4:  $tmp = 0x80489f4; ESP = ESP - 4; *ESP = $tmp
    for o in [
        op(
            OpCode::CPUI_COPY,
            Some(tmp.clone()),
            vec![vn(&k, 0x80489f4, 4)],
        ),
        op(
            OpCode::CPUI_INT_SUB,
            Some(c.sp.clone()),
            vec![c.sp.clone(), vn(&k, 4, 4)],
        ),
        op(
            OpCode::CPUI_STORE,
            None,
            vec![vn(&k, 2, 4), c.sp.clone(), tmp.clone()],
        ),
    ] {
        m.apply(&o, &c, 0x80489f4);
    }
    // pop ebx: $tmp = *ESP; ESP = ESP + 4; EBX = $tmp
    for o in [
        op(
            OpCode::CPUI_LOAD,
            Some(tmp.clone()),
            vec![vn(&k, 2, 4), c.sp.clone()],
        ),
        op(
            OpCode::CPUI_INT_ADD,
            Some(c.sp.clone()),
            vec![c.sp.clone(), vn(&k, 4, 4)],
        ),
        op(OpCode::CPUI_COPY, Some(vn(&r, 0xc, 4)), vec![tmp.clone()]),
    ] {
        m.apply(&o, &c, 0x80489f5);
    }
    // add ebx,0x184c
    m.apply(
        &op(
            OpCode::CPUI_INT_ADD,
            Some(vn(&r, 0xc, 4)),
            vec![vn(&r, 0xc, 4), vn(&k, 0x184c, 4)],
        ),
        &c,
        0x80489fb,
    );
    assert_eq!(holder_of(&m, &c, 0x804a240).map(|v| v.offset), Some(0xc));
}

#[test]
fn a_plain_constant_move_cannot_establish_a_base() {
    let (k, r, _u) = spaces();
    let c = ctx(&r);
    let mut m = Machine::default();
    m.apply(
        &op(
            OpCode::CPUI_COPY,
            Some(vn(&r, 0xc, 4)),
            vec![vn(&k, 0x804a240, 4)],
        ),
        &c,
        0x8048000,
    );
    assert_eq!(m.konst(&vn(&r, 0xc, 4)), Some((0x804a240, false)));
    assert!(
        holder_of(&m, &c, 0x804a240).is_none(),
        "untainted constant established a base"
    );
}

#[test]
fn sign_extension_reads_a_negative_displacement() {
    assert_eq!(sign_extend(0xffffeee7, 4), -0x1119);
    assert_eq!(sign_extend(0x87, 4), 0x87);
    assert_eq!(sign_extend(0xfc, 1), -4);
}
