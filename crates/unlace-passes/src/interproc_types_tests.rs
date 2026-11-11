use std::collections::BTreeMap;

use smallvec::smallvec;
use unlace_ir::signature::FunctionSignatureRegistry;
use unlace_ir::ssa::{
    CallingConvention, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot, build_ssa,
};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

use super::apply_registry_to_callers;
use crate::caller_param_propagate::{
    apply_registry_to_callees, propagate_caller_params, seed_registry_from_funcs,
};

const RAX: u64 = 0;
const RDI: u64 = 56;
const CALLER: u64 = 0x1000;
const CALLEE: u64 = 0x2000;
const LEAF: u64 = 0x3000;

fn reg(offset: u64) -> Varnode {
    Varnode::reg(offset, 8)
}

fn function(name: &str, addr: u64, insns: Vec<IrInsn>) -> SsaFunction {
    let mut func = Function::new(name, BlockId(0), addr);
    let mut bb = BasicBlock::new(BlockId(0));
    bb.insns = insns;
    func.insert_block(bb);
    let mut ssa = build_ssa(func);
    ssa.calling_convention = CallingConvention::SystemV;
    ssa
}

fn ret(addr: u64, value: Varnode) -> IrInsn {
    IrInsn::without_output(IrOp::Return, smallvec![value], addr)
}

fn node_struct(name: &str) -> Type {
    Type::Struct {
        name: name.into(),
        fields: vec![
            StructFieldType {
                name: "field_8".into(),
                ty: Type::Primitive(PrimitiveType::Int(4)),
                offset: 8,
            },
            StructFieldType {
                name: "field_16".into(),
                ty: Type::Primitive(PrimitiveType::Int(8)),
                offset: 16,
            },
        ],
    }
}

/// The SSA value of `insn_idx`'s output in block 0.
fn output(ssa: &SsaFunction, insn_idx: usize) -> SsaVarnode {
    ssa.var_map[&(BlockId(0), insn_idx, VarnodeSlot::Output)]
}

/// The SSA value input `input` of `insn_idx` reads in block 0.
fn input(ssa: &SsaFunction, insn_idx: usize, input: usize) -> SsaVarnode {
    ssa.var_map[&(BlockId(0), insn_idx, VarnodeSlot::Input(input))]
}

/// `CALLER`: `rdi = <arg>; rax = call CALLEE(rdi); <uses>; return`.
fn caller(arg: Varnode, uses: Vec<IrInsn>) -> SsaFunction {
    let mut insns = vec![
        IrInsn::with_output(IrOp::Copy, reg(RDI), smallvec![arg], CALLER),
        IrInsn::with_output(
            IrOp::Call,
            reg(RAX),
            smallvec![Varnode::constant(CALLEE, 8), reg(RDI)],
            CALLER + 4,
        ),
    ];
    insns.extend(uses);
    insns.push(ret(CALLER + 0x40, Varnode::constant(0, 8)));
    function("caller", CALLER, insns)
}

/// `CALLEE(a1)`: reads `a1` at two offsets; returns nothing it knows of.
fn callee_with_struct_param() -> SsaFunction {
    let t = Varnode::unique(0x10, 8);
    let mut ssa = function(
        "callee",
        CALLEE,
        vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                t,
                smallvec![reg(RDI), Varnode::constant(8, 8)],
                CALLEE,
            ),
            ret(CALLEE + 4, Varnode::constant(0, 8)),
        ],
    );
    ssa.inferred_params = vec![("a1".into(), PrimitiveType::Ptr)];
    let param = input(&ssa, 0, 0);
    ssa.composite_var_types
        .insert(param, node_struct("callee_node"));
    ssa
}

fn run(funcs: &mut BTreeMap<u64, SsaFunction>) -> FunctionSignatureRegistry {
    let mut registry = FunctionSignatureRegistry::new();
    for _ in 0..3 {
        seed_registry_from_funcs(funcs, &mut registry);
        propagate_caller_params(funcs, &mut registry);
        apply_registry_to_callees(funcs, &registry);
        apply_registry_to_callers(funcs, &registry);
    }
    registry
}

#[test]
fn callee_struct_param_reaches_the_caller_argument() {
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller(Varnode::unique(0x20, 8), Vec::new()));
    funcs.insert(CALLEE, callee_with_struct_param());
    let registry = run(&mut funcs);

    let param = &registry[&CALLEE].params[0];
    assert_eq!(param.composite, Some(node_struct("callee_node")));

    let caller = &funcs[&CALLER];
    let arg = input(caller, 1, 1);
    assert_eq!(
        caller.composite_var_types.get(&arg),
        Some(&node_struct("callee_node")),
        "the value passed in RDI points to the callee's struct"
    );
    let copied_from = input(caller, 0, 0);
    assert_eq!(
        caller.composite_var_types.get(&copied_from),
        Some(&node_struct("callee_node")),
        "and so does the value it was copied from"
    );
    assert_eq!(caller.var_types.get(&arg), Some(&PrimitiveType::Ptr));
}

#[test]
fn caller_struct_argument_reaches_the_callee_param() {
    let mut caller = caller(Varnode::unique(0x20, 8), Vec::new());
    let arg_source = input(&caller, 0, 0);
    caller
        .composite_var_types
        .insert(arg_source, node_struct("caller_node"));
    let mut callee = callee_with_struct_param();
    callee.composite_var_types.clear();

    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller);
    funcs.insert(CALLEE, callee);
    run(&mut funcs);

    let callee = &funcs[&CALLEE];
    let param = input(callee, 0, 0);
    assert_eq!(
        callee.composite_var_types.get(&param),
        Some(&node_struct("caller_node"))
    );
}

#[test]
fn struct_layouts_from_both_sides_merge() {
    let mut caller = caller(Varnode::unique(0x20, 8), Vec::new());
    let arg_source = input(&caller, 0, 0);
    caller.composite_var_types.insert(
        arg_source,
        Type::Struct {
            name: "caller_node".into(),
            fields: vec![StructFieldType {
                name: "field_0".into(),
                ty: Type::Primitive(PrimitiveType::Ptr),
                offset: 0,
            }],
        },
    );
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller);
    funcs.insert(CALLEE, callee_with_struct_param());
    let registry = run(&mut funcs);

    let Some(Type::Struct { fields, .. }) = &registry[&CALLEE].params[0].composite else {
        panic!("struct param expected");
    };
    let offsets: Vec<u64> = fields.iter().map(|f| f.offset).collect();
    assert_eq!(offsets, vec![0, 8, 16]);
}

#[test]
fn return_type_comes_from_call_site_dereference() {
    let loaded = Varnode::unique(0x30, 8);
    let uses = vec![IrInsn::with_output(
        IrOp::Load,
        loaded,
        smallvec![Varnode::constant(1, 8), reg(RAX)],
        CALLER + 8,
    )];
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller(Varnode::constant(7, 8), uses));
    funcs.insert(CALLEE, callee_with_struct_param());
    run(&mut funcs);

    assert_eq!(funcs[&CALLEE].inferred_return_type, PrimitiveType::Ptr);
}

#[test]
fn return_type_takes_the_narrowest_arithmetic_width() {
    let sum = Varnode::unique(0x30, 4);
    let uses = vec![IrInsn::with_output(
        IrOp::IntAdd,
        sum,
        smallvec![Varnode::reg(RAX, 4), Varnode::reg(16, 4)],
        CALLER + 8,
    )];
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller(Varnode::constant(7, 8), uses));
    funcs.insert(CALLEE, callee_with_struct_param());
    // The 32-bit read of RAX carries the call's version.
    let caller = funcs.get_mut(&CALLER).unwrap();
    let call_out = output(caller, 1);
    caller.var_map.insert(
        (BlockId(0), 2, VarnodeSlot::Input(0)),
        SsaVarnode {
            base: Varnode::reg(RAX, 4),
            version: call_out.version,
        },
    );
    run(&mut funcs);

    assert_eq!(funcs[&CALLEE].inferred_return_type, PrimitiveType::Int(4));
}

#[test]
fn an_ignored_or_returned_result_is_not_a_return_type() {
    let mut funcs = BTreeMap::new();
    funcs.insert(
        CALLER,
        function(
            "caller",
            CALLER,
            vec![
                IrInsn::with_output(
                    IrOp::Call,
                    reg(RAX),
                    smallvec![Varnode::constant(CALLEE, 8)],
                    CALLER,
                ),
                ret(CALLER + 4, reg(RAX)),
            ],
        ),
    );
    funcs.insert(CALLEE, callee_with_struct_param());
    run(&mut funcs);

    assert_eq!(funcs[&CALLEE].inferred_return_type, PrimitiveType::Unknown);
}

/// `LEAF(int) -> int`.
fn leaf() -> SsaFunction {
    let mut ssa = function("leaf", LEAF, vec![ret(LEAF, reg(RAX))]);
    ssa.inferred_params = vec![("a1".into(), PrimitiveType::Int(4))];
    ssa.inferred_return_type = PrimitiveType::Int(4);
    ssa
}

/// `CALLEE(a1)`: `rax = a1; rax = callind rax; return`.
fn callee_calling_through_param() -> SsaFunction {
    let mut ssa = function(
        "callee",
        CALLEE,
        vec![
            IrInsn::with_output(IrOp::Copy, reg(RAX), smallvec![reg(RDI)], CALLEE),
            IrInsn::with_output(IrOp::Callind, reg(RAX), smallvec![reg(RAX)], CALLEE + 4),
            ret(CALLEE + 8, Varnode::constant(0, 8)),
        ],
    );
    ssa.inferred_params = vec![("a1".into(), PrimitiveType::Int(8))];
    ssa
}

#[test]
fn function_address_argument_types_a_called_param() {
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller(Varnode::constant(LEAF, 8), Vec::new()));
    funcs.insert(CALLEE, callee_calling_through_param());
    funcs.insert(LEAF, leaf());
    let registry = run(&mut funcs);

    let proto = Type::FuncPtr {
        params: vec![Type::Primitive(PrimitiveType::Int(4))],
        return_type: Box::new(Type::Primitive(PrimitiveType::Int(4))),
        variadic: false,
    };
    assert_eq!(registry[&CALLEE].params[0].composite, Some(proto.clone()));

    // The finalized prototype declares the parameter as that pointer.
    let finalized = crate::finalize_signature(&funcs[&CALLEE], &[]);
    assert_eq!(finalized.params[0].1, proto);

    // The indirect call through the parameter returns the pointee's type.
    let callee = &funcs[&CALLEE];
    assert_eq!(
        callee.var_types.get(&output(callee, 1)),
        Some(&PrimitiveType::Int(4))
    );
}

#[test]
fn function_address_is_no_pointer_to_a_callee_that_does_not_call_it() {
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller(Varnode::constant(LEAF, 8), Vec::new()));
    let mut callee = callee_with_struct_param();
    callee.composite_var_types.clear();
    funcs.insert(CALLEE, callee);
    funcs.insert(LEAF, leaf());
    let registry = run(&mut funcs);

    assert_eq!(registry[&CALLEE].params[0].composite, None);
}

#[test]
fn resolved_indirect_call_propagates_like_a_direct_one() {
    let mut caller = function(
        "caller",
        CALLER,
        vec![
            IrInsn::with_output(
                IrOp::Copy,
                reg(RDI),
                smallvec![Varnode::unique(0x20, 8)],
                CALLER,
            ),
            IrInsn::with_output(
                IrOp::Callind,
                reg(RAX),
                smallvec![Varnode::unique(0x28, 8), reg(RDI)],
                CALLER + 4,
            ),
            ret(CALLER + 8, Varnode::constant(0, 8)),
        ],
    );
    caller
        .resolved_indirect_calls
        .insert((BlockId(0), 1), CALLEE);
    let mut funcs = BTreeMap::new();
    funcs.insert(CALLER, caller);
    funcs.insert(CALLEE, callee_with_struct_param());
    let registry = run(&mut funcs);

    assert!(registry[&CALLEE].params[0].composite.is_some());
    let caller = &funcs[&CALLER];
    assert_eq!(
        caller.composite_var_types.get(&input(caller, 1, 1)),
        Some(&node_struct("callee_node"))
    );
}
