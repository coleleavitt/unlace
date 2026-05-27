//! Boolean simplification pass using Quine-McCluskey minimization.
//!
//! For small boolean expressions (≤ 6 input variables), this pass:
//! 1. Extracts the truth table from a nested BoolAnd/BoolOr/BoolNegate tree.
//! 2. Runs Quine-McCluskey to find prime implicants.
//! 3. Rebuilds as a simplified HIR condition (sum-of-products form).

use std::collections::{BTreeMap, BTreeSet};

use smallvec::smallvec;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Maximum number of input variables we'll attempt QM minimization on.
const MAX_VARS: usize = 6;
/// Avoid spending unbounded recursion on malformed or cyclic def-use chains.
const MAX_EXPR_DEPTH: usize = 128;

/// Boolean simplification pass (Espresso-lite via Quine-McCluskey).
pub struct BoolSimplifyPass;

impl Pass for BoolSimplifyPass {
    fn name(&self) -> &str {
        "bool-simplify"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let def_map = build_def_map(func);
        let mut changed = false;
        let mut next_unique = find_max_unique_offset(func) + 8;

        for block in func.function.blocks.values_mut() {
            let mut new_insns: Vec<IrInsn> = Vec::with_capacity(block.insns.len());

            for insn in &block.insns {
                if let Some(simplified) = try_simplify(insn, &def_map, &mut next_unique) {
                    new_insns.extend(simplified);
                    changed = true;
                } else {
                    new_insns.push(insn.clone());
                }
            }

            block.insns = new_insns;
        }

        Ok(changed)
    }
}

// ── IR helpers ──────────────────────────────────────────────────────────

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, IrInsn> {
    let mut map = BTreeMap::new();
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output
                && output.space != SpaceId::Const
            {
                map.insert(output, insn.clone());
            }
        }
    }
    map
}

fn find_max_unique_offset(func: &SsaFunction) -> u64 {
    let mut max_offset = 0u64;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output
                && output.space == SpaceId::Unique
            {
                max_offset = max_offset.max(output.offset);
            }
            for input in &insn.inputs {
                if input.space == SpaceId::Unique {
                    max_offset = max_offset.max(input.offset);
                }
            }
        }
    }
    max_offset
}

// ── Expression tree extraction ──────────────────────────────────────────

/// A boolean expression tree suitable for truth-table evaluation.
#[derive(Clone, Debug, PartialEq, Eq)]
enum BoolExpr {
    Var(usize), // index into the variable list
    Not(Box<BoolExpr>),
    And(Box<BoolExpr>, Box<BoolExpr>),
    Or(Box<BoolExpr>, Box<BoolExpr>),
}

impl BoolExpr {
    fn eval(&self, assignments: &[bool]) -> bool {
        match self {
            BoolExpr::Var(idx) => assignments[*idx],
            BoolExpr::Not(e) => !e.eval(assignments),
            BoolExpr::And(a, b) => a.eval(assignments) && b.eval(assignments),
            BoolExpr::Or(a, b) => a.eval(assignments) || b.eval(assignments),
        }
    }

    fn depth(&self) -> usize {
        match self {
            BoolExpr::Var(_) => 0,
            BoolExpr::Not(e) => 1 + e.depth(),
            BoolExpr::And(a, b) | BoolExpr::Or(a, b) => 1 + a.depth().max(b.depth()),
        }
    }
}

/// Extract a BoolExpr tree from IR starting at `root`. Returns None if the
/// expression is too complex (> MAX_VARS leaves) or uses unsupported ops.
fn extract_expr(
    root: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
    vars: &mut Vec<Varnode>,
) -> Option<BoolExpr> {
    let mut visiting = BTreeSet::new();
    extract_expr_inner(root, def_map, vars, &mut visiting, 0)
}

fn extract_expr_inner(
    root: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
    vars: &mut Vec<Varnode>,
    visiting: &mut BTreeSet<Varnode>,
    depth: usize,
) -> Option<BoolExpr> {
    if depth >= MAX_EXPR_DEPTH {
        return None;
    }
    if root.space == SpaceId::Const {
        // Constants: true → AND identity, false → OR identity
        return None; // Don't try to QM-minimize expressions with embedded constants
    }

    if !visiting.insert(*root) {
        return None;
    }

    if let Some(insn) = def_map.get(root) {
        let expr = match insn.op {
            IrOp::BoolAnd if insn.inputs.len() == 2 => {
                let a = extract_expr_inner(&insn.inputs[0], def_map, vars, visiting, depth + 1)?;
                let b = extract_expr_inner(&insn.inputs[1], def_map, vars, visiting, depth + 1)?;
                Some(BoolExpr::And(Box::new(a), Box::new(b)))
            }
            IrOp::BoolOr if insn.inputs.len() == 2 => {
                let a = extract_expr_inner(&insn.inputs[0], def_map, vars, visiting, depth + 1)?;
                let b = extract_expr_inner(&insn.inputs[1], def_map, vars, visiting, depth + 1)?;
                Some(BoolExpr::Or(Box::new(a), Box::new(b)))
            }
            IrOp::BoolNegate if insn.inputs.len() == 1 => {
                let inner =
                    extract_expr_inner(&insn.inputs[0], def_map, vars, visiting, depth + 1)?;
                Some(BoolExpr::Not(Box::new(inner)))
            }
            _ => leaf_expr(root, vars),
        };
        visiting.remove(root);
        expr
    } else {
        let expr = leaf_expr(root, vars);
        visiting.remove(root);
        expr
    }
}

fn leaf_expr(root: &Varnode, vars: &mut Vec<Varnode>) -> Option<BoolExpr> {
    // No defining instruction (e.g., function parameter / register), or an
    // opaque boolean-producing instruction.
    let idx = if let Some(pos) = vars.iter().position(|v| v == root) {
        pos
    } else {
        if vars.len() >= MAX_VARS {
            return None;
        }
        vars.push(*root);
        vars.len() - 1
    };
    Some(BoolExpr::Var(idx))
}

// ── Quine-McCluskey ─────────────────────────────────────────────────────

/// An implicant with `num_vars` positions, each being 0, 1, or '-' (don't care).
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
struct Implicant {
    /// For each variable position: Some(true) = must be 1, Some(false) = must be 0, None = don't care
    bits: Vec<Option<bool>>,
}

impl Implicant {
    fn from_minterm(minterm: usize, num_vars: usize) -> Self {
        let mut bits = Vec::with_capacity(num_vars);
        for i in (0..num_vars).rev() {
            bits.push(Some((minterm >> i) & 1 == 1));
        }
        Implicant { bits }
    }

    /// Try to combine two implicants that differ in exactly one position.
    fn combine(&self, other: &Self) -> Option<Self> {
        let mut diff_pos = None;
        for (i, (a, b)) in self.bits.iter().zip(other.bits.iter()).enumerate() {
            if a != b {
                if diff_pos.is_some() {
                    return None; // More than one difference
                }
                diff_pos = Some(i);
            }
        }
        let pos = diff_pos?; // Exactly one difference
        let mut combined = self.bits.clone();
        combined[pos] = None; // Mark as don't-care
        Some(Implicant { bits: combined })
    }

    /// Returns the number of literal positions (non-don't-care).
    fn literal_count(&self) -> usize {
        self.bits.iter().filter(|b| b.is_some()).count()
    }

    /// Check if this implicant covers a given minterm.
    fn covers(&self, minterm: usize, num_vars: usize) -> bool {
        for (i, bit) in self.bits.iter().enumerate() {
            if let Some(val) = bit {
                let minterm_bit = (minterm >> (num_vars - 1 - i)) & 1 == 1;
                if *val != minterm_bit {
                    return false;
                }
            }
        }
        true
    }
}

/// Run Quine-McCluskey on a set of minterms to find prime implicants,
/// then select a minimal cover.
fn quine_mccluskey(minterms: &[usize], num_vars: usize) -> Vec<Implicant> {
    if minterms.is_empty() {
        return Vec::new();
    }

    // Phase 1: Find all prime implicants
    let mut current: Vec<Implicant> = minterms
        .iter()
        .map(|&m| Implicant::from_minterm(m, num_vars))
        .collect();

    let mut prime_implicants: Vec<Implicant> = Vec::new();

    loop {
        let mut next: Vec<Implicant> = Vec::new();
        let mut used = vec![false; current.len()];

        for i in 0..current.len() {
            for j in (i + 1)..current.len() {
                if let Some(combined) = current[i].combine(&current[j]) {
                    if !next.contains(&combined) {
                        next.push(combined);
                    }
                    used[i] = true;
                    used[j] = true;
                }
            }
        }

        for (i, imp) in current.iter().enumerate() {
            if !used[i] && !prime_implicants.contains(imp) {
                prime_implicants.push(imp.clone());
            }
        }

        if next.is_empty() {
            break;
        }
        current = next;
    }

    // Phase 2: Greedy minimum cover selection
    select_minimum_cover(&prime_implicants, minterms, num_vars)
}

/// Greedy cover selection: pick essential PIs first, then greedy largest-cover.
fn select_minimum_cover(
    prime_implicants: &[Implicant],
    minterms: &[usize],
    num_vars: usize,
) -> Vec<Implicant> {
    let mut uncovered: Vec<bool> = vec![true; minterms.len()];
    let mut selected: Vec<Implicant> = Vec::new();

    // Find essential prime implicants (cover a minterm that no other PI covers)
    for (mi, &minterm) in minterms.iter().enumerate() {
        if !uncovered[mi] {
            continue;
        }
        let covering: Vec<usize> = prime_implicants
            .iter()
            .enumerate()
            .filter(|(_, pi)| pi.covers(minterm, num_vars))
            .map(|(idx, _)| idx)
            .collect();
        if covering.len() == 1 {
            let pi = &prime_implicants[covering[0]];
            if !selected.contains(pi) {
                selected.push(pi.clone());
                // Mark all minterms covered by this PI
                for (mj, &mt) in minterms.iter().enumerate() {
                    if pi.covers(mt, num_vars) {
                        uncovered[mj] = false;
                    }
                }
            }
        }
    }

    // Greedy cover remaining uncovered minterms
    while uncovered.iter().any(|&u| u) {
        let mut best_pi = None;
        let mut best_count = 0;

        for pi in prime_implicants {
            if selected.contains(pi) {
                continue;
            }
            let count = minterms
                .iter()
                .enumerate()
                .filter(|&(mi, &mt)| uncovered[mi] && pi.covers(mt, num_vars))
                .count();
            if count > best_count {
                best_count = count;
                best_pi = Some(pi.clone());
            }
        }

        if let Some(pi) = best_pi {
            for (mi, &mt) in minterms.iter().enumerate() {
                if pi.covers(mt, num_vars) {
                    uncovered[mi] = false;
                }
            }
            selected.push(pi);
        } else {
            break; // Should not happen with valid input
        }
    }

    selected
}

// ── IR reconstruction ───────────────────────────────────────────────────

/// Build IR instructions for a sum-of-products expression from QM result.
fn build_sop_ir(
    implicants: &[Implicant],
    vars: &[Varnode],
    output: Varnode,
    addr: u64,
    next_unique: &mut u64,
) -> Vec<IrInsn> {
    if implicants.is_empty() {
        // All false → constant 0
        return vec![IrInsn::with_output(
            IrOp::Copy,
            output,
            smallvec![Varnode::constant(0, output.size)],
            addr,
        )];
    }

    let _num_vars = vars.len();
    let mut insns = Vec::new();
    let mut product_outputs: Vec<Varnode> = Vec::new();

    for imp in implicants {
        let mut term_inputs: Vec<Varnode> = Vec::new();

        for (i, bit) in imp.bits.iter().enumerate() {
            match bit {
                Some(true) => term_inputs.push(vars[i]),
                Some(false) => {
                    // Need a BoolNegate of vars[i]
                    let neg_out = Varnode::unique(*next_unique, 1);
                    *next_unique += 8;
                    insns.push(IrInsn::with_output(
                        IrOp::BoolNegate,
                        neg_out,
                        smallvec![vars[i]],
                        addr,
                    ));
                    term_inputs.push(neg_out);
                }
                None => {} // don't-care, skip
            }
        }

        if term_inputs.is_empty() {
            // All don't-care → tautology product (always true)
            product_outputs.push(Varnode::constant(1, 1));
        } else if term_inputs.len() == 1 {
            product_outputs.push(term_inputs[0]);
        } else {
            // Chain BoolAnd for this product term
            let mut acc = term_inputs[0];
            for &inp in &term_inputs[1..] {
                let and_out = Varnode::unique(*next_unique, 1);
                *next_unique += 8;
                insns.push(IrInsn::with_output(
                    IrOp::BoolAnd,
                    and_out,
                    smallvec![acc, inp],
                    addr,
                ));
                acc = and_out;
            }
            product_outputs.push(acc);
        }
    }

    // Chain BoolOr for the sum of products
    if product_outputs.len() == 1 {
        insns.push(IrInsn::with_output(
            IrOp::Copy,
            output,
            smallvec![product_outputs[0]],
            addr,
        ));
    } else {
        let mut acc = product_outputs[0];
        for (i, &prod) in product_outputs[1..].iter().enumerate() {
            let is_last = i == product_outputs.len() - 2;
            let or_out = if is_last {
                output
            } else {
                let tmp = Varnode::unique(*next_unique, 1);
                *next_unique += 8;
                tmp
            };
            insns.push(IrInsn::with_output(
                IrOp::BoolOr,
                or_out,
                smallvec![acc, prod],
                addr,
            ));
            acc = or_out;
        }
    }

    insns
}

// ── Main simplification entry point ─────────────────────────────────────

fn try_simplify(
    insn: &IrInsn,
    def_map: &BTreeMap<Varnode, IrInsn>,
    next_unique: &mut u64,
) -> Option<Vec<IrInsn>> {
    let output = insn.output?;

    // Only try to simplify BoolAnd / BoolOr at the root
    match insn.op {
        IrOp::BoolAnd | IrOp::BoolOr => {}
        _ => return None,
    }

    // Extract the expression tree
    let mut vars: Vec<Varnode> = Vec::new();
    let expr = extract_expr(&output, def_map, &mut vars)?;

    // Need at least 2 variables to be worth simplifying
    if vars.len() < 2 || vars.len() > MAX_VARS {
        return None;
    }

    // Must have some complexity to be worth simplifying
    if expr.depth() < 2 {
        return None;
    }

    let num_vars = vars.len();
    let num_combinations = 1usize << num_vars;

    // Compute truth table
    let mut minterms: Vec<usize> = Vec::new();
    let mut assignments = vec![false; num_vars];

    for combo in 0..num_combinations {
        for (i, slot) in assignments.iter_mut().enumerate() {
            *slot = (combo >> (num_vars - 1 - i)) & 1 == 1;
        }
        if expr.eval(&assignments) {
            minterms.push(combo);
        }
    }

    // Edge cases
    if minterms.is_empty() {
        // Always false
        return Some(vec![IrInsn::with_output(
            IrOp::Copy,
            output,
            smallvec![Varnode::constant(0, output.size)],
            insn.addr,
        )]);
    }
    if minterms.len() == num_combinations {
        // Always true
        return Some(vec![IrInsn::with_output(
            IrOp::Copy,
            output,
            smallvec![Varnode::constant(1, output.size)],
            insn.addr,
        )]);
    }

    // Run QM
    let implicants = quine_mccluskey(&minterms, num_vars);

    // Check if simplified form is actually simpler
    let simplified_complexity: usize = implicants.iter().map(|i| i.literal_count()).sum::<usize>()
        + implicants.len().saturating_sub(1); // OR connections
    let original_complexity = expr.depth() * 2; // rough heuristic

    if simplified_complexity >= original_complexity {
        return None;
    }

    // Build simplified IR
    let result = build_sop_ir(&implicants, &vars, output, insn.addr, next_unique);
    Some(result)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Test: `(a && b) || (a && !b)` → `a`
    ///
    /// This is the classic absorption rule: a ∧ (b ∨ ¬b) = a.
    #[test]
    fn test_a_and_b_or_a_and_not_b_simplifies_to_a() {
        let a = Varnode::reg(0, 1);
        let b = Varnode::reg(8, 1);
        let not_b = Varnode::unique(0, 1);
        let ab = Varnode::unique(8, 1);
        let a_notb = Varnode::unique(16, 1);
        let result = Varnode::unique(24, 1);

        let insns = vec![
            IrInsn::with_output(IrOp::BoolNegate, not_b, smallvec![b], 0x1000),
            IrInsn::with_output(IrOp::BoolAnd, ab, smallvec![a, b], 0x1004),
            IrInsn::with_output(IrOp::BoolAnd, a_notb, smallvec![a, not_b], 0x1008),
            IrInsn::with_output(IrOp::BoolOr, result, smallvec![ab, a_notb], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = BoolSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        // The result should be simplified to just `a` (via Copy)
        let block = ssa.function.blocks.values().next().expect("has block");
        let result_insn = block
            .insns
            .iter()
            .find(|i| i.output == Some(result))
            .unwrap();
        assert_eq!(result_insn.op, IrOp::Copy);
        assert_eq!(result_insn.inputs[0], a);
    }

    /// Test: `(a || b) && (a || !b)` → `a`
    ///
    /// Dual of absorption: a ∨ (b ∧ ¬b) = a via consensus theorem.
    #[test]
    fn test_a_or_b_and_a_or_not_b_simplifies_to_a() {
        let a = Varnode::reg(0, 1);
        let b = Varnode::reg(8, 1);
        let not_b = Varnode::unique(0, 1);
        let a_or_b = Varnode::unique(8, 1);
        let a_or_notb = Varnode::unique(16, 1);
        let result = Varnode::unique(24, 1);

        let insns = vec![
            IrInsn::with_output(IrOp::BoolNegate, not_b, smallvec![b], 0x1000),
            IrInsn::with_output(IrOp::BoolOr, a_or_b, smallvec![a, b], 0x1004),
            IrInsn::with_output(IrOp::BoolOr, a_or_notb, smallvec![a, not_b], 0x1008),
            IrInsn::with_output(IrOp::BoolAnd, result, smallvec![a_or_b, a_or_notb], 0x100C),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = BoolSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        // The result should be simplified to just `a` (via Copy)
        let block = ssa.function.blocks.values().next().expect("has block");
        let result_insn = block
            .insns
            .iter()
            .find(|i| i.output == Some(result))
            .unwrap();
        assert_eq!(result_insn.op, IrOp::Copy);
        assert_eq!(result_insn.inputs[0], a);
    }

    #[test]
    fn test_extract_expr_rejects_cyclic_def_use_graph() {
        let a = Varnode::unique(0, 1);
        let b = Varnode::unique(8, 1);
        let leaf = Varnode::reg(0, 1);

        let mut def_map = BTreeMap::new();
        def_map.insert(
            a,
            IrInsn::with_output(IrOp::BoolAnd, a, smallvec![b, leaf], 0x1000),
        );
        def_map.insert(
            b,
            IrInsn::with_output(IrOp::BoolOr, b, smallvec![a, leaf], 0x1004),
        );

        let mut vars = Vec::new();
        assert_eq!(extract_expr(&a, &def_map, &mut vars), None);
    }

    // ── Unit tests for Quine-McCluskey itself ───────────────────────────

    #[test]
    fn test_qm_single_var_identity() {
        // f(a) = a: minterms = {1}
        let result = quine_mccluskey(&[1], 1);
        assert_eq!(result.len(), 1);
        assert_eq!(result[0].bits, vec![Some(true)]);
    }

    #[test]
    fn test_qm_absorption() {
        // f(a, b) = ab + a!b = a: minterms = {2, 3} (a=1,b=0 and a=1,b=1)
        let result = quine_mccluskey(&[2, 3], 2);
        assert_eq!(result.len(), 1);
        // Should be [Some(true), None] meaning just "a"
        assert_eq!(result[0].bits, vec![Some(true), None]);
    }
}
