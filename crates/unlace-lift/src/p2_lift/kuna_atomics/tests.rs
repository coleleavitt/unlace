use super::*;
use crate::context::{ArchContext, TypeOp};
use crate::kuna_sourcelang::SourceLang;
use crate::userop::{ATOMIC_BUILTINS, MSVC_ATOMIC_BUILTINS};
use unlace_base::space::{
    AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

const LOCK: u64 = 19;
const UNLOCK: u64 = 20;

#[derive(Clone, Copy)]
struct Loc(i32, u64, i32);

fn function(lang: SourceLang, mode: Atomics) -> Funcdata {
    function_on(lang, mode, false)
}

fn function_on(lang: SourceLang, mode: Atomics, windows: bool) -> Funcdata {
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
    arch.kuna_options.set(mode);
    arch.windows_cspec = windows;
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
    let mut fd = function(SourceLang::C, Atomics::Gcc);
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
    for (lang, mode, hint) in [
        (SourceLang::C, Atomics::Off, false),
        (SourceLang::Go, Atomics::Auto, false),
        (SourceLang::C, Atomics::Gcc, true),
    ] {
        let mut fd = function(lang, mode);
        let ops = lock_xadd(&mut fd, hint);
        assert_eq!(rewrite(&mut fd, &ops), None);
        assert_eq!(code(&fd, ops[ops.len() - 1]), OpCode::CPUI_CALLOTHER);
        assert_eq!(code(&fd, ops[ops.len() - 2]), OpCode::CPUI_STORE);
        assert_eq!(code(&fd, ops[0]), OpCode::CPUI_CALLOTHER);
    }
}

#[test]
fn builtins_keep_the_address_operand() {
    let mut fd = function(SourceLang::C, Atomics::Gcc);
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

#[test]
fn msvc_spelling_names_the_interlocked_intrinsic() {
    for (mode, windows, msvc) in [
        (Atomics::Msvc, false, true),
        (Atomics::Auto, true, true),
        (Atomics::Auto, false, false),
        (Atomics::Gcc, true, false),
    ] {
        let mut fd = function_on(SourceLang::C, mode, windows);
        let ops = lock_xadd(&mut fd, false);
        assert_eq!(rewrite(&mut fd, &ops), Some(ops[0]));
        let want = if msvc {
            msvc_atomic_builtin(BUILTIN_ATOMIC_FETCH_ADD, 4).unwrap()
        } else {
            BUILTIN_ATOMIC_FETCH_ADD
        };
        assert_eq!(callother_id(&fd, ops[1]), Some(u64::from(want)));
    }
    assert_eq!(
        atomic_builtin_name(msvc_atomic_builtin(BUILTIN_ATOMIC_FETCH_ADD, 4).unwrap()),
        Some(&b"_InterlockedExchangeAdd"[..])
    );
}

#[test]
fn spelled_swaps_compare_exchange_and_negates_subtraction() {
    let e = Expr::Const(1, 8);
    let n = Expr::Const(2, 8);
    let (id, ops) = spelled(
        BUILTIN_ATOMIC_COMPARE_SWAP,
        &[e.clone(), n.clone()],
        8,
        true,
        None,
        |_| true,
    );
    assert_eq!(
        atomic_builtin_name(id),
        Some(&b"_InterlockedCompareExchange64"[..])
    );
    assert_eq!(ops, vec![n.clone(), e.clone()]);
    let (id, ops) = spelled(
        BUILTIN_ATOMIC_FETCH_SUB,
        &[Expr::Const(1, 2)],
        2,
        true,
        None,
        |_| true,
    );
    assert_eq!(
        atomic_builtin_name(id),
        Some(&b"_InterlockedExchangeAdd16"[..])
    );
    assert_eq!(ops, vec![Expr::Const(0xffff, 2)]);
    let x = Expr::Start(Storage {
        space: 2,
        offset: 24,
        size: 1,
    });
    let (id, ops) = spelled(
        BUILTIN_ATOMIC_FETCH_SUB,
        &[x.clone()],
        1,
        true,
        None,
        |_| false,
    );
    assert_eq!(id, BUILTIN_ATOMIC_FETCH_SUB);
    assert_eq!(ops, vec![x.clone()]);
    let (id, _) = spelled(BUILTIN_ATOMIC_FETCH_SUB, &[x], 1, false, None, |_| true);
    assert_eq!(id, BUILTIN_ATOMIC_FETCH_SUB);
    for (id, generic, width, _) in MSVC_ATOMIC_BUILTINS {
        assert_eq!(atomic_builtin_generic(id), Some(generic));
        assert_eq!(msvc_atomic_builtin(generic, width), Some(id));
    }
    assert_eq!(msvc_atomic_builtin(BUILTIN_ATOMIC_FETCH_SUB, 4), None);
}

#[test]
fn c11_spelling_adds_the_order_unless_sequentially_consistent() {
    let v = Expr::Const(1, 8);
    let (id, ops) = spelled(
        BUILTIN_ATOMIC_FETCH_ADD,
        &[v.clone()],
        8,
        false,
        Some(0),
        |_| true,
    );
    assert_eq!(
        atomic_builtin_name(id),
        Some(&b"atomic_fetch_add_explicit"[..])
    );
    assert!(crate::userop::atomic_builtin_explicit(id));
    assert_eq!(ops, vec![v.clone(), Expr::Const(0, 4)]);
    let (id, ops) = spelled(
        BUILTIN_ATOMIC_EXCHANGE,
        &[v.clone()],
        8,
        false,
        Some(crate::userop::MEMORY_ORDER_SEQ_CST),
        |_| true,
    );
    assert_eq!(atomic_builtin_name(id), Some(&b"atomic_exchange"[..]));
    assert_eq!(ops, vec![v.clone()]);
    assert_eq!(atomic_builtin_generic(id), Some(BUILTIN_ATOMIC_EXCHANGE));
    // C11 has no value-returning compare-and-swap
    let (id, _) = spelled(
        BUILTIN_ATOMIC_COMPARE_SWAP,
        &[v.clone(), v.clone()],
        8,
        false,
        Some(0),
        |_| true,
    );
    assert_eq!(id, BUILTIN_ATOMIC_COMPARE_SWAP);
}

#[test]
fn fold_evaluates_an_arm_status_compare() {
    let zero = || Expr::Const(0, 4);
    assert_eq!(fold(OpCode::CPUI_INT_SUB, &[zero(), zero()]), Some(0));
    assert_eq!(fold(OpCode::CPUI_INT_LESSEQUAL, &[zero(), zero()]), Some(1));
    assert_eq!(fold(OpCode::CPUI_INT_SBORROW, &[zero(), zero()]), Some(0));
    assert_eq!(
        fold(
            OpCode::CPUI_INT_SBORROW,
            &[Expr::Const(0x8000_0000, 4), Expr::Const(1, 4)]
        ),
        Some(1)
    );
    assert_eq!(
        fold(
            OpCode::CPUI_INT_CARRY,
            &[Expr::Const(0xffff_ffff, 4), Expr::Const(1, 4)]
        ),
        Some(1)
    );
    assert_eq!(
        fold(
            OpCode::CPUI_INT_SLESS,
            &[Expr::Const(0xffff_ffff, 4), zero()]
        ),
        Some(1)
    );
    assert_eq!(
        fold(OpCode::CPUI_INT_RIGHT, &[zero(), Expr::Const(0x1f, 4)]),
        Some(0)
    );
    assert_eq!(
        fold(
            OpCode::CPUI_INT_LEFT,
            &[Expr::Const(1, 8), Expr::Const(64, 4)]
        ),
        Some(0)
    );
    assert_eq!(
        fold(
            OpCode::CPUI_INT_ADD,
            &[Expr::Const(1, 16), Expr::Const(1, 16)]
        ),
        None
    );
    assert_eq!(sext(0x80, 1), -128);
    assert_eq!(sext(0x7f, 1), 127);
}

#[test]
fn equality_reads_a_flag_tested_against_one() {
    let e = Expr::Start(Storage {
        space: 2,
        offset: 0,
        size: 16,
    });
    let zf = Expr::Op(OpCode::CPUI_INT_EQUAL, 1, vec![e.clone(), Expr::Old]);
    let tested = Expr::Op(
        OpCode::CPUI_INT_EQUAL,
        1,
        vec![zf.clone(), Expr::Const(1, 1)],
    );
    assert_eq!(equality(&tested, true), Some(e.clone()));
    assert_eq!(equality(&tested, false), None);
    let clear = Expr::Op(OpCode::CPUI_INT_EQUAL, 1, vec![zf, Expr::Const(0, 1)]);
    assert_eq!(equality(&clear, false), Some(e.clone()));
    let half = Expr::Op(OpCode::CPUI_SUBPIECE, 8, vec![Expr::Old, Expr::Const(8, 4)]);
    let differs = Expr::Op(OpCode::CPUI_INT_NOTEQUAL, 1, vec![half.clone(), e.clone()]);
    assert_eq!(equality_of(&differs, false, &half), Some(e));
    assert_eq!(equality_of(&differs, true, &half), None);
}
