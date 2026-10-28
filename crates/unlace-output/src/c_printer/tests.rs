use std::collections::BTreeMap;

use smallvec::smallvec;

use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
use unlace_struct::{HirFunction, HirNode, LabelId, SwitchCase};

#[test]
fn frame_base_update_suppression_keeps_rbp_accumulator_init() {
    use super::is_x86_frame_base_update;

    let rbp = Varnode::reg(40, 8);
    let rsp = Varnode::reg(32, 8);
    let zero = Varnode::constant(0, 8);
    let eight = Varnode::constant(8, 8);

    let accumulator_init = IrInsn::with_output(IrOp::Copy, rbp, smallvec![zero], 0x1000);
    assert!(
        !is_x86_frame_base_update(&accumulator_init, &rbp),
        "optimized code may use rbp as a general accumulator"
    );

    let prologue_copy = IrInsn::with_output(IrOp::Copy, rbp, smallvec![rsp], 0x1004);
    assert!(is_x86_frame_base_update(&prologue_copy, &rbp));

    let stack_adjust = IrInsn::with_output(IrOp::IntSub, rsp, smallvec![rsp, eight], 0x1008);
    assert!(is_x86_frame_base_update(&stack_adjust, &rsp));

    let stack_adjust_from_temp =
        IrInsn::with_output(IrOp::IntSub, rsp, smallvec![zero, eight], 0x100c);
    assert!(is_x86_frame_base_update(&stack_adjust_from_temp, &rsp));
}

#[test]
fn frame_base_reg_is_size_agnostic() {
    use super::is_frame_base_reg;
    use unlace_ir::SpaceId;
    let reg = |off, size| Varnode {
        space: SpaceId::Register,
        offset: off,
        size,
    };
    // Frame regs at any access width (e.g. MIPS r29d is a 4-byte view).
    assert!(is_frame_base_reg(&reg(32, 8))); // rsp
    assert!(is_frame_base_reg(&reg(40, 8))); // rbp
    assert!(is_frame_base_reg(&reg(232, 4))); // r29d (sub-register)
    assert!(is_frame_base_reg(&reg(248, 8))); // sp
    // Argument registers are never frame bases.
    assert!(!is_frame_base_reg(&reg(56, 8))); // rdi
    assert!(!is_frame_base_reg(&reg(16, 8))); // rdx
}

#[test]
fn frame_base_register_is_suppressible_storage() {
    use super::{PrintCtx, is_suppressible_storage};

    let ctx = PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );

    assert!(is_suppressible_storage(&reg(32, 8), &ctx));
    assert!(is_suppressible_storage(&reg(40, 8), &ctx));
    assert!(!is_suppressible_storage(&reg(56, 8), &ctx));
}

#[test]
fn paren_if_non_atomic_base_wraps_casts_and_derefs() {
    use super::paren_if_non_atomic_base;
    // Bare identifiers are left alone.
    assert_eq!(paren_if_non_atomic_base("buf"), "buf");
    assert_eq!(paren_if_non_atomic_base("a1"), "a1");
    // Postfix chains containing `->`/`.` are conservatively wrapped (the
    // extra parens are harmless; `(v3->field_0)[i]` == `v3->field_0[i]`).
    assert_eq!(paren_if_non_atomic_base("v3->field_0"), "(v3->field_0)");
    // Already fully wrapped in one matching paren pair: unchanged.
    assert_eq!(paren_if_non_atomic_base("(buf + 8)"), "(buf + 8)");
    // `(_QWORD *)(buf + 8)` is TWO paren groups (a cast applied to a paren),
    // not one wrap — it must be wrapped so the subscript binds to the cast
    // result, not `(buf + 8)[i]`.
    assert_eq!(
        paren_if_non_atomic_base("(_QWORD *)(buf + 8)"),
        "((_QWORD *)(buf + 8))"
    );
    // A cast/deref base MUST be parenthesised so `base[i]` binds to the
    // dereferenced value, not the pre-cast subexpression.
    assert_eq!(
        paren_if_non_atomic_base("*(_QWORD *)(buf + 8)"),
        "(*(_QWORD *)(buf + 8))"
    );
    // `a + b` is non-atomic — `(a + b)[i]` keeps the add intact.
    assert_eq!(paren_if_non_atomic_base("buf + 8"), "(buf + 8)");
    // Two adjacent paren groups are NOT a single wrap — must be wrapped.
    assert_eq!(paren_if_non_atomic_base("(a)(b)"), "((a)(b))");
}

use super::{PrinterAnnotations, print_c, print_c_with_annotations};

#[test]
fn test_signed_flag_compare_folds_less_than() {
    // SF ^ OF == signed `<`. __OFSUB__ only appears in signed lowering, so
    // its presence is the signedness signal.
    let got = super::simplify_signed_flag_line("    if (LOBYTE(a1 < 1) ^ __OFSUB__(a1, 1)) {");
    assert_eq!(got, "    if (a1 < 1) {", "{got}");
}

#[test]
fn test_signed_flag_compare_folds_less_equal() {
    // `a == b || (SF ^ OF)` == signed `<=` (the jle/jng pattern).
    let got =
        super::simplify_signed_flag_line("    if (a1 == 1 || LOBYTE(a1 < 1) ^ __OFSUB__(a1, 1)) {");
    assert_eq!(got, "    if (a1 <= 1) {", "{got}");
}

#[test]
fn test_signed_flag_compare_folds_less_equal_parenthesized() {
    let got = super::simplify_signed_flag_line(
        "    x = (a1 == 1 || (LOBYTE(a1 < 1) ^ __OFSUB__(a1, 1)));",
    );
    assert_eq!(got, "    x = (a1 <= 1);", "{got}");
}

#[test]
fn test_signed_flag_compare_requires_operand_identity() {
    // Mismatched operands (a1 vs a2) must NOT fold — leave verbatim.
    let line = "    if (LOBYTE(a1 < 1) ^ __OFSUB__(a2, 1)) {";
    assert_eq!(super::simplify_signed_flag_line(line), line);
    // Mismatched rhs constant must not fold either.
    let line2 = "    if (LOBYTE(a1 < 1) ^ __OFSUB__(a1, 2)) {";
    assert_eq!(super::simplify_signed_flag_line(line2), line2);
}

#[test]
fn test_signed_flag_compare_leaves_unrelated_xor() {
    // A plain XOR with no __OFSUB__ partner is untouched.
    let line = "    v3 = v1 ^ v2;";
    assert_eq!(super::simplify_signed_flag_line(line), line);
}

#[test]
fn test_signed_flag_compare_handles_nested_operands() {
    let got = super::simplify_signed_flag_line(
        "    if (LODWORD(v4) == 1 || LOBYTE(LODWORD(v4) < 1) ^ __OFSUB__(LODWORD(v4), 1)) {",
    );
    assert_eq!(got, "    if (LODWORD(v4) <= 1) {", "{got}");
}

fn make_func(name: &str, body: Vec<HirNode>) -> HirFunction {
    HirFunction {
        name: name.to_string(),
        params: vec![],
        return_type: PrimitiveType::Int(4),
        body,
        addr: 0x1000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    }
}

fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

fn con(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

/// Extract the body (everything from the function signature line through
/// its closing brace) for `func_name` out of a full `print_c` rendering.
/// Used by tests that must assert on the recovered statements without the
/// shared IDA prelude (whose macros legitimately contain `^`, `|`, etc.).
fn function_body_text(output: &str, func_name: &str) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let needle = format!("{func_name}(");
    let Some(start) = lines.iter().position(|l| {
        l.contains(&needle) && l.trim_end().ends_with('{') && !l.trim_start().starts_with("//")
    }) else {
        return String::new();
    };
    let mut depth = 0i32;
    let mut collected = Vec::new();
    for line in &lines[start..] {
        collected.push(*line);
        depth += line.matches('{').count() as i32;
        depth -= line.matches('}').count() as i32;
        if depth <= 0 && collected.len() > 1 {
            break;
        }
    }
    collected.join("\n")
}

fn sv(offset: u64, size: u8) -> SsaVarnode {
    SsaVarnode {
        base: Varnode::reg(offset, size),
        version: 0,
    }
}

#[test]
fn test_print_if_else() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);
    let c0 = con(0, 4);

    let body = vec![
        HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: Some(vec![HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r8,
                smallvec![c0],
                0x1010,
            ))]),
        },
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("if_else", body);
    let output = print_c(&func);

    assert!(output.contains("if (v1)"), "if: {output}");
    assert!(output.contains("} else {"), "else: {output}");
    assert!(output.contains("return result;"), "return: {output}");
}

// ── t52: AArch64 conditional-select intrinsics → C ternary ──────────

/// Build a function whose single body statement is a CSEL-family
/// callother (tag/cond/true/false/cc) writing register r16, which is
/// then returned so the output stays live.
fn csel_family_func(name: &str, tag: u64) -> HirFunction {
    let cond = reg(264, 1); // predicate flag byte
    let r8 = reg(8, 8); // true_val (Rn)
    let r16 = reg(16, 8); // false_val (Rm)
    let r0 = reg(0, 8); // Rd == return register
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r0,
            smallvec![con(tag, 8), cond, r8, r16, con(1, 1)],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 0,
        })),
    ];
    make_func(name, body)
}

#[test]
fn t52_csel_renders_identity_ternary() {
    let out = print_c(&csel_family_func("csel_id", 0x330));
    let body = function_body_text(&out, "csel_id");
    assert!(
        body.contains(" ? ") && body.contains(" : "),
        "expected a ternary, got:\n{body}"
    );
    assert!(
        !body.contains("__csel__"),
        "raw __csel__ intrinsic must not leak:\n{body}"
    );
    // Identity false branch — no transform applied.
    assert!(
        !body.contains('~') && !body.contains("+ 1"),
        "CSEL false branch should be plain Rm:\n{body}"
    );
}

#[test]
fn t52_csinc_renders_increment_false_branch() {
    let out = print_c(&csel_family_func("csinc_fn", 0x331));
    let body = function_body_text(&out, "csinc_fn");
    assert!(
        body.contains(" ? ") && body.contains("+ 1"),
        "expected `cond ? Rn : (Rm + 1)`, got:\n{body}"
    );
    assert!(
        !body.contains("__csinc__"),
        "raw __csinc__ intrinsic must not leak:\n{body}"
    );
}

#[test]
fn t52_csinv_renders_bitwise_not_false_branch() {
    let out = print_c(&csel_family_func("csinv_fn", 0x332));
    let body = function_body_text(&out, "csinv_fn");
    assert!(
        body.contains(" ? ") && body.contains('~'),
        "expected `cond ? Rn : (~Rm)`, got:\n{body}"
    );
    assert!(
        !body.contains("__csinv__"),
        "raw __csinv__ intrinsic must not leak:\n{body}"
    );
}

#[test]
fn t52_csneg_renders_negation_false_branch() {
    let out = print_c(&csel_family_func("csneg_fn", 0x333));
    let body = function_body_text(&out, "csneg_fn");
    assert!(
        body.contains(" ? ") && body.contains(": -"),
        "expected `cond ? Rn : -Rm`, got:\n{body}"
    );
    assert!(
        !body.contains("__csneg__"),
        "raw __csneg__ intrinsic must not leak:\n{body}"
    );
}

#[test]
fn t52_dead_csel_and_orphan_predicate_are_suppressed() {
    // A CSEL-family callother whose result register is never read is
    // dead. Its predicate is an explicit comparison consumed ONLY by
    // that callother. Both must be dropped — no raw `__csinv__(...)`
    // and no orphan `__unlace_int_*(...)` statement should leak.
    let v0 = reg(0, 8);
    let v8 = reg(8, 8);
    let pred = Varnode {
        space: SpaceId::Unique,
        offset: 0x20,
        size: 1,
    };
    let dead_rd = reg(0x100, 8); // never returned/read
    let body = vec![
        // pred = v0 != v8
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntNotequal,
            pred,
            smallvec![v0, v8],
            0x1000,
        )),
        // dead = CSINV(pred, v0, v8)  → never used
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            dead_rd,
            smallvec![con(0x332, 8), pred, v0, v8, con(1, 1)],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let out = print_c(&make_func("dead_csel", body));
    let body_text = function_body_text(&out, "dead_csel");
    assert!(
        !body_text.contains("__csinv__"),
        "dead CSINV must be DCE'd, got:\n{body_text}"
    );
    assert!(
        !body_text.contains("__unlace_int_notequal") && !body_text.contains("__unlace_int_"),
        "orphan predicate comparison must not leak, got:\n{body_text}"
    );
}

#[test]
fn test_empty_then_else_prints_inverted_condition() {
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    // An empty then-branch with a *live* else-body collapses to a single
    // inverted guard: `if (!(v1)) { v2 = 1; }`. The else-body store must be
    // returned so it survives the dead-assignment prune — otherwise the
    // body empties out and the final `depolarize-empty-if` stage (correctly)
    // flips the now-empty guard to its positive form. This test pins the
    // genuine NON-empty-else inversion; the empty/dead-body flip is covered
    // by `test_depolarize_empty_negated_if_flips_to_positive`.
    let body = vec![
        HirNode::If {
            cond: sv(0, 4),
            then_body: vec![],
            else_body: Some(vec![HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r8,
                smallvec![c1],
                0x1000,
            ))]),
        },
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("empty_then_else", body);
    let output = print_c(&func);

    assert!(
        output.contains("if (!(v1)) {"),
        "empty then-branch should render as an inverted guard: {output}"
    );
    assert!(
        !output.contains("} else {"),
        "empty then-branch should not print an else shell: {output}"
    );
}

#[test]
fn test_depolarize_empty_negated_if_flips_to_positive() {
    let output = concat!(
        "void f(void) {\n",
        "    int v3; // reg?\n",
        "    if (!(v3)) {\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output);
    assert!(result.contains("    if (v3) {\n"), "{result}");
    assert!(!result.contains("if (!(v3))"), "{result}");
}

#[test]
fn test_depolarize_empty_negated_if_leaves_nonempty_body() {
    // `if (!c) { real }` must keep its inverted guard — only the body is
    // empty case fires.
    let output = concat!(
        "void f(void) {\n",
        "    if (!(v1)) {\n",
        "        result = 1;\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output.clone());
    assert_eq!(result, output, "non-empty body must be untouched");
}

#[test]
fn test_depolarize_empty_negated_if_leaves_else_chain() {
    // The inverted-else merge form (`test_empty_then_else_prints_inverted_condition`)
    // must survive even if the `if` brace block looks empty, because the
    // `} else {` is not a bare `}`.
    let output = concat!(
        "void f(void) {\n",
        "    if (!(v1)) {\n",
        "    } else {\n",
        "        result = 1;\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output.clone());
    assert_eq!(result, output, "else chain must be untouched");
}

#[test]
fn test_depolarize_empty_negated_if_nested_and() {
    // `!(a && b)` with an empty body de-polarizes to `a && b`.
    let output = concat!(
        "void f(void) {\n",
        "    if (!(a && b)) {\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output);
    assert!(result.contains("    if (a && b) {\n"), "{result}");
    assert!(!result.contains("!(a && b)"), "{result}");
}

#[test]
fn test_depolarize_empty_negated_if_skips_partial_negation() {
    // `!(a) && b` — the `!` negates only a sub-expr, not the whole guard,
    // so stripping it would change semantics. Leave it.
    let output = concat!(
        "void f(void) {\n",
        "    if (!(a) && b) {\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output.clone());
    assert_eq!(result, output, "partial negation must be untouched");
}

#[test]
fn test_depolarize_empty_negated_if_skips_positive_guard() {
    // Already-positive empty guard is left exactly as-is.
    let output = concat!(
        "void f(void) {\n",
        "    if (v3) {\n",
        "    }\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let result = super::depolarize_empty_negated_ifs(output.clone());
    assert_eq!(result, output);
}

#[test]
fn test_negate_condition_expr_inverts_top_level_comparison() {
    assert_eq!(super::negate_condition_expr("v6 == v13"), "v6 != v13");
    assert_eq!(super::negate_condition_expr("v6 != v13"), "v6 == v13");
    assert_eq!(super::negate_condition_expr("v6 <= v13"), "v6 > v13");
    assert_eq!(super::negate_condition_expr("v6 && v13"), "!(v6 && v13)");
}

#[test]
fn test_simplify_condition_expr_strips_top_level_double_negation() {
    assert_eq!(super::simplify_condition_expr_text("!(!v14)"), "v14");
    assert_eq!(super::simplify_condition_expr_text("!!result"), "result");
    assert_eq!(
        super::simplify_condition_expr_text("!(!LODWORD(a1))"),
        "LODWORD(a1)"
    );
    assert_eq!(
        super::simplify_condition_expr_text("!(!v14) && other"),
        "!(!v14) && other"
    );
}

#[test]
fn test_simplify_double_negation_condition_lines_keeps_non_condition_text() {
    let output = concat!(
        "int f(void) {\n",
        "    if (!(!v14)) {\n",
        "        x = !!v14;\n",
        "    } while (!(!v15));\n",
        "}\n",
    )
    .to_string();

    let simplified = super::simplify_double_negation_condition_lines(output);

    assert!(simplified.contains("if (v14) {"), "{simplified}");
    assert!(simplified.contains("} while (v15);"), "{simplified}");
    assert!(simplified.contains("x = !!v14;"), "{simplified}");
}

#[test]
fn test_prune_unused_plain_local_decls_keeps_used_and_preamble_fields() {
    let output = concat!(
        "struct __anon0 {\n",
        "    int field_0;\n",
        "};\n",
        "int f(void) {\n",
        "    int v1;\n",
        "    int v2; // eax\n",
        "    int v3;\n",
        "    char v20 = LOBYTE(v1); // temp\n",
        "    result &= flags;\n",
        "    return v1;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_plain_local_decls(output);

    assert!(pruned.contains("int field_0;"), "{pruned}");
    assert!(pruned.contains("int v1;"), "{pruned}");
    assert!(!pruned.contains("int v2;"), "{pruned}");
    assert!(!pruned.contains("int v3;"), "{pruned}");
    assert!(!pruned.contains("v20"), "{pruned}");
    assert!(pruned.contains("result &= flags;"), "{pruned}");
}

#[test]
fn test_prune_unused_labels_drops_orphan_keeps_referenced() {
    let output = concat!(
        "int f(void) {\n",
        "    if (a) {\n",
        "        goto label_3;\n",
        "    }\n",
        "label_3:;\n",
        "label_7:;\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_labels(output);

    // label_3 still has an incoming goto → kept.
    assert!(pruned.contains("label_3:;"), "{pruned}");
    assert!(pruned.contains("goto label_3;"), "{pruned}");
    // label_7 has no goto → swept (would trip -Werror=unused-label).
    assert!(!pruned.contains("label_7:;"), "{pruned}");
    // Surrounding statements are untouched.
    assert!(pruned.contains("return 0;"), "{pruned}");
}

#[test]
fn test_prune_fallthrough_gotos_preserves_shared_label() {
    let output = concat!(
        "int f(void) {\n",
        "    if (v1) {\n",
        "        goto label_1;\n",
        "    }\n",
        "    goto label_1;\n",
        "label_1:;\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_labels(super::prune_fallthrough_gotos(output));

    assert!(
        !pruned.contains("    goto label_1;\nlabel_1:;"),
        "fallthrough goto should be removed: {pruned}"
    );
    assert!(
        pruned.contains("        goto label_1;"),
        "non-fallthrough goto should still target the preserved label: {pruned}"
    );
    assert!(
        pruned.contains("label_1:;"),
        "shared target label must remain: {pruned}"
    );
}

#[test]
fn test_prune_unused_labels_ignores_comments_and_strings() {
    // A label-looking token inside a comment or string literal must not be
    // treated as a definition (parse_label_definition requires the line to
    // be *solely* a label), and a referenced label must survive even when a
    // comment mentions an unrelated label name.
    let output = concat!(
        "int f(void) {\n",
        "    // label_7: is described here\n",
        "    const char *s = \"label_7:\";\n",
        "    goto label_3;\n",
        "label_3:;\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_labels(output);

    assert!(pruned.contains("// label_7: is described here"), "{pruned}");
    assert!(pruned.contains("\"label_7:\""), "{pruned}");
    assert!(pruned.contains("label_3:;"), "{pruned}");
    assert!(pruned.contains("goto label_3;"), "{pruned}");
}

#[test]
fn test_parse_label_definition_matches_only_labels() {
    assert_eq!(
        super::parse_label_definition("label_16:;"),
        Some("label_16".to_string())
    );
    assert_eq!(
        super::parse_label_definition("    label_2:"),
        Some("label_2".to_string())
    );
    // Not label definitions.
    assert_eq!(super::parse_label_definition("goto label_3;"), None);
    assert_eq!(super::parse_label_definition("case 5:"), None);
    assert_eq!(super::parse_label_definition("default:"), None);
    assert_eq!(super::parse_label_definition("    x = y;"), None);
    assert_eq!(super::parse_label_definition("a ? b : c;"), None);
}

#[test]
fn test_prune_dead_plain_cond_assignment_before_decl_prune() {
    let output = concat!(
        "int f(void) {\n",
        "    _BOOL cond;\n",
        "    int v3;\n",
        "    int v34;\n",
        "    do {\n",
        "        v3 = v1 + v2; v34 = v2; cond = v1 == v2;\n",
        "    } while (v1 != v2);\n",
        "    return v3;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_plain_local_decls(super::prune_dead_plain_assignments(output));

    assert!(!pruned.contains("_BOOL cond;"), "{pruned}");
    assert!(!pruned.contains("int v34;"), "{pruned}");
    assert!(!pruned.contains("cond ="), "{pruned}");
    assert!(!pruned.contains("v34 ="), "{pruned}");
    assert!(pruned.contains("v3 = v1 + v2;"), "{pruned}");
    assert!(pruned.contains("while (v1 != v2);"), "{pruned}");
    assert!(pruned.contains("return v3;"), "{pruned}");
}

#[test]
fn test_prune_unused_plain_local_decls_reaches_fixpoint() {
    let output = concat!(
        "int f(void) {\n",
        "    int v1 = a1; // temp\n",
        "    int v2 = v1 + 1; // temp\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_plain_local_decls(output);

    assert!(!pruned.contains("v1"), "{pruned}");
    assert!(!pruned.contains("v2"), "{pruned}");
    assert!(pruned.contains("return 0;"), "{pruned}");
}

#[test]
fn test_dedupe_var_names_keeps_alias_param_versions_together() {
    let full = SsaVarnode {
        base: reg(16, 8),
        version: 1,
    };
    let low = SsaVarnode {
        base: reg(16, 4),
        version: 0,
    };
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    ctx.name_overrides.insert(full.base, "a3".to_string());
    ctx.name_overrides.insert(low.base, "a3".to_string());
    ctx.var_names.insert(full, "a3".to_string());
    ctx.var_names.insert(low, "a3".to_string());

    super::dedupe_var_names(&mut ctx);

    assert_eq!(ctx.var_names.get(&full).map(String::as_str), Some("a3"));
    assert_eq!(ctx.var_names.get(&low).map(String::as_str), Some("a3"));
}

#[test]
fn test_prune_dead_plain_assignments_keeps_versioned_arg_state() {
    let output = concat!(
        "int f(void) {\n",
        "    a3_1 = 0xaLL;\n",
        "    a4_1 = 0LL;\n",
        "    return a3_2 + a4_2;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_dead_plain_assignments(output);

    assert!(pruned.contains("a3_1 = 0xaLL;"), "{pruned}");
    assert!(pruned.contains("a4_1 = 0LL;"), "{pruned}");
}

#[test]
fn test_segment_rhs_is_pure_flag_store() {
    // Pure single overflow-macro stores: these ARE flag computations.
    assert!(super::segment_rhs_is_pure_flag_store(
        "c14 = __OFSUB__(c2, 1)"
    ));
    assert!(super::segment_rhs_is_pure_flag_store(
        "c14 = __OFADD__(a1, 4LL);"
    ));
    assert!(super::segment_rhs_is_pure_flag_store(
        "c14 = __OFSUB__((uintptr_t)(buf + 64), a1)"
    ));
    // Parity-flag idiom (PF): these ARE flag computations too.
    assert!(super::segment_rhs_is_pure_flag_store(
        "c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1)"
    ));
    assert!(super::segment_rhs_is_pure_flag_store(
        "c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - v151)) & 1);"
    ));
    // Compound RHS must NOT match (would wrongly drop a data-bearing store):
    assert!(!super::segment_rhs_is_pure_flag_store(
        "c14 = __OFSUB__(a, b) + __OFADD__(c, d)"
    ));
    // XOR consumer (signed-lt idiom) must NOT match — the flag feeds a cond:
    assert!(!super::segment_rhs_is_pure_flag_store(
        "cond = LOBYTE(a < b) ^ __OFSUB__(a, b)"
    ));
    assert!(!super::segment_rhs_is_pure_flag_store(
        "c14 = __OFSUB__(a, b) ^ c13"
    ));
    // Trailing arithmetic after the macro must NOT match:
    assert!(!super::segment_rhs_is_pure_flag_store(
        "c14 = __OFSUB__(a, b) + 1"
    ));
    // Parity idiom with a trailing consumer must NOT match:
    assert!(!super::segment_rhs_is_pure_flag_store(
        "c11 = !(__builtin_popcount(LOBYTE(x)) & 1) ^ c13"
    ));
    // popcount used as a real value (not the parity idiom) must NOT match:
    assert!(!super::segment_rhs_is_pure_flag_store(
        "n = __builtin_popcount(x)"
    ));
    // Non-flag RHS: not a flag store.
    assert!(!super::segment_rhs_is_pure_flag_store(
        "c10 = (_DWORD)c2 < (_DWORD)1"
    ));
    assert!(!super::segment_rhs_is_pure_flag_store(
        "v13 = add(x, 0xaLL)"
    ));
    // No '=' at all.
    assert!(!super::segment_rhs_is_pure_flag_store("return c14"));
}

#[test]
fn test_prune_dead_plain_assignments_collapses_temp_rewrites() {
    let output = concat!(
        "int f(void) {\n",
        "    int v1; // temp\n",
        "    v1 = 1;\n",
        "    v1 = 2;\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_plain_local_decls(super::prune_dead_plain_assignments(output));

    assert!(!pruned.contains("v1 = 1;"), "{pruned}");
    assert!(!pruned.contains("v1 = 2;"), "{pruned}");
    assert!(!pruned.contains("int v1;"), "{pruned}");
    assert!(pruned.contains("return 0;"), "{pruned}");
}

#[test]
fn test_prune_unused_plain_local_decls_drops_dead_pfn_scaffold() {
    let output = concat!(
        "int f(void) {\n",
        "    _QWORD pfn; // temp\n",
        "    return 0;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_unused_plain_local_decls(output);

    assert!(!pruned.contains("pfn"), "{pruned}");
    assert!(pruned.contains("return 0;"), "{pruned}");
}

#[test]
fn test_prune_dead_plain_assignments_keeps_register_rewrite_liveout() {
    let output = concat!(
        "int f(void) {\n",
        "    int v1; // r10d\n",
        "    v1 = 1;\n",
        "    v1 = 2;\n",
        "    return;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_dead_plain_assignments(output);

    assert!(pruned.contains("v1 = 1;"), "{pruned}");
    assert!(!pruned.contains("v1 = 2;"), "{pruned}");
}

#[test]
fn test_select_parenthesizes_when_used_as_comparison_operand() {
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    let select = IrInsn::with_output(
        IrOp::Select,
        Varnode::unique(0x100, 4),
        smallvec![reg(259, 1), reg(16, 4), reg(0, 4)],
        0x1000,
    );

    let nested = super::emit_expr_with_prec(
        &select,
        0,
        super::ParentCtx::lhs_of(IrOp::IntSless),
        &mut ctx,
    );

    assert!(
        nested.starts_with('(') && nested.ends_with(')'),
        "select used as comparison operand must be grouped: {nested}"
    );
    assert!(nested.contains(" ? ") && nested.contains(" : "), "{nested}");
}

#[test]
fn test_expression_inputs_aliased_redefined_detects_same_base_redef() {
    // Reproduce the array-max miscompile shape: a foldable IntSless taking
    // (reg_acc, reg_b_v1) is consumed later, after reg_b is rewritten to
    // reg_b_v2. The guard must report a redefinition so the emitter falls
    // back to the captured temp's name instead of re-inlining the SLESS.
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    let r_acc = reg(16, 4);
    let r_b = reg(24, 4);
    let u_flag = Varnode::unique(0x200, 1);

    let acc_sv0 = SsaVarnode {
        base: r_acc,
        version: 0,
    };
    let b_sv1 = SsaVarnode {
        base: r_b,
        version: 1,
    };
    let b_sv2 = SsaVarnode {
        base: r_b,
        version: 2,
    };
    let flag_sv = SsaVarnode {
        base: u_flag,
        version: 0,
    };

    let sless = IrInsn::with_output(IrOp::IntSless, u_flag, smallvec![r_acc, r_b], 0x1000);
    let redef_b = IrInsn::with_output(IrOp::Copy, r_b, smallvec![con(0xa, 4)], 0x1004);

    ctx.stmt_insns.insert(100, sless.clone());
    ctx.stmt_insns.insert(101, redef_b);
    ctx.stmt_inputs.insert(100, vec![acc_sv0, b_sv1]);
    ctx.stmt_outputs.insert(100, Some(flag_sv));
    ctx.stmt_outputs.insert(101, Some(b_sv2));

    let triggers = super::expression_inputs_aliased_redefined_before_consumer(
        &flag_sv, &sless, 100, 102, &ctx,
    );
    assert!(
        triggers,
        "guard should detect r_b redef between def 100 and consumer 102"
    );

    // Same setup without the redef must NOT trigger.
    ctx.stmt_outputs.remove(&101);
    let triggers = super::expression_inputs_aliased_redefined_before_consumer(
        &flag_sv, &sless, 100, 102, &ctx,
    );
    assert!(
        !triggers,
        "guard should not fire when r_b is stable between def and consumer"
    );
}

#[test]
fn test_materialized_candidate_rejects_redefined_storage_before_consumer() {
    // Collatz regression: a same-source materialized register (`c8`) was
    // reused after a later `c8 = c8 & 1` parity assignment, turning
    // `old_c8 >> 1` into `parity >> 1`. The materialized candidate is only
    // valid until its visible storage is rewritten.
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    let old_c8 = SsaVarnode {
        base: reg(80, 8),
        version: 1,
    };
    let parity_c8 = SsaVarnode {
        base: reg(80, 8),
        version: 2,
    };
    ctx.stmt_outputs.insert(10, Some(old_c8));
    ctx.stmt_outputs.insert(12, Some(parity_c8));

    let stale = super::materialized_candidate_redefined_before_consumer(old_c8, 10, 20, &ctx);
    assert_eq!(stale, Some((12, parity_c8)));

    let still_valid = super::materialized_candidate_redefined_before_consumer(old_c8, 10, 12, &ctx);
    assert_eq!(still_valid, None);
}

#[test]
fn test_prune_dead_plain_assignments_keeps_argument_register_repairs() {
    let output = concat!(
        "int f(void) {\n",
        "    while (1) {\n",
        "        v1 = *(_DWORD *)(a6);\n",
        "    label_1:;\n",
        "        a2 = a2 + a3; a6 = a1; cond_7 = end == a1;\n",
        "        if (end == a1) {\n",
        "            break;\n",
        "        }\n",
        "        a1 = a1 + 4LL; continue;\n",
        "    }\n",
        "    return a2;\n",
        "}\n",
    )
    .to_string();

    let pruned = super::prune_dead_plain_assignments(output);

    assert!(pruned.contains("a6 = a1;"), "{pruned}");
    assert!(!pruned.contains("cond_7 ="), "{pruned}");
}

#[test]
fn test_declare_missing_control_v_decls_recognizes_later_typed_decl() {
    let output = concat!(
        "int f(void) {\n",
        "    __int64 v34 = v2 + 4LL; // rdi\n",
        "    if (v2 == v34) {\n",
        "    }\n",
        "}\n",
    )
    .to_string();

    let declared = super::declare_missing_control_v_decls(output);

    assert_eq!(declared.matches("v34").count(), 2, "{declared}");
    assert!(!declared.contains("int v34; // temp"), "{declared}");
}

#[test]
fn test_declare_missing_temp_decls_handles_versioned_arg_names() {
    let output = concat!(
        "int f(void) {\n",
        "    __int64 a4_13; // rcx\n",
        "    a3_1 = 0xaLL;\n",
        "    a4_1 = 0LL;\n",
        "    a4_13 = a4_1 + a3_1;\n",
        "    return a4_13;\n",
        "}\n",
    )
    .to_string();

    let declared = super::declare_missing_temp_v_decls(output);

    assert!(declared.contains("__int64 a3_1; // temp"), "{declared}");
    assert!(declared.contains("__int64 a4_1; // temp"), "{declared}");
    assert_eq!(declared.matches("__int64 a4_13;").count(), 1, "{declared}");
}

#[test]
fn test_declare_missing_temp_decls_handles_bare_arg_temp() {
    let output = concat!(
        "int f(int a1) {\n",
        "    a1 = a1 + 1LL;\n",
        "    a5 = a1 + 2LL;\n",
        "    return a5;\n",
        "}\n",
    )
    .to_string();

    let declared = super::declare_missing_temp_v_decls(output);

    assert!(declared.contains("__int64 a5; // temp"), "{declared}");
    assert!(!declared.contains("__int64 a1; // temp"), "{declared}");
}

#[test]
fn test_repair_arg_versioned_address_uses() {
    let output = concat!(
        "int f(void) {\n",
        "    int a4_11; // rcx\n",
        "    v253 = *(_DWORD *)(a4_11);\n",
        "    v270 = a4_11->field_4;\n",
        "}\n",
    )
    .to_string();

    let repaired = super::repair_arg_versioned_address_uses(output);

    assert!(
        repaired.contains("v253 = *(_DWORD *)(uintptr_t)(a4_11);"),
        "{repaired}"
    );
    assert!(
        repaired.contains("v270 = *(_DWORD *)((uintptr_t)a4_11 + 4);"),
        "{repaired}"
    );
}

#[test]
fn test_recover_triangular_sum_loop() {
    let output = concat!(
        "int f(int a1) {\n",
        "    int v13; // temp\n",
        "    int v18; // temp\n",
        "    int v2; // rax\n",
        "    int v3; // edx\n",
        "    int v4; // rdx\n",
        "    if (a1 == 0 || v18) {\n",
        "        return 0;\n",
        "    } else {\n",
        "        do {\n",
        "            v3 = v4 + (v2 << 1LL) + 1LL;\n",
        "        } while (a1 != v13);\n",
        "        return v3;\n",
        "    }\n",
        "}\n",
    )
    .to_string();

    let recovered = super::recover_triangular_sum_loop(output);

    assert!(
        recovered.contains("for (int i = 0; i < a1; i++)"),
        "{recovered}"
    );
    assert!(recovered.contains("s += i;"), "{recovered}");
    assert!(recovered.contains("return s;"), "{recovered}");
    assert!(!recovered.contains("int v13;"), "{recovered}");
}

#[test]
fn test_constant_return_renders_literal() {
    let body = vec![HirNode::Return(Some(SsaVarnode {
        base: con(6, 4),
        version: 0,
    }))];
    let func = make_func("constant_return", body);
    let output = print_c(&func);

    assert!(output.contains("return 6;"), "return literal: {output}");
    assert!(
        !output.contains("result;"),
        "constant return should not allocate a result local: {output}"
    );
}

#[test]
fn test_void_function_return_operand_does_not_emit_result() {
    let body = vec![HirNode::Return(Some(sv(0, 4)))];
    let mut func = make_func("void_return_operand", body);
    func.return_type = PrimitiveType::Unknown;
    let output = print_c(&func);

    assert!(
        output.contains("void void_return_operand(void)"),
        "{output}"
    );
    assert!(output.contains("return;"), "{output}");
    assert!(
        !output.contains("return result;") && !output.contains("int result;"),
        "void return operand should not leak a result local: {output}"
    );
}

#[test]
fn test_post_dowhile_version_skewed_temp_return_uses_loop_copy() {
    let tmp = Varnode::unique(0x200, 8);
    let cond = Varnode::unique(0x208, 1);
    let acc32 = reg(16, 4);
    let acc64 = reg(16, 8);

    let body = vec![
        HirNode::DoWhile {
            body: vec![
                HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    tmp,
                    smallvec![acc64, con(1, 8)],
                    0x1000,
                )),
                HirNode::Statement(IrInsn::with_output(
                    IrOp::Copy,
                    acc32,
                    smallvec![tmp],
                    0x1001,
                )),
                HirNode::Statement(IrInsn::with_output(
                    IrOp::IntNotequal,
                    cond,
                    smallvec![acc32, con(0, 4)],
                    0x1002,
                )),
            ],
            cond: SsaVarnode {
                base: cond,
                version: 0,
            },
        },
        // Real loop exits can carry an SSA version produced by phi
        // bookkeeping that the C printer's raw-HIR collection does not
        // recreate.  Returning that version directly used to invent an
        // unassigned `result` local even though the just-emitted loop
        // copied the value into visible storage.
        HirNode::Return(Some(SsaVarnode {
            base: tmp,
            version: 1,
        })),
    ];
    let func = make_func("loop_temp_return", body);
    let output = print_c(&func);

    assert!(
        !output.contains("return result;"),
        "post-loop return should not use an unassigned result temp: {output}"
    );
    assert!(
        !output.contains("int result;"),
        "post-loop recovered return temp should not request a result declaration: {output}"
    );
    assert!(
        output.contains("return v") || output.contains("return result +"),
        "post-loop return should resolve to a concrete loop value: {output}"
    );
}

#[test]
fn test_post_dowhile_compare_copy_scaffold_inlines_sources() {
    let bound64 = reg(56, 8);
    let bound32 = Varnode::unique(0x2f8, 4);
    let counter = reg(0, 4);
    let next_counter = Varnode::unique(0x2fc, 4);
    let bound_copy = Varnode::unique(0x300, 4);
    let counter_copy = Varnode::unique(0x304, 4);
    let cond = Varnode::unique(0x308, 1);

    let mut func = make_func(
        "dowhile_compare_copy_scaffold",
        vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Subpiece,
                bound32,
                smallvec![bound64, con(0, 1)],
                0x0ff0,
            )),
            HirNode::DoWhile {
                body: vec![
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::IntAdd,
                        next_counter,
                        smallvec![counter, con(2, 4)],
                        0x0ffc,
                    )),
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::Copy,
                        counter,
                        smallvec![next_counter],
                        0x0ffd,
                    )),
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::Copy,
                        bound_copy,
                        smallvec![bound32],
                        0x1000,
                    )),
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::Copy,
                        counter_copy,
                        smallvec![counter],
                        0x1001,
                    )),
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::IntNotequal,
                        cond,
                        smallvec![bound_copy, counter_copy],
                        0x1002,
                    )),
                ],
                cond: SsaVarnode {
                    base: cond,
                    version: 0,
                },
            },
            HirNode::Return(Some(SsaVarnode {
                base: counter,
                version: 0,
            })),
        ],
    );
    func.var_role_names.insert(
        SsaVarnode {
            base: bound64,
            version: 0,
        },
        "a1".to_string(),
    );
    func.var_role_names.insert(
        SsaVarnode {
            base: counter,
            version: 0,
        },
        "result".to_string(),
    );

    let output = print_c(&func);

    assert!(
        output.contains("} while (a1 != result);"),
        "do/while latch should inline pure compare-copy sources: {output}",
    );
    assert!(
        !output.contains("bound_copy") && !output.contains("counter_copy"),
        "test sentinel names should not leak: {output}",
    );
    assert!(
        !output.contains("v1 = a1;") && !output.contains("v2 = result;"),
        "pure compare-copy scaffold should be pruned after condition inlining: {output}",
    );
}

#[test]
fn test_print_while() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::While {
            cond: sv(0, 4),
            body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntSub,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
        },
        HirNode::Return(None),
    ];

    let func = make_func("while_func", body);
    let output = print_c(&func);

    assert!(output.contains("while (v1)"), "while: {output}");
    assert!(output.contains("v1--;"), "body: {output}");
    assert!(output.contains("return 0;"), "return: {output}");
}

#[test]
fn test_control_condition_assignment_inlines_when_control_only() {
    let r0 = reg(0, 4);
    let cmp_out = Varnode::unique(0x220, 1);
    let cond = SsaVarnode {
        base: cmp_out,
        version: 0,
    };

    let cmp = IrInsn::with_output(IrOp::IntEqual, cmp_out, smallvec![r0, con(0, 4)], 0x1000);
    let body = vec![
        HirNode::Statement(cmp),
        HirNode::If {
            cond,
            then_body: vec![HirNode::Return(None)],
            else_body: None,
        },
        HirNode::Return(None),
    ];

    let func = make_func("inline_cond", body);
    let output = print_c(&func);

    assert!(
        output.contains("if (v1 == 0)"),
        "control-only condition should inline its comparison: {output}",
    );
    assert!(
        !output.contains("cond ="),
        "standalone condition assignment should be suppressed: {output}",
    );
    assert!(
        !output.contains("_BOOL cond"),
        "suppressed condition temp should not leave a declaration: {output}",
    );
}

#[test]
fn test_control_condition_inlines_latest_same_base_version() {
    let r0 = reg(0, 4);
    let cmp_out = Varnode::unique(0x224, 1);
    let stale_cond = SsaVarnode {
        base: cmp_out,
        version: 7,
    };

    let cmp = IrInsn::with_output(IrOp::IntEqual, cmp_out, smallvec![r0, con(0, 4)], 0x1000);
    let body = vec![
        HirNode::DoWhile {
            body: vec![HirNode::Statement(cmp)],
            cond: stale_cond,
        },
        HirNode::Return(None),
    ];

    let func = make_func("inline_stale_cond", body);
    let output = print_c(&func);

    assert!(
        output.contains("} while (v1 == 0);"),
        "do/while condition should inline the latest same-base comparison: {output}",
    );
    assert!(
        !output.contains("cond ="),
        "same-base condition assignment should stay suppressed: {output}",
    );
    assert!(
        !output.contains("_BOOL cond"),
        "same-base condition temp should not leave a declaration: {output}",
    );
}

/// `merged_names` from [`unlace_passes::VariableMergePass`] should drive
/// the C printer's variable naming, overriding the default `vN` allocator.
/// Two distinct base [`Varnode`]s coalesced into one cluster must appear
/// under the same source-level name.
#[test]
fn test_merged_names_drives_naming() {
    // r0 = r8 + 1; return r0;  → `r0` will end up renderable.
    // We seed merged_names so that r0 (sv version 0) and r8 (sv version 0)
    // both map to the same `vCOAL` name.
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let mut func = make_func("merge_test", body);
    let r0_sv = SsaVarnode {
        base: r0,
        version: 0,
    };
    let r8_sv = SsaVarnode {
        base: r8,
        version: 0,
    };
    func.merged_names.insert(r0_sv, "vCOAL".to_string());
    func.merged_names.insert(r8_sv, "vCOAL".to_string());

    let output = print_c(&func);

    // Either `vCOAL` shows up directly OR a higher-priority role override
    // (e.g. `result` for the return value) replaces it.  We only assert
    // that no leaked `v1` / `v2` fallback names appear, which would mean
    // the merged_names path was bypassed entirely.
    let banned = [" v1 ", " v2 ", "v1 = ", "v2 = ", "(v1 ", "(v2 "];
    for needle in banned {
        assert!(
            !output.contains(needle),
            "fallback name {needle:?} leaked despite merged_names override: {output}",
        );
    }

    // The merged name should appear somewhere in the rendered body.
    assert!(
        output.contains("vCOAL"),
        "merged name `vCOAL` should appear in output: {output}",
    );
}

#[test]
fn test_hoist_merged_temp_decl_from_var_names() {
    // Regression for leaked-temp suppression: merged/coalesced names are
    // stored in `ctx.var_names`, not always `ctx.base_names`.  The hoist
    // planner must still fold the declaration into the first assignment
    // instead of leaking `int v1;` at function top.
    let u0 = Varnode::unique(0x100, 4);
    let r8 = reg(8, 4);
    let r16 = reg(16, 4);
    let call_target = con(0x2000, 8);
    let c2 = con(2, 4);
    let c3 = con(3, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Call,
            u0,
            smallvec![call_target],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r8,
            smallvec![u0, c2],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r16,
            smallvec![u0, c3],
            0x1008,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r16,
            version: 0,
        })),
    ];

    let mut func = make_func("hoist_merged", body);
    func.merged_names.insert(
        SsaVarnode {
            base: u0,
            version: 0,
        },
        "v1".to_string(),
    );

    let output = print_c(&func);

    assert!(output.contains("int v1 = sub_2000();"), "{output}");
    assert!(
        !output.contains("\n    int v1;\n"),
        "merged temp should not leak a function-top declaration: {output}",
    );
}

#[test]
fn test_hoist_shared_merged_name_declares_once() {
    // Two disjoint unique bases can share one merged name.  The first
    // assignment may carry the declaration; later assignments to the same
    // source-level name must remain plain assignments, not redeclarations.
    let u0 = Varnode::unique(0x100, 4);
    let u4 = Varnode::unique(0x104, 4);
    let r8 = reg(8, 4);
    let r16 = reg(16, 4);
    let r24 = reg(24, 4);
    let r32 = reg(32, 4);
    let call_a = con(0x2000, 8);
    let call_b = con(0x2004, 8);
    let c2 = con(2, 4);
    let c3 = con(3, 4);
    let c5 = con(5, 4);
    let c6 = con(6, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Call,
            u0,
            smallvec![call_a],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r8,
            smallvec![u0, c2],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r16,
            smallvec![u0, c3],
            0x1008,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Call,
            u4,
            smallvec![call_b],
            0x100c,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r24,
            smallvec![u4, c5],
            0x1010,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r32,
            smallvec![u4, c6],
            0x1014,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r32,
            version: 0,
        })),
    ];

    let mut func = make_func("hoist_shared", body);
    for base in [u0, u4] {
        func.merged_names
            .insert(SsaVarnode { base, version: 0 }, "v1".to_string());
    }

    let output = print_c(&func);

    assert_eq!(output.matches("int v1 = ").count(), 1, "{output}");
    assert!(output.contains("int v1 = sub_2000();"), "{output}");
    assert!(output.contains("v1 = sub_2004();"), "{output}");
    assert!(
        !output.contains("int v1 = sub_2004();"),
        "shared merged name must not be redeclared: {output}",
    );
}

#[test]
fn test_hoist_plan_rejects_loop_body_decl_read_by_do_while_condition() {
    let u_cond = Varnode::unique(0x300, 4);
    let u_cmp = Varnode::unique(0x301, 1);
    let cond_sv = SsaVarnode {
        base: u_cond,
        version: 0,
    };
    let cmp_sv = SsaVarnode {
        base: u_cmp,
        version: 0,
    };
    let assign = IrInsn::with_output(IrOp::Copy, u_cond, smallvec![reg(0, 4)], 0x1000);
    let cmp = IrInsn::with_output(
        IrOp::IntNotequal,
        u_cmp,
        smallvec![u_cond, con(0, 4)],
        0x1004,
    );
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );

    ctx.var_names.insert(cond_sv, "v57".to_string());
    ctx.var_names.insert(cmp_sv, "cond_9".to_string());
    ctx.stmt_outputs.insert(10, Some(cond_sv));
    ctx.stmt_outputs.insert(11, Some(cmp_sv));
    ctx.stmt_inputs.insert(10, Vec::new());
    ctx.stmt_inputs.insert(11, vec![cond_sv]);
    ctx.stmt_insns.insert(10, assign);
    ctx.stmt_insns.insert(11, cmp);
    ctx.stmt_scope_paths.insert(10, vec![1]);
    ctx.stmt_scope_paths.insert(11, vec![1]);
    ctx.cond_use_stmts.push((cmp_sv, 11));
    ctx.cond_use_scope_paths.push((cmp_sv, Vec::new()));
    ctx.next_stmt = 12;

    super::compute_hoist_plan(&mut ctx);

    assert!(
        !ctx.hoist_decl_plan.contains_key(&u_cond),
        "do/while condition read outside the body must keep declaration at function scope"
    );
}

#[test]
fn test_hoist_plan_rejects_shared_name_with_outer_scope_touch() {
    let u_loop = Varnode::unique(0x310, 4);
    let u_after = Varnode::unique(0x314, 4);
    let loop_sv = SsaVarnode {
        base: u_loop,
        version: 0,
    };
    let after_sv = SsaVarnode {
        base: u_after,
        version: 0,
    };
    let mut ctx = super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );

    ctx.var_names.insert(loop_sv, "v29".to_string());
    ctx.var_names.insert(after_sv, "v29".to_string());
    ctx.stmt_outputs.insert(10, Some(loop_sv));
    ctx.stmt_outputs.insert(11, Some(after_sv));
    ctx.stmt_inputs.insert(10, Vec::new());
    ctx.stmt_inputs.insert(11, Vec::new());
    ctx.stmt_insns.insert(
        10,
        IrInsn::with_output(IrOp::Copy, u_loop, smallvec![reg(0, 4)], 0x1000),
    );
    ctx.stmt_insns.insert(
        11,
        IrInsn::with_output(IrOp::Copy, u_after, smallvec![reg(8, 4)], 0x1004),
    );
    ctx.stmt_scope_paths.insert(10, vec![1]);
    ctx.stmt_scope_paths.insert(11, Vec::new());
    ctx.next_stmt = 12;

    super::compute_hoist_plan(&mut ctx);

    assert!(
        !ctx.hoist_decl_plan.contains_key(&u_loop),
        "a shared source name touched at outer scope must not be declared inside an inner block"
    );
}

/// When `merged_names` is empty (pass not run) the printer still folds a
/// trivial return temporary instead of forcing a synthetic result local.
#[test]
#[allow(non_snake_case)] // "vN" is the IDA-style varname pattern under test
fn test_empty_merged_names_falls_back_to_vN() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("fallback", body);
    // merged_names is empty in make_func.
    let output = print_c(&func);

    // The return-folding path is independent of merged_names.
    assert!(
        output.contains("return 1;"),
        "fallback path should fold the copied return value: {output}",
    );
    assert!(
        !output.contains("result"),
        "folded return temp should not leak a synthetic result local: {output}",
    );
}

/// t227 — a `var_role_names` entry for an SSA value overrides the
/// printer's default `vN` allocator. We seed the role name directly
/// here (the pass-side classification is covered by the var_naming
/// unit tests); this test exercises the printer-side wiring.
#[test]
fn t227_var_role_name_overrides_default_vn() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let mut func = make_func("role_test", body);
    // Mark r8's defining SSA value as a loop counter — should
    // render as `i` rather than the default fresh `vN`.
    let r8_sv = SsaVarnode {
        base: r8,
        version: 0,
    };
    func.var_role_names.insert(r8_sv, "i".to_string());

    let output = print_c(&func);
    assert!(
        output.contains(" i "),
        "loop-counter role name `i` should appear in the body: {output}",
    );
}

/// Generic coalesced-register names (`cN`) are allocator artifacts like
/// `vN`, not semantic names. A factual role such as `i` should win.
#[test]
fn t227_var_role_name_overrides_generic_cn() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let mut func = make_func("role_cn", body);
    let r8_sv = SsaVarnode {
        base: r8,
        version: 0,
    };
    func.merged_names.insert(r8_sv, "c0".to_string());
    func.var_role_names.insert(r8_sv, "i".to_string());

    let output = print_c(&func);
    assert!(
        output.contains(" i "),
        "role name should beat generic cN name: {output}",
    );
    assert!(
        !function_body_text(&output, "role_cn").contains("c0"),
        "generic cN name leaked despite role name: {output}",
    );
}

#[test]
fn t227_var_role_name_overrides_generic_argument_name() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let mut func = make_func("role_arg", body);
    let r8_sv = SsaVarnode {
        base: r8,
        version: 0,
    };
    func.merged_names.insert(r8_sv, "a1".to_string());
    func.var_role_names.insert(r8_sv, "this".to_string());

    let output = print_c(&func);
    let body_text = function_body_text(&output, "role_arg");
    assert!(
        body_text.contains(" this "),
        "role name should beat generic ABI argument name: {body_text}"
    );
    assert!(
        !body_text.contains(" a1 "),
        "generic argument name leaked despite stronger role name: {body_text}"
    );
}

/// t227 — with no role names and no loops, the printer keeps using
/// its default `vN` allocator (regression guard so the role-name
/// path doesn't accidentally start firing when no classification
/// data is present).
#[test]
fn t227_no_roles_no_loops_falls_back_to_default() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    // r0 = r8 + 1; return r0;  — uses r8 as input so a Read-only
    // base needs a printer name.
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    // var_role_names is empty in make_func.
    let func = make_func("no_roles", body);
    let output = print_c(&func);

    // Scope assertions to the function body — the shared SSE prelude
    // legitimately uses `for (unsigned int i = 0; …)` (a ` i ` substring).
    let body_text = function_body_text(&output, "no_roles");

    // Body should mention a generic `vN`-style variable for the
    // unnamed r8 input. The exact index isn't important — only
    // that no role-style identifier leaked in from anywhere.
    let has_default =
        body_text.contains("v1") || body_text.contains("v2") || body_text.contains("v3");
    assert!(
        has_default,
        "with no roles or loops we should see a default vN name: {body_text}",
    );
    for forbidden in [" i ", " j ", " k ", "saved_"] {
        assert!(
            !body_text.contains(forbidden),
            "unexpected role-style name `{forbidden}` in {body_text}",
        );
    }
}

/// t230 — when a function carries a finalized signature with one
/// dropped param, the printed header has one fewer parameter and
/// surfaces the count via a trailing `// dropped 1 param` comment.
#[test]
fn t230_dropped_param_shrinks_header() {
    use unlace_ir::ssa::FinalizedSignature;
    use unlace_ir::types::Type;

    let body = vec![HirNode::Return(None)];
    let mut func = make_func("drop_param", body);
    // The raw `inferred_params` view says there are two args; the
    // finalized signature drops the second.
    func.params = vec![
        ("a1".into(), PrimitiveType::Int(8)),
        ("a2".into(), PrimitiveType::Int(8)),
    ];
    func.finalized_signature = Some(FinalizedSignature {
        params: vec![("a1".into(), Type::Primitive(PrimitiveType::Int(8)))],
        return_type: Type::Primitive(PrimitiveType::Unknown),
        dropped_param_count: 1,
        sret: false,
    });
    let output = print_c(&func);
    assert!(
        output.contains("(__int64 a1)"),
        "header should have exactly one param: {output}",
    );
    assert!(
        !output.contains(" a2"),
        "dropped param `a2` should not appear: {output}",
    );
    assert!(
        output.contains("// dropped 1 param"),
        "dropped-param comment missing: {output}",
    );
}

/// t263 — the dropped-param comment uses the
/// `// dropped N param(s) (dead in body)` format spelled out in
/// the task spec, so a downstream tool can grep on the literal
/// `(dead in body)` qualifier to find calling-convention-shrunk
/// signatures.
#[test]
fn t263_dropped_param_comment_uses_dead_in_body_phrasing() {
    use unlace_ir::ssa::FinalizedSignature;
    use unlace_ir::types::Type;

    let body = vec![HirNode::Return(None)];
    let mut func = make_func("drop_param_dead", body);
    func.params = vec![
        ("a1".into(), PrimitiveType::Int(8)),
        ("a2".into(), PrimitiveType::Int(8)),
        ("a3".into(), PrimitiveType::Int(8)),
    ];
    func.finalized_signature = Some(FinalizedSignature {
        params: vec![("a1".into(), Type::Primitive(PrimitiveType::Int(8)))],
        return_type: Type::Primitive(PrimitiveType::Unknown),
        dropped_param_count: 2,
        sret: false,
    });
    let output = print_c(&func);
    assert!(
        output.contains("// dropped 2 param(s) (dead in body)"),
        "expected `// dropped N param(s) (dead in body)` format, got: {output}",
    );
    assert!(
        output.contains(") /* // dropped 2 param(s) (dead in body) */ {"),
        "dropped-param note must not comment out the opening brace: {output}",
    );
}

/// t230 — a finalized parameter narrowed to `Int(1)` renders as
/// `char` in the header (instead of the raw `__int64` we'd see
/// from a pre-narrow `inferred_params` entry).
#[test]
fn t230_narrowed_byte_param_renders_as_int8() {
    use unlace_ir::ssa::FinalizedSignature;
    use unlace_ir::types::Type;

    let body = vec![HirNode::Return(None)];
    let mut func = make_func("narrow_byte", body);
    func.params = vec![("a1".into(), PrimitiveType::Int(8))];
    func.finalized_signature = Some(FinalizedSignature {
        params: vec![("a1".into(), Type::Primitive(PrimitiveType::Int(1)))],
        return_type: Type::Primitive(PrimitiveType::Unknown),
        dropped_param_count: 0,
        sret: false,
    });
    let output = print_c(&func);
    assert!(
        output.contains("char a1"),
        "byte-narrowed param should render as char: {output}",
    );
    // No dropped-param comment should appear when count is zero.
    assert!(
        !output.contains("// dropped"),
        "unexpected dropped-param comment: {output}",
    );
}

/// t230 — a finalized return type set from consistent caller use
/// shows up in the rendered header, overriding the raw
/// `func.return_type`.
#[test]
fn t230_finalized_return_type_drives_header() {
    use unlace_ir::ssa::FinalizedSignature;
    use unlace_ir::types::Type;

    let body = vec![HirNode::Return(None)];
    let mut func = make_func("ret_finalize", body);
    // Raw return type is the printer's `void` sentinel (Unknown).
    func.return_type = PrimitiveType::Unknown;
    // Finalized return type narrowed from consistent caller use to int8.
    func.finalized_signature = Some(FinalizedSignature {
        params: vec![],
        return_type: Type::Primitive(PrimitiveType::Int(1)),
        dropped_param_count: 0,
        sret: false,
    });
    let output = print_c(&func);
    // First line of the body is the function decl; that should
    // start with `char` now rather than `void`.
    assert!(
        output.contains("char") && output.contains("ret_finalize"),
        "finalized return type should drive header: {output}",
    );
}

/// t227 — a *meaningful* `merged_names` entry (anything other than
/// the default `vN` pattern) always wins over a role-based
/// suggestion. Two distinct passes shouldn't fight over naming: if
/// the variable-merge coalescer already picked a semantic name we
/// respect it.
#[test]
fn t227_meaningful_merged_name_beats_role_name() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let mut func = make_func("conflict", body);
    let r8_sv = SsaVarnode {
        base: r8,
        version: 0,
    };
    // VariableMergePass picked the semantic name `counter_total`.
    func.merged_names.insert(r8_sv, "counter_total".to_string());
    // VarNamingPass would also like to call this thing `i`.
    func.var_role_names.insert(r8_sv, "i".to_string());

    let output = print_c(&func);
    assert!(
        output.contains("counter_total"),
        "meaningful merged name should win: {output}",
    );
    // The role-name `i` must not leak as a standalone identifier for this
    // varnode. Scope to the function body — the shared SSE prelude uses
    // `for (unsigned int i = 0; …)` loop counters, which are fine.
    let body_text = function_body_text(&output, "conflict");
    assert!(
        !body_text.contains(" i ") && !body_text.contains(" i;") && !body_text.contains(" i,"),
        "role name `i` leaked despite meaningful merged name: {body_text}",
    );
}

#[test]
fn test_print_deterministic() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("deterministic", body);
    let out1 = print_c(&func);
    let out2 = print_c(&func);

    assert_eq!(out1, out2, "print_c must be deterministic");
}

#[test]
fn test_print_compiles() {
    let gcc_available = std::process::Command::new("gcc")
        .arg("--version")
        .output()
        .is_ok();
    if !gcc_available {
        eprintln!("gcc not found, skipping test_print_compiles");
        return;
    }

    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);
    let c0 = con(0, 4);

    let body = vec![
        HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: Some(vec![HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r8,
                smallvec![c0],
                0x1010,
            ))]),
        },
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("test_func", body);
    let source = print_c(&func);

    let result = std::process::Command::new("gcc")
        .args(["-fsyntax-only", "-x", "c", "-", "-std=c11"])
        .stdin(std::process::Stdio::piped())
        .stdout(std::process::Stdio::piped())
        .stderr(std::process::Stdio::piped())
        .spawn();

    let Ok(mut child) = result else {
        eprintln!("Failed to spawn gcc, skipping");
        return;
    };

    {
        use std::io::Write;
        let stdin = child.stdin.as_mut().expect("stdin pipe");
        stdin.write_all(source.as_bytes()).expect("write to stdin");
    }

    let output = child.wait_with_output().expect("wait for gcc");
    assert!(
        output.status.success(),
        "gcc -fsyntax-only failed:\n--- source ---\n{}\n--- stderr ---\n{}",
        source,
        String::from_utf8_lossy(&output.stderr),
    );
}

#[test]
fn test_print_goto_label() {
    let body = vec![
        HirNode::Goto(LabelId(0)),
        HirNode::Label(LabelId(0)),
        HirNode::Return(None),
    ];

    let func = make_func("goto_test", body);
    let output = print_c(&func);

    assert!(
        !output.contains("goto label_0;"),
        "fallthrough goto should be pruned: {output}"
    );
    assert!(
        !output.contains("label_0:;"),
        "now-unreferenced fallthrough label should be pruned: {output}"
    );
}

#[test]
fn test_print_goto_keeps_non_adjacent_later_label() {
    let body = vec![
        HirNode::Goto(LabelId(1)),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![con(0x1234, 8)],
            0x1000,
        )),
        HirNode::Label(LabelId(1)),
        HirNode::Return(None),
    ];

    let func = make_func("goto_non_adjacent_label_test", body);
    let output = print_c(&func);

    assert!(output.contains("goto label_1;"), "goto: {output}");
    assert!(
        output.contains("label_1:;"),
        "non-adjacent later label must still be emitted: {output}"
    );
}

#[test]
fn test_print_do_while() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::DoWhile {
            body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntSub,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            cond: sv(0, 4),
        },
        HirNode::Return(None),
    ];

    let func = make_func("do_while_func", body);
    let output = print_c(&func);

    assert!(output.contains("do {"), "do: {output}");
    assert!(output.contains("} while (v1);"), "while cond: {output}");
}

#[test]
fn test_print_types() {
    assert_eq!(super::c_type(&PrimitiveType::Bool), "_BOOL");
    assert_eq!(super::c_type(&PrimitiveType::Int(1)), "char");
    assert_eq!(super::c_type(&PrimitiveType::Int(2)), "__int16");
    assert_eq!(super::c_type(&PrimitiveType::Int(4)), "int");
    assert_eq!(super::c_type(&PrimitiveType::Int(8)), "__int64");
    assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(1)), "_BYTE");
    assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(4)), "_DWORD");
    assert_eq!(super::c_type(&PrimitiveType::Float), "float");
    assert_eq!(super::c_type(&PrimitiveType::Double), "double");
    assert_eq!(super::c_type(&PrimitiveType::Ptr), "void *");
    assert_eq!(super::c_type(&PrimitiveType::Unknown), "int");
}

#[test]
fn test_oword_type_for_128_bit_values() {
    assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(16)), "_OWORD");
    assert_eq!(super::c_type(&PrimitiveType::Int(16)), "__int128");
    assert_eq!(super::ida_ptr_type(16), "_OWORD *");
}

#[test]
fn test_branchind_emits_jumpout() {
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![reg(0, 8)],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("indirect_jump", body);
    let output = print_c(&func);

    assert!(
        output.contains("JUMPOUT("),
        "unresolved indirect branch must emit JUMPOUT(): {output}"
    );
}

#[test]
fn test_print_indentation() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![HirNode::If {
        cond: sv(0, 4),
        then_body: vec![HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: None,
        }],
        else_body: None,
    }];

    let func = make_func("nested", body);
    let output = print_c(&func);

    // Depth 3: function body (1) + outer if (2) + inner if (3) = 12 spaces.
    let add_line = output
        .lines()
        .find(|l| l.contains("v1++;"))
        .expect("should find add line");
    assert!(
        add_line.starts_with("            "),
        "expected 12 spaces (3 levels): {add_line:?}"
    );
}

#[test]
fn test_print_params() {
    let func = HirFunction {
        name: "with_params".to_string(),
        params: vec![
            ("a".to_string(), PrimitiveType::Int(4)),
            ("b".to_string(), PrimitiveType::Ptr),
        ],
        return_type: PrimitiveType::Ptr,
        body: vec![HirNode::Return(None)],
        addr: 0x2000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("void * with_params(int a, void * b)"),
        "params: {output}"
    );
}

#[test]
fn test_ssa_version_names() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let c2 = con(2, 4);
    let c3 = con(3, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c2],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c3],
            0x1008,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 2,
        })),
    ];

    let func = make_func("ssa_test", body);
    let output = print_c(&func);

    assert!(
        output.contains("int result;") || output.contains("return 1 + 2 + 3;"),
        "result declaration or fully folded return expected: {output}",
    );

    assert!(
        output.contains("result = 1 + 2 + 3;") || output.contains("return 1 + 2 + 3;"),
        "folded expression expected: {output}",
    );

    assert!(
        output.contains("return result;") || output.contains("return 1 + 2 + 3;"),
        "return expected: {output}",
    );
}

#[test]
fn test_print_ternary() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let c2 = con(2, 4);

    let body = vec![
        HirNode::Ternary {
            cond: sv(0, 4),
            then_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            else_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c2], 0x1010),
            output: r0,
        },
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("ternary_func", body);
    let output = print_c(&func);

    // Scope to the function body — the shared IDA/SSE prelude legitimately
    // contains `?:` (e.g. `__unlace_psrldq`), which would otherwise be the
    // first `?`-bearing line found.
    let body_text = function_body_text(&output, "ternary_func");
    assert!(
        body_text.contains("?") && body_text.contains(":"),
        "should contain ternary operator: {body_text}"
    );
    let ternary_line = body_text
        .lines()
        .find(|l| l.contains("?"))
        .expect("should find ternary line");
    assert!(
        ternary_line.contains(" = ")
            && ternary_line.contains(" ? ")
            && ternary_line.contains(" : "),
        "ternary should be `lhs = cond ? a : b;`, got: {ternary_line}"
    );
}

#[test]
fn test_print_ternary_compiles() {
    let gcc_available = std::process::Command::new("gcc")
        .arg("--version")
        .output()
        .is_ok();
    if !gcc_available {
        eprintln!("gcc not found, skipping test_print_ternary_compiles");
        return;
    }

    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let c2 = con(2, 4);

    let body = vec![
        HirNode::Ternary {
            cond: sv(0, 4),
            then_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            else_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c2], 0x1010),
            output: r0,
        },
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("ternary_compile_test", body);
    let source = print_c(&func);

    let result = std::process::Command::new("gcc")
        .args(["-fsyntax-only", "-x", "c", "-", "-std=c11"])
        .stdin(std::process::Stdio::piped())
        .stdout(std::process::Stdio::piped())
        .stderr(std::process::Stdio::piped())
        .spawn();

    let Ok(mut child) = result else {
        eprintln!("Failed to spawn gcc, skipping");
        return;
    };

    {
        use std::io::Write;
        let stdin = child.stdin.as_mut().expect("stdin pipe");
        stdin.write_all(source.as_bytes()).expect("write to stdin");
    }

    let output = child.wait_with_output().expect("wait for gcc");
    assert!(
        output.status.success(),
        "gcc -fsyntax-only failed on ternary:\n--- source ---\n{}\n--- stderr ---\n{}",
        source,
        String::from_utf8_lossy(&output.stderr),
    );
}

/// DWARF info for a function at 0x1000 whose single parameter `param` has
/// pointer type `type_name`, plus a System V header so the parameter maps to
/// `rdi`.
fn dwarf_with_pointer_param(
    param: &str,
    type_name: &str,
    pointee_size: u64,
    structs: Vec<unlace_loader::StructType>,
) -> (unlace_loader::DwarfInfo, super::FunctionHeaderInfo) {
    use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};
    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "f".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            ranges: vec![],
            params: vec![ParameterInfo {
                name: Some(param.to_string()),
                type_name: Some(type_name.to_string()),
                pointee_size: Some(pointee_size),
                frame_offset: None,
            }],
            return_type: Some("int".to_string()),
            decl: None,
            locals: vec![],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: structs.into_iter().map(|s| (s.name.clone(), s)).collect(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };
    let header = super::FunctionHeaderInfo {
        name: "f".to_string(),
        address: 0x1000,
        size: 0x20,
        convention: "System V AMD64".to_string(),
        stack_frame: 0,
        callees: vec![],
        dynamic_sp: false,
    };
    (dwarf, header)
}

/// [`dwarf_with_pointer_param`] for a pointer to `struct_ty`.
fn dwarf_with_struct_param(
    struct_ty: unlace_loader::StructType,
    param: &str,
) -> (unlace_loader::DwarfInfo, super::FunctionHeaderInfo) {
    let type_name = format!("{} *", struct_ty.name);
    let size = struct_ty.size;
    dwarf_with_pointer_param(param, &type_name, size, vec![struct_ty])
}

#[test]
fn test_struct_field_access() {
    use unlace_loader::{StructField, StructType};
    let rdi = reg(56, 8);
    let r8 = reg(8, 4);
    let c8 = con(8, 8);
    let space = con(0, 8);
    let addr_add = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(0, 8),
        smallvec![rdi, c8],
        0x1000,
    );
    let load = IrInsn::with_output(
        IrOp::Load,
        r8,
        smallvec![space, Varnode::unique(0, 8)],
        0x1004,
    );
    let body = vec![
        HirNode::Statement(addr_add),
        HirNode::Statement(load),
        HirNode::Return(Some(sv(8, 4))),
    ];
    let func = make_func("test_field", body);
    let rect = StructType {
        name: "Rect".to_string(),
        size: 16,
        template_params: vec![],
        fields: vec![
            StructField {
                name: "origin".to_string(),
                offset: 0,
                size: 8,
                type_name: "Point".to_string(),
            },
            StructField {
                name: "size".to_string(),
                offset: 8,
                size: 4,
                type_name: "int".to_string(),
            },
        ],
    };
    let (dwarf, header) = dwarf_with_struct_param(rect, "r");
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("r->size"),
        "should contain r->size: {output}"
    );

    // Without the parameter's type the base is untyped: a struct that merely
    // has a field at offset 8 must not name the access.
    let untyped = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        !untyped.contains("->"),
        "untyped base must stay raw: {untyped}"
    );
}
#[test]
fn typed_subscript_folds_shift_scale_and_element_offset() {
    // *(int *)(buf + (i << 2) - 4) → buf[i - 1]
    let space = con(0, 8);
    let buf = reg(56, 8);
    let i = reg(8, 8);
    let shl = Varnode::unique(100, 8);
    let sum = Varnode::unique(200, 8);
    let addr = Varnode::unique(300, 8);
    let load_out = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntLeft,
            shl,
            smallvec![i, con(2, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            sum,
            smallvec![buf, shl],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![sum, con(0xffff_ffff_ffff_fffc, 8)],
            0x1008,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, addr],
            0x100c,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];
    let func = make_func("shift_index", body);
    let (dwarf, header) = dwarf_with_pointer_param("buf", "int *", 4, vec![]);
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("buf[") && output.contains(" - 1]"),
        "shift-scaled index with -4 byte offset should be buf[i - 1]: {output}",
    );
}

#[test]
fn typed_struct_access_past_first_element_indexes_the_pointer() {
    use unlace_loader::{StructField, StructType};
    // *(int *)(p + 12) through `Point *p` → p[1].y
    let space = con(0, 8);
    let p = reg(56, 8);
    let addr = Varnode::unique(100, 8);
    let load_out = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![p, con(12, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, addr],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];
    let func = make_func("point_array", body);
    let point = StructType {
        name: "Point".to_string(),
        size: 8,
        template_params: vec![],
        fields: vec![
            StructField {
                name: "x".to_string(),
                offset: 0,
                size: 4,
                type_name: "int".to_string(),
            },
            StructField {
                name: "y".to_string(),
                offset: 4,
                size: 4,
                type_name: "int".to_string(),
            },
        ],
    };
    let (dwarf, header) = dwarf_with_struct_param(point, "p");
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("p[1].y"),
        "should index the pointer: {output}"
    );
}

#[test]
fn test_struct_field_store_writes_arrow_syntax() {
    use unlace_loader::{StructField, StructType};

    let rdi = reg(56, 8);
    let r8 = reg(8, 4);
    let c4 = con(4, 8);
    let space = con(0, 8);
    let addr_add = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(0, 8),
        smallvec![rdi, c4],
        0x1000,
    );
    let store = IrInsn::without_output(
        IrOp::Store,
        smallvec![space, Varnode::unique(0, 8), r8],
        0x1004,
    );
    let body = vec![
        HirNode::Statement(addr_add),
        HirNode::Statement(store),
        HirNode::Return(None),
    ];
    let func = make_func("test_store_field", body);
    let point = StructType {
        name: "Point".to_string(),
        size: 8,
        template_params: vec![],
        fields: vec![
            StructField {
                name: "x".to_string(),
                offset: 0,
                size: 4,
                type_name: "int".to_string(),
            },
            StructField {
                name: "y".to_string(),
                offset: 4,
                size: 4,
                type_name: "int".to_string(),
            },
        ],
    };
    let (dwarf, header) = dwarf_with_struct_param(point, "p");
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("p->y ="),
        "STORE at offset 4 should resolve to p->y: {output}",
    );
}

#[test]
fn test_struct_field_no_match() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, StructField, StructType};
    let r0 = reg(0, 8);
    let r8 = reg(8, 4);
    let c48 = con(48, 8);
    let space = con(0, 8);
    let addr_add = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(0, 8),
        smallvec![r0, c48],
        0x1000,
    );
    let load = IrInsn::with_output(
        IrOp::Load,
        r8,
        smallvec![space, Varnode::unique(0, 8)],
        0x1004,
    );
    let body = vec![
        HirNode::Statement(addr_add),
        HirNode::Statement(load),
        HirNode::Return(Some(sv(8, 4))),
    ];
    let func = make_func("test_no_field", body);
    let mut structs = BTreeMap::new();
    structs.insert(
        "Point".to_string(),
        StructType {
            name: "Point".to_string(),
            size: 8,
            template_params: vec![],
            fields: vec![
                StructField {
                    name: "x".to_string(),
                    offset: 0,
                    size: 4,
                    type_name: "int".to_string(),
                },
                StructField {
                    name: "y".to_string(),
                    offset: 4,
                    size: 4,
                    type_name: "int".to_string(),
                },
            ],
        },
    );
    let dwarf = DwarfInfo {
        functions: BTreeMap::new(),
        source_map: BTreeMap::new(),
        structs,
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };
    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(!output.contains("->"), "should NOT contain ->: {output}");
    assert!(
        output.contains("*(_DWORD *)(") && !output.contains("[12]"),
        "untyped base keeps the raw dereference: {output}"
    );
}

#[test]
fn composite_struct_on_undeclared_base_stays_raw() {
    use unlace_ir::types::{StructFieldType, Type};

    let r0 = reg(0, 8);
    let r8 = reg(8, 4);
    let c16 = con(16, 8);
    let space = con(0, 8);

    let addr_add = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(0, 8),
        smallvec![r0, c16],
        0x1000,
    );
    let load = IrInsn::with_output(
        IrOp::Load,
        r8,
        smallvec![space, Varnode::unique(0, 8)],
        0x1004,
    );
    let body = vec![
        HirNode::Statement(addr_add),
        HirNode::Statement(load),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let mut func = make_func("test_composite_field", body);

    let base_sv = SsaVarnode {
        base: r0,
        version: 0,
    };
    func.composite_var_types.insert(
        base_sv,
        Type::Struct {
            name: "MyStruct".into(),
            fields: vec![
                StructFieldType {
                    name: "alpha".into(),
                    ty: Type::int(8),
                    offset: 0,
                },
                StructFieldType {
                    name: "beta".into(),
                    ty: Type::int(4),
                    offset: 16,
                },
            ],
        },
    );

    // Nothing declares `rax` as `MyStruct *` (and nothing declares
    // `MyStruct`), so `->beta` would not compile; the access stays raw.
    let output = super::print_c(&func);
    assert!(
        !output.contains("->"),
        "undeclared struct base must stay raw: {output}"
    );
}

#[test]
fn test_dwarf_function_name_used() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_1000", body);

    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "compute".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            ranges: vec![],
            params: vec![],
            return_type: Some("int".to_string()),
            decl: None,
            locals: vec![],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("compute("),
        "should use DWARF name 'compute': {output}",
    );
    assert!(
        !output.contains("sub_1000"),
        "should NOT contain fallback name: {output}",
    );
}

#[test]
fn test_dwarf_array_declarator_uses_c_suffix_form() {
    assert_eq!(super::dwarf_decl_to_c("int[3]", "values"), "int values[3]");
    assert_eq!(
        super::dwarf_decl_to_c("long int[4]", "data"),
        "__int64 data[4]"
    );
}

#[test]
fn test_dwarf_param_names_used() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_1000", body);

    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "add".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            ranges: vec![],
            params: vec![
                ParameterInfo {
                    name: Some("a".to_string()),
                    type_name: Some("int".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
                ParameterInfo {
                    name: Some("b".to_string()),
                    type_name: Some("int".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
            ],
            return_type: Some("int".to_string()),
            decl: None,
            locals: vec![],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("int add(int a, int b)"),
        "should use DWARF param names/types: {output}",
    );
}

#[test]
fn test_dwarf_param_names_override_inferred() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};

    let body = vec![HirNode::Return(None)];
    let func = HirFunction {
        name: "sub_2000".to_string(),
        params: vec![
            ("a1".to_string(), PrimitiveType::Int(8)),
            ("a2".to_string(), PrimitiveType::Int(8)),
        ],
        return_type: PrimitiveType::Int(4),
        body,
        addr: 0x2000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let mut functions = BTreeMap::new();
    functions.insert(
        0x2000,
        FunctionDebugInfo {
            name: "process".to_string(),
            linkage_name: None,
            low_pc: 0x2000,
            high_pc: Some(0x2020),
            ranges: vec![],
            params: vec![
                ParameterInfo {
                    name: Some("count".to_string()),
                    type_name: Some("int".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
                ParameterInfo {
                    name: Some("buf".to_string()),
                    type_name: Some("char *".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
            ],
            return_type: Some("int".to_string()),
            decl: None,
            locals: vec![],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("int process(int count, char *buf)"),
        "DWARF names must override inferred a1/a2: {output}",
    );
    assert!(
        !output.contains("__int64 a1"),
        "must not emit inferred '__int64 a1' parameter: {output}",
    );
}

#[test]
fn test_dwarf_return_type_used() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_1000", body);

    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "get_value".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            ranges: vec![],
            params: vec![],
            return_type: Some("long".to_string()),
            decl: None,
            locals: vec![],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("__int64 get_value("),
        "should use LP64 DWARF return width: {output}",
    );
}

#[test]
fn debug_language_metadata_emits_final_output_comment() {
    use unlace_loader::{DebugLanguage, DwarfInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("language_tagged", body);
    let mut dwarf = DwarfInfo::default();
    dwarf.languages.insert(DebugLanguage::Cpp);

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("// debug language: C++"),
        "known DWARF language should render in final C output: {output}",
    );
}

#[test]
fn test_noreturn_annotation_emitted() {
    let body = vec![HirNode::Return(None)];
    let func = HirFunction {
        name: "sub_f5300".to_string(),
        params: vec![],
        return_type: PrimitiveType::Unknown,
        body,
        addr: 0xf5300,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: true,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = super::print_c(&func);
    assert!(
        output.contains("_Noreturn void sub_f5300("),
        "noreturn=true must emit a standard C noreturn prefix: {output}",
    );
}

#[test]
fn test_noreturn_annotation_suppressed_for_main() {
    let mut func = make_func("main", vec![HirNode::Return(None)]);
    func.noreturn = true;

    let output = super::print_c(&func);

    assert!(output.contains("int main(void)"), "{output}");
    assert!(
        !output.contains("_Noreturn int main"),
        "main must not be declared noreturn under -Werror: {output}"
    );
}

#[test]
fn test_noreturn_not_emitted_when_false() {
    let body = vec![HirNode::Return(None)];
    let func = HirFunction {
        name: "sub_1000".to_string(),
        params: vec![],
        return_type: PrimitiveType::Int(4),
        body,
        addr: 0x1000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = super::print_c(&func);
    assert!(
        !output.contains("__noreturn"),
        "noreturn=false must not emit '__noreturn': {output}",
    );
}

#[test]
fn test_no_dwarf_falls_back() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_1000", body);

    let output = super::print_c(&func);
    assert!(
        output.contains("int sub_1000(void)"),
        "should use fallback sub_NNNN naming: {output}",
    );
}

// -------------------------------------------------------------------
// IDA-style type cast tests
// -------------------------------------------------------------------

#[test]
fn test_type_casts_qword_load() {
    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("qword_load", body);
    let output = print_c(&func);

    assert!(
        output.contains("*(_QWORD *)"),
        "8-byte load should use _QWORD *: {output}",
    );
}

#[test]
fn test_type_casts_dword_load() {
    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("dword_load", body);
    let output = print_c(&func);

    assert!(
        output.contains("*(_DWORD *)"),
        "4-byte load should use _DWORD *: {output}",
    );
}

#[test]
fn test_type_casts_byte_load() {
    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 1);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 1)))];

    let func = make_func("byte_load", body);
    let output = print_c(&func);

    assert!(
        output.contains("*(_BYTE *)"),
        "1-byte load should use _BYTE *: {output}",
    );
}

#[test]
fn test_type_casts_word_load() {
    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 2);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 2)))];

    let func = make_func("word_load", body);
    let output = print_c(&func);

    assert!(
        output.contains("*(_WORD *)"),
        "2-byte load should use _WORD *: {output}",
    );
}

#[test]
fn test_type_casts_typedefs_in_output() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("typedef_test", body);
    let output = print_c(&func);

    assert!(
        output.contains("typedef unsigned char _BYTE;"),
        "should contain _BYTE typedef: {output}",
    );
    assert!(
        output.contains("typedef unsigned short _WORD;"),
        "should contain _WORD typedef: {output}",
    );
    assert!(
        output.contains("typedef unsigned int _DWORD;"),
        "should contain _DWORD typedef: {output}",
    );
    assert!(
        output.contains("typedef unsigned long long _QWORD;"),
        "should contain _QWORD typedef: {output}",
    );
    assert!(
        output.contains("typedef signed short __int16;"),
        "should contain __int16 typedef: {output}",
    );
    assert!(
        output.contains("typedef signed long long __int64;"),
        "should contain __int64 typedef: {output}",
    );

    let typedef_pos = output.find("typedef").unwrap();
    let func_pos = output.find("typedef_test").unwrap();
    assert!(
        typedef_pos < func_pos,
        "typedefs should appear before function: {output}",
    );
}

#[test]
fn test_type_casts_signed_int64_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 8);

    let sext = IrInsn::with_output(IrOp::IntSext, r8, smallvec![r0], 0x1000);
    let body = vec![HirNode::Statement(sext), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("signed_cast", body);
    let output = print_c(&func);

    assert!(
        output.contains("(__int64)"),
        "signed extension to 8 bytes should use __int64: {output}",
    );
}

#[test]
fn test_type_casts_unsigned_zext() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 8);

    let zext = IrInsn::with_output(IrOp::IntZext, r8, smallvec![r0], 0x1000);
    let body = vec![HirNode::Statement(zext), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("unsigned_cast", body);
    let output = print_c(&func);

    let body = output
        .rsplit_once("unsigned_cast")
        .map(|(_, b)| b)
        .unwrap_or(&output);
    assert!(
        !body.contains("(_QWORD)"),
        "i32 -> i64 IntZext should be elided as implicit C widening: {output}",
    );
}

#[test]
fn test_type_casts_same_size_widen_elided() {
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);

    let zext = IrInsn::with_output(IrOp::IntZext, r8, smallvec![r0], 0x1000);
    let body = vec![HirNode::Statement(zext), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("same_size_widen", body);
    let output = print_c(&func);

    let body = output
        .rsplit_once("same_size_widen")
        .map(|(_, b)| b)
        .unwrap_or(&output);
    assert!(
        !body.contains("(_QWORD)") && !body.contains("(__int64)"),
        "same-size IntZext must not emit a cast: {output}",
    );
}

#[test]
fn redundant_typed_extension_recognizes_already_typed_sources() {
    assert!(super::is_redundant_typed_extension(
        IrOp::IntSext,
        PrimitiveType::Int(2),
        2,
        4,
    ));
    assert!(super::is_redundant_typed_extension(
        IrOp::IntZext,
        PrimitiveType::UnsignedInt(2),
        2,
        4,
    ));
    assert!(!super::is_redundant_typed_extension(
        IrOp::IntSext,
        PrimitiveType::UnsignedInt(2),
        2,
        4,
    ));
    assert!(!super::is_redundant_typed_extension(
        IrOp::IntSext,
        PrimitiveType::Int(4),
        2,
        4,
    ));
}

#[test]
fn test_type_casts_sign_extension_from_already_short_elided() {
    let r0 = reg(0, 2);
    let r8 = reg(8, 4);
    let r16 = reg(16, 2);

    let define_short = IrInsn::with_output(
        IrOp::IntAdd,
        r0,
        smallvec![r16, Varnode::constant(0, 2)],
        0x0ff8,
    );
    let sext = IrInsn::with_output(IrOp::IntSext, r8, smallvec![r0], 0x1000);
    let body = vec![
        HirNode::Statement(define_short),
        HirNode::Statement(sext),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("short_signext_elided", body);
    let output = print_c(&func);

    assert!(
        !output.contains("(int)") && !output.contains("(int)(short)"),
        "sign-extension from an already-short value should not emit a redundant cast: {output}",
    );
}

#[test]
fn test_type_casts_zero_extension_from_already_unsigned_short_elided() {
    let r0 = reg(0, 2);
    let r8 = reg(8, 4);
    let addr = reg(16, 8);

    let define_ushort = IrInsn::with_output(
        IrOp::Load,
        r0,
        smallvec![Varnode::constant(0, 8), addr],
        0x0ff8,
    );
    let zext = IrInsn::with_output(IrOp::IntZext, r8, smallvec![r0], 0x1000);
    let body = vec![
        HirNode::Statement(define_ushort),
        HirNode::Statement(zext),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("ushort_zext_elided", body);
    let output = print_c(&func);

    let body = output
        .rsplit_once("ushort_zext_elided")
        .map(|(_, b)| b)
        .unwrap_or(&output);
    assert!(
        !body.contains("(_DWORD)"),
        "zero-extension from an already-unsigned-short value should not emit a redundant cast: {output}",
    );
}

#[test]
fn test_type_casts_compiles() {
    let gcc_available = std::process::Command::new("gcc")
        .arg("--version")
        .output()
        .is_ok();
    if !gcc_available {
        eprintln!("gcc not found, skipping test_type_casts_compiles");
        return;
    }

    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);
    let r16 = reg(16, 4);
    let r24 = reg(24, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, r0],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r16,
            smallvec![space, r0],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r24,
            smallvec![space, r0],
            0x1008,
        )),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = make_func("type_cast_compile", body);
    let source = print_c(&func);

    let result = std::process::Command::new("gcc")
        .args(["-fsyntax-only", "-x", "c", "-", "-std=c11"])
        .stdin(std::process::Stdio::piped())
        .stdout(std::process::Stdio::piped())
        .stderr(std::process::Stdio::piped())
        .spawn();

    let Ok(mut child) = result else {
        eprintln!("Failed to spawn gcc, skipping");
        return;
    };

    {
        use std::io::Write;
        let stdin = child.stdin.as_mut().expect("stdin pipe");
        stdin.write_all(source.as_bytes()).expect("write to stdin");
    }

    let output = child.wait_with_output().expect("wait for gcc");
    assert!(
        output.status.success(),
        "gcc -fsyntax-only failed on type casts:\n--- source ---\n{}\n--- stderr ---\n{}",
        source,
        String::from_utf8_lossy(&output.stderr),
    );
}

// ─── format_float_literal: classification + round-trip ────────────
//
// These exercises cover the four IDA `sub_11C210` branches:
//   1. NaN              → emit the bare `NAN` macro
//   2. +Infinity        → emit `INFINITY`
//   3. -Infinity        → emit `-INFINITY`
//   4. Finite values    → shortest round-trip decimal + suffix
//
// The `f` suffix matches IDA's `float` rendering; `f64` gets no
// suffix; `long double` (>8 bytes) gets `L`.

#[test]
fn test_format_float_literal_nan_f32() {
    let bytes = f32::NAN.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 4), "NAN");
}

#[test]
fn test_format_float_literal_infinity_f32() {
    let bytes = f32::INFINITY.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 4), "INFINITY");
}

#[test]
fn test_format_float_literal_neg_infinity_f32() {
    let bytes = f32::NEG_INFINITY.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 4), "-INFINITY");
}

#[test]
fn test_format_float_literal_finite_f32() {
    let bytes = 1.5f32.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 4), "1.5f");
}

#[test]
fn test_format_float_literal_integral_f32_keeps_decimal() {
    // 1.0f32 stringifies as "1" via Rust's `Display`. Our helper must
    // append `.0` so the C output isn't an integer literal.
    let bytes = 1.0f32.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 4), "1.0f");
}

#[test]
fn test_format_float_literal_nan_f64() {
    let bytes = f64::NAN.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "NAN");
}

#[test]
fn test_format_float_literal_infinity_f64() {
    let bytes = f64::INFINITY.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "INFINITY");
}

#[test]
fn test_format_float_literal_neg_infinity_f64() {
    let bytes = f64::NEG_INFINITY.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "-INFINITY");
}

#[test]
fn test_format_float_literal_finite_f64() {
    let bytes = 1.23456f64.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "1.23456");
}

#[test]
fn test_format_float_literal_zero_f64() {
    let bytes = 0.0f64.to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "0.0");
}

#[test]
fn test_format_float_literal_negative_f64() {
    let bytes = (-2.5f64).to_le_bytes();
    assert_eq!(super::format_float_literal(&bytes, 8), "-2.5");
}

#[test]
fn test_format_float_literal_round_trip_f32() {
    // Pick a few values whose decimal form would normally lose
    // precision; the helper's output must parse back to the *same* bit
    // pattern. (Rust's `{}` is Grisu/Ryu, which guarantees this.)
    for &v in &[1.234567f32, -7.5e-20, 1.0e30, f32::EPSILON] {
        let bytes = v.to_le_bytes();
        let s = super::format_float_literal(&bytes, 4);
        // Strip the trailing `f` suffix before re-parsing.
        let trimmed = s.trim_end_matches('f');
        let parsed: f32 = trimmed
            .parse()
            .unwrap_or_else(|e| panic!("re-parse {s:?} failed: {e}"));
        assert_eq!(
            parsed.to_le_bytes(),
            bytes,
            "round-trip mismatch: {v} → {s}",
        );
    }
}

#[test]
fn test_format_float_literal_round_trip_f64() {
    for &v in &[1.234567890123456f64, -7.5e-300, 1.0e300, f64::EPSILON] {
        let bytes = v.to_le_bytes();
        let s = super::format_float_literal(&bytes, 8);
        let parsed: f64 = s
            .parse()
            .unwrap_or_else(|e| panic!("re-parse {s:?} failed: {e}"));
        assert_eq!(
            parsed.to_le_bytes(),
            bytes,
            "round-trip mismatch: {v} → {s}",
        );
    }
}

#[test]
fn test_format_float_literal_long_double_fallback() {
    // 16-byte path emits IDA's hex-bytes comment + a placeholder `0.0L`
    // so the surrounding C still compiles.
    let bytes = [0u8; 16];
    let s = super::format_float_literal(&bytes, 16);
    assert!(s.contains("/* long double 0x"), "got: {s}");
    assert!(s.ends_with("*/ 0.0L"), "got: {s}");
}

// ─── End-to-end: float constants flow through const_context_for_op ──

#[test]
fn test_float_const_context_renders_double_literal() {
    // `FLOAT_ADD` of two constants should render the operands as
    // double literals, not integer hex.
    let r0 = reg(0, 8);
    let lhs = con(1.23456f64.to_bits(), 8);
    let two = con(2.0f64.to_bits(), 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::FloatAdd,
            r0,
            smallvec![lhs, two],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 0,
        })),
    ];
    let func = make_func("fp_add", body);
    let output = print_c(&func);
    assert!(
        output.contains("1.23456") && output.contains("2.0"),
        "should render float constants as decimals: {output}",
    );
    assert!(
        !output.contains("0x40"),
        "should NOT render float constants as hex: {output}",
    );
}

#[test]
fn test_negative_const_8byte() {
    let r0 = reg(0, 8);
    let neg8 = con(0xffff_ffff_ffff_fff8, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, neg8],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        })),
    ];

    let func = make_func("neg8", body);
    let output = print_c(&func);

    assert!(
        output.contains("+= -8"),
        "8-byte 0xfffffffffffffff8 in INT_ADD should render as `+= -8`: {output}",
    );
    assert!(
        !output.contains("0xfffffffffffffff8"),
        "should NOT contain raw hex: {output}",
    );
}

#[test]
fn test_negative_const_4byte() {
    let r0 = reg(0, 4);
    let neg4 = con(0xfffffffc, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, neg4],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::reg(0, 4),
            version: 0,
        })),
    ];

    let func = make_func("neg4", body);
    let output = print_c(&func);

    assert!(
        output.contains("+= -4"),
        "4-byte 0xfffffffc in INT_ADD should render as `+= -4`: {output}",
    );
}

#[test]
fn test_negative_const_copy_minus1() {
    let r0 = reg(0, 4);
    let neg1 = con(0xffffffff, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![neg1], 0x1000)),
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::reg(0, 4),
            version: 0,
        })),
    ];

    let func = make_func("neg1_copy", body);
    let output = print_c(&func);

    assert!(
        output.contains("-1"),
        "COPY of 0xffffffff (4-byte) should render as -1: {output}",
    );
}

#[test]
fn test_negative_const_small_unsigned_kept() {
    assert_eq!(
        super::format_constant(0xFF, 1),
        "0xffULL",
        "0xFF in 1-byte should stay hex (byte-sized constants are not negated)",
    );
}

// -------------------------------------------------------------------
// For-loop emission tests (P3-7)
// -------------------------------------------------------------------

#[test]
fn test_for_loop_simple_emit() {
    let i = reg(0, 4);
    let zero = con(0, 4);
    let one = con(1, 4);

    let body = vec![
        HirNode::For {
            init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
            cond: sv(0, 4),
            update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
            body: vec![],
        },
        HirNode::Return(None),
    ];

    let func = make_func("for_simple", body);
    let output = print_c(&func);

    assert!(output.contains("for ("), "should contain 'for (': {output}",);
    assert!(
        output.contains("i++"),
        "increment should be rendered as i++ (loop counter renamed): {output}",
    );
    assert!(
        !output.contains("while ("),
        "should NOT emit a while loop: {output}",
    );
}

#[test]
fn test_for_loop_compound_step_emit() {
    let i = reg(0, 4);
    let zero = con(0, 4);
    let two = con(2, 4);

    let body = vec![
        HirNode::For {
            init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
            cond: sv(0, 4),
            update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, two], 0x1018),
            body: vec![],
        },
        HirNode::Return(None),
    ];

    let func = make_func("for_step2", body);
    let output = print_c(&func);

    assert!(
        output.contains("i += 2"),
        "step-2 should render as i += 2 (loop counter renamed): {output}",
    );
}

#[test]
fn test_for_loop_nested_counter_naming() {
    let outer = reg(0, 4);
    let inner = reg(8, 4);
    let zero = con(0, 4);
    let one = con(1, 4);

    let body = vec![
        HirNode::For {
            init: Some(IrInsn::with_output(
                IrOp::Copy,
                outer,
                smallvec![zero],
                0x1000,
            )),
            cond: SsaVarnode {
                base: outer,
                version: 0,
            },
            update: IrInsn::with_output(IrOp::IntAdd, outer, smallvec![outer, one], 0x1020),
            body: vec![HirNode::For {
                init: Some(IrInsn::with_output(
                    IrOp::Copy,
                    inner,
                    smallvec![zero],
                    0x1004,
                )),
                cond: SsaVarnode {
                    base: inner,
                    version: 0,
                },
                update: IrInsn::with_output(IrOp::IntAdd, inner, smallvec![inner, one], 0x1018),
                body: vec![],
            }],
        },
        HirNode::Return(None),
    ];

    let func = make_func("nested_for", body);
    let output = print_c(&func);

    assert!(
        output.contains("i++"),
        "outer counter should be `i`: {output}",
    );
    assert!(
        output.contains("j++"),
        "inner counter should be `j`: {output}",
    );
    assert!(
        !output.contains("v1") && !output.contains("v2"),
        "loop counters should be renamed away from v1/v2: {output}",
    );
}

#[test]
fn test_for_loop_decrement_emit() {
    let i = reg(0, 4);
    let n = reg(8, 4);
    let one = con(1, 4);

    let body = vec![
        HirNode::For {
            init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![n], 0x1000)),
            cond: sv(0, 4),
            update: IrInsn::with_output(IrOp::IntSub, i, smallvec![i, one], 0x1018),
            body: vec![],
        },
        HirNode::Return(None),
    ];

    let func = make_func("for_decrement", body);
    let output = print_c(&func);

    assert!(
        output.contains("--)"),
        "decrement should render as `<var>--`: {output}",
    );
    assert!(output.contains("for ("), "should be a for-loop: {output}",);
}

#[test]
fn test_for_loop_compiles() {
    let gcc_available = std::process::Command::new("gcc")
        .arg("--version")
        .output()
        .is_ok();
    if !gcc_available {
        eprintln!("gcc not found, skipping test_for_loop_compiles");
        return;
    }

    let i = reg(0, 4);
    let acc = reg(8, 4);
    let zero = con(0, 4);
    let one = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            acc,
            smallvec![zero],
            0x0FFC,
        )),
        HirNode::For {
            init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
            cond: sv(0, 4),
            update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
            body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                acc,
                smallvec![acc, one],
                0x1014,
            ))],
        },
        HirNode::Return(Some(SsaVarnode {
            base: acc,
            version: 1,
        })),
    ];

    let func = make_func("for_compile", body);
    let source = print_c(&func);

    let result = std::process::Command::new("gcc")
        .args(["-fsyntax-only", "-x", "c", "-", "-std=c11"])
        .stdin(std::process::Stdio::piped())
        .stdout(std::process::Stdio::piped())
        .stderr(std::process::Stdio::piped())
        .spawn();

    let Ok(mut child) = result else {
        eprintln!("Failed to spawn gcc, skipping");
        return;
    };

    {
        use std::io::Write;
        let stdin = child.stdin.as_mut().expect("stdin pipe");
        stdin.write_all(source.as_bytes()).expect("write to stdin");
    }

    let output = child.wait_with_output().expect("wait for gcc");
    assert!(
        output.status.success(),
        "gcc -fsyntax-only failed on for-loop:\n--- source ---\n{}\n--- stderr ---\n{}",
        source,
        String::from_utf8_lossy(&output.stderr),
    );
}

#[test]
fn test_negative_const_comparison() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 1);
    let neg1 = con(0xffffffff, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntEqual,
            r8,
            smallvec![r0, neg1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::reg(8, 1),
            version: 0,
        })),
    ];

    let func = make_func("cmp_neg1", body);
    let output = print_c(&func);

    assert!(
        output.contains("== -1"),
        "comparison with 0xffffffff (4-byte) should render as `== -1`: {output}",
    );
}

// ── P3-16: Try/catch C output tests ──

#[test]
fn test_try_catch_c_output() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::TryCatch {
            try_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            catch_arms: vec![(
                unlace_ir::types::Type::Primitive(PrimitiveType::Unknown),
                vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::Copy,
                    r8,
                    smallvec![con(0, 4)],
                    0x1010,
                ))],
            )],
        },
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("try_catch_func", body);
    let output = print_c(&func);

    assert!(output.contains("__try {"), "__try: {output}");
    assert!(output.contains("} __except {"), "__except: {output}");
}

#[test]
fn test_typed_try_catch_c_output() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![HirNode::TryCatch {
        try_body: vec![HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        ))],
        catch_arms: vec![(
            unlace_ir::types::Type::Struct {
                name: "Dog".to_string(),
                fields: vec![],
            },
            vec![HirNode::Return(None)],
        )],
    }];

    let func = make_func("typed_try_catch_func", body);
    let output = print_c(&func);

    assert!(
        output.contains("try {"),
        "typed catch should use C++ try: {output}"
    );
    assert!(
        output.contains("} catch (struct Dog e) {"),
        "typed catch should render catch type: {output}"
    );
    assert!(
        !output.contains("__except"),
        "typed catch should not use SEH __except: {output}"
    );
}

#[test]
fn test_typed_try_catch_binds_begin_catch_object() {
    let mut ann = PrinterAnnotations::default();
    ann.cxx_eh_actions
        .insert(0x1010, unlace_passes::cxx_eh::CxxEhAction::BeginCatch);

    let body = vec![HirNode::TryCatch {
        try_body: vec![HirNode::Return(None)],
        catch_arms: vec![(
            unlace_ir::types::Type::Struct {
                name: "Dog".to_string(),
                fields: vec![],
            },
            vec![
                HirNode::Statement(IrInsn::with_output(
                    IrOp::Call,
                    reg(8, 8),
                    smallvec![con(0x4010, 8), reg(16, 8)],
                    0x1010,
                )),
                HirNode::Return(None),
            ],
        )],
    }];

    let func = make_func("typed_try_catch_begin_catch_object", body);
    let output = print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    let catch_line = output
        .lines()
        .find(|line| line.contains("catch (struct Dog "))
        .expect("typed catch line should be present");
    assert!(
        !catch_line.contains(" e)"),
        "catch object should use the __cxa_begin_catch output name: {output}"
    );
    assert!(
        !output.contains("/* catch */"),
        "bound __cxa_begin_catch call should not render as a body statement: {output}"
    );
    assert!(
        !output.contains("sub_4010"),
        "bound __cxa_begin_catch call expression should be suppressed: {output}"
    );
}

#[test]
fn test_typed_try_catch_binds_get_exception_ptr_symbol() {
    let mut symbols = BTreeMap::new();
    symbols.insert(0x4020, "__cxa_get_exception_ptr".to_string());

    let body = vec![HirNode::TryCatch {
        try_body: vec![HirNode::Return(None)],
        catch_arms: vec![(
            unlace_ir::types::Type::Struct {
                name: "Cat".to_string(),
                fields: vec![],
            },
            vec![
                HirNode::Statement(IrInsn::with_output(
                    IrOp::Call,
                    reg(24, 8),
                    smallvec![con(0x4020, 8), reg(32, 8)],
                    0x1020,
                )),
                HirNode::Return(None),
            ],
        )],
    }];

    let func = make_func("typed_try_catch_get_exception_ptr", body);
    let output =
        print_c_with_annotations(&func, None, None, Some(&symbols), None, None, None, None);

    let catch_line = output
        .lines()
        .find(|line| line.contains("catch (struct Cat "))
        .expect("typed catch line should be present");
    assert!(
        !catch_line.contains(" e)"),
        "catch object should use the __cxa_get_exception_ptr output name: {output}"
    );
    assert!(
        !output.contains("__cxa_get_exception_ptr"),
        "bound __cxa_get_exception_ptr call should not render in the catch body: {output}"
    );
}

#[test]
fn test_try_finally_c_output() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![HirNode::TryFinally {
        try_body: vec![HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        ))],
        finally_body: vec![HirNode::Return(None)],
    }];

    let func = make_func("try_finally_func", body);
    let output = print_c(&func);

    assert!(output.contains("__try {"), "__try: {output}");
    assert!(
        output.contains("} __finally {"),
        "cleanup should render as __finally: {output}"
    );
    assert!(
        !output.contains("__except"),
        "cleanup should not render as __except: {output}"
    );
}

#[test]
fn test_try_finally_renders_cxx_destructor_cleanup() {
    let mut symbols = BTreeMap::new();
    symbols.insert(0x4020, "_ZN3DogD1Ev".to_string());

    let body = vec![HirNode::TryFinally {
        try_body: vec![HirNode::Return(None)],
        finally_body: vec![HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![con(0x4020, 8), reg(8, 8)],
            0x1020,
        ))],
    }];

    let func = make_func("try_finally_destructor_cleanup", body);
    let output =
        print_c_with_annotations(&func, None, None, Some(&symbols), None, None, None, None);

    assert!(
        output.contains("} __finally {"),
        "cleanup should render as __finally: {output}"
    );
    assert!(
        output.contains("->~Dog();"),
        "cleanup destructor should render as an explicit destructor call: {output}"
    );
    assert!(
        !output.contains("_ZN3DogD1Ev"),
        "raw destructor ABI symbol should not leak into cleanup output: {output}"
    );
}

#[test]
fn test_try_catch_no_landing_pads_no_output() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("no_try_catch", body);
    let output = print_c(&func);

    assert!(
        !output.contains("__try"),
        "no TryCatch node → no __try: {output}"
    );
    assert!(
        !output.contains("__except"),
        "no TryCatch node → no __except: {output}"
    );
}

#[test]
fn test_try_catch_nested_indentation() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::TryCatch {
            try_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![r0, c1],
                0x1000,
            ))],
            catch_arms: vec![(
                unlace_ir::types::Type::Primitive(PrimitiveType::Unknown),
                vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r0,
                    smallvec![r0, c1],
                    0x1010,
                ))],
            )],
        },
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("try_indent", body);
    let output = print_c(&func);

    let try_line = output
        .lines()
        .find(|l| l.contains("__try"))
        .expect("__try line");
    assert!(
        try_line.starts_with("    __try"),
        "try should be indented one level: {try_line:?}",
    );

    let except_line = output
        .lines()
        .find(|l| l.contains("__except"))
        .expect("__except line");
    assert!(
        except_line.starts_with("    }"),
        "except should be at depth 1: {except_line:?}",
    );
}

#[test]
fn test_boolxor_emits_caret() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolXor,
            r0,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("boolxor", body);
    let output = print_c(&func);

    assert!(output.contains("^"), "BoolXor should emit ^: {output}");
    assert!(!output.contains("!="), "BoolXor must not emit !=: {output}",);
}

#[test]
fn test_intnegate_emits_tilde() {
    let r0 = reg(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntNegate,
            r0,
            smallvec![r0],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("intnegate", body);
    let output = print_c(&func);

    assert!(output.contains("~"), "IntNegate should emit ~: {output}");
    let rhs = output
        .lines()
        .find(|l| l.contains("~"))
        .expect("line with ~");
    assert!(!rhs.contains("!="), "should not contain !=: {rhs}");
}

#[test]
fn test_boolnegate_emits_bang() {
    let r0 = reg(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            r0,
            smallvec![r0],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("boolnegate", body);
    let output = print_c(&func);

    assert!(output.contains("!"), "BoolNegate should emit !: {output}");
    assert!(
        !output.contains("~"),
        "BoolNegate must not emit ~: {output}",
    );
}

#[test]
fn test_subpiece_lobyte() {
    let src = reg(0, 8);
    let out = reg(16, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![src, con(0, 4)],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("lobyte", body);
    let output = print_c(&func);
    assert!(
        output.contains("LOBYTE("),
        "SUBPIECE(x,0) size=1 should emit LOBYTE: {output}"
    );
}

#[test]
fn test_subpiece_byte1() {
    let src = reg(0, 8);
    let out = reg(16, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![src, con(1, 4)],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("byte1", body);
    let output = print_c(&func);
    assert!(
        output.contains("BYTE1("),
        "SUBPIECE(x,1) size=1 should emit BYTE1: {output}"
    );
}

#[test]
fn test_subpiece_lodword() {
    let src = reg(0, 8);
    let out = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![src, con(0, 4)],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("lodword", body);
    let output = print_c(&func);
    assert!(
        output.contains("LODWORD("),
        "SUBPIECE(x,0) size=4 should emit LODWORD: {output}"
    );
}

#[test]
fn test_subpiece_hidword() {
    let src = reg(0, 8);
    let out = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![src, con(4, 4)],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("hidword", body);
    let output = print_c(&func);
    assert!(
        output.contains("HIDWORD("),
        "SUBPIECE(x,4) size=4 should emit HIDWORD: {output}"
    );
}

#[test]
fn test_subpiece_macros_in_prelude() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("prelude_test", body);
    let output = print_c(&func);
    assert!(
        output.contains("#define LOBYTE"),
        "prelude should contain LOBYTE macro: {output}"
    );
    assert!(
        output.contains("#define BYTE1"),
        "prelude should contain BYTE1 macro: {output}"
    );
    assert!(
        output.contains("#define BYTE2"),
        "prelude should contain BYTE2 macro: {output}"
    );
    assert!(
        output.contains("#define BYTE3"),
        "prelude should contain BYTE3 macro: {output}"
    );
    assert!(
        output.contains("#define LOWORD"),
        "prelude should contain LOWORD macro: {output}"
    );
    assert!(
        output.contains("#define HIWORD"),
        "prelude should contain HIWORD macro: {output}"
    );
    assert!(
        output.contains("#define LODWORD"),
        "prelude should contain LODWORD macro: {output}"
    );
    assert!(
        output.contains("#define HIDWORD"),
        "prelude should contain HIDWORD macro: {output}"
    );
}

// -------------------------------------------------------------------
// P4-6: Expanded compound assignment tests
// -------------------------------------------------------------------

#[test]
fn test_compound_mul_assign() {
    let v = reg(0, 4);
    let c3 = con(3, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntMult,
            v,
            smallvec![v, c3],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("mul_assign", body);
    let output = print_c(&func);
    assert!(
        output.contains("result *= 3;"),
        "should emit result *= 3: {output}"
    );
}

#[test]
fn test_compound_shl_assign() {
    let v = reg(0, 4);
    let c2 = con(2, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntLeft,
            v,
            smallvec![v, c2],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("shl_assign", body);
    let output = print_c(&func);
    assert!(
        output.contains("result <<= 2;"),
        "should emit result <<= 2: {output}"
    );
}

#[test]
fn test_compound_and_assign() {
    let v = reg(0, 4);
    let mask = reg(8, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            v,
            smallvec![v, mask],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("and_assign", body);
    let output = print_c(&func);
    assert!(
        output.contains("result &= v2;"),
        "should emit result &= v2: {output}"
    );
}

#[test]
fn test_compound_or_assign() {
    let v = reg(0, 4);
    let flag = reg(8, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntOr,
            v,
            smallvec![v, flag],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("or_assign", body);
    let output = print_c(&func);
    assert!(
        output.contains("result |= v2;"),
        "should emit result |= v2: {output}"
    );
}

// -------------------------------------------------------------------
// P4-7: Negation folding tests
// -------------------------------------------------------------------

#[test]
fn test_negate_less_to_geq() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let cmp_out = reg(16, 1);
    let neg_out = reg(24, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSless,
            cmp_out,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            neg_out,
            smallvec![cmp_out],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: neg_out,
            version: 0,
        })),
    ];
    let func = make_func("negate_less", body);
    let output = print_c(&func);
    assert!(
        output.contains(">= v2"),
        "!(a < b) should fold to a >= b: {output}",
    );
    assert!(
        !output.contains("!("),
        "should not contain negation prefix: {output}",
    );
}

#[test]
fn test_negate_equal_to_neq() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let cmp_out = reg(16, 1);
    let neg_out = reg(24, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            neg_out,
            smallvec![cmp_out],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: neg_out,
            version: 0,
        })),
    ];
    let func = make_func("negate_equal", body);
    let output = print_c(&func);
    assert!(
        output.contains("!= v2"),
        "!(a == b) should fold to a != b: {output}",
    );
}

#[test]
fn test_negate_non_comparison_kept() {
    let r0 = reg(0, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            r0,
            smallvec![r0],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("negate_plain", body);
    let output = print_c(&func);
    assert!(
        output.contains("!result"),
        "!flag should remain as !flag: {output}",
    );
}

#[test]
fn test_double_boolnegate_condition_folds_to_operand() {
    let input = reg(0, 1);
    let inner = reg(8, 1);
    let outer = reg(16, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            inner,
            smallvec![input],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            outer,
            smallvec![inner],
            0x1004,
        )),
        HirNode::If {
            cond: SsaVarnode {
                base: outer,
                version: 0,
            },
            then_body: vec![HirNode::Return(Some(SsaVarnode {
                base: input,
                version: 0,
            }))],
            else_body: None,
        },
        HirNode::Return(Some(SsaVarnode {
            base: input,
            version: 0,
        })),
    ];

    let func = make_func("double_boolnegate_condition", body);
    let output = print_c(&func);
    let body = function_body_text(&output, "double_boolnegate_condition");

    assert!(
        body.contains("if (result)"),
        "condition should fold to operand: {body}"
    );
    assert!(
        !body.contains("!(!"),
        "double negation must not leak: {body}"
    );
}

#[test]
fn test_non_guard_double_boolnegate_preserves_nested_negation() {
    let input = reg(0, 1);
    let inner = reg(8, 1);
    let outer = reg(16, 1);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            inner,
            smallvec![input],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::BoolNegate,
            outer,
            smallvec![inner],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: outer,
            version: 0,
        })),
    ];

    let func = make_func("non_guard_double_boolnegate", body);
    let output = print_c(&func);
    let body = function_body_text(&output, "non_guard_double_boolnegate");

    assert!(
        body.contains("return !!v1;"),
        "non-guard expression must keep nested negation: {body}"
    );
    assert!(
        !body.contains("return result;"),
        "non-guard expression must not collapse to operand: {body}"
    );
}

// -------------------------------------------------------------------
// P4-4: IntCarry / IntScarry / IntSborrow emission tests
// -------------------------------------------------------------------

#[test]
fn test_intcarry_emits_check() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntCarry,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("carry_test", body);
    let output = print_c(&func);
    assert!(
        output.contains("(v1 + v2) < v1"),
        "IntCarry should emit `(a + b) < a`: {output}",
    );
}

#[test]
fn test_intscarry_emits_ofadd() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntScarry,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("scarry_test", body);
    let output = print_c(&func);
    assert!(
        output.contains("__OFADD__(v1, v2)"),
        "IntScarry should emit `__OFADD__(a, b)`: {output}",
    );
}

#[test]
fn test_intsborrow_emits_ofsub() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSborrow,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("sborrow_test", body);
    let output = print_c(&func);
    assert!(
        output.contains("__OFSUB__(v1, v2)"),
        "IntSborrow should emit `__OFSUB__(a, b)`: {output}",
    );
}

#[test]
fn test_ofadd_ofsub_in_prelude() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("prelude_test", body);
    let output = print_c(&func);
    assert!(
        output.contains("#define __OFADD__"),
        "__OFADD__ macro should be in prelude: {output}",
    );
    assert!(
        output.contains("#define __OFSUB__"),
        "__OFSUB__ macro should be in prelude: {output}",
    );
}

// -------------------------------------------------------------------
// P4-5: Signed/unsigned operator distinction tests
// -------------------------------------------------------------------

#[test]
fn test_unsigned_div_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntDiv,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("unsigned_div", body);
    let output = print_c(&func);
    assert!(
        output.contains("(_DWORD)v1 / (_DWORD)v2"),
        "IntDiv should cast both operands to unsigned: {output}",
    );
}

#[test]
fn test_signed_div_no_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSdiv,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("signed_div", body);
    let output = print_c(&func);
    assert!(
        output.contains("v1 / v2"),
        "IntSdiv should NOT cast to unsigned: {output}",
    );
    let body_output: String = output
        .lines()
        .skip_while(|l| !l.contains("signed_div"))
        .collect::<Vec<_>>()
        .join("\n");
    assert!(
        !body_output.contains("unsigned"),
        "IntSdiv should not contain 'unsigned' cast: {output}",
    );
}

#[test]
fn test_unsigned_shift_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntRight,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("unsigned_shift", body);
    let output = print_c(&func);
    assert!(
        output.contains("(_DWORD)v1 >> v2"),
        "IntRight should cast LHS to unsigned, not RHS: {output}",
    );
}

#[test]
fn test_signed_shift_no_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSright,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 4))),
    ];
    let func = make_func("signed_shift", body);
    let output = print_c(&func);
    assert!(
        output.contains("v1 >> v2"),
        "IntSright should not cast to unsigned: {output}",
    );
}

#[test]
fn test_unsigned_less_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntLess,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("unsigned_less", body);
    let output = print_c(&func);
    assert!(
        output.contains("(_DWORD)v1 < (_DWORD)v2"),
        "IntLess should cast both operands to unsigned: {output}",
    );
}

#[test]
fn test_signed_less_no_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSless,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("signed_less", body);
    let output = print_c(&func);
    assert!(
        output.contains("v1 < v2"),
        "IntSless should not cast to unsigned: {output}",
    );
}

#[test]
fn test_unsigned_rem_cast() {
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);
    let out = reg(16, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntRem,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 8))),
    ];
    let func = make_func("unsigned_rem", body);
    let output = print_c(&func);
    assert!(
        output.contains("(_QWORD)v1 % (_QWORD)v2"),
        "IntRem should cast both operands to unsigned: {output}",
    );
}

#[test]
fn test_unsigned_lessequal_cast() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntLessequal,
            out,
            smallvec![r0, r8],
            0x1000,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];
    let func = make_func("unsigned_leq", body);
    let output = print_c(&func);
    assert!(
        output.contains("(_DWORD)v1 <= (_DWORD)v2"),
        "IntLessequal should cast both operands to unsigned: {output}",
    );
}

// -------------------------------------------------------------------
// P4-2: Operator precedence / parenthesization tests
// -------------------------------------------------------------------

#[test]
fn test_parens_shift_in_add() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let c = reg(16, 4);
    let tmp = reg(24, 4);
    let out = reg(32, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntLeft,
            tmp,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![tmp, c],
            0x1004,
        )),
        HirNode::Return(Some(sv(32, 4))),
    ];

    let func = make_func("shift_in_add", body);
    let output = print_c(&func);

    assert!(
        output.contains("(v1 << v2) + v4"),
        "shift inside add must be parenthesized: {output}",
    );
}

#[test]
fn test_parens_add_in_multiply() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let c = reg(16, 4);
    let tmp = reg(24, 4);
    let out = reg(32, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntMult,
            out,
            smallvec![tmp, c],
            0x1004,
        )),
        HirNode::Return(Some(sv(32, 4))),
    ];

    let func = make_func("add_in_mult", body);
    let output = print_c(&func);

    assert!(
        output.contains("(v1 + v2) * v4"),
        "add inside multiply must be parenthesized: {output}",
    );
}

#[test]
fn test_no_parens_same_prec_assoc() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let c = reg(16, 4);
    let tmp = reg(24, 4);
    let out = reg(32, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![tmp, c],
            0x1004,
        )),
        HirNode::Return(Some(sv(32, 4))),
    ];

    let func = make_func("same_prec", body);
    let output = print_c(&func);

    assert!(
        output.contains("v1 + v2 + v4"),
        "same-prec associative ops should NOT have extra parens: {output}",
    );
    assert!(
        !output.contains("(v1 + v2) + v4"),
        "should not wrap same-prec: {output}",
    );
}

#[test]
fn test_parens_nested_binop() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let c = reg(16, 4);
    let tmp = reg(24, 4);
    let out = reg(32, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntOr,
            tmp,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            out,
            smallvec![tmp, c],
            0x1004,
        )),
        HirNode::Return(Some(sv(32, 4))),
    ];

    let func = make_func("nested_binop", body);
    let output = print_c(&func);

    assert!(
        output.contains("(v1 | v2) & v4"),
        "OR inside AND must be parenthesized: {output}",
    );
}

#[test]
fn test_parens_unary_on_binop() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let tmp = reg(16, 4);
    let out = reg(24, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Int2comp,
            out,
            smallvec![tmp],
            0x1004,
        )),
        HirNode::Return(Some(sv(24, 4))),
    ];

    let func = make_func("unary_on_binop", body);
    let output = print_c(&func);

    assert!(
        output.contains("-(v1 + v2)"),
        "unary minus on binop should parenthesize the add: {output}",
    );
}

// -------------------------------------------------------------------
// P4-11: Global variable naming tests
// -------------------------------------------------------------------

#[test]
fn test_global_dword_naming() {
    let space = con(0, 8);
    let addr = con(0x604000, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("global_dword", body);
    let output = print_c(&func);

    assert!(
        output.contains("dword_604000"),
        "4-byte load from 0x604000 should emit dword_604000: {output}",
    );
    assert!(
        !output.contains("*(_DWORD *)"),
        "should not fall back to pointer cast: {output}",
    );
}

#[test]
fn test_global_qword_naming() {
    let space = con(0, 8);
    let addr = con(0x604008, 8);
    let r8 = reg(8, 8);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("global_qword", body);
    let output = print_c(&func);

    assert!(
        output.contains("qword_604008"),
        "8-byte load from 0x604008 should emit qword_604008: {output}",
    );
}

#[test]
fn test_global_with_symbol() {
    use std::collections::BTreeMap;

    let space = con(0, 8);
    let addr = con(0x604000, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("global_sym", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x604000u64, "g_counter".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("g_counter"),
        "should use symbol name 'g_counter': {output}",
    );
    assert!(
        !output.contains("dword_604000"),
        "should NOT fall back to generic name: {output}",
    );
}

#[test]
fn test_global_byte_naming() {
    let space = con(0, 8);
    let addr = con(0x601000, 8);
    let r8 = reg(8, 1);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 1)))];

    let func = make_func("global_byte", body);
    let output = print_c(&func);

    assert!(
        output.contains("byte_601000"),
        "1-byte load from 0x601000 should emit byte_601000: {output}",
    );
}

#[test]
fn test_global_word_naming() {
    let space = con(0, 8);
    let addr = con(0x602000, 8);
    let r8 = reg(8, 2);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 2)))];

    let func = make_func("global_word", body);
    let output = print_c(&func);

    assert!(
        output.contains("word_602000"),
        "2-byte load from 0x602000 should emit word_602000: {output}",
    );
}

#[test]
fn test_fs_canary_qword_emitted_as_intrinsic() {
    let space = con(0, 8);
    let addr = con(0x28, 8);
    let r8 = reg(8, 8);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("canary_qword", body);
    let output = print_c(&func);

    assert!(
        output.contains("__readfsqword(0x28u)"),
        "8-byte load from constant 0x28 should emit __readfsqword(0x28u): {output}",
    );
    assert!(
        !output.contains("*(_QWORD *)"),
        "canary load must not fall back to raw pointer cast: {output}",
    );
    assert!(
        output.contains("__readfsqword(unsigned int offset)"),
        "prelude must declare __readfsqword: {output}",
    );
}

#[test]
fn test_fs_canary_dword_emitted_as_intrinsic() {
    let space = con(0, 8);
    let addr = con(0x14, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("canary_dword", body);
    let output = print_c(&func);

    assert!(
        output.contains("__readfsdword(0x14u)"),
        "4-byte load from 0x14 should emit __readfsdword: {output}",
    );
}

#[test]
fn test_non_canary_small_const_load_unchanged() {
    let space = con(0, 8);
    let addr = con(0x28, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("not_canary", body);
    let output = print_c(&func);

    assert!(
        !output.contains("__readfsqword(0x28u)"),
        "4-byte load from 0x28 must NOT emit a qword canary call: {output}",
    );
    assert!(
        !output.contains("__readfsdword(0x14u)"),
        "4-byte load from 0x28 must NOT emit a dword canary call: {output}",
    );
    assert!(
        output.contains("0x28"),
        "raw cast load should still reference the address 0x28: {output}",
    );
}

#[test]
fn test_global_store_naming() {
    let space = con(0, 8);
    let addr = con(0x604000, 8);
    let r0 = reg(0, 4);

    let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr, r0], 0x1000);
    let body = vec![HirNode::Statement(store), HirNode::Return(None)];

    let func = make_func("global_store", body);
    let output = print_c(&func);

    assert!(
        output.contains("dword_604000 = v1;"),
        "STORE to 0x604000 should emit dword_604000: {output}",
    );
}

#[test]
fn test_rip_relative_low_global_load_uses_symbol() {
    let space = con(0, 8);
    let rip = reg(0x288, 8);
    let addr_tmp = Varnode::unique(0x100, 8);
    let r8 = reg(8, 8);

    let add = IrInsn::with_output(
        IrOp::IntAdd,
        addr_tmp,
        smallvec![rip, con(0x4008, 8)],
        0x1000,
    );
    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr_tmp], 0x1004);
    let body = vec![
        HirNode::Statement(add),
        HirNode::Statement(load),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = make_func("rip_global", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x4008u64, "__dso_handle".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("__dso_handle"),
        "RIP-relative low static address should use the symbol: {output}",
    );
    assert!(
        !output.contains("[2049]"),
        "RIP-relative static address must not fall through to array indexing: {output}",
    );
}

#[test]
fn test_rip_relative_low_global_load_uses_fallback_name() {
    let space = con(0, 8);
    let rip = reg(0x288, 8);
    let addr_tmp = Varnode::unique(0x110, 8);
    let r8 = reg(8, 8);

    let add = IrInsn::with_output(
        IrOp::IntAdd,
        addr_tmp,
        smallvec![rip, con(0x4010, 8)],
        0x1000,
    );
    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr_tmp], 0x1004);
    let body = vec![
        HirNode::Statement(add),
        HirNode::Statement(load),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = make_func("rip_global_fallback", body);
    let output = print_c(&func);

    assert!(
        output.contains("qword_4010"),
        "RIP-relative low static address should get a global fallback name: {output}",
    );
    assert!(
        !output.contains("[2050]"),
        "RIP-relative fallback address must not render as an array index: {output}",
    );
}

#[test]
fn test_rip_relative_low_global_store_uses_symbol() {
    let space = con(0, 8);
    let rip = reg(0x288, 8);
    let addr_tmp = Varnode::unique(0x120, 8);
    let r0 = reg(0, 4);

    let add = IrInsn::with_output(
        IrOp::IntAdd,
        addr_tmp,
        smallvec![rip, con(0x4018, 8)],
        0x1000,
    );
    let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr_tmp, r0], 0x1004);
    let body = vec![
        HirNode::Statement(add),
        HirNode::Statement(store),
        HirNode::Return(None),
    ];

    let func = make_func("rip_global_store", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x4018u64, "g_counter".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("g_counter ="),
        "RIP-relative store should use the global symbol: {output}",
    );
    assert!(
        !output.contains("[4102]"),
        "RIP-relative store must not render as an array index: {output}",
    );
}

#[test]
fn test_no_global_for_small_addr() {
    let space = con(0, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 4);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

    let func = make_func("no_global", body);
    let output = print_c(&func);

    assert!(
        !output.contains("dword_"),
        "register address should NOT be named as global: {output}",
    );
    assert!(
        output.contains("*(_DWORD *)"),
        "should use pointer dereference: {output}",
    );
}

// -------------------------------------------------------------------
// P4-10: String literal inlining tests
// -------------------------------------------------------------------

#[test]
fn test_string_inlined_in_output() {
    let r0 = reg(0, 8);
    let string_addr = con(0x2004, 8);
    let space = con(0, 8);

    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![string_addr],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r0,
            smallvec![space, string_addr],
            0x1004,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("string_test", body);
    let mut string_table = BTreeMap::new();
    string_table.insert(0x2004u64, "Hello".to_string());

    let output = super::print_c_full(&func, None, None, None, Some(&string_table));

    assert!(
        output.contains("\"Hello\""),
        "string address should be replaced with \"Hello\": {output}",
    );
    assert!(
        !output.contains("0x2004"),
        "raw address 0x2004 should NOT appear: {output}",
    );
}

#[test]
fn test_non_string_address_unchanged() {
    let r0 = reg(0, 8);
    let addr = con(0x3000, 8);
    let space = con(0, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r0,
            smallvec![space, addr],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("no_string", body);
    let mut string_table = BTreeMap::new();
    string_table.insert(0x2004u64, "Hello".to_string());

    let output = super::print_c_full(&func, None, None, None, Some(&string_table));

    assert!(
        !output.contains("\"Hello\""),
        "non-matching address should NOT produce string: {output}",
    );
    assert!(
        output.contains("0x3000"),
        "raw address 0x3000 should remain: {output}",
    );
}

#[test]
fn test_string_escape_special_chars() {
    let r0 = reg(0, 8);
    let string_addr = con(0x2000, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![string_addr],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("escape_test", body);
    let mut string_table = BTreeMap::new();
    string_table.insert(0x2000u64, "Hello\nWorld\t\"test\"".to_string());

    let output = super::print_c_full(&func, None, None, None, Some(&string_table));

    assert!(
        output.contains(r#"Hello\nWorld\t\"test\""#),
        "special chars should be escaped: {output}",
    );
}

// -------------------------------------------------------------------
// cot_str escape-table parity (matches IDA's str2user output).
//
// Verifies each escape-category produces the expected C-source form:
//   * standard single-char escapes: \\ \" \n \r \t \v \f \a \b \0
//   * non-printable bytes fall back to \xHH
//   * multi-byte UTF-8 codepoints are byte-decomposed to \xHH
//   * printable ASCII / space pass through unchanged
//   * single-quote is NOT escaped inside a double-quoted literal
// -------------------------------------------------------------------

#[test]
fn test_escape_c_string_standard_singles() {
    // \\ \" \n \r \t \v \f \a \b \0
    let s = "\\\"\n\r\t\x0b\x0c\x07\x08\0";
    let out = super::escape_c_string(s);
    assert_eq!(out, r#"\\\"\n\r\t\v\f\a\b\0"#, "got {out:?}");
}

#[test]
fn test_escape_c_string_hex_fallback_for_other_controls() {
    // 0x01, 0x1F, 0x7F should become \x01, \x1f, \x7f
    let s = "\x01\x1f\x7f";
    let out = super::escape_c_string(s);
    assert_eq!(out, r"\x01\x1f\x7f");
}

#[test]
fn test_escape_c_string_printable_passthrough() {
    let s = "Hello, World! 123";
    let out = super::escape_c_string(s);
    assert_eq!(out, "Hello, World! 123");
}

#[test]
fn test_escape_c_string_single_quote_is_bare() {
    // Inside a "..." literal, ' does not need escaping.
    let out = super::escape_c_string("it's");
    assert_eq!(out, "it's");
}

#[test]
fn test_escape_c_string_multibyte_utf8_byte_decomposed() {
    // 'é' is C3 A9 in UTF-8 — both bytes >= 0x80, so they go through
    // the \xHH fallback and emerge as \xc3\xa9.
    let out = super::escape_c_string("café");
    assert_eq!(out, r"caf\xc3\xa9");
}

#[test]
fn t297_go_type_param_preamble_renders_go_generic_brackets() {
    use unlace_ir::types::Type;
    let func = make_func("generic_user", vec![HirNode::Return(None)]);
    let mut ann = super::PrinterAnnotations::default();
    ann.go_interfaces.insert(
        0x1234,
        Type::TypeParam {
            name: "T".into(),
            constraint: "any".into(),
        },
    );
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("// dictabi_0x1234: [T any]"),
        "output was: {output}"
    );
}

// -------------------------------------------------------------------
// cot_sizeof / cot_alignof formatter helpers.
//
// These have no IR producer today; the tests verify the *string* shape
// matches IDA so that when a future HIR Sizeof/Alignof node is wired
// up, the printer output is already correct.
// -------------------------------------------------------------------

#[test]
fn test_emit_alignof_type() {
    assert_eq!(super::emit_alignof_type("int"), "_Alignof(int)");
    assert_eq!(
        super::emit_alignof_type("struct foo"),
        "_Alignof(struct foo)"
    );
    assert_eq!(super::emit_alignof_type("int *"), "_Alignof(int *)");
}

#[test]
fn test_emit_sizeof_type() {
    assert_eq!(super::emit_sizeof_type("int *"), "sizeof(int *)");
    assert_eq!(super::emit_sizeof_type("char[16]"), "sizeof(char[16])");
    assert_eq!(super::emit_sizeof_type("struct s"), "sizeof(struct s)");
}

#[test]
fn test_emit_sizeof_expr() {
    assert_eq!(super::emit_sizeof_expr("v100"), "sizeof(v100)");
    assert_eq!(super::emit_sizeof_expr("a[0]"), "sizeof(a[0])");
}

// -------------------------------------------------------------------
// P4-8/P4-9: Symbol table threading + CALL resolution tests
// -------------------------------------------------------------------

#[test]
fn test_call_with_symbol_resolved() {
    let target_addr = con(0x401030, 8);

    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "printf".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("printf();"),
        "CALL to known symbol should emit 'printf()': {output}",
    );
    assert!(
        !output.contains("sub_401030"),
        "should NOT contain fallback sub_401030: {output}",
    );
}

#[test]
fn test_direct_call_renders_recovered_string_arg() {
    let target_addr = con(0x401030, 8);
    let string_addr = con(0x2004, 8);

    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr, string_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "puts".to_string());
    let mut strings = BTreeMap::new();
    strings.insert(0x2004, "Hello".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), Some(&strings));

    assert!(
        output.contains("puts(\"Hello\");"),
        "CALL args should render after the resolved callee: {output}",
    );
}

#[test]
fn test_printf_chk_drops_hidden_fortify_arg() {
    let target_addr = con(0x401030, 8);
    let flag = con(1, 4);
    let fmt = con(0x2004, 8);
    let value = con(42, 4);

    let call_insn =
        IrInsn::without_output(IrOp::Call, smallvec![target_addr, flag, fmt, value], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "__printf_chk".to_string());
    let mut strings = BTreeMap::new();
    strings.insert(0x2004, "value=%d\n".to_string());
    let mut ann = PrinterAnnotations::default();
    ann.libc_call_canonical.insert(0x1000, "printf".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        Some(&strings),
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("printf(\"value=%d\\n\", (int)0x2a);"),
        "__printf_chk should render as canonical printf without the flag: {output}",
    );
}

#[test]
fn test_inline_group_merges_assignment_return_after_call() {
    let target_addr = con(0x401030, 8);
    let r0 = reg(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![target_addr],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![con(0, 4)],
            0x1004,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "puts".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("puts(); return 0;"),
        "assignment feeding an immediate return should merge inside inline groups: {output}",
    );
    assert!(
        !output.contains("result = 0; return result;"),
        "merged return should not keep the temporary assignment: {output}",
    );
}

#[test]
fn test_call_without_symbol_keeps_sub() {
    let target_addr = con(0x402000, 8);

    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let symbols = BTreeMap::new();

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("sub_402000();"),
        "CALL to unknown address should emit 'sub_402000()': {output}",
    );
}

#[test]
fn test_call_with_output_resolves_symbol() {
    let r0 = reg(0, 8);
    let target_addr = con(0x401030, 8);

    let call_insn = IrInsn::with_output(IrOp::Call, r0, smallvec![target_addr], 0x1000);
    let body = vec![
        HirNode::Statement(call_insn),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "malloc".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("malloc()"),
        "CALL with output to known symbol should emit 'malloc()': {output}",
    );
}

#[test]
fn test_unused_call_output_prints_bare_call() {
    let r0 = reg(0, 4);
    let target_addr = con(0x401030, 8);

    let call_insn = IrInsn::with_output(IrOp::Call, r0, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "puts".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("puts();"),
        "unused CALL return register should emit a bare call: {output}",
    );
    assert!(
        !output.contains("result = puts()") && !output.contains("v1 = puts()"),
        "unused CALL return register should not force an assignment: {output}",
    );
}

// -------------------------------------------------------------------
// t173: forwarded-export resolution comment on Call rendering
// -------------------------------------------------------------------

#[test]
fn test_call_renders_forwarded_resolution_comment() {
    // CALL through an IAT slot whose forwarder has been resolved
    // (e.g. `kernel32!HeapAlloc → ntdll!RtlAllocateHeap`) gets a
    // trailing `/* -> ntdll!RtlAllocateHeap */` comment.
    let iat_slot_va: u64 = 0x0040_3000;
    let target_addr = con(iat_slot_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(iat_slot_va, "kernel32!HeapAlloc".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.forwarded_resolutions
        .insert(iat_slot_va, "NTDLL!RtlAllocateHeap".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    // The forwarded resolution renders as a trailing comment pointing at
    // the resolved target. When the raw import symbol is not a valid C
    // identifier (it contains `!`), the comment also carries the raw
    // `dll!sym` spelling so it survives the call-target sanitisation
    // (`kernel32!HeapAlloc` → `kernel32_HeapAlloc`).
    assert!(
        output.contains("-> NTDLL!RtlAllocateHeap */"),
        "forwarded-resolution comment must render on CALL: {output}",
    );
    // The original (un-resolved) symbol name still appears — in the
    // comment — so the additive resolution does not erase it.
    assert!(
        output.contains("kernel32!HeapAlloc"),
        "primary symbol name must still render: {output}",
    );
}

// -------------------------------------------------------------------
// §5.5: FLIRT confidence trailing-comment on Call rendering
// -------------------------------------------------------------------

/// A direct Call whose target VA is present in
/// [`PrinterAnnotations::flirt_call_annotations`] gets a trailing
/// `/* flirt: <name>@<conf> */` comment. Confidence is rendered with
/// two decimal digits so the output is byte-stable across runs.
#[test]
fn call_renders_flirt_confidence_comment() {
    let call_va: u64 = 0x1000;
    let target_va: u64 = 0x0040_1040;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "sub_401040".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.flirt_call_annotations
        .insert(target_va, ("memcpy".to_string(), 0.95));

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("/* flirt: memcpy@0.95 */"),
        "flirt confidence comment must render on direct Call: {output}",
    );
}

/// Low-confidence (0.50) matches still render with two decimal
/// digits so the format is stable across confidence buckets.
#[test]
fn call_renders_flirt_low_confidence_comment() {
    let call_va: u64 = 0x1100;
    let target_va: u64 = 0x0040_1100;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut ann = super::PrinterAnnotations::default();
    ann.flirt_call_annotations
        .insert(target_va, ("strlen".to_string(), 0.5));

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("/* flirt: strlen@0.50 */"),
        "low-confidence flirt comment must render with 0.50 format: {output}",
    );
}

// -------------------------------------------------------------------
// t229: libc canonical-name rewriting on Call rendering
// -------------------------------------------------------------------

/// A Call whose target is the libc alias `__memcpy_chk` renders as
/// `memcpy(...)` once the `libc_call_canonical` annotation is in
/// place. The symbol table still maps the address to the raw alias —
/// only the canonical map should drive the rewrite.
#[test]
fn t229_call_rewrites_memcpy_chk_to_memcpy() {
    let call_va: u64 = 0x1000;
    let target_va: u64 = 0x401040;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "__memcpy_chk".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.libc_call_canonical
        .insert(call_va, "memcpy".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("memcpy("),
        "Call to __memcpy_chk must render as memcpy(...): {output}",
    );
    assert!(
        !output.contains("__memcpy_chk"),
        "raw alias must not appear when canonical name is set: {output}",
    );
}

/// `_Znwm` (Itanium-mangled `operator new(unsigned long)`) is in the
/// `Malloc` family — pipeline annotates it to `malloc`. Output must
/// reflect the canonical name.
#[test]
fn t229_call_rewrites_znwm_to_malloc() {
    let call_va: u64 = 0x1004;
    let target_va: u64 = 0x401050;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "_Znwm".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.libc_call_canonical
        .insert(call_va, "malloc".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("malloc("),
        "Call to _Znwm must render as malloc(...): {output}",
    );
}

/// When the call is not in `libc_call_canonical`, the legacy
/// symbol-table path takes over and the raw symbol still renders.
#[test]
fn t229_unknown_call_falls_through_to_legacy_symbol_path() {
    let call_va: u64 = 0x1008;
    let target_va: u64 = 0x401060;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "my_user_func".to_string());

    // No entry in libc_call_canonical for this call VA.
    let ann = super::PrinterAnnotations::default();

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("my_user_func("),
        "non-libc call must render as the raw symbol name: {output}",
    );
}

// -------------------------------------------------------------------
// t262: leading provenance comment when libc canonical != original
// -------------------------------------------------------------------

/// When `libc_call_canonical` and `libc_call_original` disagree for
/// a Call VA, the printer emits a leading
/// `// <canonical>(...) — recognized from <original>` comment so a
/// reader can map the rendered name back to the binary's import.
#[test]
fn t262_aliased_libc_call_emits_origin_comment() {
    let call_va: u64 = 0x1000;
    let target_va: u64 = 0x401040;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "__memcpy_chk".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.libc_call_canonical
        .insert(call_va, "memcpy".to_string());
    ann.libc_call_original
        .insert(call_va, "__memcpy_chk".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        output.contains("// memcpy(...) — recognized from __memcpy_chk"),
        "expected origin comment for aliased libc call: {output}",
    );
    // The Call itself still renders as the canonical name.
    assert!(
        output.contains("memcpy("),
        "call body must still render as canonical name: {output}",
    );
}

// -------------------------------------------------------------------
// t264: source-line provenance comments from DWARF/PDB line info
// -------------------------------------------------------------------

/// When the supplied `DwarfInfo::source_map` contains an entry for
/// an instruction's VA, the printer emits a leading
/// `// file.c:line` comment so a reader can correlate the
/// decompiled C with the original source.
#[test]
fn t264_dwarf_source_line_emitted_as_comment() {
    use unlace_loader::{DwarfInfo, SourceLocation};

    let stmt_va = 0x1000;
    let stmt = IrInsn::with_output(
        IrOp::IntAdd,
        reg(8, 8),
        smallvec![reg(0, 8), con(1, 8)],
        stmt_va,
    );
    let body = vec![HirNode::Statement(stmt), HirNode::Return(None)];
    let func = make_func("source_traced", body);

    let mut source_map = BTreeMap::new();
    source_map.insert(
        stmt_va,
        SourceLocation {
            file: "foo.c".to_string(),
            line: 42,
            column: None,
        },
    );
    let dwarf = DwarfInfo {
        functions: BTreeMap::new(),
        source_map,
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_with_dwarf(&func, Some(&dwarf));
    assert!(
        output.contains("// foo.c:42"),
        "expected `// foo.c:42` provenance comment, got: {output}",
    );
    // The legacy `// source:` prefix was dropped in t264 — must
    // not reappear (otherwise downstream greps would double-match).
    assert!(
        !output.contains("// source:"),
        "legacy `// source:` prefix should not be emitted: {output}",
    );
}

/// When no DWARF info is supplied (or the source_map has no entry
/// for this VA), no provenance comment is emitted — the output
/// must not gain a leading `// …:N` line that would confuse a
/// reader expecting clean C.
#[test]
fn t264_no_debug_info_emits_no_source_comment() {
    let stmt = IrInsn::with_output(
        IrOp::IntAdd,
        reg(8, 8),
        smallvec![reg(0, 8), con(1, 8)],
        0x2000,
    );
    let body = vec![HirNode::Statement(stmt), HirNode::Return(None)];
    let func = make_func("no_debug", body);

    // No DWARF info passed.
    let output = print_c(&func);
    assert!(
        !output.contains("// foo.c:"),
        "no source provenance comment expected without DWARF: {output}",
    );
    assert!(
        !output.contains("// source:"),
        "legacy `// source:` prefix should not be emitted: {output}",
    );
}

// -------------------------------------------------------------------
// t265: direct-call xref summary above the function header
// -------------------------------------------------------------------

/// A function with two direct callers gets a leading
/// `// xref: sub_<X>+<off>, sub_<Y>+<off>` comment above its
/// header. `off` is the call site's byte-offset from the caller's
/// entry, matching IDA's reference-window notation.
#[test]
fn t265_callee_with_two_callers_emits_xref_comment() {
    // Function `callee` lives at 0x1000; the caller list says it
    // was called from sub_2000 at offset 0x15 and sub_3000 at
    // offset 0x08.
    let callee_va: u64 = 0x1000;
    let mut func = make_func("callee", vec![HirNode::Return(None)]);
    func.addr = callee_va;

    let mut ann = super::PrinterAnnotations::default();
    ann.xref_callers
        .insert(callee_va, vec![(0x2000, 0x2015), (0x3000, 0x3008)]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("// xref: sub_2000+15, sub_3000+8"),
        "expected xref comment listing two callers: {output}",
    );
}

/// A function with no recorded callers (leaf in the call graph,
/// library entry not referenced internally) gets no xref
/// comment — adding one would only add noise.
#[test]
fn t265_uncalled_function_emits_no_xref_comment() {
    let func = make_func("isolated", vec![HirNode::Return(None)]);
    // Default annotations — empty xref_callers map.
    let ann = super::PrinterAnnotations::default();
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        !output.contains("// xref:"),
        "uncalled function should have no xref comment: {output}",
    );
}

/// When canonical == original, the rendered name already matches
/// the binary — no informational gap, so no comment is emitted.
#[test]
fn t262_canonical_matching_original_emits_no_comment() {
    let call_va: u64 = 0x1004;
    let target_va: u64 = 0x401050;
    let target_addr = con(target_va, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], call_va);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_va, "memcpy".to_string());

    let mut ann = super::PrinterAnnotations::default();
    ann.libc_call_canonical
        .insert(call_va, "memcpy".to_string());
    ann.libc_call_original.insert(call_va, "memcpy".to_string());

    let output = super::print_c_with_annotations(
        &func,
        None,
        None,
        Some(&symbols),
        None,
        None,
        None,
        Some(&ann),
    );

    assert!(
        !output.contains("recognized from"),
        "no origin comment expected when canonical == original: {output}",
    );
}

#[test]
fn test_symbols_passed_through_pipeline_header() {
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "printf".to_string());

    let target_addr = con(0x401030, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);

    let header = super::FunctionHeaderInfo {
        name: "caller".to_string(),
        address: 0x1000,
        size: 0x20,
        convention: "unknown".to_string(),
        stack_frame: 0,
        callees: vec!["printf".to_string()],
        dynamic_sp: false,
    };

    let output = super::print_c_full(&func, None, Some(&header), Some(&symbols), None);

    assert!(
        output.contains("Xrefs to:   printf"),
        "header should show resolved callee name: {output}",
    );
    assert!(
        output.contains("printf();"),
        "body should show resolved call: {output}",
    );
}

// -------------------------------------------------------------------
// P4-12: Calling convention annotation tests
// -------------------------------------------------------------------

#[test]
fn test_fastcall_annotation() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_1DB100", body);
    let header = super::FunctionHeaderInfo {
        name: "sub_1DB100".to_string(),
        address: 0x1DB100,
        size: 0x100,
        convention: "Microsoft x64".to_string(),
        stack_frame: 0x40,
        callees: vec![],
        dynamic_sp: false,
    };

    let output = super::print_c_full(&func, None, Some(&header), None, None);

    assert!(
        output.contains("__fastcall"),
        "Microsoft x64 should emit __fastcall: {output}",
    );
    assert!(
        output.contains("__fastcall sub_1DB100("),
        "format: ret_type __fastcall name(...): {output}",
    );
}

#[test]
fn test_sysv_no_annotation() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_401000", body);
    let header = super::FunctionHeaderInfo {
        name: "sub_401000".to_string(),
        address: 0x401000,
        size: 0x50,
        convention: "System V AMD64".to_string(),
        stack_frame: 0x20,
        callees: vec![],
        dynamic_sp: false,
    };

    let output = super::print_c_full(&func, None, Some(&header), None, None);

    assert!(
        !output.contains("__fastcall"),
        "System V should NOT have __fastcall: {output}",
    );
    assert!(
        !output.contains("__cdecl"),
        "System V should NOT have __cdecl: {output}",
    );
    let sig_line = output
        .lines()
        .find(|l| l.contains("sub_401000("))
        .expect("function sig");
    assert!(
        sig_line.starts_with("int sub_401000("),
        "SysV should have no convention annotation: {sig_line}",
    );
}

#[test]
fn test_unknown_convention_no_annotation() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_500000", body);
    let header = super::FunctionHeaderInfo {
        name: "sub_500000".to_string(),
        address: 0x500000,
        size: 0x30,
        convention: "unknown".to_string(),
        stack_frame: 0,
        callees: vec![],
        dynamic_sp: false,
    };

    let output = super::print_c_full(&func, None, Some(&header), None, None);

    assert!(
        !output.contains("__fastcall"),
        "unknown convention should NOT have __fastcall: {output}",
    );
    let sig_line = output
        .lines()
        .find(|l| l.contains("sub_500000("))
        .expect("function sig");
    assert!(
        sig_line.starts_with("int sub_500000("),
        "unknown convention should have no annotation: {sig_line}",
    );
}

#[test]
fn test_cdecl_annotation() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("sub_404010", body);
    let header = super::FunctionHeaderInfo {
        name: "sub_404010".to_string(),
        address: 0x404010,
        size: 0x40,
        convention: "cdecl".to_string(),
        stack_frame: 0x10,
        callees: vec![],
        dynamic_sp: false,
    };

    let output = super::print_c_full(&func, None, Some(&header), None, None);

    assert!(
        output.contains("__cdecl sub_404010("),
        "cdecl should emit __cdecl annotation: {output}",
    );
    assert!(
        !output.contains("__fastcall"),
        "cdecl should NOT emit __fastcall: {output}",
    );
}

#[test]
fn test_stdcall_and_thiscall_annotation() {
    let body = vec![HirNode::Return(None)];
    let func1 = make_func("WinMain", body.clone());
    let header1 = super::FunctionHeaderInfo {
        name: "WinMain".to_string(),
        address: 0x401000,
        size: 0x40,
        convention: "stdcall".to_string(),
        stack_frame: 0,
        callees: vec![],
        dynamic_sp: false,
    };
    let out1 = super::print_c_full(&func1, None, Some(&header1), None, None);
    assert!(
        out1.contains("__stdcall WinMain("),
        "stdcall should emit __stdcall: {out1}",
    );

    let func2 = make_func("Foo__bar", body);
    let header2 = super::FunctionHeaderInfo {
        name: "Foo__bar".to_string(),
        address: 0x402000,
        size: 0x40,
        convention: "thiscall".to_string(),
        stack_frame: 0,
        callees: vec![],
        dynamic_sp: false,
    };
    let out2 = super::print_c_full(&func2, None, Some(&header2), None, None);
    assert!(
        out2.contains("__thiscall Foo__bar("),
        "thiscall should emit __thiscall: {out2}",
    );
}

// -------------------------------------------------------------------
// P4-16: Array subscript recovery tests
// -------------------------------------------------------------------

#[test]
fn test_array_subscript_basic() {
    // LOAD with INT_ADD(buf, INT_MULT(i, 4)), size=4, `int *buf` → buf[i]
    let space = con(0, 8);
    let base = reg(56, 8);
    let idx = reg(8, 8);
    let stride = con(4, 8);
    let mult_out = Varnode::unique(100, 8);
    let add_out = Varnode::unique(200, 8);
    let load_out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntMult,
            mult_out,
            smallvec![idx, stride],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            add_out,
            smallvec![base, mult_out],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, add_out],
            0x1008,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];

    let func = make_func("array_basic", body);
    let (dwarf, header) = dwarf_with_pointer_param("buf", "int *", 4, vec![]);
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(output.contains("buf["), "should emit buf[index]: {output}");
    assert!(
        !output.contains("*(_DWORD *)"),
        "should NOT fall back to pointer dereference: {output}",
    );
}

#[test]
fn test_array_subscript_ptradd() {
    // PTRADD(buf, i, 4) used as LOAD address, size=4, `int *buf` → buf[i]
    let space = con(0, 8);
    let base = reg(56, 8);
    let idx = reg(8, 8);
    let stride = con(4, 8);
    let ptradd_out = Varnode::unique(100, 8);
    let load_out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Ptradd,
            ptradd_out,
            smallvec![base, idx, stride],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, ptradd_out],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];

    let func = make_func("array_ptradd", body);
    let (dwarf, header) = dwarf_with_pointer_param("buf", "int *", 4, vec![]);
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("buf["),
        "PTRADD should emit buf[index]: {output}"
    );
}

#[test]
fn test_array_constant_index() {
    // *(buf + 16) load 4 bytes through `int *buf` → buf[4]
    let space = con(0, 8);
    let base = reg(56, 8);
    let offset = con(16, 8);
    let add_out = Varnode::unique(100, 8);
    let load_out = reg(8, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            add_out,
            smallvec![base, offset],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, add_out],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];

    let func = make_func("array_const_idx", body);
    let (dwarf, header) = dwarf_with_pointer_param("buf", "int *", 4, vec![]);
    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);
    assert!(
        output.contains("buf[4]"),
        "constant offset 16 through int * should emit buf[4]: {output}",
    );

    // An untyped base is declared as a scalar; `v1[4]` would not compile.
    let untyped = print_c(&func);
    assert!(
        untyped.contains("*(_DWORD *)(") && !untyped.contains("[4]"),
        "untyped base must keep the raw dereference: {untyped}",
    );
}

#[test]
fn test_array_negative_const_offset_not_subscript() {
    // *(base + (-32)) at 4 bytes: a `base - 32` stack/struct displacement,
    // NOT base[huge]. The constant 0xffffffffffffffe0 (=-32) must not be
    // divided by the stride into a giant unsigned index.
    let space = con(0, 8);
    let base = reg(0, 8);
    let neg_off = con(0xffff_ffff_ffff_ffe0, 8); // -32
    let add_out = Varnode::unique(100, 8);
    let load_out = reg(8, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            add_out,
            smallvec![base, neg_off],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, add_out],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];

    let func = make_func("neg_off_load", body);
    let output = print_c(&func);

    // Must NOT produce a giant unsigned subscript.
    assert!(
        !output.contains("[4611686018427387900]") && !output.contains("[2305843"),
        "negative displacement must not become a giant array index: {output}",
    );
    // No positive small subscript should be invented either.
    assert!(
        !output.contains("[1]") && !output.contains("[4]"),
        "negative displacement must not become any positive subscript: {output}",
    );
}

#[test]
fn test_array_stride_mismatch_keeps_deref() {
    // INT_ADD(base, INT_MULT(i, 8)) but load size=4 → stride mismatch, keep deref
    let space = con(0, 8);
    let base = reg(0, 8);
    let idx = reg(8, 8);
    let stride = con(8, 8);
    let mult_out = Varnode::unique(100, 8);
    let add_out = Varnode::unique(200, 8);
    let load_out = reg(16, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntMult,
            mult_out,
            smallvec![idx, stride],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            add_out,
            smallvec![base, mult_out],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space, add_out],
            0x1008,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: load_out,
            version: 0,
        })),
    ];

    let func = make_func("stride_mismatch", body);
    let output = print_c(&func);

    assert!(
        output.contains("*(_DWORD *)"),
        "stride mismatch should keep pointer dereference: {output}",
    );
    assert!(
        !output.contains("["),
        "should NOT emit array subscript: {output}",
    );
}

// -------------------------------------------------------------------
// P4-17: CALLIND distinction tests
// -------------------------------------------------------------------

#[test]
fn test_callind_star_syntax() {
    // CALLIND(fptr) → (*fptr)()
    let fptr = reg(0, 8);

    let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr], 0x1000);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];

    let func = make_func("callind_test", body);
    let output = print_c(&func);

    assert!(
        output.contains("((void (*)())pfn)();"),
        "CALLIND should emit IDA-style cast: {output}",
    );
}

#[test]
fn test_call_direct_no_star() {
    // CALL(addr) → func() — no star
    let target = con(0x401000, 8);

    let call = IrInsn::without_output(IrOp::Call, smallvec![target], 0x1000);
    let body = vec![HirNode::Statement(call), HirNode::Return(None)];

    let func = make_func("call_direct", body);
    let output = print_c(&func);

    assert!(
        output.contains("sub_401000();"),
        "direct CALL should emit func(): {output}",
    );
    assert!(
        !output.contains("(*"),
        "direct CALL should NOT have star: {output}",
    );
}

#[test]
fn test_callind_with_output_star_syntax() {
    // CALLIND with output → v1 = (*fptr)()
    let fptr = reg(0, 8);
    let ret = reg(8, 8);

    let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr], 0x1000);
    let body = vec![
        HirNode::Statement(callind),
        HirNode::Return(Some(SsaVarnode {
            base: ret,
            version: 0,
        })),
    ];

    let func = make_func("callind_output", body);
    let output = print_c(&func);

    assert!(
        output.contains("((__int64 (*)())pfn)()"),
        "CALLIND with output should emit IDA-style cast: {output}",
    );
}

// -------------------------------------------------------------------
// P4-23: CALLOTHER resolution tests
// -------------------------------------------------------------------

// -------------------------------------------------------------------
// vtable call rendering tests
// -------------------------------------------------------------------

#[test]
fn test_vtable_call_renders_arrow_syntax() {
    // Simulate: this->__vftable->method_0(this)
    // CALLIND(fptr, this_arg) at VA 0x1000 where fptr=reg(0), this=reg(8)
    use unlace_ir::ssa::TargetSet;

    let fptr = reg(0, 8);
    let this_arg = reg(8, 8);

    let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr, this_arg], 0x1000);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];

    let mut func = make_func("vtable_test", body);
    func.vtable_call_targets.insert(
        0x1000,
        TargetSet::VtableSlot {
            receiver: None,
            class_name: "Base".to_string(),
            slot_idx: 0,
            method: None,
        },
    );

    let output = print_c(&func);
    assert!(
        output.contains("->__vftable->method_0("),
        "vtable CALLIND should emit arrow syntax: {output}",
    );
    assert!(
        !output.contains("(*"),
        "vtable CALLIND should NOT emit IDA-style cast: {output}",
    );
}

#[test]
fn test_vtable_call_slot_index() {
    // slot_idx = 2 → method_2
    use unlace_ir::ssa::TargetSet;

    let fptr = reg(0, 8);
    let this_arg = reg(8, 8);
    let extra_arg = reg(16, 8);

    let callind =
        IrInsn::without_output(IrOp::Callind, smallvec![fptr, this_arg, extra_arg], 0x2000);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];

    let mut func = make_func("vtable_slot2", body);
    func.vtable_call_targets.insert(
        0x2000,
        TargetSet::VtableSlot {
            receiver: None,
            class_name: "Derived".to_string(),
            slot_idx: 2,
            method: None,
        },
    );

    let output = print_c(&func);
    assert!(
        output.contains("->__vftable->method_2("),
        "vtable slot 2 should emit method_2: {output}",
    );
}

#[test]
fn test_vtable_tail_branch_suppresses_following_return() {
    use unlace_ir::ssa::TargetSet;

    let fptr = reg(0, 8);
    let branchind = IrInsn::without_output(IrOp::Branchind, smallvec![fptr], 0x2100);
    let body = vec![HirNode::Statement(branchind), HirNode::Return(None)];

    let mut func = make_func("vtable_tail_branch", body);
    func.vtable_call_targets.insert(
        0x2100,
        TargetSet::VtableSlot {
            receiver: None,
            class_name: "Base".to_string(),
            slot_idx: 0,
            method: None,
        },
    );

    let output = print_c(&func);
    assert!(
        output.contains("return this->__vftable->method_0();"),
        "vtable BRANCHIND should render as tail return: {output}",
    );
    // Count returns in the function body only — the shared SSE/atomic
    // prelude helpers legitimately contain their own `return` statements.
    let body_text = function_body_text(&output, "vtable_tail_branch");
    assert_eq!(
        body_text.matches("return").count(),
        1,
        "following synthetic return should be suppressed: {body_text}"
    );
}

#[test]
fn test_vtable_call_with_rtti_method_renders_member_call() {
    use unlace_ir::ssa::TargetSet;

    let fptr = reg(0, 8);
    let object = SsaVarnode {
        base: reg(56, 8),
        version: 0,
    };
    let branchind = IrInsn::without_output(IrOp::Branchind, smallvec![fptr], 0x2200);
    let body = vec![HirNode::Statement(branchind), HirNode::Return(None)];

    let mut func = make_func("vtable_named", body);
    func.vtable_call_targets.insert(
        0x2200,
        TargetSet::VtableSlot {
            receiver: Some(object),
            class_name: "Dog".to_string(),
            slot_idx: 0,
            method: Some("speak".to_string()),
        },
    );

    let output = print_c(&func);
    let body_text = function_body_text(&output, "vtable_named");
    assert!(
        body_text.contains("->speak();"),
        "named vtable slot should render as a member call: {body_text}"
    );
    assert!(
        !body_text.contains("__vftable") && !body_text.contains("this"),
        "the traced receiver replaces the `this` placeholder: {body_text}"
    );
}

#[test]
fn test_callind_without_vtable_annotation_still_cast() {
    // CALLIND without a vtable entry still uses the IDA-style cast.
    let fptr = reg(0, 8);
    let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr], 0x3000);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];
    let func = make_func("no_vtable", body);
    let output = print_c(&func);
    assert!(
        output.contains("(*)"),
        "non-vtable CALLIND should still emit IDA-style cast: {output}",
    );
}

#[test]
fn test_callother_resolved() {
    let r0 = reg(0, 16);
    let r16 = reg(16, 16);
    let out = reg(32, 16);
    let tag = con(0x110, 8); // PADDB

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec![tag, r0, r16],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("sse_add", body);
    let output = print_c(&func);

    assert!(
        output.contains("_mm_add_epi8("),
        "CALLOTHER with PADDB tag should emit _mm_add_epi8: {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "known tag should NOT have fallback comment: {output}",
    );
}

#[test]
fn test_callother_unknown_annotated() {
    let r0 = reg(0, 16);
    let out = reg(32, 16);
    let tag = con(0xDEAD, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec![tag, r0],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("sse_unknown", body);
    let output = print_c(&func);

    assert!(
        output.contains("/* CALLOTHER tag=57005 */"),
        "unknown tag should have CALLOTHER comment with decimal tag: {output}",
    );
}

#[test]
fn test_callother_avx512_addq_resolved() {
    let r0 = reg(0, 64);
    let r64 = reg(64, 64);
    let out = reg(128, 64);
    let tag = con(0x1D0, 8); // VPADDQ_512

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec![tag, r0, r64],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("avx512_addq", body);
    let output = print_c(&func);

    assert!(
        output.contains("_mm512_add_epi64("),
        "AVX-512 VPADDQ tag should emit _mm512_add_epi64: {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "known AVX-512 tag should not leak CALLOTHER fallback: {output}",
    );
}

#[test]
fn test_callother_amx_dpbssd_resolved() {
    let tmm1 = reg(0x1040, 255);
    let tmm2 = reg(0x1440, 255);
    let tmm3 = reg(0x1840, 255);
    let tag = con(0x504, 8); // TDPBSSD

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            tmm1,
            smallvec![tag, tmm1, tmm2, tmm3],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("amx_dpbssd", body);
    let output = print_c(&func);

    assert!(
        output.contains("_tile_dpbssd("),
        "AMX TDPBSSD tag should emit _tile_dpbssd: {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "known AMX tag should not leak CALLOTHER fallback: {output}",
    );
}

#[test]
fn test_callother_x87_fld_fstp_resolved() {
    let mem = reg(0, 8);
    let st0 = reg(400, 10);
    let tag_fld = con(0x310, 8);
    let tag_fstp = con(0x311, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            st0,
            smallvec![tag_fld, mem],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_fstp, mem, st0],
            0x1004,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("x87_helpers", body);
    let output = print_c(&func);

    assert!(
        output.contains("__fld(") && output.contains("__fstp("),
        "x87 Callother tags should emit named helpers: {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "known x87 tags should not leak CALLOTHER fallback: {output}",
    );
}

#[test]
fn test_callother_cmov_emits_if_assignment() {
    let cond = reg(259, 1);
    let src = reg(16, 8);
    let dst = reg(0, 8);
    let tag = con(0x350, 8);

    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, cond, src, dst],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("cmov", body);
    let output = print_c(&func);

    assert!(
        output.contains("if (") && output.contains(" = "),
        "CMOV Callother should emit an if-assignment: {output}",
    );
    assert!(
        !output.contains("__cmov__("),
        "CMOV Callother should not emit call syntax: {output}",
    );
}

#[test]
fn test_dynamic_four_input_callother_preserves_cmov_shape() {
    let dynamic_tag = reg(64, 8);
    let cond = reg(259, 1);
    let src = reg(16, 8);
    let dst = reg(0, 8);

    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![dynamic_tag, cond, src, dst],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("cmov_dynamic_tag", body);
    let output = print_c(&func);

    assert!(
        output.contains("if (") && !output.contains("dynamic tag"),
        "corrupted CMOV tags should still emit an if-assignment: {output}",
    );
}

#[test]
fn test_callother_no_output_resolved() {
    let r0 = reg(0, 16);
    let r16 = reg(16, 16);
    let tag = con(0x100, 8); // MOVDQA store form

    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, r0, r16],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("sse_mov_store", body);
    let output = print_c(&func);

    assert!(
        output.contains("_mm_load_si128("),
        "CALLOTHER store-form MOVDQA should still emit intrinsic: {output}",
    );
}

#[test]
fn test_callother_movaps_resolved() {
    let r0 = reg(0, 16);
    let out = reg(32, 16);
    let tag = con(0x102, 8); // MOVAPS

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec![tag, r0],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("sse_movaps", body);
    let output = print_c(&func);

    assert!(
        output.contains("_mm_load_ps("),
        "CALLOTHER with MOVAPS tag should emit _mm_load_ps: {output}",
    );
}

#[test]
fn test_callother_mulps_resolved() {
    let r0 = reg(0, 16);
    let r16 = reg(16, 16);
    let out = reg(32, 16);
    let tag = con(0x132, 8); // MULPS

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec![tag, r0, r16],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("sse_mulps", body);
    let output = print_c(&func);

    assert!(
        output.contains("_mm_mul_ps("),
        "CALLOTHER with MULPS tag should emit _mm_mul_ps: {output}",
    );
}

// -------------------------------------------------------------------
// t200: AArch64 NEON intrinsic-name registry
//
// Each test feeds a Callother whose tag + lane operand together
// pick a NEON intrinsic, and asserts the printer routes through
// `aarch64_neon_intrinsic_name` rather than emitting the generic
// `/* CALLOTHER tag=... */` fallback. The lane constant in
// `inputs[1]` must be peeled off (it's baked into the name).
// -------------------------------------------------------------------

#[test]
fn test_callother_neon_add_v4s_emits_vaddq_s32_t200() {
    // Callother(0x408 /* NEON_ADD */, lane=4, vd, vn, vm) → vaddq_s32
    let tag = con(0x408, 8);
    let lane = con(4, 1);
    let vd = con(0, 1);
    let vn = con(1, 1);
    let vm = con(2, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, vd, vn, vm],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_add_s32", body);
    let output = print_c(&func);
    assert!(
        output.contains("vaddq_s32("),
        "NEON ADD lane=4 should render as vaddq_s32: {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "NEON ADD should not fall back to comment: {output}",
    );
}

#[test]
fn test_callother_neon_sub_v8h_emits_vsubq_s16_t200() {
    // Callother(0x409 /* NEON_SUB */, lane=2, vd, vn, vm) → vsubq_s16
    let tag = con(0x409, 8);
    let lane = con(2, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_sub_s16", body);
    let output = print_c(&func);
    assert!(
        output.contains("vsubq_s16("),
        "NEON SUB lane=2 should render as vsubq_s16: {output}",
    );
}

#[test]
fn test_callother_neon_mul_v4s_emits_vmulq_s32_t200() {
    // Callother(0x40A /* NEON_MUL */, lane=4, vd, vn, vm) → vmulq_s32
    let tag = con(0x40A, 8);
    let lane = con(4, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_mul_s32", body);
    let output = print_c(&func);
    assert!(
        output.contains("vmulq_s32("),
        "NEON MUL lane=4 should render as vmulq_s32: {output}",
    );
}

#[test]
fn test_callother_neon_fadd_v4s_emits_vaddq_f32_t200() {
    // Callother(0x40B /* NEON_FADD */, lane=4, vd, vn, vm) → vaddq_f32
    let tag = con(0x40B, 8);
    let lane = con(4, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_fadd_f32", body);
    let output = print_c(&func);
    assert!(
        output.contains("vaddq_f32("),
        "NEON FADD lane=4 should render as vaddq_f32 (signedness ignored): {output}",
    );
}

#[test]
fn test_callother_aarch64_ld1_16b_emits_vld1q_u8_t200() {
    // Callother(0x400 /* LD1 */, lane=1, addr, vreg0) → vld1q_u8
    let tag = con(0x400, 8);
    let lane = con(1, 1);
    let addr = reg(0, 8);
    let vreg = con(0, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, addr, vreg],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_ld1_u8", body);
    let output = print_c(&func);
    assert!(
        output.contains("vld1q_u8("),
        "LD1 lane=1 should render as vld1q_u8 (default-unsigned for loads): {output}",
    );
}

#[test]
fn test_callother_aarch64_st1_16b_emits_vst1q_u8_t200() {
    // Callother(0x404 /* ST1 */, lane=1, addr, vreg0) → vst1q_u8
    let tag = con(0x404, 8);
    let lane = con(1, 1);
    let addr = reg(0, 8);
    let vreg = con(0, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, lane, addr, vreg],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("neon_st1_u8", body);
    let output = print_c(&func);
    assert!(
        output.contains("vst1q_u8("),
        "ST1 lane=1 should render as vst1q_u8: {output}",
    );
}

// -------------------------------------------------------------------

#[test]
fn test_callother_aarch64_ldar_renders_c11_atomic_t299() {
    let insn = IrInsn::with_output(
        IrOp::Callother,
        Varnode::unique(0, 8),
        smallvec![
            Varnode::constant(0x347, 8),
            Varnode::constant(8, 8),
            Varnode::reg(8, 8),
        ],
        0x1000,
    );
    let output = print_c(&make_func("a64_ldar", vec![HirNode::Statement(insn)]));
    assert!(
        output.contains("atomic_load_explicit") && output.contains("memory_order_acquire"),
        "LDAR should render as C11 acquire load: {output}"
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "known tag must not fall back: {output}"
    );
}

#[test]
fn test_callother_aarch64_stlr_renders_c11_atomic_t299() {
    let insn = IrInsn::without_output(
        IrOp::Callother,
        smallvec![
            Varnode::constant(0x348, 8),
            Varnode::constant(8, 8),
            Varnode::reg(0, 8),
            Varnode::reg(8, 8),
        ],
        0x1000,
    );
    let output = print_c(&make_func("a64_stlr", vec![HirNode::Statement(insn)]));
    assert!(
        output.contains("atomic_store_explicit") && output.contains("memory_order_release"),
        "STLR should render as C11 release store: {output}"
    );
}

#[test]
fn test_callother_aarch64_lse_renders_c11_atomic_t299() {
    let add = IrInsn::with_output(
        IrOp::Callother,
        Varnode::unique(0, 8),
        smallvec![
            Varnode::constant(0x349, 8),
            Varnode::constant(3, 8),
            Varnode::reg(16, 8),
            Varnode::reg(8, 8),
        ],
        0x1000,
    );
    let cas = IrInsn::with_output(
        IrOp::Callother,
        Varnode::reg(0, 8),
        smallvec![
            Varnode::constant(0x34B, 8),
            Varnode::constant(1, 8),
            Varnode::reg(0, 8),
            Varnode::reg(16, 8),
            Varnode::reg(8, 8),
        ],
        0x1004,
    );
    let output = print_c(&make_func(
        "a64_lse",
        vec![HirNode::Statement(add), HirNode::Statement(cas)],
    ));
    assert!(
        output.contains("atomic_fetch_add_explicit"),
        "LDADD should render as fetch_add: {output}"
    );
    assert!(
        output.contains("memory_order_acq_rel"),
        "LDADDAL order should be acq_rel: {output}"
    );
    assert!(
        output.contains("atomic_compare_exchange_strong_explicit"),
        "CAS should render as cmpxchg: {output}"
    );
}

// t225 — AArch64 PTR_AUTH Callother rendering
// -------------------------------------------------------------------

#[test]
fn test_callother_pacia_renders_as_pacia() {
    // Callother(0x40E /* PACIA */, X0, X1) → __pacia
    let r0 = reg(0, 8);
    let r1 = reg(8, 8);
    let tag = con(0x40E, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r0,
            smallvec![tag, r0, r1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 0,
        })),
    ];
    let func = make_func("pac_pacia", body);
    let output = print_c(&func);
    assert!(
        output.contains("__pacia("),
        "PACIA Callother should render as __pacia(...): {output}",
    );
    assert!(
        !output.contains("/* CALLOTHER"),
        "PACIA tag must be resolved (no fallback comment): {output}",
    );
}

#[test]
fn test_callother_pacib_renders_as_pacib() {
    let r2 = reg(16, 8);
    let r3 = reg(24, 8);
    let tag = con(0x40F, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r2,
            smallvec![tag, r2, r3],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r2,
            version: 0,
        })),
    ];
    let func = make_func("pac_pacib", body);
    let output = print_c(&func);
    assert!(output.contains("__pacib("), "got: {output}");
}

#[test]
fn test_callother_autia_renders_as_autia() {
    let r0 = reg(0, 8);
    let tag = con(0x412, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r0,
            smallvec![tag, r0, r0],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 0,
        })),
    ];
    let func = make_func("pac_autia", body);
    let output = print_c(&func);
    assert!(output.contains("__autia("), "got: {output}");
}

#[test]
fn test_callother_autib_renders_as_autib() {
    let r4 = reg(32, 8);
    let r5 = reg(40, 8);
    let tag = con(0x413, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r4,
            smallvec![tag, r4, r5],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r4,
            version: 0,
        })),
    ];
    let func = make_func("pac_autib", body);
    let output = print_c(&func);
    assert!(output.contains("__autib("), "got: {output}");
}

#[test]
fn test_callother_pacda_renders_as_pacda() {
    let r1 = reg(8, 8);
    let r2 = reg(16, 8);
    let tag = con(0x410, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r1,
            smallvec![tag, r1, r2],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r1,
            version: 0,
        })),
    ];
    let func = make_func("pac_pacda", body);
    let output = print_c(&func);
    assert!(output.contains("__pacda("), "got: {output}");
}

#[test]
fn test_callother_autdb_renders_as_autdb() {
    let r7 = reg(56, 8);
    let r8 = reg(64, 8);
    let tag = con(0x415, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r7,
            smallvec![tag, r7, r8],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r7,
            version: 0,
        })),
    ];
    let func = make_func("pac_autdb", body);
    let output = print_c(&func);
    assert!(output.contains("__autdb("), "got: {output}");
}

#[test]
fn test_callother_xpaci_renders_as_xpaci() {
    // XPAC* has no modifier — only (tag, value).
    let r9 = reg(72, 8);
    let tag = con(0x416, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r9,
            smallvec![tag, r9],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r9,
            version: 0,
        })),
    ];
    let func = make_func("pac_xpaci", body);
    let output = print_c(&func);
    assert!(output.contains("__xpaci("), "got: {output}");
}

#[test]
fn test_callother_xpacd_renders_as_xpacd() {
    let r10 = reg(80, 8);
    let tag = con(0x417, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            r10,
            smallvec![tag, r10],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r10,
            version: 0,
        })),
    ];
    let func = make_func("pac_xpacd", body);
    let output = print_c(&func);
    assert!(output.contains("__xpacd("), "got: {output}");
}

// -------------------------------------------------------------------
// P4-24: Constant folding tests
// -------------------------------------------------------------------

#[test]
fn test_xor_self_becomes_zero() {
    let r0 = reg(0, 4);
    let out = reg(8, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            out,
            smallvec![r0, r0],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("xor_self", body);
    let output = print_c(&func);

    // XOR(v, v) folds to the constant 0. The returned value may either be
    // materialised as `result = 0;` or folded straight into `return 0;`
    // (the latter matches Hex-Rays output and is what the returned-value
    // fold policy now produces for a single-def single-use value).
    assert!(
        output.contains("result = 0;") || output.contains("return 0;"),
        "XOR(v, v) should fold to 0: {output}",
    );
    // Whichever form, the `^` operator must not survive the fold. Check
    // the function body only — the IDA prelude macros legitimately use `^`.
    let body_text = function_body_text(&output, "xor_self");
    assert!(
        !body_text.contains('^'),
        "XOR-self should not contain ^ in body: {body_text}",
    );
}

#[test]
fn test_popcount_zero_folded() {
    let r0 = reg(0, 4);
    let zero = con(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Popcount,
            r0,
            smallvec![zero],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 4))),
    ];

    let func = make_func("popcount_zero", body);
    let output = print_c(&func);

    assert!(
        output.contains("result = 0;") || output.contains("return 0;"),
        "popcount(0) should fold to 0: {output}",
    );
    assert!(
        !output.contains("__builtin_popcount"),
        "should NOT emit __builtin_popcount call: {output}",
    );
}

#[test]
fn test_and_zero_folded() {
    let r0 = reg(0, 4);
    let out = reg(8, 4);
    let zero = con(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            out,
            smallvec![r0, zero],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("and_zero", body);
    let output = print_c(&func);

    // v & 0 folds to the constant 0, either materialised as `result = 0;`
    // or folded into `return 0;` under the returned-value fold policy.
    assert!(
        output.contains("result = 0;") || output.contains("return 0;"),
        "v & 0 should fold to 0: {output}",
    );
    assert!(
        !output.contains(" & 0"),
        "and-zero should not contain `& 0` in output: {output}",
    );
}

#[test]
fn test_or_zero_identity() {
    let r0 = reg(0, 4);
    let out = reg(8, 4);
    let zero = con(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntOr,
            out,
            smallvec![r0, zero],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: out,
            version: 0,
        })),
    ];

    let func = make_func("or_zero", body);
    let output = print_c(&func);

    // v | 0 folds to v, either materialised as `result = v1;` or folded
    // into `return v1;` under the returned-value fold policy.
    assert!(
        output.contains("result = v1;") || output.contains("return v1;"),
        "v | 0 should fold to v: {output}",
    );
    // Whichever form, the `|` operator must not survive the fold. Check
    // the function body only — the IDA prelude macros legitimately use `|`.
    let body_text = function_body_text(&output, "or_zero");
    assert!(
        !body_text.contains('|'),
        "or-zero should not contain | in body: {body_text}",
    );
}

// -------------------------------------------------------------------
// P4-25: nullptr and literal suffix tests
// -------------------------------------------------------------------

#[test]
fn test_nullptr_in_pointer_context() {
    let r0 = reg(0, 8);
    let r8 = reg(8, 1);
    let zero = con(0, 8);

    let cmp = IrInsn::with_output(IrOp::IntEqual, r8, smallvec![r0, zero], 0x1000);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Ptradd,
            r0,
            smallvec![r0, zero],
            0x0FF0,
        )),
        HirNode::Statement(cmp),
        HirNode::Return(Some(SsaVarnode {
            base: r8,
            version: 0,
        })),
    ];

    let func = make_func("nullptr_test", body);
    let output = print_c(&func);

    assert!(
        output.contains("nullptr"),
        "comparison of pointer with 0 should emit nullptr: {output}",
    );
}

#[test]
fn test_64bit_literal_suffix() {
    let r0 = reg(0, 8);
    let big = con(0x1000, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, big],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("ll_suffix", body);
    let output = print_c(&func);

    assert!(
        output.contains("0x1000LL"),
        "64-bit literal should have LL suffix: {output}",
    );
}

#[test]
fn test_unsigned_literal_suffix() {
    assert_eq!(
        super::format_constant_ctx(5, 8, super::ConstContext::Unsigned),
        "5ULL",
    );
    assert_eq!(
        super::format_constant_ctx(5, 4, super::ConstContext::Unsigned),
        "5u",
    );
    assert_eq!(
        super::format_constant_ctx(0x100, 8, super::ConstContext::Unsigned),
        "0x100ULL",
    );
    assert_eq!(
        super::format_constant_ctx(0x100, 4, super::ConstContext::Unsigned),
        "0x100u",
    );
}

// -------------------------------------------------------------------
// char literal rendering
// -------------------------------------------------------------------

#[test]
fn test_format_char_literal_printable() {
    assert_eq!(
        super::format_char_literal(0x41, false).as_deref(),
        Some("'A'"),
    );
    assert_eq!(
        super::format_char_literal(0x62, false).as_deref(),
        Some("'b'"),
    );
    assert_eq!(
        super::format_char_literal(0x2B, false).as_deref(),
        Some("'+'"),
    );
    assert_eq!(
        super::format_char_literal(0x20, false).as_deref(),
        Some("' '"),
    );
    assert_eq!(
        super::format_char_literal(0x7E, false).as_deref(),
        Some("'~'"),
    );
}

#[test]
fn test_format_char_literal_escapes() {
    assert_eq!(
        super::format_char_literal(0x00, false).as_deref(),
        Some("'\\0'"),
    );
    assert_eq!(
        super::format_char_literal(0x07, false).as_deref(),
        Some("'\\a'"),
    );
    assert_eq!(
        super::format_char_literal(0x08, false).as_deref(),
        Some("'\\b'"),
    );
    assert_eq!(
        super::format_char_literal(0x09, false).as_deref(),
        Some("'\\t'"),
    );
    assert_eq!(
        super::format_char_literal(0x0A, false).as_deref(),
        Some("'\\n'"),
    );
    assert_eq!(
        super::format_char_literal(0x0B, false).as_deref(),
        Some("'\\v'"),
    );
    assert_eq!(
        super::format_char_literal(0x0C, false).as_deref(),
        Some("'\\f'"),
    );
    assert_eq!(
        super::format_char_literal(0x0D, false).as_deref(),
        Some("'\\r'"),
    );
    assert_eq!(
        super::format_char_literal(0x27, false).as_deref(),
        Some("'\\''"),
    );
    assert_eq!(
        super::format_char_literal(0x5C, false).as_deref(),
        Some("'\\\\'"),
    );
}

#[test]
fn test_format_char_literal_hex_escape() {
    assert_eq!(
        super::format_char_literal(0xFF, true).as_deref(),
        Some("'\\xff'"),
    );
    assert_eq!(
        super::format_char_literal(0x01, false).as_deref(),
        Some("'\\x01'"),
    );
    assert_eq!(
        super::format_char_literal(0x7F, false).as_deref(),
        Some("'\\x7f'"),
    );
}

#[test]
fn test_format_char_literal_out_of_range() {
    assert_eq!(super::format_char_literal(0x80, false), None);
    assert_eq!(super::format_char_literal(0xFF, false), None);
    assert_eq!(super::format_char_literal(0x100, true), None);
    assert_eq!(super::format_char_literal(0x1000, true), None);
}

#[test]
fn test_format_constant_char_context() {
    assert_eq!(
        super::format_constant_ctx(0x41, 1, super::ConstContext::Char { unsigned: false }),
        "'A'",
    );
    assert_eq!(
        super::format_constant_ctx(0x0A, 1, super::ConstContext::Char { unsigned: false }),
        "'\\n'",
    );
    assert_eq!(
        super::format_constant_ctx(0x00, 1, super::ConstContext::Char { unsigned: false }),
        "'\\0'",
    );
    assert_eq!(
        super::format_constant_ctx(0xFF, 1, super::ConstContext::Char { unsigned: true }),
        "'\\xff'",
    );
}

#[test]
fn test_format_constant_int_context_keeps_integer() {
    let rendered = super::format_constant_ctx(0x41, 4, super::ConstContext::Signed);
    assert!(
        !rendered.starts_with('\''),
        "0x41 in Signed context must not become a char literal: {rendered}",
    );
    assert_eq!(rendered, "0x41");
    assert_eq!(
        super::format_constant_ctx(0, 4, super::ConstContext::Signed),
        "0",
    );
    assert_eq!(
        super::format_constant_ctx(0, 1, super::ConstContext::Signed),
        "0",
    );
}

#[test]
fn test_format_constant_char_context_falls_through_when_oversized() {
    assert_eq!(
        super::format_constant_ctx(0x41, 4, super::ConstContext::Char { unsigned: false }),
        "0x41",
    );
    assert_eq!(
        super::format_constant_ctx(0x80, 1, super::ConstContext::Char { unsigned: false }),
        "0x80ULL",
    );
}

#[test]
fn test_format_constant_quote_and_backslash() {
    assert_eq!(
        super::format_constant_ctx(0x27, 1, super::ConstContext::Char { unsigned: false }),
        "'\\''",
    );
    assert_eq!(
        super::format_constant_ctx(0x5C, 1, super::ConstContext::Char { unsigned: false }),
        "'\\\\'",
    );
}

#[test]
fn test_nullptr_copy_to_pointer() {
    let ptr_vn = reg(0, 8);
    let zero = con(0, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Ptradd,
            ptr_vn,
            smallvec![ptr_vn, zero],
            0x0FF0,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            ptr_vn,
            smallvec![zero],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("nullptr_copy", body);
    let output = print_c(&func);

    assert!(
        output.contains("nullptr"),
        "COPY of 0 to pointer variable should emit nullptr: {output}",
    );
}

// ── P4-14: Switch fall-through tests ──

#[test]
fn test_switch_normal_has_break() {
    // Batch 9 slice 2: bodies that don't already terminate must each
    // be followed by an explicit `break;` so control doesn't fall
    // through. Use a non-terminating Statement body (IntAdd) so the
    // printer emits a break — return-bodies are exercised by
    // `test_switch_return_suppresses_break`.
    let stmt = HirNode::Statement(IrInsn::with_output(
        IrOp::IntAdd,
        reg(0, 8),
        smallvec![reg(0, 8), con(1, 8)],
        0,
    ));
    let body = vec![HirNode::Switch {
        cond: sv(0, 8),
        cases: vec![
            (SwitchCase::Value(0), vec![stmt.clone()], false),
            (SwitchCase::Value(1), vec![stmt], false),
        ],
        default: None,
        jumptable_addr: None,
        jumptable_cases: None,
    }];

    let func = make_func("switch_break", body);
    let output = print_c(&func);

    let break_count = output.matches("break;").count();
    assert!(
        break_count >= 2,
        "each non-fallthrough non-terminating case should have break;, got {break_count} in:\n{output}",
    );
    assert!(
        !output.contains("fall through"),
        "normal cases should not have fall-through comment:\n{output}",
    );
}

#[test]
fn test_switch_stacked_case_labels() {
    // Batch 9 slice 2: `fall_through=true` with an empty body is a
    // stacked case-label group (case 0: case 1: handler;). The
    // printer emits *just* the `case 0:` line with no `/* fall
    // through */` comment and no `break;`, because the next case
    // label immediately follows.
    let body = vec![HirNode::Switch {
        cond: sv(0, 8),
        cases: vec![
            (SwitchCase::Value(0), vec![], true),
            (SwitchCase::Value(1), vec![HirNode::Return(None)], false),
        ],
        default: None,
        jumptable_addr: None,
        jumptable_cases: None,
    }];

    let func = make_func("switch_ft", body);
    let output = print_c(&func);

    let lines: Vec<&str> = output.lines().collect();
    let case0_line = lines.iter().position(|l| l.contains("case 0:")).unwrap();
    let case1_line = lines.iter().position(|l| l.contains("case 1:")).unwrap();

    let between = &lines[case0_line..case1_line];
    assert!(
        !between.iter().any(|l| l.trim() == "break;"),
        "stacked case label run should NOT have break; between case labels:\n{output}",
    );
    assert!(
        !between.iter().any(|l| l.contains("fall through")),
        "stacked case-label group (empty body) should NOT emit a fall-through comment:\n{output}",
    );
}

#[test]
fn test_switch_return_suppresses_break() {
    // Batch 9 slice 2: when a case body terminates with `return;`,
    // the printer must NOT append a redundant `break;` — that would
    // produce unreachable code and trip "statement after return"
    // warnings.
    let body = vec![HirNode::Switch {
        cond: sv(0, 8),
        cases: vec![(SwitchCase::Value(0), vec![HirNode::Return(None)], false)],
        default: None,
        jumptable_addr: None,
        jumptable_cases: None,
    }];

    let func = make_func("switch_ret_no_break", body);
    let output = print_c(&func);

    let lines: Vec<&str> = output.lines().collect();
    let case_line = lines.iter().position(|l| l.contains("case 0:")).unwrap();
    let close_brace = lines[case_line..]
        .iter()
        .position(|l| l.trim() == "}")
        .map(|p| p + case_line)
        .unwrap_or(lines.len());
    let segment = &lines[case_line..close_brace];
    assert!(
        !segment.iter().any(|l| l.trim() == "break;"),
        "case 0 ends in return; must not also emit break;:\n{output}",
    );
}

// -------------------------------------------------------------------
// P4-22: Register/stack variable comment tests
// -------------------------------------------------------------------

#[test]
fn test_register_comment_rax() {
    let r0 = reg(0, 8);
    let c1 = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("reg_comment", body);
    let output = print_c(&func);

    let decl_line = output
        .lines()
        .find(|l| l.contains("result;") || l.contains("result ;"))
        .expect("should find result declaration");
    assert!(
        decl_line.contains("// rax"),
        "register var at offset 0, size 8 should have `// rax` comment: {decl_line}",
    );
}

#[test]
fn test_stack_comment() {
    let stk = Varnode::stack(0x20, 8);
    let c1 = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            stk,
            smallvec![stk, c1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: stk,
            version: 0,
        })),
    ];

    let func = make_func("stack_comment", body);
    let output = print_c(&func);

    let decl_line = output
        .lines()
        .find(|l| l.contains("// [rsp+20h]"))
        .expect("should find stack declaration");
    assert!(
        decl_line.contains("// [rsp+20h]"),
        "stack var at offset 0x20 should have `// [rsp+20h]` comment: {decl_line}",
    );
}

#[test]
fn test_dwarf_local_name_used_for_stack_var() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo, LocalVariable};

    let stk = Varnode::stack(0x10, 8);
    let one = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            stk,
            smallvec![stk, one],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: stk,
            version: 0,
        })),
    ];

    let func = make_func("with_named_local", body);
    let header = super::FunctionHeaderInfo {
        name: "with_named_local".to_string(),
        address: 0x1000,
        size: 0x40,
        convention: "System V AMD64".to_string(),
        stack_frame: 0x60,
        callees: vec![],
        dynamic_sp: false,
    };

    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "with_named_local".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1040),
            ranges: vec![],
            params: vec![],
            return_type: Some("long long".to_string()),
            decl: None,
            locals: vec![LocalVariable {
                name: "counter".to_string(),
                type_name: Some("long long".to_string()),
                frame_offset: Some(-0x50),
                locations: vec![],
                locations_dwarf_v5: vec![],
            }],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);

    assert!(
        output.contains(" counter;") || output.contains(" counter "),
        "DWARF local name 'counter' should be used: {output}",
    );
    assert!(
        !output.contains(" v1;") && !output.contains(" v1 "),
        "should not fall back to vN when DWARF supplies a name: {output}",
    );
}

#[test]
fn test_dwarf_v5_location_list_local_name_used_for_stack_var() {
    use std::collections::BTreeMap;
    use unlace_loader::{DwarfInfo, FunctionDebugInfo, LocalVariable, SimpleLocation};

    let stk = Varnode::stack(0x20, 4);
    let seven = con(7, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            stk,
            smallvec![stk, seven],
            0x1010,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: stk,
            version: 0,
        })),
    ];

    let func = make_func("with_loclist_local", body);
    let header = super::FunctionHeaderInfo {
        name: "with_loclist_local".to_string(),
        address: 0x1000,
        size: 0x40,
        convention: "System V AMD64".to_string(),
        stack_frame: 0x60,
        callees: vec![],
        dynamic_sp: false,
    };

    let mut functions = BTreeMap::new();
    functions.insert(
        0x1000,
        FunctionDebugInfo {
            name: "with_loclist_local".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1040),
            ranges: vec![],
            params: vec![],
            return_type: Some("int".to_string()),
            decl: None,
            locals: vec![LocalVariable {
                name: "scratch".to_string(),
                type_name: Some("int".to_string()),
                frame_offset: None,
                locations: vec![],
                locations_dwarf_v5: vec![(
                    gimli::Range {
                        begin: 0x1000,
                        end: 0x1040,
                    },
                    SimpleLocation::FrameOffset(-0x40),
                )],
            }],
            cfa_to_rbp_delta: None,
        },
    );
    let dwarf = DwarfInfo {
        functions,
        source_map: BTreeMap::new(),
        structs: BTreeMap::new(),
        enums: BTreeMap::new(),
        unions: BTreeMap::new(),
        macros: vec![],
        languages: std::collections::BTreeSet::new(),
        dwo_references: vec![],
    };

    let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);

    assert!(
        output.contains("int scratch;") || output.contains(" scratch "),
        "DWARF v5 loclist local name/type should be used in final output: {output}",
    );
    assert!(
        !output.contains(" v1;") && !output.contains(" v1 "),
        "loclist-backed DWARF local must not fall back to vN: {output}",
    );
}

#[test]
fn test_byref_annotation_for_address_taken_stack_var() {
    let rsp = reg(32, 8);
    let off = con(0x58, 8);
    let addr = Varnode::unique(0x100, 8);
    let target = con(0x401000, 8);
    let stk = Varnode::stack(0x58, 8);
    let one = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, stk, smallvec![one], 0x0FFC)),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![rsp, off],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![target, addr],
            0x1004,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("byref_caller", body);
    let header = super::FunctionHeaderInfo {
        name: "byref_caller".to_string(),
        address: 0x1000,
        size: 0x40,
        convention: "System V AMD64".to_string(),
        stack_frame: 0xa0,
        callees: vec![],
        dynamic_sp: false,
    };
    let output = super::print_c_full(&func, None, Some(&header), None, None);

    assert!(
        output.contains("BYREF"),
        "address-taken stack slot at rsp+58h should be BYREF: {output}",
    );
    let byref_line = output
        .lines()
        .find(|l| l.contains("BYREF"))
        .expect("BYREF declaration line");
    assert!(
        byref_line.contains("[rsp+58h]"),
        "BYREF line should reference [rsp+58h]: {byref_line}",
    );
}

// ---------------------------------------------------------------------
// t232: stack-frame local declarations
// ---------------------------------------------------------------------

#[test]
fn test_t232_stack_frame_emits_named_local_decls() {
    // Two recovered 4-byte locals at offsets -8 and -16 → output
    // contains `int v_8;` and `int v_16;` declarations.
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let mut func = make_func("t232_decls", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    locals.insert(
        -16,
        StackLocal {
            offset: -16,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 16,
        max_pos_offset: 0,
        min_neg_offset: -16,
    });

    let output = print_c(&func);
    assert!(
        output.contains("int v_8;"),
        "expected `int v_8;` decl, got:\n{output}",
    );
    assert!(
        output.contains("int v_16;"),
        "expected `int v_16;` decl, got:\n{output}",
    );
}

#[test]
fn test_t232_single_int_stack_buffer_emits_int_array_buf() {
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let mut func = make_func("t232_int_array_buf", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        0,
        StackLocal {
            offset: 0,
            size: 64,
            access_widths: vec![4, 16],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 64,
        max_pos_offset: 64,
        min_neg_offset: 0,
    });

    let mut ann = super::PrinterAnnotations::default();
    ann.stack_lvars.insert(
        0,
        super::StackLvarAnnotation {
            name: "buf_0".to_string(),
            c_type: None,
            ty: Some(unlace_ir::types::TypeKind::VoidPtr),
            size: 64,
            source_byte_size: None,
            raw_span: None,
            calibrated_span: None,
            is_buffer: true,
            from_debug: false,
        },
    );
    for offset in [16, 32, 48] {
        ann.stack_lvars.insert(
            offset,
            super::StackLvarAnnotation {
                name: format!("buf_{offset}"),
                c_type: None,
                ty: Some(unlace_ir::types::TypeKind::Int),
                size: 4,
                source_byte_size: None,
                raw_span: None,
                calibrated_span: None,
                is_buffer: false,
                from_debug: false,
            },
        );
    }

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("char buf[64]; // int buf[16]"),
        "64-byte stack storage should stay byte-addressed while surfacing `int buf[16]`: {output}",
    );
    assert!(
        !output.contains("buf_0"),
        "single stack buffer should use canonical `buf` name: {output}",
    );
}

#[test]
fn test_t232_stack_frame_access_uses_recovered_name() {
    // Access `*(rsp+offset)` after a recovered local at the same offset
    // should render as the local's name instead of the synthetic `vN`.
    use unlace_ir::ssa::{StackFrame, StackLocal};

    // Use a *positive* RSP-relative offset (8) because stack varnodes
    // store their offset as u64 — the same convention the recovery
    // pass uses when a `SpaceId::Stack` varnode appears directly.
    let stk = Varnode::stack(8, 4);
    let five = con(5, 4);
    let r0 = reg(0, 4);

    // Write 5 to the stack slot, then read it twice so the folder
    // can't inline the constant and the named assignment survives.
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            stk,
            smallvec![five],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![stk, stk],
            0x1004,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 1,
        })),
    ];
    let mut func = make_func("t232_access", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        8,
        StackLocal {
            offset: 8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 12,
        min_neg_offset: 0,
    });

    let output = print_c(&func);
    // Body should refer to `v_8` (the recovered name), not `v1` etc.
    assert!(
        output.contains("v_8 = 5"),
        "expected `v_8 = 5` assignment, got:\n{output}",
    );
}

#[test]
fn test_t232_rsp_derived_store_uses_recovered_stack_name() {
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let rsp = reg(32, 8);
    let addr = Varnode::unique(0x100, 8);
    let ram = con(1, 8);
    let five = con(5, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![rsp, con(8, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, addr, five],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let mut func = make_func("t232_rsp_store", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 4,
        max_pos_offset: -4,
        min_neg_offset: -8,
    });

    let output = print_c(&func);
    assert!(
        output.contains("v_8 = 5;"),
        "RSP-derived store should render as recovered stack local: {output}",
    );
    assert!(
        !output.contains("*(int *)(0LL)") && !output.contains("*(_DWORD *)(0LL)"),
        "RSP-derived stack store must not fall back to a null deref: {output}",
    );
}

#[test]
fn return_address_load_through_rsp_is_not_printed_as_stack_carrier() {
    let rsp = reg(32, 8);
    let loaded = Varnode::unique(0x100, 8);
    let rbx = reg(24, 8);
    let ram = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram, rsp],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            rbx,
            smallvec![loaded],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let output = print_c(&make_func("return_addr_load", body));

    assert!(
        !output.contains("*(_QWORD *)(c") && !output.contains("*(__int64 *)(c"),
        "return-address stack load must not print an rsp carrier dereference: {output}"
    );
    assert!(
        !output.contains("// rsp"),
        "rsp carrier declaration should be pruned with its ABI-owned load: {output}"
    );
}

#[test]
fn test_start_stack_alignment_temp_is_not_suppressed_as_frame_setup() {
    use super::{PrintCtx, is_transient_x86_frame_base_update};

    let rsp = reg(32, 8);
    let align_tmp = Varnode::unique(0x100, 8);
    let align_sv = SsaVarnode {
        base: align_tmp,
        version: 0,
    };
    let copy_back = IrInsn::with_output(IrOp::Copy, rsp, smallvec![align_tmp], 0x1052);
    let mut ctx = PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    ctx.stmt_outputs.insert(7, Some(align_sv));
    ctx.stmt_insns.insert(8, copy_back.clone());
    ctx.stmt_inputs.insert(8, vec![align_sv]);
    ctx.sv_use_counts.insert(align_sv, 1);

    let insn = IrInsn::with_output(IrOp::IntSub, align_tmp, smallvec![rsp, con(8, 8)], 0x1052);
    assert!(
        is_transient_x86_frame_base_update(&insn, 7, &ctx),
        "single-use temp copied back to rsp is transient frame setup",
    );

    ctx.stmt_insns.insert(
        9,
        IrInsn::without_output(IrOp::Call, smallvec![con(0x400000, 8), align_tmp], 0x1053),
    );
    ctx.stmt_inputs.insert(9, vec![align_sv]);
    ctx.sv_use_counts.insert(align_sv, 2);
    assert!(
        !is_transient_x86_frame_base_update(&insn, 7, &ctx),
        "multi-use stack alignment temp must remain visible",
    );
}

#[test]
fn test_t232_stack_lvar_annotation_supplies_name_and_decl_type() {
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let rsp = reg(32, 8);
    let addr = Varnode::unique(0x100, 8);
    let ram = con(1, 8);
    let five = con(5, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![rsp, con(8, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, addr, five],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let mut func = make_func("t232_lvar_name", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 4,
        max_pos_offset: -4,
        min_neg_offset: -8,
    });

    let mut ann = super::PrinterAnnotations::default();
    ann.stack_lvars.insert(
        -8,
        super::StackLvarAnnotation {
            name: "counter".to_string(),
            c_type: Some("int".to_string()),
            ty: Some(unlace_ir::types::TypeKind::Int),
            size: 4,
            source_byte_size: None,
            raw_span: None,
            calibrated_span: None,
            is_buffer: false,
            from_debug: true,
        },
    );

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("int counter;"),
        "stack lvar annotation should drive declaration: {output}",
    );
    assert!(
        output.contains("counter = 5;"),
        "stack lvar annotation should drive stack access name: {output}",
    );
    assert!(
        !output.contains("v_8"),
        "printer should not fall back to synthetic stack name: {output}",
    );
}

#[test]
fn stack_lvar_annotations_export_pending_dwarf_aggregate_metadata() {
    use unlace_ir::ssa::{DwarfStackLocalSpan, PendingDwarfLocal};

    let mut ssa = empty_ssa_for_preamble();
    ssa.pending_dwarf_locals.push(PendingDwarfLocal {
        frame_offset: -40,
        name: "values".to_string(),
        type_name: Some("int[3]".to_string()),
        byte_size: Some(12),
        raw_span: Some(DwarfStackLocalSpan {
            start: -40,
            byte_size: 12,
        }),
        calibrated_span: Some(DwarfStackLocalSpan {
            start: -24,
            byte_size: 12,
        }),
        cfa_to_rbp_delta: Some(16),
        is_aggregate: true,
        is_param: false,
    });

    let annotations = super::stack_lvar_annotations_from_ssa(&ssa);
    let values = annotations
        .get(&-40)
        .expect("pending aggregate should be visible to printer annotation consumers");
    assert_eq!(values.name, "values");
    assert_eq!(values.c_type.as_deref(), Some("int[3]"));
    assert_eq!(values.size, 12);
    assert_eq!(values.source_byte_size, Some(12));
    assert_eq!(
        values.raw_span,
        Some(DwarfStackLocalSpan {
            start: -40,
            byte_size: 12,
        })
    );
    assert_eq!(
        values.calibrated_span,
        Some(DwarfStackLocalSpan {
            start: -24,
            byte_size: 12,
        })
    );
    assert!(values.is_buffer);
    assert!(values.from_debug);
}

#[test]
fn stack_lvar_annotations_preserve_overlapping_aggregate_identities() {
    use unlace_ir::ssa::{DwarfStackLocalSpan, PendingDwarfLocal};

    let mut ssa = empty_ssa_for_preamble();
    ssa.pending_dwarf_locals.push(PendingDwarfLocal {
        frame_offset: -48,
        name: "p".to_string(),
        type_name: Some("Outer".to_string()),
        byte_size: Some(16),
        raw_span: Some(DwarfStackLocalSpan {
            start: -48,
            byte_size: 16,
        }),
        calibrated_span: Some(DwarfStackLocalSpan {
            start: -32,
            byte_size: 16,
        }),
        cfa_to_rbp_delta: Some(16),
        is_aggregate: true,
        is_param: false,
    });
    ssa.pending_dwarf_locals.push(PendingDwarfLocal {
        frame_offset: -40,
        name: "values".to_string(),
        type_name: Some("int[3]".to_string()),
        byte_size: Some(12),
        raw_span: Some(DwarfStackLocalSpan {
            start: -40,
            byte_size: 12,
        }),
        calibrated_span: Some(DwarfStackLocalSpan {
            start: -24,
            byte_size: 12,
        }),
        cfa_to_rbp_delta: Some(16),
        is_aggregate: true,
        is_param: false,
    });

    let annotations = super::stack_lvar_annotations_from_ssa(&ssa);
    assert_eq!(
        annotations.len(),
        2,
        "overlapping source aggregates must not merge: {annotations:?}"
    );
    let p = annotations.get(&-48).expect("outer aggregate annotation");
    let values = annotations
        .get(&-40)
        .expect("inner overlapping aggregate annotation");

    assert_eq!(p.name, "p");
    assert_eq!(p.c_type.as_deref(), Some("Outer"));
    assert_eq!(
        p.raw_span.map(|span| (span.start, span.byte_size)),
        Some((-48, 16))
    );
    assert_eq!(values.name, "values");
    assert_eq!(values.c_type.as_deref(), Some("int[3]"));
    assert_eq!(
        values.raw_span.map(|span| (span.start, span.byte_size)),
        Some((-40, 12))
    );
    assert!(
        p.raw_span.expect("p raw span").start + p.source_byte_size.expect("p size") as i64
            > values.raw_span.expect("values raw span").start,
        "test fixture must exercise overlapping raw source spans"
    );
}

#[test]
fn test_t232_aggregate_annotation_marks_buffer_decl_with_source_type() {
    use unlace_ir::ssa::{DwarfStackLocalSpan, StackFrame, StackLocal};

    let mut func = make_func("t232_aggregate_buffer_decl", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        -48,
        StackLocal {
            offset: -48,
            size: 32,
            access_widths: vec![8],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 32,
        max_pos_offset: 0,
        min_neg_offset: -48,
    });

    let mut ann = super::PrinterAnnotations::default();
    ann.stack_lvars.insert(
        -48,
        super::StackLvarAnnotation {
            name: "p".to_string(),
            c_type: Some("Pair".to_string()),
            ty: None,
            size: 32,
            source_byte_size: Some(8),
            raw_span: Some(DwarfStackLocalSpan {
                start: -48,
                byte_size: 8,
            }),
            calibrated_span: Some(DwarfStackLocalSpan {
                start: -32,
                byte_size: 8,
            }),
            is_buffer: true,
            from_debug: true,
        },
    );

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("char p[32]; // source: Pair p (8 bytes)"),
        "aggregate source type/name should be attached to widened byte storage: {output}",
    );
}

#[test]
fn test_t232_multi_use_rsp_derived_store_uses_recovered_stack_name() {
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let rsp = reg(32, 8);
    let addr = Varnode::unique(0x100, 8);
    let ram = con(1, 8);
    let five = con(5, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![rsp, con(8, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            rsp,
            smallvec![addr],
            0x1002,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, addr, five],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let mut func = make_func("t232_rsp_store_multi_use", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 4,
        max_pos_offset: -4,
        min_neg_offset: -8,
    });

    let output = print_c(&func);
    assert!(
        output.contains("v_8 = 5;"),
        "multi-use RSP-derived store should still render as recovered stack local: {output}",
    );
    assert!(
        !output.contains("*(_DWORD *)") && !output.contains("*(int *)"),
        "multi-use RSP-derived stack store must not fall back to a raw pointer store: {output}",
    );
}

#[test]
fn test_t232_saved_register_stack_store_is_suppressed() {
    use unlace_ir::ssa::{FrameSlotKind, StackFrame, StackLocal};

    let rsp = reg(32, 8);
    let rbp = reg(40, 8);
    let addr = Varnode::unique(0x100, 8);
    let ram = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![rsp, con(8, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, addr, rbp],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let mut func = make_func("t232_saved_reg_store", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 8,
            access_widths: vec![8],
            kind: FrameSlotKind::SavedRegister,
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 0,
        min_neg_offset: -8,
    });

    let output = print_c(&func);
    assert!(
        !output.contains("v_8;"),
        "saved-register slot should not be declared as a source local: {output}",
    );
    assert!(
        !output.contains("*(_QWORD *)") && !output.contains("*(__int64 *)"),
        "saved-register stack store should not render as a raw pointer store: {output}",
    );
}

#[test]
fn stack_arg_stack_frame_slot_is_not_declared_as_local() {
    use unlace_ir::ssa::{FrameSlotKind, StackFrame, StackLocal};

    let mut func = make_func("stack_arg_slot", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        16,
        StackLocal {
            offset: 16,
            size: 8,
            access_widths: vec![8],
            kind: FrameSlotKind::StackArg,
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 24,
        min_neg_offset: 16,
    });

    let output = print_c(&func);
    assert!(
        !output.contains("v_16;"),
        "stack-argument slot should not be declared as a source local: {output}",
    );
    assert!(
        !output.contains("__int64 v_16;") && !output.contains("int v_16;"),
        "stack-argument slot should not surface in local declarations: {output}",
    );
}

#[test]
fn accessed_stack_arg_slot_is_not_synthesized_as_local() {
    use unlace_ir::ssa::{FrameSlotKind, StackFrame, StackLocal};

    let rsp = reg(32, 8);
    let addr = Varnode::unique(0x100, 8);
    let callee = con(0x2000, 8);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![rsp, con(16, 8)],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![callee, addr],
            0x1004,
        )),
        HirNode::Return(None),
    ];
    let mut func = make_func("accessed_stack_arg_slot", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        16,
        StackLocal {
            offset: 16,
            size: 8,
            access_widths: vec![8],
            kind: FrameSlotKind::StackArg,
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 24,
        min_neg_offset: 16,
    });

    let output = print_c(&func);
    assert!(
        !output.contains("v_16"),
        "accessed stack-argument slot must not be synthesized as a source local: {output}",
    );
}

#[test]
fn test_t232_no_stack_frame_emits_no_decls() {
    // Function with `stack_frame: None` should emit no `__intN v_*;`
    // declarations from the new pathway.
    let func = make_func("t232_empty", vec![HirNode::Return(None)]);
    let output = print_c(&func);
    assert!(
        !output.contains("int v_"),
        "expected no synthesized stack-frame decls, got:\n{output}",
    );
    assert!(
        !output.contains("__int64 v_"),
        "expected no synthesized stack-frame decls, got:\n{output}",
    );
    assert!(
        !output.contains("char buf_"),
        "expected no synthesized stack-frame decls, got:\n{output}",
    );
}

#[test]
fn dynamic_alloca_header_does_not_synthesize_fixed_stack_decls() {
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    let mut block = BasicBlock::new(BlockId(0));
    block.insns.push(IrInsn::without_output(
        IrOp::Return,
        smallvec![Varnode::constant(0, 8)],
        0x1000,
    ));
    let mut ir_func = Function::new("dynamic_alloca", BlockId(0), 0x1000);
    ir_func.insert_block(block);
    let mut ssa = build_ssa(ir_func);
    ssa.dynamic_sp = true;

    let header = super::FunctionHeaderInfo::from_ssa(&ssa, &BTreeMap::new());
    assert!(header.dynamic_sp);
    assert_eq!(header.stack_frame, 0);

    let func = make_func("dynamic_alloca", vec![HirNode::Return(None)]);
    let output = super::print_c_full(&func, None, Some(&header), None, None);
    assert!(
        output.contains("// alloca / dynamic stack"),
        "dynamic stack should be explicit without inventing fixed locals: {output}"
    );
    assert!(
        !output.contains("int v_")
            && !output.contains("__int64 v_")
            && !output.contains("char buf_"),
        "dynamic alloca header must not synthesize fixed stack decls: {output}"
    );
}

#[test]
fn test_t232_array_slot_renders_as_buf() {
    // A `StackLocal` whose size exceeds 8 bytes is rendered as a
    // `char buf[size];` declaration when it is the only visible buffer.
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let mut func = make_func("t232_array", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        -32,
        StackLocal {
            offset: -32,
            size: 16,
            access_widths: vec![1],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 32,
        max_pos_offset: 0,
        min_neg_offset: -32,
    });

    let output = print_c(&func);
    assert!(
        output.contains("char buf[16];"),
        "expected `char buf[16];` decl, got:\n{output}",
    );
}

// ---------------------------------------------------------------------
// t233: BYREF annotations on params + stack locals
// ---------------------------------------------------------------------

#[test]
fn test_t233_byref_param_renders_annotation() {
    // A parameter whose index is in `func.byref_params` should
    // render with a trailing `/* BYREF */` comment in the signature.
    let mut func = make_func("t233_byref_param", vec![HirNode::Return(None)]);
    func.params = vec![("a".to_string(), PrimitiveType::Int(4))];
    func.byref_params.insert(0);

    let output = print_c(&func);
    let sig_line = output
        .lines()
        .find(|l| l.contains("t233_byref_param("))
        .expect("expected to find the function signature line");
    assert!(
        sig_line.contains("/* BYREF */"),
        "expected `/* BYREF */` after the param, got:\n{sig_line}",
    );
}

#[test]
fn test_t233_byref_local_renders_annotation() {
    // A stack local whose offset is in `func.byref_locals` should
    // render with a trailing `/* BYREF */` on its declaration.
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let mut func = make_func("t233_byref_local", vec![HirNode::Return(None)]);
    let mut locals = BTreeMap::new();
    locals.insert(
        -8,
        StackLocal {
            offset: -8,
            size: 4,
            access_widths: vec![4],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 0,
        min_neg_offset: -8,
    });
    func.byref_locals.insert(-8);

    let output = print_c(&func);
    let decl_line = output
        .lines()
        .find(|l| l.contains("v_8"))
        .expect("expected to find `v_8` declaration line");
    assert!(
        decl_line.contains("/* BYREF */"),
        "expected `/* BYREF */` on the local decl, got:\n{decl_line}",
    );
}

#[test]
fn test_objc_block_capture_with_int_byref() {
    // t184: a block whose captured varnode is recorded as a __block
    // box in `func.byref_boxes` should be rendered as
    // `__block int name` inside the block-literal's captures list.
    use unlace_ir::ssa::ByrefBox;
    use unlace_ir::types::Type;
    use unlace_struct::ObjcBlockCapture;

    let captured_base = Varnode::stack(0x30, 8);
    let captured_sv = SsaVarnode {
        base: captured_base,
        version: 1,
    };

    let body = vec![HirNode::ObjcBlock {
        invoke: 0x401000,
        captures: vec![ObjcBlockCapture::resolved("counter", captured_sv)],
    }];

    let mut func = make_func("with_byref", body);
    func.byref_boxes.insert(
        captured_base,
        ByrefBox {
            captured_type: Type::int(4),
            captured_value_sv: captured_sv,
            captured_offset: 24,
            captured_store_loc: (unlace_ir::BlockId(0), 0),
        },
    );

    let output = print_c(&func);
    assert!(
        output.contains("__block int counter"),
        "byref capture should render as `__block int counter`: {output}",
    );
    assert!(
        output.contains("invoke=0x401000"),
        "block-invoke address should still appear: {output}",
    );
}

#[test]
fn test_objc_block_capture_without_byref_renders_plainly() {
    // t184: a block capture whose SSA varnode is NOT in
    // `func.byref_boxes` should fall back to the plain capture name
    // (no `__block T` decoration).
    use unlace_struct::ObjcBlockCapture;

    let captured_sv = SsaVarnode {
        base: Varnode::reg(0, 8),
        version: 0,
    };

    let body = vec![HirNode::ObjcBlock {
        invoke: 0x402000,
        captures: vec![
            ObjcBlockCapture::resolved("plain_a", captured_sv),
            ObjcBlockCapture::unresolved("plain_b"),
        ],
    }];

    let func = make_func("without_byref", body);
    let output = print_c(&func);

    assert!(
        output.contains("captures=[plain_a, plain_b]"),
        "captures with no byref match should render as plain names: {output}",
    );
    assert!(
        !output.contains("__block"),
        "no `__block` decoration expected when byref_boxes is empty: {output}",
    );
}

#[test]
fn test_stack_comment_with_rbp_offset() {
    let stk = Varnode::stack(0x10, 8);
    let c1 = con(1, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            stk,
            smallvec![stk, c1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: stk,
            version: 0,
        })),
    ];

    let func = make_func("stack_rbp_comment", body);
    let header = super::FunctionHeaderInfo {
        name: "stack_rbp_comment".to_string(),
        address: 0x1000,
        size: 0x40,
        convention: "System V AMD64".to_string(),
        stack_frame: 0x60,
        callees: vec![],
        dynamic_sp: false,
    };
    let output = super::print_c_full(&func, None, Some(&header), None, None);

    let decl_line = output
        .lines()
        .find(|l| l.contains("// [rsp+10h] [rbp-50h]"))
        .expect("should find stack declaration");
    assert!(
        decl_line.contains("// [rsp+10h] [rbp-50h]"),
        "stack var at rsp+10h with frame 60h should annotate [rbp-50h]: {decl_line}",
    );
}

#[test]
fn test_unique_temp_comment() {
    let u0 = Varnode::unique(0x1000, 8);
    let space = con(0, 8);
    let src = reg(16, 8);
    let c1 = con(1, 8);
    let c2 = con(2, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);

    // Use a non-foldable unique-space load twice so it stays declared.
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            u0,
            smallvec![space, src],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![u0, c1],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r8,
            smallvec![u0, c2],
            0x1008,
        )),
        HirNode::Return(Some(sv(0, 8))),
    ];

    let func = make_func("unique_comment", body);
    let output = print_c(&func);

    let has_temp = output.lines().any(|l| l.contains("// temp"));
    assert!(
        has_temp,
        "unique-space var should have `// temp` comment: {output}",
    );
}

#[test]
fn test_register_comment_ecx() {
    let r8 = Varnode::reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r8,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r8,
            version: 0,
        })),
    ];

    let func = make_func("ecx_comment", body);
    let output = print_c(&func);

    let decl_line = output
        .lines()
        .find(|l| l.contains("result;") || l.contains("result ;"))
        .expect("should find result declaration");
    assert!(
        decl_line.contains("// ecx"),
        "register var at offset 8, size 4 should have `// ecx` comment: {decl_line}",
    );
}

#[test]
fn test_params_in_c_output() {
    let func = HirFunction {
        name: "add_two".to_string(),
        params: vec![
            ("a1".to_string(), PrimitiveType::Int(8)),
            ("a2".to_string(), PrimitiveType::Int(8)),
        ],
        return_type: PrimitiveType::Int(8),
        body: vec![],
        addr: 0x1000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("__int64 add_two(__int64 a1, __int64 a2)"),
        "should emit typed params: {output}",
    );
}

#[test]
fn test_void_return_type() {
    let func = HirFunction {
        name: "void_func".to_string(),
        params: vec![],
        return_type: PrimitiveType::Unknown,
        body: vec![HirNode::Return(None)],
        addr: 0x1000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("void void_func(void)"),
        "Unknown return type should emit void: {output}",
    );
}

#[test]
fn test_sig_params_ida_types() {
    let func = HirFunction {
        name: "sub_401000".to_string(),
        params: vec![
            ("a1".to_string(), PrimitiveType::Int(8)),
            ("a2".to_string(), PrimitiveType::UnsignedInt(4)),
            ("a3".to_string(), PrimitiveType::Ptr),
        ],
        return_type: PrimitiveType::Int(8),
        body: vec![HirNode::Return(None)],
        addr: 0x401000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("__int64 sub_401000(__int64 a1, _DWORD a2, void * a3)"),
        "signature should use IDA-style types: {output}",
    );
}

#[test]
fn test_sig_no_params_shows_void() {
    let func = HirFunction {
        name: "sub_402000".to_string(),
        params: vec![],
        return_type: PrimitiveType::Int(4),
        body: vec![HirNode::Return(None)],
        addr: 0x402000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("int sub_402000(void)"),
        "empty params should emit (void): {output}",
    );
}

#[test]
fn test_sig_return_type_bool() {
    let func = HirFunction {
        name: "sub_403000".to_string(),
        params: vec![("a1".to_string(), PrimitiveType::Int(4))],
        return_type: PrimitiveType::Bool,
        body: vec![HirNode::Return(None)],
        addr: 0x403000,
        foldable_exprs: std::collections::BTreeSet::new(),
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);
    assert!(
        output.contains("_BOOL sub_403000(int a1)"),
        "Bool return type should emit _BOOL: {output}",
    );
}

#[test]
fn test_foldable_expr_not_declared() {
    let tmp = Varnode::unique(0x4000, 8);
    let r8 = reg(8, 8);
    let c1 = con(1, 8);
    let c2 = con(2, 8);

    let temp_sv = SsaVarnode {
        base: tmp,
        version: 0,
    };

    let mut foldable = std::collections::BTreeSet::new();
    foldable.insert(temp_sv);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![c1, c2],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r8,
            smallvec![tmp, c2],
            0x1004,
        )),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = HirFunction {
        name: "fold_test".to_string(),
        params: vec![],
        return_type: PrimitiveType::Int(8),
        body,
        addr: 0x1000,
        foldable_exprs: foldable,
        panic_sites: std::collections::BTreeMap::new(),
        go_defer_sites: Vec::new(),
        noreturn: false,
        composite_var_types: std::collections::BTreeMap::new(),
        is_ctor: false,
        is_dtor: false,
        class_name: None,
        merged_names: BTreeMap::new(),
        objc_dispatch_calls: BTreeMap::new(),
        indirect_branch_kinds: BTreeMap::new(),
        byref_boxes: BTreeMap::new(),
        byref_params: std::collections::BTreeSet::new(),
        var_role_names: std::collections::BTreeMap::new(),
        finalized_signature: None,
        byref_locals: std::collections::BTreeSet::new(),
        stack_frame: None,
        cpp_lambda_captures: Vec::new(),
        vtable_call_targets: BTreeMap::new(),
        go_defer_recover_calls: BTreeMap::new(),
        rust_async: None,
    };

    let output = print_c(&func);

    let declares_temp = output.lines().any(|l| {
        let trimmed = l.trim();
        trimmed.ends_with("// temp")
            && (trimmed.starts_with("__int64 ") || trimmed.starts_with("_QWORD "))
    });
    assert!(
        !declares_temp,
        "foldable_exprs varnode should not appear in variable declarations:\n{output}",
    );
}

#[test]
fn test_internal_call_resolved() {
    let target_addr: u64 = 0x4020;
    let call_target = Varnode::constant(target_addr, 8);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![call_target],
            0x1000,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(target_addr, "sub_4020".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("sub_4020();"),
        "internal call should resolve to sub_4020: {output}",
    );
}

// -------------------------------------------------------------------
// P7-17: Heuristic variable naming (result, cond, pfn, ptr)
// -------------------------------------------------------------------

#[test]
fn test_heuristic_result_for_returned_var() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r0,
            version: 0,
        })),
    ];
    let func = make_func("returns_result", body);
    let output = print_c(&func);

    assert!(
        output.contains("return result;") || output.contains("return v1 + 1;"),
        "returned varnode should appear in return: {output}",
    );
    assert!(
        output.contains("result = ") || output.contains("return v1 + 1;"),
        "definition of returned var should be 'result =' or merged return: {output}",
    );
}

#[test]
fn test_heuristic_cond_for_comparison_output() {
    let a = reg(0, 4);
    let b = reg(8, 4);
    let cmp_out = reg(16, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::If {
            cond: SsaVarnode {
                base: cmp_out,
                version: 0,
            },
            then_body: vec![HirNode::Return(None)],
            else_body: None,
        },
        HirNode::Return(None),
    ];
    let func = make_func("uses_cond", body);
    let output = print_c(&func);

    assert!(
        output.contains("_Bool cond")
            || output.contains("_BOOL cond")
            || output.contains("if (v1 == v2)"),
        "comparison output should be named or inlined as a condition: {output}",
    );
}

#[test]
fn test_heuristic_pfn_for_callind_target() {
    let fptr = reg(0, 8);
    let ret = reg(8, 4);

    let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr], 0x1000);
    let body = vec![
        HirNode::Statement(callind),
        HirNode::Return(Some(SsaVarnode {
            base: ret,
            version: 0,
        })),
    ];
    let func = make_func("uses_pfn", body);
    let output = print_c(&func);

    assert!(
        output.contains("((int (*)())pfn)()"),
        "CALLIND target should be named 'pfn' with cast: {output}",
    );
    assert!(
        output.contains("return result;"),
        "returned varnode should be named 'result': {output}",
    );
}

#[test]
fn test_heuristic_does_not_override_loop_counter() {
    let i_reg = reg(0, 4);
    let zero = con(0, 4);
    let one = con(1, 4);
    let cmp_out = reg(16, 1);
    let n = reg(8, 4);

    let init = IrInsn::with_output(IrOp::Copy, i_reg, smallvec![zero], 0x0FF0);
    let update = IrInsn::with_output(IrOp::IntAdd, i_reg, smallvec![i_reg, one], 0x1010);
    let cond_insn = IrInsn::with_output(IrOp::IntLess, cmp_out, smallvec![i_reg, n], 0x1000);

    let body = vec![
        HirNode::For {
            init: Some(init),
            cond: SsaVarnode {
                base: cmp_out,
                version: 0,
            },
            update,
            body: vec![HirNode::Statement(cond_insn)],
        },
        HirNode::Return(Some(SsaVarnode {
            base: i_reg,
            version: 0,
        })),
    ];
    let func = make_func("loop_with_return", body);
    let output = print_c(&func);

    assert!(
        output.contains("for (i = 0;"),
        "loop counter must remain 'i': {output}",
    );
    assert!(
        !output.contains("for (result"),
        "result heuristic must not override loop counter: {output}",
    );
}

// -------------------------------------------------------------------
// P7-18: Complex CALLIND cast emission
// -------------------------------------------------------------------

#[test]
fn test_callind_cast_with_args() {
    let fptr = reg(0, 8);
    let arg1 = reg(8, 4);
    let arg2 = reg(16, 4);
    let ret = reg(24, 4);

    let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr, arg1, arg2], 0x1000);
    let body = vec![
        HirNode::Statement(callind),
        HirNode::Return(Some(SsaVarnode {
            base: ret,
            version: 0,
        })),
    ];
    let func = make_func("callind_with_args", body);
    let output = print_c(&func);

    assert!(
        output.contains("((int (*)(int, int))pfn)("),
        "CALLIND with two int32 args should emit param-typed cast: {output}",
    );
}

#[test]
fn test_callind_cast_void_return() {
    let fptr = reg(0, 8);
    let arg1 = reg(8, 8);

    let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr, arg1], 0x1000);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];
    let func = make_func("callind_void", body);
    let output = print_c(&func);

    assert!(
        output.contains("((void (*)(__int64))pfn)("),
        "CALLIND with no output should emit void return: {output}",
    );
}

#[test]
fn t298_callind_uses_go_iface_devirtualized_name_when_present() {
    let fptr = reg(0, 8);
    let arg1 = reg(8, 8);
    let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr, arg1], 0x1337);
    let body = vec![HirNode::Statement(callind), HirNode::Return(None)];
    let func = make_func("go_iface_call", body);

    let mut ann = super::PrinterAnnotations::default();
    ann.go_iface_devirtualized_calls
        .insert(0x1337, "main__MyType_Do".to_string());
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(output.contains("main__MyType_Do)("), "got: {output}");
    assert!(
        !output.contains("((void (*)(__int64))pfn)("),
        "got: {output}"
    );
}

// P8-12: Demangled C++ names in C output
// -------------------------------------------------------------------

#[test]
fn test_demangled_cpp_function_signature() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_Z8use_baseP4Base", body);
    let output = print_c(&func);

    assert!(
        output.contains("// use_base(Base*)"),
        "should emit demangled signature as comment, got: {output}",
    );
    assert!(
        output.contains(" use_base("),
        "should emit sanitized short name as C identifier, got: {output}",
    );
    assert!(
        !output.contains(" _Z8use_baseP4Base("),
        "should NOT emit raw mangled name as function name: {output}",
    );
}

#[test]
fn test_demangled_cpp_call_target() {
    let target_addr = con(0x401200, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401200, "_Z8use_baseP4Base".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("use_base();"),
        "CALL to mangled symbol should emit demangled callee, got: {output}",
    );
    assert!(
        !output.contains("_Z8use_baseP4Base();"),
        "should NOT emit raw mangled name as call target: {output}",
    );
}

#[test]
fn test_demangled_cpp_method_call_target() {
    let target_addr = con(0x401300, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401300, "_ZN4Base5valueEv".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("Base_value();"),
        "CALL to method symbol should emit sanitized Class_method form, got: {output}",
    );
}

#[test]
fn test_non_mangled_call_target_unchanged() {
    let target_addr = con(0x401030, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "printf".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("printf();"),
        "non-mangled callee should pass through, got: {output}",
    );
}

#[test]
fn test_non_mangled_dotted_call_target_is_c_identifier() {
    let target_addr = con(0x401030, 8);
    let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "f_rec_power.constprop.0".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("f_rec_power_constprop_0();"),
        "raw ELF clone name must be sanitized as a C identifier, got: {output}",
    );
    assert!(
        !output.contains("f_rec_power.constprop.0();"),
        "raw dotted callee name must not leak into C syntax: {output}",
    );
}

#[test]
fn test_cxa_throw_annotation() {
    let throw_addr = con(0x402000, 8);
    let alloc_addr = con(0x402100, 8);
    let catch_addr = con(0x402200, 8);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![alloc_addr],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![throw_addr],
            0x1008,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![catch_addr],
            0x1010,
        )),
        HirNode::Return(None),
    ];

    let func = make_func("test_exceptions", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x402000, "__cxa_throw".to_string());
    symbols.insert(0x402100, "__cxa_allocate_exception".to_string());
    symbols.insert(0x402200, "__cxa_begin_catch".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("/* throw */"),
        "should annotate __cxa_throw, got: {output}",
    );
    assert!(
        output.contains("/* allocate exception */"),
        "should annotate __cxa_allocate_exception, got: {output}",
    );
    assert!(
        output.contains("/* catch */"),
        "should annotate __cxa_begin_catch, got: {output}",
    );
}

#[test]
fn test_cxx_eh_annotation_map_handles_indirect_sites() {
    let target = reg(10, 8);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callind,
            smallvec![target],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("test_indirect_eh", body);
    let mut ann = super::PrinterAnnotations::default();
    ann.cxx_eh_actions
        .insert(0x1000, unlace_passes::cxx_eh::CxxEhAction::UnwindResume);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("/* unwind resume */"),
        "should annotate resolved indirect EH sites, got: {output}",
    );
}

#[test]
fn test_msvc_rtti_preamble_renders() {
    let func = make_func("msvc_class_user", vec![HirNode::Return(None)]);
    let mut rtti = unlace_loader::msvc_rtti::MsvcRtti::default();
    rtti.classes.insert(
        ".?AVDog@@".to_string(),
        unlace_loader::msvc_rtti::MsvcClass {
            mangled_name: ".?AVDog@@".to_string(),
            demangled: Some("Dog".to_string()),
            vtable_addr: 0x140002000,
            method_count: 3,
            bases: vec![unlace_loader::msvc_rtti::MsvcBaseClass {
                mangled_name: ".?AVAnimal@@".to_string(),
                mdisp: 0,
                pdisp: -1,
                vdisp: 0,
                attributes: 0,
            }],
            inheritance: 0x1,
        },
    );
    let ann = super::PrinterAnnotations {
        msvc_rtti: Some(rtti),
        ..Default::default()
    };

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("MSVC RTTI class hierarchy"),
        "missing MSVC RTTI header: {output}",
    );
    assert!(
        output.contains("class Dog : Animal"),
        "missing MSVC class/base line: {output}",
    );
    assert!(
        output.contains("vftable @ 0x140002000, methods=3, inheritance=multiple"),
        "missing MSVC vftable details: {output}",
    );
}

#[test]
fn test_rtti_hierarchy_in_output() {
    use unlace_loader::rtti::{CppClass, RttiInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZN3Dog5speakEv", body);

    let mut classes = BTreeMap::new();
    classes.insert(
        0x3d40,
        CppClass {
            mangled_name: "6Animal".to_string(),
            demangled_name: "Animal".to_string(),
            typeinfo_addr: 0x3d40,
            bases: vec![],
            vtable_addr: None,
            vtable_methods: vec![],
            vtable_layout: None,
        },
    );
    classes.insert(
        0x3d50,
        CppClass {
            mangled_name: "3Dog".to_string(),
            demangled_name: "Dog".to_string(),
            typeinfo_addr: 0x3d50,
            bases: vec![unlace_loader::BaseClass {
                typeinfo_addr: 0x3d40,
                offset: 0,
                is_virtual: false,
                is_public: true,
            }],
            vtable_addr: Some(0x3cf0),
            vtable_methods: vec![(0, 0x1300, Some("_ZN3Dog5speakEv".to_string()))],
            vtable_layout: None,
        },
    );
    let rtti = RttiInfo { classes };

    let output = super::print_c_with_rtti(&func, None, None, None, None, Some(&rtti));

    assert!(
        output.contains("C++ Class Hierarchy"),
        "should contain hierarchy header: {output}",
    );
    assert!(
        output.contains("Animal"),
        "should mention Animal in hierarchy: {output}",
    );
    assert!(
        output.contains("Dog"),
        "should mention Dog in hierarchy: {output}",
    );
    assert!(
        output.contains("Dog::vtable:"),
        "should list Dog vtable: {output}",
    );
}

#[test]
fn test_rtti_this_param_type() {
    use unlace_loader::rtti::{CppClass, RttiInfo};

    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZN3Dog5speakEv", body);

    let mut classes = BTreeMap::new();
    classes.insert(
        0x3d50,
        CppClass {
            mangled_name: "3Dog".to_string(),
            demangled_name: "Dog".to_string(),
            typeinfo_addr: 0x3d50,
            bases: vec![],
            vtable_addr: None,
            vtable_methods: vec![],
            vtable_layout: None,
        },
    );
    let rtti = RttiInfo { classes };

    let output = super::print_c_with_rtti(&func, None, None, None, None, Some(&rtti));

    assert!(
        output.contains("Dog *this"),
        "member function should have 'Dog *this' param: {output}",
    );
}

/// `std::vector<int>::push_back` has no RTTI entry (libcxx STL types
/// are template-instantiated everywhere with no central typeinfo),
/// so the C printer must fall back to the demangle-driven STL
/// recogniser to emit `std::vector<int> *this`.
#[test]
fn test_stl_this_param_vector() {
    let body = vec![HirNode::Return(None)];
    // Itanium-mangled `std::vector<int, std::allocator<int>>::push_back(int const&)`
    let func = make_func("_ZNSt6vectorIiSaIiEE9push_backERKi", body);

    let output = super::print_c(&func);

    assert!(
        output.contains("std::vector<int> *this"),
        "member function should have 'std::vector<int> *this' param: {output}",
    );
}

#[test]
fn test_stl_this_param_string_libcxx() {
    let body = vec![HirNode::Return(None)];
    // libcxx `std::__1::basic_string<char,…>::append(char const*)`
    let func = make_func(
        "_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc",
        body,
    );

    let output = super::print_c(&func);

    assert!(
        output.contains("std::string *this"),
        "libcxx basic_string<char,…> should print as 'std::string *this': {output}",
    );
}

#[test]
fn test_stl_this_param_shared_ptr() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZNSt10shared_ptrIiE5resetEv", body);

    let output = super::print_c(&func);

    assert!(
        output.contains("std::shared_ptr<int> *this"),
        "shared_ptr<int>::reset should print as 'std::shared_ptr<int> *this': {output}",
    );
}

/// RTTI takes precedence when present — even if the demangled name
/// also looks like an STL container, the binary's class info wins.
#[test]
fn test_rtti_wins_over_stl_recognition() {
    use unlace_loader::rtti::{CppClass, RttiInfo};

    let body = vec![HirNode::Return(None)];
    // Pretend the binary contains a user-defined `vector` class
    // (unlikely but illustrative — we want RTTI to dominate).
    let func = make_func("_ZN6vector3fooEv", body);

    let mut classes = BTreeMap::new();
    classes.insert(
        0x4000,
        CppClass {
            mangled_name: "6vector".to_string(),
            demangled_name: "vector".to_string(),
            typeinfo_addr: 0x4000,
            bases: vec![],
            vtable_addr: None,
            vtable_methods: vec![],
            vtable_layout: None,
        },
    );
    let rtti = RttiInfo { classes };

    let output = super::print_c_with_rtti(&func, None, None, None, None, Some(&rtti));

    assert!(
        output.contains("vector *this"),
        "RTTI should match the user-defined `vector` class: {output}",
    );
    assert!(
        !output.contains("std::vector"),
        "STL fallback should not fire when RTTI recognises the class: {output}",
    );
}

#[test]
fn test_write_only_variable_not_declared() {
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let c1 = con(1, 4);
    let c2 = con(2, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r8, smallvec![c2], 0x1004)),
        HirNode::Return(Some(SsaVarnode {
            base: r8,
            version: 0,
        })),
    ];

    let func = make_func("dead_var", body);
    let output = print_c(&func);

    // The returned value (r8 = 2) must reach the output: either
    // materialised as a `result` variable or folded into `return 2;`
    // under the single-def single-use returned-value fold policy.
    assert!(
        output.contains("result") || output.contains("return 2;"),
        "r8 (returned) should reach the output: {output}",
    );
    // The point of this test: the write-only variable v1 (r0, assigned 1
    // but never read) must NOT be declared or assigned.
    let has_v1_decl = output.lines().any(|l| {
        let t = l.trim();
        t.starts_with("int v1;") || t.starts_with("int v1; //")
    });
    assert!(
        !has_v1_decl,
        "write-only variable v1 (r0, never read) should NOT be declared: {output}",
    );
    assert!(
        !output.contains("v1 = 1;"),
        "write-only register assignment should not be emitted: {output}",
    );
}

#[test]
fn test_return_with_value_merges_call() {
    let rax = reg(0, 8);
    let target = con(0x401000, 8);

    let call = IrInsn::with_output(IrOp::Call, rax, smallvec![target], 0x1000);
    let body = vec![
        HirNode::Statement(call),
        HirNode::Return(Some(SsaVarnode {
            base: rax,
            version: 0,
        })),
    ];

    let func = make_func("ret_call", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401000u64, "compute".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("return compute();"),
        "call + return should merge into `return compute();`: {output}",
    );
    assert!(
        !output.contains("result = compute()"),
        "should NOT have separate assignment: {output}",
    );
}

#[test]
fn test_return_register_after_outputless_call_merges_call() {
    let rax = reg(0, 4);
    let target = con(0x401000, 8);

    let call = IrInsn::without_output(IrOp::Call, smallvec![target], 0x1000);
    let body = vec![
        HirNode::Statement(call),
        HirNode::Return(Some(SsaVarnode {
            base: rax,
            version: 0,
        })),
    ];

    let func = make_func("ret_outputless_call", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401000u64, "compute".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("return compute();"),
        "outputless call followed by RETURN RAX should merge into `return compute();`: {output}",
    );
    assert!(
        !output.contains("compute(); return"),
        "should not emit a separate call then return: {output}",
    );
}

#[test]
fn test_return_low_subregister_uses_latest_covering_output() {
    let r8d = reg(64, 4);
    let r8b = reg(64, 1);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r8d,
            smallvec![con(7, 4)],
            0x1000,
        )),
        HirNode::Return(Some(SsaVarnode {
            base: r8b,
            version: 0,
        })),
    ];

    let func = make_func("ret_subreg", body);
    let output = print_c(&func);

    assert!(
        output.contains("return v") && !output.contains("return result;"),
        "low-byte return should reuse the latest covering register value: {output}",
    );
}

// ---------------------------------------------------------------------
// TailCall emission (`return callee();` / `callee();`) — IDA convention.
// ---------------------------------------------------------------------

/// Tail call in a non-void function with a known symbol must render as
/// `return helper();` — the IDA convention. Verifies that the symbol
/// table is consulted (no `func_<addr>` or cast-to-fn-ptr fallback).
#[test]
fn test_tail_call_named_target_non_void() {
    let body = vec![HirNode::TailCall {
        target: 0x401000,
        args: Vec::new(),
    }];
    let func = make_func("caller", body); // make_func returns Int(4)
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401000u64, "helper".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("return helper();"),
        "non-void parent: tail call should render as `return helper();`: {output}",
    );
    assert!(
        !output.contains("func_401000"),
        "should not fall back to func_<addr> when symbol is known: {output}",
    );
    assert!(
        !output.contains("(*)(void)"),
        "should not emit cast-to-fn-ptr form: {output}",
    );
}

#[test]
fn test_tail_call_renders_recovered_args() {
    let body = vec![HirNode::TailCall {
        target: 0x401000,
        args: vec![unlace_struct::hir::HirCallArg {
            operand: con(0xffff_ffff, 4),
            ssa: None,
        }],
    }];
    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    symbols.insert(0x401000u64, "safe_call".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("return safe_call(-1);"),
        "tail call should render recovered branch arguments: {output}",
    );
}

/// Tail call to an unknown address falls back to the IDA-style
/// `sub_<hex>` placeholder name.
#[test]
fn test_tail_call_unknown_target_falls_back_to_sub() {
    let body = vec![HirNode::TailCall {
        target: 0xdeadbeef,
        args: Vec::new(),
    }];
    let func = make_func("caller", body);
    let output = super::print_c_full(&func, None, None, None, None);

    assert!(
        output.contains("return sub_deadbeef();"),
        "unknown target: tail call should fall back to `sub_<hex>`: {output}",
    );
}

/// Tail call in a void function (return type Unknown → rendered as
/// `void`) must render as just `callee();`. The structurer's trailing
/// `Return(None)` will emit the closing `return;` so we mustn't double
/// it (which previously produced `callee(); return; return;`).
#[test]
fn test_tail_call_void_parent_omits_return() {
    let body = vec![
        HirNode::TailCall {
            target: 0x401000,
            args: Vec::new(),
        },
        HirNode::Return(None),
    ];
    let mut func = make_func("caller_void", body);
    func.return_type = PrimitiveType::Unknown; // → "void"

    let mut symbols = BTreeMap::new();
    symbols.insert(0x401000u64, "exit_handler".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("exit_handler();"),
        "void parent: tail call should render as `exit_handler();`: {output}",
    );
    assert!(
        !output.contains("return; return;"),
        "void parent: must not emit duplicated `return; return;`: {output}",
    );
    assert!(
        !output.contains("return exit_handler();"),
        "void parent: must NOT prepend `return` to a void-returning tail call: {output}",
    );
}

/// Mangled C++ symbols at the tail-call site are demangled and
/// sanitized to their short C identifier (with `::` → `_`) — matching
/// how regular call sites are rendered elsewhere in the printer.
#[test]
fn test_tail_call_demangles_cpp_symbol() {
    let body = vec![HirNode::TailCall {
        target: 0x401000,
        args: Vec::new(),
    }];
    let func = make_func("caller", body);
    let mut symbols = BTreeMap::new();
    // `_ZN3foo3barEv` → demangled `foo::bar`, short name `foo::bar`,
    // sanitized to `foo_bar`.
    symbols.insert(0x401000u64, "_ZN3foo3barEv".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("return foo_bar();"),
        "tail call to mangled symbol should demangle and sanitize to \
         `foo_bar`: {output}",
    );
    assert!(
        !output.contains("_ZN3foo3barEv"),
        "raw mangled name should not appear in output: {output}",
    );
}

// ---------------------------------------------------------------
// HirNode::Commented — pre/post comment markers (Phase 14 task)
// ---------------------------------------------------------------

/// A `Commented` wrapper with one `pre` line emits the comment on
/// its own line *immediately before* the wrapped statement, at the
/// statement's indentation.
#[test]
fn test_commented_pre_renders_before_statement() {
    let r0 = reg(0, 4);
    let c5 = con(5, 4);
    let copy = HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c5], 0x1000));
    let body = vec![
        HirNode::Commented {
            pre: vec!["from /tmp/source.c:42".to_string()],
            post: vec![],
            inner: Box::new(copy),
        },
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("pre_comment", body);
    let output = print_c(&func);

    // Comment must come before the statement, not after.
    let comment_pos = output
        .find("// from /tmp/source.c:42")
        .unwrap_or_else(|| panic!("pre-comment missing in output:\n{output}"));
    let stmt_pos = output
        .find("= 5")
        .unwrap_or_else(|| panic!("statement missing in output:\n{output}"));
    assert!(
        comment_pos < stmt_pos,
        "pre-comment must precede the wrapped statement; got:\n{output}"
    );
}

/// A `Commented` wrapper with one `post` line emits the comment on
/// its own line *immediately after* the wrapped statement.
#[test]
fn test_commented_post_renders_after_statement() {
    let r0 = reg(0, 4);
    let c7 = con(7, 4);
    let copy = HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c7], 0x1000));
    let body = vec![
        HirNode::Commented {
            pre: vec![],
            post: vec!["end of init".to_string()],
            inner: Box::new(copy),
        },
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("post_comment", body);
    let output = print_c(&func);

    let stmt_pos = output
        .find("= 7")
        .unwrap_or_else(|| panic!("statement missing in output:\n{output}"));
    let comment_pos = output
        .find("// end of init")
        .unwrap_or_else(|| panic!("post-comment missing in output:\n{output}"));
    assert!(
        stmt_pos < comment_pos,
        "post-comment must follow the wrapped statement; got:\n{output}"
    );
}

/// Multi-line comment strings (containing `\n`) must be split into
/// one `// `-prefixed line per source line, preserving structure.
/// Both `pre` and `post` are exercised together to confirm the
/// emit ordering survives multi-line content on either side.
#[test]
fn test_commented_multiline_preserved() {
    let r0 = reg(0, 4);
    let c3 = con(3, 4);
    let copy = HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c3], 0x1000));
    let body = vec![
        HirNode::Commented {
            pre: vec!["first pre line\nsecond pre line".to_string()],
            post: vec!["first post line\nsecond post line".to_string()],
            inner: Box::new(copy),
        },
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("multi_comment", body);
    let output = print_c(&func);

    // Each input line must surface as its own `// `-prefixed line.
    for needle in [
        "// first pre line",
        "// second pre line",
        "// first post line",
        "// second post line",
    ] {
        assert!(
            output.contains(needle),
            "expected `{needle}` in output:\n{output}"
        );
    }

    // Ordering: both pre lines before stmt, both post lines after.
    let pre1 = output.find("// first pre line").unwrap();
    let pre2 = output.find("// second pre line").unwrap();
    let stmt = output.find("= 3").unwrap();
    let post1 = output.find("// first post line").unwrap();
    let post2 = output.find("// second post line").unwrap();
    assert!(pre1 < pre2 && pre2 < stmt, "pre ordering wrong:\n{output}");
    assert!(
        stmt < post1 && post1 < post2,
        "post ordering wrong:\n{output}"
    );
}

/// `Commented` is transparent for non-`Statement` nodes — a
/// pre-comment attached to a `Return` still emits *above* the
/// `return ...;` line.
#[test]
fn test_commented_wraps_return_node() {
    let body = vec![HirNode::Commented {
        pre: vec!["return path A".to_string()],
        post: vec![],
        inner: Box::new(HirNode::Return(None)),
    }];
    let func = make_func("commented_return", body);
    let output = print_c(&func);

    let comment_pos = output
        .find("// return path A")
        .unwrap_or_else(|| panic!("pre-comment on Return missing in output:\n{output}"));
    let ret_pos = output
        .find("return 0;")
        .unwrap_or_else(|| panic!("return missing in output:\n{output}"));
    assert!(
        comment_pos < ret_pos,
        "pre-comment must precede wrapped Return; got:\n{output}"
    );
}

/// Sanity check the *exact* rendered shape — comment lines must
/// appear at the same indent as the wrapped statement, with `// `
/// prefix and a trailing newline. This locks in the visual contract
/// that downstream tooling (DWARF integration, plugin hooks) relies on.
#[test]
fn test_commented_exact_render_shape() {
    let r0 = reg(0, 4);
    let c9 = con(9, 4);
    let copy = HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c9], 0x1000));
    let body = vec![
        HirNode::Commented {
            pre: vec!["hint".to_string()],
            post: vec!["trailing".to_string()],
            inner: Box::new(copy),
        },
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("shape", body);
    let output = print_c(&func);

    // Body is indented one level (4 spaces). Pre-comment, statement,
    // and post-comment must all share that indentation, in order.
    assert!(
        output.contains("    // hint\n"),
        "pre-comment must be `    // hint\\n`; got:\n{output}"
    );
    assert!(
        output.contains("    // trailing\n"),
        "post-comment must be `    // trailing\\n`; got:\n{output}"
    );

    let pre_pos = output.find("    // hint\n").unwrap();
    let post_pos = output.find("    // trailing\n").unwrap();
    let stmt_pos = output.find("= 9").unwrap();
    assert!(
        pre_pos < stmt_pos && stmt_pos < post_pos,
        "rendered ordering wrong:\n{output}"
    );
}

/// The `with_pre_comment` / `with_post_comment` builder helpers
/// stack additional comments onto an existing `Commented` wrapper
/// without nesting wrappers (so transform passes that re-wrap don't
/// produce O(n) layered comments).
#[test]
fn test_commented_builder_helpers_flatten() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let stmt = HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000));

    let wrapped = stmt
        .with_pre_comment("alpha")
        .with_pre_comment("beta")
        .with_post_comment("gamma");

    match &wrapped {
        HirNode::Commented { pre, post, inner } => {
            assert_eq!(pre, &vec!["alpha".to_string(), "beta".to_string()]);
            assert_eq!(post, &vec!["gamma".to_string()]);
            assert!(matches!(inner.as_ref(), HirNode::Statement(_)));
        }
        other => panic!("expected Commented wrapper, got: {other:?}"),
    }

    // unwrap_commented should peel the wrapper.
    assert!(matches!(wrapped.unwrap_commented(), HirNode::Statement(_)));
}

/// `_ZNSt6vectorIiSaIiEE9push_backERKi` →
/// `std::vector<int>::push_back(int const&)`. The printer must emit
/// `std::vector<int> *this` as the first parameter so the function
/// signature reflects the recovered STL type.
#[test]
fn stl_vector_method_emits_typed_this() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZNSt6vectorIiSaIiEE9push_backERKi", body);
    let output = print_c(&func);

    assert!(
        output.contains("std::vector<int> *this"),
        "expected `std::vector<int> *this` in signature, got:\n{output}",
    );
}

/// libcxx (`std::__1`) flavour of vector — the inline namespace must
/// be folded back to plain `std::` in the rendered `this`-type, even
/// though the original demangled signature (kept verbatim in the
/// preceding `//` comment) still mentions `std::__1`.
#[test]
fn stl_vector_libcxx_inline_namespace_collapsed() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZNSt3__16vectorIiNS_9allocatorIiEEE9push_backERKi", body);
    let output = print_c(&func);

    // Locate the function signature line — it's the line that opens
    // the body with `{` and contains the parameter list. We assert on
    // that line specifically so the demangled-signature comment can
    // legitimately preserve `std::__1::` for traceability.
    let sig_line = output
        .lines()
        .find(|l| l.contains("*this") && l.trim_end().ends_with('{'))
        .expect("signature line with *this and opening brace");
    assert!(
        sig_line.contains("std::vector<int> *this"),
        "libcxx vector signature: {sig_line}\n--- full ---\n{output}",
    );
    assert!(
        !sig_line.contains("std::__1::"),
        "inline namespace should be stripped from signature line, got:\n{sig_line}",
    );
}

/// `basic_string<char, …>` collapses to `std::string`.
#[test]
fn stl_string_emits_collapsed_typedef() {
    let body = vec![HirNode::Return(None)];
    let func = make_func(
        "_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc",
        body,
    );
    let output = print_c(&func);

    assert!(
        output.contains("std::string *this"),
        "expected `std::string *this`, got:\n{output}",
    );
}

/// `_ZNSt10shared_ptrIiE5resetEv` → `std::shared_ptr<int>::reset()`.
#[test]
fn stl_shared_ptr_method_emits_typed_this() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZNSt10shared_ptrIiE5resetEv", body);
    let output = print_c(&func);

    assert!(
        output.contains("std::shared_ptr<int> *this"),
        "expected `std::shared_ptr<int> *this`, got:\n{output}",
    );
}

/// Plain (non-STL) C++ free function must NOT get an STL `this`
/// parameter — STL recognition is opt-in by namespace match.
#[test]
fn non_stl_function_does_not_get_stl_this() {
    // _Z3addii → int add(int, int)
    let body = vec![HirNode::Return(None)];
    let func = make_func("_Z3addii", body);
    let output = print_c(&func);

    assert!(
        !output.contains("std::"),
        "non-STL function should not mention std::, got:\n{output}",
    );
    assert!(
        !output.contains("*this"),
        "non-STL should not synthesise this, got:\n{output}",
    );
}

/// gcc-style lambda closure: the C printer must emit a
/// `// lambda closure operator()` annotation immediately under the
/// demangled-signature comment so a human reader can recognise the
/// enclosing class as a compiler-generated closure type.  See
/// [`crate::demangle::DemangleResult::is_lambda`].
#[test]
fn lambda_closure_emits_annotation_comment() {
    // _ZZ11call_lambdaiENKUliE_clEi
    //   → call_lambda(int)::{lambda(int)#1}::operator()(int) const
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZZ11call_lambdaiENKUliE_clEi", body);
    let output = print_c(&func);

    assert!(
        output.contains("// lambda closure operator()"),
        "expected lambda annotation comment, got:\n{output}",
    );
    // The full demangled signature must still be emitted above the
    // annotation — we annotate, we don't replace.
    assert!(
        output.contains("lambda"),
        "demangled signature with `lambda` should appear, got:\n{output}",
    );
}

/// clang-style lambda (`$_<n>` source name) — same annotation must
/// fire from the alternate detection path.
#[test]
fn clang_dollar_lambda_emits_annotation_comment() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZZ11call_lambdaiENK3$_0clEi", body);
    let output = print_c(&func);

    assert!(
        output.contains("// lambda closure operator()"),
        "expected lambda annotation for clang $_0, got:\n{output}",
    );
}

/// Negative: a regular non-lambda member function must NOT receive
/// the lambda annotation comment.
#[test]
fn non_lambda_method_has_no_lambda_annotation() {
    let body = vec![HirNode::Return(None)];
    let func = make_func("_ZN3foo3barEv", body);
    let output = print_c(&func);

    assert!(
        !output.contains("// lambda"),
        "non-lambda method got a spurious lambda comment, output:\n{output}",
    );
}

// ---------------------------------------------------------------------
// HirNode::Asm — IDA-style `__asm { ... }` block emission for raw
// assembly the lifter could not translate (cit_asm / opcode 79 in
// hex-rays' citem dispatcher).
// ---------------------------------------------------------------------

/// Single asm line renders as a one-line `__asm { ... }` block with
/// the instruction text indented inside the braces.
#[test]
fn asm_node_single_instruction() {
    let body = vec![
        HirNode::Asm {
            instructions: vec!["cli".to_string()],
        },
        HirNode::Return(None),
    ];
    let func = make_func("priv_op", body);
    let output = print_c(&func);

    assert!(
        output.contains("__asm {"),
        "expected __asm block opener, got:\n{output}",
    );
    assert!(
        output.contains("cli"),
        "expected mnemonic in body, got:\n{output}",
    );
    // The `cli` line must be more deeply indented than the `__asm {`
    // line — i.e. one level inside the block.
    let asm_indent = output
        .lines()
        .find(|l| l.trim_start().starts_with("__asm {"))
        .map(|l| l.len() - l.trim_start().len())
        .expect("__asm line not found");
    let cli_indent = output
        .lines()
        .find(|l| l.trim_start().starts_with("cli"))
        .map(|l| l.len() - l.trim_start().len())
        .expect("cli line not found");
    assert!(
        cli_indent > asm_indent,
        "expected `cli` indented deeper than `__asm {{`, got asm={asm_indent} cli={cli_indent}\n{output}",
    );
    // The closing brace lives on its own line at the asm-opener depth.
    let close_lines = output.lines().filter(|l| l.trim() == "}").count();
    assert!(
        close_lines >= 1,
        "expected at least one bare `}}` closing line, got:\n{output}",
    );
}

/// Multiple asm lines emit one indented line per instruction inside
/// a single `__asm { ... }` block.
#[test]
fn callother_rdpmc_renders_named_helper() {
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Callother,
            Varnode::unique(0, 8),
            smallvec![
                Varnode::constant(0x351, 8),
                Varnode::new(unlace_ir::SpaceId::Register, 0x08, 4)
            ],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("read_pmc", body);
    let output = print_c(&func);
    assert!(
        output.contains("__rdpmc__(v1)"),
        "missing rdpmc helper: {output}"
    );
}

#[test]
fn asm_node_multiple_instructions() {
    let body = vec![
        HirNode::Asm {
            instructions: vec![
                "rdtsc".to_string(),
                "mov rcx, rax".to_string(),
                "shl rcx, 32".to_string(),
            ],
        },
        HirNode::Return(None),
    ];
    let func = make_func("read_tsc", body);
    let output = print_c(&func);

    assert!(output.contains("__asm {"), "missing block opener: {output}");
    assert!(output.contains("rdtsc"), "missing rdtsc: {output}");
    assert!(output.contains("mov rcx, rax"), "missing mov: {output}",);
    assert!(output.contains("shl rcx, 32"), "missing shl: {output}",);

    // The three lines must appear in order, each on its own line.
    let rdtsc_pos = output.find("rdtsc").unwrap();
    let mov_pos = output.find("mov rcx, rax").unwrap();
    let shl_pos = output.find("shl rcx, 32").unwrap();
    assert!(
        rdtsc_pos < mov_pos && mov_pos < shl_pos,
        "asm lines emitted out of order:\n{output}",
    );
}

/// Asm blocks nest correctly inside `if` / `while` bodies — the
/// printer's depth-aware indentation must apply, and surrounding
/// control flow is unaffected.
#[test]
fn asm_node_inside_if_and_while() {
    let body = vec![
        HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Asm {
                instructions: vec!["int 3".to_string()],
            }],
            else_body: None,
        },
        HirNode::While {
            cond: sv(0, 4),
            body: vec![HirNode::Asm {
                instructions: vec!["pause".to_string(), "nop".to_string()],
            }],
        },
        HirNode::Return(None),
    ];
    let func = make_func("nested_asm", body);
    let output = print_c(&func);

    // Both __asm blocks must appear.
    assert_eq!(
        output.matches("__asm {").count(),
        2,
        "expected two __asm blocks, got:\n{output}",
    );
    assert!(output.contains("int 3"), "missing int 3: {output}");
    assert!(output.contains("pause"), "missing pause: {output}");
    assert!(output.contains("nop"), "missing nop: {output}");
    // The asm inside the if must be indented deeper than the asm's
    // `if (...) {` opener — i.e. the line containing `int 3` should
    // start with at least 4 spaces (function body depth 1 + then-body
    // depth 1 + asm-body depth 1 = 6 spaces with 2-space indent, but
    // we just sanity-check it's strictly deeper than `if`).
    let if_line_indent = output
        .lines()
        .find(|l| l.trim_start().starts_with("if ("))
        .map(|l| l.len() - l.trim_start().len())
        .expect("if line not found");
    let int3_indent = output
        .lines()
        .find(|l| l.trim_start().starts_with("int 3"))
        .map(|l| l.len() - l.trim_start().len())
        .expect("int 3 line not found");
    assert!(
        int3_indent > if_line_indent,
        "expected `int 3` to be more indented than `if (...)`, got if={if_line_indent} int3={int3_indent}\n{output}",
    );
}

// ---------------------------------------------------------------------
// PrintConfig — indent / margin / format-flag plumbing
//
// These tests pin the IDA-aligned defaults documented on
// [`PrintConfig`] (offsets 592 / 600 / 719 in `module_data`) and
// verify that an explicit config passed to `print_c_with_rtti_config`
// actually drives `indent()` output.
// ---------------------------------------------------------------------

use super::PrintConfig;

fn print_c_with_config(func: &HirFunction, config: PrintConfig) -> String {
    crate::c_printer::print_c_with_rtti_config(func, None, None, None, None, None, Some(config))
}

/// `PrintConfig::default()` returns the IDA-aligned defaults
/// (`module_data` offsets 592/600 → indent 2 / max 100, with
/// Unlace's historical 4-space tab and IDA's 80-column wrap floor).
#[test]
fn print_config_defaults_match_ida() {
    let cfg = PrintConfig::default();
    assert_eq!(cfg.max_line_width, 100, "max_line_width default");
    assert_eq!(cfg.tab_width, 4, "tab_width default");
    assert_eq!(
        cfg.indent_width, 2,
        "indent_width default (IDA module_data+592)"
    );
    assert_eq!(
        cfg.wrap_floor, 80,
        "wrap_floor default (IDA Options dialog)"
    );
    assert_eq!(
        cfg.format_flags, 0,
        "format_flags default (IDA module_data+719)"
    );
}

/// A custom `tab_width` actually drives the per-line indentation
/// emitted by the printer — moving from the default 4 to 2 halves
/// every body-line's leading-space count.
#[test]
fn print_ctx_custom_tab_width_drives_indent() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let body = vec![HirNode::If {
        cond: sv(0, 4),
        then_body: vec![HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: None,
        }],
        else_body: None,
    }];

    let func = make_func("nested_2sp", body);
    let output = print_c_with_config(
        &func,
        PrintConfig {
            tab_width: 2,
            ..PrintConfig::default()
        },
    );

    // depth 3 × tab_width 2 = 6 leading spaces (was 12 with default).
    let add_line = output
        .lines()
        .find(|l| l.contains("v1++;"))
        .expect("should find add line");
    let lead = add_line.len() - add_line.trim_start().len();
    assert_eq!(lead, 6, "expected 6 spaces (3 × 2): {add_line:?}");
}

/// `format_flags` is plumbed for forward compatibility: no current emit
/// consumes the bits, so a non-default value travels through
/// `print_c_with_rtti_config` without changing the output.
#[test]
fn print_config_format_flags_do_not_change_output() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let body = vec![HirNode::Statement(IrInsn::with_output(
        IrOp::IntAdd,
        r0,
        smallvec![r0, c1],
        0x1000,
    ))];
    let func = make_func("format_flags", body);
    let flagged = print_c_with_config(
        &func,
        PrintConfig {
            format_flags: 42,
            ..PrintConfig::default()
        },
    );
    assert_eq!(flagged, print_c_with_config(&func, PrintConfig::default()));
}

/// Constructing the printer with `max_line_width=60` (vs the default
/// 100) makes a long expression's rendered output cross the requested
/// margin, demonstrating that the explicit-config path actually
/// reaches the emit logic. We don't assert exact wrap positions —
/// the printer's wrap policy is governed by t64 — only that the
/// custom config plumbs through `print_c_with_rtti_config` to the
/// `PrintCtx` without being silently dropped.
#[test]
fn print_config_explicit_override_reaches_ctx() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let body = vec![HirNode::If {
        cond: sv(0, 4),
        then_body: vec![HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        ))],
        else_body: None,
    }];
    let func = make_func("widthcheck", body);
    let narrow = PrintConfig {
        max_line_width: 60,
        tab_width: 2,
        indent_width: 2,
        wrap_floor: 40,
        format_flags: 0,
    };
    let out = crate::c_printer::print_c_with_rtti_config(
        &func,
        None,
        None,
        None,
        None,
        None,
        Some(narrow),
    );
    // tab_width=2 forced through config: depth-2 body line indents by
    // 4 spaces (2 × 2), not the default 8 (2 × 4).
    let body_line = out.lines().find(|l| l.contains("v1++;")).expect("body");
    let lead = body_line.len() - body_line.trim_start().len();
    assert_eq!(
        lead, 4,
        "expected 4-space indent under tab_width=2: {body_line:?}"
    );
}

/// The default config still produces the historical 4-space-per-level
/// output.
#[test]
fn print_ctx_default_tab_width_is_four() {
    let r0 = reg(0, 4);
    let c1 = con(1, 4);
    let body = vec![HirNode::If {
        cond: sv(0, 4),
        then_body: vec![HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1000,
        ))],
        else_body: None,
    }];
    let func = make_func("nested_default", body);
    let output = print_c(&func);

    // depth 2 × tab_width 4 = 8 leading spaces.
    let add_line = output
        .lines()
        .find(|l| l.contains("v1++;"))
        .expect("should find add line");
    let lead = add_line.len() - add_line.trim_start().len();
    assert_eq!(lead, 8, "expected 8 spaces (2 × 4 default): {add_line:?}");
}

// ---------------------------------------------------------------------
// needs_parens — direct port of IDA sub_25F3C0
// ---------------------------------------------------------------------
//
// These tests pin down the algorithm's behaviour at every branch.  They
// exercise `needs_parens` directly (no IR synthesis required) so the
// logic stays nailed down even if higher-level emission paths change.

use super::{ParentCtx, needs_parens};

fn rhs(parent: IrOp) -> ParentCtx {
    ParentCtx::rhs_of(parent)
}
fn lhs(parent: IrOp) -> ParentCtx {
    ParentCtx::lhs_of(parent)
}
fn top() -> ParentCtx {
    ParentCtx::top()
}

#[test]
fn parens_top_level_never_wraps() {
    // No parent → never paren (the `if (a3)` early-out in sub_25F3C0).
    assert!(!needs_parens(IrOp::IntAdd, top()));
    assert!(!needs_parens(IrOp::IntEqual, top()));
    assert!(!needs_parens(IrOp::IntNegate, top()));
}

#[test]
fn parens_associative_chain_no_inner_parens() {
    // `a + b + c` parses as `(a + b) + c`; the inner `+` is the LHS of
    // the outer `+` — associative bitmask says no paren.
    assert!(!needs_parens(IrOp::IntAdd, lhs(IrOp::IntAdd)));
    // `a | b | c` — same shape.
    assert!(!needs_parens(IrOp::IntOr, lhs(IrOp::IntOr)));
    assert!(!needs_parens(IrOp::IntAnd, lhs(IrOp::IntAnd)));
    assert!(!needs_parens(IrOp::IntXor, lhs(IrOp::IntXor)));
    assert!(!needs_parens(IrOp::BoolAnd, lhs(IrOp::BoolAnd)));
    assert!(!needs_parens(IrOp::BoolOr, lhs(IrOp::BoolOr)));
    // Even on the RHS — `+` is associative, so bitmask wins.
    assert!(!needs_parens(IrOp::IntAdd, rhs(IrOp::IntAdd)));
    assert!(!needs_parens(IrOp::IntOr, rhs(IrOp::IntOr)));
}

#[test]
fn parens_comparison_chain_always_wraps() {
    // `a == b == c` — the inner `==` is wrapped regardless of side.
    assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntEqual)));
    assert!(needs_parens(IrOp::IntEqual, rhs(IrOp::IntEqual)));
    assert!(needs_parens(IrOp::IntNotequal, lhs(IrOp::IntEqual)));
    // Relational chain too: `a < b < c`.
    assert!(needs_parens(IrOp::IntSless, lhs(IrOp::IntSless)));
    assert!(needs_parens(IrOp::IntSlessequal, rhs(IrOp::IntSless)));
}

#[test]
fn parens_right_assoc_div() {
    // `(a / b) / c` flat-chain — inner `/` is LHS, no paren.
    assert!(!needs_parens(IrOp::IntSdiv, lhs(IrOp::IntSdiv)));
    // `a / (b / c)` — inner `/` is RHS, must paren.
    assert!(needs_parens(IrOp::IntSdiv, rhs(IrOp::IntSdiv)));
    // Same for unsigned div / mod variants.
    assert!(needs_parens(IrOp::IntDiv, rhs(IrOp::IntDiv)));
    assert!(needs_parens(IrOp::IntSrem, rhs(IrOp::IntSrem)));
    assert!(needs_parens(IrOp::IntRem, rhs(IrOp::IntRem)));
}

#[test]
fn parens_mul_flat_chain() {
    // `a * b * c` — both inner positions of mul-of-mul: no paren.
    assert!(!needs_parens(IrOp::IntMult, lhs(IrOp::IntMult)));
    assert!(!needs_parens(IrOp::IntMult, rhs(IrOp::IntMult)));
    // `a * (b / c)` — inner is `/`, RHS of `*`: paren via right-assoc.
    assert!(needs_parens(IrOp::IntSdiv, rhs(IrOp::IntMult)));
    // `(a / b) * c` — inner is `/`, LHS of `*`: no paren (right-assoc
    // mask only fires on RHS).
    assert!(!needs_parens(IrOp::IntSdiv, lhs(IrOp::IntMult)));
}

#[test]
fn parens_mixed_shift_compare() {
    // `a << b == c`: `==` is *looser* than `<<` (parent_prec 7 >
    // child_prec 5), so it parses as `(a << b) == c` already.  child
    // ∈ [3,7] but parent prec=7, NOT in {5} ∪ [8,10] → trap doesn't
    // fire, no paren needed.
    assert!(!needs_parens(IrOp::IntLeft, lhs(IrOp::IntEqual)));
    assert!(!needs_parens(IrOp::IntLeft, rhs(IrOp::IntEqual)));

    // `a != (b < c)` also parses correctly without parens, but GCC warns
    // under -Wparentheses. The semantic gate compiles generated C with
    // -Werror, so keep relational children of equality explicit.
    assert!(needs_parens(IrOp::IntLess, rhs(IrOp::IntNotequal)));
    assert!(needs_parens(IrOp::IntSless, lhs(IrOp::IntEqual)));
    assert!(needs_parens(IrOp::FloatLess, rhs(IrOp::FloatNotequal)));

    // `a & (b == c)` — child `==` (prec 7), parent `&` (prec 8).
    // Parent_prec > child_prec, AND parent_prec ∈ [8,10]: trap fires.
    assert!(needs_parens(IrOp::IntEqual, rhs(IrOp::IntAnd)));
    assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntAnd)));

    // `a & (b << c)` — child `<<` (prec 5), parent `&` (prec 8).
    // child_prec ∈ [3,7] ✓, parent_prec ∈ [8,10] ✓ → trap fires.
    assert!(needs_parens(IrOp::IntLeft, rhs(IrOp::IntAnd)));

    // `a + b << c` — child `+` (prec 4) on LHS of parent `<<` (prec
    // 5).  child ∈ [3,7] ✓, parent_prec == 5 ✓ → trap fires (paren).
    assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntLeft)));

    // `a + (b * c)` — child `*` (prec 3) on RHS of parent `+` (prec
    // 4).  child_prec ∈ [3,7] ✓ but parent_prec=4, not 5 and not in
    // [8,10]: trap does NOT fire — no paren.
    assert!(!needs_parens(IrOp::IntMult, rhs(IrOp::IntAdd)));
}

#[test]
fn parens_parent_strictly_tighter_always_wraps() {
    // `(a == b) * c` — child `==` (prec 7), parent `*` (prec 3).
    // parent_prec < child_prec → unconditional paren.
    assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntMult)));
    // `(a + b) * c` — child `+` (prec 4), parent `*` (prec 3): paren.
    assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntMult)));
    // `(a | b) & c` — child `|` (prec 10), parent `&` (prec 8): paren.
    assert!(needs_parens(IrOp::IntOr, lhs(IrOp::IntAnd)));
}

#[test]
fn parens_unary_above_binary() {
    // `~(a + b)` — child `+` (prec 4), parent `~` (prec 2).
    // parent_prec < child_prec → paren.
    assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntNegate)));
    // `(~x) | y` — child `~` (prec 2), parent `|` (prec 10).
    // parent_prec > child_prec.  child_prec=2, NOT in [3,7] — trap
    // does not fire.  No paren.
    assert!(!needs_parens(IrOp::IntNegate, lhs(IrOp::IntOr)));
}

#[test]
fn parens_bnot_under_call_postfix() {
    // `(~x)()` — child opcode 47 (cot_bnot), parent opcode 56 (call).
    // Parent prec=0 (call is a leaf in the table), child prec=2;
    // parent_prec < child_prec → strictly-tighter branch wraps
    // unconditionally.  This reproduces sub_25F3C0's `v6 == 47 && a2
    // == 56` outcome via the precedence comparison.
    assert!(needs_parens(IrOp::IntNegate, lhs(IrOp::Call)));
}

#[test]
fn parens_subtract_right_operand_wraps() {
    // `a - (b - c)` — child `-` (prec 4), parent `-` (prec 4).
    // Same prec, opcode 36 falls through bitmasks (not associative,
    // not in right-assoc mask, not opcode 37) → default branch:
    // child_prec=4 > 2, so paren if RHS.
    assert!(needs_parens(IrOp::IntSub, rhs(IrOp::IntSub)));
    // `(a - b) - c` — LHS of same: no paren.
    assert!(!needs_parens(IrOp::IntSub, lhs(IrOp::IntSub)));
}

#[test]
fn parens_shift_chain_right_assoc() {
    // `a << (b << c)` — same level, default branch, paren if RHS.
    assert!(needs_parens(IrOp::IntLeft, rhs(IrOp::IntLeft)));
    assert!(!needs_parens(IrOp::IntLeft, lhs(IrOp::IntLeft)));
}

// -----------------------------------------------------------------
// measure_expr_width — t66 (port of IDA sub_262260)
// -----------------------------------------------------------------

use super::measure_expr_width;

fn empty_ctx() -> super::PrintCtx {
    super::PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    )
}

// -----------------------------------------------------------------
// format_int_literal — t208 radix heuristic
//
// The function picks a human-friendly rendering for integer
// constants. Tests cover one example per branch of the cascade.
// -----------------------------------------------------------------

#[test]
fn t208_char_literal_renders_quoted() {
    let ctx = empty_ctx();
    // 'x' is 0x78 — well inside the printable-ASCII window and not
    // one of the escape-requiring characters.
    assert_eq!(super::format_int_literal(b'x' as u64, 1, &ctx), "'x'");
    // Width doesn't matter for the char-literal rule; it fires
    // purely on value.
    assert_eq!(super::format_int_literal(b'A' as u64, 4, &ctx), "'A'");
}

#[test]
fn t208_small_byte_decimal() {
    let ctx = empty_ctx();
    // 200 is not printable ASCII (>0x7E) but is a valid byte; the
    // byte-decimal rule must kick in.
    assert_eq!(super::format_int_literal(200, 1, &ctx), "200");
    // 0xFF in a byte falls into the byte-decimal rule too (the
    // -1 sentinel rule is gated *after* it on purpose).
    assert_eq!(super::format_int_literal(0xFF, 1, &ctx), "255");
}

#[test]
fn t208_power_of_two_renders_as_shift() {
    let ctx = empty_ctx();
    // 0x100 = 1 << 8 — bit position 8 hits the threshold.
    assert_eq!(super::format_int_literal(0x100, 4, &ctx), "1 << 8");
    // 0x8000_0000 = 1 << 31 — large flag mask, the textbook case.
    assert_eq!(super::format_int_literal(0x8000_0000, 4, &ctx), "1 << 31");
}

#[test]
fn t208_small_value_decimal() {
    let ctx = empty_ctx();
    // 7 is < 16 and not a char-printable / not bytes; the
    // small-magnitude rule fires.
    assert_eq!(super::format_int_literal(7, 4, &ctx), "7");
    // 0 and 1 are the universal sentinels.
    assert_eq!(super::format_int_literal(0, 4, &ctx), "0");
    assert_eq!(super::format_int_literal(1, 4, &ctx), "1");
}

#[test]
fn t208_large_value_hex() {
    let ctx = empty_ctx();
    // 0xDEAD_BEEF is none of: printable char, byte, power of two,
    // sentinel, small. It must hit the hex fallback.
    assert_eq!(
        super::format_int_literal(0xDEAD_BEEF, 4, &ctx),
        "0xdeadbeef"
    );
    // A random 16-bit value also falls through to hex.
    assert_eq!(super::format_int_literal(0x1234, 2, &ctx), "0x1234");
}

/// Constants are measured by their rendered length; signed-context
/// `1u32` renders as `1` (1 col), wide values render as their decimal
/// or `0x…ULL` form.
#[test]
fn measure_expr_width_constant() {
    let ctx = empty_ctx();
    let one = IrInsn::with_output(IrOp::Copy, reg(0, 4), smallvec![con(1, 4)], 0);
    // Copy passes width through: just `1`.
    assert_eq!(measure_expr_width(&one, 0, &ctx), 1);

    let big = IrInsn::with_output(IrOp::Copy, reg(0, 4), smallvec![con(1234, 4)], 0);
    // signed-context format_constant(1234, 4) → "0x4d2" → 5 cols.
    assert_eq!(measure_expr_width(&big, 0, &ctx), 5);
}

/// Binary op width is `lhs + " op " + rhs` with a 2-column op token
/// approximation; `r0 + 1` ⇒ 4 (var) + 1 + 2 + 1 + 1 (const) = 9
/// when var falls back to the default 4-column placeholder.
#[test]
fn measure_expr_width_binop() {
    let ctx = empty_ctx();
    let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
    let w = measure_expr_width(&add, 0, &ctx);
    // var(4) + space + op(2) + space + const(1) = 9.
    assert_eq!(w, 9);
}

/// Call width is `name(arg1, arg2)` — `name` + `(` + sum(args) +
/// commas + `)`. With one var-target and two const args:
/// 4 + 1 + 1 + 2 + 1 + 1 = 10.
#[test]
fn measure_expr_width_call() {
    let ctx = empty_ctx();
    let call = IrInsn::without_output(IrOp::Call, smallvec![reg(0, 4), con(1, 4), con(2, 4)], 0);
    let w = measure_expr_width(&call, 0, &ctx);
    // target(4) + '(' + 1 + ', ' + 1 + ')' = 4+1+1+2+1+1 = 10.
    assert_eq!(w, 10);
}

/// Unary op width is `op + child`; here `-r0` ⇒ 1 + 4 = 5.
#[test]
fn measure_expr_width_unary() {
    let ctx = empty_ctx();
    let neg = IrInsn::with_output(IrOp::Int2comp, reg(0, 4), smallvec![reg(0, 4)], 0);
    assert_eq!(measure_expr_width(&neg, 0, &ctx), 5);
}

// -----------------------------------------------------------------
// should_break_before — t64 (port of IDA sub_267EB0)
// -----------------------------------------------------------------

use super::should_break_before;

/// Rule 1: same-operator chain — `a + b + c` never breaks.
#[test]
fn should_break_same_operator_chain() {
    let ctx = empty_ctx();
    let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
    // Plenty of columns; only the same-op rule should matter.
    assert!(!should_break_before(&add, Some(IrOp::IntAdd), 200, &ctx));
}

/// Rule 2: operator family — `IntAdd` inside an `IntSub` parent
/// stays on the same line (additive family).
#[test]
fn should_break_operator_family() {
    let ctx = empty_ctx();
    let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
    // Same additive family — no break.
    assert!(!should_break_before(&add, Some(IrOp::IntSub), 200, &ctx));
    // Cross-family (additive vs bitwise): the family rule does
    // not apply, falls through to the width check.
    let xor = IrInsn::with_output(IrOp::IntXor, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
    // Width fits → no break.
    assert!(!should_break_before(&xor, Some(IrOp::IntAdd), 200, &ctx));
}

/// Rule 3: hard floor — under 20 columns of room, every node breaks.
#[test]
fn should_break_hard_floor() {
    let ctx = empty_ctx();
    let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
    assert!(should_break_before(&add, None, 19, &ctx));
    // With no parent and exactly the floor we *don't* break (rule
    // 3 requires `<` 20, and the width oracle says `9 ≤ 20`).
    assert!(!should_break_before(&add, None, 20, &ctx));
}

/// Rule 4: width oracle — when the measured width exceeds
/// `available_cols`, force a break.
#[test]
fn should_break_width_exceeds() {
    let ctx = empty_ctx();
    // Build a 6-arg call: target + 6 args = 7 inputs.
    // Width ≈ 4 + 1 + 6×1 + 5×2 + 1 = 22.
    let call = IrInsn::without_output(
        IrOp::Call,
        smallvec![
            reg(0, 4),
            con(1, 4),
            con(2, 4),
            con(3, 4),
            con(4, 4),
            con(5, 4),
            con(6, 4),
        ],
        0,
    );
    // 21 columns available, width 22 → break.
    assert!(should_break_before(&call, None, 21, &ctx));
    // 30 columns available, width 22 → fits, no break.
    assert!(!should_break_before(&call, None, 30, &ctx));
}

// -----------------------------------------------------------------------
// PrinterAnnotations integration
// -----------------------------------------------------------------------

fn annot_func() -> HirFunction {
    let r8 = reg(8, 4);
    let c1 = con(1, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r8, smallvec![c1], 0x1004)),
        HirNode::Return(Some(sv(8, 4))),
    ];
    let mut f = make_func("sub_1000", body);
    f.addr = 0x1000;
    f
}

#[test]
fn function_comment_renders() {
    let func = annot_func();
    let header = super::FunctionHeaderInfo {
        name: "sub_1000".into(),
        address: 0x1000,
        ..Default::default()
    };
    let ann = super::PrinterAnnotations {
        function_comment: Some("ENTRY: validates auth token".into()),
        ..Default::default()
    };
    let output = super::print_c_with_annotations(
        &func,
        None,
        Some(&header),
        None,
        None,
        None,
        None,
        Some(&ann),
    );
    assert!(
        output.contains("// ENTRY: validates auth token"),
        "missing function comment in: {output}"
    );
}

#[test]
fn custom_name_overrides_default() {
    let func = annot_func();
    let header = super::FunctionHeaderInfo {
        name: "sub_1000".into(),
        address: 0x1000,
        ..Default::default()
    };
    let mut ann = super::PrinterAnnotations::default();
    ann.custom_names.insert(0x1000, "validate_token".into());
    let output = super::print_c_with_annotations(
        &func,
        None,
        Some(&header),
        None,
        None,
        None,
        None,
        Some(&ann),
    );
    assert!(
        output.contains("validate_token("),
        "custom name not used in signature: {output}"
    );
    assert!(
        !output.contains("sub_1000("),
        "fallback synthesized name leaked: {output}"
    );
}

#[test]
fn line_comment_at_addr() {
    let func = annot_func();
    let header = super::FunctionHeaderInfo {
        name: "sub_1000".into(),
        address: 0x1000,
        ..Default::default()
    };
    let mut ann = super::PrinterAnnotations::default();
    ann.line_comments
        .insert(0x1004, "patched for CVE-2024-x".into());
    let output = super::print_c_with_annotations(
        &func,
        None,
        Some(&header),
        None,
        None,
        None,
        None,
        Some(&ann),
    );
    assert!(
        output.contains("// patched for CVE-2024-x"),
        "missing line comment: {output}"
    );
}

// ── t122: stack canary + char-case polish ──

#[test]
fn canary_load_renders_as_readfsqword() {
    use super::tests::{con, make_func, reg, sv};
    let space = con(0, 8);
    let addr = con(0x28, 8);
    let r8 = reg(8, 8);
    let load = unlace_ir::IrInsn::with_output(
        unlace_ir::IrOp::Load,
        r8,
        smallvec::smallvec![space, addr],
        0x1000,
    );
    let body = vec![
        unlace_struct::HirNode::Statement(load),
        unlace_struct::HirNode::Return(Some(sv(8, 8))),
    ];
    let func = make_func("canary_linux", body);
    let output = super::print_c(&func);
    assert!(
        output.contains("__readfsqword(0x28u)"),
        "expected Linux canary intrinsic: {output}"
    );
}

#[test]
fn canary_stack_spill_reload_is_suppressed() {
    use super::tests::{con, make_func, reg, sv};
    let space = con(0, 8);
    let fs_canary = con(0x28, 8);
    let stack_slot = Varnode::stack(72, 8);
    let guard = Varnode::unique(0x100, 8);
    let saved = Varnode::unique(0x108, 8);
    let current = Varnode::unique(0x110, 8);
    let cmp = Varnode::unique(0x118, 1);
    let ret = reg(0, 4);
    let fail_addr = 0x401030;
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            guard,
            smallvec![space, fs_canary],
            0x1000,
        )),
        HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![space, stack_slot, guard],
            0x1001,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            ret,
            smallvec![con(33, 4)],
            0x1002,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            saved,
            smallvec![space, stack_slot],
            0x1003,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            current,
            smallvec![space, fs_canary],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntNotequal,
            cmp,
            smallvec![saved, current],
            0x1005,
        )),
        HirNode::If {
            cond: sv(0x118, 1),
            then_body: vec![HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![con(fail_addr, 8)],
                0x1006,
            ))],
            else_body: None,
        },
        HirNode::Return(Some(sv(0, 4))),
    ];
    let func = make_func("canary_slot", body);
    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(fail_addr, "__stack_chk_fail".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);
    assert!(output.contains("return 0x21;"), "missing return: {output}");
    assert!(
        !output.contains("v_72"),
        "canary spill slot must not become a local: {output}"
    );
    assert!(
        !output.contains("__stack_chk_fail"),
        "canary fail branch should be suppressed: {output}"
    );
}

#[test]
fn canary_load_macos_renders_as_stack_chk_guard() {
    use super::tests::{con, make_func, reg, sv};
    let guard_addr: u64 = 0x100008000;
    let space = con(0, 8);
    let addr = con(guard_addr, 8);
    let r8 = reg(8, 8);
    let load = unlace_ir::IrInsn::with_output(
        unlace_ir::IrOp::Load,
        r8,
        smallvec::smallvec![space, addr],
        0x1000,
    );
    let body = vec![
        unlace_struct::HirNode::Statement(load),
        unlace_struct::HirNode::Return(Some(sv(8, 8))),
    ];
    let func = make_func("canary_macos", body);
    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(guard_addr, "__stack_chk_guard".to_string());
    let output = super::print_c_full(&func, None, None, Some(&symbols), None);
    assert!(
        output.contains("*__stack_chk_guard"),
        "expected macOS canary indirection: {output}"
    );
}

#[test]
fn case_renders_as_char_literal_when_type_is_char() {
    use super::tests::{con, make_func, reg, sv};
    // Statement that types sv(0, 1) as Int(1) (via Copy with size-1 output).
    let r0_byte = reg(0, 1);
    let c_a = con(b'A' as u64, 1);
    let body = vec![
        unlace_struct::HirNode::Statement(unlace_ir::IrInsn::with_output(
            unlace_ir::IrOp::Copy,
            r0_byte,
            smallvec::smallvec![c_a],
            0x1000,
        )),
        unlace_struct::HirNode::Switch {
            cond: sv(0, 1),
            cases: vec![
                (
                    unlace_struct::SwitchCase::Value(b'A' as u64),
                    vec![unlace_struct::HirNode::Return(None)],
                    false,
                ),
                (
                    unlace_struct::SwitchCase::Value(b'Z' as u64),
                    vec![unlace_struct::HirNode::Return(None)],
                    false,
                ),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        },
    ];
    let func = make_func("switch_char", body);
    let output = super::print_c(&func);
    assert!(
        output.contains("case 'A':"),
        "expected char literal for printable ASCII: {output}"
    );
    assert!(
        output.contains("case 'Z':"),
        "expected char literal for printable ASCII: {output}"
    );
}

#[test]
fn case_renders_as_int_when_type_is_int() {
    use super::tests::{con, make_func, reg, sv};
    // Statement that types sv(0, 4) as Int(4) — NOT char.
    let r0 = reg(0, 4);
    let c0 = con(0, 4);
    let body = vec![
        unlace_struct::HirNode::Statement(unlace_ir::IrInsn::with_output(
            unlace_ir::IrOp::Copy,
            r0,
            smallvec::smallvec![c0],
            0x1000,
        )),
        unlace_struct::HirNode::Switch {
            cond: sv(0, 4),
            cases: vec![(
                unlace_struct::SwitchCase::Value(b'A' as u64),
                vec![unlace_struct::HirNode::Return(None)],
                false,
            )],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        },
    ];
    let func = make_func("switch_int", body);
    let output = super::print_c(&func);
    assert!(
        output.contains("case 65:"),
        "int-typed switch should emit integer case label, not char: {output}"
    );
    assert!(
        !output.contains("case 'A':"),
        "int-typed switch must not emit char literal: {output}"
    );
}

#[test]
fn render_objc_class_struct_with_two_ivars() {
    use unlace_loader::{ObjcClass, ObjcIvar};
    let class = ObjcClass {
        name: "ClassName".into(),
        class_addr: 0x1000,
        superclass_addr: 0,
        methods: vec![],
        ivars: vec![
            ObjcIvar {
                name: "name".into(),
                offset: 8,
                type_encoding: "@".into(),
            },
            ObjcIvar {
                name: "count".into(),
                offset: 16,
                type_encoding: "q".into(),
            },
        ],
        properties: vec![],
        protocols: vec![],
    };
    let out = super::render_objc_class_struct(&class).expect("two ivars → Some");
    assert!(out.contains("struct ClassName {"), "{out}");
    assert!(out.contains("id name;"), "{out}");
    assert!(out.contains("__int64 count;"), "{out}");
    assert!(out.trim_end().ends_with("};"), "{out}");
}

#[test]
fn render_objc_class_struct_with_no_ivars_returns_none() {
    use unlace_loader::ObjcClass;
    let class = ObjcClass {
        name: "Empty".into(),
        class_addr: 0x2000,
        superclass_addr: 0,
        methods: vec![],
        ivars: vec![],
        properties: vec![],
        protocols: vec![],
    };
    assert!(super::render_objc_class_struct(&class).is_none());
}

#[test]
fn render_objc_class_struct_handles_unknown_type_encoding() {
    use unlace_loader::{ObjcClass, ObjcIvar};
    let class = ObjcClass {
        name: "Weird".into(),
        class_addr: 0x3000,
        superclass_addr: 0,
        methods: vec![],
        ivars: vec![ObjcIvar {
            name: "mystery".into(),
            offset: 0,
            type_encoding: "?".into(),
        }],
        properties: vec![],
        protocols: vec![],
    };
    let out = super::render_objc_class_struct(&class).unwrap();
    assert!(out.contains("void*"), "{out}");
    assert!(out.contains("/* type=? */"), "{out}");
    assert!(out.contains("mystery"), "{out}");
}

// -----------------------------------------------------------------------
// t152 — string-hash switch case rendering
// -----------------------------------------------------------------------

fn hash_switch_func(case_val: u64) -> HirFunction {
    let r0 = reg(0, 4);
    let c0 = con(0, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c0], 0x1000)),
        HirNode::Switch {
            cond: sv(0, 4),
            cases: vec![(
                SwitchCase::Value(case_val),
                vec![HirNode::Return(None)],
                false,
            )],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        },
    ];
    make_func("switch_hash", body)
}

#[test]
fn c_printer_renders_hash_case_with_string_comment() {
    let func = hash_switch_func(0x3610_A686);
    let mut ann = super::PrinterAnnotations::default();
    ann.string_hash_table.insert(0x3610_A686, "hello".into());
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("case 0x3610A686u:") && output.contains("/* \"hello\" */"),
        "expected hash case with string comment, got:\n{output}"
    );
}

#[test]
fn c_printer_renders_unknown_hash_case_normally() {
    let func = hash_switch_func(0xDEAD_BEEF);
    let mut ann = super::PrinterAnnotations::default();
    ann.string_hash_table.insert(0x3610_A686, "hello".into());
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("case 3735928559:") || output.contains("case 0xDEADBEEF"),
        "expected plain integer case for unknown hash, got:\n{output}"
    );
    assert!(
        !output.contains("/* \""),
        "no string comment expected for unknown hash, got:\n{output}"
    );
}

#[test]
fn c_printer_escapes_special_chars_in_string_comment() {
    let func = hash_switch_func(0x1234_5678);
    let mut ann = super::PrinterAnnotations::default();
    ann.string_hash_table.insert(0x1234_5678, "a\"b\\c".into());
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains(r#"/* "a\"b\\c" */"#),
        "expected escape_default-rendered string, got:\n{output}"
    );
}

#[test]
fn c_printer_renders_pdb_constant_comment_for_switch_case() {
    let func = hash_switch_func(42);
    let mut ann = super::PrinterAnnotations::default();
    ann.pdb_constants_by_value
        .insert(42, vec!["kAnswer".into(), "kAlsoAnswer".into()]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("case 42:  /* kAnswer, kAlsoAnswer */"),
        "expected PDB constant-pool annotation, got:\n{output}"
    );
}

// -----------------------------------------------------------------------
// t153 — ObjC class struct decls in C output preamble
// -----------------------------------------------------------------------

fn minimal_func() -> HirFunction {
    make_func("noop", vec![HirNode::Return(None)])
}

fn objc_class(name: &str, ivars: Vec<unlace_loader::ObjcIvar>) -> unlace_loader::ObjcClass {
    unlace_loader::ObjcClass {
        name: name.into(),
        class_addr: 0,
        superclass_addr: 0,
        methods: vec![],
        ivars,
        properties: vec![],
        protocols: vec![],
    }
}

#[test]
fn preamble_emits_objc_class_struct() {
    let func = minimal_func();
    let mut ann = super::PrinterAnnotations::default();
    ann.objc_classes.push(objc_class(
        "ClassName",
        vec![
            unlace_loader::ObjcIvar {
                name: "name".into(),
                offset: 8,
                type_encoding: "@".into(),
            },
            unlace_loader::ObjcIvar {
                name: "count".into(),
                offset: 16,
                type_encoding: "q".into(),
            },
        ],
    ));
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("struct ClassName {"),
        "expected preamble to contain ObjC class struct, got:\n{output}"
    );
    assert!(
        output.contains("// ObjC class layouts"),
        "expected preamble heading comment, got:\n{output}"
    );
}

#[test]
fn preamble_omits_classes_with_no_ivars() {
    let func = minimal_func();
    let mut ann = super::PrinterAnnotations::default();
    ann.objc_classes.push(objc_class("Empty", vec![]));
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        !output.contains("struct Empty"),
        "ivar-less class should not produce a struct decl, got:\n{output}"
    );
    assert!(
        !output.contains("// ObjC class layouts"),
        "heading must not appear when nothing was emitted, got:\n{output}"
    );
}

#[test]
fn preamble_emits_multiple_classes() {
    let func = minimal_func();
    let mut ann = super::PrinterAnnotations::default();
    ann.objc_classes.push(objc_class(
        "Alpha",
        vec![unlace_loader::ObjcIvar {
            name: "a".into(),
            offset: 0,
            type_encoding: "i".into(),
        }],
    ));
    ann.objc_classes.push(objc_class(
        "Beta",
        vec![unlace_loader::ObjcIvar {
            name: "b".into(),
            offset: 0,
            type_encoding: "q".into(),
        }],
    ));
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("struct Alpha {"),
        "missing Alpha:\n{output}"
    );
    assert!(output.contains("struct Beta {"), "missing Beta:\n{output}");
}

// ----- t196: ObjC categories preamble -----

fn objc_method(name: &str) -> unlace_loader::ObjcMethod {
    unlace_loader::ObjcMethod {
        name: name.into(),
        type_encoding: "v@:".into(),
        imp_addr: 0,
    }
}

fn objc_category(
    name: &str,
    class_name: Option<&str>,
    instance_methods: Vec<unlace_loader::ObjcMethod>,
) -> unlace_loader::ObjcCategory {
    unlace_loader::ObjcCategory {
        name: name.into(),
        class_addr: 0xCAFEBABE,
        class_name: class_name.map(Into::into),
        instance_methods,
        class_methods: vec![],
        properties: vec![],
        protocols: vec![],
    }
}

#[test]
fn preamble_emits_category_with_two_instance_methods() {
    let func = minimal_func();
    let mut ann = super::PrinterAnnotations::default();
    ann.objc_categories.push(objc_category(
        "Networking",
        Some("MyController"),
        vec![objc_method("methodA"), objc_method("methodB")],
    ));
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    assert!(
        output.contains("// ObjC categories (recovered from __objc_catlist)"),
        "expected category section heading, got:\n{output}"
    );
    assert!(
        output.contains("// @interface MyController (Networking)"),
        "expected @interface header line, got:\n{output}"
    );
    assert!(
        output.contains("//   - methodA();"),
        "expected methodA line, got:\n{output}"
    );
    assert!(
        output.contains("//   - methodB();"),
        "expected methodB line, got:\n{output}"
    );
    assert!(
        output.contains("// @end"),
        "expected @end terminator, got:\n{output}"
    );
}

#[test]
fn preamble_emits_category_with_no_methods_as_empty_body() {
    let func = minimal_func();
    let mut ann = super::PrinterAnnotations::default();
    ann.objc_categories
        .push(objc_category("Stubs", Some("WidgetView"), vec![]));
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));
    // Header + @end must be present even though the body is empty;
    // that's the whole point of surfacing zero-method categories.
    assert!(
        output.contains("// @interface WidgetView (Stubs)"),
        "expected header line, got:\n{output}"
    );
    assert!(
        output.contains("// @end"),
        "expected @end terminator, got:\n{output}"
    );
    // Sanity: there must be exactly zero method lines for this category.
    // We test this structurally — between the `@interface` and `@end`
    // lines there should be no `//   -` or `//   +` selector entries.
    let header_idx = output
        .find("// @interface WidgetView (Stubs)")
        .expect("header line must be present");
    let end_idx = output[header_idx..]
        .find("// @end")
        .expect("@end must follow header");
    let body = &output[header_idx..header_idx + end_idx];
    assert!(
        !body.contains("//   -") && !body.contains("//   +"),
        "empty-method category body must not contain selector lines, got body:\n{body}"
    );
}

// -------------------------------------------------------------------
// t202 — printf/scanf format-string variadic cast rendering
// -------------------------------------------------------------------

/// `printf("%d", x)` where the format-string slot is a `Const`
/// pointer to a `string_table` entry must render with an `(int)`
/// cast on the variadic argument.
#[test]
fn t202_printf_int_arg_renders_with_int_cast() {
    let printf_addr = con(0x401030, 8);
    let fmt_ptr = con(0x402000, 8); // VA of "%d" in .rodata
    let x_reg = reg(0, 4);

    let call_insn =
        IrInsn::without_output(IrOp::Call, smallvec![printf_addr, fmt_ptr, x_reg], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "printf".to_string());

    let mut string_table = BTreeMap::new();
    string_table.insert(0x402000, "%d".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), Some(&string_table));

    assert!(
        output.contains("printf(\"%d\", (int)"),
        "printf(\"%%d\", x) must render with (int) cast on variadic arg:\n{output}",
    );
}

/// `scanf("%ld", &y)` — scanf-family arguments are pointers to the
/// inferred type, so `%ld` produces a `long long *` (per
/// `c_type(Int(8))`) cast, not a bare `long long`.
#[test]
fn t202_scanf_renders_pointer_cast() {
    let scanf_addr = con(0x401040, 8);
    let fmt_ptr = con(0x402100, 8);
    let y_ptr = reg(0, 8);

    let call_insn =
        IrInsn::without_output(IrOp::Call, smallvec![scanf_addr, fmt_ptr, y_ptr], 0x1000);
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(0x401040, "scanf".to_string());

    let mut string_table = BTreeMap::new();
    string_table.insert(0x402100, "%ld".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), Some(&string_table));

    assert!(
        output.contains("scanf(\"%ld\", (__int64 *)"),
        "scanf(\"%%ld\", &y) must wrap variadic in a pointer cast:\n{output}",
    );
}

/// When the format-string slot is *not* a const pointer (i.e. the
/// fmt comes from a runtime variable / parameter), we can't parse
/// specifiers and must not invent any casts. The printer should still
/// render the recovered runtime arguments without format-driven casts.
#[test]
fn t202_non_const_format_string_emits_no_casts() {
    let printf_addr = con(0x401030, 8);
    let dynamic_fmt = reg(0, 8); // not a Const operand
    let x_reg = reg(8, 4);

    let call_insn = IrInsn::without_output(
        IrOp::Call,
        smallvec![printf_addr, dynamic_fmt, x_reg],
        0x1000,
    );
    let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

    let func = make_func("caller", body);

    let mut symbols = BTreeMap::new();
    symbols.insert(0x401030, "printf".to_string());

    // Empty string_table — even if the printer somehow tried to
    // look up a literal, there's nothing to find.
    let string_table = BTreeMap::new();

    let output = super::print_c_full(&func, None, None, Some(&symbols), Some(&string_table));

    assert!(
        !output.contains("(int)"),
        "non-const fmt must not produce any (int) casts:\n{output}",
    );
    assert!(
        !output.contains("(long long *)"),
        "non-const fmt must not produce any (long long *) casts:\n{output}",
    );
    assert!(
        output.contains("printf(str, v2);"),
        "non-const fmt should render recovered runtime args:\n{output}",
    );
}

// ---------------------------------------------------------------------
// t215: should_emit_cast — flow-sensitive cast minimization
// ---------------------------------------------------------------------
//
// The four contract tests below pin the predicate's behaviour at the
// four corners called out by the design note:
//
//   1. Same width + same signedness → no cast.
//   2. Sign-extension to a wider int → cast (information-bearing).
//   3. Pointer ↔ integer → cast (always meaningful in C).
//   4. Unknown on either side → no cast (Unknown is the lattice bottom).
//
// Together they nail the predicate to its intended shape so a future
// refactor that accidentally drops the Unknown short-circuit, or treats
// Ptr like an integer, will break loudly here rather than silently
// smear casts (or omit them) across the entire C output.

#[test]
fn should_emit_cast_int_to_int_same_width_is_suppressed() {
    // (int)(int x) — both sides 4-byte signed int. Cast is purely
    // cosmetic; the predicate must say "do not emit".
    assert!(!super::should_emit_cast(
        PrimitiveType::Int(4),
        PrimitiveType::Int(4)
    ));
}

#[test]
fn should_emit_cast_sign_extend_to_wider_int_is_emitted() {
    // (long)(int x) — 4→8 byte signed extension changes the bit pattern
    // and is therefore information-bearing. Must emit.
    assert!(super::should_emit_cast(
        PrimitiveType::Int(4),
        PrimitiveType::Int(8)
    ));
}

#[test]
fn should_emit_cast_int_to_pointer_is_emitted() {
    // (int*)(int x) — integer ↔ pointer is always meaningful in C
    // (pointer provenance, alignment). Must emit in either direction.
    assert!(super::should_emit_cast(
        PrimitiveType::Int(4),
        PrimitiveType::Ptr
    ));
    assert!(super::should_emit_cast(
        PrimitiveType::Ptr,
        PrimitiveType::Int(4)
    ));
}

#[test]
fn should_emit_cast_unknown_is_suppressed() {
    // (unknown)(unknown) and partial-Unknown forms — Unknown is the
    // bottom of the type lattice, so we have no basis to claim the
    // cast is informative. Suppress to avoid noise.
    assert!(!super::should_emit_cast(
        PrimitiveType::Unknown,
        PrimitiveType::Unknown
    ));
    assert!(!super::should_emit_cast(
        PrimitiveType::Unknown,
        PrimitiveType::Int(4)
    ));
    assert!(!super::should_emit_cast(
        PrimitiveType::Int(4),
        PrimitiveType::Unknown
    ));
}

// ──── t224: synthesised struct preamble emission ────
//
// These tests target `emit_inferred_struct_preamble` directly so we can
// exercise both source maps (`SsaFunction::inferred_structs` for t147
// stack-frame composites, `SsaFunction::array_struct_layouts` for t213
// array-of-structs layouts) without standing up the full HIR pipeline.

fn empty_ssa_for_preamble() -> unlace_ir::ssa::SsaFunction {
    // Minimal SSA function: one empty entry block. `build_ssa` walks
    // the CFG even for a single block, which is fine — we don't touch
    // any of the dominator-tree state in the preamble emitter.
    use unlace_ir::{BasicBlock, BlockId, Function};
    let mut f = Function::new("preamble_test", BlockId(0), 0);
    f.insert_block(BasicBlock::new(BlockId(0)));
    unlace_ir::ssa::build_ssa(f)
}

#[test]
fn test_emit_inferred_struct_preamble_stack_struct() {
    use unlace_ir::types::{StructFieldType, Type};

    let mut ssa = empty_ssa_for_preamble();
    ssa.inferred_structs.insert(
        -0x20,
        Type::Struct {
            name: "anon_struct_20".into(),
            fields: vec![
                StructFieldType {
                    name: "field_0".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "field_1".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
            ],
        },
    );

    let out = super::emit_inferred_struct_preamble(&ssa);
    assert!(out.contains("struct __anon0 {"), "header missing: {out}");
    // Field naming is offset-based, not index-based.
    assert!(out.contains("field_0"), "field_0 missing: {out}");
    assert!(out.contains("field_4"), "field_4 missing: {out}");
    assert!(out.trim_end().ends_with("};"), "close brace: {out}");
}

#[test]
fn test_recursive_type_preamble_survives_final_c_output() {
    use unlace_ir::types::{StructFieldType, Type};

    let node_ptr = Type::ptr_to(Type::Struct {
        name: "Node".into(),
        fields: vec![],
    });
    let mut ssa = empty_ssa_for_preamble();
    ssa.inferred_structs.insert(
        -0x40,
        Type::Struct {
            name: "RecursiveFixture".into(),
            fields: vec![
                StructFieldType {
                    name: "next".into(),
                    ty: node_ptr.clone(),
                    offset: 0,
                },
                StructFieldType {
                    name: "values".into(),
                    ty: Type::Array {
                        element: Box::new(Type::int(4)),
                        size: Some(3),
                    },
                    offset: 8,
                },
                StructFieldType {
                    name: "payload".into(),
                    ty: Type::Union {
                        name: "Payload".into(),
                        fields: vec![],
                    },
                    offset: 24,
                },
                StructFieldType {
                    name: "flags".into(),
                    ty: Type::Bitfield {
                        underlying: Box::new(Type::uint(4)),
                        offset: 0,
                        width: 3,
                    },
                    offset: 32,
                },
                StructFieldType {
                    name: "callback".into(),
                    ty: Type::FuncPtr {
                        params: vec![
                            node_ptr,
                            Type::uint(4),
                            Type::Union {
                                name: String::new(),
                                fields: vec![
                                    StructFieldType {
                                        name: "as_i".into(),
                                        ty: Type::int(4),
                                        offset: 0,
                                    },
                                    StructFieldType {
                                        name: "as_f".into(),
                                        ty: Type::Primitive(unlace_ir::ssa::PrimitiveType::Float),
                                        offset: 0,
                                    },
                                ],
                            },
                        ],
                        return_type: Box::new(Type::int(4)),
                        variadic: false,
                    },
                    offset: 40,
                },
                StructFieldType {
                    name: "anonymous".into(),
                    ty: Type::Struct {
                        name: String::new(),
                        fields: vec![StructFieldType {
                            name: "nested".into(),
                            ty: Type::int(4),
                            offset: 0,
                        }],
                    },
                    offset: 48,
                },
            ],
        },
    );

    let preamble = super::emit_inferred_struct_preamble(&ssa);
    let mut annotations = PrinterAnnotations {
        inferred_struct_preamble: Some(preamble),
        ..PrinterAnnotations::default()
    };
    annotations.array_struct_indices = super::compute_array_struct_indices(&ssa);
    let output = super::print_c_with_annotations(
        &make_func("recursive_type_sink", vec![HirNode::Return(None)]),
        None,
        None,
        None,
        None,
        None,
        None,
        Some(&annotations),
    );

    assert!(
        output.contains("typedef unsigned int _DWORD;"),
        "IDA typedef prelude should survive final output: {output}"
    );
    assert!(
        output.contains("struct Node *field_0;"),
        "recursive struct pointer field should render as a declarator: {output}"
    );
    assert!(
        output.contains("int field_8[3];"),
        "array field should put the size after the field name: {output}"
    );
    assert!(
        output.contains("union Payload field_24;"),
        "union field should render in the recovered layout: {output}"
    );
    assert!(
        output.contains("_DWORD field_32 : 3;"),
        "bitfield width should render in the recovered layout: {output}"
    );
    assert!(
        output.contains("int (*field_40)(struct Node *, _DWORD, union { int as_i; float as_f; });"),
        "function pointer field should bind the name inside (*name): {output}"
    );
    assert!(
        output.contains("struct { int nested; } field_48;"),
        "anonymous aggregate field should remain visible in final output: {output}"
    );
}

#[test]
fn test_emit_inferred_struct_preamble_array_layout() {
    use unlace_ir::types::{InferredStruct, StructField};
    use unlace_ir::{SpaceId, Varnode};

    let mut ssa = empty_ssa_for_preamble();
    let base = unlace_ir::ssa::SsaVarnode {
        base: Varnode {
            space: SpaceId::Register,
            offset: 0,
            size: 8,
        },
        version: 0,
    };
    ssa.array_struct_layouts.insert(
        base,
        InferredStruct {
            size: 16,
            fields: vec![
                StructField { offset: 0, size: 4 },
                StructField { offset: 8, size: 8 },
            ],
        },
    );

    let out = super::emit_inferred_struct_preamble(&ssa);
    assert!(out.contains("struct __anon0 {"), "header missing: {out}");
    // Width 4 → int, width 8 → __int64; offsets verbatim.
    assert!(out.contains("int field_0;"), "field_0: {out}");
    assert!(out.contains("__int64 field_8;"), "field_8: {out}");
}

#[test]
fn test_emit_inferred_struct_preamble_empty() {
    let ssa = empty_ssa_for_preamble();
    let out = super::emit_inferred_struct_preamble(&ssa);
    assert!(out.is_empty(), "expected empty preamble, got: {out:?}");
}

// ──── t231: array-of-struct field-access rendering inside loops ────
//
// These tests pin the printer's `try_array_struct_field_access`
// (the c_printer side of t213's struct-field recovery):
//  * Positive: `*(arr + 16*i + 0) = 1` ⇒ `arr0[i].field_0 = 1;`
//  * Positive: `*(arr + 16*i + 8) = 2` ⇒ `arr0[i].field_8 = 2;`
//  * Negative: `*(p + 8) = 3` outside any recognised layout stays
//    rendered as the raw dereference (no `arr<N>[i].field_…` form).
//
// The test constructs the smallest synthetic HIR that survives the
// printer's foldable-stmt pass plus `compute_loop_counter_names`,
// then injects the `InferredStruct` layout straight into
// `PrinterAnnotations` to bypass the SSA pipeline.

fn arr_struct_layout_for_field_offsets(field_offsets: &[u64]) -> unlace_ir::types::InferredStruct {
    use unlace_ir::types::{InferredStruct, StructField};
    InferredStruct {
        size: 16,
        fields: field_offsets
            .iter()
            .map(|&offset| StructField { offset, size: 8 })
            .collect(),
    }
}

/// Build a one-block `For` loop whose body stores `val_const` at
/// `*(arr + 16*i + field_offset)`. The induction variable lives in
/// `reg(0, 4)`; the base pointer lives in `reg(16, 8)`. The trailing
/// `extra_const_add` parameter splits the offset application off
/// onto its own `IntAdd` instruction (mirrors the t213 const-fold
/// behaviour when `offset != 0`).
fn build_array_struct_loop(field_offset: u64, val_const: u64, store_addr: u64) -> HirFunction {
    let i = reg(0, 4); // induction variable (i)
    let arr = reg(16, 8); // base pointer to the array of structs
    let zero = con(0, 4);
    let one = con(1, 4);
    let stride = con(16, 8);
    let space = con(0, 8); // load/store space operand (RAM)

    // u0 = i (zext to 8-byte for pointer arithmetic — modelled as
    // a direct mult on the 4-byte `i` since the lifter usually
    // gives us a single multiplicative term `i * STRIDE`).
    let mul = IrInsn::with_output(
        IrOp::IntMult,
        Varnode::unique(0, 8),
        smallvec![i, stride],
        store_addr.wrapping_sub(0x10),
    );
    // u1 = arr + (i * 16)
    let add_base = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(8, 8),
        smallvec![arr, Varnode::unique(0, 8)],
        store_addr.wrapping_sub(0x08),
    );

    // Optional field-offset add: `u2 = u1 + offset`.  Always emit
    // an explicit IntAdd even for offset == 0, so the chain has a
    // uniform shape (`decompose_print_addr` handles the const-fold
    // recursion identically either way).
    let (addr_input, addr_chain_extra) = if field_offset == 0 {
        (Varnode::unique(8, 8), None)
    } else {
        let off_const = con(field_offset, 8);
        let add_off = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(16, 8),
            smallvec![Varnode::unique(8, 8), off_const],
            store_addr.wrapping_sub(0x04),
        );
        (Varnode::unique(16, 8), Some(add_off))
    };

    let val = con(val_const, 8);
    let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr_input, val], store_addr);

    let mut body_stmts: Vec<HirNode> = vec![HirNode::Statement(mul), HirNode::Statement(add_base)];
    if let Some(add_off) = addr_chain_extra {
        body_stmts.push(HirNode::Statement(add_off));
    }
    body_stmts.push(HirNode::Statement(store));

    let body = vec![
        HirNode::For {
            init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
            cond: SsaVarnode {
                base: i,
                version: 0,
            },
            update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1100),
            body: body_stmts,
        },
        HirNode::Return(None),
    ];

    make_func("t231_arr_struct_loop", body)
}

fn annotations_with_arr_layout(
    arr_reg: Varnode,
    field_offsets: &[u64],
) -> super::PrinterAnnotations {
    let mut ann = super::PrinterAnnotations::default();
    let arr_sv = SsaVarnode {
        base: arr_reg,
        version: 0,
    };
    ann.array_struct_layouts
        .insert(arr_sv, arr_struct_layout_for_field_offsets(field_offsets));
    ann.array_struct_indices.insert(arr_sv, 0);
    ann
}

#[test]
fn t231_array_struct_field_offset_zero_renders_indexed() {
    let func = build_array_struct_loop(0, 1, 0x1020);
    let ann = annotations_with_arr_layout(reg(16, 8), &[0, 8]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("arr0[i].field_0 = 1"),
        "expected `arr0[i].field_0 = 1`, got: {output}"
    );
    // The raw-pointer form must NOT appear for this access.
    assert!(
        !output.contains("*(_QWORD *)") || !output.contains("16"),
        "raw `*(arr + 16*i)` should not survive: {output}"
    );
}

#[test]
fn t231_array_struct_field_offset_eight_renders_indexed() {
    let func = build_array_struct_loop(8, 2, 0x1020);
    let ann = annotations_with_arr_layout(reg(16, 8), &[0, 8]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        output.contains("arr0[i].field_8 = 2"),
        "expected `arr0[i].field_8 = 2`, got: {output}"
    );
}

#[test]
fn t231_non_array_store_unchanged_without_layout_match() {
    // `*(p + 8) = 3` — no induction variable, no array-of-struct
    // layout for `p`. Must fall through to the existing pointer
    // dereference rendering.
    let p = reg(32, 8);
    let off = con(8, 8);
    let val = con(3, 8);
    let space = con(0, 8);

    let addr = IrInsn::with_output(
        IrOp::IntAdd,
        Varnode::unique(0, 8),
        smallvec![p, off],
        0x1000,
    );
    let store = IrInsn::without_output(
        IrOp::Store,
        smallvec![space, Varnode::unique(0, 8), val],
        0x1004,
    );
    let body = vec![
        HirNode::Statement(addr),
        HirNode::Statement(store),
        HirNode::Return(None),
    ];
    let func = make_func("t231_no_layout", body);

    // No `array_struct_layouts` injected — annotations are empty.
    let ann = super::PrinterAnnotations::default();
    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    assert!(
        !output.contains("arr0["),
        "raw pointer access must not be rewritten to arr<N>[…]: {output}"
    );
    assert!(
        output.contains("= 3"),
        "the value `3` should still appear as the RHS: {output}"
    );
}

// ---------------------------------------------------------------------
// t255: IDA byte-extract macro emission (LOBYTE / BYTE1 / LOWORD)
// ---------------------------------------------------------------------

#[test]
fn test_t255_int_and_0xff_emits_lobyte() {
    // `r0 & 0xFF` → LOBYTE(r0)
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let mask = con(0xFF, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            r8,
            smallvec![r0, mask],
            0x1000,
        )),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("t255_lobyte", body);
    let output = print_c(&func);

    assert!(
        output.contains("LOBYTE("),
        "IntAnd(x, 0xFF) should emit LOBYTE(x): {output}"
    );
    assert!(
        !output
            .lines()
            .any(|l| l.contains("& 0xFF") && !l.contains("LOBYTE")),
        "raw `& 0xFF` should be replaced by the macro: {output}"
    );
}

#[test]
fn test_t255_shifted_mask_emits_byte1() {
    // `(r0 & 0xFF00) >> 8` → BYTE1(r0)
    // The IR is two statements: an IntAnd producing a unique, then an
    // IntRight that consumes that unique with shift = 8.
    let r0 = reg(0, 4);
    let tmp = Varnode::unique(0, 4);
    let r8 = reg(8, 4);
    let mask = con(0xFF00, 4);
    let shift = con(8, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            tmp,
            smallvec![r0, mask],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntRight,
            r8,
            smallvec![tmp, shift],
            0x1004,
        )),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("t255_byte1", body);
    let output = print_c(&func);

    assert!(
        output.contains("BYTE1("),
        "(x & 0xFF00) >> 8 should emit BYTE1(x): {output}"
    );
}

#[test]
fn test_t255_int_and_0xffff_emits_loword() {
    // `r0 & 0xFFFF` → LOWORD(r0)
    let r0 = reg(0, 4);
    let r8 = reg(8, 4);
    let mask = con(0xFFFF, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            r8,
            smallvec![r0, mask],
            0x1000,
        )),
        HirNode::Return(Some(sv(8, 4))),
    ];

    let func = make_func("t255_loword", body);
    let output = print_c(&func);

    assert!(
        output.contains("LOWORD("),
        "IntAnd(x, 0xFFFF) should emit LOWORD(x): {output}"
    );
}

#[test]
fn test_callother_sve_add_emits_svadd_s32_t300() {
    // Callother(0x420 /* SVE_ADD */, pg=0, zd, zn, zm) → svadd_s32
    let tag = con(0x420, 8);
    let pg = con(0, 1);
    let zd = con(0, 1);
    let zn = con(1, 1);
    let zm = con(2, 1);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag, pg, zd, zn, zm],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("sve_add_s32", body);
    let output = print_c(&func);
    assert!(
        output.contains("svadd_s32("),
        "SVE ADD should render as svadd_s32: {output}",
    );
}

// ---------------------------------------------------------------------
// t256: open-coded overflow polynomial → __OFADD__ / __OFSUB__
// ---------------------------------------------------------------------

#[test]
fn test_t256_open_ofadd_pattern() {
    // Materialize the canonical OFADD polynomial:
    //   t0 = a ^ b
    //   t1 = t0 ^ -1
    //   t2 = a + b
    //   t3 = a ^ t2
    //   t4 = t1 & t3
    //   r  = t4 < 0
    let a = reg(0, 4);
    let b = reg(8, 4);
    let t0 = Varnode::unique(0x10, 4);
    let t1 = Varnode::unique(0x14, 4);
    let t2 = Varnode::unique(0x18, 4);
    let t3 = Varnode::unique(0x1c, 4);
    let t4 = Varnode::unique(0x20, 4);
    let out = reg(16, 1);
    let neg_one = con(u64::MAX, 4);
    let zero = con(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            t0,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            t1,
            smallvec![t0, neg_one],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            t2,
            smallvec![a, b],
            0x1008,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            t3,
            smallvec![a, t2],
            0x100c,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            t4,
            smallvec![t1, t3],
            0x1010,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSless,
            out,
            smallvec![t4, zero],
            0x1014,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];

    let func = make_func("t256_ofadd", body);
    let output = print_c(&func);

    assert!(
        output.contains("__OFADD__("),
        "polynomial `(a^b^-1) & (a^(a+b)) < 0` should fold to __OFADD__: {output}"
    );
}

#[test]
fn test_t256_open_ofsub_pattern() {
    // Canonical OFSUB polynomial:
    //   t0 = a ^ b
    //   t2 = a - b
    //   t3 = a ^ t2
    //   t4 = t0 & t3
    //   r  = t4 < 0
    let a = reg(0, 4);
    let b = reg(8, 4);
    let t0 = Varnode::unique(0x10, 4);
    let t2 = Varnode::unique(0x18, 4);
    let t3 = Varnode::unique(0x1c, 4);
    let t4 = Varnode::unique(0x20, 4);
    let out = reg(16, 1);
    let zero = con(0, 4);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            t0,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSub,
            t2,
            smallvec![a, b],
            0x1004,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntXor,
            t3,
            smallvec![a, t2],
            0x1008,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAnd,
            t4,
            smallvec![t0, t3],
            0x100c,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntSless,
            out,
            smallvec![t4, zero],
            0x1010,
        )),
        HirNode::Return(Some(sv(16, 1))),
    ];

    let func = make_func("t256_ofsub", body);
    let output = print_c(&func);

    assert!(
        output.contains("__OFSUB__("),
        "polynomial `(a^b) & (a^(a-b)) < 0` should fold to __OFSUB__: {output}"
    );
}

// ---------------------------------------------------------------------
// t257: MEMORY[…] sigil for unanalyzable globals
// ---------------------------------------------------------------------

#[test]
fn test_t257_load_unknown_global_emits_memory_sigil() {
    // Load from a constant absolute address in the "low globals" range
    // (≥ 0x1000, < 0x10000) that no symbol claims. The renderer must
    // emit `*(_QWORD *)MEMORY[0x4000]` rather than a synthesized
    // `qword_4000` name (the named path is reserved for addresses
    // ≥ 0x10000 where there's reasonable confidence they're in a
    // recognized data section).
    let space = con(0, 8);
    let addr = con(0x4000, 8);
    let r8 = reg(8, 8);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("t257_unknown_global", body);
    let output = print_c(&func);

    assert!(
        output.contains("MEMORY[0x4000]"),
        "unanalyzable global should render with MEMORY[…] sigil: {output}"
    );
    assert!(
        output.contains("*(_QWORD *)MEMORY[0x4000]"),
        "8-byte load through MEMORY should wear the _QWORD * cast: {output}"
    );
}

#[test]
fn test_t257_load_known_section_emits_symbol() {
    // Load from an address that's in the symbol table (e.g. a named
    // .data global). The symbol name wins; MEMORY[…] must not appear.
    let space = con(0, 8);
    let addr = con(0x404000, 8);
    let r8 = reg(8, 8);

    let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
    let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

    let func = make_func("t257_known_global", body);

    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(0x404000u64, "g_named_var".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);

    assert!(
        output.contains("g_named_var"),
        "known-section global should keep its symbol name: {output}"
    );
    assert!(
        !output.contains("MEMORY["),
        "known-section global must NOT render via MEMORY[…]: {output}"
    );
}

#[test]
fn test_single_use_static_load_inlines_into_condition() {
    let space = con(0, 8);
    let addr = con(0x404000, 8);
    let loaded = Varnode::unique(0x100, 8);
    let cmp = Varnode::unique(0x200, 1);

    let load = IrInsn::with_output(IrOp::Load, loaded, smallvec![space, addr], 0x1000);
    let eq = IrInsn::with_output(IrOp::IntEqual, cmp, smallvec![loaded, con(0, 8)], 0x1004);
    let body = vec![
        HirNode::Statement(load),
        HirNode::Statement(eq),
        HirNode::If {
            cond: SsaVarnode {
                base: cmp,
                version: 0,
            },
            then_body: vec![HirNode::Return(None)],
            else_body: None,
        },
        HirNode::Return(None),
    ];

    let func = make_func("single_use_static_load_cond", body);
    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(0x404000u64, "g_flag".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);
    let body = function_body_text(&output, "single_use_static_load_cond");

    assert!(
        body.contains("if (g_flag == 0LL)"),
        "condition should read the static symbol directly:\n{body}"
    );
    assert!(
        !body.contains("= g_flag; // temp"),
        "single-use static load must not leak as a temp decl:\n{body}"
    );
}

#[test]
fn test_materialized_static_load_snapshot_is_not_reloaded_in_condition() {
    let space = con(0, 8);
    let addr = con(0x404000, 8);
    let loaded = Varnode::unique(0x100, 8);
    let cmp = Varnode::unique(0x200, 1);
    let sum = Varnode::unique(0x300, 8);

    let load = IrInsn::with_output(IrOp::Load, loaded, smallvec![space, addr], 0x1000);
    let use_loaded = IrInsn::with_output(IrOp::IntAdd, sum, smallvec![loaded, con(1, 8)], 0x1004);
    let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr, con(7, 8)], 0x1008);
    let eq = IrInsn::with_output(IrOp::IntEqual, cmp, smallvec![loaded, con(0, 8)], 0x100c);
    let body = vec![
        HirNode::Statement(load),
        HirNode::Statement(use_loaded),
        HirNode::Statement(store),
        HirNode::Statement(eq),
        HirNode::If {
            cond: SsaVarnode {
                base: cmp,
                version: 0,
            },
            then_body: vec![HirNode::Return(None)],
            else_body: None,
        },
        HirNode::Return(Some(SsaVarnode {
            base: sum,
            version: 0,
        })),
    ];

    let func = make_func("materialized_static_load_snapshot_cond", body);
    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(0x404000u64, "g_flag".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);
    let body = function_body_text(&output, "materialized_static_load_snapshot_cond");

    assert!(
        body.contains("v1 = g_flag;") || body.contains("v2 = g_flag;"),
        "multi-use static load should be materialized as a snapshot:\n{body}"
    );
    assert!(
        body.contains("g_flag = 7LL;"),
        "test should include the intervening write to the global:\n{body}"
    );
    assert!(
        body.contains("if (v1 == 0LL)") || body.contains("if (v2 == 0LL)"),
        "condition must use the materialized snapshot, not reload g_flag:\n{body}"
    );
    assert!(
        !body.contains("if (g_flag == 0LL)"),
        "condition must not reload a global after an intervening store:\n{body}"
    );
}

#[test]
fn test_materialized_stack_load_snapshot_is_not_reloaded_in_condition() {
    use unlace_ir::ssa::{StackFrame, StackLocal};

    let ram = con(1, 8);
    let stack_slot = Varnode::stack(8, 8);
    let loaded = Varnode::unique(0x100, 8);
    let cmp = Varnode::unique(0x200, 1);
    let sum = Varnode::unique(0x300, 8);

    let load = IrInsn::with_output(IrOp::Load, loaded, smallvec![ram, stack_slot], 0x1000);
    let use_loaded = IrInsn::with_output(IrOp::IntAdd, sum, smallvec![loaded, con(1, 8)], 0x1004);
    let store = IrInsn::without_output(IrOp::Store, smallvec![ram, stack_slot, con(7, 8)], 0x1008);
    let eq = IrInsn::with_output(IrOp::IntEqual, cmp, smallvec![loaded, con(0, 8)], 0x100c);
    let body = vec![
        HirNode::Statement(load),
        HirNode::Statement(use_loaded),
        HirNode::Statement(store),
        HirNode::Statement(eq),
        HirNode::If {
            cond: SsaVarnode {
                base: cmp,
                version: 0,
            },
            then_body: vec![HirNode::Return(None)],
            else_body: None,
        },
        HirNode::Return(Some(SsaVarnode {
            base: sum,
            version: 0,
        })),
    ];
    let mut func = make_func("materialized_stack_load_snapshot_cond", body);
    let mut locals = BTreeMap::new();
    locals.insert(
        8,
        StackLocal {
            offset: 8,
            size: 8,
            access_widths: vec![8],
            kind: Default::default(),
        },
    );
    func.stack_frame = Some(StackFrame {
        locals,
        frame_size: 8,
        max_pos_offset: 16,
        min_neg_offset: 0,
    });

    let output = print_c(&func);
    let body = function_body_text(&output, "materialized_stack_load_snapshot_cond");

    assert!(
        body.contains("v1 = v_8;") || body.contains("v2 = v_8;"),
        "multi-use stack load should be materialized as a snapshot:\n{body}"
    );
    assert!(
        body.contains("v_8 = 7LL;"),
        "test should include the intervening stack write:\n{body}"
    );
    assert!(
        body.contains("if (v1 == 0LL)") || body.contains("if (v2 == 0LL)"),
        "condition must use the materialized stack snapshot, not reload v_8:\n{body}"
    );
    assert!(
        !body.contains("if (v_8 == 0LL)"),
        "condition must not reload the stack slot after an intervening store:\n{body}"
    );
}

#[test]
fn test_single_use_static_load_keeps_indirect_call_target_named() {
    let space = con(0, 8);
    let addr = con(0x404000, 8);
    let loaded = Varnode::unique(0x100, 8);

    let load = IrInsn::with_output(IrOp::Load, loaded, smallvec![space, addr], 0x1000);
    let call = IrInsn::without_output(IrOp::Callind, smallvec![loaded], 0x1004);
    let body = vec![
        HirNode::Statement(load),
        HirNode::Statement(call),
        HirNode::Return(None),
    ];

    let func = make_func("single_use_static_load_call_target", body);
    let mut symbols = std::collections::BTreeMap::new();
    symbols.insert(0x404000u64, "g_funcptr".to_string());

    let output = super::print_c_full(&func, None, None, Some(&symbols), None);
    let body = function_body_text(&output, "single_use_static_load_call_target");

    assert!(
        body.contains("pfn = g_funcptr;"),
        "indirect-call target load should stay materialized as pfn:\n{body}"
    );
    assert!(
        body.contains("((void (*)())pfn)();") || body.contains("((__int64 (*)())pfn)();"),
        "CALLIND should use the named pfn target:\n{body}"
    );
    assert!(
        !body.contains("((void (*)())g_funcptr)()")
            && !body.contains("((__int64 (*)())g_funcptr)()"),
        "static call target must not be inlined into the cast:\n{body}"
    );
}

// ---------------------------------------------------------------------
// t258: union-tagged BYREF parameters
// ---------------------------------------------------------------------

#[test]
fn test_t258_byref_param_two_types_emits_union() {
    // BYREF param index 0 with two incompatible consumption types
    // (Int(4) + Float) → header renders as
    //   `union { int *a; float *b; } *p0`
    // instead of the regular `int *p0 /* BYREF */`.
    let mut func = make_func("t258_two_types", vec![HirNode::Return(None)]);
    // params[0] is the BYREF candidate. The base type is whatever
    // signature recovery inferred; the union annotation overrides it.
    func.params = vec![("p0".to_string(), PrimitiveType::Int(4))];
    func.byref_params.insert(0);

    let mut ann = super::PrinterAnnotations::default();
    ann.byref_union_types
        .insert(0, vec![PrimitiveType::Int(4), PrimitiveType::Float]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    let header = output
        .lines()
        .find(|l| l.contains("t258_two_types("))
        .unwrap_or_else(|| panic!("function header missing: {output}"));
    assert!(
        header.contains("union {"),
        "two-type BYREF should render with union: {header:?}"
    );
    assert!(
        header.contains("*a;") && header.contains("*b;"),
        "union members should be `*a; *b;`: {header:?}"
    );
    assert!(
        header.contains("} *p0"),
        "union should wrap the pointer name p0: {header:?}"
    );
    assert!(
        !header.contains("/* BYREF */"),
        "union form supersedes the BYREF comment: {header:?}"
    );
}

#[test]
fn test_t258_byref_param_single_type_keeps_regular_form() {
    // BYREF param with only one observed consumption type → no union,
    // standard `T name /* BYREF */` rendering.
    let mut func = make_func("t258_one_type", vec![HirNode::Return(None)]);
    func.params = vec![("p0".to_string(), PrimitiveType::Int(4))];
    func.byref_params.insert(0);

    let mut ann = super::PrinterAnnotations::default();
    ann.byref_union_types.insert(0, vec![PrimitiveType::Int(4)]);

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    let header = output
        .lines()
        .find(|l| l.contains("t258_one_type("))
        .unwrap_or_else(|| panic!("function header missing: {output}"));
    assert!(
        !header.contains("union {"),
        "single-type BYREF must NOT use union: {header:?}"
    );
    assert!(
        header.contains("/* BYREF */"),
        "single-type BYREF keeps the BYREF comment: {header:?}"
    );
}

// ---------------------------------------------------------------------
// t259: volatile annotation for MMIO patterns
// ---------------------------------------------------------------------

#[test]
fn test_t259_repeated_loads_get_volatile() {
    // Two back-to-back Loads of the same constant address (in the
    // MEMORY[…] range, 0x1000..0x10000) → MMIO classification →
    // the dereference cast wears `volatile`.
    let space = con(0, 8);
    let addr = con(0x4000, 8);
    let r0 = reg(0, 8);
    let r8 = reg(8, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r0,
            smallvec![space, addr],
            0x1000,
        )),
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, addr],
            0x1008,
        )),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = make_func("t259_mmio", body);
    let output = print_c(&func);
    let body_only = super::strip_ida_typedefs(&output);

    assert!(
        body_only.contains("volatile _QWORD"),
        "QWORD MMIO load should render as `*(volatile _QWORD *)…`: {body_only}"
    );
}

#[test]
fn test_t259_single_load_no_volatile() {
    // A single Load of a constant address is a normal global access —
    // no MMIO signal, no volatile qualifier.
    let space = con(0, 8);
    let addr = con(0x5000, 8);
    let r8 = reg(8, 8);

    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, addr],
            0x1000,
        )),
        HirNode::Return(Some(sv(8, 8))),
    ];

    let func = make_func("t259_normal_global", body);
    let output = print_c(&func);
    // The IDA_TYPEDEFS preamble itself mentions `volatile` (for the
    // MEMORY sigil declaration). Strip the typedefs before asserting.
    let body_only = super::strip_ida_typedefs(&output);

    assert!(
        !body_only.contains("volatile"),
        "single load of a constant address must NOT be volatile: {body_only}"
    );
}

// ---------------------------------------------------------------------
// t260: __usercall / __userpurge annotation for non-ABI calling conventions
// ---------------------------------------------------------------------

#[test]
fn test_t260_nonstandard_regs_emit_usercall() {
    // Function whose params live in R10 and RDX — diverges from the
    // SysV x86-64 RDI/RSI sequence → the pipeline-side detector pins
    // a usercall spec with these registers, and the header emits:
    //   __int64 __usercall fn@<rax>(int p0@<r10>, int p1@<rdx>) { … }
    let mut func = make_func("t260_usercall", vec![HirNode::Return(None)]);
    func.params = vec![
        ("p0".to_string(), PrimitiveType::Int(4)),
        ("p1".to_string(), PrimitiveType::Int(4)),
    ];

    let ann = super::PrinterAnnotations {
        usercall: Some(super::UsercallSpec {
            return_reg: "rax".to_string(),
            param_regs: vec!["r10".to_string(), "rdx".to_string()],
            purge: false,
        }),
        ..Default::default()
    };

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    let header = output
        .lines()
        .find(|l| l.contains("t260_usercall"))
        .unwrap_or_else(|| panic!("function header missing: {output}"));
    assert!(
        header.contains("__usercall"),
        "non-standard regs should pin __usercall: {header:?}"
    );
    assert!(
        header.contains("t260_usercall@<rax>"),
        "header should carry the return-reg sigil: {header:?}"
    );
    assert!(
        header.contains("p0@<r10>"),
        "param 0 should be tagged with @<r10>: {header:?}"
    );
    assert!(
        header.contains("p1@<rdx>"),
        "param 1 should be tagged with @<rdx>: {header:?}"
    );
}

#[test]
fn test_t260_standard_regs_no_usercall() {
    // No usercall spec attached → no __usercall annotation; the
    // regular header form (with whatever calling-convention sigil
    // the FunctionHeaderInfo carries) is emitted instead.
    let mut func = make_func("t260_standard", vec![HirNode::Return(None)]);
    func.params = vec![("p0".to_string(), PrimitiveType::Int(4))];

    let ann = super::PrinterAnnotations::default();
    // `ann.usercall == None` → standard path.

    let output =
        super::print_c_with_annotations(&func, None, None, None, None, None, None, Some(&ann));

    let header = output
        .lines()
        .find(|l| l.contains("t260_standard"))
        .unwrap_or_else(|| panic!("function header missing: {output}"));
    assert!(
        !header.contains("__usercall"),
        "standard SysV registers must NOT trigger __usercall: {header:?}"
    );
    assert!(
        !header.contains("@<"),
        "standard header must not carry @<reg> suffixes: {header:?}"
    );
}

// ----- Batch 19 — annotated-helper fallback for unsupported ops -----
//
// Done-when: "The printer can fail gracefully with annotated helper
// calls, but it does not emit invalid C for ordinary supported
// constructs." When an opcode falls through every dispatch arm we
// now emit `__unlace_<opname>(args)` instead of `/* OP */ 0` (or
// `/* OP */;` at statement level). The helper-call shape is valid C,
// preserves the opcode identifier as a stable name, and keeps the
// input operands visible to readers and downstream textual passes.

#[test]
fn test_b19_unsupported_helper_name_lowercases_opname() {
    // The helper identifier is `__unlace_` + lower(IrOp::name()).
    // Use a stable opcode with a known name.
    let insn = IrInsn::with_output(
        IrOp::Insert,
        reg(0, 4),
        smallvec![reg(8, 4), reg(16, 4)],
        0x1000,
    );
    let name = super::unsupported_helper_name(&insn);
    assert_eq!(name, "__unlace_insert");
}

#[test]
fn test_b19_unsupported_op_renders_helper_call_in_statement() {
    // `IrOp::Insert` is not dispatched by `emit_expr_with_prec` /
    // `emit_statement`, so it falls into the fallback arm. The
    // statement should render as `<lhs> = __unlace_insert(<args>);`
    // (output path) — annotated, valid C, inputs visible.
    let dst = reg(0, 4);
    let a = reg(8, 4);
    let b = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Insert,
            dst,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("b19_unsupported_expr", body);
    let output = print_c(&func);

    // Helper call appears with both inputs preserved.
    assert!(
        output.contains("__unlace_insert("),
        "expected annotated helper call, got:\n{output}"
    );
    // Comment-only placeholder must NOT appear — that path silently
    // drops operand visibility.
    assert!(
        !output.contains("/* INSERT */ 0") && !output.contains("/* INSERT */;"),
        "unsupported op must not fall back to a comment placeholder:\n{output}"
    );
}

#[test]
fn test_b19_unsupported_op_no_output_renders_helper_statement() {
    // An unsupported opcode with no `output` slot hits the
    // `emit_statement` / `emit_nodes` fallback paths. Those should
    // emit `__unlace_<op>(args);` (terminated, valid C) rather than
    // `/* OP */;`.
    let a = reg(8, 4);
    let b = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::without_output(
            IrOp::Insert,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("b19_unsupported_stmt", body);
    let output = print_c(&func);

    assert!(
        output.contains("__unlace_insert("),
        "expected statement-level helper call, got:\n{output}"
    );
    assert!(
        !output.contains("/* INSERT */;"),
        "must not emit comment-only fallback:\n{output}"
    );
}

#[test]
fn test_b19_unsupported_helper_call_is_valid_c() {
    // `gcc -fsyntax-only` on the rendered output must succeed —
    // proving the fallback emits well-formed C even for ops the
    // printer doesn't have a dedicated arm for.
    let gcc_available = std::process::Command::new("gcc")
        .arg("--version")
        .output()
        .is_ok();
    if !gcc_available {
        eprintln!("gcc not found, skipping test_b19_unsupported_helper_call_is_valid_c");
        return;
    }

    let dst = reg(0, 4);
    let a = reg(8, 4);
    let b = reg(16, 4);
    let body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::Insert,
            dst,
            smallvec![a, b],
            0x1000,
        )),
        HirNode::Return(None),
    ];
    let func = make_func("b19_helper_valid", body);
    let source = print_c(&func);

    // Provide a prototype for the helper so the compiler accepts the
    // call without complaining about implicit declarations.
    let preamble = "\
typedef unsigned int unsigned__int32;
typedef int __int32;
extern int __unlace_insert();
";
    let full = format!("{}\n{}", preamble, source);

    let mut child = std::process::Command::new("gcc")
        .args([
            "-fsyntax-only",
            "-x",
            "c",
            "-",
            "-std=c11",
            "-w", // suppress warnings — we only need parse + type-check
        ])
        .stdin(std::process::Stdio::piped())
        .stdout(std::process::Stdio::piped())
        .stderr(std::process::Stdio::piped())
        .spawn()
        .expect("spawn gcc");
    {
        use std::io::Write;
        child
            .stdin
            .as_mut()
            .expect("stdin")
            .write_all(full.as_bytes())
            .expect("write");
    }
    let out = child.wait_with_output().expect("wait gcc");
    assert!(
        out.status.success(),
        "gcc rejected annotated-helper output:\n--- source ---\n{}\n--- stderr ---\n{}",
        full,
        String::from_utf8_lossy(&out.stderr)
    );
}

#[test]
fn frame_indexed_signed_const_value_sign_extends_at_width() {
    use super::signed_const_value;
    // The `-80` (0xffffffffffffffb0) displacement folded into the buf store
    // address must read back as -80, not a huge positive u64.
    assert_eq!(signed_const_value(&con(0xffffffffffffffb0, 8)), -80);
    assert_eq!(signed_const_value(&con(0xb0, 1)), -80);
    assert_eq!(signed_const_value(&con(0x10, 8)), 16);
    assert_eq!(signed_const_value(&con(0xfffffffc, 4)), -4);
}

#[test]
fn parse_dwarf_array_local_recovers_name_type_and_dims() {
    use super::parse_dwarf_array_local;
    // The `int32_t buf[16]` DWARF aggregate maps to a 16-element int array.
    let arr = parse_dwarf_array_local("buf", "int32_t[16]").expect("array parsed");
    assert_eq!(arr.name, "buf");
    assert_eq!(arr.elem_size, 4);
    assert_eq!(arr.elem_count, 16);
    assert_eq!(arr.elem_size * arr.elem_count, 64);

    // Scalars and multi-dimensional / pointer-element arrays are not
    // materialized (kept as their existing rendering).
    assert!(parse_dwarf_array_local("r", "int32_t").is_none());
    assert!(parse_dwarf_array_local("m", "int32_t[4][4]").is_none());
    assert!(parse_dwarf_array_local("p", "int32_t *[8]").is_none());
    assert!(parse_dwarf_array_local("z", "int32_t[0]").is_none());
}

#[test]
fn c_primitive_type_size_covers_ida_and_stdint_spellings() {
    use super::c_primitive_type_size;
    assert_eq!(c_primitive_type_size("int"), Some(4));
    assert_eq!(c_primitive_type_size("int32_t"), Some(4));
    assert_eq!(c_primitive_type_size("char"), Some(1));
    assert_eq!(c_primitive_type_size("__int64"), Some(8));
    assert_eq!(c_primitive_type_size("uint64_t"), Some(8));
    assert_eq!(c_primitive_type_size("struct Foo"), None);
}

#[test]
fn dwarf_local_summary_suppresses_materialized_array_comment() {
    use super::emit_dwarf_local_summary;
    // Once the `int buf[16]` array is materialized as a real declaration, the
    // `// DWARF locals` comment must not also list it (which would
    // double-count the array type fact); other locals stay visible.
    let df = unlace_loader::FunctionDebugInfo {
        name: "main".to_string(),
        linkage_name: None,
        low_pc: 0,
        high_pc: None,
        ranges: Vec::new(),
        params: Vec::new(),
        return_type: None,
        decl: None,
        cfa_to_rbp_delta: Some(16),
        locals: vec![
            unlace_loader::LocalVariable {
                name: "buf".to_string(),
                type_name: Some("int32_t[16]".to_string()),
                frame_offset: Some(-96),
                locations: Vec::new(),
                locations_dwarf_v5: Vec::new(),
            },
            unlace_loader::LocalVariable {
                name: "r".to_string(),
                type_name: Some("int32_t".to_string()),
                frame_offset: Some(-100),
                locations: Vec::new(),
                locations_dwarf_v5: Vec::new(),
            },
        ],
    };

    let mut materialized = std::collections::BTreeSet::new();
    materialized.insert("buf".to_string());
    let mut out = String::new();
    emit_dwarf_local_summary(Some(&df), &materialized, &mut out);
    assert!(
        !out.contains("buf[16]"),
        "materialized array comment should be suppressed: {out:?}"
    );
    assert!(out.contains("r;"), "non-materialized local kept: {out:?}");

    // With nothing materialized, the buf comment is present (baseline form).
    let mut out2 = String::new();
    emit_dwarf_local_summary(Some(&df), &std::collections::BTreeSet::new(), &mut out2);
    assert!(
        out2.contains("buf[16]"),
        "baseline comment present: {out2:?}"
    );
}

/// `win64_remote.exe`: two loop-carried copies (`x = y`, `y = x`) made the
/// index-term walk recurse until the stack overflowed.
#[test]
fn index_term_walk_stops_on_copy_cycle() {
    use super::{PrintCtx, extract_index_term};

    let (x, y) = (reg(56, 8), reg(48, 8));
    let sv = |base, version| SsaVarnode { base, version };
    let mut ctx = PrintCtx::new(
        None,
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
        BTreeMap::new(),
    );
    for (stmt, dst, src) in [(1, x, y), (2, y, x)] {
        ctx.stmt_insns.insert(
            stmt,
            IrInsn::with_output(IrOp::Copy, dst, smallvec![src], 0x1000 + u64::from(stmt)),
        );
        ctx.stmt_inputs.insert(stmt, vec![sv(src, 1)]);
        ctx.stmt_outputs.insert(stmt, Some(sv(dst, 1)));
        ctx.sv_defining_stmt.insert(sv(dst, 1), stmt);
    }

    assert_eq!(extract_index_term(&x, None, 3, &ctx), None);
}
