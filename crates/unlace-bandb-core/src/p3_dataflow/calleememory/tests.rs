use super::*;
use crate::calleehomes::tests::{Fx, Out, call_with_r8_argument, locked_home_call_on};
use crate::dtype::{Datatype, type_metatype};
use crate::fspec::ParameterPieces;
use unlace_base::space::{AddrSpace, addrspace_flags};

struct Program {
    code: Rc<AddrSpace>,
    constant: Rc<AddrSpace>,
    register: Rc<AddrSpace>,
    unique: Rc<AddrSpace>,
}

impl Program {
    fn new() -> Self {
        let space = |kind, name, index| {
            Rc::new(AddrSpace::new(
                kind,
                name,
                false,
                8,
                1,
                index,
                addrspace_flags::hasphysical,
                1,
                1,
            ))
        };
        Self {
            code: space(spacetype::IPTR_PROCESSOR, "ram", 1),
            constant: space(spacetype::IPTR_CONSTANT, "const", 0),
            register: space(spacetype::IPTR_PROCESSOR, "register", 2),
            unique: space(spacetype::IPTR_INTERNAL, "unique", 3),
        }
    }

    fn value(&self, space: &Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
        VarnodeData {
            space: Some(Rc::clone(space)),
            offset,
            size,
        }
    }

    fn reg(&self, offset: u64) -> VarnodeData {
        self.value(&self.register, offset, 8)
    }
    fn c(&self, value: u64) -> VarnodeData {
        self.value(&self.constant, value, 8)
    }
    fn op(&self, code: OpCode, out: Option<VarnodeData>, inputs: Vec<VarnodeData>) -> RawOp {
        RawOp { code, out, inputs }
    }
    fn ret(&self) -> RawOp {
        self.op(OpCode::CPUI_RETURN, None, vec![self.reg(0x40)])
    }
    fn load(&self, offset: u64) -> Vec<RawOp> {
        let pointer = self.value(&self.unique, 0, 8);
        vec![
            self.op(
                OpCode::CPUI_INT_ADD,
                Some(pointer.clone()),
                vec![self.reg(0x20), self.c(offset)],
            ),
            self.op(
                OpCode::CPUI_LOAD,
                Some(self.value(&self.register, 0, 4)),
                vec![self.c(1), pointer],
            ),
        ]
    }

    fn run(&self, instructions: Vec<Vec<RawOp>>) -> Option<CalleeMemory> {
        walk(
            |at| Some((1, instructions.get(at.get_offset() as usize)?.clone())),
            &Address::new(Rc::clone(&self.code), 0),
            Storage {
                space: 2,
                offset: 0x30,
                size: 8,
            },
            2,
            1,
            Some(Storage {
                space: 2,
                offset: 0x40,
                size: 8,
            }),
        )
    }
}

#[test]
fn a_leaf_reports_the_actual_read_and_write_bytes() {
    let p = Program::new();
    let mut ops = p.load(4);
    ops.push(p.op(
        OpCode::CPUI_STORE,
        None,
        vec![p.c(1), p.reg(0x20), p.value(&p.constant, 9, 4)],
    ));
    ops.push(p.ret());
    let summary = p.run(vec![ops]).unwrap();
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    assert_eq!(
        summary.reads,
        BTreeSet::from([Effect {
            root,
            offset: 4,
            size: 4
        }])
    );
    assert_eq!(
        summary.writes,
        BTreeSet::from([Effect {
            root,
            offset: 0,
            size: 4
        }])
    );
    assert!(summary.escapes.is_empty());
}

#[test]
fn branch_and_loop_reads_are_unioned_and_missing_paths_decline() {
    let p = Program::new();
    let branch = p.op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![p.value(&p.code, 2, 8), p.value(&p.register, 0x48, 1)],
    );
    let mut first = p.load(0);
    first.push(p.ret());
    let mut second = p.load(4);
    second.push(p.op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![p.value(&p.code, 2, 8), p.value(&p.register, 0x48, 1)],
    ));
    let summary = p
        .run(vec![
            vec![branch.clone()],
            first.clone(),
            second.clone(),
            vec![p.ret()],
        ])
        .unwrap();
    assert_eq!(summary.reads.len(), 2);
    assert!(p.run(vec![vec![branch], first]).is_none());
    assert!(
        p.run(vec![vec![p.op(
            OpCode::CPUI_BRANCH,
            None,
            vec![p.value(&p.code, 0, 8)]
        )]])
        .is_none()
    );
}

#[test]
fn pointer_stores_and_returns_retain_their_entry_identity() {
    let p = Program::new();
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), p.reg(0x20)],
            ),
            p.op(OpCode::CPUI_COPY, Some(p.reg(0)), vec![p.reg(0x20)]),
            p.ret(),
        ]])
        .unwrap();
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    assert!(summary.escapes.contains(&root));
    assert_eq!(
        summary.returns[0].values.get(&Storage {
            space: 2,
            offset: 0,
            size: 8
        }),
        Some(&Value::Pointer(root, 0))
    );
}

#[test]
fn positive_frame_pointer_stores_remain_deferred_after_overwrites() {
    let p = Program::new();
    let store_pointer = |p: &Program| {
        let slot = p.value(&p.unique, 0, 8);
        vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(slot.clone()),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(OpCode::CPUI_STORE, None, vec![p.c(1), slot, p.reg(0x20)]),
        ]
    };
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    let deferred = DeferredFrameEscape {
        offset: 16,
        size: 8,
        root,
    };
    let effect = Effect {
        root: Origin::Frame,
        offset: 16,
        size: 8,
    };

    let mut residual = store_pointer(&p);
    residual.push(p.ret());
    let summary = p.run(vec![residual]).unwrap();
    assert!(summary.deferred_frame_escapes.contains(&deferred));
    assert!(summary.escapes.is_empty());
    assert!(summary.writes.contains(&effect));

    for (offset, size) in [(16, 8), (20, 4)] {
        let slot = p.value(&p.unique, 8, 8);
        let mut ops = store_pointer(&p);
        ops.extend([
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(slot.clone()),
                vec![p.reg(0x30), p.c(offset)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), slot, p.value(&p.constant, 0x1234, size)],
            ),
            p.ret(),
        ]);
        let summary = p.run(vec![ops]).unwrap();
        assert!(summary.deferred_frame_escapes.contains(&deferred));
        assert!(summary.writes.contains(&effect));
    }
}

#[test]
fn exact_home_pointer_spills_survive_alias_guarded_writes_and_partial_overwrites() {
    let p = Program::new();
    let body = |p: &Program, home_offset: u64| {
        let home = p.value(&p.unique, 0, 8);
        let destination = p.value(&p.unique, 8, 8);
        let reloaded = p.reg(0x18);
        let reloaded_field = p.value(&p.unique, 16, 8);
        let partial = p.value(&p.unique, 24, 8);
        vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(home.clone()),
                vec![p.reg(0x30), p.c(home_offset)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), home.clone(), p.reg(0x20)],
            ),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(destination.clone()),
                vec![p.reg(0x20), p.c(4)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), destination, p.value(&p.constant, 0x1234, 4)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(reloaded.clone()),
                vec![p.c(1), home.clone()],
            ),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(reloaded_field.clone()),
                vec![reloaded, p.c(4)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.value(&p.register, 0, 4)),
                vec![p.c(1), reloaded_field],
            ),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(partial.clone()),
                vec![p.reg(0x30), p.c(home_offset + 4)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), partial, p.value(&p.constant, 0, 4)],
            ),
            p.ret(),
        ]
    };

    let branch = p.op(
        OpCode::CPUI_CBRANCH,
        None,
        vec![p.value(&p.code, 2, 8), p.value(&p.register, 0x48, 1)],
    );
    let summary = p
        .run(vec![vec![branch], body(&p, 16), vec![p.ret()]])
        .unwrap();
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    let home = DeferredFrameEscape {
        offset: 16,
        size: 8,
        root,
    };
    let through_destination = Effect {
        root,
        offset: 4,
        size: 4,
    };
    assert!(summary.deferred_frame_escapes.contains(&home));
    assert!(
        summary
            .home_write_conditions
            .contains(&(home, through_destination))
    );
    assert!(summary.writes.contains(&Effect {
        root: Origin::Frame,
        offset: 20,
        size: 4,
    }));
    assert!(summary.reads.contains(&through_destination));
    assert!(
        summary
            .returns
            .iter()
            .any(|state| state.arguments_clobbered)
    );

    assert!(p.run(vec![body(&p, 40)]).is_none());
}

#[test]
fn unknown_full_width_positive_stores_still_decline_the_summary() {
    let p = Program::new();
    let slot = p.value(&p.unique, 0, 8);
    assert!(
        p.run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(slot.clone()),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), slot, p.value(&p.unique, 0x80, 8)],
            ),
            p.ret(),
        ]])
        .is_none()
    );
}

fn private_pointer_reload_summary(p: &Program, partial: bool) -> Option<CalleeMemory> {
    let slot = p.value(&p.unique, 0, 8);
    let mut ops = vec![
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(slot.clone()),
            vec![p.reg(0x30), p.c((-16i64) as u64)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), slot.clone(), p.reg(0x20)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), p.reg(0x20), p.value(&p.constant, 0x1234, 4)],
        ),
    ];
    if partial {
        let high_half = p.value(&p.unique, 8, 8);
        ops.extend([
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(high_half.clone()),
                vec![slot.clone(), p.c(4)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), high_half, p.value(&p.constant, 0, 4)],
            ),
        ]);
    }
    ops.extend([
        p.op(OpCode::CPUI_LOAD, Some(p.reg(0x18)), vec![p.c(1), slot]),
        p.op(
            OpCode::CPUI_LOAD,
            Some(p.value(&p.register, 0, 4)),
            vec![p.c(1), p.reg(0x18)],
        ),
        p.ret(),
    ]);
    p.run(vec![ops])
}

#[test]
fn private_pointer_reload_requires_disjoint_actual_write_bytes() {
    let p = Program::new();
    let summary = private_pointer_reload_summary(&p, false).unwrap();
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    assert!(summary.reads.contains(&Effect {
        root,
        offset: 0,
        size: 4
    }));
    assert!(summary.deferred_frame_escapes.is_empty());
    assert!(summary.home_write_conditions.is_empty());
    assert!(private_pointer_reload_summary(&p, true).is_none());

    for (offset, usable) in [
        (-64, true),
        (-116, true),
        (-114, false),
        (-112, false),
        (-108, false),
        (-104, true),
    ] {
        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(offset);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary.clone()));
        assert_eq!(
            test_call_summary_is_usable(&fx.fd, call, (-32i64) as u64, 8),
            usable,
            "actual write at {offset}"
        );
    }
    let mut fx = Fx::with_stack_views();
    let unknown = fx
        .fd
        .new_varnode(8, &Address::new(Rc::clone(&fx.reg), 0x88), None);
    let call = make_call_site(&mut fx, unknown);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert!(!test_call_summary_is_usable(
        &fx.fd,
        call,
        (-32i64) as u64,
        8
    ));
}

#[test]
fn argument_writes_must_not_alias_the_frame_return_target() {
    let p = Program::new();
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.reg(0x20), p.value(&p.constant, 0x1234, 4)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.reg(0x40)),
                vec![p.c(1), p.reg(0x30)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.frame_return_read);
    for (offset, usable) in [
        (-64, true),
        (-100, true),
        (-98, false),
        (-96, false),
        (-90, false),
        (-88, true),
    ] {
        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(offset);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary.clone()));
        assert_eq!(
            test_call_summary_is_usable(&fx.fd, call, (-32i64) as u64, 8),
            usable,
            "actual write at {offset}"
        );
    }
    let mut fx = Fx::with_stack_views();
    let unknown = fx
        .fd
        .new_varnode(8, &Address::new(Rc::clone(&fx.reg), 0x88), None);
    let call = make_call_site(&mut fx, unknown);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert!(!test_call_summary_is_usable(
        &fx.fd,
        call,
        (-32i64) as u64,
        8
    ));
}

#[test]
fn stack_adjustment_flags_do_not_publish_pointer_fragments() {
    let p = Program::new();
    for publish_byte in [false, true] {
        let byte = p.value(&p.unique, 0, 1);
        let mut ops = vec![
            p.op(
                OpCode::CPUI_INT_CARRY,
                Some(p.value(&p.register, 0x58, 1)),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_INT_SBORROW,
                Some(p.value(&p.register, 0x59, 1)),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_INT_SUB,
                Some(p.reg(0x30)),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_SUBPIECE,
                Some(byte.clone()),
                vec![p.reg(0x30), p.c(0)],
            ),
        ];
        if publish_byte {
            ops.push(p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), byte.clone()],
            ));
        }
        ops.extend([
            p.op(
                OpCode::CPUI_POPCOUNT,
                Some(byte.clone()),
                vec![byte.clone()],
            ),
            p.op(
                OpCode::CPUI_INT_AND,
                Some(byte.clone()),
                vec![byte.clone(), p.value(&p.constant, 1, 1)],
            ),
            p.op(
                OpCode::CPUI_INT_EQUAL,
                Some(p.value(&p.register, 0x5a, 1)),
                vec![byte, p.value(&p.constant, 0, 1)],
            ),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(p.reg(0x30)),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.ret(),
        ]);
        let summary = p.run(vec![ops]).unwrap();
        assert_eq!(
            summary.lossy_pointer_roots.contains(&Origin::Frame),
            publish_byte
        );
    }
}

#[test]
fn flag_scratch_requires_exact_consumers_and_keeps_pointer_register_clobbers() {
    let p = Program::new();
    for (temporary_size, read_size, flag_size) in [(2, 1, 1), (1, 1, 2)] {
        let temporary = p.value(&p.unique, 0, temporary_size);
        let summary = p
            .run(vec![vec![
                p.op(
                    OpCode::CPUI_SUBPIECE,
                    Some(temporary),
                    vec![p.reg(0x30), p.c(0)],
                ),
                p.op(
                    OpCode::CPUI_INT_EQUAL,
                    Some(p.value(&p.register, 0x58, flag_size)),
                    vec![
                        p.value(&p.unique, 0, read_size),
                        p.value(&p.constant, 0, read_size),
                    ],
                ),
                p.ret(),
            ]])
            .unwrap();
        assert!(summary.lossy_pointer_roots.contains(&Origin::Frame));
    }
    let summary = p
        .run(vec![vec![
            p.op(OpCode::CPUI_COPY, Some(p.reg(0x20)), vec![p.reg(0x30)]),
            p.op(
                OpCode::CPUI_INT_EQUAL,
                Some(p.value(&p.register, 0x20, 1)),
                vec![p.reg(0x30), p.c(0)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.lossy_pointer_roots.contains(&Origin::Frame));
}

#[test]
fn full_width_parity_scratch_is_safe_only_when_it_cannot_publish() {
    let p = Program::new();
    for publish in [false, true] {
        let masked = p.value(&p.unique, 0, 8);
        let count = p.value(&p.unique, 16, 1);
        let mut ops = vec![p.op(
            OpCode::CPUI_INT_AND,
            Some(masked.clone()),
            vec![p.reg(0x30), p.c(0xff)],
        )];
        if publish {
            ops.push(p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), masked.clone()],
            ));
        }
        ops.extend([
            p.op(OpCode::CPUI_POPCOUNT, Some(count.clone()), vec![masked]),
            p.op(
                OpCode::CPUI_INT_AND,
                Some(count.clone()),
                vec![count.clone(), p.value(&p.constant, 1, 1)],
            ),
            p.op(
                OpCode::CPUI_INT_EQUAL,
                Some(p.value(&p.register, 0x58, 1)),
                vec![count, p.value(&p.constant, 0, 1)],
            ),
            p.ret(),
        ]);
        let summary = p.run(vec![ops]);
        if publish {
            assert!(summary.is_none());
        } else {
            assert!(summary.unwrap().lossy_pointer_roots.is_empty());
        }
    }
}

#[test]
fn frame_flags_are_observers_when_published_or_returned() {
    let p = Program::new();
    let flag = p.value(&p.register, 0x10, 1);
    let compare = p.op(
        OpCode::CPUI_INT_LESS,
        Some(flag.clone()),
        vec![p.reg(0x30), p.c(16)],
    );
    let unpublished = p.run(vec![vec![compare.clone(), p.ret()]]).unwrap();
    assert!(unpublished.lossy_pointer_roots.is_empty());
    let published = p
        .run(vec![vec![
            compare,
            p.op(OpCode::CPUI_STORE, None, vec![p.c(1), p.c(0x2000), flag]),
            p.ret(),
        ]])
        .unwrap();
    assert!(published.lossy_pointer_roots.contains(&Origin::Frame));

    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = make_call_site(&mut fx, actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(unpublished));
    set_call_output_register(&mut fx, call, 0x10);
    assert_eq!(unobserved(&fx.fd, call, (-32i64) as u64, 8, 0xff), None);
}

#[test]
fn opaque_memory_and_control_flow_never_prove_a_call_safe() {
    let p = Program::new();
    let indirect = p.op(OpCode::CPUI_LOAD, Some(p.reg(0)), vec![p.c(1), p.c(0x2000)]);
    let dereference = p.op(
        OpCode::CPUI_LOAD,
        Some(p.value(&p.register, 0, 4)),
        vec![p.c(1), p.reg(0)],
    );
    assert!(p.run(vec![vec![indirect, dereference, p.ret()]]).is_none());
    for code in [
        OpCode::CPUI_CALL,
        OpCode::CPUI_CALLIND,
        OpCode::CPUI_CALLOTHER,
        OpCode::CPUI_BRANCHIND,
    ] {
        assert!(
            p.run(vec![vec![p.op(code, None, vec![p.reg(0x20)]), p.ret()]])
                .is_none()
        );
    }
    assert!(
        p.run(vec![vec![
            p.op(OpCode::CPUI_CBRANCH, None, vec![p.c(1)]),
            p.ret()
        ]])
        .is_none()
    );
}

#[test]
fn a_rewritten_return_address_does_not_end_a_complete_body() {
    let p = Program::new();
    let return_load = p.op(
        OpCode::CPUI_LOAD,
        Some(p.reg(0x40)),
        vec![p.c(1), p.reg(0x30)],
    );
    assert!(p.run(vec![vec![p.ret()]]).is_none());
    assert!(
        p.run(vec![vec![
            p.op(OpCode::CPUI_COPY, Some(p.reg(0)), vec![p.c(1)]),
            return_load.clone(),
            p.ret(),
        ]])
        .is_some()
    );
    for (offset, value) in [(0, p.reg(0x20)), (1, p.value(&p.constant, 1, 1))] {
        let slot = p.value(&p.unique, 0, 8);
        assert!(
            p.run(vec![vec![
                p.op(
                    OpCode::CPUI_INT_ADD,
                    Some(slot.clone()),
                    vec![p.reg(0x30), p.c(offset)]
                ),
                p.op(OpCode::CPUI_STORE, None, vec![p.c(1), slot, value]),
                return_load.clone(),
                p.ret(),
            ]])
            .is_none()
        );
    }
    assert!(
        p.run(vec![vec![
            p.op(OpCode::CPUI_COPY, Some(p.reg(0x40)), vec![p.reg(0x20)]),
            p.ret()
        ]])
        .is_none()
    );
}

#[test]
fn local_spills_preserve_pointers_and_partial_register_writes_forget_them() {
    let p = Program::new();
    let slot = p.value(&p.unique, 0, 8);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(slot.clone()),
                vec![p.reg(0x30), p.c((-16i64) as u64)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), slot.clone(), p.reg(0x20)],
            ),
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), slot]),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.value(&p.register, 0, 4)),
                vec![p.c(1), p.reg(0x10)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert_eq!(summary.reads.len(), 1);
    assert!(summary.escapes.is_empty());
    assert!(
        p.run(vec![vec![
            p.op(OpCode::CPUI_COPY, Some(p.reg(0)), vec![p.reg(0x20)]),
            p.op(
                OpCode::CPUI_COPY,
                Some(p.value(&p.register, 0, 4)),
                vec![p.value(&p.constant, 1, 4)]
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.value(&p.register, 0x10, 4)),
                vec![p.c(1), p.reg(0)]
            ),
            p.ret(),
        ]])
        .is_none()
    );
}

#[test]
fn incoming_stack_pointers_keep_their_slot_identity_through_spills() {
    let p = Program::new();
    let incoming = p.value(&p.unique, 0, 8);
    let spill = p.value(&p.unique, 8, 8);
    let field = p.value(&p.unique, 16, 8);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(incoming.clone()),
                vec![p.reg(0x30), p.c(8)],
            ),
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), incoming]),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(spill.clone()),
                vec![p.reg(0x30), p.c((-16i64) as u64)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), spill.clone(), p.reg(0x10)],
            ),
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x18)), vec![p.c(1), spill]),
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(field.clone()),
                vec![p.reg(0x18), p.c(4)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.value(&p.register, 0, 4)),
                vec![p.c(1), field],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert_eq!(
        summary.reads,
        BTreeSet::from([
            Effect {
                root: Origin::Frame,
                offset: 8,
                size: 8
            },
            Effect {
                root: Origin::StackArgument(8, 8),
                offset: 4,
                size: 4
            },
        ])
    );
    assert!(summary.escapes.is_empty());
}

#[test]
fn direct_stack_accesses_outside_arguments_are_visible_effects() {
    let p = Program::new();
    let slot = p.value(&p.unique, 0, 8);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(slot.clone()),
                vec![p.reg(0x30), p.c(24)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(p.value(&p.register, 0, 4)),
                vec![p.c(1), slot.clone()],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), slot, p.value(&p.constant, 9, 4)],
            ),
            p.ret(),
        ]])
        .unwrap();
    let effect = Effect {
        root: Origin::Frame,
        offset: 24,
        size: 4,
    };
    assert!(summary.reads.contains(&effect));
    assert!(summary.writes.contains(&effect));
}

#[test]
fn partial_and_aliased_argument_writes_cannot_restore_an_incoming_pointer() {
    let p = Program::new();
    let slot = p.value(&p.unique, 0, 8);
    for write in [
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), slot.clone(), p.value(&p.constant, 1, 1)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), p.reg(0x20), p.value(&p.constant, 1, 4)],
        ),
    ] {
        assert!(
            p.run(vec![vec![
                p.op(
                    OpCode::CPUI_INT_ADD,
                    Some(slot.clone()),
                    vec![p.reg(0x30), p.c(8)]
                ),
                write,
                p.op(
                    OpCode::CPUI_LOAD,
                    Some(p.reg(0)),
                    vec![p.c(1), slot.clone()]
                ),
                p.op(
                    OpCode::CPUI_LOAD,
                    Some(p.value(&p.register, 0, 4)),
                    vec![p.c(1), p.reg(0)]
                ),
                p.ret(),
            ]])
            .is_none()
        );
    }
}

fn make_call_site_with_stack_base(
    fx: &mut Fx,
    actual: crate::context::VarnodeId,
    stack_base: u64,
) -> OpId {
    let stack_ref = fx.fd.new_varnode(
        8,
        &Address::new(Rc::clone(&fx.stack), (-56i64) as u64),
        None,
    );
    let (_, placeholder) = fx.emit(OpCode::CPUI_COPY, &[stack_ref], Some(Out::Unique(8)));
    let placeholder = placeholder.unwrap();
    let target = fx.constant(8, 0x2000);
    let call_op = fx
        .emit(OpCode::CPUI_CALL, &[target, actual, placeholder], None)
        .0;
    let mut call = locked_home_call_on(fx, call_op, stack_base, false);
    let value_type = Rc::new(Datatype::new(8, type_metatype::TYPE_PTR));
    call.proto_mut().set_param(
        0,
        "rect",
        &ParameterPieces {
            addr: Address::new(Rc::clone(&fx.reg), 0x20),
            type_: Some(Rc::clone(&value_type)),
            flags: 0,
        },
    );
    call.proto_mut().set_param(
        1,
        "stack_arg",
        &ParameterPieces {
            addr: Address::new(Rc::clone(&fx.stack), stack_base),
            type_: Some(value_type),
            flags: 0,
        },
    );
    call.proto_mut().resolve_extra_pop();
    call.resolve_spacebase_relative(&mut fx.fd, placeholder)
        .unwrap();
    fx.fd.push_call_specs(call);
    call_op
}

fn make_call_site(fx: &mut Fx, actual: crate::context::VarnodeId) -> OpId {
    make_call_site_with_stack_base(fx, actual, 40)
}

fn install_call_summary_with_stack_base(
    fx: &mut Fx,
    actual: crate::context::VarnodeId,
    stack_base: u64,
) -> OpId {
    let call_op = make_call_site_with_stack_base(fx, actual, stack_base);
    let root = Origin::Register(Storage {
        space: fx.reg.get_index(),
        offset: 0x20,
        size: 8,
    });
    let home = DeferredFrameEscape {
        offset: 16,
        size: 8,
        root,
    };
    let effect = Effect {
        root,
        offset: 0,
        size: 8,
    };
    let mut summary = CalleeMemory {
        complete: true,
        ..Default::default()
    };
    summary.deferred_frame_escapes.insert(home);
    summary.home_write_conditions.insert((home, effect));
    summary.writes.insert(effect);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    call_op
}

fn install_call_summary(fx: &mut Fx, actual: crate::context::VarnodeId) -> OpId {
    install_call_summary_with_stack_base(fx, actual, 40)
}

#[test]
fn complete_body_without_a_parameter_store_remains_a_call_barrier() {
    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = make_call_site(&mut fx, actual);
    fx.fd.callee_memory_mut().insert(
        (fx.reg.get_index(), 0x2000),
        Rc::new(CalleeMemory {
            complete: true,
            ..Default::default()
        }),
    );
    let query = (-32i64) as u64;
    assert!(test_call_summary_is_usable(&fx.fd, call, query, 8));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), Some(0xff));
    let index = fx.fd.get_call_specs_index(call).unwrap();
    fx.fd
        .get_call_specs_mut(index)
        .proto_mut()
        .copy(&crate::fspec::FuncProto::new());
    assert!(!fx.fd.get_call_specs(index).proto().has_store());
    assert!(!test_call_summary_is_usable(&fx.fd, call, query, 8));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
}

#[test]
fn home_write_conditions_are_checked_against_each_call_argument_before_use() {
    let query = (-32i64) as u64;

    let mut fx = Fx::with_stack_views();
    let disjoint_actual = fx.frame_pointer(-64);
    let call = install_call_summary(&mut fx, disjoint_actual);
    assert!(test_call_summary_is_usable(&fx.fd, call, query, 8));

    let mut fx = Fx::with_stack_views();
    let overlapping_actual = fx.frame_pointer(-80);
    let call = install_call_summary(&mut fx, overlapping_actual);
    assert!(!test_call_summary_is_usable(&fx.fd, call, query, 8));

    let mut fx = Fx::with_stack_views();
    let unresolved_actual = fx
        .fd
        .new_varnode(8, &Address::new(Rc::clone(&fx.reg), 0x88), None);
    let call = install_call_summary(&mut fx, unresolved_actual);
    assert!(!test_call_summary_is_usable(&fx.fd, call, query, 8));
}

#[test]
fn non_win64_frame_spill_conditions_use_physical_aliasing_without_discharge() {
    let query = (-32i64) as u64;

    let mut fx = Fx::with_stack_views();
    let disjoint_actual = fx.frame_pointer(-64);
    let call = install_call_summary_with_stack_base(&mut fx, disjoint_actual, 8);
    let index = fx.fd.get_call_specs_index(call).unwrap();
    let call_specs = fx.fd.get_call_specs(index);
    assert!(
        crate::calleehomes::callee_frame_cell(&fx.fd, call_specs, 16, 8,)
            .is_some_and(|(start, size)| start == ((-48i64) as u64) && size == 8)
    );
    assert!(crate::calleehomes::caller_home_cell(&fx.fd, call_specs, 16, 8,).is_none());
    assert!(crate::calleehomes::callee_frame_cell(&fx.fd, call_specs, i64::MIN, 8,).is_none());
    assert!(crate::calleehomes::callee_frame_cell(&fx.fd, call_specs, 16, u32::MAX,).is_none());
    assert!(test_call_summary_is_usable(&fx.fd, call, query, 8));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);

    let mut fx = Fx::with_stack_views();
    let overlapping_actual = fx.frame_pointer(-48);
    let call = install_call_summary_with_stack_base(&mut fx, overlapping_actual, 8);
    assert!(!test_call_summary_is_usable(&fx.fd, call, query, 8));

    let mut fx = Fx::with_stack_views();
    let unresolved_actual = fx
        .fd
        .new_varnode(8, &Address::new(Rc::clone(&fx.reg), 0x88), None);
    let call = install_call_summary_with_stack_base(&mut fx, unresolved_actual, 8);
    assert!(!test_call_summary_is_usable(&fx.fd, call, query, 8));
}

fn set_call_output_register(fx: &mut Fx, call: OpId, offset: u64) {
    let index = fx.fd.get_call_specs_index(call).unwrap();
    let output_type = Rc::new(Datatype::new(8, type_metatype::TYPE_PTR));
    fx.fd
        .get_call_specs_mut(index)
        .proto_mut()
        .set_output(&ParameterPieces {
            addr: Address::new(Rc::clone(&fx.reg), offset),
            type_: Some(output_type),
            flags: 0,
        });
}

fn set_call_return_states(fx: &mut Fx, returns: Vec<State>) {
    let key = (fx.reg.get_index(), 0x2000);
    let mut summary = fx.fd.callee_memory().get(&key).unwrap().as_ref().clone();
    summary.returns = returns;
    fx.fd.callee_memory_mut().insert(key, Rc::new(summary));
}

#[test]
fn unchanged_custom_output_aliasing_home_root_blocks_but_constant_output_is_safe() {
    let query = (-32i64) as u64;

    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = install_call_summary(&mut fx, actual);
    set_call_output_register(&mut fx, call, 0x20);
    set_call_return_states(&mut fx, vec![State::default()]);
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);

    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = install_call_summary(&mut fx, actual);
    set_call_output_register(&mut fx, call, 0x88);
    set_call_return_states(&mut fx, vec![State::default()]);
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);

    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = install_call_summary(&mut fx, actual);
    set_call_output_register(&mut fx, call, 0x20);
    let mut returned = State::default();
    returned
        .write(
            &VarnodeData {
                space: Some(Rc::clone(&fx.reg)),
                offset: 0x20,
                size: 8,
            },
            Value::Constant(7),
        )
        .unwrap();
    set_call_return_states(&mut fx, vec![returned]);
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), Some(0xff));
}

fn home_reload_summary(p: &Program, width: u32) -> CalleeMemory {
    let home = p.value(&p.unique, 0, 8);
    let mut ops = vec![
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(home.clone()),
            vec![p.reg(0x30), p.c(16)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), home.clone(), p.reg(0x20)],
        ),
        p.op(
            OpCode::CPUI_LOAD,
            Some(p.value(&p.register, 0x10, width)),
            vec![p.c(1), home],
        ),
    ];
    if width == 8 {
        ops.push(p.op(OpCode::CPUI_COPY, Some(p.reg(0x18)), vec![p.reg(0x10)]));
    }
    ops.push(p.ret());
    p.run(vec![ops]).unwrap()
}

#[test]
fn only_exact_pointer_width_home_reloads_can_be_discharged() {
    let query = (-32i64) as u64;

    let p = Program::new();
    let exact = home_reload_summary(&p, 8);
    assert!(exact.lossy_pointer_roots.is_empty());
    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = make_call_site(&mut fx, actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(exact));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), Some(0xff));

    for width in [4, 16] {
        let p = Program::new();
        let summary = home_reload_summary(&p, width);
        assert!(
            summary
                .deferred_frame_escapes
                .iter()
                .any(|home| home.offset == 16)
        );
        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(-64);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
        assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
    }
}

fn home_with_other_register_loss(p: &Program) -> CalleeMemory {
    let home = p.value(&p.unique, 0, 8);
    p.run(vec![vec![
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(home.clone()),
            vec![p.reg(0x30), p.c(16)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), home.clone(), p.reg(0x20)],
        ),
        p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), home]),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), p.c(0x8000), p.value(&p.register, 0x28, 4)],
        ),
        p.ret(),
    ]])
    .unwrap()
}

#[test]
fn lossy_r8_argument_cannot_expose_a_discharged_rcx_home() {
    let query = (-32i64) as u64;
    let p = Program::new();
    let summary = home_with_other_register_loss(&p);
    assert!(summary.complete);
    assert!(summary.deferred_frame_escapes.iter().any(|home| {
        home.root
            == Origin::Register(Storage {
                space: 2,
                offset: 0x20,
                size: 8,
            })
    }));
    assert!(summary.lossy_pointer_ranges.contains(&Storage {
        space: 2,
        offset: 0x28,
        size: 4,
    }));

    let mut fx = Fx::with_stack_views();
    let rcx_actual = fx.frame_pointer(-64);
    let r8_actual = fx.frame_pointer(-40);
    let call = call_with_r8_argument(&mut fx, rcx_actual, 40, r8_actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary.clone()));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);

    let mut fx = Fx::with_stack_views();
    let rcx_actual = fx.frame_pointer(-64);
    let r8_actual = fx.constant(8, 0x8000);
    let call = call_with_r8_argument(&mut fx, rcx_actual, 40, r8_actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), Some(0xff));
}

#[test]
fn partial_known_register_overwrite_keeps_the_pointer_root_sticky() {
    let query = (-32i64) as u64;
    let p = Program::new();
    let home = p.value(&p.unique, 0, 8);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(home.clone()),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), home.clone(), p.reg(0x20)],
            ),
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), home]),
            p.op(OpCode::CPUI_COPY, Some(p.reg(0x28)), vec![p.reg(0x20)]),
            p.op(
                OpCode::CPUI_COPY,
                Some(p.value(&p.register, 0x28, 4)),
                vec![p.value(&p.constant, 7, 4)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x8000), p.value(&p.register, 0x2c, 4)],
            ),
            p.ret(),
        ]])
        .unwrap();
    let root = Origin::Register(Storage {
        space: 2,
        offset: 0x20,
        size: 8,
    });
    assert!(summary.complete);
    assert!(summary.lossy_pointer_roots.contains(&root));

    let mut fx = Fx::with_stack_views();
    let rcx_actual = fx.frame_pointer(-64);
    let r8_actual = fx.frame_pointer(-40);
    let call = call_with_r8_argument(&mut fx, rcx_actual, 40, r8_actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
}

#[test]
fn strict_observer_checks_keep_fragment_barriers_without_homes() {
    let query = (-32i64) as u64;
    let p = Program::new();
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x8000), p.value(&p.register, 0x28, 4)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.complete);
    assert!(summary.deferred_frame_escapes.is_empty());
    for constant_actual in [false, true] {
        let mut fx = Fx::with_stack_views();
        let rcx_actual = fx.frame_pointer(-64);
        let r8_actual = if constant_actual {
            fx.constant(8, 0x8000)
        } else {
            fx.frame_pointer(-40)
        };
        let call = call_with_r8_argument(&mut fx, rcx_actual, 40, r8_actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary.clone()));
        assert_eq!(
            unobserved_strict(&fx.fd, call, query, 8, 0xff),
            constant_actual.then_some(0xff)
        );
    }

    let pointer = p.value(&p.unique, 0, 8);
    let fragment = p.value(&p.unique, 8, 4);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(pointer.clone()),
                vec![p.reg(0x30), p.c(40)],
            ),
            p.op(
                OpCode::CPUI_LOAD,
                Some(fragment.clone()),
                vec![p.c(1), pointer],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x8000), fragment],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.complete);
    assert!(summary.deferred_frame_escapes.is_empty());
    assert!(summary.lossy_pointer_roots.is_empty());
    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = make_call_site(&mut fx, actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert_eq!(unobserved_strict(&fx.fd, call, query, 8, 0xff), None);
}

fn home_with_partial_stack_argument_read(p: &Program, width: u32) -> CalleeMemory {
    let home = p.value(&p.unique, 0, 8);
    let stack_arg = p.value(&p.unique, 8, 8);
    let loaded = p.value(&p.unique, 16, width);
    p.run(vec![vec![
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(home.clone()),
            vec![p.reg(0x30), p.c(16)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), home.clone(), p.reg(0x20)],
        ),
        p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), home]),
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(stack_arg.clone()),
            vec![p.reg(0x30), p.c(40)],
        ),
        p.op(
            OpCode::CPUI_LOAD,
            Some(loaded.clone()),
            vec![p.c(1), stack_arg],
        ),
        p.op(OpCode::CPUI_STORE, None, vec![p.c(1), p.c(0x8000), loaded]),
        p.ret(),
    ]])
    .unwrap()
}

#[test]
fn partial_and_bulk_stack_argument_reads_block_home_discharge() {
    let query = (-32i64) as u64;
    for width in [4, 16] {
        let p = Program::new();
        let summary = home_with_partial_stack_argument_read(&p, width);
        assert!(summary.complete);
        assert!(summary.lossy_pointer_roots.is_empty());
        assert!(summary.lossy_pointer_ranges.is_empty());
        assert!(summary.reads.contains(&Effect {
            root: Origin::Frame,
            offset: 40,
            size: width,
        }));

        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(-64);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
        assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
    }
}

#[test]
fn lossy_provenance_overflow_blocks_unobserved_proofs() {
    let query = (-32i64) as u64;
    let mut fx = Fx::with_stack_views();
    let actual = fx.frame_pointer(-64);
    let call = install_call_summary(&mut fx, actual);
    let key = (fx.reg.get_index(), 0x2000);
    let mut summary = fx.fd.callee_memory().get(&key).unwrap().as_ref().clone();
    summary.lossy_pointer_overflow = true;
    assert!(summary.lossy_pointer_roots.is_empty());
    fx.fd.callee_memory_mut().insert(key, Rc::new(summary));
    assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
}

#[test]
fn initialized_scalar_fragments_do_not_hide_sticky_pointer_losses() {
    let p = Program::new();
    let stack = Storage {
        space: 2,
        offset: 0x30,
        size: 8,
    };
    let low_r8 = p.value(&p.register, 0x28, 4);
    let (roots, ranges) = pointer_sources(&State::default(), &low_r8, 2, stack);
    assert!(roots.is_empty());
    assert!(ranges.contains(&Storage {
        space: 2,
        offset: 0x28,
        size: 4,
    }));

    let mut scalar = State::default();
    scalar.write(&low_r8, Value::Unknown).unwrap();
    let (roots, ranges) = pointer_sources(&scalar, &low_r8, 2, stack);
    assert!(roots.is_empty());
    assert!(ranges.is_empty());

    let mut partial_scalar = State::default();
    partial_scalar
        .write(&p.value(&p.register, 0x28, 2), Value::Unknown)
        .unwrap();
    let (roots, ranges) = pointer_sources(&partial_scalar, &low_r8, 2, stack);
    assert!(roots.is_empty());
    assert!(ranges.contains(&Storage {
        space: 2,
        offset: 0x28,
        size: 4,
    }));

    let (roots, ranges) = pointer_sources(&partial_scalar, &p.reg(0x28), 2, stack);
    assert!(roots.is_empty());
    assert!(ranges.contains(&Storage {
        space: 2,
        offset: 0x28,
        size: 8,
    }));

    let pointer_root = Origin::Register(Storage {
        space: 2,
        offset: 0x28,
        size: 8,
    });
    scalar
        .write(&p.reg(0x28), Value::Pointer(pointer_root, 0))
        .unwrap();
    let (roots, ranges) = pointer_sources(&scalar, &low_r8, 2, stack);
    assert!(roots.contains(&pointer_root));
    assert!(ranges.contains(&Storage {
        space: 2,
        offset: 0x28,
        size: 4,
    }));

    let mut summary = CalleeMemory::default();
    summary.note_lossy_sources(roots, ranges);
    scalar.write(&low_r8, Value::Unknown).unwrap();
    let (roots, ranges) = pointer_sources(&scalar, &low_r8, 2, stack);
    assert!(roots.is_empty());
    assert!(ranges.is_empty());
    assert!(summary.lossy_pointer_roots.contains(&pointer_root));
}

fn truncation_publication_summary(p: &Program, after_home: bool) -> CalleeMemory {
    let truncated = p.value(&p.unique, 0, 4);
    let home = p.value(&p.unique, 8, 8);
    let mut ops = Vec::new();
    if !after_home {
        ops.extend([
            p.op(
                OpCode::CPUI_SUBPIECE,
                Some(truncated.clone()),
                vec![p.reg(0x20), p.c(0)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), truncated.clone()],
            ),
        ]);
    }
    ops.extend([
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(home.clone()),
            vec![p.reg(0x30), p.c(16)],
        ),
        p.op(
            OpCode::CPUI_STORE,
            None,
            vec![p.c(1), home.clone(), p.reg(0x20)],
        ),
    ]);
    if after_home {
        ops.extend([
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), home]),
            p.op(
                OpCode::CPUI_SUBPIECE,
                Some(truncated.clone()),
                vec![p.reg(0x10), p.c(0)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), truncated],
            ),
        ]);
    }
    ops.push(p.ret());
    p.run(vec![ops]).unwrap()
}

#[test]
fn narrow_pointer_publication_before_or_after_homing_blocks_discharge() {
    let query = (-32i64) as u64;
    for after_home in [false, true] {
        let p = Program::new();
        let summary = truncation_publication_summary(&p, after_home);
        let root = Origin::Register(Storage {
            space: 2,
            offset: 0x20,
            size: 8,
        });
        assert!(
            summary
                .deferred_frame_escapes
                .iter()
                .any(|home| home.root == root)
        );
        assert!(summary.lossy_pointer_roots.contains(&root));

        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(-64);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
        assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
    }
}

fn partial_register_copy_summary(p: &Program, after_home: bool) -> CalleeMemory {
    let low_register = p.value(&p.register, 0x20, 4);
    let low_copy = p.value(&p.unique, 0, 4);
    let home = p.value(&p.unique, 8, 8);
    let lossy_copy = p.op(
        OpCode::CPUI_COPY,
        Some(low_copy.clone()),
        vec![low_register],
    );
    let publish = p.op(
        OpCode::CPUI_STORE,
        None,
        vec![p.c(1), p.c(0x2000), low_copy],
    );
    let save = [
        p.op(
            OpCode::CPUI_INT_ADD,
            Some(home.clone()),
            vec![p.reg(0x30), p.c(16)],
        ),
        p.op(OpCode::CPUI_STORE, None, vec![p.c(1), home, p.reg(0x20)]),
    ];
    let mut ops = Vec::new();
    if after_home {
        ops.extend(save);
        ops.extend([lossy_copy, publish]);
    } else {
        ops.extend([lossy_copy, publish]);
        ops.extend(save);
    }
    ops.push(p.ret());
    p.run(vec![ops]).unwrap()
}

#[test]
fn partial_register_copy_before_or_after_homing_blocks_discharge() {
    let query = (-32i64) as u64;
    for after_home in [false, true] {
        let p = Program::new();
        let summary = partial_register_copy_summary(&p, after_home);
        let root = Origin::Register(Storage {
            space: 2,
            offset: 0x20,
            size: 8,
        });
        assert!(
            summary
                .deferred_frame_escapes
                .iter()
                .any(|home| home.root == root)
        );
        assert!(
            summary
                .lossy_pointer_ranges
                .iter()
                .any(|range| { range.space == 2 && range.offset == 0x20 && range.size == 4 })
        );

        let mut fx = Fx::with_stack_views();
        let actual = fx.frame_pointer(-64);
        let call = make_call_site(&mut fx, actual);
        fx.fd
            .callee_memory_mut()
            .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
        assert_eq!(unobserved(&fx.fd, call, query, 8, 0xff), None);
    }
}

#[test]
fn a_partial_stack_register_view_is_tied_to_the_frame_root() {
    let p = Program::new();
    let stack = Storage {
        space: 2,
        offset: 0x30,
        size: 8,
    };
    let input = p.value(&p.register, 0x30, 4);
    let (roots, ranges) = pointer_sources(&State::default(), &input, 2, stack);
    assert!(roots.contains(&Origin::Frame));
    assert!(ranges.contains(&Storage {
        space: 2,
        offset: 0x30,
        size: 4,
    }));
}

#[test]
fn lossy_frame_publication_blocks_an_unrelated_argument_home() {
    for (publish_frame, after_home) in [(false, false), (true, false), (true, true)] {
        let p = Program::new();
        let home = p.value(&p.unique, 0, 8);
        let mut ops = vec![
            p.op(
                OpCode::CPUI_INT_ADD,
                Some(home.clone()),
                vec![p.reg(0x30), p.c(16)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), home.clone(), p.reg(0x20)],
            ),
            p.op(OpCode::CPUI_LOAD, Some(p.reg(0x10)), vec![p.c(1), home]),
        ];
        if publish_frame {
            ops.insert(
                if after_home { 2 } else { 0 },
                p.op(
                    OpCode::CPUI_STORE,
                    None,
                    vec![p.c(1), p.c(0x8000), p.value(&p.register, 0x30, 4)],
                ),
            );
        }
        ops.push(p.ret());
        let summary = p.run(vec![ops]).unwrap();
        assert!(summary.complete);
        assert_eq!(
            summary.lossy_pointer_roots.contains(&Origin::Frame),
            publish_frame,
        );
        assert!(
            summary
                .deferred_frame_escapes
                .iter()
                .all(|home| home.root != Origin::Frame)
        );

        for constant_actual in [false, true] {
            let mut fx = Fx::with_stack_views();
            let actual = if constant_actual {
                fx.constant(8, 0x4000)
            } else {
                fx.frame_pointer(-64)
            };
            let call = make_call_site(&mut fx, actual);
            if publish_frame {
                let space = fx.constant(4, 4);
                let global = fx.constant(8, 0x8000);
                let (_, low) = fx.emit(OpCode::CPUI_LOAD, &[space, global], Some(Out::Unique(4)));
                let (_, wide) =
                    fx.emit(OpCode::CPUI_INT_ZEXT, &[low.unwrap()], Some(Out::Unique(8)));
                let offset = fx.constant(8, 16);
                let (_, pointer) = fx.emit(
                    OpCode::CPUI_INT_ADD,
                    &[wide.unwrap(), offset],
                    Some(Out::Unique(8)),
                );
                fx.emit(
                    OpCode::CPUI_LOAD,
                    &[space, pointer.unwrap()],
                    Some(Out::Unique(8)),
                );
            }
            fx.fd
                .callee_memory_mut()
                .insert((fx.reg.get_index(), 0x2000), Rc::new(summary.clone()));
            assert_eq!(
                unobserved(&fx.fd, call, (-32i64) as u64, 8, 0xff),
                if publish_frame { None } else { Some(0xff) },
            );
        }
    }
}

#[test]
fn lossy_frame_publication_without_homes_is_still_an_observer() {
    let p = Program::new();
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x8000), p.value(&p.register, 0x30, 4)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.complete);
    assert!(summary.deferred_frame_escapes.is_empty());
    assert!(summary.lossy_pointer_roots.contains(&Origin::Frame));
    let mut fx = Fx::with_stack_views();
    let actual = fx.constant(8, 0x4000);
    let call = make_call_site(&mut fx, actual);
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    assert_eq!(unobserved(&fx.fd, call, (-32i64) as u64, 8, 0xff), None);
}

#[test]
fn partial_register_zext_keeps_unrelated_complete_summaries() {
    let p = Program::new();
    let extended = p.value(&p.unique, 0, 8);
    let narrowed = p.value(&p.unique, 8, 4);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_ZEXT,
                Some(extended.clone()),
                vec![p.value(&p.register, 0x20, 4)],
            ),
            p.op(
                OpCode::CPUI_SUBPIECE,
                Some(narrowed.clone()),
                vec![extended, p.c(0)],
            ),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.c(0x2000), narrowed],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert!(summary.deferred_frame_escapes.is_empty());
    assert!(
        summary
            .lossy_pointer_ranges
            .iter()
            .any(|range| { range.space == 2 && range.offset == 0x20 && range.size == 4 })
    );
}
#[test]
fn global_access_proof_rejects_unrecorded_memory_and_frame_accesses() {
    let p = Program::new();
    let direct = p.op(
        OpCode::CPUI_COPY,
        Some(p.reg(0)),
        vec![p.value(&p.code, 0x8000, 8)],
    );
    let absolute = p.op(OpCode::CPUI_STORE, None, vec![p.c(1), p.c(0x8000), p.c(7)]);
    let frame = p.op(OpCode::CPUI_LOAD, Some(p.reg(0)), vec![p.c(1), p.reg(0x30)]);
    for operation in [direct, absolute, frame] {
        let summary = p.run(vec![vec![operation, p.ret()]]);
        assert!(summary.is_none_or(|summary| summary.global_accesses().is_none()));
    }
    let mut operations = p.load(8);
    operations.push(p.ret());
    let summary = p.run(vec![operations]).unwrap();
    assert_eq!(
        summary.global_accesses().unwrap().collect::<Vec<_>>(),
        vec![(2, 0x20, 8, 8, 4)]
    );
}

#[test]
fn global_access_proof_rejects_direct_load_outputs_and_other_processor_spaces() {
    let p = Program::new();
    let overlay = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "overlay",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    for space in [&p.code, &overlay] {
        let direct_output = p.op(
            OpCode::CPUI_LOAD,
            Some(p.value(space, 0x8000, 8)),
            vec![p.c(1), p.reg(0x20)],
        );
        let substantive = p.op(OpCode::CPUI_COPY, Some(p.reg(0)), vec![p.c(7)]);
        let summary = p
            .run(vec![vec![direct_output, substantive, p.ret()]])
            .unwrap();
        assert!(summary.complete);
        assert!(summary.global_accesses().is_none());

        let direct_input = p.op(
            OpCode::CPUI_COPY,
            Some(p.reg(0)),
            vec![p.value(space, 0x8000, 8)],
        );
        let summary = p.run(vec![vec![direct_input, p.ret()]]).unwrap();
        assert!(summary.global_accesses().is_none());
    }
}

#[test]
fn zero_constructor_keeps_complete_global_memory_effects() {
    let p = Program::new();
    let eax = p.value(&p.register, 0, 4);
    let summary = p
        .run(vec![vec![
            p.op(
                OpCode::CPUI_INT_XOR,
                Some(eax.clone()),
                vec![eax.clone(), eax.clone()],
            ),
            p.op(OpCode::CPUI_INT_ZEXT, Some(p.reg(0)), vec![eax]),
            p.op(
                OpCode::CPUI_STORE,
                None,
                vec![p.c(1), p.reg(0x20), p.reg(0)],
            ),
            p.ret(),
        ]])
        .unwrap();
    assert_eq!(
        summary.global_accesses().unwrap().collect::<Vec<_>>(),
        vec![(2, 0x20, 8, 0, 8)]
    );
}

fn global_call_site(actual: u64, effect_offset: i64) -> (Fx, OpId) {
    let mut fx = Fx::new();
    let value = fx.constant(8, actual);
    let op = make_call_site_with_stack_base(&mut fx, value, 40);
    let root = Origin::Register(Storage {
        space: fx.reg.get_index(),
        offset: 0x20,
        size: 8,
    });
    let mut summary = CalleeMemory {
        complete: true,
        ..Default::default()
    };
    summary.writes.insert(Effect {
        root,
        offset: effect_offset,
        size: 16,
    });
    summary.reads.insert(Effect {
        root,
        offset: 32,
        size: 4,
    });
    fx.fd
        .callee_memory_mut()
        .insert((fx.reg.get_index(), 0x2000), Rc::new(summary));
    (fx, op)
}

#[test]
fn global_call_intervals_preserve_overlapping_reads_and_writes() {
    let (mut fx, op) = global_call_site(0x8000, 0);
    let space = Rc::clone(fx.fd.get_arch().manage().get_default_data_space().unwrap());
    let index = fx.fd.get_call_specs_index(op).unwrap();
    let call = fx.fd.replace_call_specs(index);
    let mut cache = crate::heritage::GlobalCallRanges::default();
    for (offset, size, expected) in [
        (0x7000, 8, true),
        (0x7ff8, 8, true),
        (0x7ff9, 8, false),
        (0x8000, 8, false),
        (0x800f, 8, false),
        (0x8010, 8, true),
        (0x8020, 4, false),
        (0x8024, 8, true),
    ] {
        assert_eq!(
            super::super::globalcallranges::preserves(
                &mut cache,
                &fx.fd,
                &call,
                &Address::new(Rc::clone(&space), offset),
                size
            ),
            expected
        );
    }
    assert!(
        for_call(&fx.fd, &call, (-16i64) as u64, 8).is_none(),
        "global seeding cannot enable frame proofs"
    );
    fx.fd.restore_call_specs_at(index, call);
}

#[test]
fn global_call_intervals_reject_wrapping_actuals_and_unknowns() {
    for (actual, bias) in [(u64::MAX - 8, 0), (u64::MAX - 8, 16), (0, -1)] {
        let (mut fx, op) = global_call_site(actual, bias);
        let space = Rc::clone(fx.fd.get_arch().manage().get_default_data_space().unwrap());
        let index = fx.fd.get_call_specs_index(op).unwrap();
        let call = fx.fd.replace_call_specs(index);
        let mut cache = crate::heritage::GlobalCallRanges::default();
        assert!(!super::super::globalcallranges::preserves(
            &mut cache,
            &fx.fd,
            &call,
            &Address::new(space, 0x9000),
            8
        ));
        fx.fd.restore_call_specs_at(index, call);
    }
    let (mut fx, op) = global_call_site(0x8000, 0);
    let space = Rc::clone(fx.fd.get_arch().manage().get_default_data_space().unwrap());
    let unknown = fx
        .fd
        .new_varnode(8, &Address::new(Rc::clone(&fx.reg), 0x70), None);
    fx.fd.op_set_input(op, unknown, 1).unwrap();
    let index = fx.fd.get_call_specs_index(op).unwrap();
    let call = fx.fd.replace_call_specs(index);
    let mut cache = crate::heritage::GlobalCallRanges::default();
    let watched = Address::new(space, 0x9000);
    assert!(!super::super::globalcallranges::preserves(
        &mut cache, &fx.fd, &call, &watched, 8
    ));
    let known = fx.constant(8, 0x8000);
    fx.fd.op_set_input(op, known, 1).unwrap();
    assert!(!super::super::globalcallranges::preserves(
        &mut cache, &fx.fd, &call, &watched, 8
    ));
    cache.clear();
    assert!(super::super::globalcallranges::preserves(
        &mut cache, &fx.fd, &call, &watched, 8
    ));
    fx.fd.restore_call_specs_at(index, call);
}

#[test]
fn active_global_argument_uses_the_recorded_slot_and_rejects_synthetic_trials() {
    for mode in 0..6 {
        let (mut fx, op) = global_call_site(0x9000, 0);
        let known = fx.constant(8, 0x8000);
        fx.fd.op_insert_input(op, known, 3).unwrap();
        let space = Rc::clone(fx.fd.get_arch().manage().get_default_data_space().unwrap());
        let index = fx.fd.get_call_specs_index(op).unwrap();
        let mut call = fx.fd.replace_call_specs(index);
        call.proto_mut().clear_input();
        call.init_active_input();
        let active = call.get_active_input();
        active.register_trial(&Address::new(Rc::clone(&fx.reg), 0x10), 8);
        active.register_trial(
            &Address::new(Rc::clone(&fx.reg), 0x20),
            if mode == 2 { 4 } else { 8 },
        );
        let trial = active.get_trial_mut(1);
        trial.set_slot(if mode == 1 { 99 } else { 3 });
        match mode {
            3 => trial.mark_unref(),
            4 => trial.mark_no_use(),
            5 => trial.set_ind_create_formed(),
            _ => (),
        }
        let mut cache = crate::heritage::GlobalCallRanges::default();
        assert_eq!(
            super::super::globalcallranges::preserves(
                &mut cache,
                &fx.fd,
                &call,
                &Address::new(space, 0x9000),
                8
            ),
            mode == 0,
            "mode {mode}"
        );
        fx.fd.restore_call_specs_at(index, call);
    }
}

#[test]
fn global_return_memory_needs_a_solved_frame_and_effect_overrides_remain_authoritative() {
    let (mut fx, op) = global_call_site(0x8000, 0);
    let key = (fx.reg.get_index(), 0x2000);
    let mut summary = fx.fd.callee_memory().get(&key).unwrap().as_ref().clone();
    summary.frame_return_read = true;
    fx.fd.callee_memory_mut().insert(key, Rc::new(summary));
    let space = Rc::clone(fx.fd.get_arch().manage().get_default_data_space().unwrap());
    let watched = Address::new(Rc::clone(&space), 0x9000);
    let index = fx.fd.get_call_specs_index(op).unwrap();
    let mut call = fx.fd.replace_call_specs(index);
    let mut cache = crate::heritage::GlobalCallRanges::default();
    assert!(super::super::globalcallranges::preserves(
        &mut cache, &fx.fd, &call, &watched, 8
    ));
    let mut unknown_frame = crate::fspec::FuncCallSpecs::new(op, call.get_entry_address().clone());
    unknown_frame.proto_mut().copy(call.proto());
    cache.clear();
    assert!(!super::super::globalcallranges::preserves(
        &mut cache,
        &fx.fd,
        &unknown_frame,
        &watched,
        8
    ));
    call.proto_mut()
        .push_effect_override(crate::fspec::EffectRecord::from_varnode(
            VarnodeData {
                space: Some(space),
                offset: 0x9000,
                size: 8,
            },
            crate::fspec::effect_type::UNKNOWN_EFFECT,
        ));
    cache.clear();
    assert!(!super::super::globalcallranges::preserves(
        &mut cache, &fx.fd, &call, &watched, 8
    ));
    fx.fd.restore_call_specs_at(index, call);
}
