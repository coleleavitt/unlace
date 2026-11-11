//! c_printer: types.

use super::*;

// ---------------------------------------------------------------------------
// Type printing
// ---------------------------------------------------------------------------

/// Render an [`unlace_ir::types::Type`] as a C type fragment.
///
/// Used by [`HirFunction::byref_boxes`] rendering to surface the
/// captured payload type in `__block T name;` declarations. Composite
/// shapes (struct / array / function-pointer / bitfield) fall back to
/// their `Display` implementation; primitive shapes route through
/// [`c_type`] so the printer's existing primitive-name conventions
/// are preserved.
pub(super) fn render_type_as_c(ty: &unlace_ir::types::Type) -> String {
    use unlace_ir::types::Type;
    match ty {
        Type::Primitive(p) => c_type(p).to_string(),
        Type::Ptr(inner) => format!("{} *", render_type_as_c(inner)),
        other => other.to_string(),
    }
}

pub(super) fn render_type_decl_as_c(ty: &Type, name: &str) -> String {
    match ty {
        Type::Primitive(p) => format!("{} {name}", c_type(p)),
        Type::Named(type_name) => format!("{type_name} {name}"),
        Type::Struct {
            name: ty_name,
            fields,
        } if ty_name.is_empty() => {
            format!(
                "struct {{ {} }} {name}",
                render_inline_aggregate_fields(fields)
            )
        }
        Type::Struct { name: ty_name, .. } => format!("struct {ty_name} {name}"),
        Type::Union {
            name: ty_name,
            fields,
        } if ty_name.is_empty() => {
            format!(
                "union {{ {} }} {name}",
                render_inline_aggregate_fields(fields)
            )
        }
        Type::Union { name: ty_name, .. } => format!("union {ty_name} {name}"),
        Type::Ptr(inner) => match inner.as_ref() {
            Type::Array { .. } | Type::FuncPtr { .. } => {
                render_type_decl_as_c(inner, &format!("(*{name})"))
            }
            _ => render_type_decl_as_c(inner, &format!("*{name}")),
        },
        Type::Array { element, size } => {
            let suffix = size.map_or_else(String::new, |n| n.to_string());
            render_type_decl_as_c(element, &format!("{name}[{suffix}]"))
        }
        Type::FuncPtr {
            params,
            return_type,
            variadic,
        } => {
            let params = render_function_pointer_params(params, *variadic);
            render_type_decl_as_c(return_type, &format!("(*{name})({params})"))
        }
        Type::Bitfield {
            underlying, width, ..
        } => format!("{} : {width}", render_type_decl_as_c(underlying, name)),
        Type::Interface { .. } => format!("void * {name}"),
        Type::Slice { elem } => format!("/* []{} */ void * {name}", render_type_as_c(elem)),
        Type::Map { key, value } => format!(
            "/* map[{}]{} */ void * {name}",
            render_type_as_c(key),
            render_type_as_c(value)
        ),
        Type::TypeParam { name: ty_name, .. } => format!("void * {name} /* {ty_name} */"),
    }
}

pub(super) fn render_inline_aggregate_fields(
    fields: &[unlace_ir::types::StructFieldType],
) -> String {
    fields
        .iter()
        .map(|field| {
            let field_name = if field.name.is_empty() {
                format!("field_{}", field.offset)
            } else {
                crate::demangle::sanitize_for_c(&field.name)
            };
            format!("{};", render_type_decl_as_c(&field.ty, &field_name))
        })
        .collect::<Vec<_>>()
        .join(" ")
}

pub(super) fn render_function_pointer_param(ty: &Type) -> String {
    render_type_decl_as_c(ty, "").trim_end().to_string()
}

pub(super) fn render_function_pointer_params(params: &[Type], variadic: bool) -> String {
    let mut rendered: Vec<String> = params.iter().map(render_function_pointer_param).collect();
    if variadic {
        rendered.push("...".to_string());
    }
    if rendered.is_empty() {
        "void".to_string()
    } else {
        rendered.join(", ")
    }
}

pub(super) fn c_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(w) => match w {
            1 => "char",
            2 => "__int16",
            4 => "int",
            8 => "__int64",
            16 => "__int128",
            _ => "int",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "_BYTE",
            2 => "_WORD",
            4 => "_DWORD",
            8 => "_QWORD",
            16 => "_OWORD",
            _ => "_DWORD",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
        PrimitiveType::Vector(v) => v.c_name(),
    }
}

pub(super) fn c_type_for_var(ctx: &PrintCtx, var: &Varnode, fallback: &PrimitiveType) -> String {
    ctx.dwarf_local_types
        .get(var)
        .cloned()
        .unwrap_or_else(|| c_type(fallback).to_string())
}

pub(super) fn prefer_decl_type(existing: PrimitiveType, candidate: PrimitiveType) -> PrimitiveType {
    use PrimitiveType::*;
    match (existing, candidate) {
        (Vector(a), Vector(b)) => {
            Vector(a.join(b).unwrap_or(if b.size() > a.size() { b } else { a }))
        }
        // A SIMD register carrier is the widest declaration; its scalar
        // versions (low-lane moves) fit inside it.
        (Vector(v), _) | (_, Vector(v)) => Vector(v),
        (Ptr, _) | (_, Ptr) => Ptr,
        (Double, _) | (_, Double) => Double,
        (Float, _) | (_, Float) => Float,
        (UnsignedInt(a), UnsignedInt(b)) => UnsignedInt(a.max(b)),
        (Int(a), Int(b)) => Int(a.max(b)),
        (UnsignedInt(a), Int(b)) | (Int(b), UnsignedInt(a)) => {
            if a >= b {
                UnsignedInt(a)
            } else {
                Int(b)
            }
        }
        (Unknown, other) => other,
        (other, Unknown) => other,
        (Bool, other) => other,
        (other, Bool) => other,
    }
}

#[allow(dead_code)]
pub(super) fn c_return_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "void",
        other => c_type(other),
    }
}

/// `true` when `name` matches one of the printer's generic allocator
/// patterns (`vN` or coalesced-register `cN`) and therefore carries no
/// semantic content. Used by the name-lookup chain (t227) to decide
/// whether a [`PrintCtx::merged_names`] entry should be preferred over
/// a role-based suggestion: a "meaningful" merger entry (DWARF-derived
/// or otherwise non-generic) always wins, but a generic `v3`/`c0`
/// should yield to a role-based `i` / `this` / `buf` / `len`.
pub(super) fn is_default_v_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('v') else {
        return false;
    };
    is_v_number_suffix(rest)
}

pub(super) fn is_generic_lvar_name(name: &str) -> bool {
    is_default_v_name(name)
        || name.strip_prefix('c').is_some_and(is_v_number_suffix)
        || is_arg_number_name(name)
        || is_arg_versioned_name(name)
}

/// IDA-style signature type rendering for a [`unlace_ir::types::Type`].
///
/// Wraps the primitive-only [`c_sig_type`] helper: primitives go through
/// the legacy `__intN`/`unsigned …` cascade so `int8`/`int16` parameters
/// render exactly the way the caller-side prototype consumer expects;
/// composite types (`Ptr` / `Struct` / `Array` / …) fall back to the
/// general [`render_type_as_c`] so a `T *` param survives intact when
/// the finalized signature widens a pointer-typed param into a typed
/// pointer.
pub(super) fn c_sig_type_for_type(ty: &Type) -> String {
    match ty {
        Type::Primitive(p) => c_sig_type(p).to_string(),
        other => render_type_as_c(other),
    }
}

/// IDA-style return-type rendering for a [`unlace_ir::types::Type`].
///
/// Primitives are routed through [`c_sig_return_type`] so
/// `PrimitiveType::Unknown` still renders as `void` (matching the
/// printer's legacy treatment of "no inferred return"); concrete
/// types go through the general [`render_type_as_c`] path so
/// `int *` / struct returns survive unmolested.
pub(super) fn c_sig_return_type_for_type(ty: &Type) -> String {
    match ty {
        Type::Primitive(p) => c_sig_return_type(p).to_string(),
        other => render_type_as_c(other),
    }
}

/// IDA-style type names for function signature parameters.
pub(super) fn c_sig_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "__int64",
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(w) => match w {
            1 => "char",
            2 => "__int16",
            4 => "int",
            8 => "__int64",
            _ => "__int64",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "_BYTE",
            2 => "_WORD",
            4 => "_DWORD",
            8 => "_QWORD",
            _ => "_QWORD",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
        PrimitiveType::Vector(v) => v.c_name(),
    }
}

pub(super) fn c_sig_return_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "void",
        other => c_sig_type(other),
    }
}

pub(super) fn dwarf_type_to_c(dwarf_type: &str) -> String {
    let (base_type, _) = split_dwarf_array_suffix(dwarf_type);
    let mut normalized = dwarf_type
        .get(..base_type)
        .unwrap_or(dwarf_type)
        .trim()
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("struct ", "")
        .replace("typedef ", "");
    let ptr_depth = normalized.matches('*').count();
    normalized = normalized.replace('*', " ");
    let normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    let base = match normalized.as_str() {
        "" => "__int64",
        "void" => "void",
        "_Bool" | "bool" => "_BOOL",
        "char" | "signed char" => "char",
        "unsigned char" => "_BYTE",
        "short" | "short int" | "signed short" | "signed short int" => "__int16",
        "unsigned short" | "unsigned short int" => "_WORD",
        "int" | "signed int" => "int",
        "unsigned int" | "unsigned" => "_DWORD",
        "long" | "long int" | "signed long" | "signed long int" => "__int64",
        "unsigned long" | "unsigned long int" | "long unsigned int" => "_QWORD",
        "long long" | "long long int" | "signed long long" | "signed long long int" => "__int64",
        "unsigned long long" | "unsigned long long int" | "long long unsigned int" => "_QWORD",
        other => other,
    };
    if ptr_depth == 0 {
        base.to_string()
    } else {
        format!("{} {}", base, "*".repeat(ptr_depth))
    }
}

pub(super) fn dwarf_decl_to_c(dwarf_type: &str, name: &str) -> String {
    let (base_end, suffix) = split_dwarf_array_suffix(dwarf_type);
    let base = dwarf_type.get(..base_end).unwrap_or(dwarf_type).trim();
    let ty = dwarf_type_to_c(base);
    // IDA style binds the declarator star to the name: `Rect *r`.
    let sep = if ty.ends_with('*') { "" } else { " " };
    format!("{ty}{sep}{name}{suffix}")
}

pub(super) fn cpp_demangled_param_decl(
    param_types: Option<&[String]>,
    idx: usize,
    name: &str,
) -> Option<String> {
    let ty = param_types?.get(idx)?.trim();
    if ty.is_empty() || ty == "void" {
        return None;
    }
    let normalized = normalize_cpp_demangled_type(ty);
    Some(dwarf_decl_to_c(&normalized, name))
}

pub(super) fn normalize_cpp_demangled_type(ty: &str) -> String {
    let mut normalized = ty
        .trim()
        .replace(" const", "")
        .replace(" volatile", "")
        .replace(" restrict", "")
        .replace('&', "*");
    normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    normalized
}

/// Parse a DWARF aggregate array local (`name`, `type_name` like `int32_t[16]`)
/// into a [`DwarfArrayLocal`]. Returns `None` for non-array or multi-dimensional
/// types (only single-dimension element arrays with a known element size are
/// materialized; everything else keeps its existing rendering).
pub(super) fn parse_dwarf_array_local(name: &str, type_name: &str) -> Option<DwarfArrayLocal> {
    let (base_end, suffix) = split_dwarf_array_suffix(type_name);
    if suffix.is_empty() {
        return None;
    }
    // Exactly one `[N]` dimension with a numeric extent.
    let inner = suffix.strip_prefix('[')?.strip_suffix(']')?;
    if inner.contains('[') || inner.contains(']') {
        return None;
    }
    let elem_count: u64 = inner.trim().parse().ok()?;
    if elem_count == 0 {
        return None;
    }
    let base = type_name.get(..base_end).unwrap_or(type_name).trim();
    if base.contains('*') {
        // Pointer-element arrays render fine as raw derefs; skip.
        return None;
    }
    let elem_c_type = dwarf_type_to_c(base);
    let elem_size = c_primitive_type_size(&elem_c_type)?;
    Some(DwarfArrayLocal {
        name: name.to_string(),
        elem_c_type,
        elem_size,
        elem_count,
    })
}

/// Byte size of a scalar C primitive type spelling, for sizing recovered arrays.
/// Returns `None` for non-scalar / unknown spellings (pointers, composites).
/// Accepts both IDA spellings (`__int16`, `_DWORD`) and stdint typedefs
/// (`int32_t`) — DWARF surfaces the latter.
pub(super) fn c_primitive_type_size(c_type: &str) -> Option<u64> {
    match c_type.trim() {
        "char" | "_BYTE" | "_BOOL" | "signed char" | "unsigned char" | "bool" | "int8_t"
        | "uint8_t" => Some(1),
        "__int16" | "_WORD" | "short" | "unsigned short" | "int16_t" | "uint16_t" => Some(2),
        "int" | "unsigned int" | "_DWORD" | "float" | "int32_t" | "uint32_t" => Some(4),
        "__int64" | "_QWORD" | "long" | "unsigned long" | "long long" | "unsigned long long"
        | "double" | "size_t" | "int64_t" | "uint64_t" => Some(8),
        _ => None,
    }
}

pub(super) fn split_dwarf_array_suffix(dwarf_type: &str) -> (usize, String) {
    let trimmed_end = dwarf_type.trim_end().len();
    let mut end = trimmed_end;
    let mut suffixes = Vec::new();

    loop {
        let head = &dwarf_type[..end];
        let Some(close_rel) = head.rfind(']') else {
            break;
        };
        if close_rel + 1 != end {
            break;
        }
        let Some(open_rel) = head[..close_rel].rfind('[') else {
            break;
        };
        suffixes.push(dwarf_type[open_rel..=close_rel].to_string());
        end = dwarf_type[..open_rel].trim_end().len();
    }

    suffixes.reverse();
    (end, suffixes.join(""))
}
