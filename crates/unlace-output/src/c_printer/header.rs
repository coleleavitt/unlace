//! c_printer: header.

use super::*;

pub(super) fn function_param_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
) -> BTreeSet<String> {
    let mut names = BTreeSet::new();
    if let Some(df) = dwarf_func {
        for param in &df.params {
            if let Some(name) = param.name.as_deref().filter(|name| is_c_identifier(name)) {
                names.insert(name.to_string());
            }
        }
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        for (name, _) in &sig.params {
            if is_c_identifier(name) {
                names.insert(name.clone());
            }
        }
    }
    for (name, _) in &func.params {
        if is_c_identifier(name) {
            names.insert(name.clone());
        }
    }
    names.insert("this".to_string());
    names
}

pub(super) fn compute_param_register_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let Some(regs) = header.and_then(|h| param_registers_for_convention(&h.convention)) else {
        return;
    };
    let params = ordered_function_param_names(func, dwarf_func);
    for (idx, name) in params.into_iter().enumerate() {
        let Some(&reg) = regs.get(idx) else {
            break;
        };
        if !is_c_identifier(&name) {
            continue;
        }
        for size in [8u8, 4, 2, 1] {
            ctx.name_overrides
                .entry(Varnode::new(SpaceId::Register, reg, size))
                .or_insert_with(|| name.clone());
        }
    }
}

/// Record the register of each DWARF pointer parameter with its declared
/// pointee, so arithmetic and accesses through it render in the pointee's
/// units: `param->member`, `param[i]`, `param + 1`.
pub(super) fn compute_param_pointees(
    dwarf_func: Option<&FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let (Some(df), Some(regs)) = (
        dwarf_func,
        header.and_then(|h| param_registers_for_convention(&h.convention)),
    ) else {
        return;
    };
    for (param, &reg) in df.params.iter().zip(regs) {
        let pointee = param
            .type_name
            .as_deref()
            .and_then(|ty| ctx.struct_layouts.pointee_struct(ty))
            .map(|name| Pointee::Struct(name.to_string()))
            .or_else(|| param.pointee_size.map(Pointee::Scalar));
        let Some(pointee) = pointee else {
            continue;
        };
        ctx.pointees
            .insert(Varnode::new(SpaceId::Register, reg, 8), pointee);
    }
}

pub(super) fn ordered_function_param_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
) -> Vec<String> {
    if let Some(df) = dwarf_func.filter(|df| !df.params.is_empty()) {
        return df
            .params
            .iter()
            .map(|p| p.name.clone().unwrap_or_else(|| "arg".to_string()))
            .collect();
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        return sig.params.iter().map(|(name, _)| name.clone()).collect();
    }
    func.params.iter().map(|(name, _)| name.clone()).collect()
}

pub(super) fn param_registers_for_convention(convention: &str) -> Option<&'static [u64]> {
    const SYSV: &[u64] = &[56, 48, 16, 8, 64, 72];
    const MSX64: &[u64] = &[8, 16, 64, 72];
    const THISCALL: &[u64] = &[8];
    const AARCH64: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

    match convention {
        "System V AMD64" => Some(SYSV),
        "Microsoft x64" => Some(MSX64),
        "thiscall" => Some(THISCALL),
        "AArch64" => Some(AARCH64),
        _ => None,
    }
}

pub(super) fn function_body_returns_void(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
) -> bool {
    if func.name == "main" {
        return false;
    }
    if let Some(df) = dwarf_func
        && let Some(ret) = df.return_type.as_deref()
    {
        return dwarf_type_to_c(ret) == "void";
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        return c_sig_return_type_for_type(&sig.return_type) == "void";
    }
    matches!(func.return_type, PrimitiveType::Unknown)
}

// ---------------------------------------------------------------------------
// Function header comment
// ---------------------------------------------------------------------------

pub(super) fn emit_function_header(hdr: &FunctionHeaderInfo, out: &mut String) {
    let display_name = match crate::demangle::demangle(&hdr.name) {
        Some(d) => d.full_signature,
        None => hdr.name.clone(),
    };
    let _ = write!(
        out,
        "/* Function:   {} | Address: 0x{:x} | Size: 0x{:x} ({} bytes) | Convention: {} | Stack frame: 0x{:x} ({} bytes)",
        display_name,
        hdr.address,
        hdr.size,
        hdr.size,
        hdr.convention,
        hdr.stack_frame,
        hdr.stack_frame,
    );
    if !hdr.callees.is_empty() {
        let demangled_callees: Vec<String> = hdr
            .callees
            .iter()
            .map(|c| match crate::demangle::demangle(c) {
                Some(d) => d.full_signature,
                None => c.clone(),
            })
            .collect();
        let _ = write!(out, " | Xrefs to:   {}", demangled_callees.join(", "));
    }
    let _ = writeln!(out, " | Xrefs from: unknown */");
    if hdr.dynamic_sp {
        let _ = writeln!(out, "// alloca / dynamic stack");
    }
}

/// Sentinel placed on the *first* line of the RTTI hierarchy block so a
/// post-pass like [`dedupe_rtti_hierarchy`] can find and dedupe it after
/// concatenating multiple per-function outputs.
pub(super) const RTTI_BLOCK_BEGIN: &str = "/*__UNLACE_RTTI_BLOCK_BEGIN__";

pub(super) const RTTI_BLOCK_END: &str = "__UNLACE_RTTI_BLOCK_END__*/";

pub(super) fn render_go_defer_summary(
    sites: &[GoDeferSite],
    symbols: Option<&BTreeMap<u64, String>>,
) -> Option<String> {
    if sites.is_empty() {
        return None;
    }
    let mut unique_targets: Vec<u64> = sites
        .iter()
        .map(|s| s.deferred_func)
        .filter(|addr| *addr != 0)
        .collect();
    unique_targets.sort_unstable();
    unique_targets.dedup();

    let mut out = String::new();
    let has_recover = sites.iter().any(|s| s.has_recover);
    if has_recover {
        out.push_str("// Go panic recovery: defer/recover chain detected\n");
    } else {
        out.push_str("// Go defer chain detected\n");
    }

    for addr in unique_targets {
        let name = symbols
            .and_then(|m| m.get(&addr))
            .cloned()
            .unwrap_or_else(|| format!("sub_{addr:X}"));
        let _ = writeln!(out, "//   defer {}(...);", name);
    }
    if sites.iter().any(|s| s.deferred_func == 0) {
        out.push_str("//   defer <opaque funcval>(...);\n");
    }
    if has_recover {
        out.push_str("//   recover();\n");
    }
    Some(out)
}

pub(super) fn emit_dwarf_struct_preamble(dwarf: &DwarfInfo) -> Option<String> {
    let structs: Vec<_> = dwarf
        .structs
        .values()
        .filter(|st| !st.name.is_empty())
        .collect();
    if structs.is_empty() {
        return None;
    }

    let mut out = String::new();
    for st in &structs {
        let name = crate::demangle::sanitize_for_c(&st.name);
        let _ = writeln!(out, "typedef struct {name} {name};");
    }
    for st in structs {
        let name = crate::demangle::sanitize_for_c(&st.name);
        let _ = writeln!(out, "struct {name} {{");
        for field in &st.fields {
            if field.name.is_empty() {
                continue;
            }
            let field_name = crate::demangle::sanitize_for_c(&field.name);
            let decl = dwarf_decl_to_c(&field.type_name, &field_name);
            let _ = writeln!(out, "    {decl};");
        }
        let _ = writeln!(out, "}};");
    }
    Some(out)
}

pub(super) fn emit_dwarf_local_summary(
    dwarf_func: Option<&FunctionDebugInfo>,
    materialized_names: &std::collections::BTreeSet<String>,
    out: &mut String,
) {
    let Some(dwarf_func) = dwarf_func else {
        return;
    };
    // Skip a local whose array was materialized as a real declaration (e.g.
    // `int buf[16];`): the comment would otherwise double-count the same array
    // type fact and stutter the recovered source variable.
    let visible: Vec<_> = dwarf_func
        .locals
        .iter()
        .filter(|local| {
            !local.name.is_empty()
                && !materialized_names.contains(&crate::demangle::sanitize_for_c(&local.name))
        })
        .collect();
    if visible.is_empty() {
        return;
    }

    out.push_str("    // DWARF locals\n");
    for local in visible {
        let name = crate::demangle::sanitize_for_c(&local.name);
        if let Some(type_name) = local.type_name.as_deref() {
            let decl = dwarf_decl_to_c(type_name, &name);
            let _ = writeln!(out, "    //   {decl};");
        } else {
            let _ = writeln!(out, "    //   {name};");
        }
    }
}
