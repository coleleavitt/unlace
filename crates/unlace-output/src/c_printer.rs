//! C pretty-printer — emit valid C syntax from HIR.
//!
//! Translates a [`HirFunction`] into a C source string that passes
//! `gcc -fsyntax-only`. Output is deterministic: identical input produces
//! byte-identical output.

use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write;

use unlace_ir::ssa::{PanicKind, PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
use unlace_loader::DwarfInfo;
use unlace_struct::{HirFunction, HirNode, SwitchCase};

// ---------------------------------------------------------------------------
// Public API
// ---------------------------------------------------------------------------

/// Metadata for the block comment emitted above each decompiled function.
///
/// Built from [`SsaFunction`] via [`FunctionHeaderInfo::from_ssa`], or
/// constructed manually for testing.
#[derive(Clone, Debug, Default)]
pub struct FunctionHeaderInfo {
    /// Function name (e.g. `sub_401000`).
    pub name: String,
    /// Machine address of the function entry point.
    pub address: u64,
    /// Approximate code size in bytes (last instruction addr − first + est. insn size).
    pub size: u64,
    /// Detected calling convention.
    pub convention: String,
    /// Stack frame size in bytes (sum of stack variable sizes or frame extent).
    pub stack_frame: u64,
    /// Sorted list of callee names/addresses referenced by CALL instructions.
    pub callees: Vec<String>,
}

impl FunctionHeaderInfo {
    /// Build header metadata from an [`SsaFunction`].
    pub fn from_ssa(ssa: &SsaFunction, symbols: &BTreeMap<u64, String>) -> Self {
        let name = ssa.function.name.clone();
        let address = ssa.function.addr;
        let convention = ssa.calling_convention.to_string();

        // Approximate size: span from lowest to highest instruction address.
        let (mut min_addr, mut max_addr) = (u64::MAX, 0u64);
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                if insn.addr != 0 {
                    min_addr = min_addr.min(insn.addr);
                    max_addr = max_addr.max(insn.addr);
                }
            }
        }
        // Add estimated last-instruction size (conservative 4 bytes).
        let size = if min_addr <= max_addr {
            (max_addr - min_addr).saturating_add(4)
        } else {
            0
        };

        // Stack frame: compute span from lowest to highest stack var offset + size.
        let stack_frame = if ssa.stack_vars.is_empty() {
            0
        } else {
            let mut lo = i64::MAX;
            let mut hi = i64::MIN;
            for sv in ssa.stack_vars.values() {
                let access_size = match sv.ty {
                    PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => w as i64,
                    PrimitiveType::Bool => 1,
                    PrimitiveType::Float => 4,
                    PrimitiveType::Double => 8,
                    PrimitiveType::Ptr => 8,
                    PrimitiveType::Unknown => 8,
                };
                lo = lo.min(sv.offset);
                hi = hi.max(sv.offset + access_size);
            }
            (hi - lo).unsigned_abs()
        };

        // Collect unique callee targets from CALL instructions (deterministic order).
        let mut callees_set = BTreeSet::new();
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                    let target = &insn.inputs[0];
                    if target.space == SpaceId::Const {
                        let callee_name = symbols
                            .get(&target.offset)
                            .cloned()
                            .unwrap_or_else(|| format!("sub_{:x}", target.offset));
                        callees_set.insert(callee_name);
                    }
                }
            }
        }
        let callees: Vec<String> = callees_set.into_iter().collect();

        Self { name, address, size, convention, stack_frame, callees }
    }
}

/// Render a [`HirFunction`] as valid C source.
///
/// Variables are named `v1, v2, ...` (monotonic, deterministic).
/// Indentation is 4 spaces per nesting level.
///
/// If the function name is a mangled C++/Rust/Swift/MSVC symbol, the
/// emitted name is the demangled short form (sanitized for C) and a
/// comment with the full demangled signature is prepended.
pub fn print_c(func: &HirFunction) -> String {
    print_c_with_dwarf(func, None)
}

pub fn print_c_with_dwarf(func: &HirFunction, dwarf: Option<&DwarfInfo>) -> String {
    print_c_full(func, dwarf, None, None, None)
}

/// Render a [`HirFunction`] with optional DWARF info and function header metadata.
///
/// When `header` is `Some`, a block comment with function metadata is emitted
/// before the function signature (after the typedefs).
///
/// When `symbols` is `Some`, CALL targets are resolved against the symbol table
/// before falling back to `sub_XXXX` names.
pub fn print_c_full(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
) -> String {
    let sym_owned = symbols.cloned().unwrap_or_default();
    let str_owned = string_table.cloned().unwrap_or_default();
    let mut ctx = PrintCtx::new(dwarf, func.panic_sites.clone(), sym_owned, str_owned);

    collect_varnodes(&func.body, &mut ctx);
    compute_foldable(&mut ctx);

    let mut out = String::with_capacity(1024);

    out.push_str(IDA_TYPEDEFS);
    out.push('\n');

    if let Some(hdr) = header {
        emit_function_header(hdr, &mut out);
    }

    let dwarf_func = dwarf.and_then(|d| d.functions.get(&func.addr));

    let demangled = crate::demangle::demangle(&func.name);
    let emit_name = match (&dwarf_func, &demangled) {
        (Some(df), _) => df.name.clone(),
        (None, Some(dr)) => {
            let _ = writeln!(out, "// {}", dr.full_signature);
            crate::demangle::sanitize_for_c(&dr.short_name)
        }
        (None, None) => func.name.clone(),
    };

    let return_type_str = dwarf_func
        .and_then(|df| df.return_type.as_deref())
        .map(|s| dwarf_type_to_c(s))
        .unwrap_or_else(|| c_type(&func.return_type).to_string());

    let conv_annotation = header.and_then(|h| calling_convention_annotation(&h.convention));
    if let Some(conv) = conv_annotation {
        let _ = write!(out, "{} {} {}(", return_type_str, conv, emit_name);
    } else {
        let _ = write!(out, "{} {}(", return_type_str, emit_name);
    }

    if let Some(df) = dwarf_func.filter(|df| !df.params.is_empty()) {
        for (i, param) in df.params.iter().enumerate() {
            if i > 0 {
                out.push_str(", ");
            }
            let ty = param
                .type_name
                .as_deref()
                .map(|s| dwarf_type_to_c(s))
                .unwrap_or_else(|| "int".to_string());
            let name = param
                .name
                .as_deref()
                .unwrap_or("arg");
            let _ = write!(out, "{} {}", ty, name);
        }
    } else {
        for (i, (pname, pty)) in func.params.iter().enumerate() {
            if i > 0 {
                out.push_str(", ");
            }
            let _ = write!(out, "{} {}", c_type(pty), pname);
        }
        if func.params.is_empty()
            && dwarf_func.map_or(true, |df| df.params.is_empty())
        {
            out.push_str("void");
        }
    }
    let _ = writeln!(out, ") {{");

    let foldable_svs: BTreeSet<SsaVarnode> = ctx.sv_defining_stmt.keys().copied().collect();
    let mut has_decl = false;
    let mut declared_names: BTreeSet<&str> = BTreeSet::new();
    for (sv, name) in &ctx.var_names {
        if foldable_svs.contains(sv) {
            continue;
        }
        if !declared_names.insert(name.as_str()) {
            continue;
        }
        let ty = ctx.var_types.get(sv).copied().unwrap_or(PrimitiveType::Unknown);
        let _ = writeln!(out, "    {} {};", c_type(&ty), name);
        has_decl = true;
    }
    if has_decl {
        out.push('\n');
    }

    emit_nodes(&func.body, 1, &mut ctx, &mut out);

    out.push_str("}\n");
    out
}

// ---------------------------------------------------------------------------
// Function header comment
// ---------------------------------------------------------------------------

fn emit_function_header(hdr: &FunctionHeaderInfo, out: &mut String) {
    let _ = writeln!(out, "/*");
    let _ = writeln!(out, " * Function:   {}", hdr.name);
    let _ = writeln!(out, " * Address:    0x{:x}", hdr.address);
    let _ = writeln!(
        out,
        " * Size:       0x{:x} ({} bytes)",
        hdr.size, hdr.size,
    );
    let _ = writeln!(out, " * Convention: {}", hdr.convention);
    let _ = writeln!(
        out,
        " * Stack frame: 0x{:x} ({} bytes)",
        hdr.stack_frame, hdr.stack_frame,
    );
    if !hdr.callees.is_empty() {
        let _ = writeln!(out, " * Xrefs to:   {}", hdr.callees.join(", "));
    }
    let _ = writeln!(out, " * Xrefs from: unknown");
    let _ = writeln!(out, " */");
}

// ---------------------------------------------------------------------------
// Context
// ---------------------------------------------------------------------------

struct PrintCtx {
    next_var: u32,
    var_names: BTreeMap<SsaVarnode, String>,
    var_types: BTreeMap<SsaVarnode, PrimitiveType>,
    base_names: BTreeMap<Varnode, String>,
    ssa_next_version: BTreeMap<Varnode, u32>,
    /// The most recently assigned version per base varnode.
    ssa_current: BTreeMap<Varnode, u32>,
    /// Pre-computed output SsaVarnode per statement (keyed by walk-order index).
    stmt_outputs: BTreeMap<u32, Option<SsaVarnode>>,
    /// Pre-computed input SsaVarnodes per statement (keyed by walk-order index).
    /// One entry per non-const input, in order.
    stmt_inputs: BTreeMap<u32, Vec<SsaVarnode>>,
    /// Next statement index (incremented during collection).
    next_stmt: u32,
    /// Current statement index during emission.
    emit_stmt: u32,
    /// The IrInsn for each statement, stored during collection for inline folding.
    stmt_insns: BTreeMap<u32, IrInsn>,
    /// Statements whose output is single-use and non-side-effecting → fold inline.
    foldable_stmts: BTreeSet<u32>,
    /// Maps a foldable SsaVarnode to the statement index that defines it.
    sv_defining_stmt: BTreeMap<SsaVarnode, u32>,
    cond_uses: Vec<SsaVarnode>,
    collect_depth: u32,
    stmt_depths: BTreeMap<u32, u32>,
    field_by_offset: BTreeMap<u64, Vec<(String, String, u64)>>,
    panic_sites: BTreeMap<u64, PanicKind>,
    /// Merged symbol table: address → symbol name (PLT + function symbols).
    symbols: BTreeMap<u64, String>,
    /// Recovered string literals: virtual address → string content.
    string_table: BTreeMap<u64, String>,
}

impl PrintCtx {
    fn new(
        dwarf: Option<&DwarfInfo>,
        panic_sites: BTreeMap<u64, PanicKind>,
        symbols: BTreeMap<u64, String>,
        string_table: BTreeMap<u64, String>,
    ) -> Self {
        let field_by_offset = build_field_offset_map(dwarf);
        Self {
            next_var: 1,
            var_names: BTreeMap::new(),
            var_types: BTreeMap::new(),
            base_names: BTreeMap::new(),
            ssa_next_version: BTreeMap::new(),
            ssa_current: BTreeMap::new(),
            stmt_outputs: BTreeMap::new(),
            stmt_inputs: BTreeMap::new(),
            next_stmt: 0,
            emit_stmt: 0,
            stmt_insns: BTreeMap::new(),
            foldable_stmts: BTreeSet::new(),
            sv_defining_stmt: BTreeMap::new(),
            cond_uses: Vec::new(),
            collect_depth: 0,
            stmt_depths: BTreeMap::new(),
            field_by_offset,
            panic_sites,
            symbols,
            string_table,
        }
    }

    fn name_of(&mut self, sv: &SsaVarnode) -> String {
        if let Some(n) = self.var_names.get(sv) {
            return n.clone();
        }
        let name = if let Some(existing) = self.base_names.get(&sv.base) {
            existing.clone()
        } else {
            let fresh = format!("v{}", self.next_var);
            self.next_var += 1;
            self.base_names.insert(sv.base, fresh.clone());
            fresh
        };
        self.var_names.insert(*sv, name.clone());
        name
    }

    /// Return the current SSA version for a base varnode (0 if never defined).
    fn current_version(&self, base: &Varnode) -> u32 {
        self.ssa_current.get(base).copied().unwrap_or(0)
    }

    fn next_version(&mut self, base: &Varnode) -> u32 {
        let ver = self.ssa_next_version.entry(*base).or_insert(0);
        let v = *ver;
        *ver += 1;
        self.ssa_current.insert(*base, v);
        v
    }
}

fn build_field_offset_map(dwarf: Option<&DwarfInfo>) -> BTreeMap<u64, Vec<(String, String, u64)>> {
    let mut map: BTreeMap<u64, Vec<(String, String, u64)>> = BTreeMap::new();
    let dwarf = match dwarf { Some(d) => d, None => return map };
    for st in dwarf.structs.values() {
        for field in &st.fields {
            map.entry(field.offset).or_default().push((st.name.clone(), field.name.clone(), field.size));
        }
    }
    map
}

fn try_resolve_struct_field(addr_insn: &IrInsn, addr_stmt_idx: u32, _load_size: u8, ctx: &mut PrintCtx) -> Option<String> {
    if ctx.field_by_offset.is_empty() { return None; }
    if addr_insn.op != IrOp::IntAdd || addr_insn.inputs.len() < 2 { return None; }
    let (base_input, const_offset) = if addr_insn.inputs[1].space == SpaceId::Const {
        (&addr_insn.inputs[0], addr_insn.inputs[1].offset)
    } else if addr_insn.inputs[0].space == SpaceId::Const {
        (&addr_insn.inputs[1], addr_insn.inputs[0].offset)
    } else { return None; };
    if base_input.space == SpaceId::Const { return None; }
    let entries = ctx.field_by_offset.get(&const_offset)?;
    let field_name = entries.first()?.1.clone();
    let base_sv = ctx.stmt_inputs.get(&addr_stmt_idx).cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *base_input).copied());
    let base_expr = match base_sv {
        Some(sv) => {
            if let Some(&ds) = ctx.sv_defining_stmt.get(&sv) {
                if let Some(di) = ctx.stmt_insns.get(&ds).cloned() {
                    format!("({})", emit_expr(&di, ds, ctx))
                } else { ctx.name_of(&sv) }
            } else { ctx.name_of(&sv) }
        }
        None => { let sv = SsaVarnode { base: *base_input, version: 0 }; ctx.name_of(&sv) }
    };
    Some(format!("{}->{}",  base_expr, field_name))
}

fn try_resolve_field_from_addr(addr_vn: &Varnode, _idx: usize, stmt_idx: u32, access_size: u8, ctx: &mut PrintCtx) -> Option<String> {
    eprintln!("FIELD_RESOLVE: space={:?} off={} sz={} map_len={}", addr_vn.space, addr_vn.offset, access_size, ctx.field_by_offset.len());
    if ctx.field_by_offset.is_empty() || addr_vn.space == SpaceId::Const { return None; }
    eprintln!("  stmt_inputs for {}: {:?}", stmt_idx, ctx.stmt_inputs.get(&stmt_idx));
    let addr_sv = ctx.stmt_inputs.get(&stmt_idx).cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;
    eprintln!("  sv_defining_stmt for {:?}: {:?}", addr_sv, ctx.sv_defining_stmt.get(&addr_sv));
    let &def_stmt = ctx.sv_defining_stmt.get(&addr_sv)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    try_resolve_struct_field(&def_insn, def_stmt, access_size, ctx)
}

// ---------------------------------------------------------------------------
// Array subscript recovery
// ---------------------------------------------------------------------------

/// Result of array subscript pattern matching on an address expression.
struct ArraySubscript {
    /// The base expression (already rendered as a C string).
    base: String,
    /// The index expression (already rendered as a C string).
    index: String,
}

/// Try to recognise an array subscript pattern in the address computation of a
/// LOAD or STORE instruction.
///
/// Patterns recognised (all single-level only):
///
/// 1. `INT_ADD(base, INT_MULT(index, Const(stride)))` where `stride == access_size`
/// 2. `PTRADD(base, index, Const(stride))` where `stride == access_size`
/// 3. `INT_ADD(base, Const(offset))` where `offset % access_size == 0` (constant index)
///
/// Returns `None` if no pattern matches or if the stride doesn't match the
/// access size (keeping the existing pointer dereference form).
fn try_array_subscript(
    addr_vn: &Varnode,
    stmt_idx: u32,
    access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<ArraySubscript> {
    if access_size == 0 || addr_vn.space == SpaceId::Const {
        return None;
    }

    // Resolve the SSA varnode for the address operand.
    let addr_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;

    // The address must be defined by a foldable statement.
    let &def_stmt = ctx.sv_defining_stmt.get(&addr_sv)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();

    let stride = access_size as u64;

    match def_insn.op {
        // Pattern 1: INT_ADD(base, INT_MULT(index, Const(stride)))
        IrOp::IntAdd if def_insn.inputs.len() == 2 => {
            // One operand must be an INT_MULT producing index*stride.
            // Check which operand is the multiply (it could be either).
            for (mult_pos, base_pos) in [(0, 1), (1, 0)] {
                let mult_vn = &def_insn.inputs[mult_pos];
                let base_vn = &def_insn.inputs[base_pos];

                // The multiply operand must not be a constant and must have
                // a foldable defining statement.
                if mult_vn.space == SpaceId::Const {
                    continue;
                }

                let mult_sv = ctx
                    .stmt_inputs
                    .get(&def_stmt)
                    .cloned()
                    .and_then(|inputs| inputs.iter().find(|sv| sv.base == *mult_vn).copied());
                let mult_sv = match mult_sv {
                    Some(sv) => sv,
                    None => continue,
                };
                let mult_def = match ctx.sv_defining_stmt.get(&mult_sv) {
                    Some(&s) => s,
                    None => continue,
                };
                let mult_insn = match ctx.stmt_insns.get(&mult_def) {
                    Some(i) => i.clone(),
                    None => continue,
                };

                if mult_insn.op != IrOp::IntMult || mult_insn.inputs.len() != 2 {
                    continue;
                }

                // One operand of the multiply must be Const(stride).
                let (idx_vn, const_vn) = if mult_insn.inputs[1].space == SpaceId::Const {
                    (&mult_insn.inputs[0], &mult_insn.inputs[1])
                } else if mult_insn.inputs[0].space == SpaceId::Const {
                    (&mult_insn.inputs[1], &mult_insn.inputs[0])
                } else {
                    continue;
                };

                if const_vn.offset != stride {
                    continue;
                }

                let idx_expr = emit_operand_resolved(idx_vn, 0, mult_def, ctx);
                let base_expr = emit_operand_resolved(base_vn, base_pos, def_stmt, ctx);

                return Some(ArraySubscript { base: base_expr, index: idx_expr });
            }

            // Pattern 3: INT_ADD(base, Const(offset)) → base[offset / stride]
            let (base_vn, const_vn) = if def_insn.inputs[1].space == SpaceId::Const {
                (&def_insn.inputs[0], &def_insn.inputs[1])
            } else if def_insn.inputs[0].space == SpaceId::Const {
                (&def_insn.inputs[1], &def_insn.inputs[0])
            } else {
                return None;
            };
            if base_vn.space == SpaceId::Const {
                return None;
            }
            let offset = const_vn.offset;
            if offset == 0 || offset % stride != 0 {
                return None;
            }
            let computed_idx = offset / stride;
            let base_expr = emit_operand_resolved(base_vn, 0, def_stmt, ctx);
            Some(ArraySubscript { base: base_expr, index: format!("{}", computed_idx) })
        }

        // Pattern 2: PTRADD(base, index, Const(stride))
        IrOp::Ptradd if def_insn.inputs.len() >= 3 => {
            let stride_vn = &def_insn.inputs[2];
            if stride_vn.space != SpaceId::Const || stride_vn.offset != stride {
                return None;
            }
            let base_expr = emit_operand_resolved(&def_insn.inputs[0], 0, def_stmt, ctx);
            let idx_expr = emit_operand_resolved(&def_insn.inputs[1], 1, def_stmt, ctx);
            Some(ArraySubscript { base: base_expr, index: idx_expr })
        }

        _ => None,
    }
}

/// Minimum address to consider as a global (below this is likely stack-relative).
const GLOBAL_ADDR_THRESHOLD: u64 = 0x10000;

fn try_global_var_name(addr_vn: &Varnode, access_size: u8, ctx: &PrintCtx) -> Option<String> {
    if addr_vn.space != SpaceId::Const {
        return None;
    }
    let addr = addr_vn.offset;
    if addr < GLOBAL_ADDR_THRESHOLD {
        return None;
    }
    if let Some(sym) = ctx.symbols.get(&addr) {
        return Some(sym.clone());
    }
    let prefix = match access_size {
        1 => "byte",
        2 => "word",
        4 => "dword",
        8 => "qword",
        _ => "unk",
    };
    Some(format!("{}_{:X}", prefix, addr))
}

// ---------------------------------------------------------------------------
// Varnode collection — pre-walk to assign names deterministically
// ---------------------------------------------------------------------------

fn collect_insn_as_stmt(insn: &IrInsn, ctx: &mut PrintCtx) -> u32 {
    let idx = ctx.next_stmt;
    ctx.next_stmt += 1;
    ctx.stmt_depths.insert(idx, ctx.collect_depth);

    let mut input_svs = Vec::new();
    for input in &insn.inputs {
        if input.space == SpaceId::Const {
            continue;
        }
        let ver = ctx.current_version(input);
        let sv = SsaVarnode { base: *input, version: ver };
        ctx.name_of(&sv);
        input_svs.push(sv);
    }
    ctx.stmt_inputs.insert(idx, input_svs);

    let output_sv = if let Some(output) = insn.output {
        let ver = ctx.next_version(&output);
        let sv = SsaVarnode { base: output, version: ver };
        ctx.name_of(&sv);
        infer_type_from_insn(insn, &sv, ctx);
        Some(sv)
    } else {
        None
    };
    ctx.stmt_outputs.insert(idx, output_sv);
    ctx.stmt_insns.insert(idx, insn.clone());
    idx
}

fn collect_varnodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_varnodes(children, ctx),

            HirNode::Statement(insn) => {
                let idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(idx, ctx.collect_depth);

                let mut input_svs = Vec::new();
                for input in &insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    input_svs.push(sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);

                let output_sv = if let Some(output) = insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(idx, output_sv);
                ctx.stmt_insns.insert(idx, insn.clone());
            }

            HirNode::If { cond, then_body, else_body } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.collect_depth += 1;
                collect_varnodes(then_body, ctx);
                if let Some(eb) = else_body {
                    collect_varnodes(eb, ctx);
                }
                ctx.collect_depth -= 1;
            }

            HirNode::While { cond, body } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.collect_depth += 1;
                collect_varnodes(body, ctx);
                ctx.collect_depth -= 1;
            }

            HirNode::DoWhile { body, cond } => {
                ctx.collect_depth += 1;
                collect_varnodes(body, ctx);
                ctx.collect_depth -= 1;
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
            }

            HirNode::For { init, cond, update, body } => {
                collect_insn_as_stmt(init, ctx);
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.collect_depth += 1;
                collect_varnodes(body, ctx);
                collect_insn_as_stmt(update, ctx);
                ctx.collect_depth -= 1;
            }

            HirNode::Switch { cond, cases, default } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.collect_depth += 1;
                for (_case, body) in cases {
                    collect_varnodes(body, ctx);
                }
                if let Some(def) = default {
                    collect_varnodes(def, ctx);
                }
                ctx.collect_depth -= 1;
            }

            HirNode::Return(Some(sv)) => {
                ctx.name_of(sv);
                ctx.cond_uses.push(*sv);
            }

            HirNode::Ternary { cond, then_insn, else_insn, output: _ } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);

                let then_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(then_idx, ctx.collect_depth);
                let mut then_inputs = Vec::new();
                for input in &then_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    then_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(then_idx, then_inputs);
                let then_out_sv = if let Some(output) = then_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(then_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(then_idx, then_out_sv);

                let else_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(else_idx, ctx.collect_depth);
                let mut else_inputs = Vec::new();
                for input in &else_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    else_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(else_idx, else_inputs);
                let else_out_sv = if let Some(output) = else_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(else_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(else_idx, else_out_sv);
            }

            HirNode::Return(None) | HirNode::Goto(_) | HirNode::Label(_)
            | HirNode::TailCall { .. } | HirNode::Continue | HirNode::Break => {}

            HirNode::TryCatch { try_body, catch_body } => {
                ctx.collect_depth += 1;
                collect_varnodes(try_body, ctx);
                collect_varnodes(catch_body, ctx);
                ctx.collect_depth -= 1;
            }
        }
    }
}

const fn is_never_foldable_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Load
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::Return
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Multiequal
    )
}

fn compute_foldable(ctx: &mut PrintCtx) {
    let mut use_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    let mut sv_consumer_stmt: BTreeMap<SsaVarnode, u32> = BTreeMap::new();

    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            *use_counts.entry(*sv).or_insert(0) += 1;
            sv_consumer_stmt.insert(*sv, stmt_idx);
        }
    }

    for sv in &ctx.cond_uses {
        *use_counts.entry(*sv).or_insert(0) += 1;
    }

    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        let output_sv = match output_sv_opt {
            Some(sv) => *sv,
            None => continue,
        };

        let insn = match ctx.stmt_insns.get(&stmt_idx) {
            Some(insn) => insn,
            None => continue,
        };

        if is_never_foldable_op(insn.op) {
            continue;
        }

        if use_counts.get(&output_sv).copied().unwrap_or(0) != 1 {
            continue;
        }

        let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
        let consumer_depth = sv_consumer_stmt
            .get(&output_sv)
            .and_then(|&cid| ctx.stmt_depths.get(&cid).copied())
            .unwrap_or(u32::MAX);

        if def_depth != consumer_depth {
            continue;
        }

        ctx.foldable_stmts.insert(stmt_idx);
        ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
    }
}

/// Heuristic: derive C type from opcode family and operand size.
fn infer_type_from_insn(insn: &IrInsn, output_sv: &SsaVarnode, ctx: &mut PrintCtx) {
    let ty = match insn.op.type_family() {
        Some('b') => PrimitiveType::Bool,
        Some('f') => {
            if output_sv.base.size == 4 {
                PrimitiveType::Float
            } else {
                PrimitiveType::Double
            }
        }
        Some('i') | Some(_) | None => {
            match insn.op {
                IrOp::Ptradd | IrOp::Ptrsub => PrimitiveType::Ptr,
                IrOp::Load => PrimitiveType::UnsignedInt(output_sv.base.size),
                IrOp::IntDiv | IrOp::IntRem | IrOp::IntZext | IrOp::IntLess
                | IrOp::IntLessequal | IrOp::IntCarry => {
                    PrimitiveType::UnsignedInt(output_sv.base.size)
                }
                _ => PrimitiveType::Int(output_sv.base.size),
            }
        }
    };
    ctx.var_types.entry(*output_sv).or_insert(ty);
}

// ---------------------------------------------------------------------------
// Type printing
// ---------------------------------------------------------------------------

fn c_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_Bool",
        PrimitiveType::Int(w) => match w {
            1 => "signed char",
            2 => "short",
            4 => "int",
            8 => "long long",
            _ => "int",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "unsigned char",
            2 => "unsigned short",
            4 => "unsigned int",
            8 => "unsigned long long",
            _ => "unsigned int",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
    }
}

fn dwarf_type_to_c(dwarf_type: &str) -> String {
    match dwarf_type {
        "void" => "void".to_string(),
        "_Bool" => "_Bool".to_string(),
        s => s.to_string(),
    }
}

// ---------------------------------------------------------------------------
// Node emission
// ---------------------------------------------------------------------------

fn emit_nodes(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    for node in nodes {
        emit_node(node, depth, ctx, out);
    }
}

fn resolve_sv_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv) {
        if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
            return emit_expr(&def_insn, def_stmt, ctx);
        }
    }
    ctx.name_of(sv)
}

fn emit_node(node: &HirNode, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    match node {
        HirNode::Block(children) => emit_nodes(children, depth, ctx, out),

        HirNode::Statement(insn) => emit_statement(insn, depth, ctx, out),

        HirNode::If { cond, then_body, else_body } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, out);
            let _ = writeln!(out, "if ({}) {{", cond_expr);
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::While { cond, body } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, out);
            let _ = writeln!(out, "while ({}) {{", cond_expr);
            emit_nodes(body, depth + 1, ctx, out);
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::DoWhile { body, cond } => {
            indent(depth, out);
            let _ = writeln!(out, "do {{");
            emit_nodes(body, depth + 1, ctx, out);
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, out);
            let _ = writeln!(out, "}} while ({});", cond_expr);
        }

        HirNode::For { init, cond, update, body } => {
            let init_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let init_str = emit_for_clause(init, init_idx, ctx);

            let mut body_buf = String::new();
            emit_nodes(body, depth + 1, ctx, &mut body_buf);

            let update_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let update_str = emit_for_clause(update, update_idx, ctx);

            let cond_expr = resolve_sv_expr(cond, ctx);

            indent(depth, out);
            let _ = writeln!(out, "for ({}; {}; {}) {{", init_str, cond_expr, update_str);
            out.push_str(&body_buf);
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Switch { cond, cases, default } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, out);
            let _ = writeln!(out, "switch ({}) {{", cond_expr);
            for (case, body) in cases {
                indent(depth, out);
                match case {
                    SwitchCase::Value(v) => {
                        let _ = writeln!(out, "case {}:", v);
                    }
                    SwitchCase::Range(lo, hi) => {
                        let _ = writeln!(out, "case {} ... {}:", lo, hi);
                    }
                }
                emit_nodes(body, depth + 1, ctx, out);
                indent(depth + 1, out);
                let _ = writeln!(out, "break;");
            }
            if let Some(def) = default {
                indent(depth, out);
                let _ = writeln!(out, "default:");
                emit_nodes(def, depth + 1, ctx, out);
                indent(depth + 1, out);
                let _ = writeln!(out, "break;");
            }
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Return(Some(sv)) => {
            let name = resolve_sv_expr(sv, ctx);
            indent(depth, out);
            let _ = writeln!(out, "return {};", name);
        }

        HirNode::Return(None) => {
            indent(depth, out);
            let _ = writeln!(out, "return;");
        }

        HirNode::Goto(label) => {
            indent(depth, out);
            let _ = writeln!(out, "goto {};", label);
        }

        HirNode::Label(label) => {
            if depth > 0 {
                indent(depth - 1, out);
            }
            let _ = writeln!(out, "{}:;", label);
        }

        HirNode::Ternary { cond, then_insn, else_insn, output: _ } => {
            let then_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let else_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;

            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&then_idx).cloned() {
                ctx.name_of(&sv)
            } else {
                "/* ternary */".to_string()
            };

            let then_expr = emit_expr(then_insn, then_idx, ctx);
            let else_expr = emit_expr(else_insn, else_idx, ctx);
            let cond_name = resolve_sv_expr(cond, ctx);

            indent(depth, out);
            let _ = writeln!(out, "{} = {} ? {} : {};", lhs, cond_name, then_expr, else_expr);
        }

        HirNode::TailCall { target } => {
            indent(depth, out);
            let _ = writeln!(out, "return ((unsigned long long (*)(void))0x{:x})();", target);
        }

        HirNode::Continue => {
            indent(depth, out);
            let _ = writeln!(out, "continue;");
        }

        HirNode::Break => {
            indent(depth, out);
            let _ = writeln!(out, "break;");
        }

        HirNode::TryCatch { try_body, catch_body } => {
            indent(depth, out);
            let _ = writeln!(out, "__try {{");
            emit_nodes(try_body, depth + 1, ctx, out);
            indent(depth, out);
            let _ = writeln!(out, "}} __except {{");
            emit_nodes(catch_body, depth + 1, ctx, out);
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }
    }
}

fn resolve_call_target(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* unknown */".to_string();
    }
    let target_vn = &insn.inputs[0];
    if target_vn.space == SpaceId::Const {
        if let Some(name) = ctx.symbols.get(&target_vn.offset) {
            return name.clone();
        }
        return format!("sub_{:x}", target_vn.offset);
    }
    emit_operand_resolved(target_vn, 0, stmt_idx, ctx)
}

// ---------------------------------------------------------------------------
// Statement emission (single IR instruction)
// ---------------------------------------------------------------------------

fn emit_for_clause(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let lhs_sv = match ctx.stmt_outputs.get(&stmt_idx).cloned().flatten() {
        Some(sv) => sv,
        None => return format!("/* {} */", insn.op.name()),
    };
    let lhs = ctx.name_of(&lhs_sv);

    if let Some(short) = try_emit_increment_form(insn, &lhs) {
        return short;
    }

    if let Some(short) = try_emit_compound_assign(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    let rhs = emit_expr(insn, stmt_idx, ctx);
    format!("{} = {}", lhs, rhs)
}

fn try_emit_increment_form(insn: &IrInsn, lhs: &str) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    let (counter_in, const_in) = match (insn.inputs[0].space, insn.inputs[1].space) {
        (SpaceId::Const, _) => (&insn.inputs[1], &insn.inputs[0]),
        (_, SpaceId::Const) => (&insn.inputs[0], &insn.inputs[1]),
        _ => return None,
    };
    if Some(*counter_in) != insn.output {
        return None;
    }
    if const_in.offset != 1 {
        return None;
    }
    match insn.op {
        IrOp::IntAdd => Some(format!("{}++", lhs)),
        IrOp::IntSub if insn.inputs[1].space == SpaceId::Const => Some(format!("{}--", lhs)),
        _ => None,
    }
}

fn try_emit_compound_assign(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    let counter_is_first = Some(insn.inputs[0]) == insn.output;
    let counter_is_second = Some(insn.inputs[1]) == insn.output;

    let counter_idx = if counter_is_first { 0 } else if counter_is_second { 1 } else { return None; };

    // If the counter input has a foldable definition, its expression expands
    // inline and compound form would be wrong (e.g. `((1) + 2) += 3`).
    let counter_vn = &insn.inputs[counter_idx];
    if counter_vn.space != SpaceId::Const {
        let counter_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *counter_vn).copied());
        if let Some(csv) = counter_sv {
            if ctx.sv_defining_stmt.contains_key(&csv) {
                return None;
            }
        }
    }

    // For commutative ops, either operand position is fine.
    // For non-commutative ops (sub, div, mod, shifts), only first-position works.
    let op_str = match insn.op {
        IrOp::IntAdd if counter_is_first || counter_is_second => "+=",
        IrOp::IntSub if counter_is_first => "-=",
        IrOp::IntMult if counter_is_first || counter_is_second => "*=",
        IrOp::IntDiv | IrOp::IntSdiv if counter_is_first => "/=",
        IrOp::IntRem | IrOp::IntSrem if counter_is_first => "%=",
        IrOp::IntLeft if counter_is_first => "<<=",
        IrOp::IntRight | IrOp::IntSright if counter_is_first => ">>=",
        IrOp::IntAnd if counter_is_first || counter_is_second => "&=",
        IrOp::IntOr if counter_is_first || counter_is_second => "|=",
        IrOp::IntXor if counter_is_first || counter_is_second => "^=",
        _ => return None,
    };
    let other_idx = if counter_is_first { 1 } else { 0 };
    let const_ctx = const_context_for_op(insn.op);
    let other = emit_operand_with_prec(&insn.inputs[other_idx], other_idx, stmt_idx, const_ctx, 0, ctx);
    Some(format!("{} {} {}", lhs, op_str, other))
}

fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let idx = ctx.emit_stmt;
    ctx.emit_stmt += 1;

    if ctx.foldable_stmts.contains(&idx) {
        return;
    }

    indent(depth, out);

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        let lhs = ctx.name_of(&sv);

        if let Some(short) = try_emit_increment_form(insn, &lhs) {
            let _ = writeln!(out, "{};", short);
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            let _ = writeln!(out, "{} = {};", lhs, rhs);
        }
    } else {
        match insn.op {
            IrOp::Store => {
                if insn.inputs.len() >= 3 {
                    let store_size = insn.inputs[2].size;
                    let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                    if let Some(global) = try_global_var_name(&insn.inputs[1], store_size, ctx) {
                        let _ = writeln!(out, "{} = {};", global, val);
                    } else if let Some(field_expr) = try_resolve_field_from_addr(&insn.inputs[1], 1, idx, store_size, ctx) {
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(sub) = try_array_subscript(&insn.inputs[1], idx, store_size, ctx) {
                        let _ = writeln!(out, "{}[{}] = {};", sub.base, sub.index, val);
                    } else {
                        let addr = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
                        let cast = ida_ptr_type(store_size);
                        let _ = writeln!(out, "*({})({}) = {};", cast, addr, val);
                    }
                } else {
                    let _ = writeln!(out, "/* STORE (bad arity) */;");
                }
            }
            IrOp::Call | IrOp::Callind => {
                if let Some(kind) = ctx.panic_sites.get(&insn.addr) {
                    let _ = writeln!(out, "/* PANIC: {} */", kind);
                    indent(depth, out);
                }
                let target = resolve_call_target(insn, idx, ctx);
                let _ = writeln!(out, "{}();", target);
            }
            IrOp::Unimplemented => {
                let _ = writeln!(out, "__unknown_insn_0x{:X}();", insn.addr);
            }
            IrOp::Callother => {
                let expr = emit_callother(insn, idx, ctx);
                let _ = writeln!(out, "{};", expr);
            }
            _ => {
                let _ = writeln!(out, "/* {} */;", insn.op.name());
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Operator precedence (C standard levels)
// ---------------------------------------------------------------------------

/// Return the C precedence level for an IrOp when used as a binary operator.
///
/// Higher values bind tighter.  When a child expression has lower precedence
/// than its parent, parentheses are required.
fn c_precedence(op: IrOp) -> u8 {
    match op {
        // Multiply / divide / mod — 54
        IrOp::IntMult | IrOp::FloatMult
        | IrOp::IntDiv | IrOp::IntSdiv | IrOp::FloatDiv
        | IrOp::IntRem | IrOp::IntSrem => 54,

        // Add / subtract — 50
        IrOp::IntAdd | IrOp::FloatAdd
        | IrOp::IntSub | IrOp::FloatSub
        | IrOp::Ptradd | IrOp::Ptrsub => 50,

        // Shifts — 46
        IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright => 46,

        // Relational — 42
        IrOp::IntLess | IrOp::IntLessequal
        | IrOp::IntSless | IrOp::IntSlessequal
        | IrOp::FloatLess | IrOp::FloatLessequal => 42,

        // Equality — 38
        IrOp::IntEqual | IrOp::IntNotequal
        | IrOp::FloatEqual | IrOp::FloatNotequal => 38,

        // Bitwise AND — 34
        IrOp::IntAnd => 34,

        // Bitwise XOR — 30
        IrOp::IntXor | IrOp::BoolXor => 30,

        // Bitwise OR — 26
        IrOp::IntOr => 26,

        // Logical AND — 22
        IrOp::BoolAnd => 22,

        // Logical OR — 18
        IrOp::BoolOr => 18,

        // Unary prefix (!, ~, -, *, &, casts) — 62
        IrOp::IntNegate | IrOp::BoolNegate
        | IrOp::Int2comp | IrOp::FloatNeg => 62,

        // Function call, subscript, member access — 70
        IrOp::Call | IrOp::Callind => 70,

        // Everything else (copy, load, store, etc.) — 0
        _ => 0,
    }
}

/// Return `true` if `op` is a binary operator that we emit via `emit_binop`.
#[allow(dead_code)]
fn is_binop(op: IrOp) -> bool {
    matches!(op,
        IrOp::IntAdd | IrOp::FloatAdd
        | IrOp::IntSub | IrOp::FloatSub
        | IrOp::IntMult | IrOp::FloatMult
        | IrOp::IntDiv | IrOp::IntSdiv | IrOp::FloatDiv
        | IrOp::IntRem | IrOp::IntSrem
        | IrOp::IntAnd | IrOp::IntOr | IrOp::IntXor
        | IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright
        | IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolXor
        | IrOp::IntEqual | IrOp::FloatEqual
        | IrOp::IntNotequal | IrOp::FloatNotequal
        | IrOp::IntLess | IrOp::IntSless | IrOp::FloatLess
        | IrOp::IntLessequal | IrOp::IntSlessequal | IrOp::FloatLessequal
        | IrOp::Ptradd | IrOp::Ptrsub
    )
}

// ---------------------------------------------------------------------------
// Expression emission
// ---------------------------------------------------------------------------

fn emit_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    emit_expr_with_prec(insn, stmt_idx, 0, ctx)
}

fn emit_expr_with_prec(insn: &IrInsn, stmt_idx: u32, parent_prec: u8, ctx: &mut PrintCtx) -> String {
    match insn.op {
        // -- Binary arithmetic/bitwise --
        IrOp::IntAdd | IrOp::FloatAdd => emit_binop(insn, "+", stmt_idx, parent_prec, ctx),
        IrOp::IntSub | IrOp::FloatSub => emit_binop(insn, "-", stmt_idx, parent_prec, ctx),
        IrOp::IntMult | IrOp::FloatMult => emit_binop(insn, "*", stmt_idx, parent_prec, ctx),
        IrOp::IntSdiv | IrOp::FloatDiv => emit_binop(insn, "/", stmt_idx, parent_prec, ctx),
        IrOp::IntDiv => emit_unsigned_binop(insn, "/", stmt_idx, parent_prec, ctx),
        IrOp::IntSrem => emit_binop(insn, "%", stmt_idx, parent_prec, ctx),
        IrOp::IntRem => emit_unsigned_binop(insn, "%", stmt_idx, parent_prec, ctx),
        IrOp::IntAnd => {
            if insn.inputs.len() >= 2 && insn.inputs[1].space == SpaceId::Const && insn.inputs[1].offset == 0 {
                return "0".to_string();
            }
            emit_binop(insn, "&", stmt_idx, parent_prec, ctx)
        }
        IrOp::IntOr => {
            if insn.inputs.len() >= 2 && insn.inputs[1].space == SpaceId::Const && insn.inputs[1].offset == 0 {
                return emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
            }
            emit_binop(insn, "|", stmt_idx, parent_prec, ctx)
        }
        IrOp::IntXor => {
            if insn.inputs.len() >= 2 && insn.inputs[0] == insn.inputs[1]
                && insn.inputs[0].space != SpaceId::Const
            {
                return "0".to_string();
            }
            emit_binop(insn, "^", stmt_idx, parent_prec, ctx)
        }
        IrOp::IntLeft => emit_binop(insn, "<<", stmt_idx, parent_prec, ctx),
        IrOp::IntSright => emit_binop(insn, ">>", stmt_idx, parent_prec, ctx),
        IrOp::IntRight => emit_unsigned_binop(insn, ">>", stmt_idx, parent_prec, ctx),

        // -- Boolean ops --
        IrOp::BoolAnd => emit_binop(insn, "&&", stmt_idx, parent_prec, ctx),
        IrOp::BoolOr => emit_binop(insn, "||", stmt_idx, parent_prec, ctx),
        IrOp::BoolXor => emit_binop(insn, "^", stmt_idx, parent_prec, ctx),

        // -- Comparisons --
        IrOp::IntEqual | IrOp::FloatEqual => emit_binop(insn, "==", stmt_idx, parent_prec, ctx),
        IrOp::IntNotequal | IrOp::FloatNotequal => emit_binop(insn, "!=", stmt_idx, parent_prec, ctx),
        IrOp::IntSless | IrOp::FloatLess => emit_binop(insn, "<", stmt_idx, parent_prec, ctx),
        IrOp::IntLess => emit_unsigned_binop(insn, "<", stmt_idx, parent_prec, ctx),
        IrOp::IntSlessequal | IrOp::FloatLessequal => {
            emit_binop(insn, "<=", stmt_idx, parent_prec, ctx)
        }
        IrOp::IntLessequal => emit_unsigned_binop(insn, "<=", stmt_idx, parent_prec, ctx),

        // -- Unary ops --
        IrOp::IntNegate => emit_unaryop(insn, "~", stmt_idx, parent_prec, ctx),
        IrOp::BoolNegate => emit_bool_negate(insn, stmt_idx, parent_prec, ctx),
        IrOp::Int2comp | IrOp::FloatNeg => emit_unaryop(insn, "-", stmt_idx, parent_prec, ctx),

        // -- Copy / move --
        IrOp::Copy => {
            if insn.inputs.is_empty() {
                "0".to_string()
            } else {
                let copy_ctx = if insn.inputs[0].space == SpaceId::Const
                    && insn.inputs[0].offset == 0
                {
                    let out_sv = ctx.stmt_outputs.get(&stmt_idx).cloned().flatten();
                    if out_sv.and_then(|sv| ctx.var_types.get(&sv).copied()) == Some(PrimitiveType::Ptr) {
                        ConstContext::Pointer
                    } else {
                        ConstContext::Signed
                    }
                } else {
                    ConstContext::Signed
                };
                emit_operand_with_prec(&insn.inputs[0], 0, stmt_idx, copy_ctx, 0, ctx)
            }
        }

        // -- Load --
        IrOp::Load => {
            let load_size = insn.output.map_or(8, |o| o.size);
            let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
            if addr_idx < insn.inputs.len() {
                if let Some(global) = try_global_var_name(&insn.inputs[addr_idx], load_size, ctx) {
                    return global;
                }
                if let Some(resolved) = try_resolve_field_from_addr(&insn.inputs[addr_idx], addr_idx, stmt_idx, load_size, ctx) {
                    return resolved;
                }
                if let Some(sub) = try_array_subscript(&insn.inputs[addr_idx], stmt_idx, load_size, ctx) {
                    return format!("{}[{}]", sub.base, sub.index);
                }
                let addr = emit_operand_resolved(&insn.inputs[addr_idx], addr_idx, stmt_idx, ctx);
                let cast = ida_ptr_type(load_size);
                format!("*({})({})", cast, addr)
            } else {
                "/* LOAD (bad arity) */ 0".to_string()
            }
        }

        // -- Extensions --
        IrOp::IntZext | IrOp::IntSext => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, insn.op == IrOp::IntSext);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Cast --
        IrOp::Cast => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, true);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Pointer arithmetic --
        IrOp::Ptradd => emit_binop(insn, "+", stmt_idx, parent_prec, ctx),
        IrOp::Ptrsub => emit_binop(insn, "-", stmt_idx, parent_prec, ctx),

        // -- Float conversions --
        IrOp::FloatInt2float => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    let ty = if output.size == 4 { "float" } else { "double" };
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0.0".to_string()
            }
        }
        IrOp::FloatFloat2float => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    let ty = if output.size == 4 { "float" } else { "double" };
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0.0".to_string()
            }
        }
        IrOp::FloatFloat2int => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, true);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Float unary --
        IrOp::FloatAbs => emit_call1(insn, "fabs", stmt_idx, ctx),
        IrOp::FloatSqrt => emit_call1(insn, "sqrt", stmt_idx, ctx),
        IrOp::FloatCeil => emit_call1(insn, "ceil", stmt_idx, ctx),
        IrOp::FloatFloor => emit_call1(insn, "floor", stmt_idx, ctx),
        IrOp::FloatRound => emit_call1(insn, "round", stmt_idx, ctx),
        IrOp::FloatTrunc => emit_call1(insn, "trunc", stmt_idx, ctx),
        IrOp::FloatNan => emit_call1(insn, "isnan", stmt_idx, ctx),

        // -- Bit manipulation --
        IrOp::Popcount => {
            if !insn.inputs.is_empty()
                && insn.inputs[0].space == SpaceId::Const
                && insn.inputs[0].offset == 0
            {
                return "0".to_string();
            }
            emit_call1(insn, "__builtin_popcount", stmt_idx, ctx)
        }
        IrOp::Lzcount => emit_call1(insn, "__builtin_clz", stmt_idx, ctx),

        // -- Piece/Subpiece --
        IrOp::Piece => {
            if insn.inputs.len() >= 2 {
                let hi = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let lo = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                let shift = (insn.inputs[1].size as u32) * 8;
                format!("(({}) << {}) | ({})", hi, shift, lo)
            } else {
                "0".to_string()
            }
        }
        IrOp::Subpiece => {
            if insn.inputs.len() >= 2 {
                let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let byte_offset = insn.inputs[1].offset;
                let output_size = insn.output.map_or(0, |v| v.size);
                emit_subpiece_macro(&src, byte_offset, output_size)
            } else {
                "0".to_string()
            }
        }

        // -- Carry / borrow (emit as comparison) --
        // INT_CARRY: unsigned carry — true when (a + b) wraps around.
        IrOp::IntCarry => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("({} + {}) < {}", a, b, a)
            } else {
                "0".to_string()
            }
        }
        // INT_SCARRY: signed overflow on addition.
        IrOp::IntScarry => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("__OFADD__({}, {})", a, b)
            } else {
                "0".to_string()
            }
        }
        // INT_SBORROW: signed overflow on subtraction.
        IrOp::IntSborrow => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("__OFSUB__({}, {})", a, b)
            } else {
                "0".to_string()
            }
        }

        // -- Call with output --
        IrOp::Call | IrOp::Callind => {
            let target = resolve_call_target(insn, stmt_idx, ctx);
            format!("{}()", target)
        }

        // -- Unknown / unimplemented instruction --
        IrOp::Unimplemented => format!("__unknown_insn_0x{:X}()", insn.addr),

        // -- CALLOTHER: resolve to intrinsic name if known --
        IrOp::Callother => emit_callother(insn, stmt_idx, ctx),

        // -- Fallback --
        _ => format!("/* {} */ 0", insn.op.name()),
    }
}

fn emit_binop(insn: &IrInsn, op: &str, stmt_idx: u32, parent_prec: u8, ctx: &mut PrintCtx) -> String {
    let my_prec = c_precedence(insn.op);
    let const_ctx = const_context_for_op(insn.op);
    let lhs_ctx = if insn.inputs.len() >= 2 {
        const_context_for_binop_pair(insn, 0, stmt_idx, ctx)
    } else {
        const_ctx
    };
    let rhs_ctx = if insn.inputs.len() >= 2 {
        const_context_for_binop_pair(insn, 1, stmt_idx, ctx)
    } else {
        const_ctx
    };
    let lhs = if !insn.inputs.is_empty() {
        emit_operand_with_prec(&insn.inputs[0], 0, stmt_idx, lhs_ctx, my_prec, ctx)
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        emit_operand_with_prec(&insn.inputs[1], 1, stmt_idx, rhs_ctx, my_prec, ctx)
    } else {
        "0".to_string()
    };

    let bare = if const_ctx == ConstContext::Signed
        && op == "+"
        && insn.inputs.len() >= 2
        && insn.inputs[1].space == SpaceId::Const
    {
        let v = insn.inputs[1].offset;
        let sz = insn.inputs[1].size;
        let msb = match sz {
            1 => 0x80u64,
            2 => 0x8000,
            4 => 0x8000_0000,
            8 => 0x8000_0000_0000_0000,
            _ => u64::MAX,
        };
        if sz <= 8 && v >= msb {
            let signed = sign_extend(v, sz);
            let abs_val = signed.unsigned_abs();
            let should_negate = sz >= 4 || (sz == 2 && abs_val <= 128);
            if should_negate {
                Some(format!("{} - {}", lhs, abs_val))
            } else {
                None
            }
        } else {
            None
        }
    } else {
        None
    };

    let expr = bare.unwrap_or_else(|| format!("{} {} {}", lhs, op, rhs));
    if my_prec > 0 && my_prec < parent_prec {
        format!("({})", expr)
    } else {
        expr
    }
}

fn emit_unaryop(insn: &IrInsn, op: &str, stmt_idx: u32, _parent_prec: u8, ctx: &mut PrintCtx) -> String {
    let my_prec = c_precedence(insn.op);
    let operand = if !insn.inputs.is_empty() {
        emit_operand_with_prec(&insn.inputs[0], 0, stmt_idx, ConstContext::Signed, my_prec, ctx)
    } else {
        "0".to_string()
    };
    format!("{}{}", op, operand)
}

fn negate_comparison(op: IrOp) -> Option<&'static str> {
    match op {
        IrOp::IntLess => Some(">="),
        IrOp::IntLessequal => Some(">"),
        IrOp::IntEqual | IrOp::FloatEqual => Some("!="),
        IrOp::IntNotequal | IrOp::FloatNotequal => Some("=="),
        IrOp::IntSless | IrOp::FloatLess => Some(">="),
        IrOp::IntSlessequal | IrOp::FloatLessequal => Some(">"),
        _ => None,
    }
}

fn emit_bool_negate(insn: &IrInsn, stmt_idx: u32, parent_prec: u8, ctx: &mut PrintCtx) -> String {
    if !insn.inputs.is_empty() && insn.inputs[0].space != SpaceId::Const {
        let input_vn = &insn.inputs[0];
        let resolved_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .cloned()
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *input_vn).copied());
        let sv = resolved_sv.unwrap_or(SsaVarnode { base: *input_vn, version: 0 });

        if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv) {
            if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
                if let Some(negated_op) = negate_comparison(def_insn.op) {
                    let is_unsigned = matches!(def_insn.op, IrOp::IntLess | IrOp::IntLessequal);
                    if is_unsigned {
                        return emit_unsigned_binop(&def_insn, negated_op, def_stmt, parent_prec, ctx);
                    }
                    return emit_binop(&def_insn, negated_op, def_stmt, parent_prec, ctx);
                }
            }
        }
    }

    emit_unaryop(insn, "!", stmt_idx, parent_prec, ctx)
}

fn emit_call1(insn: &IrInsn, func: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let arg = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{}({})", func, arg)
}

fn callother_intrinsic_name(tag: u64) -> Option<&'static str> {
    match tag {
        0x1 => Some("__builtin_memcpy"),
        0x2 => Some("__builtin_memset"),
        0x3 => Some("__builtin_memcmp"),
        0x100 => Some("_mm_load_si128"),
        0x101 => Some("_mm_loadu_si128"),
        0x110 => Some("_mm_add_epi8"),
        0x111 => Some("_mm_add_epi16"),
        0x112 => Some("_mm_add_epi32"),
        0x113 => Some("_mm_add_epi64"),
        0x118 => Some("_mm_sub_epi8"),
        0x119 => Some("_mm_sub_epi16"),
        0x11A => Some("_mm_sub_epi32"),
        0x11B => Some("_mm_sub_epi64"),
        0x120 => Some("_mm_and_si128"),
        0x121 => Some("_mm_or_si128"),
        0x122 => Some("_mm_xor_si128"),
        _ => None,
    }
}

fn emit_callother(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* CALLOTHER (no tag) */ 0".to_string();
    }

    let tag_vn = &insn.inputs[0];
    if tag_vn.space != SpaceId::Const {
        return "/* CALLOTHER (dynamic tag) */ 0".to_string();
    }

    let tag = tag_vn.offset;
    match callother_intrinsic_name(tag) {
        Some(name) => {
            let args: Vec<String> = insn.inputs[1..]
                .iter()
                .enumerate()
                .map(|(i, vn)| emit_operand_resolved(vn, i + 1, stmt_idx, ctx))
                .collect();
            format!("{}({})", name, args.join(", "))
        }
        None => format!("/* CALLOTHER {} */ 0", tag),
    }
}

fn emit_unsigned_binop(insn: &IrInsn, op: &str, stmt_idx: u32, parent_prec: u8, ctx: &mut PrintCtx) -> String {
    let my_prec = c_precedence(insn.op);
    let const_ctx = ConstContext::Bitwise;
    let lhs = if !insn.inputs.is_empty() {
        let raw = emit_operand_with_prec(&insn.inputs[0], 0, stmt_idx, const_ctx, my_prec, ctx);
        let ty = type_for_size(insn.inputs[0].size, false);
        format!("({}){}", ty, raw)
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        if op == ">>" {
            emit_operand_with_prec(&insn.inputs[1], 1, stmt_idx, const_ctx, my_prec, ctx)
        } else {
            let raw = emit_operand_with_prec(&insn.inputs[1], 1, stmt_idx, const_ctx, my_prec, ctx);
            let ty = type_for_size(insn.inputs[1].size, false);
            format!("({}){}", ty, raw)
        }
    } else {
        "0".to_string()
    };
    let expr = format!("{} {} {}", lhs, op, rhs);
    if my_prec > 0 && my_prec < parent_prec {
        format!("({})", expr)
    } else {
        expr
    }
}

// ---------------------------------------------------------------------------
// Operand rendering
// ---------------------------------------------------------------------------

fn emit_operand_resolved(
    vn: &unlace_ir::Varnode,
    _raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    emit_operand_with_prec(vn, _raw_idx, stmt_idx, ConstContext::Signed, 0, ctx)
}

fn is_pointer_typed_input(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if vn.space == SpaceId::Const {
        return false;
    }
    let resolved_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied());
    let sv = resolved_sv.unwrap_or(SsaVarnode { base: *vn, version: 0 });
    ctx.var_types.get(&sv).copied() == Some(PrimitiveType::Ptr)
}

fn const_context_for_binop_pair(insn: &IrInsn, this_idx: usize, stmt_idx: u32, ctx: &PrintCtx) -> ConstContext {
    let base_ctx = const_context_for_op(insn.op);
    if insn.inputs.len() < 2 {
        return base_ctx;
    }
    let other_idx = 1 - this_idx;
    if insn.inputs[this_idx].space == SpaceId::Const
        && insn.inputs[this_idx].offset == 0
        && is_pointer_typed_input(&insn.inputs[other_idx], stmt_idx, ctx)
    {
        return ConstContext::Pointer;
    }
    base_ctx
}

fn emit_operand_with_prec(
    vn: &unlace_ir::Varnode,
    _raw_idx: usize,
    stmt_idx: u32,
    const_ctx: ConstContext,
    parent_prec: u8,
    ctx: &mut PrintCtx,
) -> String {
    if vn.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&vn.offset) {
            return format!("\"{}\"", escape_c_string(s));
        }
        return format_constant_ctx(vn.offset, vn.size, const_ctx);
    }

    let resolved_sv = if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() {
        inputs.iter().find(|sv| sv.base == *vn).copied()
    } else {
        None
    };

    let sv = resolved_sv.unwrap_or(SsaVarnode { base: *vn, version: 0 });

    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv) {
        if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
            return emit_expr_with_prec(&def_insn, def_stmt, parent_prec, ctx);
        }
    }

    ctx.name_of(&sv)
}


#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ConstContext {
    Signed,
    Bitwise,
    Pointer,
    Unsigned,
}

fn const_context_for_op(op: IrOp) -> ConstContext {
    match op {
        IrOp::IntAnd | IrOp::IntOr | IrOp::IntXor
        | IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright => ConstContext::Bitwise,
        _ => ConstContext::Signed,
    }
}

#[cfg(test)]
fn format_constant(value: u64, size: u8) -> String {
    format_constant_ctx(value, size, ConstContext::Signed)
}

fn format_constant_ctx(value: u64, size: u8, context: ConstContext) -> String {
    if context == ConstContext::Pointer && value == 0 {
        return "nullptr".to_string();
    }

    let msb_threshold = match size {
        1 => 0x80u64,
        2 => 0x8000,
        4 => 0x8000_0000,
        8 => 0x8000_0000_0000_0000,
        _ => u64::MAX,
    };

    let has_msb = size <= 8 && value >= msb_threshold;

    if has_msb && context == ConstContext::Signed {
        let signed = sign_extend(value, size);
        let abs_val = signed.unsigned_abs();
        let should_negate = size >= 4 || (size == 2 && abs_val <= 128);
        if should_negate {
            return if size == 8 {
                format!("{}LL", signed)
            } else {
                format!("{}", signed)
            };
        }
    }

    if has_msb {
        return format!("0x{:x}ULL", value);
    }

    if context == ConstContext::Unsigned {
        return if value < 10 {
            if size == 8 {
                format!("{}ULL", value)
            } else if size == 4 {
                format!("{}u", value)
            } else {
                format!("{}", value)
            }
        } else if size == 8 {
            format!("0x{:x}ULL", value)
        } else if size == 4 {
            format!("0x{:x}u", value)
        } else {
            format!("0x{:x}", value)
        };
    }

    if value < 10 {
        if size == 8 {
            format!("{}LL", value)
        } else {
            format!("{}", value)
        }
    } else if size == 8 {
        format!("0x{:x}LL", value)
    } else {
        format!("0x{:x}", value)
    }
}

fn sign_extend(value: u64, size: u8) -> i64 {
    match size {
        1 => value as u8 as i8 as i64,
        2 => value as u16 as i16 as i64,
        4 => value as u32 as i32 as i64,
        8 => value as i64,
        _ => value as i64,
    }
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

fn escape_c_string(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for ch in s.chars() {
        match ch {
            '\\' => out.push_str("\\\\"),
            '"' => out.push_str("\\\""),
            '\n' => out.push_str("\\n"),
            '\t' => out.push_str("\\t"),
            '\r' => out.push_str("\\r"),
            '\0' => out.push_str("\\0"),
            c if c.is_ascii_graphic() || c == ' ' => out.push(c),
            c => {
                for b in c.to_string().bytes() {
                    let _ = write!(out, "\\x{:02x}", b);
                }
            }
        }
    }
    out
}

/// Emit an IDA-style SUBPIECE macro based on output size and byte offset.
///
/// Known patterns map to named macros (LOBYTE, BYTE1, LOWORD, etc.);
/// anything else falls back to `(cast)((x) >> shift)`.
fn emit_subpiece_macro(src: &str, byte_offset: u64, output_size: u8) -> String {
    match (output_size, byte_offset) {
        (1, 0) => format!("LOBYTE({})", src),
        (1, 1) => format!("BYTE1({})", src),
        (1, 2) => format!("BYTE2({})", src),
        (1, 3) => format!("BYTE3({})", src),
        (2, 0) => format!("LOWORD({})", src),
        (2, 2) => format!("HIWORD({})", src),
        (4, 0) => format!("LODWORD({})", src),
        (4, 4) => format!("HIDWORD({})", src),
        _ => {
            let cast = match output_size {
                1 => "(_BYTE)",
                2 => "(_WORD)",
                4 => "(_DWORD)",
                8 => "(_QWORD)",
                _ => "(_DWORD)",
            };
            if byte_offset == 0 {
                format!("{}({})", cast, src)
            } else {
                format!("{}(({}) >> {})", cast, src, byte_offset * 8)
            }
        }
    }
}
// ---------------------------------------------------------------------------

fn indent(depth: usize, out: &mut String) {
    for _ in 0..depth {
        out.push_str("    ");
    }
}

fn type_for_size(size: u8, signed: bool) -> &'static str {
    if signed {
        match size {
            1 => "__int8",
            2 => "__int16",
            4 => "__int32",
            8 => "__int64",
            _ => "__int32",
        }
    } else {
        match size {
            1 => "unsigned __int8",
            2 => "unsigned __int16",
            4 => "unsigned __int32",
            8 => "unsigned __int64",
            _ => "unsigned __int32",
        }
    }
}

/// IDA-style pointer cast for memory dereference based on access size.
///
/// Returns e.g. `_QWORD *` for 8-byte access, `_DWORD *` for 4-byte, etc.
fn ida_ptr_type(size: u8) -> &'static str {
    match size {
        1 => "_BYTE *",
        2 => "_WORD *",
        4 => "_DWORD *",
        8 => "_QWORD *",
        _ => "_QWORD *",
    }
}

fn calling_convention_annotation(convention: &str) -> Option<&'static str> {
    match convention {
        "Microsoft x64" => Some("__fastcall"),
        "AArch64 AAPCS64" => Some("__aapcs"),
        _ => None,
    }
}

/// IDA-style typedefs emitted at the top of decompiled output.
const IDA_TYPEDEFS: &str = "\
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
#define LOBYTE(x)  ((_BYTE)(x))
#define BYTE1(x)   ((_BYTE)((x) >> 8))
#define BYTE2(x)   ((_BYTE)((x) >> 16))
#define BYTE3(x)   ((_BYTE)((x) >> 24))
#define LOWORD(x)  ((_WORD)(x))
#define HIWORD(x)  ((_WORD)((x) >> 16))
#define LODWORD(x) ((_DWORD)(x))
#define HIDWORD(x) ((_DWORD)((x) >> 32))
#define __OFADD__(a, b) ((((a) ^ (b) ^ -1) & ((a) ^ ((a) + (b)))) < 0)
#define __OFSUB__(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)
";

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};
    use unlace_struct::{HirFunction, HirNode, LabelId};

    use super::print_c;

    fn make_func(name: &str, body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: name.to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
        }
    }

    fn reg(offset: u64, size: u8) -> Varnode {
        Varnode::reg(offset, size)
    }

    fn con(value: u64, size: u8) -> Varnode {
        Varnode::constant(value, size)
    }

    fn sv(offset: u64, size: u8) -> SsaVarnode {
        SsaVarnode { base: Varnode::reg(offset, size), version: 0 }
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
        assert!(output.contains("return v2;"), "return: {output}");
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
        assert!(output.contains("return;"), "return: {output}");
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

        assert!(output.contains("goto label_0;"), "goto: {output}");
        assert!(output.contains("label_0:;"), "label: {output}");
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
        assert_eq!(super::c_type(&PrimitiveType::Bool), "_Bool");
        assert_eq!(super::c_type(&PrimitiveType::Int(1)), "signed char");
        assert_eq!(super::c_type(&PrimitiveType::Int(2)), "short");
        assert_eq!(super::c_type(&PrimitiveType::Int(4)), "int");
        assert_eq!(super::c_type(&PrimitiveType::Int(8)), "long long");
        assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(1)), "unsigned char");
        assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(4)), "unsigned int");
        assert_eq!(super::c_type(&PrimitiveType::Float), "float");
        assert_eq!(super::c_type(&PrimitiveType::Double), "double");
        assert_eq!(super::c_type(&PrimitiveType::Ptr), "void *");
        assert_eq!(super::c_type(&PrimitiveType::Unknown), "int");
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
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r0,
                smallvec![c1],
                0x1000,
            )),
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
            output.contains("int v1;"),
            "v1 declaration expected: {output}",
        );

        assert!(
            output.contains("v1 = 1 + 2 + 3;"),
            "folded expression expected: {output}",
        );

        assert!(
            output.contains("return v1;"),
            "return v1 expected: {output}",
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

        assert!(
            output.contains("?") && output.contains(":"),
            "should contain ternary operator: {output}"
        );
        let ternary_line = output
            .lines()
            .find(|l| l.contains("?"))
            .expect("should find ternary line");
        assert!(
            ternary_line.contains(" = ") && ternary_line.contains(" ? ") && ternary_line.contains(" : "),
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


    #[test]
    fn test_struct_field_access() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, StructField, StructType};
        let r0 = reg(0, 8); let r8 = reg(8, 4); let c8 = con(8, 8); let space = con(0, 8);
        let addr_add = IrInsn::with_output(IrOp::IntAdd, Varnode::unique(0, 8), smallvec![r0, c8], 0x1000);
        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, Varnode::unique(0, 8)], 0x1004);
        let body = vec![HirNode::Statement(addr_add), HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];
        let func = make_func("test_field", body);
        let mut structs = BTreeMap::new();
        structs.insert("Rect".to_string(), StructType { name: "Rect".to_string(), size: 16, fields: vec![
            StructField { name: "origin".to_string(), offset: 0, size: 8, type_name: "Point".to_string() },
            StructField { name: "size".to_string(), offset: 8, size: 4, type_name: "int".to_string() },
        ]});
        let dwarf = DwarfInfo { functions: BTreeMap::new(), source_map: BTreeMap::new(), structs, enums: BTreeMap::new(), unions: BTreeMap::new() };
        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(output.contains("->size"), "should contain ->size: {output}");
    }
    #[test]
    fn test_struct_field_no_match() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, StructField, StructType};
        let r0 = reg(0, 8); let r8 = reg(8, 4); let c48 = con(48, 8); let space = con(0, 8);
        let addr_add = IrInsn::with_output(IrOp::IntAdd, Varnode::unique(0, 8), smallvec![r0, c48], 0x1000);
        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, Varnode::unique(0, 8)], 0x1004);
        let body = vec![HirNode::Statement(addr_add), HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];
        let func = make_func("test_no_field", body);
        let mut structs = BTreeMap::new();
        structs.insert("Point".to_string(), StructType { name: "Point".to_string(), size: 8, fields: vec![
            StructField { name: "x".to_string(), offset: 0, size: 4, type_name: "int".to_string() },
            StructField { name: "y".to_string(), offset: 4, size: 4, type_name: "int".to_string() },
        ]});
        let dwarf = DwarfInfo { functions: BTreeMap::new(), source_map: BTreeMap::new(), structs, enums: BTreeMap::new(), unions: BTreeMap::new() };
        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(!output.contains("->"), "should NOT contain ->: {output}");
        // With array subscript recovery: INT_ADD(base, 48) with 4-byte load → base[12]
        assert!(output.contains("v1[12]"), "should recover array subscript v1[12]: {output}");
    }

    #[test]
    fn test_dwarf_function_name_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(0x1000, FunctionDebugInfo {
            name: "compute".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            params: vec![],
            return_type: Some("int".to_string()),
            decl: None,
        });
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
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
    fn test_dwarf_param_names_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(0x1000, FunctionDebugInfo {
            name: "add".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            params: vec![
                ParameterInfo { name: Some("a".to_string()), type_name: Some("int".to_string()) },
                ParameterInfo { name: Some("b".to_string()), type_name: Some("int".to_string()) },
            ],
            return_type: Some("int".to_string()),
            decl: None,
        });
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("int add(int a, int b)"),
            "should use DWARF param names/types: {output}",
        );
    }

    #[test]
    fn test_dwarf_return_type_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(0x1000, FunctionDebugInfo {
            name: "get_value".to_string(),
            linkage_name: None,
            low_pc: 0x1000,
            high_pc: Some(0x1020),
            params: vec![],
            return_type: Some("long".to_string()),
            decl: None,
        });
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("long get_value("),
            "should use DWARF return type 'long': {output}",
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

        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 8))),
        ];

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

        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

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

        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 1))),
        ];

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

        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 2))),
        ];

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
            output.contains("typedef signed char __int8;"),
            "should contain __int8 typedef: {output}",
        );
        assert!(
            output.contains("typedef signed short __int16;"),
            "should contain __int16 typedef: {output}",
        );
        assert!(
            output.contains("typedef signed int __int32;"),
            "should contain __int32 typedef: {output}",
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

        let sext = IrInsn::with_output(
            IrOp::IntSext,
            r8,
            smallvec![r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(sext),
            HirNode::Return(Some(sv(8, 8))),
        ];

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

        let zext = IrInsn::with_output(
            IrOp::IntZext,
            r8,
            smallvec![r0],
            0x1000,
        );
        let body = vec![
            HirNode::Statement(zext),
            HirNode::Return(Some(sv(8, 8))),
        ];

        let func = make_func("unsigned_cast", body);
        let output = print_c(&func);

        assert!(
            output.contains("(unsigned __int64)"),
            "unsigned extension to 8 bytes should use unsigned __int64: {output}",
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
            HirNode::Statement(IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, r16, smallvec![space, r0], 0x1004)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, r24, smallvec![space, r0], 0x1008)),
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
            HirNode::Return(Some(SsaVarnode { base: Varnode::reg(0, 8), version: 0 })),
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
            HirNode::Return(Some(SsaVarnode { base: Varnode::reg(0, 4), version: 0 })),
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
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r0,
                smallvec![neg1],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: Varnode::reg(0, 4), version: 0 })),
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
                init: IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
                body: vec![],
            },
            HirNode::Return(None),
        ];

        let func = make_func("for_simple", body);
        let output = print_c(&func);

        assert!(
            output.contains("for ("),
            "should contain 'for (': {output}",
        );
        assert!(
            output.contains("v1++"),
            "increment should be rendered as v1++: {output}",
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
                init: IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, two], 0x1018),
                body: vec![],
            },
            HirNode::Return(None),
        ];

        let func = make_func("for_step2", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1 += 2"),
            "step-2 should render as v1 += 2: {output}",
        );
    }

    #[test]
    fn test_for_loop_decrement_emit() {
        let i = reg(0, 4);
        let n = reg(8, 4);
        let one = con(1, 4);

        let body = vec![
            HirNode::For {
                init: IrInsn::with_output(IrOp::Copy, i, smallvec![n], 0x1000),
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
        assert!(
            output.contains("for ("),
            "should be a for-loop: {output}",
        );
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
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, acc, smallvec![zero], 0x0FFC)),
            HirNode::For {
                init: IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
                body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd, acc, smallvec![acc, one], 0x1014,
                ))],
            },
            HirNode::Return(Some(SsaVarnode { base: acc, version: 1 })),
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
            HirNode::Return(Some(SsaVarnode { base: Varnode::reg(8, 1), version: 0 })),
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
                    IrOp::IntAdd, r0, smallvec![r0, c1], 0x1000,
                ))],
                catch_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::Copy, r8, smallvec![con(0, 4)], 0x1010,
                ))],
            },
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("try_catch_func", body);
        let output = print_c(&func);

        assert!(output.contains("__try {"), "__try: {output}");
        assert!(output.contains("} __except {"), "__except: {output}");
    }

    #[test]
    fn test_try_catch_no_landing_pads_no_output() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd, r0, smallvec![r0, c1], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("no_try_catch", body);
        let output = print_c(&func);

        assert!(!output.contains("__try"), "no TryCatch node → no __try: {output}");
        assert!(!output.contains("__except"), "no TryCatch node → no __except: {output}");
    }

    #[test]
    fn test_try_catch_nested_indentation() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::TryCatch {
                try_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd, r8, smallvec![r0, c1], 0x1000,
                ))],
                catch_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd, r0, smallvec![r0, c1], 0x1010,
                ))],
            },
            HirNode::Return(Some(sv(8, 4))),
        ];

        let func = make_func("try_indent", body);
        let output = print_c(&func);

        let try_line = output.lines().find(|l| l.contains("__try")).expect("__try line");
        assert!(
            try_line.starts_with("    __try"),
            "try should be indented one level: {try_line:?}",
        );

        let except_line = output.lines().find(|l| l.contains("__except")).expect("__except line");
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
        assert!(
            !output.contains("!="),
            "BoolXor must not emit !=: {output}",
        );
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
        let rhs = output.lines().find(|l| l.contains("~")).expect("line with ~");
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
        assert!(output.contains("LOBYTE("), "SUBPIECE(x,0) size=1 should emit LOBYTE: {output}");
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
        assert!(output.contains("BYTE1("), "SUBPIECE(x,1) size=1 should emit BYTE1: {output}");
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
        assert!(output.contains("LODWORD("), "SUBPIECE(x,0) size=4 should emit LODWORD: {output}");
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
        assert!(output.contains("HIDWORD("), "SUBPIECE(x,4) size=4 should emit HIDWORD: {output}");
    }

    #[test]
    fn test_subpiece_macros_in_prelude() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("prelude_test", body);
        let output = print_c(&func);
        assert!(output.contains("#define LOBYTE"), "prelude should contain LOBYTE macro: {output}");
        assert!(output.contains("#define BYTE1"), "prelude should contain BYTE1 macro: {output}");
        assert!(output.contains("#define BYTE2"), "prelude should contain BYTE2 macro: {output}");
        assert!(output.contains("#define BYTE3"), "prelude should contain BYTE3 macro: {output}");
        assert!(output.contains("#define LOWORD"), "prelude should contain LOWORD macro: {output}");
        assert!(output.contains("#define HIWORD"), "prelude should contain HIWORD macro: {output}");
        assert!(output.contains("#define LODWORD"), "prelude should contain LODWORD macro: {output}");
        assert!(output.contains("#define HIDWORD"), "prelude should contain HIDWORD macro: {output}");
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
                IrOp::IntMult, v, smallvec![v, c3], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("mul_assign", body);
        let output = print_c(&func);
        assert!(output.contains("v1 *= 3;"), "should emit v1 *= 3: {output}");
    }

    #[test]
    fn test_compound_shl_assign() {
        let v = reg(0, 4);
        let c2 = con(2, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntLeft, v, smallvec![v, c2], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("shl_assign", body);
        let output = print_c(&func);
        assert!(output.contains("v1 <<= 2;"), "should emit v1 <<= 2: {output}");
    }

    #[test]
    fn test_compound_and_assign() {
        let v = reg(0, 4);
        let mask = reg(8, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAnd, v, smallvec![v, mask], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("and_assign", body);
        let output = print_c(&func);
        assert!(output.contains("v1 &= v2;"), "should emit v1 &= v2: {output}");
    }

    #[test]
    fn test_compound_or_assign() {
        let v = reg(0, 4);
        let flag = reg(8, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntOr, v, smallvec![v, flag], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("or_assign", body);
        let output = print_c(&func);
        assert!(output.contains("v1 |= v2;"), "should emit v1 |= v2: {output}");
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
                IrOp::IntSless, cmp_out, smallvec![a, b], 0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate, neg_out, smallvec![cmp_out], 0x1004,
            )),
            HirNode::Return(Some(SsaVarnode { base: neg_out, version: 0 })),
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
                IrOp::IntEqual, cmp_out, smallvec![a, b], 0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate, neg_out, smallvec![cmp_out], 0x1004,
            )),
            HirNode::Return(Some(SsaVarnode { base: neg_out, version: 0 })),
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
                IrOp::BoolNegate, r0, smallvec![r0], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("negate_plain", body);
        let output = print_c(&func);
        assert!(
            output.contains("!v1"),
            "!flag should remain as !flag: {output}",
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
                IrOp::IntCarry, out, smallvec![r0, r8], 0x1000,
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
                IrOp::IntScarry, out, smallvec![r0, r8], 0x1000,
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
                IrOp::IntSborrow, out, smallvec![r0, r8], 0x1000,
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
                IrOp::IntDiv, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("unsigned_div", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 / (unsigned __int32)v2"),
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
                IrOp::IntSdiv, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("signed_div", body);
        let output = print_c(&func);
        assert!(
            output.contains("v1 / v2"),
            "IntSdiv should NOT cast to unsigned: {output}",
        );
        let div_line = output.lines().find(|l| l.contains("/")).expect("div line");
        let body_output: String = output.lines()
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
                IrOp::IntRight, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("unsigned_shift", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 >> v2"),
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
                IrOp::IntSright, out, smallvec![r0, r8], 0x1000,
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
                IrOp::IntLess, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("unsigned_less", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 < (unsigned __int32)v2"),
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
                IrOp::IntSless, out, smallvec![r0, r8], 0x1000,
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
                IrOp::IntRem, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 8))),
        ];
        let func = make_func("unsigned_rem", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int64)v1 % (unsigned __int64)v2"),
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
                IrOp::IntLessequal, out, smallvec![r0, r8], 0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("unsigned_leq", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 <= (unsigned __int32)v2"),
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntLeft, tmp, smallvec![a, b], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, out, smallvec![tmp, c], 0x1004)),
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, tmp, smallvec![a, b], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntMult, out, smallvec![tmp, c], 0x1004)),
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, tmp, smallvec![a, b], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, out, smallvec![tmp, c], 0x1004)),
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntOr, tmp, smallvec![a, b], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntAnd, out, smallvec![tmp, c], 0x1004)),
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, tmp, smallvec![a, b], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::Int2comp, out, smallvec![tmp], 0x1004)),
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
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

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
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 8))),
        ];

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
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

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
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 1))),
        ];

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
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 2))),
        ];

        let func = make_func("global_word", body);
        let output = print_c(&func);

        assert!(
            output.contains("word_602000"),
            "2-byte load from 0x602000 should emit word_602000: {output}",
        );
    }

    #[test]
    fn test_global_store_naming() {
        let space = con(0, 8);
        let addr = con(0x604000, 8);
        let r0 = reg(0, 4);

        let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr, r0], 0x1000);
        let body = vec![
            HirNode::Statement(store),
            HirNode::Return(None),
        ];

        let func = make_func("global_store", body);
        let output = print_c(&func);

        assert!(
            output.contains("dword_604000 = v1;"),
            "STORE to 0x604000 should emit dword_604000: {output}",
        );
    }

    #[test]
    fn test_no_global_for_small_addr() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

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
    // P4-8/P4-9: Symbol table threading + CALL resolution tests
    // -------------------------------------------------------------------

    #[test]
    fn test_call_with_symbol_resolved() {
        let target_addr = con(0x401030, 8);

        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![
            HirNode::Statement(call_insn),
            HirNode::Return(None),
        ];

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
    fn test_call_without_symbol_keeps_sub() {
        let target_addr = con(0x402000, 8);

        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![
            HirNode::Statement(call_insn),
            HirNode::Return(None),
        ];

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
    fn test_symbols_passed_through_pipeline_header() {
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401030, "printf".to_string());

        let target_addr = con(0x401030, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![
            HirNode::Statement(call_insn),
            HirNode::Return(None),
        ];

        let func = make_func("caller", body);

        let header = super::FunctionHeaderInfo {
            name: "caller".to_string(),
            address: 0x1000,
            size: 0x20,
            convention: "unknown".to_string(),
            stack_frame: 0,
            callees: vec!["printf".to_string()],
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
        let sig_line = output.lines().find(|l| l.contains("sub_401000(")).expect("function sig");
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
        };

        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            !output.contains("__fastcall"),
            "unknown convention should NOT have __fastcall: {output}",
        );
        let sig_line = output.lines().find(|l| l.contains("sub_500000(")).expect("function sig");
        assert!(
            sig_line.starts_with("int sub_500000("),
            "unknown convention should have no annotation: {sig_line}",
        );
    }

    // -------------------------------------------------------------------
    // P4-16: Array subscript recovery tests
    // -------------------------------------------------------------------

    #[test]
    fn test_array_subscript_basic() {
        // LOAD with INT_ADD(base, INT_MULT(i, 4)), size=4 → base[i]
        let space = con(0, 8);
        let base = reg(0, 8);
        let idx = reg(8, 8);
        let stride = con(4, 8);
        let mult_out = Varnode::unique(100, 8);
        let add_out = Varnode::unique(200, 8);
        let load_out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![idx, stride], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, add_out, smallvec![base, mult_out], 0x1004)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, load_out, smallvec![space, add_out], 0x1008)),
            HirNode::Return(Some(SsaVarnode { base: load_out, version: 0 })),
        ];

        let func = make_func("array_basic", body);
        let output = print_c(&func);

        assert!(
            output.contains("v3[v1]"),
            "should emit base[index] (base=v3, idx=v1): {output}",
        );
        assert!(
            !output.contains("*(_DWORD *)"),
            "should NOT fall back to pointer dereference: {output}",
        );
    }

    #[test]
    fn test_array_subscript_ptradd() {
        // PTRADD(base, i, 4) used as LOAD address, size=4 → base[i]
        let space = con(0, 8);
        let base = reg(0, 8);
        let idx = reg(8, 8);
        let stride = con(4, 8);
        let ptradd_out = Varnode::unique(100, 8);
        let load_out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Ptradd, ptradd_out, smallvec![base, idx, stride], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, load_out, smallvec![space, ptradd_out], 0x1004)),
            HirNode::Return(Some(SsaVarnode { base: load_out, version: 0 })),
        ];

        let func = make_func("array_ptradd", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1[v2]"),
            "PTRADD should emit base[index]: {output}",
        );
    }

    #[test]
    fn test_array_constant_index() {
        // *(base + 16) load 4 bytes → base[4]
        let space = con(0, 8);
        let base = reg(0, 8);
        let offset = con(16, 8);
        let add_out = Varnode::unique(100, 8);
        let load_out = reg(8, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, add_out, smallvec![base, offset], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, load_out, smallvec![space, add_out], 0x1004)),
            HirNode::Return(Some(SsaVarnode { base: load_out, version: 0 })),
        ];

        let func = make_func("array_const_idx", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1[4]"),
            "constant offset 16 / stride 4 should emit base[4]: {output}",
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
            HirNode::Statement(IrInsn::with_output(IrOp::IntMult, mult_out, smallvec![idx, stride], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::IntAdd, add_out, smallvec![base, mult_out], 0x1004)),
            HirNode::Statement(IrInsn::with_output(IrOp::Load, load_out, smallvec![space, add_out], 0x1008)),
            HirNode::Return(Some(SsaVarnode { base: load_out, version: 0 })),
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
    // P4-23: CALLOTHER resolution tests
    // -------------------------------------------------------------------

    #[test]
    fn test_callother_resolved() {
        let r0 = reg(0, 16);
        let r16 = reg(16, 16);
        let out = reg(32, 16);
        let tag = con(0x110, 8); // PADDB

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Callother, out, smallvec![tag, r0, r16], 0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: out, version: 0 })),
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
                IrOp::Callother, out, smallvec![tag, r0], 0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: out, version: 0 })),
        ];

        let func = make_func("sse_unknown", body);
        let output = print_c(&func);

        assert!(
            output.contains("/* CALLOTHER 57005 */"),
            "unknown tag should have CALLOTHER comment with decimal tag: {output}",
        );
    }

    #[test]
    fn test_callother_no_output_resolved() {
        let r0 = reg(0, 16);
        let r16 = reg(16, 16);
        let tag = con(0x100, 8); // MOVDQA store form

        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother, smallvec![tag, r0, r16], 0x1000,
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

    // -------------------------------------------------------------------
    // P4-24: Constant folding tests
    // -------------------------------------------------------------------

    #[test]
    fn test_xor_self_becomes_zero() {
        let r0 = reg(0, 4);
        let out = reg(8, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntXor, out, smallvec![r0, r0], 0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: out, version: 0 })),
        ];

        let func = make_func("xor_self", body);
        let output = print_c(&func);

        assert!(
            output.contains("v2 = 0;"),
            "XOR(v, v) should fold to 0: {output}",
        );
        let xor_line = output.lines().find(|l| l.contains("v2 ="));
        assert!(
            xor_line.map_or(false, |l| !l.contains("^")),
            "XOR-self should not contain ^ in assignment: {output}",
        );
    }

    #[test]
    fn test_popcount_zero_folded() {
        let r0 = reg(0, 4);
        let zero = con(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Popcount, r0, smallvec![zero], 0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("popcount_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1 = 0;"),
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
                IrOp::IntAnd, out, smallvec![r0, zero], 0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: out, version: 0 })),
        ];

        let func = make_func("and_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("v2 = 0;"),
            "v & 0 should fold to 0: {output}",
        );
    }

    #[test]
    fn test_or_zero_identity() {
        let r0 = reg(0, 4);
        let out = reg(8, 4);
        let zero = con(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntOr, out, smallvec![r0, zero], 0x1000,
            )),
            HirNode::Return(Some(SsaVarnode { base: out, version: 0 })),
        ];

        let func = make_func("or_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("v2 = v1;"),
            "v | 0 should fold to v: {output}",
        );
        let or_line = output.lines().find(|l| l.contains("v2 ="));
        assert!(
            or_line.map_or(false, |l| !l.contains("|")),
            "or-zero should not contain | in assignment: {output}",
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

        let cmp = IrInsn::with_output(
            IrOp::IntEqual, r8, smallvec![r0, zero], 0x1000,
        );
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Ptradd, r0, smallvec![r0, zero], 0x0FF0,
            )),
            HirNode::Statement(cmp),
            HirNode::Return(Some(SsaVarnode { base: r8, version: 0 })),
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
                IrOp::IntAdd, r0, smallvec![r0, big], 0x1000,
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

    #[test]
    fn test_nullptr_copy_to_pointer() {
        let ptr_vn = reg(0, 8);
        let zero = con(0, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Ptradd, ptr_vn, smallvec![ptr_vn, zero], 0x0FF0,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy, ptr_vn, smallvec![zero], 0x1000,
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
}