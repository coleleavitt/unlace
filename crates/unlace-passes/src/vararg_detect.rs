//! Varargs detection from call-site patterns.
//!
//! Two complementary signals fire here:
//!
//! 1. **Call-site prototypes.** [`detect_variadic_callees`] guesses each
//!    callee's prototype from what its call sites set up
//!    ([`crate::callee_guess`]): the minimum arity over the sites, variadic
//!    when every site sets the System V vector-register count in AL.
//!
//! 2. **Printf-family format parsing.** When the callee is a known
//!    printf-style libc function and the call site supplies a constant
//!    string-table address as its first argument, we parse the format
//!    string and record the inferred type of each `%`-conversion slot in
//!    [`SsaFunction::variadic_call_types`].
//!
//! 3. **Variadic definitions.** [`detect_variadic_definition`] decides
//!    whether a function *itself* takes `...`, and how many named
//!    parameters precede it, from a known prototype or from the
//!    `va_start` register save area its prologue spills
//!    ([`detect_register_save_area`]).
//!
//! Mirrors IDA's `dump_func_type_data` (`research/decompiled-references/ida/idalib/all/`)
//! which also marks signatures as variadic and decorates printf call
//! sites with per-slot types pulled from the format string.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::signature::FunctionSignatureRegistry;
use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, Variadic, VarnodeSlot};
use unlace_ir::stack::StackSpec;
use unlace_ir::xref::CallGraph;
use unlace_ir::{ArchId, BlockId, Function, IrInsn, IrOp, OsAbi, SpaceId, Varnode};

use crate::call_args::calling_convention_for;
use crate::callee_guess::{CallSiteArgs, call_window, collect_call_sites, guess_from_call_sites};
use crate::libc_signatures::lookup_libc_normalized;

const RAX: u64 = 0;
const RDI: u64 = 56;
const RSI: u64 = 48;
const RDX: u64 = 16;
const RCX: u64 = 8;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_INT_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_INT_REGS: &[u64] = &[RCX, RDX, R8, R9];

fn arg_regs(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_INT_REGS,
        CallingConvention::MicrosoftX64 => MSX64_INT_REGS,
        _ => SYSV_INT_REGS,
    }
}

/// Whole-program call-site prototype guessing.
///
/// Collects every direct call of each callee in the call graph
/// ([`collect_call_sites`]) and merges the guess
/// [`guess_from_call_sites`] makes from them into the callee's registry
/// entry: the fixed arity is the minimum the call sites show, and the guess
/// is variadic when every site sets the System V vector-register count.
/// Better-ranked entries keep their shape (see
/// [`FunctionSignature::merge`](unlace_ir::signature::FunctionSignature::merge)).
///
/// Returns `true` if any signature in `registry` changed.
pub fn detect_variadic_callees(
    funcs: &BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    registry: &mut FunctionSignatureRegistry,
) -> bool {
    let mut sites: BTreeMap<u64, (CallingConvention, Vec<CallSiteArgs>)> = BTreeMap::new();
    for (&caller_addr, ssa) in funcs {
        let callees = call_graph.callees_of(caller_addr);
        let Some(spec) = StackSpec::for_arch(ssa.arch) else {
            continue;
        };
        let cc = calling_convention_for(ssa);
        for site in collect_call_sites(&ssa.function, cc, spec.sp.offset) {
            if !callees.contains(&site.target) {
                continue;
            }
            let (site_cc, args) = sites.entry(site.target).or_insert((cc, Vec::new()));
            if *site_cc == cc {
                args.push(site.args);
            }
        }
    }

    let mut changed = false;
    for (callee, (cc, args)) in sites {
        let Some(guess) = guess_from_call_sites(cc, &args) else {
            continue;
        };
        match registry.get_mut(&callee) {
            Some(entry) => changed |= entry.merge(&guess),
            None => {
                registry.insert(callee, guess);
                changed = true;
            }
        }
    }
    changed
}

/// Recover the per-slot variadic argument types for printf-style call
/// sites within `ssa`. `string_table` maps absolute addresses of
/// read-only string constants to their byte content. Merges newly
/// recovered entries into `ssa.variadic_call_types` (additive — never
/// drops a previously-recorded site) and returns `true` if any entry was
/// inserted or modified.
///
/// The additive contract is load-bearing: this function is invoked
/// twice on the canonical pipeline path — once on the raw post-SSA IR
/// (where the format-string `Copy(reg, …)` pattern is intact) and a
/// second time after `run_passes` (where copyprop / sccp may have
/// folded the pattern away). The second call must not clobber what the
/// first observed.
pub fn parse_printf_format_strings(
    ssa: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<&'static str>,
    string_table: &BTreeMap<u64, String>,
) -> bool {
    let cc = if matches!(ssa.calling_convention, CallingConvention::Unknown) {
        CallingConvention::SystemV
    } else {
        ssa.calling_convention
    };

    let mut changed = false;

    let block_ids: Vec<BlockId> = ssa.function.blocks.keys().copied().collect();
    for bid in block_ids {
        let insns_snapshot = match ssa.function.blocks.get(&bid) {
            Some(b) => b.insns.clone(),
            None => continue,
        };
        for (idx, insn) in insns_snapshot.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(t) = insn.inputs.first() else {
                continue;
            };
            if t.space != SpaceId::Const {
                continue;
            }
            let Some(name) = callee_name_at_addr(t.offset) else {
                continue;
            };
            let Some(libc) = lookup_libc_normalized(name) else {
                continue;
            };
            let Some(format_arg_index) = printf_format_index(libc.name) else {
                continue;
            };
            let format_string = insn
                .inputs
                .get(1 + format_arg_index)
                .filter(|vn| vn.space == SpaceId::Const)
                .and_then(|vn| string_table.get(&vn.offset).cloned())
                .or_else(|| {
                    // The setup may sit before an exception dispatch block
                    // that splits the call off into its own block.
                    let window: Vec<IrInsn> = call_window(&ssa.function, bid, idx)
                        .into_iter()
                        .cloned()
                        .collect();
                    find_constant_arg(&window, window.len(), format_arg_index, cc)
                        .and_then(|addr| string_table.get(&addr).cloned())
                });
            let Some(fmt) = format_string else { continue };
            let FormatScan { args, complete } = scan_format(&fmt);
            // The format decides how many variadic arguments the call
            // passes; argument registers past them only happened to be live.
            let max_inputs = 1 + libc.param_count + args.len();
            if complete && insn.inputs.len() > max_inputs {
                if let Some(call) = ssa
                    .function
                    .blocks
                    .get_mut(&bid)
                    .and_then(|b| b.insns.get_mut(idx))
                {
                    call.inputs.truncate(max_inputs);
                }
                for input_idx in max_inputs..insn.inputs.len() {
                    ssa.var_map
                        .remove(&(bid, idx, VarnodeSlot::Input(input_idx)));
                }
                changed = true;
            }
            if args.is_empty() {
                continue;
            }
            let key = (bid, idx);
            match ssa.variadic_call_types.get(&key) {
                Some(existing) if existing == &args => {}
                _ => {
                    ssa.variadic_call_types.insert(key, args);
                    changed = true;
                }
            }
        }
    }

    changed
}

/// Index (0-based) of the format-string argument among the named
/// parameters of a printf-family libc function; `None` for every other
/// function, variadic or not.
fn printf_format_index(name: &str) -> Option<usize> {
    Some(match name {
        "printf" | "warn" | "warnx" => 0,
        "sprintf" | "fprintf" | "dprintf" | "asprintf" | "syslog" => 1,
        "snprintf" => 2,
        // glibc FORTIFY variants put a flag (and for the buffer forms, the
        // object size) before the format.
        "__printf_chk" => 1,
        "__fprintf_chk" => 2,
        "__sprintf_chk" => 3,
        "__snprintf_chk" => 4,
        _ => return None,
    })
}

/// Walk back from `call_idx` and find the most recent assignment to the
/// `arg_index`-th argument register; returns the absolute string-table
/// address embedded in that assignment, if one can be recovered.
///
/// Two patterns are recognised:
///
/// 1. **Direct constant** — `Copy(reg, const)`. Returns the constant.
/// 2. **PIE base-relative load** — `Copy(reg, t)` where `t` is defined
///    earlier in the same block as `IntAdd(base, const)` with one
///    constant operand. The lifter encodes `lea reg, [rip+disp]` this
///    way for position-independent ELF; the loader normalises `disp`
///    to a string-table-resolvable VA so the constant alone suffices.
///
/// Only the immediately preceding write to `target_reg` is consulted —
/// any other write (an unrecognised op, a non-constant source) means
/// a non-format-string path reached the call site and we give up.
fn find_constant_arg(
    insns: &[unlace_ir::IrInsn],
    call_idx: usize,
    arg_index: usize,
    cc: CallingConvention,
) -> Option<u64> {
    let regs = arg_regs(cc);
    let target_reg = *regs.get(arg_index)?;

    let mut write_idx: Option<usize> = None;
    for (idx, insn) in insns[..call_idx].iter().enumerate().rev() {
        let Some(out) = insn.output else { continue };
        if out.space == SpaceId::Register && out.offset == target_reg {
            write_idx = Some(idx);
            break;
        }
    }
    let write_idx = write_idx?;
    let writer = &insns[write_idx];
    if !matches!(writer.op, IrOp::Copy) {
        return None;
    }
    let src = writer.inputs.first()?;

    if src.space == SpaceId::Const {
        return Some(src.offset);
    }

    for prior in insns[..write_idx].iter().rev() {
        let Some(out) = prior.output else { continue };
        if out.space != src.space || out.offset != src.offset || out.size != src.size {
            continue;
        }
        if !matches!(prior.op, IrOp::IntAdd) {
            return None;
        }
        let consts: Vec<u64> = prior
            .inputs
            .iter()
            .filter(|v| v.space == SpaceId::Const)
            .map(|v| v.offset)
            .collect();
        if consts.len() == 1 {
            return Some(consts[0]);
        }
        return None;
    }
    None
}

/// Parse a C printf-style format string, returning the inferred
/// [`PrimitiveType`] for each `%`-conversion in order. Recognises a
/// useful subset of conversions:
///
/// * `%d`, `%i`, `%u`, `%x`, `%o`     ⇒ `Int(4)`
/// * `%lld`, `%ld` (with `l` length)   ⇒ `Int(8)`
/// * `%hd`                              ⇒ `Int(2)`
/// * `%hhd`                             ⇒ `Int(1)`
/// * `%f`, `%g`, `%e`, `%lf`            ⇒ `Double`
/// * `%s`, `%p`                         ⇒ `Ptr`
/// * `%c`                               ⇒ `Int(1)`
/// * `%%`                               ⇒ skipped (literal `%`)
///
/// Width / precision / flags are tolerated and skipped.
pub fn parse_format_string(fmt: &str) -> Vec<PrimitiveType> {
    scan_format(fmt).args
}

/// Variadic arguments a format string consumes.
struct FormatScan {
    /// Inferred type of each argument, in order.
    args: Vec<PrimitiveType>,
    /// Every conversion was understood, so `args` is the exact argument
    /// count (no positional `%n$` forms or unknown conversions).
    complete: bool,
}

fn scan_format(fmt: &str) -> FormatScan {
    let mut out = Vec::new();
    let mut complete = true;
    let bytes = fmt.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] != b'%' {
            i += 1;
            continue;
        }
        i += 1;
        if i >= bytes.len() {
            complete = false;
            break;
        }
        if bytes[i] == b'%' {
            i += 1;
            continue;
        }

        // Skip flags
        while i < bytes.len() && matches!(bytes[i], b'-' | b'+' | b' ' | b'#' | b'0') {
            i += 1;
        }
        // Skip width digits / `*`
        while i < bytes.len() && bytes[i].is_ascii_digit() {
            i += 1;
        }
        // Positional arguments (`%2$d`) do not consume slots in order.
        if bytes.get(i) == Some(&b'$') {
            complete = false;
            break;
        }
        if i < bytes.len() && bytes[i] == b'*' {
            out.push(PrimitiveType::Int(4));
            i += 1;
        }
        // Skip precision: `.` then digits or `*`
        if i < bytes.len() && bytes[i] == b'.' {
            i += 1;
            while i < bytes.len() && bytes[i].is_ascii_digit() {
                i += 1;
            }
            if i < bytes.len() && bytes[i] == b'*' {
                out.push(PrimitiveType::Int(4));
                i += 1;
            }
        }

        // Length modifier
        let mut length = LengthMod::None;
        match bytes.get(i).copied() {
            Some(b'l') => {
                if bytes.get(i + 1).copied() == Some(b'l') {
                    length = LengthMod::LongLong;
                    i += 2;
                } else {
                    length = LengthMod::Long;
                    i += 1;
                }
            }
            Some(b'h') => {
                if bytes.get(i + 1).copied() == Some(b'h') {
                    length = LengthMod::HalfHalf;
                    i += 2;
                } else {
                    length = LengthMod::Half;
                    i += 1;
                }
            }
            Some(b'L') | Some(b'q') => {
                length = LengthMod::LongLong;
                i += 1;
            }
            Some(b'z') | Some(b'j') | Some(b't') => {
                length = LengthMod::Long;
                i += 1;
            }
            _ => {}
        }

        // Conversion specifier
        let Some(&conv) = bytes.get(i) else {
            complete = false;
            break;
        };
        i += 1;
        match conv {
            b'd' | b'i' | b'u' | b'x' | b'X' | b'o' | b'b' => {
                let w = match length {
                    LengthMod::None => 4,
                    LengthMod::Half => 2,
                    LengthMod::HalfHalf => 1,
                    LengthMod::Long | LengthMod::LongLong => 8,
                };
                out.push(PrimitiveType::Int(w));
            }
            b'f' | b'F' | b'e' | b'E' | b'g' | b'G' | b'a' | b'A' => {
                out.push(PrimitiveType::Double);
            }
            b's' | b'S' | b'p' | b'n' => out.push(PrimitiveType::Ptr),
            b'c' => out.push(PrimitiveType::Int(1)),
            b'C' => out.push(PrimitiveType::Int(4)),
            // glibc `%m` prints `strerror(errno)` and takes no argument.
            b'm' => {}
            _ => complete = false,
        }
    }
    FormatScan {
        args: out,
        complete,
    }
}

/// Decide whether a function definition takes `...`, and how many named
/// parameters precede it.
///
/// A known prototype for `name` (libc, which also covers names recovered by
/// FLIRT) is authoritative; otherwise the prologue's register save area is
/// the evidence ([`detect_register_save_area`]).
pub fn detect_variadic_definition(
    name: &str,
    func: &Function,
    arch: ArchId,
    os_abi: OsAbi,
) -> Option<Variadic> {
    if let Some(sig) = lookup_libc_normalized(name) {
        return sig.variadic.then_some(Variadic {
            fixed_params: sig.param_count,
        });
    }
    detect_register_save_area(func, arch, os_abi)
}

/// Recognise the register save area that `va_start` makes a variadic
/// function spill in its entry block, and recover the number of named
/// parameters from where the spilled run starts.
///
/// * System V x86-64: the unnamed argument registers `RDI..R9` from slot
///   `k` on are stored to consecutive 8-byte slots, the run ending at `R9`.
///   The function also reads `AL` (the caller's vector-register count)
///   before writing `RAX`, builds a `va_list` (the entry block takes the
///   addresses of the save area and of the stack-passed arguments), or
///   initialises `gp_offset` to `8 * k`.
/// * AAPCS64: `Xk..X7` are stored to consecutive 8-byte slots. The entry
///   block also saves the `Q` registers or builds a `va_list` (`__gr_top`
///   and `__stack`), or the function mentions `__gr_offs`, `-8 * (8 - k)`.
/// * Microsoft x64: `RDX..R9` from slot `k` on are spilled to their home
///   slots and the entry block takes the address of home slot `k`, which is
///   where `va_start` points.
///
/// Named parameters are counted in integer-register slots; a named
/// floating-point parameter does not move the run and is not counted.
pub fn detect_register_save_area(func: &Function, arch: ArchId, os_abi: OsAbi) -> Option<Variadic> {
    let sp = StackSpec::for_arch(arch)?.sp;
    let entry = func.blocks.get(&func.entry)?;
    let fixed_params = match (arch, os_abi) {
        (ArchId::X86_64, OsAbi::Windows) => {
            let spills = EntrySpills::scan(&entry.insns, sp, MSX64_INT_REGS, None);
            msx64_save_area(&spills)?
        }
        (ArchId::X86_64, _) => {
            let spills = EntrySpills::scan(&entry.insns, sp, SYSV_INT_REGS, None);
            let k = save_area_start(&spills.arg_slots, SYSV_INT_REGS.len())?;
            let base = spills.arg_slots[&k] - 8 * k as i64;
            // A lone `R9` spill next to a `RAX` read is as likely a sixth
            // parameter's home slot; the `AL` signal needs a longer run.
            let run_len = SYSV_INT_REGS.len() - k;
            let evidence = (spills.reads_rax_first && run_len >= 2)
                || spills.builds_va_list(base, 8)
                || stores_sysv_gp_offset(func, 8 * k as u64);
            evidence.then_some(k)?
        }
        (ArchId::AArch64, _) => {
            let spills = EntrySpills::scan(
                &entry.insns,
                sp,
                AARCH64_INT_REGS,
                Some(AARCH64_VECTOR_BANK),
            );
            let k = save_area_start(&spills.arg_slots, AARCH64_INT_REGS.len())?;
            let base = spills.arg_slots[&k] - 8 * k as i64;
            let gr_offs = (-8 * (8 - k as i64)) as u32;
            let evidence = spills.vector_stores >= 2
                || spills.builds_va_list(base + 64, 0)
                || mentions_low32(func, gr_offs);
            evidence.then_some(k)?
        }
        _ => return None,
    };
    tracing::debug!(
        target: "unlace::calling",
        "variadic-save-area func={} arch={arch:?} fixed_params={fixed_params}",
        func.name
    );
    Some(Variadic { fixed_params })
}

const AARCH64_INT_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];
/// `Q0..Q7` in the AArch64 vector bank (32-byte stride from offset 280).
const AARCH64_VECTOR_BANK: std::ops::Range<u64> = 280..280 + 8 * 32;

/// What an entry block stores to its own frame.
struct EntrySpills {
    /// First entry-SP-relative slot each argument register (by slot index)
    /// is stored to while it still holds the incoming value.
    arg_slots: BTreeMap<usize, i64>,
    /// Entry-SP-relative addresses written to a register or stored as data.
    escaped_addrs: BTreeSet<i64>,
    /// 16-byte stores of registers in the vector bank.
    vector_stores: usize,
    /// `RAX`/`AL` is read, other than by a store, before anything writes it.
    reads_rax_first: bool,
}

impl EntrySpills {
    fn scan(
        insns: &[IrInsn],
        sp: Varnode,
        arg_regs: &[u64],
        vector_bank: Option<std::ops::Range<u64>>,
    ) -> Self {
        let mut sp_rel: BTreeMap<(SpaceId, u64), i64> = BTreeMap::new();
        sp_rel.insert((sp.space, sp.offset), 0);
        let mut written: BTreeSet<u64> = BTreeSet::new();
        let mut spills = EntrySpills {
            arg_slots: BTreeMap::new(),
            escaped_addrs: BTreeSet::new(),
            vector_stores: 0,
            reads_rax_first: false,
        };
        for insn in insns {
            if insn.op != IrOp::Store
                && !written.contains(&RAX)
                && insn
                    .inputs
                    .iter()
                    .any(|vn| vn.space == SpaceId::Register && vn.offset == RAX)
            {
                spills.reads_rax_first = true;
            }
            if insn.op == IrOp::Store
                && let [_, addr, value] = insn.inputs.as_slice()
            {
                if let Some(&slot) = sp_rel.get(&(addr.space, addr.offset))
                    && value.space == SpaceId::Register
                {
                    if let Some(idx) = arg_regs.iter().position(|&r| r == value.offset)
                        && value.size == 8
                        && !written.contains(&value.offset)
                    {
                        spills.arg_slots.entry(idx).or_insert(slot);
                    }
                    if value.size == 16
                        && vector_bank
                            .as_ref()
                            .is_some_and(|bank| bank.contains(&value.offset))
                    {
                        spills.vector_stores += 1;
                    }
                }
                if let Some(&escaped) = sp_rel.get(&(value.space, value.offset)) {
                    spills.escaped_addrs.insert(escaped);
                }
            }
            let Some(out) = insn.output else { continue };
            let key = (out.space, out.offset);
            match sp_relative_result(insn, &sp_rel) {
                Some(value) => {
                    if out.space == SpaceId::Register && key != (sp.space, sp.offset) {
                        spills.escaped_addrs.insert(value);
                    }
                    sp_rel.insert(key, value);
                }
                None => {
                    sp_rel.remove(&key);
                }
            }
            if out.space == SpaceId::Register {
                written.insert(out.offset);
            }
        }
        spills
    }

    /// `va_start` materialises two frame addresses: one into the register
    /// save area (`reg_save_area` / `__gr_top`) and the first stack-passed
    /// argument (`overflow_arg_area` / `__stack`, at `stack_args` from the
    /// entry stack pointer).
    fn builds_va_list(&self, save_area_addr: i64, stack_args: i64) -> bool {
        self.escaped_addrs.contains(&save_area_addr) && self.escaped_addrs.contains(&stack_args)
    }
}

/// Entry-SP-relative value of `insn`'s output when it is a constant offset
/// from a tracked stack address.
fn sp_relative_result(insn: &IrInsn, sp_rel: &BTreeMap<(SpaceId, u64), i64>) -> Option<i64> {
    let tracked = |vn: &Varnode| sp_rel.get(&(vn.space, vn.offset)).copied();
    let constant = |vn: &Varnode| (vn.space == SpaceId::Const).then(|| sign_extend(vn));
    match (insn.op, insn.inputs.as_slice()) {
        (IrOp::Copy, [src]) => tracked(src),
        (IrOp::IntAdd, [a, b]) => match (tracked(a), tracked(b)) {
            (Some(base), None) => Some(base.wrapping_add(constant(b)?)),
            (None, Some(base)) => Some(base.wrapping_add(constant(a)?)),
            _ => None,
        },
        (IrOp::IntSub, [a, b]) => Some(tracked(a)?.wrapping_sub(constant(b)?)),
        _ => None,
    }
}

fn sign_extend(vn: &Varnode) -> i64 {
    let bits = u32::from(vn.size).saturating_mul(8);
    if bits == 0 || bits >= 64 {
        vn.offset as i64
    } else {
        ((vn.offset << (64 - bits)) as i64) >> (64 - bits)
    }
}

/// Slot index where the register save area starts: the run of argument
/// registers stored at consecutive 8-byte slots that ends at the last
/// argument register. `None` when the last register is not spilled or the
/// run covers every register (nothing left to be named).
fn save_area_start(arg_slots: &BTreeMap<usize, i64>, reg_count: usize) -> Option<usize> {
    let last = reg_count - 1;
    let base = arg_slots.get(&last)? - 8 * last as i64;
    let mut start = last;
    while start > 0 && arg_slots.get(&(start - 1)) == Some(&(base + 8 * (start as i64 - 1))) {
        start -= 1;
    }
    (start > 0).then_some(start)
}

/// System V `va_start` stores `gp_offset` (`8 * named`), either alone as a
/// 32-bit store or paired with `fp_offset` (`48 + 16 * named_fp`) as one
/// 64-bit constant.
fn stores_sysv_gp_offset(func: &Function, gp_offset: u64) -> bool {
    func.blocks.values().flat_map(|b| &b.insns).any(|insn| {
        let [_, _, value] = insn.inputs.as_slice() else {
            return false;
        };
        if insn.op != IrOp::Store || value.space != SpaceId::Const {
            return false;
        }
        let low = value.offset & 0xffff_ffff;
        let high = value.offset >> 32;
        match value.size {
            4 => low == gp_offset,
            8 => low == gp_offset && (48..=176).contains(&high) && high % 16 == 0,
            _ => false,
        }
    })
}

/// Any constant operand in `func` whose low 32 bits are `value`.
fn mentions_low32(func: &Function, value: u32) -> bool {
    func.blocks
        .values()
        .flat_map(|b| &b.insns)
        .flat_map(|insn| &insn.inputs)
        .any(|vn| vn.space == SpaceId::Const && vn.offset & 0xffff_ffff == u64::from(value))
}

/// Microsoft x64: home slot `i` sits at entry `RSP + 8 + 8 * i`. The named
/// count is the home slot whose address `va_start` takes, provided every
/// later argument register was spilled to its own home slot.
fn msx64_save_area(spills: &EntrySpills) -> Option<usize> {
    let home = |slot: usize| 8 + 8 * slot as i64;
    (1..MSX64_INT_REGS.len()).find(|&k| {
        spills.escaped_addrs.contains(&home(k))
            && (k..MSX64_INT_REGS.len()).all(|i| spills.arg_slots.get(&i) == Some(&home(i)))
    })
}

#[derive(Copy, Clone, Debug)]
enum LengthMod {
    None,
    Half,
    HalfHalf,
    Long,
    LongLong,
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    // -------------------------------------------------------------------
    // Format-string parser
    // -------------------------------------------------------------------

    #[test]
    fn parse_basic_specifiers() {
        assert_eq!(parse_format_string("%d"), vec![PrimitiveType::Int(4)]);
        assert_eq!(parse_format_string("%lld"), vec![PrimitiveType::Int(8)]);
        assert_eq!(
            parse_format_string("%s %p"),
            vec![PrimitiveType::Ptr, PrimitiveType::Ptr]
        );
        assert_eq!(parse_format_string("%f"), vec![PrimitiveType::Double]);
        assert_eq!(
            parse_format_string("plain string with %%"),
            Vec::<PrimitiveType>::new()
        );
        assert_eq!(
            parse_format_string("%hd %hhx"),
            vec![PrimitiveType::Int(2), PrimitiveType::Int(1)]
        );
        assert_eq!(parse_format_string("%5.2f"), vec![PrimitiveType::Double]);
    }

    #[test]
    fn t88_printf_format_drives_arg_types() {
        // Build a function that calls `printf("%d %s", 5, "hi")`. The
        // pass should record `[Int(4), Ptr]` in variadic_call_types.
        let printf_addr: u64 = 0x4040;
        let fmt_addr: u64 = 0x5000;
        let arg2_addr: u64 = 0x6000;

        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 8);
        let rsi = Varnode::reg(RSI, 8);
        let rdx = Varnode::reg(RDX, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![Varnode::constant(fmt_addr, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsi,
            smallvec![Varnode::constant(5, 4)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdx,
            smallvec![Varnode::constant(arg2_addr, 8)],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(printf_addr, 8)],
            0x100c,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1010,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;

        let mut strings: BTreeMap<u64, String> = BTreeMap::new();
        strings.insert(fmt_addr, "%d %s".to_string());

        let resolver = move |addr: u64| -> Option<&'static str> {
            if addr == printf_addr {
                Some("printf")
            } else {
                None
            }
        };

        let changed = parse_printf_format_strings(&mut ssa, &resolver, &strings);
        assert!(changed);

        let entry = ssa
            .variadic_call_types
            .values()
            .next()
            .expect("printf call site should have an entry");
        assert_eq!(entry.len(), 2);
        assert_eq!(entry[0], PrimitiveType::Int(4));
        assert_eq!(entry[1], PrimitiveType::Ptr);
    }

    /// Callers of one target, each setting the first `n` argument
    /// registers and, with `vector_count`, AL right before the call.
    fn callers_of(target: u64, counts: &[(usize, bool)]) -> BTreeMap<u64, SsaFunction> {
        let make_caller = |addr: u64, n: usize, vector_count: bool| -> SsaFunction {
            let mut func = Function::new("c", BlockId(0), addr);
            let mut bb = BasicBlock::new(BlockId(0));
            let regs = [RDI, RSI, RDX];
            for (i, &reg) in regs.iter().take(n).enumerate() {
                let r = Varnode::reg(reg, 8);
                bb.insns.push(IrInsn::with_output(
                    IrOp::Copy,
                    r,
                    smallvec![Varnode::constant(i as u64, 8)],
                    addr + i as u64 * 4,
                ));
            }
            if vector_count {
                bb.insns.push(IrInsn::with_output(
                    IrOp::IntZext,
                    Varnode::reg(RAX, 8),
                    smallvec![Varnode::constant(0, 4)],
                    addr + 0xfc,
                ));
            }
            bb.insns.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(target, 8)],
                addr + 0x100,
            ));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                addr + 0x108,
            ));
            func.insert_block(bb);
            let mut ssa = build_ssa(func);
            ssa.arch = ArchId::X86_64;
            ssa.calling_convention = CallingConvention::SystemV;
            ssa
        };

        let mut funcs = BTreeMap::new();
        for (i, &(n, vector_count)) in counts.iter().enumerate() {
            let addr = 0x1000 * (i as u64 + 1);
            funcs.insert(addr, make_caller(addr, n, vector_count));
        }
        funcs
    }

    fn registry_for(funcs: &BTreeMap<u64, SsaFunction>) -> (bool, FunctionSignatureRegistry) {
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = unlace_ir::xref::build_call_graph(&ir_funcs);
        let mut registry = FunctionSignatureRegistry::new();
        let changed = detect_variadic_callees(funcs, &cg, &mut registry);
        (changed, registry)
    }

    #[test]
    fn t88_variable_arg_count_keeps_the_minimum_fixed_prefix() {
        // caller_a writes 1 arg reg (RDI), caller_b writes 3 (RDI, RSI,
        // RDX). Differing counts alone do not prove `...`: the guess keeps
        // the smallest count as the fixed prefix.
        let target = 0xDEAD_0000u64;
        let (changed, registry) = registry_for(&callers_of(target, &[(1, false), (3, false)]));
        assert!(changed);
        let sig = registry.get(&target).expect("target sig present");
        assert_eq!(sig.params.len(), 1);
        assert!(!sig.variadic);
    }

    #[test]
    fn vector_count_at_every_call_site_marks_variadic() {
        let target = 0xDEAD_0000u64;
        let (_, registry) = registry_for(&callers_of(target, &[(1, true), (3, true)]));
        let sig = registry.get(&target).expect("target sig present");
        assert!(sig.variadic);
        assert_eq!(sig.params.len(), 1);
    }

    // -------------------------------------------------------------------
    // Register save area
    // -------------------------------------------------------------------

    const RSP: u64 = 32;
    const AARCH64_SP: u64 = 248;

    /// Builds one entry block; `sp - frame` is applied first, then each
    /// `(slot, value)` store lands at `sp + slot`.
    struct Prologue {
        sp: u64,
        insns: Vec<IrInsn>,
        next_tmp: u64,
    }

    impl Prologue {
        fn new(sp: u64, frame: u64) -> Self {
            let sp_vn = Varnode::reg(sp, 8);
            let insns = vec![IrInsn::with_output(
                IrOp::IntSub,
                sp_vn,
                smallvec![sp_vn, Varnode::constant(frame, 8)],
                0x1000,
            )];
            Prologue {
                sp,
                insns,
                next_tmp: 0x10000,
            }
        }

        fn sp_plus(&mut self, off: u64) -> Varnode {
            let tmp = Varnode::unique(self.next_tmp, 8);
            self.next_tmp += 8;
            self.insns.push(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![Varnode::reg(self.sp, 8), Varnode::constant(off, 8)],
                0x1000,
            ));
            tmp
        }

        fn store(mut self, off: u64, value: Varnode) -> Self {
            let addr = self.sp_plus(off);
            self.insns.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(1, 8), addr, value],
                0x1000,
            ));
            self
        }

        fn spill(self, off: u64, reg: u64) -> Self {
            self.store(off, Varnode::reg(reg, 8))
        }

        /// `lea rax, [sp + off]; mov [sp + slot], rax`
        fn store_address(mut self, off: u64, slot: u64) -> Self {
            let addr = self.sp_plus(off);
            let rax = Varnode::reg(RAX, 8);
            self.insns.push(IrInsn::with_output(
                IrOp::Copy,
                rax,
                smallvec![addr],
                0x1000,
            ));
            self.store(slot, rax)
        }

        fn read_al(mut self) -> Self {
            self.insns.push(IrInsn::with_output(
                IrOp::Subpiece,
                Varnode::unique(0x20000, 1),
                smallvec![Varnode::reg(RAX, 8), Varnode::constant(0, 1)],
                0x1000,
            ));
            self
        }

        fn build(mut self) -> Function {
            self.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                0x1100,
            ));
            let mut func = Function::new("f", BlockId(0), 0x1000);
            let mut bb = BasicBlock::new(BlockId(0));
            bb.insns = self.insns;
            func.insert_block(bb);
            func
        }
    }

    fn sysv(func: &Function) -> Option<usize> {
        detect_register_save_area(func, ArchId::X86_64, OsAbi::SysV).map(|v| v.fixed_params)
    }

    /// gcc -O2 `long sum_ints(int count, ...)`: RSI..R9 into the save area,
    /// then `gp_offset = 8`, `overflow_arg_area`, `reg_save_area`.
    #[test]
    fn sysv_gcc_save_area_with_va_list() {
        let func = Prologue::new(RSP, 0x58)
            .spill(0x28, RSI)
            .spill(0x30, RDX)
            .spill(0x38, RCX)
            .spill(0x40, R8)
            .spill(0x48, R9)
            .store(0, Varnode::constant(8, 4))
            .store_address(0x60, 0x8)
            .store_address(0x20, 0x10)
            .build();
        assert_eq!(sysv(&func), Some(1));
    }

    /// clang -O2 `int format_into(char *, int, const char *, ...)`: RCX..R9
    /// saved, then `test al, al` guarding the XMM saves.
    #[test]
    fn sysv_clang_save_area_with_al_read() {
        let func = Prologue::new(RSP, 0xf8)
            .spill(0x28, RCX)
            .spill(0x30, R8)
            .spill(0x38, R9)
            .read_al()
            .build();
        assert_eq!(sysv(&func), Some(3));
    }

    /// The `va_list` setup can sit outside the entry block; the 64-bit
    /// `gp_offset | fp_offset << 32` constant store still confirms the area.
    #[test]
    fn sysv_save_area_with_combined_offset_store() {
        let func = Prologue::new(RSP, 0xd8)
            .spill(0x08, RSI)
            .spill(0x10, RDX)
            .spill(0x18, RCX)
            .spill(0x20, R8)
            .spill(0x28, R9)
            .store(0xb0, Varnode::constant(0x30_0000_0008, 8))
            .build();
        assert_eq!(sysv(&func), Some(1));
    }

    /// An ascending spill run without any `va_start` evidence is not enough.
    #[test]
    fn sysv_spill_run_alone_is_not_variadic() {
        let func = Prologue::new(RSP, 0x58)
            .spill(0x28, RSI)
            .spill(0x30, RDX)
            .spill(0x38, RCX)
            .spill(0x40, R8)
            .spill(0x48, R9)
            .build();
        assert_eq!(sysv(&func), None);
    }

    /// `-O0` homes every parameter at descending offsets; that is not a
    /// save area even when the function reads `RAX` first (`push rax`
    /// alignment reads it too).
    #[test]
    fn sysv_descending_param_homes_are_not_variadic() {
        let func = Prologue::new(RSP, 0x40)
            .spill(0x38, RDI)
            .spill(0x30, RSI)
            .spill(0x28, RDX)
            .spill(0x20, RCX)
            .spill(0x18, R8)
            .spill(0x10, R9)
            .read_al()
            .build();
        assert_eq!(sysv(&func), None);
    }

    /// A register overwritten before the spill holds no incoming argument.
    #[test]
    fn sysv_clobbered_register_breaks_the_run() {
        let mut prologue = Prologue::new(RSP, 0x58).spill(0x28, RSI).spill(0x30, RDX);
        prologue.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RCX, 8),
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        let func = prologue
            .spill(0x38, RCX)
            .spill(0x40, R8)
            .spill(0x48, R9)
            .read_al()
            .build();
        assert_eq!(sysv(&func), Some(4));
    }

    /// clang AArch64 `int max_of(int first, ...)`: X1..X7 at consecutive
    /// slots plus the Q0..Q7 saves.
    #[test]
    fn aapcs64_save_area_with_vector_saves() {
        let func = Prologue::new(AARCH64_SP, 0xe0)
            .spill(0x88, 8)
            .spill(0x90, 16)
            .spill(0x98, 24)
            .spill(0xa0, 32)
            .spill(0xa8, 40)
            .spill(0xb0, 48)
            .spill(0xb8, 56)
            .store(0x00, Varnode::reg(280, 16))
            .store(0x10, Varnode::reg(312, 16))
            .build();
        let variadic = detect_register_save_area(&func, ArchId::AArch64, OsAbi::SysV);
        assert_eq!(variadic, Some(Variadic { fixed_params: 1 }));
    }

    /// MSVC `int log(const char *fmt, ...)`: RDX..R9 homed before the frame
    /// is allocated, then `va_start` takes the address of home slot 1.
    #[test]
    fn msx64_home_spills_with_va_start_address() {
        let rsp = Varnode::reg(RSP, 8);
        let mut prologue = Prologue {
            sp: RSP,
            insns: Vec::new(),
            next_tmp: 0x10000,
        }
        .spill(0x10, RDX)
        .spill(0x18, R8)
        .spill(0x20, R9);
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            rsp,
            smallvec![rsp, Varnode::constant(0x28, 8)],
            0x1000,
        ));
        let func = prologue.store_address(0x38, 0x20).build();
        let variadic = detect_register_save_area(&func, ArchId::X86_64, OsAbi::Windows);
        assert_eq!(variadic, Some(Variadic { fixed_params: 1 }));
        // The same body is not System V evidence.
        assert_eq!(sysv(&func), None);
    }

    /// A known libc name settles the question without looking at the body.
    #[test]
    fn known_prototype_decides_definition() {
        let empty = Prologue::new(RSP, 0x8).build();
        let printf = detect_variadic_definition("printf", &empty, ArchId::X86_64, OsAbi::SysV);
        assert_eq!(printf, Some(Variadic { fixed_params: 1 }));
        let snprintf = detect_variadic_definition("_snprintf", &empty, ArchId::X86_64, OsAbi::SysV);
        assert_eq!(snprintf, Some(Variadic { fixed_params: 3 }));
        assert_eq!(
            detect_variadic_definition("strlen", &empty, ArchId::X86_64, OsAbi::SysV),
            None
        );
    }

    /// A fully understood format bounds the variadic arguments: registers
    /// live past them are not arguments of `printf("%d\n", x)`.
    #[test]
    fn format_string_trims_extra_call_args() {
        let printf_addr: u64 = 0x4040;
        let fmt_addr: u64 = 0x5000;
        let call_inputs = |fmt: u64| -> smallvec::SmallVec<[Varnode; 3]> {
            smallvec![
                Varnode::constant(printf_addr, 8),
                Varnode::constant(fmt, 8),
                Varnode::constant(7, 4),
                Varnode::constant(8, 4),
                Varnode::constant(9, 4),
            ]
        };
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            call_inputs(fmt_addr),
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            call_inputs(fmt_addr + 0x10),
            0x1004,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;

        let formats = BTreeMap::from([
            (fmt_addr, "%d\n".to_string()),
            // A positional format cannot be counted in order; keep the args.
            (fmt_addr + 0x10, "%1$d\n".to_string()),
        ]);
        let resolver = |addr: u64| (addr == printf_addr).then_some("printf");
        assert!(parse_printf_format_strings(&mut ssa, &resolver, &formats));

        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns[0].inputs.len(), 3);
        assert_eq!(insns[1].inputs.len(), 5);
    }

    /// `open` is variadic but has no format string to read.
    #[test]
    fn non_format_variadic_call_is_left_alone() {
        let open_addr: u64 = 0x4040;
        let path_addr: u64 = 0x5000;
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![
                Varnode::constant(open_addr, 8),
                Varnode::constant(path_addr, 8),
                Varnode::constant(0x41, 4),
                Varnode::constant(0o644, 4),
            ],
            0x1000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        let paths = BTreeMap::from([(path_addr, "/tmp/100%".to_string())]);
        let resolver = |addr: u64| (addr == open_addr).then_some("open");
        assert!(!parse_printf_format_strings(&mut ssa, &resolver, &paths));
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].inputs.len(), 4);
    }
}
