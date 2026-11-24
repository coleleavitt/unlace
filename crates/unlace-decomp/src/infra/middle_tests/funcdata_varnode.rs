//! Tests moved out of `funcdata_varnode` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::ArchContext;
use crate::context::OpId;
use crate::context::TypeOp;
use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::dtype::type_metatype;
use crate::fspec::effect_type;
use crate::funcdata::Funcdata;
use crate::funcdata_varnode::*;
use crate::noreturnretuse;
use crate::varnode::DefOpInfo;
use crate::varnode::VarnodeBank;
use crate::varnode::varnode_flags;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::KunaError;
use unlace_base::error::KunaResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::FspecSpace;
use unlace_base::space::IopSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::Wrap;
use unlace_base::types::int4;
use unlace_base::types::uint1;
use unlace_base::types::uint4;
use unlace_base::types::uintb;
use unlace_base::types::uintm;
use unlace_num::opcodes::OpCode;

/// Build an AddrSpaceManager with constant/unique/iop/fspec/ram spaces.
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

/// The fspec side-table entry a call-spec annotation names lives as long
/// as the function: a batch decompiling thousands of functions kept every
/// call site's entry before the function's drop released them.
#[test]
fn dropping_a_function_releases_its_fspec_entries() {
    let handle = crate::flow::next_fspec_handle();
    let info = || unlace_base::space::FspecCallInfo {
        printed_name: "callee".into(),
        entry: Address::default(),
    };
    unlace_base::space::fspec_register(handle, info());
    let mut fd = build_fd();
    fd.new_varnode_call_specs(handle);
    let other = crate::flow::next_fspec_handle();
    unlace_base::space::fspec_register(other, info());
    assert_eq!(
        unlace_base::space::fspec_lookup(handle).map(|i| i.printed_name),
        Some("callee".into())
    );
    drop(fd);
    assert!(unlace_base::space::fspec_lookup(handle).is_none());
    assert!(
        unlace_base::space::fspec_lookup(other).is_some(),
        "a handle the function did not take is kept"
    );
    unlace_base::space::fspec_unregister(other);
}

fn rejected_delete_preserves_membership(has_definition: bool, shared: bool) {
    let mut fd = build_fd();
    fd.set_high_level();
    let pc = Address::new(ram(&fd), 0x1000);
    let op = fd.new_op(1, pc.clone());
    fd.op_set_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    let vn = if has_definition {
        let value = fd.new_constant(4, 7);
        fd.op_set_input(op, value, 0).unwrap();
        fd.new_unique_out(4, op).unwrap()
    } else {
        let input = fd.new_unique(4, None);
        fd.op_set_input(op, input, 0).unwrap();
        fd.new_unique_out(4, op).unwrap();
        input
    };
    let high = fd.vbank().get(vn).unwrap().get_high().unwrap();
    let peer = shared.then(|| {
        let peer = fd.new_unique(4, None);
        let peer_high = fd.vbank().get(peer).unwrap().get_high().unwrap();
        let mut writes = Vec::new();
        fd.with_high_split(|bank, ctx| {
            bank.merge_internal(high, peer_high, false, ctx, &mut |vn, high, group| {
                writes.push((vn, high, group));
            })
        })
        .unwrap();
        for (vn, high, group) in writes {
            fd.vbank_mut().get_mut(vn).unwrap().set_high(high, group);
        }
        peer
    });
    fd.kuna_extend_storage_sources(
        vn,
        [crate::varsources::StorageSource {
            address: Address::new(ram(&fd), 0x80),
            size: 4,
            write_address: Some(pc.clone()),
        }],
    );
    assert_eq!(fd.kuna_storage_sources(vn).len(), 1);
    let loc_order: Vec<_> = fd.vbank().iter_loc().collect();
    let def_order: Vec<_> = fd.vbank().iter_def().collect();
    let def = fd.vbank().get(vn).unwrap().get_def();
    let readers: Vec<_> = fd.vbank().get(vn).unwrap().descend_iter().collect();
    let h = fd.high_bank().get(high).unwrap();
    let members: Vec<_> = (0..h.num_instances()).map(|i| h.get_instance(i)).collect();
    assert_eq!(members.len(), if shared { 2 } else { 1 });

    for _ in 0..2 {
        let error = fd.delete_varnode(vn).unwrap_err();
        assert!(error.to_string().contains("Deleting integrated varnode"));
        assert_eq!(fd.vbank().iter_loc().collect::<Vec<_>>(), loc_order);
        assert_eq!(fd.vbank().iter_def().collect::<Vec<_>>(), def_order);
        let v = fd.vbank().get(vn).unwrap();
        assert_eq!(v.get_def(), def);
        assert_eq!(v.descend_iter().collect::<Vec<_>>(), readers);
        let h = fd
            .high_bank()
            .get(high)
            .expect("rejected deletion must retain the high");
        assert_eq!(
            (0..h.num_instances())
                .map(|i| h.get_instance(i))
                .collect::<Vec<_>>(),
            members,
        );
        for &member in &members {
            assert_eq!(fd.vbank().get(member).unwrap().get_high(), Some(high));
        }
        let sources = fd.kuna_storage_sources(vn);
        assert_eq!(sources.len(), 1);
        assert_eq!(sources[0].address, Address::new(ram(&fd), 0x80));
        assert_eq!(sources[0].size, 4);
        assert_eq!(sources[0].write_address, Some(pc.clone()));
        if has_definition {
            assert_eq!(fd.obank().get(op).unwrap().get_out(), Some(vn));
        } else {
            assert_eq!(fd.obank().get(op).unwrap().get_in(0), Some(vn));
        }
    }

    if has_definition {
        fd.op_unset_output(op);
    } else {
        fd.op_unset_input(op, 0);
    }
    fd.delete_varnode(vn).unwrap();
    assert!(fd.vbank().get(vn).is_none());
    assert!(fd.kuna_storage_sources(vn).is_empty());
    if let Some(peer) = peer {
        let h = fd.high_bank().get(high).unwrap();
        assert_eq!(h.num_instances(), 1);
        assert_eq!(h.get_instance(0), peer);
        assert_eq!(fd.vbank().get(peer).unwrap().get_high(), Some(high));
        fd.delete_varnode(peer).unwrap();
    }
    assert!(fd.high_bank().get(high).is_none());
}

#[test]
fn rejected_delete_preserves_definition_singleton() {
    rejected_delete_preserves_membership(true, false);
}

#[test]
fn rejected_delete_preserves_definition_shared() {
    rejected_delete_preserves_membership(true, true);
}

#[test]
fn rejected_delete_preserves_descendants_singleton() {
    rejected_delete_preserves_membership(false, false);
}

#[test]
fn rejected_delete_preserves_descendants_shared() {
    rejected_delete_preserves_membership(false, true);
}

#[test]
fn large_storage_merge_preserves_order_and_distinct_write_sites() {
    use crate::varsources::StorageSource;

    let mut fd = build_fd();
    let dst = fd.new_unique(4, None);
    let ram = ram(&fd);
    let source = |offset, write: Option<u64>| StorageSource {
        address: Address::new(Rc::clone(&ram), offset),
        size: 4,
        write_address: write.map(|pc| Address::new(Rc::clone(&ram), pc)),
    };
    fd.kuna_extend_storage_sources(dst, (0..64).map(|offset| source(offset, None)));
    fd.kuna_extend_storage_sources(
        dst,
        (40..64).map(|offset| source(offset, None)).chain([
            source(53, Some(0x100)),
            source(4, Some(0x100)),
            source(53, Some(0x100)),
            source(53, Some(0x101)),
        ]),
    );

    let mut expected: Vec<_> = (0..64).map(|offset| (offset, None)).collect();
    expected.extend([(53, Some(0x100)), (4, Some(0x100)), (53, Some(0x101))]);
    let actual: Vec<_> = fd
        .kuna_storage_sources(dst)
        .iter()
        .map(|source| {
            (
                source.address.get_offset(),
                source.write_address.as_ref().map(Address::get_offset),
            )
        })
        .collect();
    assert_eq!(actual, expected);
}
