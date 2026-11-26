use super::*;

#[test]
fn load_crossing_requires_an_interior_overlapping_global_write() {
    use crate::context::{ArchContext, TypeOp};
    use crate::cover::Cover;
    use crate::funcdata::FuncdataCoverCtx;
    use crate::varnode::varnode_flags;
    use unlace_base::address::Address;
    use unlace_base::space::{
        AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
    };

    for via_high in [false, true] {
        for global_offset in [0x8000, 0x9000] {
            for writer_position in 0..5 {
                let mut manager = AddrSpaceManager::new();
                manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
                manager
                    .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
                    .unwrap();
                let ram = Rc::new(AddrSpace::new(
                    spacetype::IPTR_PROCESSOR,
                    "ram",
                    false,
                    8,
                    1,
                    2,
                    addrspace_flags::hasphysical,
                    1,
                    1,
                ));
                manager.insert_space(Rc::clone(&ram)).unwrap();
                let mut arch = ArchContext::new(manager);
                arch.unlace_options.set(IndexAliasGuard(LEVEL_GLOBAL));
                let mut fd = Funcdata::new(
                    "f",
                    "f",
                    Rc::new(arch),
                    Address::new(Rc::clone(&ram), 0x1000),
                    0x1000_0000,
                    0x40,
                )
                .unwrap();
                fd.set_high_level();
                let unique = Rc::clone(fd.get_arch().manage().get_unique_space().unwrap());
                let root = fd.bblocks_root_pub();
                let block = fd.bblocks_mut().new_block_basic(root);
                let mut loaded = None;
                let mut writer = None;
                for position in 0..5 {
                    let is_load = position == 1;
                    let op = fd.new_op(
                        if is_load { 2 } else { 1 },
                        Address::new(Rc::clone(&ram), 0x1000 + position),
                    );
                    let code = if is_load {
                        OpCode::CPUI_LOAD
                    } else {
                        OpCode::CPUI_COPY
                    };
                    fd.op_set_opcode(op, TypeOp::new(code, 0, "test"));
                    let output_address = if position == writer_position && !via_high {
                        Address::new(Rc::clone(&ram), global_offset)
                    } else {
                        Address::new(Rc::clone(&unique), 0x1000 + position * 16)
                    };
                    let output = fd.new_varnode_out(4, &output_address, op).unwrap();
                    if position == writer_position {
                        writer = Some(output);
                        if !via_high {
                            fd.vbank_mut()
                                .get_mut(output)
                                .unwrap()
                                .set_flags_pub(varnode_flags::persist);
                        }
                    }
                    if is_load {
                        let space = fd.new_constant(8, ram.get_index() as u64);
                        let pointer = fd.new_constant(8, 0x8000);
                        fd.op_set_input(op, space, 0).unwrap();
                        fd.op_set_input(op, pointer, 1).unwrap();
                        loaded = Some(output);
                    } else {
                        let input = if position == 3 {
                            loaded.unwrap()
                        } else {
                            fd.new_constant(4, 1)
                        };
                        fd.op_set_input(op, input, 0).unwrap();
                    }
                    fd.op_insert_end(op, block);
                }
                if via_high {
                    let member =
                        fd.new_varnode(4, &Address::new(Rc::clone(&ram), global_offset), None);
                    let member = fd.set_input_varnode(member).unwrap();
                    fd.vbank_mut()
                        .get_mut(member)
                        .unwrap()
                        .set_flags_pub(varnode_flags::persist);
                    let target = fd.vbank().get(writer.unwrap()).unwrap().get_high().unwrap();
                    let source = fd.vbank().get(member).unwrap().get_high().unwrap();
                    let mut updates = Vec::new();
                    fd.with_high_split(|bank, context| {
                        bank.merge_internal(
                            target,
                            source,
                            false,
                            context,
                            &mut |vn, high, group| updates.push((vn, high, group)),
                        )
                    })
                    .unwrap();
                    for (vn, high, group) in updates {
                        fd.vbank_mut().get_mut(vn).unwrap().set_high(high, group);
                    }
                }
                let loaded = loaded.unwrap();
                let mut cover = Cover::new();
                cover.rebuild(&FuncdataCoverCtx::new(&fd), loaded);
                fd.vbank_mut().get_mut(loaded).unwrap().set_cover(cover);
                assert_eq!(
                    load_crosses_global_store(&fd, loaded),
                    writer_position == 2 && global_offset == 0x8000,
                    "high={via_high}, offset={global_offset:x}, position={writer_position}"
                );
            }
        }
    }
}

#[test]
fn levels_parse_and_reject() {
    let o = OptionIndexAliasGuard;
    assert_eq!(o.apply("off").unwrap().0, LEVEL_OFF);
    assert_eq!(o.apply("load").unwrap().0, LEVEL_LOAD);
    assert_eq!(o.apply("global").unwrap().0, LEVEL_GLOBAL);
    assert_eq!(o.apply("on").unwrap().0, LEVEL_GLOBAL);
    assert_eq!(o.apply("").unwrap().0, LEVEL_GLOBAL);
    assert_eq!(o.apply("full").unwrap().0, LEVEL_FULL);
    assert!(o.apply("sometimes").is_err());
}
