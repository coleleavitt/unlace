//! Tests moved out of `fspec` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `fspec` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::dtype::{
        Datatype, TypeFactory, metatype2typeclass, type_class, type_metatype,
    };
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::restartlog::{RestartLog, UnlaceRestartReason};
    pub(super) use unlace_base::address::{Address, RangeList};
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::{
        AddrSpace, AddrSpaceManager, JoinRecord, VarnodeStorage, spacetype,
    };
    pub(super) use unlace_base::types::{Wrap, int4, uint4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
    pub(super) use unlace_num::pcoderaw::VarnodeData;
}
use crate::dtype::{Datatype, TypeFactory, type_class, type_metatype};
use crate::fspec::*;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;
use crate::restartlog::RestartLog;
use crate::varnode::DefOpInfo;
use module_scope::*;
use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::{AddrSpace, AddrSpaceManager, spacetype};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

// Tests for the parameter-recovery foundation (`fspec.rs`, item
// `w6-s4-fspec-1`): ParamEntry containment matrices, ParamTrial sorting
// parity, and ParamListStandard assignment/fillin walks for synthetic
// prototypes.
//
// Address spaces are built directly with `AddrSpace::new` (no manager wiring
// needed for the non-float-extension paths), and parameter entries with the
// `ParamEntry::seed` builder hook that runs the real post-decode resolution
// chain.

use std::rc::Rc;

/// A little-endian "register" space at index 3.
fn reg_space_le() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false, // little endian
        4,
        1,
        3,
        0,
        0,
        0,
    ))
}

/// A big-endian "register" space at index 4.
fn reg_space_be() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "registerBE",
        true, // big endian
        4,
        1,
        4,
        0,
        0,
        0,
    ))
}

/// A little-endian stack (spacebase) space at index 5.
fn stack_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_SPACEBASE,
        "stack",
        false,
        4,
        1,
        5,
        0,
        0,
        0,
    ))
}

fn addr(spc: &Rc<AddrSpace>, off: u64) -> Address {
    Address::new(Rc::clone(spc), off)
}

/// Build an exclusion ParamEntry (alignment 0) at the given offset/size.
fn excl_entry(
    grp: int4,
    space: &Rc<AddrSpace>,
    base: u64,
    size: int4,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(space),
        base,
        size,
        1, // minsize
        0, // alignment == size signals exclusion via the seed adjust below; pass 0 here
        0, // flags
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed exclusion entry")
}

/// Build a stack resource ParamEntry with the given alignment.
fn stack_entry(
    grp: int4,
    space: &Rc<AddrSpace>,
    base: u64,
    size: int4,
    align: int4,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(space),
        base,
        size,
        1,
        align,
        0,
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed stack entry")
}

// =========================================================================
// ParamTrial sorting parity
// =========================================================================

/// Build a 2-entry exclusion model (groups 0 and 1) for sorting tests.
fn two_excl_model() -> (ParamListStandard, Rc<AddrSpace>) {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    let e0 = excl_entry(0, &reg, 0x10, 4, &[], &mgr);
    model.push_entry(e0);
    let e1 = excl_entry(1, &reg, 0x20, 4, model.get_entry(), &mgr);
    model.push_entry(e1);
    model.finish_decode();
    (model, reg)
}

// =========================================================================
// ParamListStandard find / characterize / fillin walks
// =========================================================================

/// A 3-entry register model: groups 0,1,2 at 0x10,0x20,0x30 (4 bytes each).
fn three_reg_model() -> (ParamListStandard, Rc<AddrSpace>) {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    let e0 = excl_entry(0, &reg, 0x10, 4, &[], &mgr);
    model.push_entry(e0);
    let e1 = excl_entry(1, &reg, 0x20, 4, model.get_entry(), &mgr);
    model.push_entry(e1);
    let e2 = excl_entry(2, &reg, 0x30, 4, model.get_entry(), &mgr);
    model.push_entry(e2);
    model.finish_decode();
    (model, reg)
}

// =========================================================================
// ParamListStandard assignMap (assignment walk for synthetic prototypes)
// =========================================================================

/// A `TypeFactory` stub that panics on any reach — the input-list `assignMap`
/// path with no model rules never calls it.
struct PanicTypeFactory;

macro_rules! unreached {
    () => {
        panic!("TypeFactory should not be reached in this test")
    };
}

#[allow(unused_variables)]
impl TypeFactory for PanicTypeFactory {
    fn get_size_of_int(&self) -> int4 {
        unreached!()
    }
    fn get_size_of_long(&self) -> int4 {
        unreached!()
    }
    fn get_size_of_char(&self) -> int4 {
        unreached!()
    }
    fn get_size_of_wchar(&self) -> int4 {
        unreached!()
    }
    fn get_size_of_pointer(&self) -> int4 {
        unreached!()
    }
    fn get_size_of_alt_pointer(&self) -> int4 {
        unreached!()
    }
    fn get_alignment(&self, _size: u32) -> UnlaceResult<int4> {
        unreached!()
    }
    fn get_primitive_align_size(&self, _size: u32) -> UnlaceResult<int4> {
        unreached!()
    }
    fn get_type_void(&self) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_base_no_char(&self, _s: int4, _m: type_metatype) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_base(&self, _s: int4, _m: type_metatype) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_base_named(&self, _s: int4, _m: type_metatype, _n: &str) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_char(&self, _s: int4) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_code(&self) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer_strip_array(
        &self,
        _s: int4,
        _pt: Rc<Datatype>,
        _ws: u32,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer(
        &self,
        _s: int4,
        _pt: Rc<Datatype>,
        _ws: u32,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer_named(
        &self,
        _s: int4,
        _pt: Rc<Datatype>,
        _ws: u32,
        _n: &str,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn resize_pointer(&self, _ptr: Rc<Datatype>, _new_size: int4) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer_rel(
        &self,
        _parent_ptr: Rc<Datatype>,
        _ptr_to: Rc<Datatype>,
        _off: int4,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer_rel_full(
        &self,
        _sz: int4,
        _parent: Rc<Datatype>,
        _ptr_to: Rc<Datatype>,
        _ws: int4,
        _off: int4,
        _nm: &str,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_pointer_with_space(
        &self,
        _ptr_to: Rc<Datatype>,
        _spc: Rc<AddrSpace>,
        _nm: &str,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_array(&self, _as_: int4, _ao: Rc<Datatype>) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_struct(&self, _n: &str) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_partial_struct(
        &self,
        _contain: Rc<Datatype>,
        _off: int4,
        _sz: int4,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_union(&self, _n: &str) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_partial_union(
        &self,
        _contain: Rc<Datatype>,
        _off: int4,
        _sz: int4,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_partial_enum(
        &self,
        _contain: Rc<Datatype>,
        _off: int4,
        _sz: int4,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_enum(&self, _n: &str) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_type_spacebase(
        &self,
        _id: Rc<AddrSpace>,
        _addr: &Address,
    ) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn resize_integer(&self, _ct: Rc<Datatype>, _new_size: int4) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
    fn get_exact_piece(
        &self,
        _ct: Rc<Datatype>,
        _offset: int4,
        _size: int4,
    ) -> UnlaceResult<Option<Rc<Datatype>>> {
        unreached!()
    }
    fn find_by_name(&self, _n: &str) -> UnlaceResult<Option<Rc<Datatype>>> {
        unreached!()
    }
    fn concretize(&self, _ct: Rc<Datatype>) -> UnlaceResult<Rc<Datatype>> {
        unreached!()
    }
}

/// A 4-byte general-purpose integer data-type.
fn int4_type() -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(4, 4, type_metatype::TYPE_INT))
}

/// A `register` space (addr_size 8) usable as the default data space, plus the
/// constant/unique spaces a `TypeFactoryImpl`-backed pointer build needs.
fn manager_with_default_data_space() -> (AddrSpaceManager, Rc<AddrSpace>) {
    use unlace_base::space::{ConstantSpace, UniqueSpace};
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let reg = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false, // little endian
        8,     // addr_size — the hidden-return pointer size
        1,     // word_size
        2,     // index
        0,
        0,
        0,
    ));
    m.insert_space(Rc::clone(&reg)).unwrap();
    m.set_default_code_space(2).unwrap();
    m.set_default_data_space(2).unwrap();
    (m, reg)
}

/// A `ParamListStandardOut` whose lone 8-byte register entry cannot hold a
/// 24-byte return value (but CAN hold the 8-byte hidden pointer), so `assignMap`
/// falls through to the hidden-return path.
fn single_small_out_model(reg: &Rc<AddrSpace>, mgr: &AddrSpaceManager) -> ParamListStandard {
    let mut model = ParamListStandard::new(ParamListKind::StandardOut);
    let e0 = excl_entry(0, reg, 0x10, 8, &[], mgr);
    model.push_entry(e0);
    model.finish_decode();
    model
}

// =========================================================================
// fspec-2: ProtoModel / ScoreProtoModel / ProtoModelMerged
// =========================================================================

fn vdata(spc: &Rc<AddrSpace>, off: u64, sz: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(spc)),
        offset: off,
        size: sz,
    }
}

/// Build a standard ProtoModel with two int register entries (groups 0/1 at
/// 0x10/0x20) for input and one int register at 0x10 for output.
fn three_reg_proto_model(mgr: &AddrSpaceManager, reg: &Rc<AddrSpace>) -> ProtoModel {
    let mut model = ProtoModel::new(mgr);
    model.build_param_list("standard").unwrap();
    model.set_name("__cdecl");
    {
        let input = model.input_mut();
        input.push_entry(excl_entry(0, reg, 0x10, 4, &[], mgr));
        let e1 = excl_entry(1, reg, 0x20, 4, input.get_entry(), mgr);
        input.push_entry(e1);
        input.finish_decode();
    }
    {
        let output = model.output_mut();
        output.push_entry(excl_entry(0, reg, 0x10, 4, &[], mgr));
        output.finish_decode();
    }
    model
}

// =========================================================================
// fspec-3: FuncCallSpecs
// =========================================================================

use crate::context::{ArchContext, OpId, TypeOp, VarnodeId};

/// A manager carrying const / unique / ram (code) / stack (spacebase) spaces,
/// like the real architecture wiring the call-site logic walks.
fn fcs_manager() -> AddrSpaceManager {
    use unlace_base::space::{ConstantSpace, UniqueSpace};
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        unlace_base::space::addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    // A spacebase (stack) space at index 3.
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_SPACEBASE,
        "stack",
        false,
        8,
        1,
        3,
        0,
        1,
        1,
    )))
    .unwrap();
    // The fspec space, so deindirect's CALLIND->CALL rewrite can build the
    // call-spec annotation Varnode (newVarnodeCallSpecs).
    m.insert_space(Rc::new(unlace_base::space::FspecSpace::new(4)))
        .unwrap();
    m.set_default_code_space(2).unwrap();
    m
}

fn fcs_fd() -> Funcdata {
    let glb = Rc::new(ArchContext::new(fcs_manager()));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(ram, 0x1000);
    Funcdata::new("caller", "caller", glb, entry, 0x10000000, 0x40).unwrap()
}

fn fcs_ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn fcs_stack(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("stack").unwrap())
}

fn fcs_const(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space(0).unwrap())
}

fn fcs_new_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let ram = fcs_ram(fd);
    let op = fd.new_op(inputs, Address::new(ram, off));
    let flags = if opc == OpCode::CPUI_CALL || opc == OpCode::CPUI_CALLIND {
        pcodeop_flags::call
    } else {
        0
    };
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, flags, format!("{opc:?}")));
    op
}

/// A varnode in `space` at `off`/`size` defined by `op` (sets `written`).
fn fcs_out(fd: &mut Funcdata, op: OpId, space: Rc<AddrSpace>, off: u64, size: int4) -> VarnodeId {
    let seq = fd.obank().get(op).unwrap().get_seq_num().clone();
    let def = DefOpInfo {
        id: op,
        seqnum: seq,
    };
    let vn = {
        let mut noop = |_b: &mut crate::varnode::VarnodeBank,
                        _o: VarnodeId,
                        _n: VarnodeId|
         -> UnlaceResult<()> { panic!("collision") };
        fd.vbank_mut()
            .create_def(
                size,
                Address::new(space, off),
                Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN)),
                def,
                &mut noop,
            )
            .unwrap()
    };
    fd.obank_mut().get_mut(op).unwrap().set_output(Some(vn));
    vn
}

fn fcs_const_vn(fd: &mut Funcdata, val: u64, size: int4) -> VarnodeId {
    let c = fcs_const(fd);
    fd.vbank_mut().create(
        size,
        Address::new(c, val),
        Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN)),
    )
}

/// A `FuncProto` with a standard model and an internal (void-output) store —
/// the post-construction state a real `FuncCallSpecs` has before parameter
/// recovery (model from the ProtoModel registry, internal store).
fn proto_with_std_model(mgr: &AddrSpaceManager) -> FuncProto {
    let mut model = ProtoModel::new(mgr);
    model.build_param_list("standard").unwrap();
    let voidt = Rc::new(Datatype::new(1, type_metatype::TYPE_VOID));
    let mut fp = FuncProto::new();
    fp.set_internal(Rc::new(model), voidt);
    fp
}

/// A `FuncCallSpecs` on `call` with a standard model + internal store (FuncProto
/// `copy` carries both the model and a `clone_box` of the store).
fn fcs_with_std_model(mgr: &AddrSpaceManager, call: OpId) -> FuncCallSpecs {
    let mut fc = FuncCallSpecs::new(call, Address::default());
    let fp = proto_with_std_model(mgr);
    fc.proto_mut().copy(&fp);
    fc
}

/// Build a CALLIND with a stack-pointer placeholder input:
///   refvn   = (stack, 0x10)   [the spacebase reference]
///   phvn    = LOAD(refvn, _)   marked spacebase placeholder
///   CALLIND(target, phvn@slot1)
/// Returns (fd, fc, phvn).  `fc` carries a standard model + internal store.
fn build_call_with_placeholder(mgr: &AddrSpaceManager) -> (Funcdata, FuncCallSpecs, VarnodeId) {
    let mut fd = fcs_fd();
    let stk = fcs_stack(&fd);

    // The CALLIND op, 2 inputs (the target + the placeholder).
    let call = fcs_new_op(&mut fd, 2, 0x1010, OpCode::CPUI_CALLIND);
    let target = fcs_const_vn(&mut fd, 0x2000, 8);
    fd.op_set_input(call, target, 0).unwrap();

    // The LOAD op producing the placeholder.  Its input 0 is the spacebase
    // reference varnode (a stack-space varnode whose offset is the spacebase
    // relative value).
    let load = fcs_new_op(&mut fd, 1, 0x1008, OpCode::CPUI_LOAD);
    // refvn: a free varnode in the stack space at offset 0x10.
    let refvn = fd.vbank_mut().create(
        8,
        Address::new(Rc::clone(&stk), 0x10),
        Rc::new(Datatype::new(8, type_metatype::TYPE_UNKNOWN)),
    );
    fd.op_set_input(load, refvn, 0).unwrap();
    // phvn: the LOAD output (written), placed in unique space, marked placeholder.
    let uniq = Rc::clone(fd.get_arch().manage().get_space(1).unwrap());
    let phvn = fcs_out(&mut fd, load, uniq, 0x0, 8);
    fd.vbank_mut()
        .get_mut(phvn)
        .unwrap()
        .set_spacebase_placeholder();

    // Wire phvn as the CALLIND placeholder input at slot 1.
    fd.op_set_input(call, phvn, 1).unwrap();

    let mut fc = fcs_with_std_model(mgr, call);
    fc.set_paramshift(0);
    (fd, fc, phvn)
}

// =========================================================================
// ModelRule wiring (float-typeclass wave): the cspec `<rule>` actions are now
// plumbed into `ParamListStandard::assign_address` (the `goto_stack` float10
// model + the `pointermax` ConvertToPointer rule).  These exercise the
// wired chain end-to-end: ModelRule precedence over the metatype fallback,
// the goto_stack stack footprint for an oversized type, and the pointermax
// conversion.
// =========================================================================

/// A 10-byte float (x87 long double / `float10`), aligned to 8 (the gcc
/// alignment map gives `getAlignment(10)==8`; `getAlignSize` then rounds the
/// 10-byte size up to the 16-byte 2-slot footprint).
fn float10_type() -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(10, 8, type_metatype::TYPE_FLOAT))
}

/// A model with one 8-byte general register (group 0) and an 8-byte-aligned,
/// multi-slot stack resource (group 1), plus a single trailing `goto_stack`
/// ModelRule.  Mirrors (in miniature) the SysV `<input>` list: registers for
/// the small ints, the stack for everything the rule routes there.
fn reg_plus_stack_gotostack_model(
    mgr: &AddrSpaceManager,
) -> (ParamListStandard, Rc<AddrSpace>, Rc<AddrSpace>) {
    let reg = reg_space_le();
    let stk = stack_space();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    // group 0: one 8-byte general register at reg:0x10.
    let e0 = ParamEntry::seed(
        0,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(&reg),
        0x10,
        8,
        1,
        0,
        0,
        true,
        false,
        &[],
        mgr,
    )
    .expect("seed reg entry");
    model.push_entry(e0);
    // group 1: an 8-byte-aligned multi-slot stack resource (size 0x100, align 8).
    let e1 = stack_entry(1, &stk, 0x0, 0x100, 8, model.get_entry(), mgr);
    model.push_entry(e1);
    model.finish_decode();
    // The trailing `<rule><datatype name="any"/><goto_stack/></rule>`: a
    // (true-filter) GotoStack action whose stack_entry resolves to the model's
    // stack resource.
    let action = crate::modelrules::AssignAction::GotoStack {
        stack_entry: model.get_stack_entry(),
    };
    let filter = crate::modelrules::DatatypeFilter::SizeRestricted(
        crate::modelrules::SizeRestriction::new(0, 0),
    );
    model.push_model_rule(crate::modelrules::ModelRule::from_components(
        filter, action,
    ));
    (model, reg, stk)
}

fn padded_assignment_type(payload: i32, alignment: i32, metatype: type_metatype) -> Rc<Datatype> {
    if metatype == type_metatype::TYPE_STRUCT {
        return Rc::new(Datatype::new_with_align(
            Datatype::calc_align_size(payload, alignment),
            alignment,
            metatype,
        ));
    }
    let factory = crate::dtype::TypeFactoryImpl::new();
    factory.set_max_basetype_size(16);
    factory
        .decode_alignment_map(&[(1, 1), (2, 2), (4, 4), (10, alignment)])
        .unwrap();
    let datatype = factory.get_base(payload, metatype).unwrap();
    assert_eq!(datatype.get_size(), payload);
    assert_eq!(
        datatype.get_align_size(),
        Datatype::calc_align_size(payload, alignment)
    );
    datatype
}

#[test]
fn stack_entry_slots_and_addrs() {
    let mgr = AddrSpaceManager::new();
    let stk = stack_space();
    // A stack resource: 0x00..0x20, alignment 4 -> 8 slots, groups start at 7.
    let e = stack_entry(7, &stk, 0x0, 0x20, 4, &[], &mgr);
    assert!(!e.is_exclusion());
    assert_eq!(e.get_align(), 4);
    // getSlot: byte 0 is slot group 7, byte 4 is group 8, etc.
    assert_eq!(e.get_slot(&addr(&stk, 0x0), 0), 7);
    assert_eq!(e.get_slot(&addr(&stk, 0x4), 0), 8);
    assert_eq!(e.get_slot(&addr(&stk, 0x8), 0), 9);
    // getAddrBySlot: a 4-byte param from slot 0 lands at offset 0, consuming 1 slot.
    let mut slot = 0;
    let a = e.get_addr_by_slot(&mut slot, 4, 1, &mgr).unwrap();
    assert_eq!(a.get_offset(), 0x0);
    assert_eq!(slot, 1);
    // The next 4-byte param lands at offset 4.
    let a2 = e.get_addr_by_slot(&mut slot, 4, 1, &mgr).unwrap();
    assert_eq!(a2.get_offset(), 0x4);
    assert_eq!(slot, 2);
    // An 8-byte param consumes 2 slots.
    let mut slot2 = 0;
    let a3 = e.get_addr_by_slot(&mut slot2, 8, 1, &mgr).unwrap();
    assert_eq!(a3.get_offset(), 0x0);
    assert_eq!(slot2, 2);
}

#[test]
fn fillin_map_marks_active_used() {
    let mgr = AddrSpaceManager::new();
    let (model, reg) = three_reg_model();
    let mut active = ParamActive::new(false);
    // Two active trials matching groups 0 and 1.
    active.register_trial(&addr(&reg, 0x10), 4);
    active.register_trial(&addr(&reg, 0x20), 4);
    active.get_trial_mut(0).mark_active();
    active.get_trial_mut(1).mark_active();
    model.fillin_map(&mut active, &mgr).unwrap();
    // Both should be marked used (active in consecutive groups, no holes).
    let used = (0..active.get_num_trials())
        .filter(|&i| active.get_trial(i).is_used())
        .count();
    assert!(used >= 2);
}

#[test]
fn assign_map_standard_input_walk() {
    let mgr = AddrSpaceManager::new();
    let (model, _reg) = three_reg_model();
    let tf = PanicTypeFactory;
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![int4_type(), int4_type()],
        innames: vec!["a".into(), "b".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 2);
    // First int -> group 0 (offset 0x10), second -> group 1 (offset 0x20).
    assert_eq!(res[0].addr.get_offset(), 0x10);
    assert_eq!(res[1].addr.get_offset(), 0x20);
    assert!(res[0].type_.is_some());
}

#[test]
fn assign_map_standard_out_hidden_return_emits_indirect_output_plus_pointer_param() {
    // w10-struct-return de-stub: a too-big (8-byte) return value that does not
    // fit the model's 4-byte output register is returned through a hidden
    // pointer parameter (C++ `ParamListStandardOut::assignMap` fspec.cc:1584+).
    use crate::dtype::TypeFactoryImpl;
    let (mgr, reg) = manager_with_default_data_space();
    let model = single_small_out_model(&reg, &mgr);
    let tf = TypeFactoryImpl::new();
    tf.setup_sizes(Some(4), 8, 8); // initialize the size/alignment map
    // A 24-byte struct: too big for the 8-byte output register, so it must be
    // returned through a hidden pointer (which DOES fit the register).
    let outtype = Rc::new(Datatype::new_with_align(24, 8, type_metatype::TYPE_STRUCT));
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: Some(outtype),
        intypes: Vec::new(),
        innames: Vec::new(),
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    // Two pieces: the indirect-storage output, then the hidden pointer param.
    assert_eq!(res.len(), 2);
    assert_ne!(res[0].flags & parameter_pieces_flags::INDIRECTSTORAGE, 0);
    // The output's recovered type is the pointer to the struct (size = addr_size).
    assert_eq!(
        res[0].type_.as_ref().unwrap().get_metatype(),
        type_metatype::TYPE_PTR
    );
    assert_eq!(res[0].type_.as_ref().unwrap().get_size(), 8);
    // The hidden return parameter carries the pointer type and an invalid
    // address (filled in by the input-list assignMap), and — with no model
    // rules — is the plain (non-special) hidden return (flags 0).
    assert_eq!(
        res[1].type_.as_ref().unwrap().get_metatype(),
        type_metatype::TYPE_PTR
    );
    assert!(res[1].addr.is_invalid());
    assert_eq!(res[1].flags, 0);
}

#[test]
fn assign_address_fallback_exhausts_groups() {
    let mgr = AddrSpaceManager::new();
    let (model, _reg) = three_reg_model();
    let tp = int4_type();
    let mut status = vec![0i32; 3];
    let mut p0 = ParameterPieces::default();
    // First assignment grabs group 0.
    let r0 = model
        .assign_address_fallback(
            type_class::TYPECLASS_GENERAL,
            &tp,
            false,
            &mut status,
            &mut p0,
            &mgr,
        )
        .unwrap();
    assert_eq!(r0, AssignActionResponse::success);
    assert_eq!(p0.addr.get_offset(), 0x10);
    assert_eq!(status[0], -1); // group 0 consumed
    // Second assignment grabs group 1.
    let mut p1 = ParameterPieces::default();
    let r1 = model
        .assign_address_fallback(
            type_class::TYPECLASS_GENERAL,
            &tp,
            false,
            &mut status,
            &mut p1,
            &mgr,
        )
        .unwrap();
    assert_eq!(r1, AssignActionResponse::success);
    assert_eq!(p1.addr.get_offset(), 0x20);
}

#[test]
fn proto_model_assign_parameter_storage_orders_output_first() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = three_reg_proto_model(&mgr, &reg);
    let tf = PanicTypeFactory; // input/output assign with no model rules never reaches it
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: Some(int4_type()),
        intypes: vec![int4_type(), int4_type()],
        innames: vec!["a".into(), "b".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model
        .assign_parameter_storage(&proto, &mut res, false, &tf, &mgr)
        .unwrap();
    // res[0] is the output (0x10), res[1..] are inputs (0x10, 0x20).
    assert_eq!(res.len(), 3);
    assert_eq!(res[0].addr.get_offset(), 0x10); // output
    assert_eq!(res[1].addr.get_offset(), 0x10); // first input
    assert_eq!(res[2].addr.get_offset(), 0x20); // second input
}

#[test]
fn func_call_specs_late_restriction_no_model_copies() {
    let mut fd = fcs_fd();
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = FuncCallSpecs::new(call, Address::default());
    // No model on `fc`: lateRestriction copies the restricted proto wholesale.
    assert!(!fc.proto().has_model());

    let mut restricted = FuncProto::new();
    restricted.set_extra_pop(12);

    let mut newinput: Vec<Option<VarnodeId>> = Vec::new();
    let mut newoutput: Vec<VarnodeId> = Vec::new();
    let ok = fc
        .late_restriction(&fd, &restricted, &mut newinput, &mut newoutput)
        .unwrap();
    assert!(ok);
    assert_eq!(fc.proto().get_extra_pop(), 12);
}

#[test]
fn func_call_specs_late_restriction_incompatible_models_false() {
    let mgr = fcs_manager();
    let mut fd = fcs_fd();
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = FuncCallSpecs::new(call, Address::default());

    // Give `fc` a model so hasModel() is true.
    let mut model_a = ProtoModel::new(&mgr);
    model_a.build_param_list("standard").unwrap();
    fc.proto_mut().set_model(Some(Rc::new(model_a)));

    // A restricted proto with a *different-named* model => isCompatible false.
    let mut model_b = ProtoModel::new(&mgr);
    model_b.build_param_list("register").unwrap();
    let mut restricted = FuncProto::new();
    restricted.set_model(Some(Rc::new(model_b)));

    let mut ni: Vec<Option<VarnodeId>> = Vec::new();
    let mut no: Vec<VarnodeId> = Vec::new();
    let ok = fc
        .late_restriction(&fd, &restricted, &mut ni, &mut no)
        .unwrap();
    assert!(!ok);
}

#[test]
fn func_call_specs_deindirect_restart_when_incompatible() {
    let mgr = fcs_manager();
    let mut fd = fcs_fd();
    let ram = fcs_ram(&fd);
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = FuncCallSpecs::new(call, Address::default());

    // Model on fc, different model on newproto => lateRestriction fails =>
    // restart is recorded and restart-pending is set.
    let mut m_a = ProtoModel::new(&mgr);
    m_a.build_param_list("standard").unwrap();
    fc.proto_mut().set_model(Some(Rc::new(m_a)));

    let mut m_b = ProtoModel::new(&mgr);
    m_b.build_param_list("register").unwrap();
    let mut newproto = FuncProto::new();
    newproto.set_model(Some(Rc::new(m_b)));

    let mut log = RestartLog::new();
    let new_entry = Address::new(ram, 0x2000);
    fc.deindirect(
        &mut fd,
        new_entry.clone(),
        "callee",
        &newproto,
        false,
        false,
        &mut log,
    )
    .unwrap();

    assert!(fd.has_restart_pending());
    assert!(!log.is_empty_for(&fd));
    let dump = log.render(&fd);
    assert!(
        dump.contains("prototype discovered late at indirect call"),
        "dump={dump}"
    );
    // The de-indirect updated the entry/name even though it restarted.
    assert_eq!(*fc.get_entry_address(), new_entry);
    assert_eq!(fc.get_name(), "callee");
}

#[test]
fn func_call_specs_deindirect_override_short_circuits() {
    let mgr = fcs_manager();
    let mut fd = fcs_fd();
    let ram = fcs_ram(&fd);
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = FuncCallSpecs::new(call, Address::default());

    let mut m_a = ProtoModel::new(&mgr);
    m_a.build_param_list("standard").unwrap();
    fc.proto_mut().set_model(Some(Rc::new(m_a)));
    // Mark the call-site as overridden: deindirect must bail before any restart.
    fc.proto_mut().set_override(true);

    let mut m_b = ProtoModel::new(&mgr);
    m_b.build_param_list("register").unwrap();
    let mut newproto = FuncProto::new();
    newproto.set_model(Some(Rc::new(m_b)));

    let mut log = RestartLog::new();
    let new_entry = Address::new(ram, 0x2000);
    fc.deindirect(
        &mut fd, new_entry, "callee", &newproto, false, false, &mut log,
    )
    .unwrap();

    assert!(!fd.has_restart_pending());
    assert!(log.is_empty_for(&fd));
}

#[test]
fn func_call_specs_force_set_restart_and_locks() {
    let mgr = fcs_manager();
    let mut fd = fcs_fd();
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = fcs_with_std_model(&mgr, call);

    // Incompatible restrictive prototype (different model name) => lateRestriction
    // fails => restart.
    let mut m_b = ProtoModel::new(&mgr);
    m_b.build_param_list("register").unwrap();
    let voidt = Rc::new(Datatype::new(1, type_metatype::TYPE_VOID));
    let mut fp = FuncProto::new();
    fp.set_internal(Rc::new(m_b), voidt);
    fp.set_input_errors(true);
    fp.set_output_errors(true);

    let mut log = RestartLog::new();
    fc.force_set(&mut fd, &fp, &mut log).unwrap();

    assert!(fd.has_restart_pending());
    let dump = log.render(&fd);
    assert!(
        dump.contains("prototype forced late at call site"),
        "dump={dump}"
    );
    // Regardless of restart, the input is locked (0 params => VOIDINPUTLOCK) and
    // the error flags are transferred from fp.
    assert!(fc.proto().is_input_locked());
    assert!(fc.proto().has_input_errors());
    assert!(fc.proto().has_output_errors());
}

#[test]
fn func_call_specs_transfer_locked_output_void_ok() {
    // transfer_locked_output is private; exercise it through late_restriction
    // with an output-locked, *void*-output restricted proto.  A void output
    // returns Ok(true) (no Varnode transfer needed), so lateRestriction
    // succeeds.  Compatibility is by ProtoModel identity, so both protos share
    // the same model Rc.
    let mgr = fcs_manager();
    let mut fd = fcs_fd();
    let call = fcs_new_op(&mut fd, 1, 0x1010, OpCode::CPUI_CALLIND);
    let mut fc = FuncCallSpecs::new(call, Address::default());

    let mut model = ProtoModel::new(&mgr);
    model.build_param_list("standard").unwrap();
    let model = Rc::new(model);
    let voidt = Rc::new(Datatype::new(1, type_metatype::TYPE_VOID));

    // fc and restricted share the same model => isCompatible true.
    fc.proto_mut()
        .set_internal(Rc::clone(&model), Rc::clone(&voidt));

    let mut restricted = FuncProto::new();
    restricted.set_internal(Rc::clone(&model), Rc::clone(&voidt));
    restricted.set_output_lock(true); // output is void by default => transfer Ok(true)

    let mut ni: Vec<Option<VarnodeId>> = Vec::new();
    let mut no: Vec<VarnodeId> = Vec::new();
    // Not input-locked, output-locked-void => lateRestriction succeeds.
    let ok = fc
        .late_restriction(&fd, &restricted, &mut ni, &mut no)
        .unwrap();
    assert!(ok);
    assert!(no.is_empty());
}

#[test]
fn modelrule_gotostack_routes_oversized_float_to_aligned_stack_footprint() {
    // float-typeclass wave: a 10-byte float10 (x87 long double) does not fit any
    // register pentry (maxsize 8); the wired `goto_stack` ModelRule routes it to
    // the stack, reserving a 16-byte (2 x align-8 slots) footprint so a following
    // parameter lands at offset 0x10, not inside the float10.  This is the
    // longdouble `passmany` stack layout: `x`(float10)@0x0..0x10, next@0x10.
    let mgr = AddrSpaceManager::new();
    let (model, _reg, stk) = reg_plus_stack_gotostack_model(&mgr);
    let tf = PanicTypeFactory; // goto_stack never touches the TypeFactory
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![float10_type(), int4_type()],
        innames: vec!["x".into(), "z".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 2);
    // float10 -> stack at 0x0 (the rule wins over the register fallback; the
    // 10-byte float can't fit the 8-byte register anyway).
    assert!(Rc::ptr_eq(res[0].addr.get_space().unwrap(), &stk));
    assert_eq!(res[0].addr.get_offset(), 0x0);
    assert_eq!(res[0].type_.as_ref().unwrap().get_size(), 10);
    // The next int4 lands AFTER the float10's 16-byte (2-slot) footprint, at
    // 0x10 — never overlapping the float10 (the dropped-`z` failure mode is
    // exactly an overlapping next-param).
    assert!(Rc::ptr_eq(res[1].addr.get_space().unwrap(), &stk));
    assert_eq!(res[1].addr.get_offset(), 0x10);
}

#[test]
fn modelrule_precedes_metatype_fallback() {
    // The `goto_stack` (true-filter) rule fires for an int4 too, taking
    // precedence over the metatype-keyed register fallback: the int4 is routed
    // to the stack, NOT the general register, because the rule returns a
    // non-fail response first (C++ `assignAddress` iterates rules before the
    // fallback, fspec.cc:783-792).
    let mgr = AddrSpaceManager::new();
    let (model, reg, stk) = reg_plus_stack_gotostack_model(&mgr);
    let tf = PanicTypeFactory;
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![int4_type()],
        innames: vec!["a".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 1);
    assert!(Rc::ptr_eq(res[0].addr.get_space().unwrap(), &stk));
    assert!(!Rc::ptr_eq(res[0].addr.get_space().unwrap(), &reg));
}

#[test]
fn no_modelrule_falls_through_to_metatype_fallback() {
    // Control: WITHOUT any ModelRule, the same int4 takes the register fallback
    // (the pre-wiring behavior the 327-assertion baseline depends on stays
    // intact for rule-less models).
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    let e0 = ParamEntry::seed(
        0,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(&reg),
        0x10,
        8,
        1,
        0,
        0,
        true,
        false,
        &[],
        &mgr,
    )
    .expect("seed reg entry");
    model.push_entry(e0);
    model.finish_decode();
    assert_eq!(model.num_model_rules(), 0);
    let tf = PanicTypeFactory;
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![int4_type()],
        innames: vec!["a".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 1);
    assert!(Rc::ptr_eq(res[0].addr.get_space().unwrap(), &reg));
    assert_eq!(res[0].addr.get_offset(), 0x10);
}

// =========================================================================
// Adversarial tests (verifier, w10-float-typeclass): the rule-iteration
// boundary in `ParamListStandard::assign_address` (first non-fail wins, a
// FAILING rule does not short-circuit the chain) and the `pointermax` rule
// append-at-end ordering.  These target the most fragile spots of the
// ModelRule wiring: the loop's continue-on-fail semantics (C++
// fspec.cc:778-784) and the C++ "pointermax rule planted at the END of
// modelRules" ordering (fspec.cc:1507-1512, after the decoded rules).
// =========================================================================

/// Build a model with a non-matching (size >= 20) filter on a FIRST goto_stack
/// rule and a matching (true) filter on a SECOND goto_stack rule.  An int4 (4
/// bytes) fails the first rule's size gate, so the chain must continue to the
/// second rule — proving the loop does not stop at the first `fail`.
#[test]
fn w10_float_typeclass_failing_rule_does_not_short_circuit_chain() {
    let mgr = AddrSpaceManager::new();
    // Build a fresh reg+stack model and push a TWO-rule chain in order:
    //   rule 1: size>=20 filter (an int4 fails its size gate -> returns `fail`),
    //   rule 2: true-filter goto_stack (matches everything).
    let reg = reg_space_le();
    let stk = stack_space();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    let e0 = ParamEntry::seed(
        0,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(&reg),
        0x10,
        8,
        1,
        0,
        0,
        true,
        false,
        &[],
        &mgr,
    )
    .expect("seed reg entry");
    model.push_entry(e0);
    let e1 = stack_entry(1, &stk, 0x0, 0x100, 8, model.get_entry(), &mgr);
    model.push_entry(e1);
    model.finish_decode();
    // Rule 1: size>=20 filter -> an int4 never matches, the action is never
    // consulted, the rule returns `fail`.
    let fail_filter = crate::modelrules::DatatypeFilter::SizeRestricted(
        crate::modelrules::SizeRestriction::new(20, 0),
    );
    let fail_action = crate::modelrules::AssignAction::GotoStack {
        stack_entry: model.get_stack_entry(),
    };
    model.push_model_rule(crate::modelrules::ModelRule::from_components(
        fail_filter,
        fail_action,
    ));
    // Rule 2: true filter goto_stack (matches everything).
    let ok_filter = crate::modelrules::DatatypeFilter::SizeRestricted(
        crate::modelrules::SizeRestriction::new(0, 0),
    );
    let ok_action = crate::modelrules::AssignAction::GotoStack {
        stack_entry: model.get_stack_entry(),
    };
    model.push_model_rule(crate::modelrules::ModelRule::from_components(
        ok_filter, ok_action,
    ));
    assert_eq!(model.num_model_rules(), 2);
    let tf = PanicTypeFactory;
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![int4_type()],
        innames: vec!["a".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 1);
    // The SECOND rule won (stack), proving the first `fail` did not abort the
    // chain AND did not fall straight to the metatype fallback (which would have
    // routed the int4 to the general register at 0x10).
    assert!(Rc::ptr_eq(res[0].addr.get_space().unwrap(), &stk));
    assert!(!Rc::ptr_eq(res[0].addr.get_space().unwrap(), &reg));
}

/// The synthetic `pointermax` rule is appended to the END of `model_rules`
/// (C++ fspec.cc:1507-1512: `modelRules.emplace_back(...)` after the decoded
/// rules).  A preceding `goto_stack` rule must therefore still win for a type
/// that ALSO exceeds pointermax — the pointermax rule never preempts an earlier
/// matching rule.
#[test]
fn w10_float_typeclass_pointermax_rule_appends_after_existing_rules() {
    let mgr = AddrSpaceManager::new();
    let (mut model, _reg, stk) = reg_plus_stack_gotostack_model(&mgr);
    // model has one true-filter goto_stack rule.  Append pointermax(8): any type
    // > 8 bytes would (in isolation) convert to a pointer.
    assert_eq!(model.num_model_rules(), 1);
    model.push_pointermax_rule(8);
    assert_eq!(model.num_model_rules(), 2);
    // A 10-byte float10 exceeds pointermax(8); but the goto_stack rule precedes
    // the pointermax rule, so it wins -> the float10 lands on the stack at its
    // full 10-byte size, NOT converted to a pointer (which would shrink it to
    // the pointer width).
    let tf = PanicTypeFactory;
    let proto = PrototypePieces {
        name: "f".to_string(),
        outtype: None,
        intypes: vec![float10_type()],
        innames: vec!["x".into()],
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    };
    let mut res: Vec<ParameterPieces> = Vec::new();
    model.assign_map(&proto, &tf, &mut res, &mgr).unwrap();
    assert_eq!(res.len(), 1);
    assert!(Rc::ptr_eq(res[0].addr.get_space().unwrap(), &stk));
    // Full float10 size preserved (the earlier goto_stack rule won; the
    // pointermax ConvertToPointer never fired and never shrank it to ptr size).
    assert_eq!(res[0].type_.as_ref().unwrap().get_size(), 10);
}

#[test]
fn explicit_return_storage_removes_only_the_model_hidden_return_input() {
    use crate::dtype::TypeFactoryImpl;
    let (manager, reg) = manager_with_default_data_space();
    let types = TypeFactoryImpl::new();
    types.setup_sizes(Some(4), 8, 8);
    let mut model = ProtoModel::new(&manager);
    let mut inputs = ParamListStandard::new(ParamListKind::Standard);
    for (group, offset) in [(0, 0x10), (1, 0x20), (2, 0x30)] {
        inputs.push_entry(excl_entry(
            group,
            &reg,
            offset,
            8,
            inputs.get_entry(),
            &manager,
        ));
    }
    inputs.finish_decode();
    model.input = Some(inputs);
    model.output = Some(single_small_out_model(&reg, &manager));
    let model = Rc::new(model);
    let float = float10_type();
    let mut pieces = PrototypePieces {
        name: "custom_result".into(),
        outtype: Some(float.clone()),
        intypes: vec![int4_type(), int4_type()],
        innames: vec!["first".into(), "second".into()],
        first_var_arg_slot: -1,
        ..Default::default()
    };
    let mut prototype = FuncProto::new();
    prototype.attach_internal_store(types.get_type_void().unwrap());
    prototype
        .set_pieces(&pieces, Some(model.clone()), &types, &manager)
        .unwrap();
    assert_eq!(prototype.num_params(), 3);
    pieces.output_storage = Some(ParameterPieces {
        addr: Address::new(reg.clone(), 0x100),
        type_: Some(float),
        flags: parameter_pieces_flags::TYPELOCK,
    });
    pieces.input_storage.push((
        0,
        ParameterPieces {
            addr: Address::new(reg.clone(), 0x80),
            type_: Some(int4_type()),
            flags: parameter_pieces_flags::TYPELOCK,
        },
    ));
    let explicit_output = pieces.output_storage.take();
    prototype
        .set_pieces(&pieces, Some(model.clone()), &types, &manager)
        .unwrap();
    assert_eq!(prototype.num_params(), 3);
    assert_eq!(prototype.get_param(0).unwrap().get_name(), "rethidden");
    assert_eq!(
        prototype.get_param(0).unwrap().get_address().get_offset(),
        0x10
    );
    assert_eq!(
        prototype.get_param(1).unwrap().get_address().get_offset(),
        0x80
    );
    assert_eq!(
        prototype.get_param(2).unwrap().get_address().get_offset(),
        0x20
    );
    pieces.output_storage = explicit_output;
    prototype
        .set_pieces(&pieces, Some(model), &types, &manager)
        .unwrap();
    assert_eq!(prototype.num_params(), 2);
    assert_eq!(
        prototype.get_param(0).unwrap().get_address().get_offset(),
        0x80
    );
    assert_eq!(
        prototype.get_param(1).unwrap().get_address().get_offset(),
        0x10
    );
    assert_eq!(prototype.get_param(1).unwrap().get_name(), "second");
    assert_eq!(prototype.get_output().get_address().get_offset(), 0x100);
}

#[test]
fn return_only_seed_preserves_partial_contract_locks() {
    use crate::dtype::TypeFactoryImpl;
    let (manager, reg) = manager_with_default_data_space();
    let types = TypeFactoryImpl::new();
    types.setup_sizes(Some(4), 8, 8);
    let model = Rc::new(three_reg_proto_model(&manager, &reg));
    let output = ParameterPieces {
        addr: Address::new(reg.clone(), 0x80),
        type_: Some(int4_type()),
        flags: parameter_pieces_flags::TYPELOCK,
    };
    for (full, input, custom_output, input_locked, output_locked) in [
        (false, false, true, false, true),
        (false, true, false, true, false),
        (false, true, true, true, true),
        (true, false, true, true, true),
        (true, true, true, true, true),
        (true, false, false, true, true),
    ] {
        let pieces = PrototypePieces {
            outtype: full.then(int4_type),
            intypes: if input { vec![int4_type()] } else { Vec::new() },
            innames: if input {
                vec!["retained".into()]
            } else {
                Vec::new()
            },
            input_storage: if input {
                vec![(
                    0,
                    ParameterPieces {
                        addr: Address::new(reg.clone(), 0x40),
                        type_: Some(int4_type()),
                        flags: parameter_pieces_flags::TYPELOCK | parameter_pieces_flags::NAMELOCK,
                    },
                )]
            } else {
                Vec::new()
            },
            output_storage: custom_output.then(|| output.clone()),
            first_var_arg_slot: -1,
            ..Default::default()
        };
        let mut prototype = FuncProto::new();
        for _ in 0..2 {
            prototype
                .seed_locked_from_pieces(
                    &pieces,
                    model.clone(),
                    types.get_type_void().unwrap(),
                    &types,
                    &manager,
                )
                .unwrap();
            assert_eq!(prototype.is_input_locked(), input_locked, "{pieces:?}");
            assert_eq!(prototype.is_output_locked(), output_locked, "{pieces:?}");
            assert!(prototype.is_model_locked());
            assert_eq!(prototype.num_params(), i32::from(input));
            assert_eq!(
                prototype.flags & func_proto_flags::VOIDINPUTLOCK != 0,
                input_locked && !input
            );
            if input {
                let parameter = prototype.get_param(0).unwrap();
                assert_eq!(parameter.get_address(), Address::new(reg.clone(), 0x40));
                assert_eq!(parameter.get_name(), "retained");
                assert!(parameter.is_name_locked());
            }
            if custom_output {
                assert_eq!(prototype.get_output().get_address(), output.addr);
                assert_eq!(prototype.get_output().get_size(), 4);
                assert_eq!(
                    prototype.get_output_type().unwrap().get_metatype(),
                    type_metatype::TYPE_INT
                );
            }
        }
    }
}

#[test]
fn return_only_seed_does_not_unlock_other_input_metadata() {
    use crate::dtype::TypeFactoryImpl;
    let (manager, reg) = manager_with_default_data_space();
    let types = TypeFactoryImpl::new();
    types.setup_sizes(Some(4), 8, 8);
    let model = Rc::new(three_reg_proto_model(&manager, &reg));
    for input_metadata in 0..3 {
        let mut pieces = PrototypePieces {
            output_storage: Some(ParameterPieces {
                addr: Address::new(reg.clone(), 0x80),
                type_: Some(int4_type()),
                flags: parameter_pieces_flags::TYPELOCK,
            }),
            first_var_arg_slot: -1,
            ..Default::default()
        };
        match input_metadata {
            0 => pieces.first_var_arg_slot = 0,
            1 => pieces.innames.push("untyped_input".into()),
            _ => pieces.input_storage.push((
                0,
                ParameterPieces {
                    addr: Address::new(reg.clone(), 0x40),
                    type_: Some(int4_type()),
                    flags: parameter_pieces_flags::TYPELOCK,
                },
            )),
        }
        let mut prototype = FuncProto::new();
        prototype
            .seed_locked_from_pieces(
                &pieces,
                model.clone(),
                types.get_type_void().unwrap(),
                &types,
                &manager,
            )
            .unwrap();
        assert!(prototype.is_input_locked(), "{pieces:?}");
        assert!(prototype.is_output_locked());
        assert_eq!(prototype.is_dotdotdot(), input_metadata == 0);
    }
}

#[test]
fn stack_argument_slots_can_ignore_object_alignment() {
    let manager = AddrSpaceManager::new();
    let stack = stack_space();
    for (flags, expected, next) in [(0, 12, 6), (param_entry_flags::IGNORE_TYPE_ALIGN, 8, 5)] {
        let entry = ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            stack.clone(),
            4,
            500,
            1,
            4,
            flags,
            true,
            false,
            &[],
            &manager,
        )
        .unwrap();
        let mut slot = 1;
        let address = entry.get_addr_by_slot(&mut slot, 16, 8, &manager).unwrap();
        assert_eq!(address.get_offset(), expected);
        assert_eq!(slot, next);
    }
}

#[test]
fn partial_input_storage_reserves_aliases_before_allocating_defaults() {
    let manager = AddrSpaceManager::new();
    let reg = reg_space_le();
    let mut inputs = ParamListStandard::new(ParamListKind::Standard);
    for (group, offset) in [(0, 0x10), (1, 0x20), (2, 0x30)] {
        inputs.push_entry(excl_entry(
            group,
            &reg,
            offset,
            8,
            inputs.get_entry(),
            &manager,
        ));
    }
    inputs.finish_decode();
    for slot in 0..3 {
        let proto = PrototypePieces {
            intypes: vec![int4_type(), int4_type(), int4_type()],
            input_storage: vec![(
                slot,
                ParameterPieces {
                    addr: Address::new(reg.clone(), 0x12),
                    type_: Some(int4_type()),
                    flags: parameter_pieces_flags::CUSTOM_STORAGE,
                },
            )],
            ..Default::default()
        };
        let mut result = Vec::new();
        inputs
            .assign_map(&proto, &PanicTypeFactory, &mut result, &manager)
            .unwrap();
        let mut expected = vec![0x20, 0x30];
        expected.insert(slot as usize, 0x12);
        assert_eq!(
            result
                .iter()
                .map(|p| p.addr.get_offset())
                .collect::<Vec<_>>(),
            expected
        );
    }
}

#[test]
fn partial_input_storage_skips_reserved_stack_ranges() {
    let manager = AddrSpaceManager::new();
    let stack = stack_space();
    let mut inputs = ParamListStandard::new(ParamListKind::Standard);
    inputs.push_entry(
        ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            stack.clone(),
            4,
            0x100000,
            1,
            4,
            0,
            true,
            false,
            &[],
            &manager,
        )
        .unwrap(),
    );
    inputs.finish_decode();
    for (offset, expected) in [
        (4, vec![4, 8, 12]),
        (8, vec![4, 8, 12]),
        (0x80000, vec![4, 0x80000, 8]),
    ] {
        let proto = PrototypePieces {
            intypes: vec![int4_type(), int4_type(), int4_type()],
            input_storage: vec![(
                1,
                ParameterPieces {
                    addr: Address::new(stack.clone(), offset),
                    type_: Some(int4_type()),
                    flags: parameter_pieces_flags::CUSTOM_STORAGE,
                },
            )],
            ..Default::default()
        };
        let mut result = Vec::new();
        inputs
            .assign_map(&proto, &PanicTypeFactory, &mut result, &manager)
            .unwrap();
        let actual = result
            .iter()
            .map(|p| p.addr.get_offset())
            .collect::<Vec<_>>();
        let expected = if offset == 4 {
            vec![8, 4, 12]
        } else {
            expected
        };
        assert_eq!(actual, expected);
    }
}

#[test]
fn partial_input_storage_handles_large_stack_reservations_without_consuming_a_default_slot() {
    let manager = AddrSpaceManager::new();
    let stack = stack_space();
    let mut inputs = ParamListStandard::new(ParamListKind::Standard);
    inputs.push_entry(
        ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            stack.clone(),
            4,
            0x100000,
            1,
            4,
            0,
            true,
            false,
            &[],
            &manager,
        )
        .unwrap(),
    );
    inputs.finish_decode();
    let large = Rc::new(Datatype::new(0x80000, type_metatype::TYPE_UNKNOWN));
    let proto = PrototypePieces {
        intypes: vec![large.clone(), int4_type()],
        input_storage: vec![(
            0,
            ParameterPieces {
                addr: Address::new(stack, 4),
                type_: Some(large),
                flags: parameter_pieces_flags::CUSTOM_STORAGE,
            },
        )],
        ..Default::default()
    };
    let mut result = Vec::new();
    inputs
        .assign_map(&proto, &PanicTypeFactory, &mut result, &manager)
        .unwrap();
    assert_eq!(result[1].addr.get_offset(), 0x80004);
}

#[test]
fn partial_input_storage_can_override_every_input_of_an_empty_model() {
    let manager = AddrSpaceManager::new();
    let reg = reg_space_le();
    let inputs = ParamListStandard::new(ParamListKind::Standard);
    let proto = PrototypePieces {
        intypes: vec![int4_type(), int4_type()],
        input_storage: (0..2)
            .map(|slot| {
                (
                    slot,
                    ParameterPieces {
                        addr: Address::new(reg.clone(), 0x80 + slot as u64 * 8),
                        type_: Some(int4_type()),
                        flags: parameter_pieces_flags::CUSTOM_STORAGE,
                    },
                )
            })
            .collect(),
        ..Default::default()
    };
    let mut result = Vec::new();
    inputs
        .assign_map(&proto, &PanicTypeFactory, &mut result, &manager)
        .unwrap();
    assert_eq!(
        result
            .iter()
            .map(|p| p.addr.get_offset())
            .collect::<Vec<_>>(),
        vec![0x80, 0x88]
    );
}

#[test]
fn floating_register_assignment_uses_payload_and_preserves_stack_padding() {
    let mut manager = fcs_manager();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        5,
        0,
        1,
        1,
    ));
    manager.insert_space(Rc::clone(&register)).unwrap();
    let stack = Rc::clone(manager.get_space_by_name("stack").unwrap());
    for alignment in [4, 16] {
        let datatype = padded_assignment_type(10, alignment, type_metatype::TYPE_FLOAT);
        let mut output = ParamListStandard::new(ParamListKind::StandardOut);
        output.push_entry(
            ParamEntry::seed(
                0,
                type_class::TYPECLASS_FLOAT,
                Rc::clone(&register),
                0x100,
                10,
                4,
                0,
                0,
                false,
                false,
                &[],
                &manager,
            )
            .unwrap(),
        );
        let mut status = [0];
        let mut assigned = ParameterPieces::default();
        assert_eq!(
            output
                .assign_address_fallback(
                    type_class::TYPECLASS_FLOAT,
                    &datatype,
                    true,
                    &mut status,
                    &mut assigned,
                    &manager,
                )
                .unwrap(),
            AssignActionResponse::success
        );
        assert_eq!(assigned.addr.get_offset(), 0x100);
        assert_eq!(status, [-1]);
        assert_eq!(assigned.type_.as_ref().unwrap().get_size(), 10);
        assert_eq!(
            assigned.type_.as_ref().unwrap().get_align_size(),
            datatype.get_align_size()
        );

        let mut input = ParamListStandard::new(ParamListKind::Standard);
        input.push_entry(
            ParamEntry::seed(
                0,
                type_class::TYPECLASS_FLOAT,
                Rc::clone(&stack),
                0,
                128,
                1,
                4,
                0,
                true,
                false,
                &[],
                &manager,
            )
            .unwrap(),
        );
        let mut status = [0];
        for expected in [0, datatype.get_align_size() as u64] {
            let mut assigned = ParameterPieces::default();
            assert_eq!(
                input
                    .assign_address_fallback(
                        type_class::TYPECLASS_FLOAT,
                        &datatype,
                        true,
                        &mut status,
                        &mut assigned,
                        &manager,
                    )
                    .unwrap(),
                AssignActionResponse::success
            );
            assert_eq!(assigned.addr.get_offset(), expected);
        }
    }
}

#[test]
fn floating_register_assignment_keeps_non_payload_resources_unchanged() {
    let mut manager = fcs_manager();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        5,
        0,
        1,
        1,
    ));
    manager.insert_space(Rc::clone(&register)).unwrap();
    let stack = Rc::clone(manager.get_space_by_name("stack").unwrap());
    for (space, class, metatype, payload, alignment, entry_alignment) in [
        (
            Rc::clone(&register),
            type_class::TYPECLASS_GENERAL,
            type_metatype::TYPE_FLOAT,
            10,
            4,
            0,
        ),
        (
            Rc::clone(&register),
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_STRUCT,
            10,
            4,
            0,
        ),
        (
            stack,
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_FLOAT,
            10,
            4,
            0,
        ),
        (
            Rc::clone(&register),
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_FLOAT,
            10,
            4,
            2,
        ),
        (
            register,
            type_class::TYPECLASS_FLOAT,
            type_metatype::TYPE_FLOAT,
            16,
            16,
            0,
        ),
    ] {
        let mut list = ParamListStandard::new(ParamListKind::StandardOut);
        list.push_entry(
            ParamEntry::seed(
                0,
                class,
                space,
                0x100,
                10,
                1,
                entry_alignment,
                0,
                false,
                false,
                &[],
                &manager,
            )
            .unwrap(),
        );
        let datatype = padded_assignment_type(payload, alignment, metatype);
        let mut status = [0];
        assert_eq!(
            list.assign_address_fallback(
                class,
                &datatype,
                true,
                &mut status,
                &mut ParameterPieces::default(),
                &manager,
            )
            .unwrap(),
            AssignActionResponse::fail
        );
    }
}
