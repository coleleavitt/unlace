//! pipeline: debug info.

use super::*;

/// Empirically pick the per-function CFA→resolved delta and re-key the staged
/// DWARF local/param records onto the resolved stack slots.
///
/// The candidate set is `{0, cfa_to_rbp_delta}` where `cfa_to_rbp_delta` is
/// the constant offset of the function's `CFA = RBP + offset` `.eh_frame`
/// rule (only present for frame-pointer functions). The delta that lands the
/// most DWARF offsets onto observed stack offsets wins, but a nonzero delta
/// is only accepted when it corroborates at least two DWARF offsets AND
/// strictly beats the zero-shift count — so no-frame-pointer / leaf functions
/// (whose accesses don't corroborate `+16`) are never shifted. This is the
/// measured equivalent of the `+16` for FP functions and `0` otherwise.
pub(super) fn calibrate_dwarf_offsets(ssa: &mut SsaFunction) {
    if ssa.pending_dwarf_locals.is_empty() {
        return;
    }

    // Observed offset universe: every resolved stack offset the decompiler
    // tracked (LOAD/STORE hints + recovered stack vars).
    let mut observed: BTreeSet<i64> = ssa.stack_offset_hints.values().copied().collect();
    observed.extend(ssa.stack_vars.keys().copied());

    // The single per-function candidate delta from CFI (if any).
    let cfi_delta = ssa
        .pending_dwarf_locals
        .iter()
        .find_map(|p| p.cfa_to_rbp_delta)
        .filter(|d| *d != 0);

    let raw_offsets: Vec<i64> = ssa
        .pending_dwarf_locals
        .iter()
        .map(|p| p.frame_offset)
        .collect();

    let count_matches = |delta: i64| -> usize {
        raw_offsets
            .iter()
            .filter(|&&off| observed.contains(&(off + delta)))
            .count()
    };

    let zero_matches = count_matches(0);
    let delta = match cfi_delta {
        Some(d) => {
            let d_matches = count_matches(d);
            // Prefer leaving offsets un-shifted (delta=0). The CFI
            // CFA→rbp delta is only applied when it binds STRICTLY MORE names
            // than delta=0 AND delta=0 fails to bind every pending local —
            // i.e. only when the raw offsets genuinely do not land on observed
            // slots. When delta=0 already accounts for all (or as many) locals,
            // shifting by the CFA delta merely re-keys names onto DIFFERENT
            // lifetimes (the `debug_calls` over-shift: a@-36 is the live copy
            // slot, but +16 re-binds `a` onto the add-result slot). The
            // canonicity proof (LvarNaming/AssignNames) requires the binding be
            // a function of the value's own live range, not an offset shift that
            // happens to hit *some* observed slot.
            // Only apply the CFA shift when delta=0 binds NOTHING (the raw
            // DWARF offsets genuinely live in a different coordinate system) and
            // the shift recovers ≥2 corroborated slots. Otherwise prefer the raw
            // offsets: when delta=0 already lands names on real observed slots,
            // those are the variables' own live-range slots, and shifting merely
            // re-keys names onto neighbouring (computed-result) lifetimes — the
            // measured `debug_calls` over-shift, where a@-36 (the live copy
            // slot) was wrongly moved to the add-result slot at -20. Grounded by
            // LvarNaming/AssignNames canonicity: the binding must follow the
            // value's own live range, not an offset shift that happens to hit
            // some observed slot.
            if zero_matches == 0 && d_matches >= 2 {
                d
            } else {
                0
            }
        }
        None => 0,
    };

    let trace = dwarf_map_trace_enabled();
    if trace {
        tracing::debug!(
            target: "unlace::dwarf_map",
            "calibrate func={} cfi_delta={:?} zero_matches={} chosen_delta={} pending={}",
            ssa.function.name,
            cfi_delta,
            zero_matches,
            delta,
            ssa.pending_dwarf_locals.len(),
        );
    }

    record_dwarf_stack_local_annotations(ssa, delta, trace);

    if delta == 0 {
        return;
    }

    // Re-key dwarf_local_names by the chosen delta. Build a fresh map so a
    // shifted key cannot collide with an as-yet-unshifted one.
    //
    // Two record classes are deliberately NOT shifted onto resolved slots:
    //
    //   * Aggregate (struct/union/array) locals — naming them as scalars
    //     de-fuses a coalesced byte buffer (e.g. `char p[36]`) into
    //     mistyped scalars whose int-constant field stores fail to compile
    //     or alter behavior (the `type_stack_o2` canary). We instead keep
    //     their RAW (uncalibrated) entry so the downstream buffer fusion
    //     behaves exactly as at baseline.
    //
    //   * Parameter home slots — a spilled-arg slot that shadows an incoming
    //     register parameter must be suppressed, not declared as a local
    //     (otherwise `int x; x = x;`). Their raw entry is also preserved to
    //     match baseline.
    let mut calibrated: BTreeMap<i64, String> = BTreeMap::new();
    let mut aggregate_offsets: BTreeSet<i64> = BTreeSet::new();
    for pending in &ssa.pending_dwarf_locals {
        if pending.name.is_empty() {
            continue;
        }
        // Parameter home slots are never added to dwarf_local_names (baseline
        // seeded locals only); suppression of the duplicate home slot is
        // handled separately.
        if pending.is_param {
            continue;
        }
        if pending.is_aggregate {
            // Preserve the baseline raw seed so buffer fusion / phantom
            // seeding is unchanged for these slots. Record the offset so the
            // array-fusion guard allows aggregate-named slots to coalesce.
            calibrated
                .entry(pending.frame_offset)
                .or_insert_with(|| pending.name.clone());
            aggregate_offsets.insert(pending.frame_offset);
            continue;
        }
        let key = pending.frame_offset + delta;
        // Only relocate names that actually land on an observed slot; a
        // record whose shifted offset is unobserved keeps out of the map so
        // we never invent a name on an empty slot.
        if observed.contains(&key) {
            calibrated
                .entry(key)
                .or_insert_with(|| pending.name.clone());
            if trace {
                tracing::debug!(
                    target: "unlace::dwarf_map",
                    "  name raw={} -> resolved={} name={}",
                    pending.frame_offset, key, pending.name
                );
            }
        }
    }
    ssa.dwarf_local_names = calibrated;
    ssa.dwarf_aggregate_offsets = aggregate_offsets;
}

pub(super) fn record_dwarf_stack_local_annotations(ssa: &mut SsaFunction, delta: i64, trace: bool) {
    for pending in &mut ssa.pending_dwarf_locals {
        if !pending.is_aggregate || pending.name.is_empty() {
            continue;
        }
        pending.raw_span = pending.byte_size.map(|byte_size| DwarfStackLocalSpan {
            start: pending.frame_offset,
            byte_size,
        });
        pending.calibrated_span = pending.byte_size.map(|byte_size| DwarfStackLocalSpan {
            start: pending.frame_offset + delta,
            byte_size,
        });
        if trace {
            tracing::debug!(
                target: "unlace::dwarf_map",
                "  aggregate raw={} calibrated={} name={} type={:?} size={:?}",
                pending.frame_offset,
                pending.frame_offset + delta,
                pending.name,
                pending.type_name,
                pending.byte_size
            );
        }
    }
}

pub(super) fn dwarf_map_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::dwarf_map", tracing::Level::DEBUG)
}

pub(super) fn apply_dwarf_to_ssa(ssa: &mut SsaFunction, dwarf: &DwarfInfo, entry: &FunctionEntry) {
    let Some(debug_func) = dwarf_function_for_entry(dwarf, entry) else {
        return;
    };

    let cfa_delta = debug_func.cfa_to_rbp_delta;

    // Seed the raw (uncalibrated) name map. Keys are CFA-relative; the
    // structural-stage calibration step rewrites them onto the resolved
    // stack slots using `cfa_delta` once real access offsets are known.
    // We keep seeding here so any consumer that runs before calibration
    // (and the no-frame-pointer / no-delta path) still sees the raw name.
    for local in &debug_func.locals {
        let Some(frame_offset) = local.frame_offset else {
            continue;
        };
        ssa.dwarf_local_names
            .entry(frame_offset)
            .or_insert_with(|| local.name.clone());

        let is_aggregate = local
            .type_name
            .as_deref()
            .is_some_and(|tn| dwarf_type_is_aggregate(tn, dwarf));
        ssa.pending_dwarf_locals.push(PendingDwarfLocal {
            frame_offset,
            name: local.name.clone(),
            type_name: local.type_name.clone(),
            byte_size: local
                .type_name
                .as_deref()
                .and_then(|type_name| dwarf_type_byte_size(type_name, dwarf)),
            raw_span: None,
            calibrated_span: None,
            cfa_to_rbp_delta: cfa_delta,
            is_aggregate,
            is_param: false,
        });
    }

    // Stage spilled-parameter home slots so calibration can reason about
    // them. We intentionally do NOT add the param name to
    // `dwarf_local_names` here (that is gated below in calibration via
    // `is_param`): a home-slot local that shadows an incoming register
    // parameter must be SUPPRESSED, not declared (otherwise `int x; x = x;`).
    for param in &debug_func.params {
        let Some(frame_offset) = param.frame_offset else {
            continue;
        };
        let is_aggregate = param
            .type_name
            .as_deref()
            .is_some_and(|tn| dwarf_type_is_aggregate(tn, dwarf));
        ssa.pending_dwarf_locals.push(PendingDwarfLocal {
            frame_offset,
            name: param.name.clone().unwrap_or_default(),
            type_name: param.type_name.clone(),
            byte_size: param
                .type_name
                .as_deref()
                .and_then(|type_name| dwarf_type_byte_size(type_name, dwarf)),
            raw_span: None,
            calibrated_span: None,
            cfa_to_rbp_delta: cfa_delta,
            is_aggregate,
            is_param: true,
        });
    }
}

/// `true` when the DWARF `type_name` denotes a struct / union / array
/// aggregate that the scalar decl + body-store emitter cannot yet render
/// faithfully. Such locals are excluded from name calibration so a coalesced
/// byte buffer is not de-fused into mistyped scalars (the `type_stack_o2`
/// canary). Detected from array `[` syntax and known struct/union names.
pub(super) fn dwarf_type_is_aggregate(type_name: &str, dwarf: &DwarfInfo) -> bool {
    let normalized = normalize_dwarf_type_name(type_name);
    let trimmed = normalized.trim();
    // Pointer to an aggregate is still a pointer-sized scalar slot — fine to
    // name. Only bare aggregates (no `*`) are problematic.
    if trimmed.contains('*') {
        return false;
    }
    if trimmed.contains('[') {
        return true;
    }
    let base = trimmed
        .strip_prefix("struct ")
        .or_else(|| trimmed.strip_prefix("union "))
        .or_else(|| trimmed.strip_prefix("class "))
        .unwrap_or(trimmed)
        .trim();
    dwarf.structs.contains_key(base) || dwarf.unions.contains_key(base)
}

pub(super) fn dwarf_type_byte_size(type_name: &str, dwarf: &DwarfInfo) -> Option<u64> {
    let normalized = normalize_dwarf_type_name(type_name);
    let trimmed = normalized.trim();
    if trimmed.contains('*') {
        return None;
    }
    if let Some((element_type, dimensions)) = parse_dwarf_array_type(trimmed) {
        let element_size = dwarf_non_array_type_byte_size(element_type, dwarf)?;
        return dimensions
            .into_iter()
            .try_fold(element_size, |size, count| size.checked_mul(count?));
    }
    dwarf_non_array_type_byte_size(trimmed, dwarf)
}

pub(super) fn dwarf_non_array_type_byte_size(type_name: &str, dwarf: &DwarfInfo) -> Option<u64> {
    let base = type_name
        .strip_prefix("struct ")
        .or_else(|| type_name.strip_prefix("union "))
        .or_else(|| type_name.strip_prefix("class "))
        .unwrap_or(type_name)
        .trim();
    dwarf
        .structs
        .get(base)
        .map(|ty| ty.size)
        .or_else(|| dwarf.unions.get(base).map(|ty| ty.size))
        .filter(|size| *size > 0)
        .or_else(|| primitive_dwarf_type_byte_size(base))
}

pub(super) fn parse_dwarf_array_type(type_name: &str) -> Option<(&str, Vec<Option<u64>>)> {
    let first_bracket = type_name.find('[')?;
    let element_type = type_name[..first_bracket].trim();
    if element_type.is_empty() {
        return None;
    }
    let mut dimensions = Vec::new();
    let mut rest = &type_name[first_bracket..];
    while let Some(after_open) = rest.strip_prefix('[') {
        let close = after_open.find(']')?;
        let dim_text = after_open[..close].trim();
        let dim = if dim_text.is_empty() {
            None
        } else {
            Some(dim_text.parse::<u64>().ok()?)
        };
        dimensions.push(dim);
        rest = after_open[close + 1..].trim_start();
    }
    rest.is_empty().then_some((element_type, dimensions))
}

pub(super) fn primitive_dwarf_type_byte_size(type_name: &str) -> Option<u64> {
    match type_name {
        "char" | "signed char" | "unsigned char" | "bool" | "_Bool" => Some(1),
        "short" | "short int" | "signed short" | "signed short int" | "unsigned short"
        | "unsigned short int" => Some(2),
        "int" | "signed int" | "unsigned int" | "float" => Some(4),
        "long"
        | "long int"
        | "signed long"
        | "signed long int"
        | "unsigned long"
        | "unsigned long int"
        | "long long"
        | "long long int"
        | "signed long long"
        | "signed long long int"
        | "unsigned long long"
        | "unsigned long long int"
        | "double" => Some(8),
        _ => None,
    }
}

pub(super) fn dwarf_function_for_entry<'a>(
    dwarf: &'a DwarfInfo,
    entry: &FunctionEntry,
) -> Option<&'a unlace_loader::FunctionDebugInfo> {
    dwarf
        .functions
        .values()
        .find(|func| func.name == entry.name)
        .or_else(|| dwarf.functions.get(&entry.addr))
}

/// PDB-local debug records selected for one function.
///
/// `function_rva` is the key used by [`PdbInfo::function_locals`].
#[derive(Clone, Copy)]
pub struct PdbFunctionLocalSource<'a> {
    pub info: &'a PdbInfo,
    pub types: Option<&'a PdbTypes>,
    pub function_rva: u64,
}

/// Overlay PDB locals onto the same debug-name / lvar metadata consumed by the
/// final C printer.
pub fn apply_pdb_function_locals_to_ssa(ssa: &mut SsaFunction, source: PdbFunctionLocalSource<'_>) {
    let Some(locals) = source.info.function_locals.get(&source.function_rva) else {
        return;
    };

    for local in locals {
        apply_pdb_local_to_ssa(ssa, local, source.types);
    }
}

pub(super) fn apply_pdb_local_to_ssa(
    ssa: &mut SsaFunction,
    local: &PdbLocal,
    types: Option<&PdbTypes>,
) {
    let Some(frame_offset) = local.frame_offset else {
        return;
    };
    if local.name.trim().is_empty() {
        return;
    }

    ssa.dwarf_local_names
        .entry(frame_offset)
        .or_insert_with(|| local.name.clone());

    let resolved = resolve_pdb_local_type(local.type_index, types);
    if let Some(ty) = resolved.as_ref()
        && ty.is_composite()
    {
        for base in stack_bases_for_frame_offset(ssa, frame_offset) {
            ssa.composite_var_types
                .entry(base)
                .or_insert_with(|| ty.clone());
        }
    }

    upsert_pdb_stack_lvar(ssa, frame_offset, &local.name, resolved.as_ref());
}

pub(super) fn resolve_pdb_local_type(type_index: u32, types: Option<&PdbTypes>) -> Option<Type> {
    types
        .and_then(|pdb_types| pdb_types.by_index.get(&type_index).cloned())
        .or_else(|| primitive_ti_to_type(type_index))
}

pub(super) fn upsert_pdb_stack_lvar(
    ssa: &mut SsaFunction,
    offset: i64,
    name: &str,
    ty: Option<&Type>,
) {
    let kind = ty.map(pdb_type_to_lvar_kind);
    if let Some(existing) = ssa.lvars.iter_mut().find(
        |lv| matches!(lv.storage, LvarStorage::Stack { offset: existing } if existing == offset),
    ) {
        if existing.source != LvarSource::FromDebug
            || existing
                .name
                .as_deref()
                .is_none_or(|existing_name| existing_name.trim().is_empty())
        {
            existing.name = Some(name.to_string());
        }
        if let Some(kind) = kind.filter(|kind| !matches!(kind, TypeKind::Void)) {
            existing.ty = kind;
        }
        existing.source = LvarSource::FromDebug;
        existing.flags.insert(LvarFlags::FROM_DEBUG);
        return;
    }

    let next_id = ssa
        .lvars
        .iter()
        .map(|lv| lv.id.as_u32())
        .max()
        .map_or(0, |id| id.saturating_add(1));
    let mut lv = Lvar::new(
        LvarId::new(next_id),
        LvarStorage::Stack { offset },
        LiveRange::point(ssa.function.entry),
        kind.unwrap_or(TypeKind::Void),
        LvarSource::FromDebug,
        LvarFlags::FROM_DEBUG,
    );
    lv.name = Some(name.to_string());
    ssa.lvars.push(lv);
}

pub(super) fn pdb_type_to_lvar_kind(ty: &Type) -> TypeKind {
    match ty {
        Type::Primitive(primitive) => primitive_to_lvar_kind(*primitive),
        Type::Ptr(inner) => match inner.as_ref() {
            Type::Primitive(PrimitiveType::Int(1)) => TypeKind::CharPtr,
            Type::Primitive(PrimitiveType::Unknown) => TypeKind::VoidPtr,
            _ => TypeKind::VoidPtr,
        },
        _ => TypeKind::Void,
    }
}

pub(super) fn primitive_to_lvar_kind(primitive: PrimitiveType) -> TypeKind {
    match primitive {
        PrimitiveType::Unknown => TypeKind::Void,
        PrimitiveType::Bool => TypeKind::Int,
        PrimitiveType::Int(8) => TypeKind::Long,
        PrimitiveType::Int(_) => TypeKind::Int,
        PrimitiveType::UnsignedInt(8) => TypeKind::ULong,
        PrimitiveType::UnsignedInt(_) => TypeKind::UInt,
        PrimitiveType::Float => TypeKind::Int,
        PrimitiveType::Double => TypeKind::Long,
        PrimitiveType::Ptr => TypeKind::VoidPtr,
        PrimitiveType::Vector(_) => TypeKind::Int,
    }
}

pub fn apply_pdb_debug_to_ssa(ssa: &mut SsaFunction, image: &BinaryImage, entry: &FunctionEntry) {
    if let Some(source) = pdb_function_local_source_for_entry(image, entry) {
        apply_pdb_function_locals_to_ssa(ssa, source);
    }
    apply_pdb_types_to_ssa(ssa, image);
}

pub(super) fn pdb_function_local_source_for_entry<'a>(
    image: &'a BinaryImage,
    entry: &FunctionEntry,
) -> Option<PdbFunctionLocalSource<'a>> {
    let info = image.pdb_info.as_ref()?;
    let image_base = image.image_base?;
    let function_rva = entry.addr.checked_sub(image_base)?;
    info.function_locals
        .contains_key(&function_rva)
        .then_some(PdbFunctionLocalSource {
            info,
            types: image.pdb_types.as_ref(),
            function_rva,
        })
}

/// Batch §1 Phase 4 — overlay PDB-recovered composite types onto SSA
/// varnodes. Mirrors [`apply_dwarf_to_ssa`] but pulls type information
/// from `image.pdb_types.structs` (lowered via
/// `unlace_loader::pdb_types::walk_tpi_with_index`) keyed by user-visible
/// type name.
///
/// For each DWARF-named local whose declared type name (after stripping
/// `struct`/`class` qualifiers) matches a recovered PDB struct, write
/// the lowered `Type::Struct` onto every SSA varnode that aliases the
/// local's stack offset.
///
/// `None` PDB info or no overlap → no-op.
pub fn apply_pdb_types_to_ssa(ssa: &mut SsaFunction, image: &BinaryImage) {
    let Some(pdb) = image.pdb_types.as_ref() else {
        return;
    };
    if pdb.structs.is_empty() || ssa.dwarf_local_names.is_empty() {
        return;
    }
    // Build a fast lookup of bare type names (strip `struct `/`class `/`union `
    // prefixes so DWARF-style names match PDB-style names).
    let mut by_name: BTreeMap<String, &Type> = BTreeMap::new();
    for (name, ty) in &pdb.structs {
        by_name.insert(strip_aggregate_qualifier(name), ty);
    }
    // Walk dwarf_local_names; the offset is the frame offset, the name
    // is the source identifier. We don't have its declared type here,
    // so the lookup matches by *variable* name → PDB struct name (the
    // common pattern when a local's name carries the type, e.g.
    // `point` of type `Point`).
    let local_entries: Vec<(i64, String)> = ssa
        .dwarf_local_names
        .iter()
        .map(|(&off, name)| (off, name.clone()))
        .collect();
    for (frame_offset, local_name) in local_entries {
        let key = strip_aggregate_qualifier(&local_name);
        let candidate = by_name
            .get(&key)
            .or_else(|| by_name.get(&capitalised(&key)))
            .cloned();
        let Some(ty) = candidate else { continue };
        for base in stack_bases_for_frame_offset(ssa, frame_offset) {
            ssa.composite_var_types
                .entry(base)
                .or_insert_with(|| ty.clone());
        }
    }
}

pub(super) fn strip_aggregate_qualifier(name: &str) -> String {
    name.strip_prefix("struct ")
        .or_else(|| name.strip_prefix("class "))
        .or_else(|| name.strip_prefix("union "))
        .unwrap_or(name)
        .trim()
        .to_string()
}

pub(super) fn capitalised(name: &str) -> String {
    let mut chars = name.chars();
    match chars.next() {
        Some(c) => {
            let mut out = c.to_uppercase().collect::<String>();
            out.extend(chars);
            out
        }
        None => name.to_string(),
    }
}

pub(super) fn stack_bases_for_frame_offset(
    ssa: &SsaFunction,
    frame_offset: i64,
) -> Vec<SsaVarnode> {
    let mut bases = BTreeSet::new();
    for var in ssa.var_map.values() {
        let base = var.base;
        if base.space == SpaceId::Stack && stack_offset_matches(base.offset, frame_offset) {
            bases.insert(*var);
        }
    }
    bases.into_iter().collect()
}

pub(super) fn stack_offset_matches(raw_offset: u64, frame_offset: i64) -> bool {
    raw_offset as i64 == frame_offset || raw_offset == frame_offset.unsigned_abs()
}

pub(super) fn normalize_dwarf_type_name(type_name: &str) -> String {
    type_name
        .trim()
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("typedef ", "")
}
