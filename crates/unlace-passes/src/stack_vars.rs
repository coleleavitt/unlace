//! Stack variable recovery pass.
//!
//! Detects LOAD/STORE instructions that access RSP/RBP-relative memory
//! addresses, groups accesses at the same offset into logical local
//! variables, and populates `SsaFunction::stack_vars`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, StackVar, VarnodeSlot};
use unlace_ir::stack::StackSpec;
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Resolve the [`StackSpec`] this pass should consult for the function's
/// architecture. Unknown / unsupported arches fall back to the x86_64
/// spec — the historical default before Batch 2 — so unit-test fixtures
/// that construct an `SsaFunction` without setting `arch` keep working.
fn resolve_spec(func: &SsaFunction) -> StackSpec {
    StackSpec::for_arch(func.arch)
        .or_else(|| StackSpec::for_arch(ArchId::X86_64))
        .expect("x86_64 always has a StackSpec")
}

type DefMap = BTreeMap<Varnode, Vec<(unlace_ir::BlockId, usize)>>;
type ResolveCache = BTreeMap<(Varnode, u32), Option<i64>>;
type SsaResolveCache = BTreeMap<(SsaVarnode, u32), Option<i64>>;

pub struct StackVarRecoveryPass;

pub struct StackOffsetSnapshotPass;

impl Pass for StackOffsetSnapshotPass {
    fn name(&self) -> &str {
        "stack-offset-snapshot"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::StackRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let spec = resolve_spec(func);
        let def_map = build_def_map(func);
        let mut resolve_cache = BTreeMap::new();
        let mut ssa_resolve_cache = BTreeMap::new();
        let mut hints = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if matches!(insn.op, IrOp::Store | IrOp::Load)
                    && insn.inputs.len() >= 2
                    && let Some(offset) = extract_stack_offset(
                        (bid, insn_idx),
                        insn,
                        func,
                        &def_map,
                        &mut resolve_cache,
                        &mut ssa_resolve_cache,
                        &spec,
                    )
                {
                    hints.insert((bid, insn_idx), offset);
                }
            }
        }

        let changed = func.stack_offset_hints != hints;
        func.stack_offset_hints = hints;
        Ok(changed)
    }
}

impl Pass for StackVarRecoveryPass {
    fn name(&self) -> &str {
        "stack-var-recovery"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::StackRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let spec = resolve_spec(func);
        let old_len = func.stack_vars.len();
        let snapshot: BTreeMap<i64, StackVar> = func.stack_vars.clone();

        let def_map = build_def_map(func);

        let mut accesses: BTreeMap<i64, Vec<(SsaVarnode, u8)>> = BTreeMap::new();
        let mut resolve_cache: ResolveCache = BTreeMap::new();
        let mut ssa_resolve_cache: SsaResolveCache = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if func.frame_setup_insns.contains(&(bid, insn_idx)) {
                    continue;
                }
                match insn.op {
                    IrOp::Store => {
                        // STORE inputs: [space_id, address, value]
                        if insn.inputs.len() < 3 {
                            continue;
                        }
                        if let Some(offset) = extract_stack_offset_with_hints(
                            (bid, insn_idx),
                            insn,
                            func,
                            &def_map,
                            &mut resolve_cache,
                            &mut ssa_resolve_cache,
                            &spec,
                        ) {
                            let value_size = insn.inputs[2].size;
                            // Record the value varnode as an access
                            if let Some(&sv) =
                                func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(2)))
                            {
                                accesses.entry(offset).or_default().push((sv, value_size));
                            }
                            // Also record the address varnode
                            if let Some(&sv) =
                                func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(1)))
                            {
                                accesses.entry(offset).or_default().push((sv, value_size));
                            }
                        }
                    }
                    IrOp::Load => {
                        // LOAD inputs: [space_id, address], output: loaded value
                        if insn.inputs.len() < 2 {
                            continue;
                        }
                        if let Some(offset) = extract_stack_offset_with_hints(
                            (bid, insn_idx),
                            insn,
                            func,
                            &def_map,
                            &mut resolve_cache,
                            &mut ssa_resolve_cache,
                            &spec,
                        ) {
                            let load_size = insn.output.map(|o| o.size).unwrap_or(8);
                            // Record the output varnode
                            if let Some(&sv) =
                                func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))
                            {
                                accesses.entry(offset).or_default().push((sv, load_size));
                            }
                            // Also record the address varnode
                            if let Some(&sv) =
                                func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(1)))
                            {
                                accesses.entry(offset).or_default().push((sv, load_size));
                            }
                        }
                    }
                    _ => {}
                }
            }
        }

        // Also scan for direct SpaceId::Stack varnodes (already rewritten by prior passes
        // or emitted by lifters that use the stack space directly).
        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if func.frame_setup_insns.contains(&(bid, insn_idx)) {
                    continue;
                }
                if let Some(output) = insn.output
                    && output.space == SpaceId::Stack
                {
                    let offset = output.offset as i64;
                    if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
                        accesses.entry(offset).or_default().push((sv, output.size));
                    }
                }
                for (inp_idx, inp) in insn.inputs.iter().enumerate() {
                    if inp.space == SpaceId::Stack {
                        let offset = inp.offset as i64;
                        if let Some(&sv) =
                            func.var_map
                                .get(&(bid, insn_idx, VarnodeSlot::Input(inp_idx)))
                        {
                            accesses.entry(offset).or_default().push((sv, inp.size));
                        }
                    }
                }
            }
        }

        for (offset, access_list) in &accesses {
            let name = func
                .dwarf_local_names
                .get(offset)
                .cloned()
                .unwrap_or_else(|| {
                    let abs_offset = offset.unsigned_abs();
                    format!("local_{abs_offset:x}")
                });

            let ty = infer_stack_var_type(access_list, &func.var_types);

            let mut unique_varnodes: Vec<SsaVarnode> = Vec::new();
            for &(sv, _) in access_list {
                if !unique_varnodes.contains(&sv) {
                    unique_varnodes.push(sv);
                }
            }

            func.stack_vars.insert(
                *offset,
                StackVar {
                    offset: *offset,
                    name,
                    ty,
                    accesses: unique_varnodes,
                },
            );
        }

        infer_struct_layouts(func);
        detect_frame_gaps(func);

        let changed = func.stack_vars.len() != old_len || func.stack_vars != snapshot;
        Ok(changed)
    }
}

/// Recover the local-frame size from the entry-block prologue and emit a
/// coverage-gap map for any byte ranges of `[-frame_size, 0)` that are not
/// covered by an inferred stack variable.
///
/// Modelled after IDA's `calc_tinfo_gaps` /  `append_tinfo_covered`
/// (`references/ida/idalib/all/`): the goal is to surface "holes" in the
/// stack frame that the user can later annotate as opaque buffers, while
/// suppressing tiny ABI-driven alignment padding.
fn detect_frame_gaps(func: &mut SsaFunction) {
    func.stack_gaps.clear();

    let frame_size = recover_frame_size(func);
    func.frame_size = frame_size;
    if frame_size == 0 {
        return;
    }

    let mut covered: Vec<(i64, i64)> = Vec::new();
    for (&offset, sv) in &func.stack_vars {
        let span = stack_var_span(sv);
        if span > 0 {
            covered.push((offset, offset + span as i64));
        }
    }
    covered.sort_unstable();

    let frame_start = -(frame_size as i64);
    let frame_end = 0i64;

    let mut cursor = frame_start;
    let emit = |start: i64, end: i64, covered: &[(i64, i64)]| -> Option<(i64, u32)> {
        if end <= start {
            return None;
        }
        let size = (end - start) as u32;
        if size <= 8 && is_padding_adjacent(start, end, covered) {
            return None;
        }
        Some((start, size))
    };

    for &(s, e) in &covered {
        if s > cursor
            && let Some((g_off, g_size)) = emit(cursor, s.min(frame_end), &covered)
        {
            func.stack_gaps.insert(g_off, g_size);
        }
        if e > cursor {
            cursor = e;
        }
    }
    if cursor < frame_end
        && let Some((g_off, g_size)) = emit(cursor, frame_end, &covered)
    {
        func.stack_gaps.insert(g_off, g_size);
    }
}

/// Effective storage span of a [`StackVar`] in bytes.
///
/// Prefers the inferred primitive type's width; falls back to the maximum
/// access size observed for the slot, then finally to a single byte.
fn stack_var_span(sv: &StackVar) -> u32 {
    if let Some(w) = field_size(sv.ty) {
        return w as u32;
    }
    1
}

/// Heuristic: a sub-8-byte gap is treated as alignment padding when at
/// least one neighbour (left or right) is a real covered slot. This
/// matches how compilers insert pad bytes between members to satisfy
/// natural-alignment requirements.
fn is_padding_adjacent(start: i64, end: i64, covered: &[(i64, i64)]) -> bool {
    let touches_left = covered.iter().any(|&(_, e)| e == start);
    let touches_right = covered.iter().any(|&(s, _)| s == end);
    touches_left || touches_right
}

/// Locate `IntSub(RSP, const)` in the entry block where the output is RSP
/// (or copied to RSP) and return `const` as the local-frame byte size.
///
/// Returns 0 when no plausible prologue is found — this is conservative;
/// gap detection silently skips functions without a recovered frame.
fn recover_frame_size(func: &SsaFunction) -> u32 {
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return 0;
    };
    let spec = resolve_spec(func);

    for insn in &block.insns {
        if insn.op != IrOp::IntSub {
            continue;
        }
        if insn.inputs.len() < 2 {
            continue;
        }
        let lhs = insn.inputs[0];
        let rhs = insn.inputs[1];
        if !spec.is_sp(&lhs) {
            continue;
        }
        if rhs.space != SpaceId::Const {
            continue;
        }
        let k = rhs.offset;
        if k == 0 || k > 0x10_000 {
            continue;
        }
        return k as u32;
    }
    0
}

/// Group adjacent stack slots with compatible primitive types into structs.
///
/// Walks `stack_vars` in offset order; whenever the next slot's offset
/// equals `current_offset + current_size` and both slots have a known
/// primitive size we extend the in-progress field group. A group of
/// 2 or more contiguous fields becomes a `Type::Struct` keyed by the
/// starting offset; lone slots are not promoted.
fn infer_struct_layouts(func: &mut SsaFunction) {
    let entries: Vec<(i64, &StackVar)> = func.stack_vars.iter().map(|(o, sv)| (*o, sv)).collect();
    if entries.is_empty() {
        return;
    }

    let mut groups: Vec<Vec<(i64, PrimitiveType, u8)>> = Vec::new();
    let mut current: Vec<(i64, PrimitiveType, u8)> = Vec::new();

    for (offset, sv) in entries {
        let size = match field_size(sv.ty) {
            Some(s) => s,
            None => {
                if current.len() >= 2 {
                    groups.push(std::mem::take(&mut current));
                } else {
                    current.clear();
                }
                continue;
            }
        };

        let is_adjacent = current
            .last()
            .map(|(prev_off, _, prev_size)| prev_off + i64::from(*prev_size) == offset)
            .unwrap_or(false);

        if !is_adjacent {
            if current.len() >= 2 {
                groups.push(std::mem::take(&mut current));
            } else {
                current.clear();
            }
        }

        current.push((offset, sv.ty, size));
    }
    if current.len() >= 2 {
        groups.push(current);
    }

    for group in groups {
        let start = group[0].0;
        let abs = start.unsigned_abs();
        let name = format!("anon_struct_{abs:x}");
        let fields: Vec<StructFieldType> = group
            .iter()
            .enumerate()
            .map(|(i, (off, ty, _))| StructFieldType {
                name: format!("field_{i}"),
                ty: Type::Primitive(*ty),
                offset: (off - start) as u64,
            })
            .collect();
        func.inferred_structs
            .insert(start, Type::Struct { name, fields });
    }
}

fn field_size(ty: PrimitiveType) -> Option<u8> {
    match ty {
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => Some(w),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double => Some(8),
        PrimitiveType::Ptr => Some(8),
        PrimitiveType::Unknown => None,
    }
}

fn build_def_map(func: &SsaFunction) -> DefMap {
    let mut def_map: DefMap = BTreeMap::new();
    for (&(bid, insn_idx, ref slot), sv) in &func.var_map {
        if *slot == VarnodeSlot::Output {
            def_map.entry(sv.base).or_default().push((bid, insn_idx));
        }
    }
    def_map
}

fn extract_stack_offset_with_hints(
    current_loc: (BlockId, usize),
    insn: &unlace_ir::IrInsn,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    ssa_resolve_cache: &mut SsaResolveCache,
    spec: &StackSpec,
) -> Option<i64> {
    // Case 0: pre-optimization snapshot hints captured before fixedpoint
    // propagation can collapse stack-relative address expressions to constants.
    if let Some(&hint) = func.stack_offset_hints.get(&current_loc) {
        return Some(hint);
    }

    extract_stack_offset(
        current_loc,
        insn,
        func,
        def_map,
        resolve_cache,
        ssa_resolve_cache,
        spec,
    )
}

fn extract_stack_offset(
    current_loc: (BlockId, usize),
    insn: &unlace_ir::IrInsn,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    ssa_resolve_cache: &mut SsaResolveCache,
    spec: &StackSpec,
) -> Option<i64> {
    let addr = &insn.inputs[1];

    // Case 1: Address is already a SpaceId::Stack varnode.
    if addr.space == SpaceId::Stack {
        return Some(addr.offset as i64);
    }

    // Case 2: Address is the SP or FP register directly (offset 0).
    if spec.is_frame_base(addr) {
        return Some(0);
    }

    // Case 3: Look for the address being produced by INT_ADD(SP/FP, const)
    // or INT_SUB(SP/FP, const). We need to find the instruction that defines
    // this varnode and check its pattern.
    //
    // Walk the instruction stream to find the definition of addr.
    if addr.space == SpaceId::Unique || addr.space == SpaceId::Register {
        if let Some(&addr_sv) =
            func.var_map
                .get(&(current_loc.0, current_loc.1, VarnodeSlot::Input(1)))
        {
            return find_rsp_relative_offset_ssa(
                &addr_sv,
                func,
                def_map,
                resolve_cache,
                ssa_resolve_cache,
                0,
                spec,
            );
        }
        return find_rsp_relative_offset(addr, func, def_map, resolve_cache, 0, spec);
    }

    None
}

const MAX_RESOLVE_DEPTH: u32 = 16;

fn find_rsp_relative_offset(
    addr_varnode: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    if depth > MAX_RESOLVE_DEPTH {
        return None;
    }
    if let Some(&cached) = resolve_cache.get(&(*addr_varnode, depth)) {
        return cached;
    }

    let resolved =
        find_rsp_relative_offset_uncached(addr_varnode, func, def_map, resolve_cache, depth, spec);
    resolve_cache.insert((*addr_varnode, depth), resolved);
    resolved
}

fn find_rsp_relative_offset_uncached(
    addr_varnode: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    // Find instructions that define this varnode via the precomputed output index.
    for &(bid, insn_idx) in def_map.get(addr_varnode)? {
        let block = func.function.blocks.get(&bid)?;
        let def_insn = block.insns.get(insn_idx)?;

        match def_insn.op {
            IrOp::IntAdd => {
                if def_insn.inputs.len() < 2 {
                    continue;
                }
                let (base, disp) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if spec.is_frame_base(base) && disp.space == SpaceId::Const {
                    return Some(disp.offset as i64);
                }
                if spec.is_frame_base(disp) && base.space == SpaceId::Const {
                    return Some(base.offset as i64);
                }
                // base could be an SSA version of SP produced by INT_SUB
                if disp.space == SpaceId::Const
                    && let Some(base_off) = find_rsp_relative_offset(
                        base,
                        func,
                        def_map,
                        resolve_cache,
                        depth + 1,
                        spec,
                    )
                {
                    return Some(base_off.wrapping_add(disp.offset as i64));
                }
                if base.space == SpaceId::Const
                    && let Some(disp_off) = find_rsp_relative_offset(
                        disp,
                        func,
                        def_map,
                        resolve_cache,
                        depth + 1,
                        spec,
                    )
                {
                    return Some(disp_off.wrapping_add(base.offset as i64));
                }
            }
            IrOp::IntSub => {
                if def_insn.inputs.len() < 2 {
                    continue;
                }
                let (base, disp) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if spec.is_frame_base(base) && disp.space == SpaceId::Const {
                    return Some(-(disp.offset as i64));
                }
                // base could be an SSA version of SP
                if disp.space == SpaceId::Const
                    && let Some(base_off) = find_rsp_relative_offset(
                        base,
                        func,
                        def_map,
                        resolve_cache,
                        depth + 1,
                        spec,
                    )
                {
                    return Some(base_off.wrapping_sub(disp.offset as i64));
                }
            }
            IrOp::Copy => {
                if def_insn.inputs.is_empty() {
                    continue;
                }
                let src = &def_insn.inputs[0];
                if spec.is_frame_base(src) {
                    return Some(0);
                }
                return find_rsp_relative_offset(
                    src,
                    func,
                    def_map,
                    resolve_cache,
                    depth + 1,
                    spec,
                );
            }
            _ => {}
        }
    }

    None
}

fn find_rsp_relative_offset_ssa(
    addr_sv: &SsaVarnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    ssa_resolve_cache: &mut SsaResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    if depth > MAX_RESOLVE_DEPTH {
        return None;
    }
    if let Some(&cached) = ssa_resolve_cache.get(&(*addr_sv, depth)) {
        return cached;
    }

    let resolved = find_rsp_relative_offset_ssa_uncached(
        addr_sv,
        func,
        def_map,
        resolve_cache,
        ssa_resolve_cache,
        depth,
        spec,
    );
    ssa_resolve_cache.insert((*addr_sv, depth), resolved);
    resolved
}

fn find_rsp_relative_offset_ssa_uncached(
    addr_sv: &SsaVarnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    ssa_resolve_cache: &mut SsaResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    if addr_sv.base.space == SpaceId::Stack {
        return Some(addr_sv.base.offset as i64);
    }
    if spec.is_frame_base(&addr_sv.base) {
        return Some(0);
    }

    let (bid, insn_idx) = defining_site_for_sv(func, addr_sv)?;
    let block = func.function.blocks.get(&bid)?;
    let def_insn = block.insns.get(insn_idx)?;

    match def_insn.op {
        IrOp::IntAdd => {
            if def_insn.inputs.len() < 2 {
                return None;
            }
            let (base, disp) = (&def_insn.inputs[0], &def_insn.inputs[1]);
            if disp.space == SpaceId::Const
                && let Some(base_off) = resolve_operand_relative_offset(
                    (bid, insn_idx),
                    0,
                    base,
                    func,
                    def_map,
                    resolve_cache,
                    ssa_resolve_cache,
                    depth + 1,
                    spec,
                )
            {
                return Some(base_off.wrapping_add(disp.offset as i64));
            }
            if base.space == SpaceId::Const
                && let Some(disp_off) = resolve_operand_relative_offset(
                    (bid, insn_idx),
                    1,
                    disp,
                    func,
                    def_map,
                    resolve_cache,
                    ssa_resolve_cache,
                    depth + 1,
                    spec,
                )
            {
                return Some(disp_off.wrapping_add(base.offset as i64));
            }
            None
        }
        IrOp::IntSub => {
            if def_insn.inputs.len() < 2 {
                return None;
            }
            let (base, disp) = (&def_insn.inputs[0], &def_insn.inputs[1]);
            if disp.space == SpaceId::Const
                && let Some(base_off) = resolve_operand_relative_offset(
                    (bid, insn_idx),
                    0,
                    base,
                    func,
                    def_map,
                    resolve_cache,
                    ssa_resolve_cache,
                    depth + 1,
                    spec,
                )
            {
                return Some(base_off.wrapping_sub(disp.offset as i64));
            }
            None
        }
        IrOp::Copy => {
            let src = def_insn.inputs.first()?;
            resolve_operand_relative_offset(
                (bid, insn_idx),
                0,
                src,
                func,
                def_map,
                resolve_cache,
                ssa_resolve_cache,
                depth + 1,
                spec,
            )
        }
        _ => None,
    }
}

fn resolve_operand_relative_offset(
    site: (BlockId, usize),
    input_idx: usize,
    vn: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    ssa_resolve_cache: &mut SsaResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    if vn.space == SpaceId::Stack {
        return Some(vn.offset as i64);
    }
    if spec.is_frame_base(vn) {
        return Some(0);
    }
    if vn.space == SpaceId::Const {
        return None;
    }
    if let Some(&input_sv) = func
        .var_map
        .get(&(site.0, site.1, VarnodeSlot::Input(input_idx)))
    {
        return find_rsp_relative_offset_ssa(
            &input_sv,
            func,
            def_map,
            resolve_cache,
            ssa_resolve_cache,
            depth,
            spec,
        );
    }
    if vn.space == SpaceId::Unique || vn.space == SpaceId::Register {
        return find_rsp_relative_offset(vn, func, def_map, resolve_cache, depth, spec);
    }
    None
}

fn defining_site_for_sv(func: &SsaFunction, needle: &SsaVarnode) -> Option<(BlockId, usize)> {
    func.var_map
        .iter()
        .find_map(|(&(bid, insn_idx, ref slot), sv)| {
            (*slot == VarnodeSlot::Output && sv == needle).then_some((bid, insn_idx))
        })
}

fn infer_stack_var_type(
    access_list: &[(SsaVarnode, u8)],
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
) -> PrimitiveType {
    let mut ty = PrimitiveType::Unknown;
    for &(sv, size) in access_list {
        if let Some(&existing) = var_types.get(&sv) {
            ty = ty.join(existing);
        } else if ty == PrimitiveType::Unknown && size > 0 {
            ty = PrimitiveType::Int(size);
        }
    }
    // If still unknown, use the most common access size.
    if ty == PrimitiveType::Unknown
        && let Some(&(_, size)) = access_list.first()
        && size > 0
    {
        ty = PrimitiveType::Int(size);
    }
    ty
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
        let mut ssa = build_ssa(func);
        // Tests synthesise x86_64 SSA; tag the function so the new arch-aware
        // spec lookup resolves to the legacy RSP=32 / RBP=40 offsets.
        ssa.arch = ArchId::X86_64;
        ssa
    }

    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }
    fn rbp() -> Varnode {
        Varnode::reg(40, 8)
    }

    #[test]
    fn test_store_rsp_sub_const() {
        // Typical push pattern:
        //   u0 = INT_SUB rsp, c8       (new_rsp = rsp - 8)
        //   rsp = COPY u0              (update rsp)
        //   STORE c1, u0, r232         (store rbp at [new_rsp])
        let u0 = Varnode::unique(0, 8);
        let rbp_reg = Varnode::reg(40, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, rbp_reg], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "should have found stack variables");
        assert!(
            ssa.stack_vars.contains_key(&-8),
            "should have a stack var at offset -8, got: {:?}",
            ssa.stack_vars.keys().collect::<Vec<_>>()
        );

        let sv = &ssa.stack_vars[&-8];
        assert_eq!(sv.offset, -8);
        assert_eq!(sv.name, "local_8");
        assert!(!sv.accesses.is_empty());
    }

    #[test]
    fn test_load_rsp_add_const() {
        // Load from [rsp + 16]:
        //   u0 = INT_ADD rsp, c16
        //   v0 = LOAD c1, u0
        let u0 = Varnode::unique(0, 8);
        let v0 = Varnode::reg(0, 8);
        let c16 = Varnode::constant(16, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, u0, smallvec![rsp(), c16], 0x1000),
            IrInsn::with_output(IrOp::Load, v0, smallvec![space_ram, u0], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert!(
            ssa.stack_vars.contains_key(&16),
            "should have a stack var at offset +16, got: {:?}",
            ssa.stack_vars.keys().collect::<Vec<_>>()
        );

        let sv = &ssa.stack_vars[&16];
        assert_eq!(sv.offset, 16);
        assert_eq!(sv.name, "local_10");
    }

    #[test]
    fn test_rbp_relative_access() {
        // Load from [rbp - 4]:
        //   u0 = INT_SUB rbp, c4
        //   v0 = LOAD c1, u0
        let u0 = Varnode::unique(0, 4);
        let v0 = Varnode::reg(0, 4);
        let c4 = Varnode::constant(4, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rbp(), c4], 0x1000),
            IrInsn::with_output(IrOp::Load, v0, smallvec![space_ram, u0], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert!(ssa.stack_vars.contains_key(&-4));
        let sv = &ssa.stack_vars[&-4];
        assert_eq!(sv.name, "local_4");
    }

    #[test]
    fn test_multiple_accesses_same_offset_grouped() {
        // Two stores to [rsp - 8]:
        //   u0 = INT_SUB rsp, c8
        //   STORE c1, u0, val1
        //   STORE c1, u0, val2
        let u0 = Varnode::unique(0, 8);
        let val1 = Varnode::reg(0, 8);
        let val2 = Varnode::reg(8, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val1], 0x1004),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val2], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        pass.run(&mut ssa).expect("pass should succeed");

        assert_eq!(
            ssa.stack_vars.len(),
            1,
            "both stores should map to same stack var"
        );
        let sv = &ssa.stack_vars[&-8];
        assert!(
            sv.accesses.len() >= 2,
            "should have at least 2 distinct accesses, got {}",
            sv.accesses.len()
        );
    }

    #[test]
    fn test_direct_stack_space_varnode() {
        // If a lifter already emits SpaceId::Stack varnodes directly.
        let s_neg8 = Varnode::stack((-8i64) as u64, 8);
        let val = Varnode::reg(0, 8);
        let space_stack = Varnode::constant(SpaceId::Stack as u64, 8);

        let insns = vec![IrInsn::without_output(
            IrOp::Store,
            smallvec![space_stack, s_neg8, val],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        let offset = (-8i64) as u64 as i64;
        assert!(
            ssa.stack_vars.contains_key(&offset),
            "should detect SpaceId::Stack varnode, got: {:?}",
            ssa.stack_vars.keys().collect::<Vec<_>>()
        );
    }

    #[test]
    fn test_no_stack_access_no_change() {
        // Pure register arithmetic, no stack accesses.
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed);
        assert!(ssa.stack_vars.is_empty());
    }

    #[test]
    fn test_no_change_on_rerun() {
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        assert!(pass.run(&mut ssa).unwrap());
        assert!(
            !pass.run(&mut ssa).unwrap(),
            "second run should report no change"
        );
    }

    #[test]
    fn test_type_from_type_infer() {
        // Run TypeInferPass first, then StackVarRecoveryPass should pick up the type.
        let u0 = Varnode::unique(0, 8);
        let v0 = Varnode::reg(0, 4);
        let c16 = Varnode::constant(16, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, u0, smallvec![rsp(), c16], 0x1000),
            IrInsn::with_output(IrOp::Load, v0, smallvec![space_ram, u0], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);

        // Run type inference first.
        let type_pass = crate::type_infer::TypeInferPass;
        type_pass
            .run(&mut ssa)
            .expect("TypeInferPass should succeed");

        let stack_pass = StackVarRecoveryPass;
        stack_pass
            .run(&mut ssa)
            .expect("StackVarRecoveryPass should succeed");

        let sv = &ssa.stack_vars[&16];
        assert_ne!(
            sv.ty,
            PrimitiveType::Unknown,
            "type should be inferred from TypeInferPass"
        );
    }

    #[test]
    fn test_dwarf_local_name_overrides_synthetic() {
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        ssa.dwarf_local_names.insert(-8, "user_count".to_string());

        let pass = StackVarRecoveryPass;
        pass.run(&mut ssa).expect("pass should succeed");

        let sv = &ssa.stack_vars[&-8];
        assert_eq!(sv.name, "user_count");
    }

    #[test]
    fn test_struct_inference_two_adjacent_int_fields() {
        let mut ssa = make_single_block_ssa(vec![]);
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "local_8".into(),
                ty: PrimitiveType::Int(4),
                accesses: Vec::new(),
            },
        );
        ssa.stack_vars.insert(
            -4,
            StackVar {
                offset: -4,
                name: "local_4".into(),
                ty: PrimitiveType::Int(4),
                accesses: Vec::new(),
            },
        );

        infer_struct_layouts(&mut ssa);

        assert_eq!(ssa.inferred_structs.len(), 1);
        let (start, ty) = ssa.inferred_structs.iter().next().unwrap();
        assert_eq!(*start, -8);
        match ty {
            Type::Struct { fields, .. } => {
                assert_eq!(fields.len(), 2);
                assert_eq!(fields[0].offset, 0);
                assert_eq!(fields[0].ty, Type::Primitive(PrimitiveType::Int(4)));
                assert_eq!(fields[1].offset, 4);
                assert_eq!(fields[1].ty, Type::Primitive(PrimitiveType::Int(4)));
            }
            other => panic!("expected Type::Struct, got {other:?}"),
        }
    }

    #[test]
    fn test_struct_inference_skips_non_adjacent() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let val1 = Varnode::reg(0, 4);
        let val2 = Varnode::reg(4, 4);
        let c8 = Varnode::constant(8, 8);
        let c40 = Varnode::constant(40, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val1], 0x1004),
            IrInsn::with_output(IrOp::IntSub, u1, smallvec![rsp(), c40], 0x1008),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u1, val2], 0x100c),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        pass.run(&mut ssa).expect("pass should succeed");

        assert!(
            ssa.inferred_structs.is_empty(),
            "non-adjacent slots should not produce a struct, got: {:?}",
            ssa.inferred_structs
        );
    }

    #[test]
    fn test_no_dwarf_keeps_synthetic_name() {
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 8);
        let c16 = Varnode::constant(16, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c16], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, val], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        assert!(ssa.dwarf_local_names.is_empty());

        let pass = StackVarRecoveryPass;
        pass.run(&mut ssa).expect("pass should succeed");

        let sv = &ssa.stack_vars[&-16];
        assert_eq!(sv.name, "local_10");
    }

    #[test]
    fn test_chained_rsp_sub_then_add() {
        // Pattern: rsp adjusted, then local accessed relative to new rsp:
        //   u0 = INT_SUB rsp, c32      (allocate 32 bytes)
        //   u1 = INT_ADD u0, c8         (access local at rsp-32+8 = rsp-24)
        //   STORE c1, u1, val
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let val = Varnode::reg(0, 8);
        let c32 = Varnode::constant(32, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c32], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![u0, c8], 0x1004),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u1, val], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = StackVarRecoveryPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        // -32 + 8 = -24
        assert!(
            ssa.stack_vars.contains_key(&-24),
            "should have stack var at -24, got: {:?}",
            ssa.stack_vars.keys().collect::<Vec<_>>()
        );
        assert_eq!(ssa.stack_vars[&-24].name, "local_18");
    }

    /// Frame: 24 bytes total. Slots: i32@-20 (4) + i64@-16 (8) + i64@-8 (8).
    /// The 4-byte hole between RSP-24 (frame start) and RSP-20 sits adjacent
    /// to a typed slot ⇒ should be classified as alignment padding and
    /// suppressed.
    #[test]
    fn t70_padding_gap_is_suppressed() {
        use unlace_ir::ssa::StackVar;

        let mut func = unlace_ir::Function::new("padding", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let u0 = Varnode::unique(0, 8);
        let c24 = Varnode::constant(24, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            u0,
            smallvec![rsp(), c24],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsp(),
            smallvec![u0],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        ssa.arch = ArchId::X86_64;

        ssa.stack_vars.insert(
            -20,
            StackVar {
                offset: -20,
                name: "i".to_string(),
                ty: PrimitiveType::Int(4),
                accesses: Vec::new(),
            },
        );
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "j".to_string(),
                ty: PrimitiveType::Int(8),
                accesses: Vec::new(),
            },
        );
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "k".to_string(),
                ty: PrimitiveType::Int(8),
                accesses: Vec::new(),
            },
        );

        super::detect_frame_gaps(&mut ssa);

        assert_eq!(ssa.frame_size, 24);
        assert!(
            ssa.stack_gaps.is_empty(),
            "small adjacent gap must be classified as padding, got {:?}",
            ssa.stack_gaps
        );
    }

    /// Frame: 64 bytes. A single 8-byte slot at -8 leaves the bottom 56
    /// bytes of the frame uncovered — that's a real explicit buffer gap
    /// (>8 bytes), not alignment padding.
    #[test]
    fn t70_explicit_buffer_gap_is_emitted() {
        use unlace_ir::ssa::StackVar;

        let mut func = unlace_ir::Function::new("buf", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let u0 = Varnode::unique(0, 8);
        let c64 = Varnode::constant(64, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            u0,
            smallvec![rsp(), c64],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        ssa.arch = ArchId::X86_64;

        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "ret".to_string(),
                ty: PrimitiveType::Int(8),
                accesses: Vec::new(),
            },
        );

        super::detect_frame_gaps(&mut ssa);

        assert_eq!(ssa.frame_size, 64);
        assert_eq!(ssa.stack_gaps.len(), 1);
        let (&start, &size) = ssa.stack_gaps.iter().next().unwrap();
        assert_eq!(start, -64);
        assert_eq!(size, 56);
    }

    #[test]
    fn t70_no_prologue_no_gaps() {
        let mut func = unlace_ir::Function::new("noprologue", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        ssa.arch = ArchId::X86_64;
        super::detect_frame_gaps(&mut ssa);
        assert_eq!(ssa.frame_size, 0);
        assert!(ssa.stack_gaps.is_empty());
    }
}
