//! PHI-operand register/name coalescing.
//!
//! Coalesces each PHI result with its operands when their observed SSA
//! live intervals do not overlap. Coalesced groups are recorded in
//! [`SsaFunction::merged_names`] so downstream printing emits one C
//! variable per cluster.
//!
//! The coalescer is conservative:
//! - Two SSA varnodes with different base [`unlace_ir::Varnode`]s in
//!   register space NEVER coalesce (rax must not become rbx).
//! - A live-range overlap (interference edge) blocks coalescing
//!   unconditionally.
//!
//! This pass produces no IR changes; it only fills `merged_names`. Run it
//! after all SSA-modifying passes.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name)
        .and_then(|v| v.into_string().ok())
        .map(|v| {
            let v = v.trim().to_ascii_lowercase();
            !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
        })
        .unwrap_or(false)
}

fn reg_coalesce_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_REG_COALESCE_TRACE") || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn reg_coalesce_trace_filter() -> Option<String> {
    std::env::var("UNLACE_REG_COALESCE_TRACE_FILTER")
        .ok()
        .or_else(|| std::env::var("UNLACE_TRACE_FILTER").ok())
        .map(|s| s.trim().to_string())
        .filter(|s| !s.is_empty())
}

fn reg_coalesce_trace_line(line: &str) {
    if !reg_coalesce_trace_enabled() {
        return;
    }
    if let Some(filter) = reg_coalesce_trace_filter()
        && !line.contains(&filter)
    {
        return;
    }
    eprintln!("[unlace reg-coalesce] {line}");
}

pub struct RegisterCoalescePass;

impl Pass for RegisterCoalescePass {
    fn name(&self) -> &str {
        "register-coalesce"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let all_vars = collect_all_ssa_vars(func);
        reg_coalesce_trace_line(&format!(
            "start func={} all_vars={} phis={} existing_merged={}",
            func.function.name,
            all_vars.len(),
            func.phi_map.values().map(|phis| phis.len()).sum::<usize>(),
            func.merged_names.len(),
        ));
        if all_vars.is_empty() {
            reg_coalesce_trace_line(&format!("empty func={}", func.function.name));
            return Ok(false);
        }

        let live = compute_live_ranges(func, &all_vars);
        let use_sites = classify_use_sites(func);
        for (sv, interval) in &live.intervals {
            reg_coalesce_trace_line(&format!(
                "interval func={} sv={:?} start={} end={}",
                func.function.name, sv, interval.start, interval.end
            ));
        }

        let mut uf = UnionFind::new(&all_vars);

        // For each PHI operand pair (result, input), try to coalesce just the
        // candidate pair. Building a full point-live interference graph is
        // quadratic in the number of SSA temps at every instruction and can
        // dominate post-interproc refresh on large or partially optimized
        // functions.
        for phis in func.phi_map.values() {
            for phi in phis {
                let res = phi.output;
                for (_pred, input) in &phi.inputs {
                    try_coalesce_live_intervals(
                        &func.function.name,
                        &mut uf,
                        &live,
                        &func.var_types,
                        &use_sites,
                        res,
                        *input,
                    );
                }
            }
        }

        emit_merged_names(func, &uf, &all_vars)
    }
}

/// Classify a varnode as pointer-typed vs scalar-arithmetic-typed for the
/// purpose of coalescing. Coalescing a pointer live-range with a scalar
/// live-range under one C variable is unsound even when the live ranges do not
/// overlap: the merged variable is declared a single scalar, so a later
/// pointer-deref of it (e.g. `*(_DWORD *)(c7)`) reads a stale scalar value at
/// runtime. (Surfaced on medium::main once phantom params stopped isolating r9
/// — a pointer cursor and a digit-extraction scalar both landed in r9.)
#[derive(Clone, Copy, PartialEq, Eq)]
enum CoalesceTypeClass {
    Pointer,
    Scalar,
    Unknown,
}

fn coalesce_type_class(
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    sv: SsaVarnode,
) -> CoalesceTypeClass {
    match var_types.get(&sv) {
        Some(PrimitiveType::Ptr) => CoalesceTypeClass::Pointer,
        Some(
            PrimitiveType::Int(_)
            | PrimitiveType::UnsignedInt(_)
            | PrimitiveType::Bool
            | PrimitiveType::Float
            | PrimitiveType::Double,
        ) => CoalesceTypeClass::Scalar,
        Some(PrimitiveType::Unknown) | None => CoalesceTypeClass::Unknown,
    }
}

/// `true` when merging groups containing `a`-class and `b`-class members would
/// unify a pointer live-range with a scalar one. `Unknown` is permissive (only
/// a definite Pointer↔Scalar conflict blocks the merge) so this never regresses
/// well-typed coalescing.
fn pointer_scalar_conflict(
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    group_a: &BTreeSet<SsaVarnode>,
    group_b: &BTreeSet<SsaVarnode>,
) -> bool {
    let class_of = |group: &BTreeSet<SsaVarnode>| {
        let mut has_ptr = false;
        let mut has_scalar = false;
        for &sv in group {
            match coalesce_type_class(var_types, sv) {
                CoalesceTypeClass::Pointer => has_ptr = true,
                CoalesceTypeClass::Scalar => has_scalar = true,
                CoalesceTypeClass::Unknown => {}
            }
        }
        (has_ptr, has_scalar)
    };
    let (a_ptr, a_scalar) = class_of(group_a);
    let (b_ptr, b_scalar) = class_of(group_b);
    (a_ptr && b_scalar) || (a_scalar && b_ptr)
}

/// `true` when merging the two groups would unify a varnode that is
/// dereferenced as an address with one that is a pure-arithmetic scalar output.
/// This is a use-site (structural) check, independent of `var_types`, so it
/// catches the pointer/scalar hazard even when type inference left the relevant
/// versions `Unknown` at coalesce time.
fn address_arith_conflict(
    use_sites: &UseSiteClasses,
    group_a: &BTreeSet<SsaVarnode>,
    group_b: &BTreeSet<SsaVarnode>,
) -> bool {
    let class_of = |group: &BTreeSet<SsaVarnode>| {
        let has_addr = group.iter().any(|sv| use_sites.address_used.contains(sv));
        let has_arith = group.iter().any(|sv| use_sites.arith_output.contains(sv));
        (has_addr, has_arith)
    };
    let (a_addr, a_arith) = class_of(group_a);
    let (b_addr, b_arith) = class_of(group_b);
    (a_addr && b_arith) || (a_arith && b_addr)
}

fn try_coalesce_live_intervals(
    func_name: &str,
    uf: &mut UnionFind,
    live: &LiveSets,
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    use_sites: &UseSiteClasses,
    a: SsaVarnode,
    b: SsaVarnode,
) -> bool {
    if a == b {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} decision=skip-same",
            func_name, a, b
        ));
        return false;
    }
    if !same_base_class(a, b) {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} decision=reject-base-class",
            func_name, a, b
        ));
        return false;
    }
    let ra = uf.find(a);
    let rb = uf.find(b);
    if ra == rb {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} root={:?} decision=already-merged",
            func_name, a, b, ra
        ));
        return false;
    }

    let group_a = uf.members_of(ra).cloned().unwrap_or_else(|| {
        let mut set = BTreeSet::new();
        set.insert(ra);
        set
    });
    let group_b = uf.members_of(rb).cloned().unwrap_or_else(|| {
        let mut set = BTreeSet::new();
        set.insert(rb);
        set
    });
    for &ga in &group_a {
        for &gb in &group_b {
            if !same_base_class(ga, gb) || live.overlaps(ga, gb) {
                reg_coalesce_trace_line(&format!(
                    "try func={} a={:?} b={:?} ga={:?} gb={:?} group_a={:?} group_b={:?} decision=reject-interference",
                    func_name, a, b, ga, gb, group_a, group_b
                ));
                return false;
            }
        }
    }
    if group_a.is_empty() || group_b.is_empty() {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} decision=reject-empty-group group_a={:?} group_b={:?}",
            func_name, a, b, group_a, group_b
        ));
        return false;
    }

    if pointer_scalar_conflict(var_types, &group_a, &group_b) {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} decision=reject-pointer-scalar-conflict group_a={:?} group_b={:?}",
            func_name, a, b, group_a, group_b
        ));
        return false;
    }

    if address_arith_conflict(use_sites, &group_a, &group_b) {
        reg_coalesce_trace_line(&format!(
            "try func={} a={:?} b={:?} decision=reject-address-arith-conflict group_a={:?} group_b={:?}",
            func_name, a, b, group_a, group_b
        ));
        return false;
    }

    uf.union(ra, rb);
    reg_coalesce_trace_line(&format!(
        "try func={} a={:?} b={:?} root_a={:?} root_b={:?} decision=merged group_a={:?} group_b={:?}",
        func_name, a, b, ra, rb, group_a, group_b
    ));
    true
}

/// Coalescing across distinct architectural registers is forbidden — rax
/// and rbx live in different physical slots. SSA versions of the same
/// base always share a class (different versions of one register).
fn same_base_class(a: SsaVarnode, b: SsaVarnode) -> bool {
    if a.base == b.base {
        return true;
    }
    if a.base.space == SpaceId::Register || b.base.space == SpaceId::Register {
        return false;
    }
    a.base.size == b.base.size
}

fn collect_all_ssa_vars(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut out = BTreeSet::new();
    for sv in func.var_map.values() {
        out.insert(*sv);
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            out.insert(phi.output);
            for (_pred, input) in &phi.inputs {
                out.insert(*input);
            }
        }
    }
    out
}

/// Structural (use-site) classification of SSA varnodes, independent of type
/// inference. Used to block coalescing a varnode that is *dereferenced as an
/// address* together with one that is the *output of pure integer arithmetic* —
/// the runtime-unsound pointer/scalar merge that `var_types` misses when those
/// versions are still typed `Unknown` at coalesce time.
#[derive(Default)]
struct UseSiteClasses {
    /// Vars used as a Load/Store address operand (`input[1]`).
    address_used: BTreeSet<SsaVarnode>,
    /// Vars defined by pure integer arithmetic (mul/add/sub/shift on
    /// non-address values) — i.e. computed scalars, never pointers.
    arith_output: BTreeSet<SsaVarnode>,
}

fn classify_use_sites(func: &SsaFunction) -> UseSiteClasses {
    use unlace_ir::IrOp;
    let mut classes = UseSiteClasses::default();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            // Load/Store address operand is input[1]: a var used there is
            // dereferenced as a pointer.
            if matches!(insn.op, IrOp::Load | IrOp::Store)
                && let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(1)))
            {
                classes.address_used.insert(sv);
            }
            // Pure-scalar arithmetic outputs. IntMult / shifts / div / rem can
            // never produce a valid pointer cursor; IntAdd is deliberately
            // excluded because pointer arithmetic (`base + i`) is a legitimate
            // IntAdd and we must not misclassify a pointer advance as a scalar.
            if matches!(
                insn.op,
                IrOp::IntMult
                    | IrOp::IntLeft
                    | IrOp::IntRight
                    | IrOp::IntSright
                    | IrOp::IntDiv
                    | IrOp::IntSdiv
                    | IrOp::IntRem
                    | IrOp::IntSrem
                    | IrOp::IntAnd
                    | IrOp::IntOr
                    | IrOp::IntXor
            ) && let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output))
            {
                classes.arith_output.insert(sv);
            }
        }
    }

    // Propagate the scalar-arithmetic mark through `Copy` chains to a fixpoint:
    // a register version assigned `Copy(arith_temp)` is itself a computed scalar
    // (e.g. `r9 = Copy(unique)` where `unique = mul/shift(...)`). Optimized code
    // funnels arithmetic results into registers via these copies, so without
    // this the address/arith conflict on the register cluster is invisible.
    let mut changed = true;
    let mut guard = 0usize;
    let max_iters = func.function.blocks.len().saturating_mul(4).max(16);
    while changed && guard < max_iters {
        changed = false;
        guard += 1;
        for (&bid, block) in &func.function.blocks {
            use unlace_ir::IrOp;
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Copy {
                    continue;
                }
                let Some(&out) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) else {
                    continue;
                };
                if classes.arith_output.contains(&out) {
                    continue;
                }
                if let Some(&src) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(0)))
                    && classes.arith_output.contains(&src)
                {
                    classes.arith_output.insert(out);
                    changed = true;
                }
            }
        }
    }
    classes
}

/// The role a connected component of same-register SSA versions plays, derived
/// from how its members are used (see [`partition_register_phases`]).
///
/// Staged analysis for the t69 live-range-split fix
/// (docs/design-lvar-liverange-split-2026-06-01.md); unit-tested but not yet
/// wired into the pass (the rename/retype step is the remaining work), so it is
/// `dead_code` in non-test builds by design.
#[allow(dead_code)]
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
enum RegisterPhase {
    /// Some member is dereferenced as a Load/Store address; no member is a
    /// pure-arithmetic output. A pointer cursor.
    Pointer,
    /// Some member is a pure-arithmetic output; no member is an address. A
    /// computed scalar.
    Scalar,
    /// Some member is BOTH an address use and (elsewhere in the component) a
    /// pure-arith output. The register holds two roles in one connected web —
    /// splitting names is unsound here; the bug is upstream (lifter / SSA
    /// construction). Callers should STOP rather than split a `Mixed` phase.
    Mixed,
    /// Neither an address use nor an arith output is observed (e.g. an opaque
    /// copy of an argument). Not splittable, not dangerous.
    Neither,
}

/// Partition the SSA versions of a single register base into connected
/// components over MULTIEQUAL (phi) and COPY edges, and classify each component
/// as a [`RegisterPhase`]. This is step 1 of the live-range-split fix
/// (docs/design-lvar-liverange-split-2026-06-01.md): a register whose versions
/// split into a disjoint pointer-phase and scalar-phase is the source of the
/// `medium:main` pointer-deref-of-scalar bug, and can be safely given distinct
/// lvars per component — *unless* a component is [`RegisterPhase::Mixed`].
///
/// Edges considered:
///   * phi: `phi.output <-> each phi.input`,
///   * copy: `copy.output <-> copy.input[0]` (register or unique source).
///
/// Only versions whose base is `reg_base` participate; cross-register copies are
/// edges *into* the component but the foreign endpoint is not itself classified
/// here (its role is attributed to the reg-base endpoint via the use sites).
///
/// Pure analysis — no mutation, no IR changes. Wired into nothing yet; the
/// split itself (rename + retype) is the remaining implementation work.
#[allow(dead_code)]
fn partition_register_phases(
    func: &SsaFunction,
    reg_base: Varnode,
    use_sites: &UseSiteClasses,
) -> Vec<(BTreeSet<SsaVarnode>, RegisterPhase)> {
    use unlace_ir::IrOp;

    // Collect the register's SSA versions.
    let mut nodes: BTreeSet<SsaVarnode> = BTreeSet::new();
    for sv in func.var_map.values() {
        if sv.base == reg_base {
            nodes.insert(*sv);
        }
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            if phi.output.base == reg_base {
                nodes.insert(phi.output);
            }
            for (_pred, input) in &phi.inputs {
                if input.base == reg_base {
                    nodes.insert(*input);
                }
            }
        }
    }
    if nodes.is_empty() {
        return Vec::new();
    }

    // Union-find over the register's own versions.
    let mut uf = UnionFind::new(&nodes);
    let link = |uf: &mut UnionFind, a: SsaVarnode, b: SsaVarnode| {
        if nodes.contains(&a) && nodes.contains(&b) {
            let ra = uf.find(a);
            let rb = uf.find(b);
            if ra != rb {
                uf.union(ra, rb);
            }
        }
    };

    // Phi edges.
    for phis in func.phi_map.values() {
        for phi in phis {
            for (_pred, input) in &phi.inputs {
                link(&mut uf, phi.output, *input);
            }
        }
    }
    // Copy edges (output <-> input[0]) where both endpoints are this register.
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Copy {
                continue;
            }
            let (Some(&out), Some(&src)) = (
                func.var_map.get(&(bid, idx, VarnodeSlot::Output)),
                func.var_map.get(&(bid, idx, VarnodeSlot::Input(0))),
            ) else {
                continue;
            };
            link(&mut uf, out, src);
        }
    }

    // Gather components and classify.
    let mut comps: BTreeMap<SsaVarnode, BTreeSet<SsaVarnode>> = BTreeMap::new();
    for &n in &nodes {
        comps.entry(uf.find(n)).or_default().insert(n);
    }
    comps
        .into_values()
        .map(|members| {
            let has_addr = members.iter().any(|sv| use_sites.address_used.contains(sv));
            let has_arith = members.iter().any(|sv| use_sites.arith_output.contains(sv));
            let phase = match (has_addr, has_arith) {
                (true, true) => RegisterPhase::Mixed,
                (true, false) => RegisterPhase::Pointer,
                (false, true) => RegisterPhase::Scalar,
                (false, false) => RegisterPhase::Neither,
            };
            (members, phase)
        })
        .collect()
}

#[derive(Default)]
struct LiveSets {
    intervals: BTreeMap<SsaVarnode, LiveInterval>,
}

fn compute_live_ranges(func: &SsaFunction, _all_vars: &BTreeSet<SsaVarnode>) -> LiveSets {
    let mut sets = LiveSets::default();
    let mut block_bounds: BTreeMap<BlockId, (u64, u64)> = BTreeMap::new();
    let mut point = 0u64;

    for (&bid, block) in &func.function.blocks {
        let block_start = point;
        reg_coalesce_trace_line(&format!(
            "block-start func={} block={:?} point={} insns={}",
            func.function.name,
            bid,
            block_start,
            block.insns.len(),
        ));
        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                sets.touch(phi.output, block_start);
                reg_coalesce_trace_line(&format!(
                    "touch-phi-output func={} block={:?} point={} output={:?}",
                    func.function.name, bid, block_start, phi.output
                ));
            }
        }
        for (idx, insn) in block.insns.iter().enumerate() {
            point = point.saturating_add(1);
            for i in 0..insn.inputs.len() {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(i))) {
                    sets.touch(sv, point);
                    reg_coalesce_trace_line(&format!(
                        "touch-input func={} block={:?} insn={} addr=0x{:x} op={:?} idx={} point={} sv={:?}",
                        func.function.name, bid, idx, insn.addr, insn.op, i, point, sv
                    ));
                }
            }
            if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                sets.touch(sv, point);
                reg_coalesce_trace_line(&format!(
                    "touch-output func={} block={:?} insn={} addr=0x{:x} op={:?} point={} sv={:?}",
                    func.function.name, bid, idx, insn.addr, insn.op, point, sv
                ));
            }
        }
        block_bounds.insert(bid, (block_start, point));
        reg_coalesce_trace_line(&format!(
            "block-end func={} block={:?} start={} end={}",
            func.function.name, bid, block_start, point
        ));
        point = point.saturating_add(1);
    }

    for (&bid, phis) in &func.phi_map {
        let phi_point = block_bounds
            .get(&bid)
            .map(|(start, _end)| *start)
            .unwrap_or(point);
        for phi in phis {
            sets.touch(phi.output, phi_point);
            for (pred, input) in &phi.inputs {
                let input_point = block_bounds
                    .get(pred)
                    .map(|(_start, end)| *end)
                    .unwrap_or(phi_point);
                sets.touch(*input, input_point);
                reg_coalesce_trace_line(&format!(
                    "touch-phi-edge func={} pred={:?} succ={:?} input_point={} phi_point={} input={:?} output={:?}",
                    func.function.name, pred, bid, input_point, phi_point, input, phi.output
                ));
            }
        }
    }

    sets
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct LiveInterval {
    start: u64,
    end: u64,
}

impl LiveSets {
    fn touch(&mut self, var: SsaVarnode, point: u64) {
        self.intervals
            .entry(var)
            .and_modify(|range| {
                range.start = range.start.min(point);
                range.end = range.end.max(point);
            })
            .or_insert(LiveInterval {
                start: point,
                end: point,
            });
    }

    fn overlaps(&self, a: SsaVarnode, b: SsaVarnode) -> bool {
        let Some(a) = self.intervals.get(&a) else {
            return false;
        };
        let Some(b) = self.intervals.get(&b) else {
            return false;
        };
        a.start <= b.end && b.start <= a.end
    }
}

struct UnionFind {
    parent: BTreeMap<SsaVarnode, SsaVarnode>,
    members: BTreeMap<SsaVarnode, BTreeSet<SsaVarnode>>,
}

impl UnionFind {
    fn new(vs: &BTreeSet<SsaVarnode>) -> Self {
        let mut parent = BTreeMap::new();
        let mut members = BTreeMap::new();
        for &v in vs {
            parent.insert(v, v);
            let mut set = BTreeSet::new();
            set.insert(v);
            members.insert(v, set);
        }
        Self { parent, members }
    }

    fn find(&mut self, v: SsaVarnode) -> SsaVarnode {
        let p = self.parent.get(&v).copied().unwrap_or(v);
        if p == v {
            return v;
        }
        let r = self.find(p);
        self.parent.insert(v, r);
        r
    }

    fn members_of(&self, root: SsaVarnode) -> Option<&BTreeSet<SsaVarnode>> {
        self.members.get(&root)
    }

    fn union(&mut self, a: SsaVarnode, b: SsaVarnode) {
        let ra = self.find(a);
        let rb = self.find(b);
        if ra != rb {
            self.parent.insert(ra, rb);
            let moved = self.members.remove(&ra).unwrap_or_else(|| {
                let mut set = BTreeSet::new();
                set.insert(ra);
                set
            });
            self.members.entry(rb).or_default().extend(moved);
        }
    }
}

fn emit_merged_names(
    func: &mut SsaFunction,
    uf: &UnionFind,
    all_vars: &BTreeSet<SsaVarnode>,
) -> Result<bool, PassError> {
    let mut groups: BTreeMap<SsaVarnode, Vec<SsaVarnode>> = BTreeMap::new();
    let mut uf = clone_uf(uf);
    for &v in all_vars {
        let r = uf.find(v);
        groups.entry(r).or_default().push(v);
    }
    for (root, group) in &groups {
        reg_coalesce_trace_line(&format!(
            "group func={} root={:?} members={:?}",
            func.function.name, root, group
        ));
    }
    let multi_groups: Vec<&Vec<SsaVarnode>> = groups.values().filter(|g| g.len() > 1).collect();
    if multi_groups.is_empty() {
        reg_coalesce_trace_line(&format!(
            "emit func={} multi_groups=0 changed=false",
            func.function.name
        ));
        return Ok(false);
    }
    let mut name_idx = 0usize;
    let mut new_names: BTreeMap<SsaVarnode, String> = BTreeMap::new();
    for group in groups.values() {
        if group.len() <= 1 {
            continue;
        }
        let name = match existing_group_name(func, group) {
            Some(name) => {
                reg_coalesce_trace_line(&format!(
                    "reuse-name func={} group={:?} name={}",
                    func.function.name, group, name
                ));
                name
            }
            None => {
                let name = format!("c{}", name_idx);
                name_idx += 1;
                name
            }
        };
        for &v in group {
            new_names.insert(v, name.clone());
            reg_coalesce_trace_line(&format!(
                "name func={} sv={:?} name={}",
                func.function.name, v, name
            ));
        }
    }
    let mut merged = func.merged_names.clone();
    merged.extend(new_names);
    let changed = merged != func.merged_names;
    func.merged_names = merged;
    reg_coalesce_trace_line(&format!(
        "emit func={} changed={} merged_names={}",
        func.function.name,
        changed,
        func.merged_names.len()
    ));
    Ok(changed)
}

fn existing_group_name(func: &SsaFunction, group: &[SsaVarnode]) -> Option<String> {
    let mut names: Vec<String> = group
        .iter()
        .filter_map(|sv| func.merged_names.get(sv).cloned())
        .collect();
    names.sort();
    names.dedup();
    if names.len() > 1 {
        reg_coalesce_trace_line(&format!(
            "reuse-name-conflict func={} group={:?} names={:?} chosen={}",
            func.function.name, group, names, names[0]
        ));
    }
    names.into_iter().next()
}

fn clone_uf(uf: &UnionFind) -> UnionFind {
    UnionFind {
        parent: uf.parent.clone(),
        members: uf.members.clone(),
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PhiNode, PrimitiveType, SsaFunction, SsaVarnode, VarMap,
        VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: VarMap,
        phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = trivial_dom(&cfg);
        SsaFunction {
            function: func,
            arch: unlace_ir::ArchId::Unknown(0),
            maturity: unlace_ir::ssa::Maturity::Zero,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map,
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            stack_offset_hints: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            lvars: Vec::new(),
            rust_async: None,
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: BTreeSet::new(),
            is_varargs: false,
            inferred_stack_params: BTreeSet::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            eh_landing_pad_catches: BTreeMap::new(),
            eh_cleanup_landing_pads: std::collections::BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            block_entry_sp_delta: std::collections::BTreeMap::new(),
            frame_holes: Vec::new(),
            saved_register_slots: std::collections::BTreeSet::new(),
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            indirect_call_targets: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            stack_accesses: Vec::new(),
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            libc_sig_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
        }
    }

    fn trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry");
        let dominators = simple_fast(cfg.inner(), entry_ni);
        let mut idom = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        let entry = cfg.entry_block();
        for (&bid, &ni) in cfg.node_map() {
            if bid == entry {
                continue;
            }
            if let Some(dom_ni) = dominators.immediate_dominator(ni) {
                let dom_bid = cfg.inner()[dom_ni];
                idom.insert(bid, dom_bid);
                children.entry(dom_bid).or_default().push(bid);
            }
        }
        DominatorTree::new(idom, children, entry)
    }

    /// PHI result and its operands should all share a name (no
    /// interference — the operands flow into the result).
    #[test]
    fn test_phi_result_coalesces_with_operands() {
        // B0: branch -> B1 / B2
        // B1: v_unique_a = COPY c1; branch B3
        // B2: v_unique_b = COPY c2; branch B3
        // B3: phi(v_unique_a, v_unique_b) -> v_phi; return v_phi
        let ua = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let ub = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![c1, c1],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ua.base,
            smallvec![c1],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ub.base,
            smallvec![c2],
            0x1020,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x1030,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), ub);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua), (BlockId(2), ub)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        let changed = RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert!(changed);
        let names: BTreeSet<&String> = ssa.merged_names.values().collect();
        assert_eq!(names.len(), 1, "all three SSA vars should share a name");
        let n_ua = ssa.merged_names.get(&ua);
        let n_ub = ssa.merged_names.get(&ub);
        let n_phi = ssa.merged_names.get(&uphi);
        assert!(n_ua.is_some() && n_ua == n_ub && n_ub == n_phi);
    }

    #[test]
    fn test_phi_coalesce_preserves_existing_variable_merge_name() {
        let ua = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let ub = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![c1, c1],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ua.base,
            smallvec![c1],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ub.base,
            smallvec![c2],
            0x1020,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x1030,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), ub);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua), (BlockId(2), ub)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        ssa.merged_names.insert(ua, "loop_idx".to_string());
        ssa.merged_names.insert(ub, "loop_idx".to_string());

        let changed = RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert!(changed);
        assert_eq!(
            ssa.merged_names.get(&ua).map(String::as_str),
            Some("loop_idx")
        );
        assert_eq!(
            ssa.merged_names.get(&ub).map(String::as_str),
            Some("loop_idx")
        );
        assert_eq!(
            ssa.merged_names.get(&uphi).map(String::as_str),
            Some("loop_idx")
        );
    }

    /// Two distinct architectural registers must NOT be coalesced even
    /// when their live ranges happen not to overlap.
    #[test]
    fn test_distinct_registers_never_coalesced() {
        let rax = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        };
        let rbx = SsaVarnode {
            base: Varnode::reg(8, 8),
            version: 0,
        };
        let phi_out = SsaVarnode {
            base: Varnode::reg(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![c1, c1],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rax.base,
            smallvec![c1],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rbx.base,
            smallvec![c1],
            0x1020,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![phi_out.base],
            0x1030,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), rax);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), rbx);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), phi_out);

        let phi = PhiNode {
            output: phi_out,
            inputs: vec![(BlockId(1), rax), (BlockId(2), rbx)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        let _ = RegisterCoalescePass.run(&mut ssa).expect("ok");
        // rax and rbx must never share a name.
        let n_rax = ssa.merged_names.get(&rax);
        let n_rbx = ssa.merged_names.get(&rbx);
        if let (Some(a), Some(b)) = (n_rax, n_rbx) {
            assert_ne!(a, b, "rax and rbx must remain in different colour classes");
        }
    }

    #[test]
    fn test_phi_coalescing_ignores_unrelated_temp_volume() {
        let ua = SsaVarnode {
            base: Varnode::unique(0x10_000, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(0x10_008, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        let mut var_map = VarMap::new();
        for idx in 0..512usize {
            let sv = SsaVarnode {
                base: Varnode::unique((idx as u64) * 8, 8),
                version: 0,
            };
            b0.insns.push(IrInsn::with_output(
                IrOp::Copy,
                sv.base,
                smallvec![c1],
                0x1000 + idx as u64,
            ));
            var_map.insert((BlockId(0), idx, VarnodeSlot::Output), sv);
        }
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ua.base,
            smallvec![c1],
            0x2000,
        ));
        b1.successors = smallvec![BlockId(2)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x3000,
        ));

        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(2), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2], var_map, phi_map);
        let changed = RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert!(changed);
        assert_eq!(ssa.merged_names.get(&ua), ssa.merged_names.get(&uphi));
    }

    /// A pointer-typed PHI operand must NOT coalesce with a scalar-typed one:
    /// the merged variable would be declared a single scalar and a later
    /// deref of the pointer value reads garbage. (Latent hazard surfaced on
    /// medium::main once phantom params stopped isolating r9.)
    #[test]
    fn pointer_and_scalar_phi_operands_do_not_coalesce() {
        let ua = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let ub = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![c1, c1],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ua.base,
            smallvec![c1],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ub.base,
            smallvec![c2],
            0x1020,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1024));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x1030,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), ub);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua), (BlockId(2), ub)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        // ua is a pointer, ub is a scalar — incompatible.
        ssa.var_types.insert(ua, PrimitiveType::Ptr);
        ssa.var_types.insert(ub, PrimitiveType::Int(8));

        RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert_ne!(
            ssa.merged_names.get(&ua),
            ssa.merged_names.get(&ub),
            "pointer and scalar versions must not share a coalesced name",
        );
    }

    /// Use-site variant: even with both versions typed `Unknown`, a varnode
    /// dereferenced as a Load/Store address must not coalesce with one that is
    /// a pure-arithmetic (IntMult) output.
    #[test]
    fn address_used_and_arith_output_phi_operands_do_not_coalesce() {
        let ua = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let ub = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let uphi = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![c1, c1],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        // B1: ua = IntMult(c2, c2) — pure-arithmetic scalar output.
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            ua.base,
            smallvec![c2, c2],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(3)];

        // B2: ub = COPY c1; then LOAD [ub] — ub used as an address operand.
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ub.base,
            smallvec![c1],
            0x1020,
        ));
        let load_out = Varnode::unique(0x100, 8);
        b2.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![Varnode::constant(0, 4), ub.base],
            0x1024,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1028));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![uphi.base],
            0x1030,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), ua);
        var_map.insert((BlockId(2), 0, VarnodeSlot::Output), ub);
        var_map.insert((BlockId(2), 1, VarnodeSlot::Input(1)), ub);
        var_map.insert((BlockId(3), 0, VarnodeSlot::Input(0)), uphi);

        let phi = PhiNode {
            output: uphi,
            inputs: vec![(BlockId(1), ua), (BlockId(2), ub)],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(3), vec![phi]);

        let mut ssa = make_ssa(vec![b0, b1, b2, b3], var_map, phi_map);
        // No var_types set — guard must fire on use-site classification alone.
        RegisterCoalescePass.run(&mut ssa).expect("ok");
        assert_ne!(
            ssa.merged_names.get(&ua),
            ssa.merged_names.get(&ub),
            "address-used and arith-output versions must not share a name",
        );
    }

    // -- partition_register_phases (t69 step 1) ------------------------------

    const R9: u64 = 72;

    fn r9(version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(R9, 8),
            version,
        }
    }

    /// Two disjoint webs of one register — a pointer phase (used as a Load
    /// address) and a scalar phase (a pure-arith output) with NO phi/copy edge
    /// between them — must partition into two components, classified Pointer
    /// and Scalar. This is the medium::main shape; it confirms the split is
    /// applicable (CLAUDE.md #10 / t69).
    #[test]
    fn partition_separates_disjoint_pointer_and_scalar_phases() {
        // BB0: r9#1 = COPY rsi ; LOAD [r9#1]      (pointer phase)
        //      r9#2 = INT_MULT(c, c)               (scalar phase, disjoint)
        let rsi = SsaVarnode {
            base: Varnode::reg(48, 8),
            version: 0,
        };
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r9(1).base,
            smallvec![rsi.base],
            0x1000,
        ));
        let load_out = Varnode::unique(0x10, 8);
        b0.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![Varnode::constant(0, 4), r9(1).base],
            0x1004,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            r9(2).base,
            smallvec![c2, c2],
            0x1008,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), r9(1));
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rsi);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), r9(1));
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), r9(2));

        let ssa = make_ssa(vec![b0], var_map, BTreeMap::new());
        let use_sites = classify_use_sites(&ssa);
        let phases = partition_register_phases(&ssa, Varnode::reg(R9, 8), &use_sites);

        assert_eq!(
            phases.len(),
            2,
            "expected disjoint pointer + scalar webs: {phases:?}"
        );
        let kinds: BTreeSet<_> = phases.iter().map(|(_, p)| *p).collect();
        assert!(kinds.contains(&RegisterPhase::Pointer), "{phases:?}");
        assert!(kinds.contains(&RegisterPhase::Scalar), "{phases:?}");
    }

    /// When a phi joins the pointer-sourced and scalar-sourced versions into one
    /// connected web, the component is Mixed — splitting names would be unsound;
    /// the caller must STOP (the bug would be upstream).
    #[test]
    fn partition_flags_mixed_component_when_phi_joins_roles() {
        // BB0: r9#1 = COPY rsi ; branch
        // BB1: r9#2 = INT_MULT(c,c) ; branch
        // BB2: r9#3 = phi(r9#1, r9#2) ; LOAD [r9#3]
        let rsi = SsaVarnode {
            base: Varnode::reg(48, 8),
            version: 0,
        };
        let c2 = Varnode::constant(2, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r9(1).base,
            smallvec![rsi.base],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            r9(2).base,
            smallvec![c2, c2],
            0x1010,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1014));
        b1.successors = smallvec![BlockId(2)];

        let mut b2 = BasicBlock::new(BlockId(2));
        let load_out = Varnode::unique(0x10, 8);
        b2.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![Varnode::constant(0, 4), r9(3).base],
            0x1020,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1024));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), r9(1));
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rsi);
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), r9(2));
        var_map.insert((BlockId(2), 0, VarnodeSlot::Input(1)), r9(3));

        let phi = PhiNode {
            output: r9(3),
            inputs: vec![(BlockId(0), r9(1)), (BlockId(1), r9(2))],
        };
        let mut phi_map = BTreeMap::new();
        phi_map.insert(BlockId(2), vec![phi]);

        let ssa = make_ssa(vec![b0, b1, b2], var_map, phi_map);
        let use_sites = classify_use_sites(&ssa);
        let phases = partition_register_phases(&ssa, Varnode::reg(R9, 8), &use_sites);

        assert_eq!(phases.len(), 1, "phi unifies the web: {phases:?}");
        assert_eq!(phases[0].1, RegisterPhase::Mixed, "{phases:?}");
    }
}
