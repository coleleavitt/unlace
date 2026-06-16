//! MSVC SEH lowering: wrap HIR insn ranges in [`HirNode::TryCatch`] /
//! [`HirNode::TryFinally`] based on metadata recovered by
//! [`unlace_loader::seh`] (t175).
//!
//! The on-disk shape of MSVC EH consists of:
//!
//! - **FuncInfo**: anchors `unwind map`, `try-block map`, and
//!   `IP→state` map.
//! - **TryBlockMapEntry**: each `try { }` plus its `catch` handlers,
//!   keyed by state-value ranges.
//! - **HandlerType**: each `catch` clause's `TypeDescriptor` RVA,
//!   `disp_of_handler`, and adjectives.
//! - **IP→state map**: walks return-addresses back to unwind states.
//!
//! Resolving raw FuncInfo into HIR-friendly address ranges is the job
//! of the loader/CLI integration that combines these tables. This
//! module is the structurer-side surface that *consumes* such ranges
//! and rewrites the HIR tree. It deliberately operates on
//! [`SehRegion`]s (address ranges + handler types) rather than the
//! raw MSVC structs so we can drive it from tests and from the
//! eventual loader-side resolver without coupling layers.
//!
//! # Lowering rules
//!
//! For each [`SehRegion`] in `regions`, the wrapper walks the HIR tree
//! and identifies the maximal contiguous run of HIR nodes whose insn
//! addresses fall inside `try_range`. Those nodes become the `try_body`.
//! When the region carries `catch_arms`, the structurer expects the
//! handler insns to follow immediately in the parent scope; it slices
//! them out using each handler's `range` and pairs them with the
//! handler's exception type. A region with only `finally_range` becomes
//! a [`HirNode::TryFinally`].
//!
//! Nested regions are supported via natural recursion: after the
//! outer region is wrapped, the wrapper recurses into the new
//! `try_body` / `catch_arms[i]` / `finally_body` to lower any inner
//! regions whose ranges sit inside the outer try.
//!
//! Regions whose addresses do not match any HIR node are silently
//! skipped; this keeps the lowering safe in the face of partial /
//! lossy EH metadata.

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::Type;

use crate::hir::HirNode;

/// One MSVC EH region recovered from FuncInfo + try-block-map +
/// IP-to-state data.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SehRegion {
    /// Inclusive insn-address range of the `try { }` body.
    pub try_range: AddrRange,
    /// Either `Catch(arms)` (each arm carries a typed handler) or
    /// `Finally(range)` (a single `__finally` block).
    pub handler: SehHandler,
}

/// Discriminates between C++ EH `catch`-style and SEH `__finally`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SehHandler {
    /// One or more typed `catch (T e) { ... }` arms. Use
    /// [`Type::Primitive(PrimitiveType::Unknown)`] as the type for a
    /// `catch (...)` catch-all (mirrors MSVC's `p_type == 0` handler).
    Catch(Vec<SehCatchArm>),
    /// A single `__finally { ... }` block whose insns sit in this range.
    Finally(AddrRange),
}

/// One typed catch arm.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SehCatchArm {
    /// Exception type matched by this arm. The catch-all sentinel is
    /// `Type::Primitive(PrimitiveType::Unknown)`.
    pub ty: Type,
    /// Inclusive insn-address range of the handler body.
    pub range: AddrRange,
}

/// Inclusive insn-address range `[start, end]`.
///
/// The range is closed on both ends so that single-instruction handlers
/// (where `start == end`) lower correctly. Callers building ranges from
/// MSVC `IPtoStateMap` entries should set `end` to the address of the
/// last covered instruction, *not* one past it.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct AddrRange {
    pub start: u64,
    pub end: u64,
}

impl AddrRange {
    /// Construct a closed range. Panics if `start > end`.
    pub fn new(start: u64, end: u64) -> Self {
        debug_assert!(
            start <= end,
            "AddrRange start > end ({start:#x} > {end:#x})"
        );
        Self { start, end }
    }

    /// `true` when `addr` falls inside the closed range.
    pub fn contains(&self, addr: u64) -> bool {
        addr >= self.start && addr <= self.end
    }
}

/// Apply the recovered MSVC EH regions to a HIR body in place.
///
/// Each region is processed in order; later regions may end up nested
/// inside the bodies created by earlier ones (since the wrapper recurses
/// into newly-formed `try_body` / handler bodies looking for matches).
/// Regions that don't match any contiguous insn run are skipped.
///
/// Returns the number of regions successfully lowered. Callers that
/// need to surface unmatched metadata (e.g. for a CLI warning) can
/// compare this to `regions.len()`.
pub fn wrap_seh_regions(body: &mut Vec<HirNode>, regions: &[SehRegion]) -> usize {
    let mut matched = 0;
    for region in regions {
        if wrap_one_region(body, region) {
            matched += 1;
        }
    }
    matched
}

fn wrap_one_region(body: &mut Vec<HirNode>, region: &SehRegion) -> bool {
    // Try the current scope first.
    if let Some((start, end)) = find_node_range(body, region.try_range) {
        return apply_region_at(body, start, end, region);
    }
    // Recurse into children to find a deeper scope that contains the range.
    for node in body.iter_mut() {
        if recurse_into_node(node, region) {
            return true;
        }
    }
    false
}

fn recurse_into_node(node: &mut HirNode, region: &SehRegion) -> bool {
    match node {
        HirNode::Block(children) => wrap_one_region(children, region),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            if wrap_one_region(then_body, region) {
                return true;
            }
            if let Some(eb) = else_body.as_mut() {
                return wrap_one_region(eb, region);
            }
            false
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            wrap_one_region(body, region)
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                if wrap_one_region(body, region) {
                    return true;
                }
            }
            if let Some(d) = default.as_mut() {
                return wrap_one_region(d, region);
            }
            false
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            if wrap_one_region(try_body, region) {
                return true;
            }
            for (_, arm_body) in catch_arms.iter_mut() {
                if wrap_one_region(arm_body, region) {
                    return true;
                }
            }
            false
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => wrap_one_region(try_body, region) || wrap_one_region(finally_body, region),
        _ => false,
    }
}

fn apply_region_at(
    body: &mut Vec<HirNode>,
    try_start: usize,
    try_end_exclusive: usize,
    region: &SehRegion,
) -> bool {
    match &region.handler {
        SehHandler::Catch(arms) => {
            // Slice out the try-body run.
            let try_body: Vec<HirNode> = body.drain(try_start..try_end_exclusive).collect();

            // For each arm, slice its handler insns out of the parent
            // scope at the current insertion point (where the try-body
            // used to sit). This mirrors the on-disk layout: handler
            // funclets immediately follow the protected region in the
            // MSVC text section.
            let mut catch_arms: Vec<(Type, Vec<HirNode>)> = Vec::with_capacity(arms.len());
            let insert_at = try_start;
            for arm in arms {
                if let Some((s, e)) = find_node_range_from(body, insert_at, arm.range) {
                    let arm_body: Vec<HirNode> = body.drain(s..e).collect();
                    catch_arms.push((arm.ty.clone(), arm_body));
                    // s == insert_at after the drain; nothing to advance.
                } else {
                    // Handler insns not present in this scope — record
                    // an empty arm so the rendered shape still reflects
                    // the recovered metadata.
                    catch_arms.push((arm.ty.clone(), Vec::new()));
                }
            }

            body.insert(
                insert_at,
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                },
            );

            // Subsequent regions visit the newly-created bodies via
            // `recurse_into_node`, so nested-region lowering is
            // achieved naturally by processing the region list in
            // outer-to-inner order.
            true
        }
        SehHandler::Finally(fin_range) => {
            let try_body: Vec<HirNode> = body.drain(try_start..try_end_exclusive).collect();
            let insert_at = try_start;
            let finally_body: Vec<HirNode> =
                if let Some((s, e)) = find_node_range_from(body, insert_at, *fin_range) {
                    body.drain(s..e).collect()
                } else {
                    Vec::new()
                };
            body.insert(
                insert_at,
                HirNode::TryFinally {
                    try_body,
                    finally_body,
                },
            );
            true
        }
    }
}

/// Find the half-open `[start, end)` slice of `body` whose nodes' insn
/// addresses lie inside `range` and which is non-empty. Returns `None`
/// when no contiguous run matches.
fn find_node_range(body: &[HirNode], range: AddrRange) -> Option<(usize, usize)> {
    find_node_range_from(body, 0, range)
}

fn find_node_range_from(body: &[HirNode], from: usize, range: AddrRange) -> Option<(usize, usize)> {
    let mut start = None;
    let mut end = from;
    for (idx, node) in body.iter().enumerate().skip(from) {
        if let Some(addr) = node_first_addr(node) {
            if range.contains(addr) {
                if start.is_none() {
                    start = Some(idx);
                }
                end = idx + 1;
            } else if start.is_some() {
                // The run ended; further nodes in the scope are not
                // part of this region.
                break;
            }
        }
    }
    start.map(|s| (s, end))
}

/// First instruction address represented by `node`, if any. The wrapper
/// only matches nodes that carry an address; structural nodes
/// (`Goto`/`Label`/`Block`) recursively delegate to their first child.
fn node_first_addr(node: &HirNode) -> Option<u64> {
    match node {
        HirNode::Statement(insn) => Some(insn.addr),
        HirNode::Block(children) => children.iter().find_map(node_first_addr),
        HirNode::Commented { inner, .. } => node_first_addr(inner),
        HirNode::If { then_body, .. } => then_body.iter().find_map(node_first_addr),
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            body.iter().find_map(node_first_addr)
        }
        HirNode::Switch { cases, default, .. } => cases
            .iter()
            .find_map(|(_, b, _)| b.iter().find_map(node_first_addr))
            .or_else(|| {
                default
                    .as_ref()
                    .and_then(|d| d.iter().find_map(node_first_addr))
            }),
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => try_body.iter().find_map(node_first_addr).or_else(|| {
            catch_arms
                .iter()
                .find_map(|(_, b)| b.iter().find_map(node_first_addr))
        }),
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => try_body
            .iter()
            .find_map(node_first_addr)
            .or_else(|| finally_body.iter().find_map(node_first_addr)),
        _ => None,
    }
}

/// Convenience: build a catch-all type for use in `SehCatchArm::ty`.
///
/// MSVC encodes `catch (...)` as a `HandlerType` with `p_type == 0`.
/// The lowering uses the [`PrimitiveType::Unknown`] sentinel so the
/// C printer can detect the catch-all shape.
pub fn catch_all_type() -> Type {
    Type::Primitive(PrimitiveType::Unknown)
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    fn stmt(addr: u64) -> HirNode {
        // A no-op statement is enough — we only inspect `insn.addr`.
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            addr,
        ))
    }

    #[test]
    fn test_seh_lower_try_finally_simple() {
        // Insns 0x1000..=0x1002 are the try body; 0x1010..=0x1012 the
        // finally body. The wrapper must collapse both runs into a
        // single TryFinally node.
        let mut body = vec![
            stmt(0x1000),
            stmt(0x1001),
            stmt(0x1002),
            stmt(0x1010),
            stmt(0x1011),
            stmt(0x1012),
            HirNode::Return(None),
        ];
        let regions = vec![SehRegion {
            try_range: AddrRange::new(0x1000, 0x1002),
            handler: SehHandler::Finally(AddrRange::new(0x1010, 0x1012)),
        }];
        let n = wrap_seh_regions(&mut body, &regions);
        assert_eq!(n, 1, "exactly one region should match");
        assert_eq!(body.len(), 2, "try-finally + return → 2 nodes: {body:#?}");
        match &body[0] {
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                assert_eq!(try_body.len(), 3, "try body has 3 insns");
                assert_eq!(finally_body.len(), 3, "finally body has 3 insns");
            }
            other => panic!("expected TryFinally, got {other:?}"),
        }
    }

    #[test]
    fn test_seh_lower_try_catch_typed() {
        // Insns 0x2000..=0x2001 try; 0x2010..=0x2011 catch (int).
        let mut body = vec![
            stmt(0x2000),
            stmt(0x2001),
            stmt(0x2010),
            stmt(0x2011),
            HirNode::Return(None),
        ];
        let regions = vec![SehRegion {
            try_range: AddrRange::new(0x2000, 0x2001),
            handler: SehHandler::Catch(vec![SehCatchArm {
                ty: Type::int(4),
                range: AddrRange::new(0x2010, 0x2011),
            }]),
        }];
        let n = wrap_seh_regions(&mut body, &regions);
        assert_eq!(n, 1, "region should lower");
        assert_eq!(body.len(), 2, "try-catch + return → 2 nodes");
        match &body[0] {
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                assert_eq!(try_body.len(), 2);
                assert_eq!(catch_arms.len(), 1);
                assert_eq!(catch_arms[0].0, Type::int(4));
                assert_eq!(catch_arms[0].1.len(), 2);
            }
            other => panic!("expected TryCatch, got {other:?}"),
        }
    }

    #[test]
    fn test_seh_lower_nested_try() {
        // Outer try covers 0x3000..=0x3030 with a finally at 0x3040..=0x3041.
        // Inner try covers 0x3010..=0x3011 with a finally at 0x3020..=0x3021,
        // sitting *inside* the outer try.
        let mut body = vec![
            stmt(0x3000),
            stmt(0x3010),
            stmt(0x3011),
            stmt(0x3020),
            stmt(0x3021),
            stmt(0x3030),
            stmt(0x3040),
            stmt(0x3041),
            HirNode::Return(None),
        ];
        // Lower the *outer* region first; the inner region should then
        // recurse into the outer's `try_body`.
        let regions = vec![
            SehRegion {
                try_range: AddrRange::new(0x3000, 0x3030),
                handler: SehHandler::Finally(AddrRange::new(0x3040, 0x3041)),
            },
            SehRegion {
                try_range: AddrRange::new(0x3010, 0x3011),
                handler: SehHandler::Finally(AddrRange::new(0x3020, 0x3021)),
            },
        ];
        let n = wrap_seh_regions(&mut body, &regions);
        assert_eq!(n, 2, "both regions should lower");
        assert_eq!(body.len(), 2, "outer try-finally + return");
        let outer = &body[0];
        match outer {
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                assert_eq!(finally_body.len(), 2);
                // Inside the outer try-body we expect the inner
                // TryFinally to have been folded in.
                let inner = try_body
                    .iter()
                    .find(|n| matches!(n, HirNode::TryFinally { .. }))
                    .expect("nested TryFinally should be lowered inside outer try_body");
                if let HirNode::TryFinally {
                    try_body: itb,
                    finally_body: ifb,
                } = inner
                {
                    assert_eq!(itb.len(), 2, "inner try body 0x3010..=0x3011");
                    assert_eq!(ifb.len(), 2, "inner finally body 0x3020..=0x3021");
                }
            }
            other => panic!("expected outer TryFinally, got {other:?}"),
        }
    }

    #[test]
    fn test_seh_lower_no_eh_passthrough() {
        // No regions → no rewriting; body is preserved verbatim.
        let mut body = vec![stmt(0x4000), stmt(0x4001), HirNode::Return(None)];
        let before = body.clone();
        let n = wrap_seh_regions(&mut body, &[]);
        assert_eq!(n, 0);
        assert_eq!(body, before, "no regions → body unchanged");

        // A region whose range matches nothing also leaves the body
        // alone.
        let regions = vec![SehRegion {
            try_range: AddrRange::new(0xDEAD, 0xDEAF),
            handler: SehHandler::Finally(AddrRange::new(0xBEEF, 0xBEEF)),
        }];
        let n = wrap_seh_regions(&mut body, &regions);
        assert_eq!(n, 0, "no match → no lowering");
        assert_eq!(body, before, "unmatched region → body unchanged");
    }
}
