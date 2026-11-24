//! Tests moved out of `jumptable` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::block::BlockKind;
use crate::block::block_get_start;
use crate::context::ArchContext;
use crate::context::BlockId;
use crate::context::OpId;
use crate::context::TypeOp;
use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::dtype::type_metatype;
use crate::emulatefunction::EmulateFunction;
use crate::funcdata::Funcdata;
use crate::jumptable::*;
use crate::op::pcodeop_flags;
use std::collections::BTreeMap;
use std::collections::BTreeSet;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::address::calc_mask;
use unlace_base::address::count_leading_zeros;
use unlace_base::address::coveringmask;
use unlace_base::address::mostsigbit_set;
use unlace_base::error::KunaError;
use unlace_base::error::KunaResult;
use unlace_base::marshal::ATTRIB_FORMAT;
use unlace_base::marshal::ATTRIB_SIZE;
use unlace_base::marshal::AttributeId;
use unlace_base::marshal::Decoder;
use unlace_base::marshal::ElementId;
use unlace_base::marshal::Encoder;
use unlace_base::marshal::PackedDecode;
use unlace_base::marshal::PackedEncode;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::Wrap;
use unlace_base::types::int4;
use unlace_base::types::uint4;
use unlace_base::types::uint8;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

fn build_manager() -> AddrSpaceManager {
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
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m.set_default_code_space(2).unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram_space(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn ram_of(m: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(m.get_space_by_name("ram").unwrap())
}

fn opcode_flags(opc: OpCode) -> unlace_base::types::uint4 {
    match opc {
        OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND => {
            pcodeop_flags::branch
        }
        _ => 0,
    }
}

fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let ram = ram_space(fd);
    let op = fd.new_op(inputs, Address::new(ram, off));
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, opcode_flags(opc), format!("{opc:?}")));
    op
}

/// Create a function-input Varnode (input varnodes may be read by multiple ops;
/// a *free* varnode can have only one descendant, mirroring the C++ rule).
fn mk_input(fd: &mut Funcdata, off: u64) -> VarnodeId {
    let ram = ram_space(fd);
    let vn = fd.new_varnode(4, &Address::new(ram, off), None);
    fd.vbank_mut()
        .set_input(vn, &mut |_: &mut crate::varnode::VarnodeBank,
                             _: VarnodeId,
                             _: VarnodeId| {
            Ok(())
        })
        .unwrap()
}

#[test]
fn guard_range_retry_keeps_both_wrapped_bounds() {
    let mut fd = build_fd();
    let input = mk_input(&mut fd, 0x10);
    let lower = mk_op(&mut fd, 2, 0x114, OpCode::CPUI_CBRANCH);
    let upper = mk_op(&mut fd, 2, 0x10c, OpCode::CPUI_CBRANCH);
    let guards = vec![
        GuardRecord::new(
            &fd,
            lower,
            lower,
            0,
            CircleRange::new(58, 0x8000003a, 4, 1),
            input,
            false,
        ),
        GuardRecord::new(
            &fd,
            upper,
            upper,
            0,
            CircleRange::new(0x80000000, 62, 4, 1),
            input,
            false,
        ),
    ];
    let mut range = CircleRange::new(0, 0, 4, 1);
    crate::switchguardrange::intersect(&fd, &guards, input, &mut range);
    assert_eq!((range.get_min(), range.get_end()), (58, 0x8000003a));
    assert!(range.contains_val(0x80000000));
    let mut model = JumpBasicModel::new();
    model.selectguards = guards;
    model.calc_range(&fd, input, &mut range);
    assert_eq!(
        (range.get_min(), range.get_end(), range.get_size()),
        (58, 62, 4)
    );
}

/// A caller-return destination that would sit on decoded code is dropped, and
/// the constant targets keep their model.
#[test]
fn a_dropped_return_destination_keeps_the_constant_targets() {
    let ram = ram_of(&build_manager());
    let mut jt = JumpTable::new(Address::new(ram.clone(), 0x1004));
    jt.kuna_push_entry(Address::new(ram.clone(), 0x1040), 0, 0x1040);
    jt.addresstable.push(Address::new(ram.clone(), 0x1005));
    jt.jmodel = Some(Box::new(
        crate::constselectjump::JumpModelConstSelect::from_flow_targets(vec![0x1040], Some(0x1005)),
    ));
    assert_eq!(
        jt.kuna_return_default(),
        Some(&Address::new(ram.clone(), 0x1005))
    );
    jt.kuna_drop_return_default();
    assert!(jt.kuna_return_default().is_none());
    let offsets: Vec<_> = jt.address_table().iter().map(|a| a.get_offset()).collect();
    assert_eq!(offsets, [0x1040]);
    jt.kuna_drop_return_default();
    assert_eq!(jt.address_table().len(), 1);
}
