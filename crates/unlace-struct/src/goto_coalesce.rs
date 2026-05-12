//! Coalesce goto chains: when a label is immediately followed by an
//! unconditional `goto L2`, retarget every `goto L1` directly to `L2`.
//!
//! Pattern handled:
//! ```text
//!     goto L1;
//!     ...
//!   L1:
//!     goto L2;
//!   L2:
//!     ...
//! ```
//! becomes
//! ```text
//!     goto L2;
//!     ...
//!   L2:
//!     ...
//! ```
//! After coalescing, `L1` becomes unused and is stripped by the existing
//! [`crate::label_cleanup`] pass.
//!
//! This is purely a local rewrite: it inspects each scope independently for
//! `Label(L1), Goto(L2)` adjacencies and records `L1 -> L2` aliases. The
//! aliases are then resolved transitively (with cycle detection) and applied
//! to every `Goto` in the function.

use std::collections::{BTreeMap, BTreeSet};

use crate::hir::{HirFunction, HirNode, LabelId};

/// Coalesce `Label(L1) ; Goto(L2)` chains by retargeting all `Goto(L1)`
/// occurrences to point directly to `L2`.
///
/// This is safe because a label has no semantic effect of its own: jumping
/// to `L1` and immediately falling into `goto L2;` is equivalent to jumping
/// straight to `L2`. Self-referential chains (`L1: goto L1;`) are detected
/// and left untouched to avoid infinite resolution.
pub fn coalesce_goto_chains(func: &mut HirFunction) {
    let mut aliases = BTreeMap::new();
    collect_aliases(&func.body, &mut aliases);
    if aliases.is_empty() {
        return;
    }
    let resolved = resolve_aliases(&aliases);
    if resolved.is_empty() {
        return;
    }
    rewrite_gotos(&mut func.body, &resolved);
}

fn collect_aliases(nodes: &[HirNode], aliases: &mut BTreeMap<LabelId, LabelId>) {
    for window in nodes.windows(2) {
        if let (HirNode::Label(src), HirNode::Goto(dst)) = (&window[0], &window[1])
            && src != dst
        {
            // First-write wins: if the same label appears twice in the HIR
            // (which shouldn't happen but we defend against it), keep the
            // earliest mapping seen.
            aliases.entry(*src).or_insert(*dst);
        }
    }

    for node in nodes {
        match node {
            HirNode::Block(children) => collect_aliases(children, aliases),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_aliases(then_body, aliases);
                if let Some(else_body) = else_body {
                    collect_aliases(else_body, aliases);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_aliases(body, aliases);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_aliases(body, aliases);
                }
                if let Some(default) = default {
                    collect_aliases(default, aliases);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_aliases(try_body, aliases);
                for (_ty, body) in catch_arms {
                    collect_aliases(body, aliases);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_aliases(try_body, aliases);
                collect_aliases(finally_body, aliases);
            }
            _ => {}
        }
    }
}

/// Walk each `src -> dst` alias edge transitively and produce a flattened
/// map. Cycles (which can only arise from synthetic test inputs, but are
/// possible in principle) are broken by stopping at the first revisit so
/// the resolver always terminates.
fn resolve_aliases(
    aliases: &BTreeMap<LabelId, LabelId>,
) -> BTreeMap<LabelId, LabelId> {
    let mut resolved = BTreeMap::new();
    for &src in aliases.keys() {
        let mut current = src;
        let mut seen = BTreeSet::new();
        seen.insert(current);
        while let Some(&next) = aliases.get(&current) {
            if !seen.insert(next) {
                // Cycle: bail without recording an alias for `src`.
                current = src;
                break;
            }
            current = next;
        }
        if current != src {
            resolved.insert(src, current);
        }
    }
    resolved
}

fn rewrite_gotos(nodes: &mut [HirNode], aliases: &BTreeMap<LabelId, LabelId>) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => {
                if let Some(&new) = aliases.get(label) {
                    *label = new;
                }
            }
            HirNode::Block(children) => rewrite_gotos(children, aliases),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                rewrite_gotos(then_body, aliases);
                if let Some(else_body) = else_body {
                    rewrite_gotos(else_body, aliases);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                rewrite_gotos(body, aliases);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    rewrite_gotos(body, aliases);
                }
                if let Some(default) = default {
                    rewrite_gotos(default, aliases);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                rewrite_gotos(try_body, aliases);
                for (_ty, body) in catch_arms {
                    rewrite_gotos(body, aliases);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                rewrite_gotos(try_body, aliases);
                rewrite_gotos(finally_body, aliases);
            }
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::Varnode;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

    use super::*;

    fn func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            rust_async: None,
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
        }
    }

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

    #[test]
    fn coalesces_simple_chain() {
        // goto L1; ... L1: goto L2; L2: break;
        // Expected: goto L2 (L1 then unused, but cleanup is a separate pass).
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Label(LabelId(1)),
            HirNode::Goto(LabelId(2)),
            HirNode::Label(LabelId(2)),
            HirNode::Break,
        ]);
        coalesce_goto_chains(&mut hir);
        assert_eq!(hir.body[0], HirNode::Goto(LabelId(2)));
        // The L1: goto L2; sequence is also rewritten to L1: goto L2 (no-op
        // here because L2 is the chain endpoint).
        assert_eq!(hir.body[2], HirNode::Goto(LabelId(2)));
    }

    #[test]
    fn coalesces_transitive_chain() {
        // goto L1; L1: goto L2; L2: goto L3; L3: break;
        // After coalescing, every goto L1 / goto L2 should target L3.
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Label(LabelId(1)),
            HirNode::Goto(LabelId(2)),
            HirNode::Label(LabelId(2)),
            HirNode::Goto(LabelId(3)),
            HirNode::Label(LabelId(3)),
            HirNode::Break,
        ]);
        coalesce_goto_chains(&mut hir);
        // First goto: rewritten to L3.
        assert_eq!(hir.body[0], HirNode::Goto(LabelId(3)));
        // L1's trailing goto: also rewritten to L3 (no-op endpoint is itself).
        assert_eq!(hir.body[2], HirNode::Goto(LabelId(3)));
        // L2's trailing goto: stays at L3 (was already pointing there).
        assert_eq!(hir.body[4], HirNode::Goto(LabelId(3)));
    }

    #[test]
    fn rewrites_gotos_in_nested_scopes() {
        // if (cond) { goto L1; }
        // L1: goto L2;
        // L2: break;
        let mut hir = func(vec![
            HirNode::If {
                cond: cond(),
                then_body: vec![HirNode::Goto(LabelId(1))],
                else_body: None,
            },
            HirNode::Label(LabelId(1)),
            HirNode::Goto(LabelId(2)),
            HirNode::Label(LabelId(2)),
            HirNode::Break,
        ]);
        coalesce_goto_chains(&mut hir);
        let HirNode::If { then_body, .. } = &hir.body[0] else {
            panic!("expected If");
        };
        assert_eq!(then_body[0], HirNode::Goto(LabelId(2)));
    }

    #[test]
    fn leaves_self_loop_alone() {
        // L1: goto L1; — pathological self-loop, must not enter the alias map.
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Label(LabelId(1)),
            HirNode::Goto(LabelId(1)),
        ]);
        coalesce_goto_chains(&mut hir);
        assert_eq!(hir.body[0], HirNode::Goto(LabelId(1)));
        assert_eq!(hir.body[2], HirNode::Goto(LabelId(1)));
    }

    #[test]
    fn breaks_alias_cycles() {
        // Build an alias map that cycles: L1 -> L2 -> L1. Resolver must
        // terminate and emit no rewrite for either label.
        let mut aliases = BTreeMap::new();
        aliases.insert(LabelId(1), LabelId(2));
        aliases.insert(LabelId(2), LabelId(1));
        let resolved = resolve_aliases(&aliases);
        assert!(resolved.is_empty(), "cycle should produce no aliases");
    }

    #[test]
    fn no_op_when_no_chain() {
        // Plain `goto L1; L1: break;` has no chain to coalesce.
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Label(LabelId(1)),
            HirNode::Break,
        ]);
        let before = hir.body.clone();
        coalesce_goto_chains(&mut hir);
        assert_eq!(hir.body, before);
    }
}
