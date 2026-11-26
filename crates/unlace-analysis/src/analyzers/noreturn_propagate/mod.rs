//! Structural no-return **propagation** — the unlace analog of angr's `CFGFast`
//! call-graph no-return propagation (the `returning` /
//! `_iteratively_analyze_function_features` fixpoint).
//!
//! # What this is (the second Listing/xref consumer)
//!
//! The *Known* analyzer ([`crate::loader::noreturn`]) is name-based; the
//! *Discovered* analyzer ([`crate::noreturn_disc`]) is evidence-based — a
//! callee is no-return once **≥3** of its call sites show no valid fall-through
//! (Ghidra's `FindNoReturnFunctionsAnalyzer` threshold). Both miss a class of
//! real no-return wrappers:
//!
//! ```c
//! static void xalloc_die(void) { error(0, 0, "%s", _("memory exhausted")); abort(); }
//! ```
//!
//! `xalloc_die` (coreutils) ends, unconditionally, in `call abort` — and unlace
//! *already* models `abort` no-return. But:
//!
//! - the **Known** list does not carry `xalloc_die` (it is a custom name), and
//! - the **Discovered** evidence rule does not fire: at `-O2` `xalloc_die` is
//!   called from too few sites to meet the ≥3 threshold, AND its single `call
//!   abort` is followed by **alignment NOP padding** (a *valid* instruction
//!   start), so `noreturn_disc`'s "no valid fall-through" predicate reads the
//!   padding as a returning fall-through and never concludes no-return.
//!
//! The result: when decompiling a *caller* of `xalloc_die` (e.g. `x2nrealloc`),
//! unlace assumes control returns from the `call xalloc_die`, and at `-O2` (where
//! the cold error path is laid out last) the bytes after the call become a
//! spurious fall-through back-edge → an invalid `while(true)` loop + `goto` +
//! dead stack-spill artifacts. angr, whose CFGFast propagates no-return over the
//! call graph from the known set with **no evidence threshold**, renders the same
//! function cleanly.
//!
//! # The propagation rule (angr-faithful, conservative)
//!
//! Seed the *terminal* (already-no-return) set from the **Known** list (this is
//! the key difference from `noreturn_disc`, which only seeds from ≥3-evidence
//! discoveries). A function `F` is concluded no-return — and added to the set,
//! re-evaluating its callers — when ALL of:
//!
//! 1. its **last real instruction** (last by address, after skipping trailing
//!    alignment NOP padding) is a `CALL` (or tail `JMP`) whose static callee is
//!    already in the terminal set; AND
//! 2. it contains **no `RETURN`** instruction (no path returns); AND
//! 3. it contains **no computed/indirect jump** (control we cannot reason about);
//!    AND
//! 4. every static jump target in the reachable body stays within the body
//!    `[entry, last_real]` (or is itself a terminal callee) — no branch escapes to
//!    a possibly-returning neighbour, and none skips into the unreachable padding
//!    tail.
//!
//! **Soundness:** to return to its caller a function must execute a `RETURN`
//! (excluded by 2) or transfer control out of its body to code that returns —
//! a tail `JMP`/fall-through to a non-terminal function (excluded by 1+4) or a
//! computed jump (excluded by 3). With its only reachable exit a call/jump to an
//! already-no-return function, `F` cannot return. This is strictly *more*
//! conservative than angr's propagation (which also tail-recurses from its known
//! set). Iterated to a fixpoint so a wrapper-of-a-wrapper converges.
//!
//! # Emission + commit (the existing, proven seam)
//!
//! Each concluded function emits a [`NoReturnFact`] — the SAME fact the Known and
//! Discovered passes emit, resolved by the SAME commit arm (`engine.rs`
//! `commit_analysis_output` → `set_function_no_return`). The flow-repair /
//! dead-code elimination after a no-return call is **inherited** from the engine
//! (the `flow.rs` artificial-halt path). This pass builds NO new commit arm and
//! does NO S7 work.
//!
//! # Origin (the angr reference)
//!
//! angr `CFGFast` no-return analysis: starting from a known no-return set
//! (`abort`/`exit`/`__assert_fail`/…), any function whose body unconditionally
//! reaches a no-return call is itself no-return, propagated to a fixpoint over the
//! call graph with no evidence threshold (`test_decompiling_tee_O2_x2nrealloc`).
//!
//! # Faithful scope / LOSS
//!
//! - Like `noreturn_disc`, this is **Listing-dependent** (`--option listing on`)
//!   and **default-ON since DIV-14** (`noreturn_propagate`; the Listing itself
//!   defaults off, so the datatest parity path never fires it — decompile-all
//!   builds the Listing per DIV-15). A no-return heuristic can be wrong, so it
//!   keeps its own flag: `option noreturn_propagate off` restores upstream.
//! - The fixpoint is bounded (the candidate count + 2 sweeps); it never *removes*
//!   a fact.

use std::collections::{BTreeMap, BTreeSet};

use crate::listing::Listing;
use crate::listing::model::Insn;
use crate::loader::format::{ImportSym, ImportSymKind};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, NoReturnFact, Phase};

/// The structural no-return propagation consumer pass (the second Listing/xref
/// consumer).
///
/// Option-gated (gate id `noreturn_propagate`, default on); short-circuits to an
/// empty output when no Listing is built (`ctx.listing.is_none()`).
#[derive(Default)]
pub struct NoReturnPropagatePass;

impl AnalysisPass for NoReturnPropagatePass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "noreturn_propagate"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        // Listing-dependent: a no-op when the Listing is absent (the `--option
        // listing on` flag is off).
        let Some(listing) = ctx.listing else {
            return out;
        };
        // (unlace, decbench F2) The `error(status,…)`-conditional recognizer:
        // glibc `error`/`error_at_line` never return WHEN the `status` argument is
        // a nonzero constant (they call `exit(status)`), so a wrapper whose tail is
        // `call error(2,…)` is itself no-return — but `error` is NOT on the Known
        // no-return list (it *returns* for `error(0,…)`). The recognizer is a
        // per-call-site value check (arg0 is a nonzero literal) that runs with the
        // known-no-return pass (`noreturn_known`, DIV-16). When on, compute the
        // `error`/`error_at_line` entry addresses (PLT stubs + any defined funcsym)
        // so the propagation rule can treat a `call error(nonzero)` tail as terminal.
        let imports = crate::loader::format::resolve_imports(ctx.file, ctx.bytes);
        let error_recog = if ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::NoreturnKnown>()
            .0
        {
            ErrorRecognizer::from_imports(&imports, listing)
        } else {
            ErrorRecognizer::disabled()
        };
        let stubs = import_stubs(&imports);
        // (unlace, ghidra port) The CFG-reachability rule (Ghidra's
        // `targetOnlyCallsNoReturn`) generalizes the tail-call rule to mid-body
        // no-return calls, dead returns, and switch-of-no-return. Its own flag
        // (`--option noreturn_reach`, default-on, DIV-19); Listing-gated like the rest,
        // so every parity gate stays byte-identical.
        let reach = ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::NoreturnReach>()
            .0;
        let resuming_entry = crate::pclntab::gomcall::resuming_entry(ctx, listing);
        let slot_calls = terminal_slot_calls(listing, ctx.file, &imports);
        let discovered = discovered_seeds(ctx, listing);
        for fact in propagate_noreturn(
            listing,
            &error_recog,
            &slot_calls,
            reach,
            &stubs,
            resuming_entry,
            &discovered,
        ) {
            out.noreturn.push(fact);
        }
        // (unlace, Ghidra-gap) Emit every `call error(nonzero,…)` site so the decompile
        // seam prunes its fall-through (CALL_RETURN override). The recognizer is
        // `disabled()` (no addresses) under `noreturn_known off`, so this yields an
        // empty set then.
        out.no_fallthru_calls = collect_error_noreturn_callsites(listing, &error_recog);
        out
    }
}

/// The functions `noreturn_disc` concludes over the same Listing, when it is on. The
/// two consumers run side by side over one Listing, so without this a wrapper of a
/// routine only the evidence tally finds (MSVC's `terminate` around `abort`, around
/// `_exit`) never reached the propagation's terminal set.
fn discovered_seeds(ctx: &AnalysisCtx, listing: &Listing) -> BTreeSet<u64> {
    let options = &ctx.arch.unlace_options;
    if !options
        .get::<unlace_decomp::analysisgates::NoreturnDisc>()
        .0
    {
        return BTreeSet::new();
    }
    let trap = options
        .get::<unlace_decomp::analysisgates::Noreturntrap>()
        .0;
    crate::analyzers::noreturn_disc::discover_noreturn(listing, trap.then_some(ctx.file))
        .into_iter()
        .map(|fact| fact.addr)
        .collect()
}

/// (unlace, Ghidra-gap) Every `call error(nonzero,…)` / `error_at_line(nonzero,…)`
/// call-site address in the program. glibc `error()` with a nonzero constant status
/// calls `exit(status)` and never returns, so the CALL's fall-through must be pruned
/// exactly as Ghidra does ("Subroutine does not return"). Unlike [`function_is_no_return`]
/// (which only inspects a *tail* call to conclude a wrapper no-return, entry-keyed),
/// this collects EVERY such call site — the fall-through prune is what stops the
/// flow-follower from walking past the call into the next function (the docolon→eval6
/// boundary-overrun class). Reuses the recognizer's per-call-site value check.
fn collect_error_noreturn_callsites(listing: &Listing, error_recog: &ErrorRecognizer) -> Vec<u64> {
    let mut sites = Vec::new();
    if error_recog.error_addrs.is_empty() {
        return sites;
    }
    for (&entry, _) in listing.functions() {
        let next = listing.next_function_after(entry).map(|f| f.entry);
        let body = ListingInstructionBody::new(listing, entry, next);
        for (&vma, insn) in listing.instructions_in_range(entry, next) {
            // `call_is_terminal_error` = is_call && target is error && arg0 nonzero const
            // (its name is "terminal" because such a call never returns; it is valid at
            // any body position, not only the last).
            if error_recog.call_is_terminal_error(&body, vma, insn, false) {
                sites.push(vma);
            }
        }
    }
    sites.sort_unstable();
    sites.dedup();
    sites
}

/// The `error(status,…)`-conditional no-return recognizer (decbench F2).
///
/// glibc `error(int status, int errnum, const char *fmt, …)` and
/// `error_at_line(int status, …)` call `exit(status)` and **never return** when
/// `status != 0` — but *do* return for `status == 0`. So `error` cannot be a plain
/// Known no-return, yet a wrapper whose tail is `call error(2,…)` (e.g. GNU
/// `pfatal_with_name`) is unconditionally no-return. This recognizer holds the
/// `error`/`error_at_line` entry addresses and answers, per call site, whether the
/// `status` argument (x86-64 SysV first int arg = `EDI`/`RDI`) is a nonzero
/// constant, so [`function_is_no_return`] can treat that tail call as terminal.
///
/// This is exactly the value-conditional slice of Ghidra's discovered-no-return
/// analyzer (which flags a `call error` with a nonzero status "Subroutine does not
/// return"); it reuses the *same* propagation fixpoint and the same `NoReturnFact`
/// commit seam — no parallel machinery.
struct ErrorRecognizer {
    /// Entry addresses (PLT stub + any defined funcsym) of `error`/`error_at_line`.
    /// Empty ⇒ the recognizer is inert (disabled, or no `error` import present).
    error_addrs: BTreeSet<u64>,
    /// (unlace #1288) The MS-DOS exit interrupts ([`crate::listing::dosexit`]):
    /// call sites that never return whatever their arguments.
    exit_sites: BTreeSet<u64>,
}

trait InstructionBody {
    fn instruction_at(&self, vma: u64) -> Option<&Insn>;
    fn instruction_before(&self, vma: u64) -> Option<(u64, &Insn)>;
    fn shared_code_at(&self, vma: u64) -> Option<&Insn>;
}

struct ListingInstructionBody<'a> {
    listing: &'a Listing,
    entry: u64,
    next: Option<u64>,
}

impl<'a> ListingInstructionBody<'a> {
    fn new(listing: &'a Listing, entry: u64, next: Option<u64>) -> Self {
        Self {
            listing,
            entry,
            next,
        }
    }

    fn contains(&self, vma: u64) -> bool {
        vma >= self.entry && self.next.map_or(true, |next| vma < next)
    }
}

impl<'a> InstructionBody for ListingInstructionBody<'a> {
    fn instruction_at(&self, vma: u64) -> Option<&Insn> {
        if self.contains(vma) {
            self.listing.instruction_at(vma)
        } else {
            None
        }
    }

    fn shared_code_at(&self, vma: u64) -> Option<&Insn> {
        if self.contains(vma) || self.listing.function_at(vma).is_some() {
            return None;
        }
        self.listing.instruction_at(vma)
    }

    fn instruction_before(&self, vma: u64) -> Option<(u64, &Insn)> {
        if !self.contains(vma) {
            return None;
        }
        let (address, insn) = self.listing.instruction_entry_before(vma)?;
        self.contains(address).then_some((address, insn))
    }
}

#[cfg(test)]
impl<'a> InstructionBody for BTreeMap<u64, &'a Insn> {
    fn instruction_at(&self, vma: u64) -> Option<&Insn> {
        self.get(&vma).copied()
    }

    fn instruction_before(&self, vma: u64) -> Option<(u64, &Insn)> {
        self.range(..vma)
            .next_back()
            .map(|(&address, &insn)| (address, insn))
    }

    fn shared_code_at(&self, _vma: u64) -> Option<&Insn> {
        None
    }
}

impl ErrorRecognizer {
    /// A disabled recognizer (no addresses ⇒ never matches).
    fn disabled() -> Self {
        ErrorRecognizer {
            error_addrs: BTreeSet::new(),
            exit_sites: BTreeSet::new(),
        }
    }

    /// A recognizer whose only terminal call sites are the DOS exits `sites`.
    fn dos_exits(sites: &[u64]) -> Self {
        ErrorRecognizer {
            error_addrs: BTreeSet::new(),
            exit_sites: sites.iter().copied().collect(),
        }
    }

    /// Collect the `error`/`error_at_line` entry addresses from the object: the
    /// dynamic-import PLT stubs (`resolve_imports`, the same stream the Known
    /// no-return pass scans) plus any defined/named funcsym the Listing carries
    /// (the unstripped-static case). Version-suffix stripped like the Known pass.
    fn from_imports(imports: &[ImportSym], listing: &Listing) -> Self {
        let mut error_addrs = BTreeSet::new();
        let is_error_name = |n: &str| n == "error" || n == "error_at_line";
        // Dynamic imports (PLT stubs): the common dynamically-linked case.
        for p in imports {
            if let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(&p.name)) {
                if is_error_name(n.trim_start_matches('_')) {
                    error_addrs.insert(p.addr);
                }
            }
        }
        // Named functions in the Listing (a defined/statically-linked `error`).
        for (&entry, f) in listing.functions() {
            if let Some(n) = f.name.as_deref() {
                if is_error_name(n.trim_start_matches('_')) {
                    error_addrs.insert(entry);
                }
            }
        }
        ErrorRecognizer {
            error_addrs,
            exit_sites: BTreeSet::new(),
        }
    }

    /// Is `entry` the `error`/`error_at_line` function?
    fn is_error(&self, entry: u64) -> bool {
        self.error_addrs.contains(&entry)
    }

    /// Is the instruction at `call_vma` a `call error`/`call error_at_line`
    /// whose `status` argument is a **nonzero constant** — i.e. the call (and so the
    /// whole no-returning-path body) never returns?
    ///
    /// Returns true only when (a) the call target is an `error` address and (b) the
    /// last write to the first int-arg register (x86-64 SysV `EDI`/`RDI`, the `int
    /// status`) before the call is a `MOV reg, imm` with a nonzero literal. A zero
    /// status (`XOR EDI,EDI` / `MOV EDI,0x0` — `error` *returns*) or any non-constant /
    /// unprovable definition is rejected (conservative: a false positive would drop
    /// live caller code). `require_contiguous` preserves the reachability walk's
    /// stricter predecessor rule; the strict tail and call-site scans intentionally
    /// retain their address-order semantics.
    fn call_is_terminal_error<B: InstructionBody + ?Sized>(
        &self,
        body: &B,
        call_vma: u64,
        call: &Insn,
        require_contiguous: bool,
    ) -> bool {
        if !call.flow.is_call {
            return false;
        }
        if self.exit_sites.contains(&call_vma) {
            return true;
        }
        if !call.flows.iter().any(|t| self.is_error(*t)) {
            return false;
        }
        arg0_is_nonzero_const_before(body, call_vma, require_contiguous)
    }
}

/// Uppercase register token of the first integer argument on x86-64 SysV — the
/// `int status` slot of `error()`/`error_at_line()`. The 64-/32-/16-/8-bit views
/// of `rdi`; on any non-x86 target none of these appear as a destination operand,
/// so the whole recognizer degrades to a clean no-op (no false positives).
fn is_arg0_reg(reg: &str) -> bool {
    ["RDI", "EDI", "DI", "DIL"]
        .iter()
        .any(|candidate| reg.eq_ignore_ascii_case(candidate))
}

/// Parse an operand token as an integer literal (SLEIGH x86 emits hex `0x2` /
/// `-0x1`; decimal is accepted defensively). `None` ⇒ not a literal.
fn parse_imm(tok: &str) -> Option<i64> {
    let t = tok.trim();
    let (neg, t) = t.strip_prefix('-').map_or((false, t), |r| (true, r));
    let v = if let Some(h) = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")) {
        i64::from_str_radix(h, 16).ok()?
    } else {
        t.parse::<i64>().ok()?
    };
    Some(if neg { -v } else { v })
}

/// Backward-scan the straight-line predecessors of the call at `call_vma` for the
/// defining write of the first int-arg register, returning true iff that write is
/// a nonzero **constant** load.
///
/// Conservative by construction: it stops (and returns false) at the first
/// control-flow instruction or intervening `call` (beyond which the straight-line
/// definition we depend on no longer dominates the call and `edi`/`rdi` may be
/// clobbered), and returns false for a zero literal (`error(0,…)` *returns*) or any
/// non-literal / unrecognised definition. A false positive would mark a returning
/// function no-return and drop live caller code, so every uncertain case is a no.
fn arg0_is_nonzero_const_before<B: InstructionBody + ?Sized>(
    body: &B,
    call_vma: u64,
    require_contiguous: bool,
) -> bool {
    let mut vma = call_vma;
    while let Some((previous_vma, insn)) = body.instruction_before(vma) {
        if require_contiguous && insn.fall_through != Some(vma) {
            return false;
        }
        // A branch/return between here and the call breaks straight-line dominance.
        if insn.flow.is_jump || insn.flow.is_terminal {
            return false;
        }
        if let Some(result) = arg0_scan_result(insn) {
            return result;
        }
        vma = previous_vma;
    }
    false
}

fn arg0_scan_result(insn: &Insn) -> Option<bool> {
    let ops = insn.operands.trim();
    let mut parts = ops.splitn(2, ',');
    let dest = parts.next().unwrap_or("").trim();
    let src = parts.next().unwrap_or("").trim();
    if is_arg0_reg(dest) {
        // The nearest definition of the status register: decide here.
        // `MOV EDI, <imm>`: nonzero literal ⇒ error() never returns.
        return Some(
            insn.mnemonic.as_str().trim().eq_ignore_ascii_case("MOV")
                && parse_imm(src).is_some_and(|v| v != 0),
        );
    }
    // A call before the definition clobbers the caller-saved arg register.
    insn.flow.is_call.then_some(false)
}

/// Is `insn` padding — an alignment NOP a compiler emits after a no-return call
/// (`NOP`, `NOP word ptr CS:[...]`, …; the SLEIGH x86 mnemonic for every padding
/// form begins `NOP`), or the `int3` trap MSVC, and clang and rustc targeting
/// Windows, plant there? Such padding is unreachable after a no-return call, so it
/// is skipped when locating the *last real* instruction.
pub(crate) fn is_padding_nop(insn: &Insn) -> bool {
    let text = insn.mnemonic.as_str().trim();
    text.eq_ignore_ascii_case("INT3")
        || text
            .get(..3)
            .is_some_and(|prefix| prefix.eq_ignore_ascii_case("NOP"))
}

/// The addresses the image's imports resolve to (PLT and `.MIPS.stubs` entries,
/// Mach-O stubs, IAT slots). A stub's body is the dynamic linker's trampoline, not
/// the import, so whether it returns is the import's: the Known pass decides it by
/// name and propagation never concludes it from the body.
fn import_stubs(imports: &[ImportSym]) -> BTreeSet<u64> {
    imports
        .iter()
        .filter(|p| p.kind == ImportSymKind::Import)
        .map(|p| p.addr)
        .collect()
}

/// Is `callee` skippable as a propagation candidate — already modeled no-return /
/// call-fixup'd, already concluded this run, an import stub, or not a discovered
/// function entry? (Identical guard shape to `noreturn_disc`'s `skip_callee`.)
fn skip_candidate(
    listing: &Listing,
    entry: u64,
    terminal: &BTreeSet<u64>,
    stubs: &BTreeSet<u64>,
) -> bool {
    if terminal.contains(&entry) || stubs.contains(&entry) {
        return true;
    }
    match listing.function_at(entry) {
        // Call-fixup'd: marking it again is a no-op.
        Some(f) => f.call_fixup.is_some(),
        // Not a discovered function entry: nothing to mark.
        None => true,
    }
}

/// Does function `entry` unconditionally terminate in a call/tail-jump to an
/// already-no-return callee (the propagation rule, §"The propagation rule")?
///
/// Reads the function body `[entry, next_function_entry)` from the Listing and
/// applies rules 1–4 (last-real-instruction is a terminal call/jump; no RETURN;
/// no computed jump; no escaping/tail-skipping branch). Conservative: any
/// uncertainty (a return path, an indirect jump, a branch out of the reachable
/// body) leaves `entry` untouched.
fn function_is_no_return(
    listing: &Listing,
    entry: u64,
    terminal: &BTreeSet<u64>,
    slot_calls: &BTreeSet<u64>,
    error_recog: &ErrorRecognizer,
) -> bool {
    let next = listing.next_function_after(entry).map(|f| f.entry);
    let body = ListingInstructionBody::new(listing, entry, next);

    // Rule 1: the last *real* (non-padding) instruction must be a CALL — or a tail
    // JMP — to a callee already in the terminal set. Trailing alignment NOPs after
    // a no-return call are unreachable and skipped.
    let Some((last_vma, last)) = listing
        .instructions_in_range(entry, next)
        .rev()
        .find(|(_, insn)| !is_padding_nop(insn))
        .map(|(&vma, insn)| (vma, insn))
    else {
        return false;
    };
    let last_is_terminal_transfer = ((last.flow.is_call || last.flow.is_jump)
        && last.flows.iter().any(|t| terminal.contains(t)))
        || slot_calls.contains(&last_vma);
    // (unlace, decbench F2) …or a tail `call error(nonzero,…)`: glibc error()/
    // error_at_line() with a nonzero constant status calls exit() and never
    // returns, so the wrapper is no-return even though `error` itself is NOT on the
    // Known no-return list (it returns for error(0,…)). Value-conditional, checked
    // per call site by the recognizer (arg0 is a nonzero literal).
    let last_is_terminal_error = error_recog.call_is_terminal_error(&body, last_vma, last, false);
    if !last_is_terminal_transfer && !last_is_terminal_error {
        return false;
    }

    // Rules 2–4 over the reachable body (up to and including the last real
    // instruction; the padding tail past `last_vma` is unreachable, so it is not
    // scanned).
    for (&vma, insn) in listing.instructions_in_range(entry, next) {
        if vma > last_vma {
            break;
        }
        // Rule 2: any returning path disqualifies the function.
        if insn.flow.is_terminal {
            return false;
        }
        // Rule 3: a computed/indirect JUMP is control we cannot reason about
        // (a computed CALL is fine — calls are return-modeled).
        if insn.flow.is_jump && insn.flow.is_computed {
            return false;
        }
        // Rule 4: every static jump target must stay within the reachable body
        // `[entry, last_vma]`, or be an already-no-return callee. A target outside
        // it is either an escaping branch to a possibly-returning neighbour or a
        // skip into the unreachable padding tail — both disqualify.
        if insn.flow.is_jump {
            for &t in &insn.flows {
                let in_body = t >= entry && t <= last_vma;
                if !in_body && !terminal.contains(&t) {
                    return false;
                }
            }
        }
    }
    true
}

/// **CFG-reachability no-return** — the port of Ghidra's
/// `FindNoReturnFunctionsAnalyzer.targetOnlyCallsNoReturn` (the "Non-Returning
/// Functions - Discovered" analyzer's reachability rule), the generalization the
/// strict tail-call rule ([`function_is_no_return`], rules 1–4) misses.
///
/// The strict rule requires the **last real instruction** to be a terminal
/// call/jump, no `RETURN` anywhere, and no computed jump. That is a subset: it
/// cannot conclude a wrapper whose no-return call is **mid-body** (with a dead
/// tail after it), whose `RETURN` is present-but-**unreachable**, or that routes
/// through a **switch** (indirect jump) whose every arm is no-return. Ghidra
/// concludes all three by walking the CFG: a call to an already-no-return callee
/// ends that path (its fall-through is dead), and the function is no-return iff
/// **no `RETURN` is reachable from entry** and at least one reachable path ends at
/// a no-return transfer. Iterated to a call-graph fixpoint by
/// [`propagate_noreturn`], this converts e.g. openssh `sshpkt_vfatal` (a switch
/// whose arms all `call` the log-die) → then `sshpkt_fatal` (whose *first* stmt is
/// `call sshpkt_vfatal`, the write/return tail dead).
///
/// Instruction-level reachability over the Listing body (unlace has no separate
/// block CFG in this tier, but `Insn` carries `fall_through` + resolved `flows` +
/// the flow flags — enough). **Conservative by construction:** every uncertainty
/// (a reachable `RETURN`/terminal, an unresolved indirect jump, a branch escaping
/// the body to a possibly-returning neighbour, a call with no modelled
/// fall-through that is not itself terminal) returns `false` — a false positive
/// would drop live caller code, so every doubt is a "returns".
fn function_reaches_only_noreturn(
    listing: &Listing,
    entry: u64,
    terminal: &BTreeSet<u64>,
    slot_calls: &BTreeSet<u64>,
    error_recog: &ErrorRecognizer,
) -> bool {
    let next = listing.next_function_after(entry).map(|f| f.entry);
    let body = ListingInstructionBody::new(listing, entry, next);
    reaches_only_noreturn_walk(&body, entry, next, terminal, slot_calls, error_recog)
}

/// The reachability walk core (extracted for unit testing): from `entry`, walk the
/// instruction-level reachable graph of `body`, treating a call/jump to a callee in
/// `terminal` (or a value-conditional `error(nonzero,…)` tail) as a dead transfer,
/// and return true iff **no `RETURN` is reachable** and at least one reachable path
/// ends at such a transfer. A transfer out of `[entry, next)` to another function's
/// entry that is not terminal is a tail call that may return; one to code that is
/// no function's entry (a shared tail such as MSVC's `terminate`, which its callers
/// reach only by `jmp`, so the walk filed it inside a neighbour's span) is followed
/// like the function's own code. Conservative: every uncertainty returns false. See
/// [`function_reaches_only_noreturn`].
fn reaches_only_noreturn_walk<B: InstructionBody + ?Sized>(
    body: &B,
    entry: u64,
    next: Option<u64>,
    terminal: &BTreeSet<u64>,
    slot_calls: &BTreeSet<u64>,
    error_recog: &ErrorRecognizer,
) -> bool {
    let in_body = |vma: u64| vma >= entry && next.map_or(true, |n| vma < n);
    if body.instruction_at(entry).is_none() {
        return false;
    }

    let mut visited: BTreeSet<u64> = BTreeSet::new();
    let mut todo: Vec<u64> = vec![entry];
    let mut hit_noreturn = false;

    // Push a control successor, resolving whether it stays in the body, lands on an
    // already-no-return callee (a dead transfer), or escapes to a neighbour.
    // Returns false iff the successor escapes to a possibly-returning neighbour
    // (which disqualifies the whole function).
    enum Succ {
        Follow(u64),
        NoReturn,
        Escape,
    }
    let classify = |vma: u64| -> Succ {
        if in_body(vma) {
            Succ::Follow(vma)
        } else if terminal.contains(&vma) {
            Succ::NoReturn
        } else if body.shared_code_at(vma).is_some() {
            Succ::Follow(vma)
        } else {
            Succ::Escape
        }
    };

    while let Some(vma) = todo.pop() {
        if !visited.insert(vma) {
            continue;
        }
        let Some(insn) = body
            .instruction_at(vma)
            .or_else(|| body.shared_code_at(vma))
        else {
            // Fell out of the body without a modelled transfer (should be caught by
            // the successor classifier, but stay safe).
            return false;
        };

        // A reachable RETURN (terminal that is not a call) ⇒ the function returns.
        if insn.flow.is_terminal && !insn.flow.is_call {
            return false;
        }

        // A call/jump whose static target is already no-return (or a value-conditional
        // `error(nonzero,…)` tail) ends this path: its fall-through is dead code.
        let transfers_to_noreturn = ((insn.flow.is_call || insn.flow.is_jump)
            && insn.flows.iter().any(|t| terminal.contains(t)))
            || slot_calls.contains(&vma);
        // error(nonzero,…): use the same contiguous predecessor chain that the old
        // temporary straight-line window supplied to the argument back-scan.
        let transfers_to_error =
            insn.flow.is_call && error_recog.call_is_terminal_error(body, vma, insn, true);
        // A CONDITIONAL jump (`ja`/`jne`/… — a jump that also FALLS THROUGH) to a
        // no-return target ends only its TAKEN arm; the fall-through (the normal,
        // non-taken path) must still be walked. This is the GCC -O2 hot/cold-split
        // shape: an assertion / stack-canary check `jcc <.cold fragment>` where the
        // `.cold` fragment is `call abort`/`__stack_chk_fail` (no-return), while the
        // function returns on the fall-through. Short-circuiting here (as an
        // unconditional transfer does) skips that returning path and wrongly
        // concludes the whole function no-return — which then propagates up every
        // caller (the coreutils `quotearg_*` family → `fmt`/main's dropped file-open
        // `error()` path). IDA Pro / Ghidra both treat such a function as returning.
        // So only short-circuit an UNCONDITIONAL transfer (a call whose no-return
        // callee makes its fall-through dead, or a jump with no fall-through); a
        // conditional jump falls into the `is_jump` handler below, which walks BOTH
        // its taken (→ terminal) and fall-through arms.
        let conditional_jump = insn.flow.is_jump && insn.flow.has_fallthrough;
        if (transfers_to_noreturn || transfers_to_error) && !conditional_jump {
            hit_noreturn = true;
            continue;
        }

        if insn.flow.is_call {
            // A returning call: control continues at the fall-through.
            match insn.fall_through {
                Some(ft) => match classify(ft) {
                    Succ::Follow(v) => todo.push(v),
                    Succ::NoReturn => hit_noreturn = true,
                    Succ::Escape => return false,
                },
                // A call with no modelled fall-through that is not to a terminal
                // callee: we cannot reason about where control goes → returns.
                None => return false,
            }
            continue;
        }

        if insn.flow.is_jump {
            if insn.flow.is_computed || insn.flow.is_indirect {
                // Resolved switch: follow every case target. Unresolved ⇒ cannot prove.
                if insn.flows.is_empty() {
                    return false;
                }
                for &t in &insn.flows {
                    match classify(t) {
                        Succ::Follow(v) => todo.push(v),
                        Succ::NoReturn => hit_noreturn = true,
                        Succ::Escape => return false,
                    }
                }
            } else {
                for &t in &insn.flows {
                    match classify(t) {
                        Succ::Follow(v) => todo.push(v),
                        Succ::NoReturn => hit_noreturn = true,
                        Succ::Escape => return false,
                    }
                }
                // A conditional jump also falls through.
                if insn.flow.has_fallthrough {
                    if let Some(ft) = insn.fall_through {
                        match classify(ft) {
                            Succ::Follow(v) => todo.push(v),
                            Succ::NoReturn => hit_noreturn = true,
                            Succ::Escape => return false,
                        }
                    }
                }
            }
            continue;
        }

        // A straight-line instruction: follow its fall-through.
        match insn.fall_through {
            Some(ft) => match classify(ft) {
                Succ::Follow(v) => todo.push(v),
                Succ::NoReturn => hit_noreturn = true,
                Succ::Escape => return false,
            },
            // No fall-through and not terminal: end of the reachable stream with no
            // return and no transfer — cannot conclude.
            None => return false,
        }
    }

    hit_noreturn
}

/// The call sites that call an import no-return through its `.got` slot: an x86
/// `call qword ptr [rip+disp32]` (x86-64) or `call dword ptr [abs32]` (i386),
/// optionally `notrack`, or an AArch64 `blr xN` whose `xN` an `adrp`/`ldr` pair
/// just before it loaded from the slot, where the load-time passes flagged the
/// slot no-return. Such a call names no function in the Listing, so the
/// static-target test above cannot see it; without this a `-fno-plt` wrapper
/// ending in `exit()` never joins the terminal set.
///
/// (unlace#837) An x86 `call [TerminateProcess]` whose process handle is the
/// current process (`GetCurrentProcess()` just before it, or the `-1`
/// pseudo-handle) is such a call too: the CRT's `__invoke_watson` and
/// `__report_gsfailure` end that way, and IDA names them no-return.
fn terminal_slot_calls(
    listing: &Listing,
    file: &object::File,
    imports: &[ImportSym],
) -> BTreeSet<u64> {
    use object::read::Object;
    let mut out = BTreeSet::new();
    let arch = file.architecture();
    let slots_of = |name: &[u8]| -> BTreeSet<u64> {
        imports
            .iter()
            .filter(|p| p.kind == ImportSymKind::Import && import_base_name(&p.name) == name)
            .map(|p| p.addr)
            .collect()
    };
    let terminate = slots_of(b"TerminateProcess");
    let current = slots_of(b"GetCurrentProcess");
    if !matches!(
        arch,
        object::Architecture::X86_64 | object::Architecture::I386 | object::Architecture::Aarch64
    ) {
        return out;
    }
    for (&vma, insn) in listing.instructions() {
        if !insn.flow.is_call || !insn.flows.is_empty() {
            continue;
        }
        let wide = arch == object::Architecture::X86_64;
        let slot = match arch {
            object::Architecture::Aarch64 => aarch64_call_slot(file, vma),
            _ => x86_call_slot(file, vma, insn.len, wide),
        };
        let ends_current = || {
            arch != object::Architecture::Aarch64
                && terminates_current(listing, file, vma, wide, &current)
        };
        if slot.is_some_and(|slot| {
            listing.is_noreturn_target(slot) || (terminate.contains(&slot) && ends_current())
        }) {
            out.insert(vma);
        }
    }
    out
}

/// An import's name without a leading `_` and a trailing `@N` (stdcall).
fn import_base_name(name: &[u8]) -> &[u8] {
    let name = name.strip_prefix(b"_").unwrap_or(name);
    match name.iter().rposition(|&b| b == b'@') {
        Some(at) if at > 0 && name[at + 1..].iter().all(u8::is_ascii_digit) => &name[..at],
        _ => name,
    }
}

/// Does the x86 call at `vma` pass the current process as its first argument?
/// The contiguous instructions before it, at most four, are read backward: the
/// `-1` pseudo-handle stored as the argument (`push -1`, `mov dword [esp],-1`,
/// `or rcx,-1`, `mov rcx,-1`) settles it; otherwise eax/rax stored as the
/// argument (`push eax`, `mov [esp],eax`, `mov rcx,rax`) must come from a
/// `call [GetCurrentProcess]` with only constant argument stores in between.
fn terminates_current(
    listing: &Listing,
    file: &object::File,
    vma: u64,
    wide: bool,
    current: &BTreeSet<u64>,
) -> bool {
    let mut cursor = vma;
    let mut handle = false;
    for (&at, insn) in listing
        .instructions_in_range(vma.saturating_sub(48), Some(vma))
        .rev()
        .take(4)
    {
        if at.checked_add(u64::from(insn.len)) != Some(cursor) {
            return false;
        }
        cursor = at;
        let Some(b) = bytes_at(file, at, insn.len as usize) else {
            return false;
        };
        let imm_arg = if wide {
            matches!(b, [0xba, _, _, _, _] | [0x31 | 0x33, 0xd2])
        } else {
            matches!(
                b,
                [0x6a, _] | [0x68, _, _, _, _] | [0xc7, 0x44, 0x24, 0x04, _, _, _, _]
            )
        };
        if !handle {
            let minus_one = if wide {
                matches!(
                    b,
                    [0x48, 0x83, 0xc9, 0xff] | [0x48, 0xc7, 0xc1, 0xff, 0xff, 0xff, 0xff]
                )
            } else {
                matches!(b, [0x6a, 0xff] | [0xc7, 0x04, 0x24, 0xff, 0xff, 0xff, 0xff])
            };
            if minus_one {
                return true;
            }
            let from_eax = if wide {
                matches!(b, [0x48, 0x8b, 0xc8] | [0x48, 0x89, 0xc1])
            } else {
                matches!(b, [0x50] | [0x89, 0x04, 0x24])
            };
            if from_eax {
                handle = true;
                continue;
            }
        } else if insn.flow.is_call {
            return x86_call_slot(file, at, insn.len, wide).is_some_and(|s| current.contains(&s));
        }
        if !imm_arg {
            return false;
        }
    }
    false
}

/// The slot an x86 `[notrack] call [rip+disp32]` / `call [abs32]` at `vma` reads.
fn x86_call_slot(file: &object::File, vma: u64, len: u32, wide: bool) -> Option<u64> {
    let bytes = bytes_at(file, vma, len as usize)?;
    let op = if bytes.first() == Some(&0x3e) {
        &bytes[1..]
    } else {
        bytes
    };
    let [0xff, 0x15, d0, d1, d2, d3] = *op else {
        return None;
    };
    let disp = u32::from_le_bytes([d0, d1, d2, d3]);
    Some(if wide {
        vma.wrapping_add(u64::from(len))
            .wrapping_add(disp as i32 as i64 as u64)
    } else {
        u64::from(disp)
    })
}

/// The slot an AArch64 `blr xN` at `vma` reads: the nearest preceding
/// `ldr xN, [xM, #imm]` within four instructions, and the nearest `adrp xM`
/// before that load, with neither register written in between.
fn aarch64_call_slot(file: &object::File, vma: u64) -> Option<u64> {
    let word =
        |at: u64| bytes_at(file, at, 4).map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]));
    let blr = word(vma)?;
    if blr & 0xffff_fc1f != 0xd63f_0000 {
        return None;
    }
    let target = (blr >> 5) & 0x1f;
    let writes = |w: u32, reg: u32| w & 0x1f == reg && !is_store_or_branch(w);
    let mut at = vma;
    let (load_at, base, offset) = loop {
        at = at.checked_sub(4).filter(|&a| vma - a <= 16)?;
        let w = word(at)?;
        if w & 0xffc0_0000 == 0xf940_0000 && w & 0x1f == target {
            break (at, (w >> 5) & 0x1f, u64::from((w >> 10) & 0xfff) * 8);
        }
        if writes(w, target) {
            return None;
        }
    };
    let mut at = load_at;
    loop {
        at = at.checked_sub(4).filter(|&a| load_at - a <= 16)?;
        let w = word(at)?;
        if w & 0x9f00_0000 == 0x9000_0000 && w & 0x1f == base {
            let imm = (((w >> 5) & 0x7_ffff) << 2) | ((w >> 29) & 0x3);
            let page = ((i64::from(imm as i32) << 43) >> 31) as u64;
            return Some((at & !0xfff).wrapping_add(page).wrapping_add(offset));
        }
        if writes(w, base) {
            return None;
        }
    }
}

/// Is `w` an AArch64 store or branch, whose low five bits name no destination?
fn is_store_or_branch(w: u32) -> bool {
    let op0 = (w >> 25) & 0xf;
    let load_store = op0 & 0x5 == 0x4;
    let store = load_store && (w >> 22) & 1 == 0;
    let branch = op0 & 0xe == 0xa;
    store || branch
}

/// The `len` file bytes at `vma`, from the section that holds them.
pub(crate) fn bytes_at<'a>(file: &'a object::File, vma: u64, len: usize) -> Option<&'a [u8]> {
    use object::read::{Object, ObjectSection};
    let sec = file
        .sections()
        .find(|s| vma >= s.address() && vma < s.address() + s.size())?;
    let data = sec.data().ok()?;
    let start = usize::try_from(vma - sec.address()).ok()?;
    data.get(start..start.checked_add(len)?)
}

/// (unlace #1288) The propagation of [`propagate_noreturn`] seeded from the DOS
/// exit interrupts `sites` instead of the Known list: a function is no-return
/// when every path it can take ends at one, or at a call to a function already
/// concluded.
pub(crate) fn propagate_exits(listing: &Listing, sites: &[u64], reach: bool) -> Vec<NoReturnFact> {
    propagate_noreturn(
        listing,
        &ErrorRecognizer::dos_exits(sites),
        &BTreeSet::new(),
        reach,
        &BTreeSet::new(),
        None,
        &BTreeSet::new(),
    )
}

/// Run the call-graph no-return propagation over the Listing and return the
/// concluded functions as [`NoReturnFact`]s.
///
/// Seed the terminal set from the Known-list no-return functions
/// (`has_no_return`) and `seeds` (what `noreturn_disc` concluded), then sweep the candidate functions to a fixpoint: each
/// newly-concluded function joins the terminal set so a caller whose last act is a
/// call to *it* is re-evaluated next sweep (a wrapper-of-a-wrapper converges).
/// A Go scheduler entry can resume its caller without a machine return.
/// Keyed by entry VMA (a `BTreeMap` ⇒ address-ordered, deduped).
fn propagate_noreturn(
    listing: &Listing,
    error_recog: &ErrorRecognizer,
    slot_calls: &BTreeSet<u64>,
    reach: bool,
    stubs: &BTreeSet<u64>,
    resuming_entry: Option<u64>,
    seeds: &BTreeSet<u64>,
) -> Vec<NoReturnFact> {
    let mut discovered: BTreeMap<u64, NoReturnFact> = BTreeMap::new();
    // The "already no-return" anchor set: the Known-seeded functions plus
    // everything propagated so far. A call to one of these is a terminal transfer
    // for its caller.
    let mut terminal: BTreeSet<u64> = listing
        .functions()
        .filter(|(_, f)| f.has_no_return)
        .map(|(&entry, _)| entry)
        .chain(seeds.iter().copied())
        .collect();

    let candidates: Vec<u64> = listing.functions().map(|(&entry, _)| entry).collect();

    // Fixpoint: keep sweeping while a sweep concludes a new no-return function. The
    // `terminal` set growing each round is what lets the propagation converge.
    let mut changed = true;
    let mut sweeps = 0usize;
    let max_sweeps = candidates.len() + 2;
    while changed && sweeps < max_sweeps {
        changed = false;
        sweeps += 1;
        for &entry in &candidates {
            if Some(entry) == resuming_entry || skip_candidate(listing, entry, &terminal, stubs) {
                continue;
            }
            // The strict tail-call rule first (cheap, proven); then, if enabled, the
            // CFG-reachability generalization (Ghidra's `targetOnlyCallsNoReturn`).
            let concluded =
                function_is_no_return(listing, entry, &terminal, slot_calls, error_recog)
                    || (reach
                        && function_reaches_only_noreturn(
                            listing,
                            entry,
                            &terminal,
                            slot_calls,
                            error_recog,
                        ));
            if concluded {
                let name = listing
                    .function_at(entry)
                    .and_then(|f| f.name.clone())
                    .unwrap_or_else(|| format!("sub_{entry:x}"));
                discovered.insert(entry, NoReturnFact { addr: entry, name });
                terminal.insert(entry);
                changed = true;
            }
        }
    }

    discovered.into_values().collect()
}

#[cfg(test)]
mod tests;
