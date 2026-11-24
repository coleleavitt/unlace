use super::*;
use crate::context::{ArchContext, TypeOp};
use crate::kuna_sourcelang::SourceLang;
use unlace_base::space::{
    AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

const LOCK: u64 = 19;
const UNLOCK: u64 = 20;

#[derive(Clone, Copy)]
struct Loc(i32, u64, i32);

fn function(lang: SourceLang, on: bool) -> Funcdata {
    let mut manage = AddrSpaceManager::new();
    manage.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manage
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    for (name, index) in [("register", 2), ("ram", 3)] {
        manage
            .insert_space(Rc::new(AddrSpace::new(
                spacetype::IPTR_PROCESSOR,
                name,
                false,
                8,
                1,
                index,
                addrspace_flags::hasphysical,
                1,
                1,
            )))
            .unwrap();
    }
    let mut arch = ArchContext::new(manage);
    arch.source_lang = lang;
    arch.atomic_userops = AtomicUserops {
        lock: Some((LOCK as u32, UNLOCK as u32)),
        ..AtomicUserops::default()
    };
    arch.kuna_options.set(Atomics(on));
    let entry = Address::new(arch.manage().get_space(3).unwrap().clone(), 0x1000);
    Funcdata::new("probe", "probe", Rc::new(arch), entry, 0x1000_0000, 0x40).unwrap()
}

fn value(fd: &mut Funcdata, loc: Loc) -> VarnodeId {
    if loc.0 == 0 {
        return fd.new_constant(loc.2, loc.1);
    }
    let space = fd.get_arch().manage().get_space(loc.0).unwrap().clone();
    fd.new_varnode_space_off(loc.2, space, loc.1)
}

fn operation(fd: &mut Funcdata, code: OpCode, inputs: &[Loc], output: Option<Loc>) -> OpId {
    let id = fd.new_op(inputs.len() as i32, fd.get_address().clone());
    fd.op_set_opcode(id, TypeOp::new(code, 0, format!("{code:?}")));
    for (i, input) in inputs.iter().enumerate() {
        let vn = value(fd, *input);
        fd.op_set_input(id, vn, i as i32).unwrap();
    }
    if let Some(out) = output {
        let address = Address::new(
            fd.get_arch().manage().get_space(out.0).unwrap().clone(),
            out.1,
        );
        fd.new_varnode_out(out.2, &address, id).unwrap();
    }
    id
}

/// `lock xadd [rdi], esi` as SLEIGH lifts it.
fn lock_xadd(fd: &mut Funcdata, hint: bool) -> Vec<OpId> {
    let p = Loc(2, 0, 8);
    let d = Loc(2, 24, 4);
    let loaded = Loc(1, 0x100, 4);
    let sum = Loc(1, 0x200, 4);
    let ram = Loc(0, 3, 8);
    let mut ops = vec![
        operation(fd, OpCode::CPUI_CALLOTHER, &[Loc(0, LOCK, 4)], None),
        operation(fd, OpCode::CPUI_LOAD, &[ram, p], Some(loaded)),
        operation(fd, OpCode::CPUI_INT_ADD, &[loaded, d], Some(sum)),
        operation(fd, OpCode::CPUI_LOAD, &[ram, p], Some(loaded)),
        operation(fd, OpCode::CPUI_COPY, &[loaded], Some(d)),
        operation(fd, OpCode::CPUI_COPY, &[sum], Some(loaded)),
        operation(fd, OpCode::CPUI_STORE, &[ram, p, loaded], None),
        operation(fd, OpCode::CPUI_CALLOTHER, &[Loc(0, UNLOCK, 4)], None),
    ];
    if hint {
        let op = operation(fd, OpCode::CPUI_CALLOTHER, &[Loc(0, 21, 4)], None);
        ops.insert(1, op);
    }
    ops
}

fn code(fd: &Funcdata, op: OpId) -> OpCode {
    fd.obank().get(op).unwrap().code()
}

/// The builtin id a (still dead, freshly lifted) CALLOTHER names.
fn callother_id(fd: &Funcdata, op: OpId) -> Option<u64> {
    let o = fd.obank().get(op)?;
    if o.code() != OpCode::CPUI_CALLOTHER {
        return None;
    }
    is_constant(fd, o.get_in(0)?).map(|(id, _)| id)
}

#[test]
fn locked_xadd_becomes_fetch_and_add() {
    let mut fd = function(SourceLang::C, true);
    let ops = lock_xadd(&mut fd, false);
    assert_eq!(rewrite(&mut fd, &ops), Some(ops[0]));
    assert_eq!(
        callother_id(&fd, ops[1]),
        Some(u64::from(BUILTIN_ATOMIC_FETCH_ADD))
    );
    assert_eq!(code(&fd, ops[6]), OpCode::CPUI_COPY);
    assert_eq!(code(&fd, ops[0]), OpCode::CPUI_COPY);
    assert_eq!(code(&fd, ops[7]), OpCode::CPUI_COPY);
    assert_eq!(ops.len(), 8);
}

#[test]
fn option_off_go_and_hle_hint_decline() {
    for (lang, on, hint) in [
        (SourceLang::C, false, false),
        (SourceLang::Go, true, false),
        (SourceLang::C, true, true),
    ] {
        let mut fd = function(lang, on);
        let ops = lock_xadd(&mut fd, hint);
        assert_eq!(rewrite(&mut fd, &ops), None);
        assert_eq!(code(&fd, ops[ops.len() - 1]), OpCode::CPUI_CALLOTHER);
        assert_eq!(code(&fd, ops[ops.len() - 2]), OpCode::CPUI_STORE);
        assert_eq!(code(&fd, ops[0]), OpCode::CPUI_CALLOTHER);
    }
}

#[test]
fn builtins_keep_the_address_operand() {
    let mut fd = function(SourceLang::C, true);
    let ops = lock_xadd(&mut fd, false);
    rewrite(&mut fd, &ops).unwrap();
    let o = fd.obank().get(ops[1]).unwrap();
    assert_eq!(o.num_input(), 3);
    let pointer = fd.vbank().get(o.get_in(1).unwrap()).unwrap();
    assert_eq!((pointer.get_offset(), pointer.get_size()), (0, 8));
    let names: Vec<&[u8]> = ATOMIC_BUILTINS.iter().map(|(_, n)| *n).collect();
    assert!(names.contains(&&b"__sync_val_compare_and_swap"[..]));
    assert_eq!(ATOMIC_BUILTINS.len(), 7);
}

#[test]
fn update_classifies_written_values() {
    let x = Expr::Start(Storage {
        space: 2,
        offset: 24,
        size: 4,
    });
    let add = Expr::Op(OpCode::CPUI_INT_ADD, 4, vec![Expr::Old, x.clone()]);
    assert_eq!(
        update(&add, 4).map(|(b, _)| b),
        Some(BUILTIN_ATOMIC_FETCH_ADD)
    );
    assert_eq!(update(&x, 4).map(|(b, _)| b), Some(BUILTIN_ATOMIC_EXCHANGE));
    assert_eq!(update(&Expr::Old, 4), None);
    let minus_one = Expr::Op(
        OpCode::CPUI_INT_ADD,
        4,
        vec![Expr::Old, Expr::Const(0xffff_ffff, 4)],
    );
    assert_eq!(
        update(&minus_one, 4),
        Some((BUILTIN_ATOMIC_FETCH_SUB, Expr::Const(1, 4)))
    );
    assert!(identity(BUILTIN_ATOMIC_FETCH_OR, &Expr::Const(0, 8)));
}
