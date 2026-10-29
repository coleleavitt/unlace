use std::collections::BTreeSet;

use smallvec::smallvec;
use unlace_ir::mem_object::{DataItems, MemObject};
use unlace_ir::ssa::{PrimitiveType, SsaFunction, VarnodeSlot, build_ssa};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{ArchId, BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

use super::ObjectWidenPass;
use super::access::{AccessMap, ObjectAccess};
use super::synthesize::synthesize;
use crate::pass::Pass;

fn acc(offset: u64, stride: u64, size: u64, ty: PrimitiveType) -> ObjectAccess {
    ObjectAccess {
        offset,
        stride,
        size,
        ty,
    }
}

fn dword(offset: u64, stride: u64) -> ObjectAccess {
    acc(offset, stride, 4, PrimitiveType::UnsignedInt(4))
}

fn set(accesses: &[ObjectAccess]) -> BTreeSet<ObjectAccess> {
    accesses.iter().copied().collect()
}

fn field(name: &str, offset: u64, ty: Type) -> StructFieldType {
    StructFieldType {
        name: name.to_string(),
        ty,
        offset,
    }
}

fn bytes(n: u64) -> Type {
    Type::Array {
        element: Box::new(Type::uint(1)),
        size: Some(n),
    }
}

fn array(element: Type, size: Option<u64>) -> Type {
    Type::Array {
        element: Box::new(element),
        size,
    }
}

// ---- recording rule (sub_27E790) ----

#[test]
fn record_keeps_aligned_accesses_and_tracks_every_end() {
    let mut map = AccessMap::default();
    let obj = MemObject::Global(0x4000);
    map.record(obj, dword(0, 0));
    map.record(obj, dword(8, 4));
    // Misaligned for its size: not kept, but still extends the object.
    map.record(obj, dword(6, 0));
    // An index stride smaller than the access is not an element step.
    map.record(obj, acc(16, 2, 4, PrimitiveType::UnsignedInt(4)));
    let recorded = map.get(obj).expect("object recorded");
    assert_eq!(recorded.accesses, set(&[dword(0, 0), dword(8, 4)]));
    assert_eq!(recorded.max_end, 20);
}

// ---- synthesis (sub_27AE10) ----

#[test]
fn uniform_accesses_become_an_array_of_the_best_element_type() {
    let accesses = set(&[dword(0, 4), acc(8, 0, 4, PrimitiveType::Int(4))]);
    let ty = synthesize(&accesses, Some(64), true, "obj");
    assert_eq!(ty, Some(array(Type::int(4), Some(16))));
}

#[test]
fn uniform_accesses_of_unknown_extent_become_an_open_array() {
    let ty = synthesize(&set(&[dword(0, 4)]), None, true, "obj");
    assert_eq!(ty, Some(array(Type::uint(4), None)));
}

#[test]
fn common_period_folds_into_an_array_of_padded_structs() {
    // struct { int a; short b; long c; } recs[8]: a at +0, b at +4, c at +8.
    let accesses = set(&[
        acc(0, 16, 4, PrimitiveType::Int(4)),
        acc(4, 16, 2, PrimitiveType::Int(2)),
        acc(8, 16, 8, PrimitiveType::UnsignedInt(8)),
    ]);
    let ty = synthesize(&accesses, Some(128), true, "obj_recs").expect("array of structs");
    let element = Type::Struct {
        name: "obj_recs".to_string(),
        fields: vec![
            field("fld_0", 0, Type::int(4)),
            field("fld_1", 4, Type::int(2)),
            field("fld_2", 6, bytes(2)),
            field("fld_3", 8, Type::uint(8)),
        ],
    };
    assert_eq!(ty, array(element, Some(8)));
}

#[test]
fn period_pads_the_struct_tail() {
    // Only the first field of a 12-byte record is read; the wider second
    // field forces a struct.
    let accesses = set(&[dword(0, 12), acc(4, 12, 2, PrimitiveType::UnsignedInt(2))]);
    let ty = synthesize(&accesses, Some(36), true, "obj").expect("array of structs");
    let Type::Array { element, size } = ty else {
        panic!("expected array, got {ty:?}");
    };
    assert_eq!(size, Some(3));
    let Type::Struct { fields, .. } = *element else {
        panic!("expected struct element");
    };
    assert_eq!(
        fields,
        vec![
            field("fld_0", 0, Type::uint(4)),
            field("fld_1", 4, Type::uint(2)),
            field("fld_2", 6, bytes(6)),
        ]
    );
}

#[test]
fn strides_that_do_not_divide_each_other_have_no_period() {
    let accesses = set(&[dword(0, 12), acc(2, 8, 2, PrimitiveType::UnsignedInt(2))]);
    assert_eq!(synthesize(&accesses, Some(48), true, "obj"), None);
}

#[test]
fn plain_layout_names_members_in_order_and_fills_holes() {
    let accesses = set(&[
        acc(0, 0, 4, PrimitiveType::Int(4)),
        acc(8, 0, 8, PrimitiveType::UnsignedInt(8)),
        acc(16, 0, 1, PrimitiveType::UnsignedInt(1)),
    ]);
    let ty = synthesize(&accesses, Some(24), true, "obj_g");
    assert_eq!(
        ty,
        Some(Type::Struct {
            name: "obj_g".to_string(),
            fields: vec![
                field("fld_0", 0, Type::int(4)),
                field("fld_1", 4, bytes(4)),
                field("fld_2", 8, Type::uint(8)),
                field("fld_3", 16, Type::uint(1)),
            ],
        })
    );
}

#[test]
fn plain_layout_drops_a_member_that_overlaps_the_previous_one() {
    let accesses = set(&[
        acc(0, 0, 8, PrimitiveType::UnsignedInt(8)),
        acc(4, 0, 2, PrimitiveType::UnsignedInt(2)),
        acc(8, 0, 1, PrimitiveType::UnsignedInt(1)),
    ]);
    let Some(Type::Struct { fields, .. }) = synthesize(&accesses, Some(9), true, "obj") else {
        panic!("expected a struct");
    };
    let offsets: Vec<u64> = fields.iter().map(|f| f.offset).collect();
    assert_eq!(offsets, vec![0, 8]);
}

#[test]
fn concrete_type_beats_a_size_only_one_at_the_same_offset() {
    let accesses = set(&[
        acc(0, 0, 8, PrimitiveType::UnsignedInt(8)),
        acc(0, 0, 4, PrimitiveType::Float),
        acc(8, 0, 2, PrimitiveType::UnsignedInt(2)),
    ]);
    let Some(Type::Struct { fields, .. }) = synthesize(&accesses, Some(10), true, "obj") else {
        panic!("expected a struct");
    };
    assert_eq!(fields[0].ty, Type::Primitive(PrimitiveType::Float));
    assert_eq!(fields[1], field("fld_1", 4, bytes(4)));
}

#[test]
fn a_single_scalar_member_is_not_a_struct() {
    // The 2-byte read inside the 8-byte one is dropped, leaving one member.
    let accesses = set(&[
        acc(0, 0, 8, PrimitiveType::UnsignedInt(8)),
        acc(4, 0, 2, PrimitiveType::UnsignedInt(2)),
    ]);
    assert_eq!(synthesize(&accesses, Some(8), true, "obj"), None);
}

// ---- the pass over SSA ----

const RAM: u64 = 1;
const DATA: u64 = 0x404000;
const DATA_END: u64 = 0x405000;

fn con(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

fn ram() -> Varnode {
    con(RAM, 8)
}

fn load(out: Varnode, addr: Varnode, at: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Load, out, smallvec![ram(), addr], at)
}

fn store(addr: Varnode, value: Varnode, at: u64) -> IrInsn {
    IrInsn::without_output(IrOp::Store, smallvec![ram(), addr, value], at)
}

fn binop(op: IrOp, out: Varnode, lhs: Varnode, rhs: Varnode, at: u64) -> IrInsn {
    IrInsn::with_output(op, out, smallvec![lhs, rhs], at)
}

fn ret(at: u64) -> IrInsn {
    IrInsn::without_output(IrOp::Return, smallvec![], at)
}

fn ssa_of(blocks: Vec<BasicBlock>, items: DataItems) -> SsaFunction {
    let mut function = Function::new("f", blocks[0].id, 0x1000);
    for block in blocks {
        function.insert_block(block);
    }
    let mut ssa = build_ssa(function);
    ssa.arch = ArchId::X86_64;
    ssa.data_items = items;
    ssa
}

fn single_block(insns: Vec<IrInsn>, items: DataItems) -> SsaFunction {
    let mut bb = BasicBlock::new(BlockId(0));
    bb.insns = insns;
    ssa_of(vec![bb], items)
}

fn data(items: &[(u64, u64)]) -> DataItems {
    let mut data = DataItems::default();
    data.add_region(DATA, DATA_END);
    for &(start, size) in items {
        data.add_item(start, size);
    }
    data
}

fn run(ssa: &mut SsaFunction) {
    ObjectWidenPass.run(ssa).expect("object widen");
}

#[test]
fn indexed_global_becomes_an_array_sized_by_its_symbol() {
    // load g_arr[i]: *(i * 4 + 0x404060), g_arr is a 128-byte object.
    let i = Varnode::reg(0x38, 8);
    let scaled = Varnode::unique(0, 8);
    let addr = Varnode::unique(8, 8);
    let mut ssa = single_block(
        vec![
            binop(IrOp::IntMult, scaled, i, con(4, 8), 0x1000),
            binop(IrOp::IntAdd, addr, scaled, con(0x404060, 8), 0x1004),
            load(Varnode::reg(0, 4), addr, 0x1008),
            ret(0x100c),
        ],
        data(&[(0x404060, 128)]),
    );
    run(&mut ssa);
    assert_eq!(
        ssa.object_types.get(&MemObject::Global(0x404060)),
        Some(&array(Type::uint(4), Some(32)))
    );
}

#[test]
fn pointer_induction_variable_over_records_becomes_an_array_of_structs() {
    // p = &recs; do { a = p[0]; b = *(short *)(p + 4); c = *(long *)(p + 8);
    // p += 16; } while (...)
    let p = Varnode::reg(0x10, 8);
    let t4 = Varnode::unique(0, 8);
    let t8 = Varnode::unique(8, 8);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::Copy,
        p,
        smallvec![con(0x404040, 8)],
        0x1000,
    ));
    bb0.successors.push(BlockId(1));

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns = vec![
        load(Varnode::reg(0, 4), p, 0x1010),
        binop(IrOp::IntAdd, t4, p, con(4, 8), 0x1014),
        load(Varnode::reg(8, 2), t4, 0x1018),
        binop(IrOp::IntAdd, t8, p, con(8, 8), 0x101c),
        load(Varnode::reg(0x18, 8), t8, 0x1020),
        binop(IrOp::IntAdd, p, p, con(16, 8), 0x1024),
        IrInsn::without_output(IrOp::Cbranch, smallvec![con(0x1010, 8), p], 0x1028),
    ];
    bb1.successors.push(BlockId(1));
    bb1.successors.push(BlockId(2));

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ret(0x1030));

    let mut ssa = ssa_of(vec![bb0, bb1, bb2], data(&[(0x404040, 128)]));
    run(&mut ssa);
    let element = Type::Struct {
        name: "obj_404040".to_string(),
        fields: vec![
            field("fld_0", 0, Type::uint(4)),
            field("fld_1", 4, Type::uint(2)),
            field("fld_2", 6, bytes(2)),
            field("fld_3", 8, Type::uint(8)),
        ],
    };
    assert_eq!(
        ssa.object_types.get(&MemObject::Global(0x404040)),
        Some(&array(element, Some(8)))
    );
}

#[test]
fn constant_accesses_inside_a_known_item_become_a_fld_struct() {
    let mut ssa = single_block(
        vec![
            store(con(0x404140, 8), con(1, 4), 0x1000),
            store(con(0x404148, 8), con(2, 8), 0x1004),
            store(con(0x404150, 8), con(3, 1), 0x1008),
            ret(0x100c),
        ],
        data(&[(0x404140, 24)]),
    );
    run(&mut ssa);
    let Some(Type::Struct { name, fields }) = ssa.object_types.get(&MemObject::Global(0x404140))
    else {
        panic!("expected a struct, got {:?}", ssa.object_types);
    };
    assert_eq!(name, "obj_404140");
    let names: Vec<&str> = fields.iter().map(|f| f.name.as_str()).collect();
    assert_eq!(names, ["fld_0", "fld_1", "fld_2", "fld_3"]);
    assert_eq!(fields[1].ty, bytes(4));
}

#[test]
fn scalar_globals_outside_known_items_stay_untyped() {
    let mut ssa = single_block(
        vec![
            store(con(0x404140, 8), con(1, 4), 0x1000),
            store(con(0x404148, 8), con(2, 8), 0x1004),
            ret(0x1008),
        ],
        data(&[]),
    );
    run(&mut ssa);
    assert!(ssa.object_types.is_empty(), "{:?}", ssa.object_types);
}

#[test]
fn indexed_stride_merges_field_bases_of_a_loose_global() {
    // Stripped: no item. recs[i].a and recs[i].c addressed as
    // `i * 16 + 0x404040` and `i * 16 + 0x404048`.
    let i = Varnode::reg(0x38, 8);
    let scaled = Varnode::unique(0, 8);
    let a = Varnode::unique(8, 8);
    let c = Varnode::unique(0x10, 8);
    let mut ssa = single_block(
        vec![
            binop(IrOp::IntLeft, scaled, i, con(4, 1), 0x1000),
            binop(IrOp::IntAdd, a, scaled, con(0x404040, 8), 0x1004),
            load(Varnode::reg(0, 4), a, 0x1008),
            binop(IrOp::IntAdd, c, scaled, con(0x404048, 8), 0x100c),
            load(Varnode::reg(8, 8), c, 0x1010),
            ret(0x1014),
        ],
        data(&[]),
    );
    run(&mut ssa);
    let Some(Type::Array { element, size }) = ssa.object_types.get(&MemObject::Global(0x404040))
    else {
        panic!("expected an array, got {:?}", ssa.object_types);
    };
    assert_eq!(*size, None, "nothing bounds a stripped global");
    let Type::Struct { fields, .. } = &**element else {
        panic!("expected struct elements");
    };
    let layout: Vec<(u64, &Type)> = fields.iter().map(|f| (f.offset, &f.ty)).collect();
    assert_eq!(
        layout,
        vec![(0, &Type::uint(4)), (4, &bytes(4)), (8, &Type::uint(8))]
    );
    assert_eq!(ssa.object_types.len(), 1);
}

#[test]
fn indexed_frame_slot_grows_up_to_the_next_frame_object() {
    // buf[i] = v at rsp - 0x50 + i * 4; a separate slot at rsp - 8.
    let rsp = Varnode::reg(32, 8);
    let i = Varnode::reg(0x38, 8);
    let scaled = Varnode::unique(0, 8);
    let base = Varnode::unique(8, 8);
    let addr = Varnode::unique(0x10, 8);
    let canary = Varnode::unique(0x18, 8);
    let mut ssa = single_block(
        vec![
            binop(IrOp::IntMult, scaled, i, con(4, 8), 0x1000),
            binop(IrOp::IntAdd, base, rsp, scaled, 0x1004),
            binop(IrOp::IntAdd, addr, base, con((-0x50i64) as u64, 8), 0x1008),
            store(addr, con(7, 4), 0x100c),
            binop(IrOp::IntAdd, canary, rsp, con((-8i64) as u64, 8), 0x1010),
            store(canary, con(0, 8), 0x1014),
            ret(0x1018),
        ],
        DataItems::default(),
    );
    run(&mut ssa);
    assert_eq!(
        ssa.object_types.get(&MemObject::Frame(-0x50)),
        Some(&array(Type::uint(4), Some(18)))
    );
    assert!(!ssa.object_types.contains_key(&MemObject::Frame(-8)));
}

#[test]
fn a_pair_of_typed_integers_is_not_an_array() {
    // An 8-byte item read as two indexed ints is more likely two scalars.
    let i = Varnode::reg(0x38, 8);
    let scaled = Varnode::unique(0, 8);
    let addr = Varnode::unique(8, 8);
    let out = Varnode::reg(0, 4);
    let mut ssa = single_block(
        vec![
            binop(IrOp::IntMult, scaled, i, con(4, 8), 0x1000),
            binop(IrOp::IntAdd, addr, scaled, con(0x404060, 8), 0x1004),
            load(out, addr, 0x1008),
            ret(0x100c),
        ],
        data(&[(0x404060, 8)]),
    );
    let out_sv = *ssa
        .var_map
        .get(&(BlockId(0), 2, VarnodeSlot::Output))
        .expect("load output");
    ssa.var_types.insert(out_sv, PrimitiveType::Int(4));
    run(&mut ssa);
    assert!(ssa.object_types.is_empty(), "{:?}", ssa.object_types);
}

#[test]
fn constant_addresses_need_a_data_region() {
    let i = Varnode::reg(0x38, 8);
    let scaled = Varnode::unique(0, 8);
    let addr = Varnode::unique(8, 8);
    let mut ssa = single_block(
        vec![
            binop(IrOp::IntMult, scaled, i, con(4, 8), 0x1000),
            binop(IrOp::IntAdd, addr, scaled, con(0x404060, 8), 0x1004),
            load(Varnode::reg(0, 4), addr, 0x1008),
            ret(0x100c),
        ],
        DataItems::default(),
    );
    run(&mut ssa);
    assert!(ssa.object_types.is_empty(), "{:?}", ssa.object_types);
}
