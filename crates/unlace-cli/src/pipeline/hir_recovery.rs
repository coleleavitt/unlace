use std::collections::{BTreeMap, BTreeSet};

#[cfg(test)]
use smallvec::smallvec;
use unlace_ir::Varnode;
#[cfg(test)]
use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
#[cfg(test)]
use unlace_ir::{IrInsn, IrOp};
use unlace_struct::HirFunction;
#[cfg(test)]
use unlace_struct::HirNode;

pub(super) fn apply_expression_recovery(hir: &mut HirFunction) {
    unlace_struct::eliminate_common_subexpressions(&mut hir.body);
    apply_loop_invariant_motion(hir);
}

fn apply_loop_invariant_motion(hir: &mut HirFunction) {
    let pinned = bases_sharing_a_name(hir);
    unlace_struct::hoist_loop_invariants(&mut hir.body, &pinned);
}

/// Base varnodes whose merged C name also covers another base.
fn bases_sharing_a_name(hir: &HirFunction) -> BTreeSet<Varnode> {
    let mut bases_by_name: BTreeMap<&str, BTreeSet<Varnode>> = BTreeMap::new();
    for (sv, name) in &hir.merged_names {
        bases_by_name
            .entry(name.as_str())
            .or_default()
            .insert(sv.base);
    }
    bases_by_name
        .into_values()
        .filter(|bases| bases.len() > 1)
        .flatten()
        .collect()
}

#[cfg(test)]
fn sv(base: Varnode) -> SsaVarnode {
    SsaVarnode { base, version: 0 }
}

#[cfg(test)]
fn make_func(name: &str, params: Vec<Varnode>, body: Vec<HirNode>) -> HirFunction {
    HirFunction {
        name: name.to_string(),
        params: params
            .into_iter()
            .enumerate()
            .map(|(idx, param)| (format!("a{}", idx + 1), PrimitiveType::Int(param.size)))
            .collect(),
        return_type: PrimitiveType::Int(4),
        body,
        addr: 0x1000,
        foldable_exprs: BTreeSet::new(),
        panic_sites: BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: BTreeSet::new(),
        var_role_names: BTreeMap::new(),
        finalized_signature: None,
        byref_locals: BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    }
}

#[cfg(test)]
fn function_body<'a>(output: &'a str, name: &str) -> &'a str {
    let start = output
        .find(&format!("{name}("))
        .expect("function signature should render");
    &output[start..]
}

#[cfg(test)]
fn common_add_expr(body: &str) -> &'static str {
    ["a1 + a2", "v1 + v2"]
        .into_iter()
        .find(|expr| body.contains(expr))
        .expect("common add expression should render")
}

#[test]
fn cse_materializes_one_common_expression_in_final_c() {
    let a = Varnode::reg(0, 4);
    let b = Varnode::reg(8, 4);
    let t1 = Varnode::unique(0, 4);
    let t2 = Varnode::unique(8, 4);
    let left = Varnode::unique(16, 4);
    let right = Varnode::unique(24, 4);
    let sum = Varnode::unique(32, 4);

    let mut hir = make_func(
        "batch19_cse",
        vec![a, b],
        vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                t1,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                left,
                smallvec![t1, Varnode::constant(2, 4)],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                t2,
                smallvec![a, b],
                0x1008,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                right,
                smallvec![t2, Varnode::constant(3, 4)],
                0x100c,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                sum,
                smallvec![left, right],
                0x1010,
            )),
            HirNode::Return(Some(sv(sum))),
        ],
    );

    apply_expression_recovery(&mut hir);
    match &hir.body[2] {
        HirNode::Statement(insn) => {
            assert_eq!(
                insn.op,
                IrOp::Copy,
                "duplicate expression should become Copy"
            );
            assert_eq!(
                insn.inputs.as_slice(),
                &[t1],
                "Copy should reuse first output"
            );
        }
        other => panic!("expected rewritten Statement, got {other:?}"),
    }

    let mut annotations = unlace_output::PrinterAnnotations::default();
    annotations
        .line_comments
        .insert(0x1000, "common producer".to_string());
    let output = unlace_output::print_c_with_annotations(
        &hir,
        None,
        None,
        None,
        None,
        None,
        None,
        Some(&annotations),
    );
    let body = function_body(&output, "batch19_cse");
    let common_expr = common_add_expr(body);
    assert!(
        body.contains(&format!(" = {common_expr};")),
        "common expression should be materialized once:\n{output}"
    );
    assert_eq!(
        body.matches(common_expr).count(),
        1,
        "common expression should not be duplicated after CSE:\n{output}"
    );
    assert!(
        body.contains("* 2") && body.contains("* 3"),
        "both consumers should remain visible:\n{output}"
    );
}

#[test]
fn licm_hoists_safe_loop_invariant_before_final_c_loop() {
    let a = Varnode::reg(0, 4);
    let b = Varnode::reg(8, 4);
    let cond = Varnode::reg(16, 1);
    let inv = Varnode::unique(0, 4);
    let arg = Varnode::unique(8, 4);

    let mut hir = make_func(
        "batch19_licm",
        vec![a, b, cond],
        vec![
            HirNode::While {
                cond: sv(cond),
                body: vec![
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::IntAdd,
                        inv,
                        smallvec![a, b],
                        0x1000,
                    )),
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::IntAdd,
                        arg,
                        smallvec![inv, Varnode::constant(1, 4)],
                        0x1004,
                    )),
                    HirNode::Statement(IrInsn::without_output(
                        IrOp::Call,
                        smallvec![Varnode::constant(0x2000, 8), arg],
                        0x1008,
                    )),
                ],
            },
            HirNode::Return(None),
        ],
    );

    apply_expression_recovery(&mut hir);

    let output = unlace_output::print_c(&hir);
    let body = function_body(&output, "batch19_licm");
    let loop_pos = body.find("while (").expect("loop should render");
    let hoisted_line = body[..loop_pos]
        .lines()
        .find(|line| line.contains(" = ") && line.contains(" + "))
        .expect("loop invariant should materialize before loop");
    assert!(
        hoisted_line.trim_end().contains(';'),
        "hoisted invariant should be an emitted C statement:\n{output}"
    );
    assert!(
        body.contains("+ 1") && body.contains("sub_2000"),
        "loop body consumer should remain after hoisting:\n{output}"
    );
}
