//! c_printer: rtti.

use super::*;

pub(super) fn emit_rtti_hierarchy(rtti: &unlace_loader::RttiInfo, out: &mut String) {
    let hierarchy = rtti.format_hierarchy();
    if hierarchy.is_empty() {
        return;
    }
    out.push_str(RTTI_BLOCK_BEGIN);
    out.push('\n');
    let _ = writeln!(out, " * C++ Class Hierarchy (from RTTI):");
    for line in hierarchy.lines() {
        let _ = writeln!(out, " *   {}", line);
    }

    // Resolve typeinfo addresses → demangled class names so the RTTI
    // pointer in each subtable can be printed symbolically.
    let ti_to_name: BTreeMap<u64, String> = rtti
        .classes
        .iter()
        .map(|(&addr, cls)| (addr, cls.demangled_name.clone()))
        .collect();

    for cls in rtti.classes.values() {
        let Some(layout) = cls.vtable_layout.as_ref() else {
            // Fall back to the legacy view when no structured layout
            // was reconstructed.
            if cls.vtable_methods.is_empty() {
                continue;
            }
            let _ = writeln!(out, " *");
            let _ = writeln!(out, " * {}::vtable:", cls.demangled_name);
            for (slot, va, name) in &cls.vtable_methods {
                let display = match name {
                    Some(n) => match crate::demangle::demangle(n) {
                        Some(d) => d.full_signature,
                        None => n.clone(),
                    },
                    None => format!("sub_{:x}", va),
                };
                let _ = writeln!(out, " *   [{}] {}", slot, display);
            }
            continue;
        };

        // Discover overridden methods: any vfunc whose demangled class
        // name doesn't match this class is an inherited slot we kept;
        // any vfunc whose demangled name does match (and the class has
        // bases) is an override.
        let _ = writeln!(out, " *");
        let _ = writeln!(
            out,
            " * {}::vtable @ {:#x} ({} bytes, {} subtable{}):",
            cls.demangled_name,
            layout.vtable_addr,
            layout.total_size,
            layout.subtables.len(),
            if layout.subtables.len() == 1 { "" } else { "s" },
        );

        for (sub_idx, sub) in layout.subtables.iter().enumerate() {
            let role = if sub_idx == 0 {
                "primary".to_string()
            } else {
                // For secondary subtables, identify which base they
                // cover by looking up the typeinfo (which still points
                // at the most-derived class) — we can't always tell,
                // but we *can* detect virtual-base secondary tables
                // because they're listed last in Itanium emission order.
                format!("secondary #{sub_idx}")
            };
            let _ = writeln!(
                out,
                " *   [{}] {} subtable @ {:#x}:",
                sub_idx, role, sub.address_point,
            );
            if !sub.virtual_base_offsets.is_empty() {
                for (i, off) in sub.virtual_base_offsets.iter().enumerate() {
                    let _ = writeln!(out, " *       vbase/vcall_offset[{i}] = {off}");
                }
            }
            let _ = writeln!(out, " *       offset_to_top = {}", sub.offset_to_top);
            let rtti_disp = ti_to_name
                .get(&sub.rtti_addr)
                .cloned()
                .unwrap_or_else(|| format!("{:#x}", sub.rtti_addr));
            let _ = writeln!(out, " *       typeinfo      = &typeinfo for {rtti_disp}");
            for (slot, kind) in sub.functions.iter().enumerate() {
                match kind {
                    unlace_loader::VtableSlotKind::Function { va, name, is_thunk } => {
                        let display = match name {
                            Some(n) => match crate::demangle::demangle(n) {
                                Some(d) => d.full_signature,
                                None => n.clone(),
                            },
                            None => format!("sub_{:x}", va),
                        };
                        // Heuristic override marker: when the demangled
                        // class part of the symbol matches this class
                        // *and* this class has at least one base, the
                        // slot overrides an inherited virtual.
                        let mut tag = String::new();
                        if *is_thunk {
                            tag.push_str(" [thunk]");
                        } else if !cls.bases.is_empty()
                            && let Some(n) = name
                            && let Some(d) = crate::demangle::demangle(n)
                            && d.class_name.as_deref() == Some(cls.demangled_name.as_str())
                        {
                            tag.push_str(" [override]");
                        }
                        let _ = writeln!(out, " *       vfunc[{slot}] = {display}{tag}");
                    }
                    unlace_loader::VtableSlotKind::Zero => {
                        let _ = writeln!(out, " *       vfunc[{slot}] = (null)");
                    }
                    unlace_loader::VtableSlotKind::Raw(v) => {
                        let _ = writeln!(out, " *       vfunc[{slot}] = raw {:#x}", v);
                    }
                    // The following slot kinds are reserved for future
                    // extensions; they don't appear in our current
                    // layout reconstruction but are handled defensively.
                    unlace_loader::VtableSlotKind::VCallOffset(off) => {
                        let _ = writeln!(out, " *       vcall_offset = {off}");
                    }
                    unlace_loader::VtableSlotKind::VBaseOffset(off) => {
                        let _ = writeln!(out, " *       vbase_offset = {off}");
                    }
                    unlace_loader::VtableSlotKind::OffsetToTop(off) => {
                        let _ = writeln!(out, " *       offset_to_top = {off}");
                    }
                    unlace_loader::VtableSlotKind::Rtti(p) => {
                        let _ = writeln!(out, " *       typeinfo = {:#x}", p);
                    }
                }
            }
        }
    }

    out.push(' ');
    out.push_str(RTTI_BLOCK_END);
    out.push('\n');
    out.push('\n');
}

pub(super) fn emit_msvc_rtti_hierarchy(
    rtti: &unlace_loader::msvc_rtti::MsvcRtti,
    out: &mut String,
) {
    if rtti.classes.is_empty() {
        return;
    }

    out.push_str("// MSVC RTTI class hierarchy (from PE .rdata)\n");
    for cls in rtti.classes.values() {
        let name = cls.demangled.as_deref().unwrap_or(&cls.mangled_name);
        let bases: Vec<String> = cls
            .bases
            .iter()
            .map(|base| unlace_loader::msvc_rtti::demangle_rtti_name(&base.mangled_name))
            .collect();
        if bases.is_empty() {
            let _ = writeln!(out, "// class {name}");
        } else {
            let _ = writeln!(out, "// class {name} : {}", bases.join(", "));
        }

        let flags = msvc_inheritance_flags(cls.inheritance);
        if flags.is_empty() {
            let _ = writeln!(
                out,
                "//   vftable @ {:#x}, methods={}",
                cls.vtable_addr, cls.method_count
            );
        } else {
            let _ = writeln!(
                out,
                "//   vftable @ {:#x}, methods={}, inheritance={}",
                cls.vtable_addr,
                cls.method_count,
                flags.join("|")
            );
        }

        for base in &cls.bases {
            let base_name = unlace_loader::msvc_rtti::demangle_rtti_name(&base.mangled_name);
            let _ = writeln!(
                out,
                "//   base {base_name}: mdisp={}, pdisp={}, vdisp={}, attrs={:#x}",
                base.mdisp, base.pdisp, base.vdisp, base.attributes
            );
        }
    }
    out.push('\n');
}

pub(super) fn msvc_inheritance_flags(flags: u32) -> Vec<&'static str> {
    let mut out = Vec::new();
    if flags & 0x1 != 0 {
        out.push("multiple");
    }
    if flags & 0x2 != 0 {
        out.push("virtual");
    }
    if flags & 0x4 != 0 {
        out.push("ambiguous");
    }
    out
}

/// After concatenating per-function outputs, keep the first RTTI block
/// and strip every subsequent copy. The block is delimited by
/// [`RTTI_BLOCK_BEGIN`] / [`RTTI_BLOCK_END`] sentinels so this pass is
/// linear and never trips on user comments. After deduplication the
/// sentinels are rewritten as plain `/*` / `*/` so the output is valid C.
pub fn dedupe_rtti_hierarchy(output: &str) -> String {
    let mut out = String::with_capacity(output.len());
    let mut seen = false;
    let mut rest = output;
    while let Some(begin) = rest.find(RTTI_BLOCK_BEGIN) {
        out.push_str(&rest[..begin]);
        let after_begin = &rest[begin..];
        let Some(end_offset) = after_begin.find(RTTI_BLOCK_END) else {
            // Malformed — bail and keep the rest verbatim.
            out.push_str(after_begin);
            return out;
        };
        let block_end = end_offset + RTTI_BLOCK_END.len();
        let block = &after_begin[..block_end];
        if !seen {
            // Rewrite the sentinels so the block is valid C: `/*` for
            // the BEGIN line, ` */` for the END line.
            let rewritten = block
                .replace(RTTI_BLOCK_BEGIN, "/*")
                .replace(RTTI_BLOCK_END, "*/");
            out.push_str(&rewritten);
            seen = true;
        }
        // Skip the block + the immediate trailing newline so we don't
        // leave a blank line where stripped duplicates used to live.
        let after_block = &after_begin[block_end..];
        let after_block = after_block.strip_prefix('\n').unwrap_or(after_block);
        rest = after_block;
    }
    out.push_str(rest);
    out
}

/// Emit a per-class layout block above the first ctor of a class.
///
/// Format:
/// ```text
/// /* class MyClass : public Base {
///  *   vfunc[0] = method1
///  *   vfunc[1] = method2 [override]
///  * }; */
/// ```
pub(super) fn emit_class_layout_for_func(
    func: &HirFunction,
    rtti: &unlace_loader::RttiInfo,
    out: &mut String,
) {
    let Some(class_name) = func.class_name.as_deref() else {
        return;
    };
    if !func.is_ctor {
        return;
    }
    let Some(cls) = rtti.class_by_name(class_name) else {
        return;
    };
    let Some(layout) = cls.vtable_layout.as_ref() else {
        return;
    };
    let primary = match layout.subtables.first() {
        Some(p) => p,
        None => return,
    };

    // class header — list base classes for context.
    let mut header = format!("class {class_name}");
    if !cls.bases.is_empty() {
        header.push_str(" : ");
        let mut parts = Vec::new();
        for b in &cls.bases {
            let vis = if b.is_public { "public" } else { "private" };
            let virt = if b.is_virtual { " virtual" } else { "" };
            // Resolve the base typeinfo → name when possible.
            let bname = rtti
                .classes
                .get(&b.typeinfo_addr)
                .map(|c| c.demangled_name.clone())
                .unwrap_or_else(|| format!("ti_{:x}", b.typeinfo_addr));
            parts.push(format!("{vis}{virt} {bname}"));
        }
        header.push_str(&parts.join(", "));
    }
    let _ = writeln!(out, "/* {header} {{");
    for (slot, kind) in primary.functions.iter().enumerate() {
        match kind {
            unlace_loader::VtableSlotKind::Function { va, name, is_thunk } => {
                let display = match name {
                    Some(n) => match crate::demangle::demangle(n) {
                        Some(d) => d.full_signature,
                        None => n.clone(),
                    },
                    None => format!("sub_{:x}", va),
                };
                let mut tag = String::new();
                if *is_thunk {
                    tag.push_str(" [thunk]");
                } else if !cls.bases.is_empty()
                    && let Some(n) = name
                    && let Some(d) = crate::demangle::demangle(n)
                    && d.class_name.as_deref() == Some(class_name)
                {
                    tag.push_str(" [override]");
                }
                let _ = writeln!(out, " *   vfunc[{slot}] = {display}{tag}");
            }
            unlace_loader::VtableSlotKind::Zero => {
                let _ = writeln!(out, " *   vfunc[{slot}] = (null)");
            }
            unlace_loader::VtableSlotKind::Raw(v) => {
                let _ = writeln!(out, " *   vfunc[{slot}] = raw {:#x}", v);
            }
            _ => {}
        }
    }
    let _ = writeln!(out, " * }}; */");
}

/// Resolve the displayed C type for the synthesized `this` parameter of
/// a C++ member function.
///
/// Lookup precedence:
///   1. RTTI — the binary itself names the class via `__class_type_info`.
///   2. STL recognition — `std::vector<int>::push_back` exposes the
///      container kind in the demangled name even when no RTTI exists
///      (libcxx STL types are template-instantiated in every TU and have
///      no central typeinfo entry).
///
/// Returns `None` for free functions, non-C++ symbols, or when neither
/// source recognises the class — callers fall back to the generic
/// `__int64 *this` rendering.
pub(super) fn rtti_this_param_type(
    demangled: &Option<crate::demangle::DemangleResult>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Option<String> {
    let dr = demangled.as_ref()?;
    let class_name = dr.class_name.as_ref()?;

    // Prefer RTTI when the binary itself names the class.
    if let Some(rtti) = rtti
        && rtti.class_by_name(class_name).is_some()
    {
        return Some(class_name.clone());
    }

    // Fall back to STL container recognition driven by the demangled
    // name — there is no RTTI for `std::vector<int>` etc.
    if let Some(stl) = crate::cpp_stl::recognize_stl(dr) {
        return Some(stl.display());
    }

    None
}

/// Recognise STL container types (`std::vector<T>`, `std::string`, etc.)
/// from the demangled symbol's namespace path, and return the C-style
/// spelling to use for the `this` parameter.  Conservative: only fires
/// when [`crate::demangle::demangle`] already classified the symbol as a
/// member function of one of the supported classes — see
/// [`unlace_passes::recognize_stl_type`].
pub(super) fn stl_this_param_type(
    demangled: &Option<crate::demangle::DemangleResult>,
) -> Option<String> {
    let dr = demangled.as_ref()?;
    let class_name = dr.class_name.as_ref()?;
    unlace_passes::recognize_stl_type(&dr.namespaces, class_name)
}
