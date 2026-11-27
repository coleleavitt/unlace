//! The default program-prep pass list + the driver entry point the bootstrap
//! boundary calls.
//!
//! [`default_passes`] is the registry of enabled analyses, in stage order. Each
//! pass's [`AnalysisPass::id`](crate::pass::AnalysisPass::id) is its gate name;
//! the passes here are **bound to the real-ELF bootstrap path only** (the XML
//! `<binaryimage>` datatest path never calls [`run_default_analyses`]), so the
//! 675/675 datatest parity oracle is structurally untouched regardless of what
//! is enabled — see the downstream-compatibility note in
//! `docs/missing-analyses.md`.

use object::Object;
use unlace_decomp::architecture::Architecture;
use unlace_decomp::symbolnamechars::symbolnamechars_mode;
use unlace_sleigh::translate::Translate;

use crate::loadimage_object::ObjectLoadImage;
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, run_analyses};
use crate::sourcelang::Compiler;

pub use unlace_decomp::loadoptions::{LOAD_OBJC_ENV, LOAD_STRINGS_ENV};

/// Whether the load runs pass `id`: the `objc` and `strings` passes can be
/// skipped by the load's options.
fn load_pass_enabled(id: &str) -> bool {
    use unlace_decomp::loadoptions::{env, scoped};
    match id {
        "objc" => scoped(|o| o.load_objc).unwrap_or_else(env::load_objc),
        "strings" => scoped(|o| o.load_strings).unwrap_or_else(env::load_strings),
        _ => true,
    }
}

/// The default program-prep passes, in stage order.
///
/// These run at load time over the parsed ELF and produce an additive
/// [`AnalysisOutput`] the console commits into the engine. Adding a new analysis
/// is: implement [`AnalysisPass`] in a module under `analyzers/`, then add it here.
///
/// This is the back-compat entry: it builds the pass list as if the source
/// language were [`Compiler::Unknown`] (no Rust widening) on a non-PE image (no
/// MSVC-RTTI pass). The real bootstrap path uses [`passes_for`] with the detected
/// compiler + the parsed object's format.
pub fn default_passes() -> Vec<Box<dyn AnalysisPass>> {
    // A non-PE/non-Mach-O format (`Elf`): the back-compat entry never carries the
    // PE-only `rtti` pass nor the Mach-O-only `objc` pass. It DOES carry the
    // ELF and Mach-O `itaniumrtti` pass, which is default-off at the commit boundary, so
    // the committed facts are still byte-identical to before that pass.
    passes_for(Compiler::Unknown, object::BinaryFormat::Elf)
}

/// Build the program-prep pass list for a detected source-language [`Compiler`] and
/// the parsed object's `format`. This is the unlace analog of Ghidra's
/// source-language-gated AND loader-format-gated analyzer selection
/// (`SourceLanguageAnalyzer` records the IDs; `RttiAnalyzer.canAnalyze` gates on a
/// PE/Microsoft program). The gates here are:
/// - the no-return list widening (`noReturnFunctionConstraints.xml`'s
///   per-`<compiler>` arms: the `rustc` arm adds the Rust list, the `golang` arm
///   adds the Go list, plus the Go-only `gopclntab` pass),
/// - the MSVC RTTI / vftable pass (`rtti`), registered ONLY on a PE image (the
///   Microsoft C++ ABI is a PE concern — `BinaryFormat::Pe`), so a non-PE binary's
///   pass set is byte-identical to before this pass existed, and
/// - the Objective-C method-name pass (`objc`), registered ONLY on a Mach-O image
///   (the Objective-C runtime metadata is a Mach-O concern — `BinaryFormat::MachO`),
///   so a non-Mach-O binary's pass set is byte-identical to before this pass existed,
///   and
/// - the Itanium RTTI / vtable pass (`itaniumrtti`), registered ONLY on an ELF or
///   Mach-O image (the GCC/Clang C++ ABI), so a PE binary's pass set is
///   byte-identical to before this pass existed.
pub fn passes_for(compiler: Compiler, format: object::BinaryFormat) -> Vec<Box<dyn AnalysisPass>> {
    let mut passes: Vec<Box<dyn AnalysisPass>> = vec![
        // S1 loader: known no-return functions (exit/abort/…). Mirrors Ghidra's
        // default-on `NoReturnFunctionAnalyzer`. For a Rust binary, also match the
        // Rust wildcard list (panic/handle_alloc_error/rust_begin_unwind/…); for a
        // Go binary, also match the Golang list (runtime.gopanic/throw/goexit/…).
        // `for_compiler` selects the matching `<compiler>` arm
        // (noReturnFunctionConstraints.xml), base ELF list only otherwise.
        Box::new(crate::loader::noreturn::NoReturnKnownPass::for_compiler(
            compiler,
        )),
        // S1 strings (StringLiteralPass): NUL-terminated ASCII string-literal
        // detection. Uses a 4-character ASCII minimum while retaining Ghidra's
        // length-5 minimum for the UTF-16 arm. Both require a NUL end and plant a
        // typelocked `char[N]` data symbol (`s_<addr>`)
        // at each detected `.rodata` string. ENABLED by default since the printer
        // change (the readonly-char-array literal route in
        // `p9_emit/printc.rs::op_ptrsub_ir`): a pointer to a readonly char-printable
        // array symbol now renders as the string LITERAL (Ghidra behavior), so the
        // data symbol and the literal coexist instead of the symbol name shadowing
        // it. See docs/history/analysis-port-log.md (the strings/printer increment).
        Box::new(crate::strings::StringLiteralPass::default()),
        // S1 library prototypes: seed common libc signatures (puts(char*), …) so
        // call arguments get typed. Mirrors Ghidra's `ApplyDataArchiveAnalyzer`.
        // THIS is what renders string literals in unlace: typing a call argument
        // `char *` lets the printer's pointer-char-constant path read the readonly
        // bytes via the StringManager and emit `puts("Username: ")`.
        Box::new(crate::protos::LibProtoPass),
        // S1 measured libc signature extension (`libcsigs`): the remaining ~200 libc
        // prototypes the 27-entry base table does not carry, ranked out of the frozen
        // decbench C corpus and reduced from the platform headers. Applied only to
        // names the image IMPORTS (see the module docs — a defined `error` is the
        // image's own function). Registered always.
        Box::new(crate::protos::libcsigs::LibcSigsPass),
        // (unlace `objcsdk`) C prototypes read from the SDK headers the option
        // names, for a Mach-O's imports. After the libc tables, which it defers
        // to; inert with no header directory.
        Box::new(crate::protos::sdkprotos::SdkProtoPass),
        // S1 libgcc DI-mode contracts (`libgccsigs`): `long long __divdi3(long long,
        // long long)` on SPARC32 BE ELF. Registered always; the COMMIT is gated by
        // `--option libgccsigs on|off` (default off) via `analysis_pass_enabled`.
        Box::new(crate::protos::libgcc::LibgccSigsPass),
        // (unlace) The Arm run-time ABI helpers (`__aeabi_dadd`, `__aeabi_d2iz`,
        // `__aeabi_memcpy`, ...) typed as RTABI32 declares them, on a 32-bit ARM
        // image that names one. Registered always.
        Box::new(crate::protos::aeabisigs::AeabiSigsPass),
        // (unlace) The libgcc soft-float and machine-mode integer routines
        // (`__addsf3`, `__fixdfsi`, `__muldi3`, ...) typed by their machine modes
        // on every target but 32-bit ARM. Registered always.
        Box::new(crate::protos::softfpsigs::SoftFpSigsPass),
        // S1 built-in Win32 API signatures (`win32sigs`): the Windows half of the
        // `.gdt` stand-in, which nothing in the tree carried. PE/COFF only, and
        // keyed by ENTRY ADDRESS rather than by name -- a PE import is TWO
        // FunctionSymbols (the IAT slot and the `FF 25` thunk veneer) and the
        // global by-name query answers with the slot, which is not the address a
        // direct `call` resolves to. Registered always.
        Box::new(crate::protos::win32sigs::Win32SigsPass),
        Box::new(crate::tls::TlsNamesPass),
        // S1 entry discovery: find function entry points for stripped targets —
        // ELF e_entry, DT_INIT/DT_FINI + INIT_ARRAY/FINI_ARRAY pointer tables,
        // `.eh_frame` FDE pcBegin starts, the x86-64 `_start`→`main` libc-start
        // idiom, and conservative prologue byte patterns. Fuses Ghidra's
        // EntryPointAnalyzer/ExternalEntryFunctionAnalyzer/FunctionStartAnalyzer
        // + the GccExceptionAnalyzer `.eh_frame` FDE oracle into one additive pass
        // (the commit boundary's `out.entries` arm names + adds each discovered VMA,
        // idempotent against the funcsym stream). After LibProtoPass so prototypes
        // are seeded first. Always-on, like noreturn/libproto.
        Box::new(crate::entry::EntryDiscoveryPass),
        // S1 `.eh_frame` LSDA landing-pad discovery (`eh_frame_full`): the
        // GccExceptionAnalyzer full `.gcc_except_table` markup. For each FDE, follow
        // the CIE `L` augmentation to its LSDA pointer in `.gcc_except_table`,
        // decode the call-site table, and emit each exception-handler landing pad
        // (catch/cleanup block, reached only by the unwinder) as a discovered
        // function entry — net-new code targets `EntryDiscoveryPass`'s FDE-pcBegin /
        // prologue / libc-start oracles never see (a landing pad sits mid-function).
        // Registered always (the facts are computed + stashed at load), but the
        // commit is GATED by `--option eh_frame_full on` (default-OFF,
        // output-changing: it ADDS entries) via `engine.rs::analysis_pass_enabled`.
        // A default run therefore commits nothing here and the discovery set is
        // byte-identical to the FDE-pcBegin-only behavior. After EntryDiscoveryPass
        // (this is the deeper `.eh_frame` markup). The DW_CFA_* call-frame
        // instructions are NOT recovered — unlace's S5/S7 frame analysis already
        // recovers the stack frame from the code, so CFI is inherited, not rebuilt.
        Box::new(crate::entry::EhFrameLsdaPass),
        // (unlace `itaniumeh`) The call-site table with each landing pad's clauses,
        // for the decompiler's exceptional edges. Commit gated, default-OFF.
        Box::new(crate::entry::itaniumeh::ItaniumEhPass),
        Box::new(crate::entry::itaniumeh::EhNotePass),
        // (unlace `unwindstarts`) S1 Mach-O `__unwind_info` function-start discovery:
        // the linker-built second-level pages of `__TEXT,__unwind_info` list every
        // function the unwinder can describe, by start offset. The section survives
        // the `strip` that drops `LC_FUNCTION_STARTS`, so on a stripped App-Store app
        // whose only starts are `LC_MAIN`/exports it recovers the whole `__text`.
        // Registered always (the facts are cheap and stashed at load), COMMIT gated
        // by `--option unwindstarts on|off` (default-OFF, output-changing: it ADDS
        // entries) via `engine.rs::analysis_pass_enabled`, so a default run is
        // byte-identical and an image carrying `LC_FUNCTION_STARTS` gains nothing
        // (unwind starts are a strict subset there). After EntryDiscoveryPass.
        Box::new(crate::entry::unwindinfo::UnwindInfoStartsPass),
        // (unlace `machoehframe`) S1 Mach-O `__eh_frame` FDE function starts, the
        // Mach-O arm of the ELF `.eh_frame` oracle. Commit gated by
        // `--option machoehframe on|off` (default-ON).
        Box::new(crate::entry::machoehframe::MachoEhFrameStartsPass),
        // (unlace `entrymainproto`) S1 PE CRT entry-function prototype recovery: the
        // function `__scrt_common_main_seh` calls immediately after the named
        // argc/argv/envp CRT accessors gets the prototype that call site
        // establishes, because a `main` that ignores its arguments reads none of the
        // ABI argument registers and body-driven recovery therefore declares it
        // `void(void)`. Registered always (the pass self-gates on a PE image and on
        // the callee being unnamed, so it emits nothing anywhere else).
        // After EntryDiscoveryPass, whose commit installs the `sub_<addr>` name this
        // prototype is parked on.
        Box::new(crate::entry::entrymainproto::EntryMainProtoPass),
        // (unlace `machomain`) S1 Mach-O `LC_MAIN` entry naming + prototype: the load
        // command whose `entryoff` field is documented as the offset of `main()`
        // names that routine `main` and declares it `int main(int, char **)`, so a
        // stripped Mach-O stops reporting its program entry as one more `sub_<addr>`
        // in an inventory of them. Registered always (the pass self-gates on a
        // Mach-O `MH_EXECUTE` carrying `LC_MAIN` whose entry is unnamed, so it emits
        // nothing anywhere else). After EntryDiscoveryPass, whose commit
        // consults the `entry_names` overlay this pass writes and installs the
        // function the prototype is parked on.
        Box::new(crate::entry::machomain::MachoMainPass),
        // (unlace `pemain`) S1 PE user-entry naming: the function the in-image C
        // runtime startup calls (MSVC `invoke_main`, MinGW `__tmainCRTStartup`) is
        // named `main`/`wmain`/`WinMain`/`wWinMain`, so a stripped PE stops
        // reporting its program entry as one more `sub_<addr>`. Registered always
        // (the pass self-gates on a PE whose recovered entry is unnamed).
        Box::new(crate::entry::pemain::PeMainPass),
        // (unlace `armlibcmain`) S1 non-PIE ARM `_start`->`main`: the arm of entry
        // oracle 4 that reads the value crt1 hands `__libc_start_main` out of the
        // image (a literal-pool word, or a statically filled `.got` slot) instead
        // of out of the `R_ARM_RELATIVE` table a non-PIE executable does not
        // carry, so a stripped ARM binary stops attributing its whole body to
        // whichever entry precedes it. Registered always (the pass self-gates on a
        // 32-bit ARM ELF with an A32 `_start` and a PLT stub named
        // `__libc_start_main`, so it emits nothing anywhere else). After
        // EntryDiscoveryPass, whose commit consults the `entry_names`
        // overlay this pass writes.
        Box::new(crate::entry::armlibcmain::ArmLibcMainPass),
        // (unlace `elfmain`) S1 ELF libc-start `main` naming + prototype: entry
        // oracle 4 already decodes the value crt1 hands `__libc_start_main`, but
        // address-only, so a stripped ELF reports its own starting point as one
        // more `sub_<addr>` with whatever prototype reading its body alone
        // produces. This pass applies the two things the C runtime's contract
        // states about that address -- the name `main` and the declaration
        // `int main(int argc, char **argv, char **envp)`. Registered always
        // (the pass self-gates on an ELF that names `__libc_start_main` whose
        // recovered `main` is unnamed, so it emits nothing anywhere else),
        // COMMIT gated by `--option elfmain on|off` via
        // `engine.rs::analysis_pass_enabled`. After
        // ArmLibcMainPass, whose entry + name it parks the prototype on for the
        // non-PIE ARM32 shape oracle 4 cannot see.
        Box::new(crate::entry::elfmain::ElfMainPass),
        // S1 widened ARM Cortex-M vector-table discovery (`cortexmvectors`): the
        // reset/exception handler seeds and the whole-image Thumb region paint of a
        // hardware vector table the always-on oracle 6 signature rejects (an A-only
        // .isr_vector in a read-only PT_LOAD, a CCM/TCM stack word, or a reset word
        // that is not `e_entry`). Registered always (the facts are computed +
        // stashed at load), COMMIT gated by `--option cortexmvectors on`
        // (default-OFF, output-changing: it ADDS entries) via
        // `engine.rs::analysis_pass_enabled`. Emits nothing when the shipped
        // signature already matched, on a non-ARM object, or when no widened table
        // is present. After EntryDiscoveryPass (it is the widened arm of its
        // oracle 6).
        Box::new(crate::entry::cortexmvectors::CortexMVectorsPass),
        // S1 `.eh_frame` FDE-interior entry suppression (`fdeinterior`): report the
        // FDE bodies that describe exactly one function, so the commit boundary can
        // reject a discovered entry that lands in the MIDDLE of one. unlace's function
        // symbols carry no extent, so every discovery oracle is free to start a
        // `sub_<addr>` inside a body it cannot see — `eh_frame_full`'s landing pads,
        // `aif`'s gap starts and the prologue patterns all do it on ordinary C++
        // output. Registered always (the facts are computed + stashed at load).
        // Inert on any image without `.eh_frame` FDEs. LAST of the entry passes: it
        // constrains what the others emit, and the suppression is applied to the
        // fully merged entry set (the deferred Listing consumers included).
        Box::new(crate::entry::fdeinterior::FdeInteriorPass),
        // S1 `.pdata` RUNTIME_FUNCTION-interior entry suppression
        // (`pdatainterior`): the PE half of `fdeinterior`, reporting on the same
        // `fde_bodies` channel. An x64 PE's exception directory records
        // `[BeginAddress, EndAddress)` per function, which is the extent unlace's
        // extent-free `FunctionSymbol` never carried, so an entry strictly inside
        // one is a point inside a function rather than a function. Inert on ELF, on
        // ARM/ARM64 PE (whose 8-byte records carry no `EndAddress`) and on any
        // image with no exception directory.
        Box::new(crate::entry::pdatainterior::PdataInteriorPass),
        // NB: the full byte-pattern function-start pass (`funcstart_patterns`) is
        // NOT registered here. It is a DEFERRED pass, run at the commit point by
        // [`run_deferred_entry_passes`] where its (default-OFF) gate is finally in
        // effect, rather than swept at load on every binary and discarded. See
        // `entry::FuncStartPatternPass`. The multi-entry `.cold` fragment pass
        // (`coldentry`) is deferred the same way, because it decodes through the
        // engine `Translate`, which has no program image until the commit point.
        // S1 ARM/Thumb decode-mode markers: paint the SLEIGH `TMode` context
        // variable from ARM mapping symbols (`$t`/`$a`) + the STT_FUNC odd-address
        // (LSB=1 ⇒ Thumb) convention, so Thumb code decodes as Thumb. The unlace
        // analog of ARM's `ARM_ElfExtension.evaluateElfSymbol` + the later
        // `ArmSymbolAnalyzer`. ARM-only: the pass returns an empty output on every
        // other language (its `canAnalyze == processor==ARM` gate), and the
        // commit boundary additionally swallows a "TMode not registered" error, so
        // this is a strict no-op for every non-ARM binary (the parity gates are
        // structurally untouched). Always-on, like noreturn/libproto/entry.
        Box::new(crate::loader::arm_markers::ArmMarkerPass),
        // (unlace `armfuncmode`) `TMode=0` at each even function symbol of an ARM
        // image without mapping symbols, so a Thumb paint stops at the next A32
        // function.
        Box::new(crate::loader::armfuncmode::ArmFuncModePass),
        // S1 MIPS `$gp` recovery: seed `t9 = func_entry` as a tracked register
        // value at each MIPS function entry (the PIC `jalr t9` ABI convention), so
        // a PIC prologue's `addu gp,gp,t9` folds to the real `$gp` and
        // `$gp`-relative GOT/`.sdata` loads resolve. The unlace analog of Ghidra's
        // `MipsAddressAnalyzer` (the `assumeT9EntryAddress` default-on path). Unlike
        // ARM markers this is a register-VALUE seed (TrackedSet/TrackedContext), not
        // a decode-mode context bit. MIPS-only: the pass returns an empty output on
        // every other language (its `canAnalyze == processor==MIPS` gate), and the
        // commit boundary additionally swallows a "t9 not found" error, so this is a
        // strict no-op for every non-MIPS binary (the parity gates are structurally
        // untouched). Always-on, like noreturn/libproto/entry/arm_markers.
        Box::new(crate::loader::mips_markers::MipsMarkerPass),
        // S1 MIPS16 ISA_MODE decode-mode markers: paint the SLEIGH `ISA_MODE`
        // context variable at each MIPS16e/microMIPS function entry (marked by the
        // STT_FUNC LSB-set address OR `st_other & 0xf0` = STO_MIPS_MIPS16/MICROMIPS)
        // so the body decodes in the alternate ISA instead of being misdecoded as
        // MIPS32. The exact MIPS analog of ARM's `$t`/STT_FUNC-LSB → `TMode`
        // painting (arm_markers) — a decode-mode context BIT, not a register value
        // like `mips_gp`'s `t9`. The unlace analog of Ghidra's
        // `MIPS_ElfExtension.applyIsaMode`. MIPS-only: the pass returns an empty
        // output on every other language (its `processor==MIPS` gate), and the
        // commit boundary additionally swallows an "ISA_MODE not registered" error
        // (the same context-paint arm the ARM `TMode` paints use), so this is a
        // strict no-op for every non-MIPS binary (the parity gates are structurally
        // untouched). Always-on, like arm_markers/mips_gp.
        Box::new(crate::loader::mips_markers::MipsIsaModePass),
        // PPC32 ELF relocation metadata; self-gated like the register passes.
        Box::new(crate::loader::ppc32_imports::PicSlotsPass),
        // PPC64 ELFv2 `r12 = entry` at global entries; self-gated like mips_gp.
        Box::new(crate::loader::ppc64r12::Ppc64GlobalEntryPass),
        // S1 DWARF: recover function/global names and TYPED function signatures
        // from `.debug_*` sections (the unlace analog of Ghidra's `DWARFAnalyzer`).
        // Registered AFTER LibProtoPass so for any name both emit, the DWARF
        // (real source) prototype wins (last-write in set_function_prototype_pieces).
        // Skips cleanly on a non-DWARF binary. Subtask-3 (DW_OP_fbreg stack-local
        // ScopeLocal map) is a deferred engine change — see dwarf docs.
        // S1 demangled C++ signatures (`cppsig`): read the class type for `this`
        // and the declared parameter types straight off a mangled symbol (the unlace
        // analog of Ghidra's `DemangledFunction.applyTo` / the GNU demangler's
        // "Apply Function Signatures"). Registered BEFORE `DwarfPass` so that
        // wherever both reach a function the DWARF (ground truth) prototype
        // overwrites the demangled (declaration) one — the two are complementary,
        // DWARF on an unstripped binary and the mangled symbol on a stripped one.
        // Registered always (the facts are computed + stashed at load, in two
        // certainty tiers), the COMMIT gated by `--option cppsig proven|inferred`
        // via `engine.rs::analysis_pass_enabled` + `commit_analysis_output`.
        Box::new(crate::demangle::cppsig::CppSigPass),
        Box::new(crate::dwarf::DwarfPass),
        // S1 named libc/POSIX aggregate types (`libctypes`): the signatures
        // `LibProtoPass`/`LibcSigsPass` carry, with their aggregate slots spelled
        // by name (`FILE *`, `stat *`, `DIR *`, `option *`) instead of the
        // width-stable `void *`, plus the stdio names neither table carries
        // (`__uflow` and friends). Merged after those two, so its prototypes are
        // committed last and win for every name it restates.
        //
        // Registered after `DwarfPass` ON PURPOSE, and this is load-bearing: the
        // pass INTERNS a named shell per aggregate as it builds the signatures,
        // and a `Rc<Datatype>` pointee is captured by value. `TypeFactory`
        // completion re-keys a struct into a NEW `Rc` (`set_fields_struct`), so a
        // pointer minted against an empty shell keeps pointing at the empty shell
        // even after DWARF completes the same name. Running second, the pass sees
        // the platform's real `struct stat` already interned and points at THAT
        // (`libctypes::named_aggregate`); the names DWARF did not define it
        // mints itself. The order also keeps the prototype precedence right — a
        // DWARF-defined function outranks a table entry.
        //
        // The pass SELF-GATES on the `libctypes` env bridge rather than on the
        // commit boundary, because with the gate off not one of those shells may
        // exist, interned or not.
        Box::new(crate::protos::libctypes::LibcTypesPass),
        // (unlace `typelib`) The image's library target and imports, for the
        // prebuilt type library the commit consults; no facts off-target.
        Box::new(crate::protos::typelib::TypeLibPass),
        // S1 DWARF source lines: parse `.debug_line` and surface each
        // instruction's `file:line` as a `Comment::user2` on the decompiled
        // output (the unlace analog of Ghidra's `DWARFLineInfoCommentScript`).
        // Default-OFF (`--option dwarf_lines on`): it CHANGES the output (adds
        // comment lines), so unlike the names/types `dwarf` pass it is opt-in.
        // Registered after `DwarfPass` (it reuses the same `.debug_*` sections).
        Box::new(crate::dwarf::DwarfLinesPass),
        // S1 call-fixups: tag each function whose name matches a cspec call-fixup
        // `<target>` (e.g. the `-pg` `mcount`/`__fentry__` profiling stubs) so the
        // engine replaces the CALL with the fixup body. The unlace analog of Ghidra's
        // default-on `CallFixupAnalyzer` (the install half; the flow-repair half is
        // engine-internal at this tier — see callfixup docs). After LibProtoPass
        // (the fixup tags the *callee* function, independent of prototype seeding).
        // Always-on, like noreturn/libproto/entry.
        Box::new(crate::callfixup::CallFixupPass),
        // (unlace `kernelbug`) A Linux kernel image's `__bug_table`; inert elsewhere.
        Box::new(crate::kernelbug::KernelBugPass),
        // (unlace `blobs`) Embedded images and archives, committed unless `blobs off`.
        Box::new(crate::blobs::BlobPass),
        // (unlace `thunkentry`) An MSVC incremental-link table's stubs and targets.
        Box::new(crate::listing::thunkentry::IncrementalLinkPass),
        // (unlace) The MSVC x87 one-operand intrinsics take ST0 and return in ST0.
        Box::new(crate::protos::x87intrinsics::X87IntrinsicPass),
        // S1 address tables (AddrTablePass) run DEFERRED, from [`run_addrtable`]
        // at the commit point, and only under `--option addrtable on` (off,
        // matching Ghidra's `AddressTableAnalyzer.setDefaultEnablement(false)`:
        // the pointer-run scanner over-accepts). Registered here it would scan
        // every image's data on every load for facts the default gate then
        // drops. Not switch recovery (`p2_lift/jumptable.rs`).

        // S1 scalar/operand reference markup (OperandRefsPass) is implemented +
        // tested but **gated off by default** AND runs DEFERRED (not in this
        // load-time list) — the unlace analog of Ghidra's `ScalarOperandAnalyzer` /
        // `ElfScalarOperandAnalyzer`. Like the Listing/xref tier (PR6), it must run
        // at the deferred commit point (`read symbols`) rather than at load: it
        // linear-decodes the executable sections via the engine `Translate`, and the
        // program loadimage is only attached to the engine's `Sleigh` AFTER this
        // load-time pass list runs (`set_loader` in `bootstrap_from_object`), so a
        // load-time decode finds no bytes. It is therefore driven from
        // [`run_operand_refs`] in `commit_pending_analysis`, gated on
        // `analysis_operand_refs` (`--option operand_refs on`). OFF by default
        // because (a) Ghidra ships the producing analyzer `setDefaultEnablement` =
        // `!isElf` (disabled for every ELF) and the ELF subclass only *removes* bad
        // `.got`/`.plt` refs unlace never creates; (b) its one useful product (a
        // `.rodata` string typed as `char*`) is already delivered by the always-on
        // `strings` + libproto/S5 typing for the common case; (c) a per-instruction
        // immediate scan over-accepts. See docs/history/analysis-port-buildplan.md §1.2.

        // `AggressiveInstructionFinderAnalyzer` (AIF) is NOT a pure-`ctx` pass here:
        // it is a *Listing/xref consumer* (`aif`, the sound substitute the
        // buildplan §1.3 prescribed, gated off-by-default like upstream's
        // `setDefaultEnablement(false)`). It speculatively decodes the undefined gaps
        // the Listing left, which needs the live SLEIGH decoder, so it is driven by
        // `aif::run_aif` inside `run_listing_consumers` (below), not from this
        // load-time pure-ctx list. The `AggressiveInstructionFinderPass` `AnalysisPass`
        // impl exists only for the `aif` gate identity (its `run` is a no-op). See
        // `aif/mod.rs` + docs/history/analysis-port-log.md.
    ];

    // (unlace `cortexmscs`) The Cortex-M System Control Space as typed volatile
    // globals (a raw image is stashed by its bootstrap). Registered for every
    // format; the pass self-gates on a Cortex-M language or M-profile ELF build
    // attributes.
    passes.push(Box::new(crate::cortexmscs::CortexMScsPass));

    // (unlace, NOVEL) S1 Itanium (GCC/Clang) RTTI + vtable recovery
    // (ItaniumRttiPass): on an ELF, discover every `_ZTI…` typeinfo object from the
    // dynamic relocations that name a `__cxxabiv1` typeinfo vtable (the anchor that
    // survives `strip --strip-all` on a shared object), demangle each `_ZTS…` type
    // name, read the inheritance graph, and walk the `_ZTV…` sub-vtables the
    // typeinfo objects are pointed at from — emitting `<C>::typeinfo` /
    // `<C>::typeinfo_name` / `<C>::vtable` / `<C>::vtable_for_<Base>` labels and one
    // `<C>::vfunc_<i>` function symbol per virtual slot. Ghidra has NO Itanium RTTI
    // analyzer (its `RttiAnalyzer` is MSVC-only and its GCC class recovery is
    // script-tier), so this is a unlace capability rather than a port. ELF and
    // Mach-O (fixup slots resolved first); every other target's pass set is
    // byte-identical (the pass ALSO self-gates in `run`). DEFAULT-OFF: its
    // facts are computed at load but committed only when `--option itaniumrtti on`
    // (`engine.rs::analysis_pass_enabled` reads `arch.unlace_options.get::<unlace_decomp::analysisgates::Itaniumrtti>().0`, default
    // false), so a default run is byte-identical.
    if matches!(
        format,
        object::BinaryFormat::Elf | object::BinaryFormat::MachO
    ) {
        passes.push(Box::new(crate::rtti::itaniumrtti::ItaniumRttiPass));
        passes.push(Box::new(crate::rtti::vtabletypes::VtableTypesPass));
    }

    // S1 ELF GOT data imports (ElfGotImportPass): name each undefined-symbol
    // `GLOB_DAT` slot for its import and paint it `externref`, the ELF analog of a
    // Mach-O `__got` slot, so `importdata` renders a read through it as the import.
    // Committed only when `importdata` is on.
    if format == object::BinaryFormat::Elf {
        passes.push(Box::new(crate::loader::elfgotimports::ElfGotImportPass));
        // (unlace) An ARM ELF that states the base procedure-call standard binds
        // its external functions to the base-standard model (#681).
        passes.push(Box::new(crate::loader::armbasepcs::ArmBasePcsPass));
    }

    // S1 PE/Mach-O/ELF import-slot call binding (PeImportCallPass): paint
    // `Varnode::externref` over PE IAT slots, typed Mach-O lazy/non-lazy
    // symbol-pointer entries and ELF `.got` import slots so `ActionDeindirect`
    // resolves `call [slot]` to the FunctionSymbol already registered at that VA.
    // The Win32 no-return API list remains strictly PE/COFF. Facts are committed
    // only when `peimportcall` is on. Ahead of the Go and Rust blocks, so
    // `gopclntab` keeps its appended-last contract on a Go ELF.
    if matches!(
        format,
        object::BinaryFormat::Pe
            | object::BinaryFormat::Coff
            | object::BinaryFormat::MachO
            | object::BinaryFormat::Elf
    ) {
        passes.push(Box::new(crate::loader::peimportcall::PeImportCallPass));
    }

    // (unlace `machobinds`) S1 Mach-O bound pointer slots: name each slot a bind
    // fills that no indirect entry names, through the same symbol-table-only
    // channel, and paint it `externref`. Committed only when `machobinds` is on.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::loader::machobinds::MachoBindSlotsPass));
    }

    // S1 Mach-O data-import slots (MachODataImportPass): name each symbol-pointer
    // slot holding a data import (type metadata, a witness table, a class object)
    // for its import and paint it `externref`, so `importdata` renders a read
    // through it as the import. Committed only when `importdata` is on.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::loader::machodataslots::MachODataImportPass));
    }

    // S1 Go pclntab function-name recovery (GoPclntabPass): when the binary is Go
    // (`detect_compiler == Go`, via `.go.buildinfo`/`.note.go.buildid` — the same
    // gate the Go no-return list uses), parse the embedded `pclntab` and emit a
    // `SymFact { kind: Function }` per Go function, so `main.main`/`runtime.*`/
    // package functions render NAMED instead of `sub_<addr>`. The unlace analog of
    // Ghidra's `GolangSymbolAnalyzer` (name-recovery half). Go-only: registered
    // ONLY for `Compiler::Go`, so every non-Go binary's pass set is byte-identical
    // to before (the no-op is structural, not a runtime check). The existing
    // symbol commit arm installs the facts idempotently (a real `.symtab` name still wins, so only a *stripped*
    // Go binary's `sub_<addr>` functions take the recovered name).
    if compiler.is_golang() {
        // (unlace `fatstr`) The Go arm of the string-record pass: the same
        // (ptr, len) record shape rustc emits, with the slots widened to the
        // Go data image (.data/.noptrdata). FIRST in the Go block so
        // `gopclntab` keeps its appended-last contract. Committed under the
        // same `fatstr` mode gate as the rustc arm.
        passes.push(Box::new(crate::strings::strrecords::StrRecordPass::go()));
        // (unlace `gopcln`) is not registered here: its passes read the option,
        // which a load-time pass sees only at its constructor default, so they
        // run deferred at the commit point ([`run_gopcln`]).
        // (unlace `gonoreturn`) BEFORE `gopclntab`, preserving that pass's
        // appended-last contract: apply the vendored Go no-return list to the
        // pclntab's own function list, so a STRIPPED Go binary (no .symtab for
        // `noreturn_known` to scan) still gets its runtime.panic*/throw/goexit
        // facts. Go-only: a structural no-op on every other binary.
        passes.push(Box::new(crate::pclntab::gonoreturn::GoNoReturnPass));
        // (unlace `gotypes`) The runtime-type harvest — BEFORE `gopclntab`,
        // preserving that pass's appended-last contract.
        passes.push(Box::new(crate::gotypes::GoTypesPass));
        passes.push(Box::new(crate::pclntab::GoPclntabPass));
    }
    // (unlace `fatstr`) Rust-only: length-bounded string facts from static
    // `(ptr, len)` records (`strings::strrecords`), the analysis-side half
    // of the fatstr option. Registered ONLY for `Compiler::Rustc`, so every
    // non-Rust binary's pass set is byte-identical to before; committed under
    // the `fatstr` mode gate (the registered option `FatStrMode`), so `--option fatstr
    // off` drops the facts at the read-symbols boundary.
    if compiler.is_rust() {
        passes.push(Box::new(crate::strings::strrecords::StrRecordPass::rust()));
        // (unlace `fatstr`) The code-side (ptr, len) literal finder.
        passes.push(Box::new(crate::strings::strcodelen::StrCodeLenPass));
        // (unlace `panicloc`) The panic `Location` records, typed and named.
        passes.push(Box::new(crate::strings::panicloc::PanicLocationPass));
    }

    // S1 arm64e `__auth_ptr` call binding (AuthPtrCallPass): name each chained
    // bind slot of `__auth_ptr` after its import and paint it `externref`, the
    // `peimportcall` facts for the one Mach-O import table the indirect-symbol
    // walk does not cover.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::loader::authptrcall::AuthPtrCallPass));
        passes.push(Box::new(crate::rtti::arm64evcall::Arm64eVcallPass));
    }

    // S1 stripped-stub naming (StubBindsPass): a `__stubs` entry whose
    // indirect-symbol entry is `LOCAL|ABS` is named after the chained bind on
    // the slot it jumps through. Committed only when `stubbinds` is on.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::loader::stubbinds::StubBindsPass));
    }

    // S1 MSVC RTTI / vftable recovery (RttiPass): on a Windows PE, parse the
    // CompleteObjectLocator → RTTI3/2/1 → RTTI0 graph in `.rdata`/`.data`, demangle
    // each `.?A…@@` class name, and emit `<Class>::vftable` / `<Class>::RTTI_*`
    // labels + the recovered class names (`Box`/`Shape`). The unlace analog of
    // Ghidra's `RttiAnalyzer` (a Microsoft-PE analyzer). PE-only: registered ONLY
    // for `BinaryFormat::Pe`, so every non-PE binary's pass set is byte-identical to
    // before (the no-op is structural, not a runtime check — and the pass ALSO
    // self-gates on PE in `run`). DEFAULT-OFF: its facts are computed at load but
    // committed only when `--option rtti on` (`engine.rs::analysis_pass_enabled`
    // reads `arch.unlace_options.get::<unlace_decomp::analysisgates::Rtti>().0`, default false), so a default run is byte-identical
    // and bound to the real-PE path (the XML datatest oracle is untouched).
    if format == object::BinaryFormat::Pe {
        passes.push(Box::new(crate::rtti::RttiPass));
        // (unlace `vtabletypes`) The typed MSVC vftables, from the same RTTI.
        passes.push(Box::new(crate::rtti::msvcvtabletypes::MsvcVtableTypesPass));
        // (unlace `msvceh`) ThrowInfo/CatchableType labels and x64 throw-site
        // comments. Commit gated, default-OFF.
        passes.push(Box::new(crate::entry::msvceh::MsvcEhPass));
        // (unlace `delphi`) Borland/Delphi VMTs, method names, type info and
        // interface tables. Commit gated, default-OFF.
        passes.push(Box::new(crate::delphi::DelphiPass));
        // (unlace `delphiabi`) Under the Delphi spec, Win32 imports stay
        // `__stdcall`. Inert unless the gate is on.
        passes.push(Box::new(
            crate::delphi::delphiabiimports::DelphiAbiImportsPass,
        ));
    }

    // S1 Mach-O Core Foundation constant strings (CFStringPass): when the binary
    // is a Mach-O, read each `__cfstring` entry's resolved char pointer and emit
    // the string so a `CFSTR("...")` reference renders the literal instead of
    // `dat_<addr>`. Registered ONLY for a Mach-O target (structural no-op
    // elsewhere). Default-on (`--option cfstrings`): the output is committed only
    // when the gate is on (`engine.rs::analysis_pass_enabled`), so `off` is
    // byte-identical to a build without the pass.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::cfstring::CFStringPass));
    }

    // (unlace `iokitclasses`) IOKit class + vtable recovery on an XNU kernel or
    // kext (the pass itself checks for one); Mach-O only.
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::iokit::IokitClassesPass));
        passes.push(Box::new(crate::iokit::XnuTablesPass));
        passes.push(Box::new(crate::iokit::OsClassInfoPass));
    }

    // S1 Mach-O Objective-C metadata recovery (ObjcMetadataPass): when the binary
    // is a Mach-O, walk the `__objc_*` metadata (classlist → class_t → class_ro_t
    // → method_list_t) and rename each IMP function `-[Class sel]` / `+[Class sel]`
    // (the FID-precedent label-gated rename) + emit `_OBJC_CLASS_$_<name>` /
    // selector symbols. The unlace analog of Ghidra's ObjcTypeMetadataAnalyzer
    // (name-recovery half). Registered ONLY for a Mach-O binary, so every non-Mach-O
    // target's pass set is byte-identical to before (the gate is structural, like
    // the Go pclntab pass). Default-OFF (`--option objc`, the fid precedent): its
    // facts are computed at LOAD but COMMITTED only when the `objc` gate is on
    // (`engine.rs::analysis_pass_enabled`), so a default run is byte-identical.
    // Selectors are plain ASCII — no demangler needed. x86-64, no-chained-fixups
    // path (the arm64 + LC_DYLD_CHAINED_FIXUPS resolver is the deferred PR-O0/O2).
    if format == object::BinaryFormat::MachO {
        passes.push(Box::new(crate::objc::ObjcMetadataPass));
    }

    // (unlace) Swift runtime-metadata recovery (SwiftMetadataPass): on a Swift
    // image (the `sourcelang` detector saw its `swift5_*` sections, mangled
    // symbols or runtime imports) in one of the two formats Swift ships in,
    // read the reflection sections and name the metadata accessors, vtable and
    // override implementations, protocol witnesses and the descriptor records
    // themselves. Default-OFF (`--option swiftmetadata`, the objc precedent);
    // an image without the sections produces nothing.
    if compiler == Compiler::Swift
        && matches!(
            format,
            object::BinaryFormat::MachO | object::BinaryFormat::Elf
        )
    {
        passes.push(Box::new(crate::swift::SwiftMetadataPass));
        // (unlace `swiftruntime`) The runtime's entry points with their
        // header signatures, bound by name. Default-ON.
        passes.push(Box::new(crate::swift::swiftruntime::SwiftRuntimePass));
    }

    // S1 PE PDB metadata recovery (PdbPass): on a Windows PE, read the CodeView
    // fingerprint (`{guid, age, path}`), locate the external `.pdb` (tier-1: the
    // `unlace_pdb_path` env var, the fid `unlace_fid_db` precedent), fingerprint-gate
    // it (the supplied `.pdb`'s guid/age must match the PE's CodeView record — never
    // apply a wrong/stale PDB, the FID full-hash-match discipline), and on a match
    // walk the global symbols (S_PUB32/S_GPROC32) to RENAME each stripped FUN_*/sub_*
    // function to its real name (`out.fid_names`, the label-gated rename) + emit the
    // function symbol (`out.symbols`). The unlace analog of Ghidra's
    // PdbUniversalAnalyzer (name-recovery half). PE-only: registered ONLY for
    // `BinaryFormat::Pe`, so every non-PE binary's pass set is byte-identical to
    // before (the gate is structural, and the pass ALSO self-gates on PE in `run`).
    // DEFAULT-OFF: its facts are computed at load but committed only when `--option
    // pdb on` (`engine.rs::analysis_pass_enabled` reads `arch.unlace_options.get::<unlace_decomp::analysisgates::Pdb>().0`, default
    // false) AND a fingerprint-matching `.pdb` is supplied via `unlace_pdb_path`, so a
    // default run is byte-identical and bound to the real-PE path (the XML datatest
    // oracle is untouched). Types/typed-locals/lines are `pdbtypes`/`pdblines`.
    if format == object::BinaryFormat::Pe {
        passes.push(Box::new(crate::pdb::PdbPass));
        // S1 PDB-procedure-interior entry suppression (`pdbinterior`): the same
        // `.pdb`'s S_GPROC32/S_LPROC32 code lengths reported on `pdb_bodies`, for
        // the frameless leaves `.pdata` has no record of. Committed with `pdb`.
        passes.push(Box::new(crate::pdb::pdbinterior::PdbInteriorPass));
        passes.push(Box::new(crate::cvftrace::CvfTracePass));
        passes.push(Box::new(crate::cvftrace::CvfTraceLinesPass));
    }

    passes
}

/// Build the Listing/xref tier's seed set from a parsed object: the union of
/// the real funcsym entries (`entry::existing_function_addrs`) and the
/// discovered entry points (`entry::collect_entries`), restricted to
/// executable sections, sorted and deduped (design §3.1).
///
/// Both halves are already exec-section-filtered upstream (`collect_entries`
/// filters; `existing_function_addrs` are real FUNC syms), but we apply the
/// `in_executable_section` gate to both to be robust against a funcsym pointing
/// at a non-exec address.
///
/// Container-derived seeds for callers without a selected decoder. The live
/// driver uses `listing_seeds_for_language` so explicit decoder overrides also
/// govern the entry addresses it follows.
pub fn listing_seeds(file: &object::File, bytes: &[u8]) -> Vec<u64> {
    listing_seeds_for_language(file, bytes, None)
}

fn listing_seeds_for_language(
    file: &object::File,
    bytes: &[u8],
    language: Option<&str>,
) -> Vec<u64> {
    let execs = crate::entry::executable_sections(file);
    let entries = match language {
        Some(language) => crate::entry::collect_entries_for_language(file, bytes, language),
        None => crate::entry::collect_entries(file, bytes),
    };
    let mut seeds: Vec<u64> = crate::entry::existing_function_addrs(file, bytes)
        .into_iter()
        .chain(entries)
        .filter(|&vma| crate::entry::in_executable_section(&execs, vma))
        .collect();
    seeds.sort_unstable();
    seeds.dedup();
    seeds
}

/// The **deferred entry-discovery** passes — kept OUT of [`passes_for`] for the
/// same reason as [`listing_consumer_passes`]: their `--option <id> on|off` gate
/// is set by the CLI *after* `load file`, so running them at load pays their full
/// cost on every binary and throws the result away whenever the gate is off.
///
/// Today that is `funcstart_patterns` alone, whose whole-image sweep over the
/// vendored `<patternpairs>` corpus is the most expensive load-time pass on a
/// large image and is discarded on every default run. Deferring an entry pass is
/// output-neutral: the commit boundary's entry arm is idempotent by address and
/// resolves each name from the fully merged `entry_names`, so where a pass's
/// entries land in the merge order does not change what is installed.
fn deferred_entry_passes() -> Vec<Box<dyn AnalysisPass>> {
    vec![
        Box::new(crate::entry::FuncStartPatternPass),
        Box::new(crate::entry::coldentry::ColdEntryPass),
        Box::new(crate::entry::ehcold::EhColdPass),
        // (unlace `functails`) Every other single-owner `.cold` part, commit gated.
        Box::new(crate::entry::ehcold::FuncTailsPass),
        Box::new(crate::entry::mfcmsgmap::MfcMsgMapPass),
        Box::new(crate::entry::msvcptrentry::MsvcPtrEntryPass),
        Box::new(crate::protos::importvote::ImportVotePass),
        // (unlace `pdbtypes`/`pdblines`) A full read of the `.pdb`'s type,
        // module and line streams: paid only when its gate (and `pdb`) is on.
        Box::new(crate::pdb::pdbtypes::PdbTypesPass),
        Box::new(crate::pdb::pdblines::PdbLinesPass),
    ]
}

/// Run the [`deferred_entry_passes`] over the stashed image at the commit point,
/// keyed by [`AnalysisPass::id`] (the same per-pass-split shape as
/// [`run_default_analyses_per_pass`], so the console applies the identical
/// `analysis_pass_enabled` filter). Only the passes `enabled` accepts by id run.
///
/// The object view is built exactly as [`run_default_analyses_per_pass`] builds
/// it, `relocrebase` rebasing included: a relocatable object is laid out
/// synthetically by the loader, so a pass reading the raw view would emit
/// pre-link, section-relative entries in an address space the engine does not
/// have. A parse failure yields an empty list (additive, never fails).
pub fn run_deferred_entry_passes(
    bytes: &[u8],
    image: &ObjectLoadImage,
    arch: &Architecture,
    enabled: &dyn Fn(&str) -> bool,
) -> Vec<(&'static str, AnalysisOutput)> {
    run_deferred_entry_passes_without_image(bytes, arch, image_on_disk_path(image), enabled)
}

pub fn run_deferred_entry_passes_without_image(
    bytes: &[u8],
    arch: &Architecture,
    image_path: Option<&std::path::Path>,
    enabled: &dyn Fn(&str) -> bool,
) -> Vec<(&'static str, AnalysisOutput)> {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return Vec::new();
    };
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path,
    };
    let mut split: Vec<(&'static str, AnalysisOutput)> = deferred_entry_passes()
        .iter()
        .filter(|pass| enabled(pass.id()))
        .map(|pass| {
            let mut out = pass.run(&ctx);
            if let Some(view) = &view {
                crate::loader::relocrebase::retain_in_image(&mut out, view);
            }
            (pass.id(), out)
        })
        .collect();
    sanitize_all_names(&mut split);
    split
}

/// The Listing/xref-tier **consumer** passes — those that read the built Listing
/// (`ctx.listing`) instead of (or in addition to) the parsed object. They are
/// kept OUT of [`passes_for`] because they only run when the Listing has been
/// built, which (per the build-timing fix) happens at the deferred commit point
/// (`read symbols`), not at load — see [`run_listing_consumers`].
///
/// The consumers are the discovered-no-return analyzer (`noreturn_disc`, the unlace
/// analog of Ghidra's `FindNoReturnFunctionsAnalyzer`), the structural no-return
/// propagation analyzer (`noreturn_propagate`, the unlace analog of angr's CFGFast
/// call-graph no-return propagation), and the FID fingerprint matcher (`fid`, the
/// unlace analog of Ghidra's FID identification analyzer — re-identify a stripped
/// function by full-hash fingerprint). Each is gated by its own
/// `--option <id> on|off` flag before it runs; the commit-time gate in
/// `engine.rs::analysis_pass_enabled` remains as a defensive boundary.
fn listing_consumer_passes(arch: &Architecture) -> Vec<(bool, Box<dyn AnalysisPass>)> {
    vec![
        (
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnDisc>()
                .0,
            Box::new(crate::noreturn_disc::NoReturnDiscoveredPass),
        ),
        (
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnPropagate>()
                .0,
            Box::new(crate::noreturn_propagate::NoReturnPropagatePass),
        ),
        (
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Fid>()
                .on,
            Box::new(crate::fid::FidPass),
        ),
        // (unlace `itaniumrtti`) Constructor/destructor names from vptr stores: the
        // vtable half runs at load, this half needs the Listing's data edges.
        (
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Itaniumrtti>()
                .0,
            Box::new(crate::rtti::itaniumctors::ItaniumCtorsPass),
        ),
        (
            arch.unlace_options
                .get::<unlace_decomp::coreoptions::Flirt>()
                .0,
            Box::new(crate::flirt::FlirtPass),
        ),
        (
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::SyscallWrappers>()
                .0,
            Box::new(crate::syscallwrappers::SyscallWrappersPass),
        ),
        // (unlace `formatstring static`) The load-time format-string resolver: a
        // Listing consumer like the rest, because the call edges are what it
        // walks. `full` runs it too — the decompile-time loop then covers only
        // the sites it declined.
        (
            arch.unlace_options
                .get::<unlace_decomp::formatstring::FormatStringMode>()
                .resolves_at_load(&arch.archid)
                || (arch
                    .unlace_options
                    .get::<unlace_decomp::formatstring::FormatStringMode>()
                    != unlace_decomp::formatstring::FormatStringMode::Off
                    && unlace_decomp::armfloatargs::applies(arch)),
            Box::new(crate::formatstring::fmtstatic::FormatStringStaticPass),
        ),
        // (unlace `goitabcalls`) Interface parameters of a stripped Go binary,
        // typed from the static itabs its callers pass (call edges and `LEA`
        // data edges of the Listing).
        (
            arch.unlace_options
                .get::<unlace_decomp::goitabcalls::GoItabCalls>()
                .0,
            Box::new(crate::gotypes::itabargs::GoItabArgsPass),
        ),
    ]
}

fn dispatch_if_enabled<T>(enabled: bool, run: impl FnOnce() -> T) -> Option<T> {
    enabled.then(run)
}

/// Build the Listing/xref tier and run the Listing **consumer** passes over it,
/// returning each consumer's output keyed by its [`AnalysisPass::id`] (the same
/// per-pass-split shape as [`run_default_analyses_per_pass`]).
///
/// This is the deferred half of the build-timing fix (PR6). The non-Listing
/// passes run at load (`run_default_analyses_per_pass`), but the Listing build is
/// gated on `--option listing on`, a flag the live CLI sets *after* `load file`
/// (before `read symbols`). So the Listing — and any pass that reads it — must be
/// built/run at the deferred commit point, when the flag is finally in effect.
/// The console calls this from `commit_pending_analysis` (reached at `read
/// symbols`), gated on `arch.unlace_options.get::<unlace_decomp::analysisgates::Listing>().0` or `arch.unlace_options.get::<unlace_decomp::analysisgates::FastFuncdisc>().0`;
/// it parses `bytes`, builds the Listing with funcsym names +
/// Known-no-return/call-fixup seed metadata, and either runs the enabled
/// [`listing_consumer_passes`] passes or emits the fast discovery inventory.
///
/// A parse failure (or no exec ranges) yields an empty list (additive, never
/// fails). Bound to the real-object path: the XML datatest path never calls this, so
/// the parity oracles are structurally untouched.
///
/// `noreturn_seeds`/`callfixup_seeds` are the addresses the load-time Known
/// no-return / call-fixup passes flagged (so the Listing's `DiscoveredFunction`s
/// carry `has_no_return`/`call_fixup`, letting the consumer skip already-modeled
/// callees and seed the fixpoint's terminal set faithfully).
///
/// `committed_entries` is the function-entry set the load-time passes have already
/// agreed on at this point (the caller's merged `entries`), used as additional walk
/// roots under the same `funcstart_patterns` gate as the prologue starts. Without it
/// the walk is rooted only in what [`listing_seeds`] can recompute from the object,
/// so every standalone entry oracle's finding is invisible to the recursive
/// descent.
///
/// `plan` is the walk's thread plan (`unlace --jobs N`, see
/// [`crate::listing::pdecode`]). It is built once, by the caller, and reused
/// across every rebuild below, so the callback generations and the ARM re-seeds
/// pay for the engine recipe, the image share and the context snapshot once.
#[allow(clippy::too_many_arguments)]
pub fn run_listing_consumers(
    bytes: &[u8],
    _image: &ObjectLoadImage,
    arch: &Architecture,
    translate: &dyn Translate,
    noreturn_seeds: &[u64],
    callfixup_seeds: &[u64],
    committed_entries: &[u64],
    cold_entries: &[u64],
    plan: &crate::listing::WalkPlan,
) -> Vec<(&'static str, AnalysisOutput)> {
    run_listing_consumers_without_image(
        bytes,
        arch,
        translate,
        noreturn_seeds,
        callfixup_seeds,
        committed_entries,
        cold_entries,
        plan,
    )
}

#[allow(clippy::too_many_arguments)]
pub fn run_listing_consumers_without_image(
    bytes: &[u8],
    arch: &Architecture,
    translate: &dyn Translate,
    noreturn_seeds: &[u64],
    callfixup_seeds: &[u64],
    committed_entries: &[u64],
    cold_entries: &[u64],
    plan: &crate::listing::WalkPlan,
) -> Vec<(&'static str, AnalysisOutput)> {
    run_listing_consumers_replaying(
        bytes,
        arch,
        translate,
        noreturn_seeds,
        callfixup_seeds,
        committed_entries,
        cold_entries,
        plan,
        None,
    )
}

/// [`run_listing_consumers`], with `frames_replay` standing in for the
/// `armframes` search: a `--jobs` worker passes the parent's
/// [`AnalysisOutput::arm_frames`] record and builds only its final Listing.
#[allow(clippy::too_many_arguments)]
pub fn run_listing_consumers_replaying(
    bytes: &[u8],
    arch: &Architecture,
    translate: &dyn Translate,
    noreturn_seeds: &[u64],
    callfixup_seeds: &[u64],
    committed_entries: &[u64],
    cold_entries: &[u64],
    plan: &crate::listing::WalkPlan,
    frames_replay: Option<&crate::aif::framereplay::ArmFrameReplay>,
) -> Vec<(&'static str, AnalysisOutput)> {
    run_listing_consumers_replaying_observed(
        bytes,
        arch,
        translate,
        noreturn_seeds,
        callfixup_seeds,
        committed_entries,
        cold_entries,
        plan,
        frames_replay,
        None,
    )
}

/// Observe the final accepted Listing once, without enabling a consumer or applying its output.
#[allow(clippy::too_many_arguments, clippy::type_complexity)]
pub fn run_listing_consumers_replaying_observed(
    bytes: &[u8],
    arch: &Architecture,
    translate: &dyn Translate,
    noreturn_seeds: &[u64],
    callfixup_seeds: &[u64],
    committed_entries: &[u64],
    cold_entries: &[u64],
    plan: &crate::listing::WalkPlan,
    frames_replay: Option<&crate::aif::framereplay::ArmFrameReplay>,
    observer: Option<&mut dyn FnMut(&object::File<'_>, &crate::listing::Listing)>,
) -> Vec<(&'static str, AnalysisOutput)> {
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return Vec::new();
    };
    // A relocatable object is laid out synthetically by the loader, so every
    // address this raw `object` view reports is a *pre-link*, section-relative
    // one — a different address space than the Listing decodes in. Seeding the
    // walk with them invents a phantom entry beside each real function
    // (`sub_60` for a symbol at `.text`+0x60, which the loader placed at
    // `0x400060`). Declining costs nothing: this tier exists to find functions an
    // image has no symbol for, and a pre-link object always carries the symbol
    // table the linker is about to consume — which the loader already registers,
    // rebased. See `reloc_object::is_synthetically_laid_out`.
    if crate::loader::reloc_object::is_synthetically_laid_out(&file) {
        return Vec::new();
    }
    // (unlace `ehcold`/`functails`) A withheld cold part is no walk root from any list: the
    // commit drops its entries after the walk, so the committed and cold-fragment lists are
    // filtered here too, not only the oracle seeds.
    let withheld = &arch.unlace_withheld_cold;
    let live = |vma: &u64| {
        let idx = withheld.partition_point(|&(start, _)| start <= *vma);
        !(idx > 0 && *vma < withheld[idx - 1].1)
    };
    let live_committed: Vec<u64> = committed_entries.iter().copied().filter(live).collect();
    let live_cold: Vec<u64> = cold_entries.iter().copied().filter(live).collect();
    let committed_entries: &[u64] = &live_committed;
    let cold_entries: &[u64] = &live_cold;
    let mut seeds = listing_seeds_for_language(&file, bytes, Some(arch.get_description()));
    // (unlace) The fast inventory walk leaves out the functions a Go pclntab
    // names, where the `gopclntab` pass ran and commits them: the pass set
    // follows the load-time verdict, not a later `sourcelang` force.
    // See `pclntab::function_entries`.
    let mut go_entries: Vec<u64> = Vec::new();
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::FastFuncdisc>()
        .0
        && !arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Listing>()
            .0
        && arch.source_lang_detected == unlace_decomp::sourcelang::SourceLang::Go
    {
        go_entries = crate::pclntab::function_entries(&file);
        seeds.retain(|seed| go_entries.binary_search(seed).is_err());
    }
    let bracket_evidence = std::cell::OnceCell::new();
    let bracket = |exec: &[(u64, u64)]| {
        Some(
            bracket_evidence
                .get_or_init(|| crate::aif::aifbracket::BracketEvidence::from_object(&file, exec)),
        )
    };
    // (unlace, recursive-descent discovery) When the prologue-pattern pass is active
    // (`funcstart_patterns`, default-ON for non-x86-64 on `decompile-all`, DIV-20),
    // seed the recursive-descent walk with its `<patternpairs>` function starts too — not
    // just the entry oracles. On a STRIPPED ARM binary the entry oracles seed only the ELF
    // entry, so the walk discovers ~nothing; seeded with the prologue starts it explores
    // the CALL graph out of every discovered function and finds call-only targets that
    // have no recognizable prologue (Ghidra's disassembler-driven recursive descent).
    // betaflight STM32F405: the walk grows 1 -> 1470 discovered functions (Ghidra 1822).
    // Gated by the same flag, so x86-64 (funcstart_patterns off) is unchanged.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
    {
        let execs = crate::entry::executable_sections(&file);
        seeds.extend(
            crate::entry::full_pattern_starts(&file)
                .into_iter()
                .filter(|&vma| crate::entry::in_executable_section(&execs, vma)),
        );
        // (unlace `armdiscseed`) ...and with the entries the LOAD-TIME oracles already
        // committed, which `listing_seeds` cannot see. It rebuilds the seed set from
        // `collect_entries`, so an entry recovered by a standalone pass beside that
        // function -- `armlibcmain`'s non-PIE ARM `main`, `cortexmvectors`' handlers,
        // `eh_frame_full`'s landing pads, `machomain`'s `LC_MAIN` -- was never a root
        // of the walk. On a stripped non-PIE ARM executable that is the whole program:
        // `main` is the only oracle that reaches the body, `_start` hands it to
        // `__libc_start_main` through a literal-pool word rather than a `bl`, and the
        // walk therefore stopped at crt1 while `unlace xrefs` (which seeds off the
        // committed inventory) followed the same call graph and found 41 more
        // functions than `unlace functions` reported.
        seeds.extend(
            committed_entries
                .iter()
                .copied()
                .filter(|&vma| crate::entry::in_executable_section(&execs, vma)),
        );
        seeds.sort_unstable();
        seeds.dedup();
    }
    // (unlace `coldentry`) The extra entries of a multi-entry `.cold` fragment are
    // roots on every architecture: nothing else makes them walk functions, so
    // without them `noreturn_propagate` never concludes their no-return.
    if !cold_entries.is_empty() {
        let execs = crate::entry::executable_sections(&file);
        seeds.extend(
            cold_entries
                .iter()
                .copied()
                .filter(|&vma| crate::entry::in_executable_section(&execs, vma)),
        );
        seeds.sort_unstable();
        seeds.dedup();
    }
    seeds.retain(live);
    let seed_names = funcsym_names(&file);
    let funcsym_seeds = crate::entry::existing_function_addrs(&file, bytes);
    // Every consumer that reads an `Insn`'s disassembly text — the
    // `listing_consumer_passes`, `tailcallentry` and `poolentry` below — is itself
    // gated on `analysis_listing`. When only `fast_funcdisc` asked for this Listing
    // there is no text reader left (AIF's fingerprint re-decodes the two addresses
    // it needs), so the walk skips capturing text: a second SLEIGH parse per
    // instruction. See `listing::decode::decode_one`.
    //
    // The reference model has the same two gated readers and nothing else —
    // `noreturn_disc` (a `listing_consumer_passes` pass) and `tailcallentry` —
    // so a `fast_funcdisc`-only build skips it too. It is not a rounding error
    // on a large image: the walk files an edge per control-flow successor of
    // every instruction, a fall-through included, so a 94 MB `.text` produced 23
    // million edges spread over two `BTreeMap<u64, Vec<Reference>>` that nothing
    // then read.
    let detail = crate::listing::ListingDetail {
        assembly: arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Listing>()
            .0,
        refs: arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Listing>()
            .0,
    };
    let mut listing = crate::listing::Listing::build_with_meta_planned_without_image(
        &file,
        arch,
        translate,
        &seeds,
        &funcsym_seeds,
        &seed_names,
        detail,
        plan,
    );
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::FastFuncdisc>()
        .0
        && matches!(
            file.architecture(),
            object::Architecture::I386 | object::Architecture::X86_64
        )
    {
        // One initial walk plus at most four accepted callback generations. The
        // witness needs two; four retains nested-registration headroom without
        // allowing the old nine-full-walk worst case.
        const MAX_CALLBACK_ROUNDS: usize = 4;
        const MAX_CALLBACK_ROOTS: usize = 1024;
        let mut callback_roots = 0usize;
        let mut examined = std::collections::BTreeSet::new();
        for _ in 0..MAX_CALLBACK_ROUNDS {
            let Some(code_space) = arch.manage().get_default_code_space() else {
                break;
            };
            let candidates: Vec<u64> =
                crate::listing::callbackentry::stack_callback_candidates(&listing)
                    .into_iter()
                    .filter(|target| examined.insert(*target))
                    .collect();
            if candidates.is_empty() {
                break;
            }
            let accepted = crate::aif::validate_referenced_targets(
                &listing,
                translate,
                std::rc::Rc::clone(code_space),
                listing.exec_ranges(),
                candidates,
            );
            if accepted.is_empty() {
                break;
            }
            let remaining = MAX_CALLBACK_ROOTS.saturating_sub(callback_roots);
            if remaining == 0 {
                break;
            }
            let before = seeds.len();
            seeds.extend(accepted.into_iter().take(remaining));
            seeds.sort_unstable();
            seeds.dedup();
            let added = seeds.len() - before;
            if added == 0 {
                break;
            }
            callback_roots += added;
            // (unlace `incrementalwalk`) Continue the walk from the new roots,
            // the way IDA queues only what a new fact affects, instead of
            // decoding the whole program again.
            listing = if arch
                .unlace_options
                .get::<unlace_decomp::analysisgates::Incrementalwalk>()
                .0
            {
                listing.resume(
                    &file,
                    arch,
                    translate,
                    &seeds,
                    &funcsym_seeds,
                    &seed_names,
                    detail,
                    plan,
                )
            } else {
                crate::listing::Listing::build_with_meta_planned_without_image(
                    &file,
                    arch,
                    translate,
                    &seeds,
                    &funcsym_seeds,
                    &seed_names,
                    detail,
                    plan,
                )
            };
        }
    }
    // (unlace `thunkentry`, `addrtakenentry`) Where the walk's own function set is
    // committed (`funcdisc_recursive`, `fast_funcdisc`).
    let walk_committed = (arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0)
        || arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FastFuncdisc>()
            .0;
    // (unlace `addrtakenentry`) Code whose address the program takes and no flow
    // reaches re-seeds the walk, which resumes from the Listing it already has.
    // See `aif/addrtakenentry.rs`.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Addrtakenentry>()
        .0
        && walk_committed
    {
        let evidence = crate::aif::addrtakenentry::AddrTaken::new(&file, bytes);
        if let (Some(evidence), Some(code_space)) =
            (evidence, arch.manage().get_default_code_space())
        {
            for _ in 0..crate::aif::addrtakenentry::MAX_ROUNDS {
                let accepted = evidence.accept(&listing, translate, std::rc::Rc::clone(code_space));
                let before = seeds.len();
                seeds.extend(accepted);
                seeds.sort_unstable();
                seeds.dedup();
                if seeds.len() == before {
                    break;
                }
                listing = listing.resume(
                    &file,
                    arch,
                    translate,
                    &seeds,
                    &funcsym_seeds,
                    &seed_names,
                    detail,
                    plan,
                );
            }
        }
    }
    let mut frame_aif: Option<crate::aif::entrychecks::CheckedAif> = None;
    let mut frame_pointers = None;
    let mut inventory_context_paints = Vec::new();
    let mut retained_entries = Vec::new();
    let mut frames_recovered = false;
    let mut frame_record = None;
    // Recover validated LR-saving ARM/Thumb frames in gaps before fingerprinting,
    // keeping every entry the frameless inventory would report unless the
    // frame-expanded Listing contradicts it. A `--jobs` worker replays the
    // parent's recovery and builds only its final Listing.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::ArmFrames>()
            .inventory
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let memo = std::rc::Rc::new(crate::listing::decodememo::DecodeMemo::new(
                listing.exec_ranges(),
            ));
            let mut frame_cache = match frames_replay {
                Some(_) => None,
                None => Some(crate::aif::raw_arm_frames(
                    &file,
                    &listing,
                    arch,
                    translate,
                    std::rc::Rc::clone(code_space),
                    listing.exec_ranges(),
                    false,
                    Some(&memo),
                )),
            };
            frames_recovered = frames_replay.map_or_else(
                || {
                    frame_cache
                        .as_ref()
                        .is_some_and(|cache| !cache.roots.is_empty())
                },
                |replay| replay.recovered,
            );
            if frames_recovered {
                let independent_seeds = seeds.clone();
                let original = listing;
                let build =
                    |frames: &std::collections::BTreeSet<u64>,
                     pointers: Option<&Vec<u64>>,
                     aif: Option<&crate::aif::entrychecks::CheckedAif>,
                     memo: Option<&crate::listing::decodememo::DecodeMemo>| {
                        let mut seeds: Vec<u64> = independent_seeds
                            .iter()
                            .copied()
                            .chain(frames.iter().copied())
                            .chain(pointers.into_iter().flatten().copied())
                            .chain(
                                aif.iter()
                                    .flat_map(|checked| checked.entries.iter().copied()),
                            )
                            .collect();
                        seeds.sort_unstable();
                        seeds.dedup();
                        let mut modes = crate::listing::framemode::FrameModes::preserving(
                            &frames
                                .iter()
                                .copied()
                                .chain(
                                    aif.iter()
                                        .flat_map(|checked| checked.entries.iter().copied()),
                                )
                                .collect::<Vec<_>>(),
                            &original,
                        );
                        if arch.input_arm_isa_override {
                            modes.retain_decoded_modes();
                        }
                        let listing = crate::listing::Listing::build_tracking_frames_without_image(
                            &file,
                            arch,
                            translate,
                            &seeds,
                            &funcsym_seeds,
                            &seed_names,
                            detail,
                            plan,
                            Some(&mut modes),
                            memo,
                        );
                        (seeds, listing, modes)
                    };
                if let Some(replay) = frames_replay {
                    let frames = replay.frames.iter().copied().collect();
                    frame_pointers = Some(replay.pointers.clone());
                    frame_aif = replay
                        .aif
                        .as_ref()
                        .map(crate::aif::framereplay::AifReplay::checked);
                    let frame_context = translate.context_scope();
                    let modes;
                    (seeds, listing, modes) =
                        build(&frames, frame_pointers.as_ref(), frame_aif.as_ref(), None);
                    retained_entries.clone_from(&replay.retained);
                    inventory_context_paints = modes.decoded_paints();
                    if let Some(context) = frame_context {
                        context.commit();
                    }
                } else {
                    let frame_cache = frame_cache.as_mut().unwrap();
                    let prior = crate::aif::frameretain::prior_inventory(
                        &file,
                        &original,
                        &seeds,
                        |seeds| {
                            crate::listing::Listing::build_with_meta_planned_without_image(
                                &file,
                                arch,
                                translate,
                                seeds,
                                &funcsym_seeds,
                                &seed_names,
                                detail,
                                plan,
                            )
                        },
                        arch,
                        translate,
                        code_space,
                        bracket(original.exec_ranges()),
                        &memo,
                    );
                    let mut frames: std::collections::BTreeSet<u64> =
                        frame_cache.roots.iter().copied().collect();
                    prior.restore(&mut frames, frame_cache);
                    let mut rejected = std::collections::BTreeSet::new();
                    loop {
                        let frame_context = translate.context_scope();
                        let modes;
                        (seeds, listing, modes) = build(
                            &frames,
                            frame_pointers.as_ref(),
                            frame_aif.as_ref(),
                            Some(&memo),
                        );
                        let mut replacements = crate::aif::arm_frame_prefixes(
                            frame_cache,
                            &original,
                            &listing,
                            &frames,
                            &[],
                            frame_context.as_ref(),
                            arch,
                            translate,
                            std::rc::Rc::clone(code_space),
                        );
                        replacements
                            .retain(|&root, &mut prefix| !prior.shields(root, prefix, frame_cache));
                        let stale = if replacements.is_empty() {
                            let mut stale = modes.stale().clone();
                            stale.extend(crate::aif::frameflow::entered(&listing, &frames));
                            stale
                        } else {
                            std::collections::BTreeSet::new()
                        };
                        if !replacements.is_empty() || !stale.is_empty() {
                            rejected.extend(stale);
                            frames.retain(|root| {
                                !replacements.contains_key(root) && !rejected.contains(root)
                            });
                            frames.extend(
                                replacements
                                    .into_values()
                                    .filter(|root| !rejected.contains(root)),
                            );
                            frame_aif = None;
                            frame_pointers = None;
                            continue;
                        }
                        if frame_pointers.is_none() {
                            let probe = translate.context_scope();
                            let found = crate::aif::code_pointer_table_seeds(
                                &file,
                                &listing,
                                translate,
                                std::rc::Rc::clone(code_space),
                                listing.exec_ranges(),
                            );
                            drop(probe);
                            let added = !found.is_empty();
                            frame_pointers = Some(found);
                            if added {
                                continue;
                            }
                        }
                        if arch
                            .unlace_options
                            .get::<unlace_decomp::aif::AifMode>()
                            .enabled()
                            && frame_aif.is_none()
                        {
                            let probe = translate.context_scope();
                            if let Some(scope) = &probe {
                                let _ = scope.protect_variable(b"TMode");
                            }
                            let pointers = if arch
                                .unlace_options
                                .get::<unlace_decomp::analysisgates::Ptrentry>()
                                .0
                            {
                                crate::aif::ptrentry::pointer_entry_seeds(
                                    &file,
                                    &listing,
                                    translate,
                                    std::rc::Rc::clone(code_space),
                                    listing.exec_ranges(),
                                )
                            } else {
                                Vec::new()
                            };
                            let mut checked = crate::aif::entrychecks::run(
                                &listing,
                                Some(&original),
                                arch,
                                translate,
                                std::rc::Rc::clone(code_space),
                                pointers,
                                bracket(listing.exec_ranges()),
                                Some(&memo),
                            );
                            drop(probe);
                            checked.entries.retain(|root| !rejected.contains(root));
                            let added = !checked.entries.is_empty();
                            frame_aif = Some(checked);
                            if added {
                                continue;
                            }
                        }
                        let found: std::collections::BTreeSet<u64> = frame_aif
                            .iter()
                            .flat_map(|checked| {
                                checked
                                    .entries
                                    .iter()
                                    .chain(&checked.pool_entries)
                                    .chain(&checked.pointer_entries)
                            })
                            .copied()
                            .collect();
                        let refuted: std::collections::BTreeSet<u64> = frame_aif
                            .iter()
                            .flat_map(|checked| checked.straight_line.iter().copied())
                            .chain(rejected.iter().copied())
                            .collect();
                        retained_entries = prior.retained(
                            &found,
                            &refuted,
                            &listing,
                            translate,
                            std::rc::Rc::clone(code_space),
                        );
                        inventory_context_paints = modes.decoded_paints();
                        if let Some(context) = frame_context {
                            context.commit();
                        }
                        frame_record = Some(crate::aif::framereplay::ArmFrameReplay {
                            recovered: true,
                            frames: frames.iter().copied().collect(),
                            pointers: frame_pointers.clone().unwrap_or_default(),
                            aif: frame_aif
                                .as_ref()
                                .map(crate::aif::framereplay::AifReplay::of),
                            retained: retained_entries.clone(),
                        });
                        break;
                    }
                }
            } else if frames_replay.is_none() {
                frame_record = Some(crate::aif::framereplay::ArmFrameReplay::default());
            }
        }
    }
    let mut thumb_roots = std::collections::BTreeSet::new();
    let mut thumb_memo = None;
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
        && !frames_recovered
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let raw = crate::aif::raw_thumb_prologue_seeds(
                &file,
                &listing,
                translate,
                std::rc::Rc::clone(code_space),
                listing.exec_ranges(),
            );
            seeds.sort_unstable();
            seeds.dedup();
            let added: Vec<u64> = raw
                .into_iter()
                .filter(|root| seeds.binary_search(root).is_err())
                .collect();
            if !added.is_empty() {
                thumb_roots.extend(&added);
                seeds.extend(added);
                seeds.sort_unstable();
                let memo = thumb_memo.insert(crate::listing::decodememo::DecodeMemo::new(
                    listing.exec_ranges(),
                ));
                listing = crate::listing::Listing::build_tracking_frames_without_image(
                    &file,
                    arch,
                    translate,
                    &seeds,
                    &funcsym_seeds,
                    &seed_names,
                    detail,
                    plan,
                    None,
                    Some(memo),
                );
            }
        }
    }
    // (unlace, Stage-3 ARM discovery) Code-pointer-table gap seeding — the
    // reference-based (vtable / callback / Cortex-M ISR-handler) mirror of Ghidra's
    // `ArmThumbFunctionTableScript` / angr's `_seg_list` pointer scan. After Stages
    // 1-2 have covered the statically-reachable + canonical-LR-prologue population,
    // scan every allocated section for 4-byte code pointers (Thumb bit set) into an
    // UNDEFINED gap whose target BOTH begins with a stack-frame prologue AND passes
    // `check_valid_subroutine`, and RE-SEED the walk with the survivors so it expands
    // each into a full function + discovers its callees. The corroborating pointer
    // reference is what safely admits a non-LR-push prologue (`SUB SP` / `PUSH {..}`
    // no-LR / `VPUSH`) that the LR-only Stage-2 matcher structurally skips; the triple
    // guard (gap-only + prologue + valid-subroutine) keeps precision at ~100% and never
    // chases the angr-over-discovery trap (crazyflie's misread descriptor table).
    // Gated by the same `funcstart_patterns` flag (ARM-only inside
    // `code_pointer_table_seeds`), so x86-64 (funcstart_patterns off) is byte-identical
    // and every non-ARM binary is a strict no-op. Measured recovery (real, ground-truth
    // functions, zero false starts): cf2 +3, usart-stdio +1, betaflight +8.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
        && frame_pointers.is_none()
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let ptr = crate::aif::code_pointer_table_seeds(
                &file,
                &listing,
                translate,
                std::rc::Rc::clone(code_space),
                listing.exec_ranges(),
            );
            if !ptr.is_empty() {
                let before = seeds.len();
                seeds.extend(ptr);
                seeds.sort_unstable();
                seeds.dedup();
                if seeds.len() != before {
                    listing = crate::listing::Listing::build_with_meta_planned_without_image(
                        &file,
                        arch,
                        translate,
                        &seeds,
                        &funcsym_seeds,
                        &seed_names,
                        detail,
                        plan,
                    );
                }
            }
        }
    }
    // A start only the raw Thumb prologue scan found, which the Listing enters by
    // straight-line flow from a function it already has, is that function's
    // shrink-wrapped prologue: the routine tested and returned before saving LR.
    if !thumb_roots.is_empty() {
        for root in committed_entries {
            thumb_roots.remove(root);
        }
        let entered: std::collections::BTreeSet<u64> =
            crate::aif::frameflow::entered(&listing, &thumb_roots)
                .into_iter()
                .filter(|&root| {
                    listing
                        .refs_to(root)
                        .iter()
                        .all(|r| r.kind != crate::listing::RefKind::Call)
                })
                .collect();
        if !entered.is_empty() {
            seeds.retain(|root| !entered.contains(root));
            listing = crate::listing::Listing::build_tracking_frames_without_image(
                &file,
                arch,
                translate,
                &seeds,
                &funcsym_seeds,
                &seed_names,
                detail,
                plan,
                None,
                thumb_memo.as_ref(),
            );
        }
    }
    // (unlace, ARM discovery Stage 3b) `ptrentry` — pointer-referenced entries. Stage
    // 3 above already collects every Thumb code pointer and then rejects the target
    // unless it opens with a stack-frame prologue AND is longer than two
    // instructions; those two predicates drop 1,632 of the 1,671 pointer-class
    // entry-recall misses the arm-entry-granularity proposal measured (93.3% of the
    // missed entries have no frame prologue; 41% are <= 8-byte leaves). This pass
    // re-admits them behind a *containment* precision model — no referencing word
    // may be instruction bytes or share the target's discovered function, which is
    // the `ldr pc,[pc,r]` switch-table shape — plus a terminating-routine validity
    // check with no length floor. See `aif::ptrentry`.
    //
    // Its accepted targets are emitted as an additive `entries` fact and are
    // deliberately NOT re-seeded into the walk (unlike Stages 2-3): measured, the
    // re-seed drops 734 already-recovered entries through the walk's tail-call
    // absorption. Being purely additive is what makes "never removes an entry" a
    // property of the wiring. ARM-only inside `pointer_entry_seeds`, so every
    // non-ARM object is a strict no-op.
    let mut ptrentry_out: Vec<u64> = Vec::new();
    if let Some(checked) = &frame_aif {
        ptrentry_out.clone_from(&checked.pointer_entries);
    } else if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Ptrentry>()
            .0
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            ptrentry_out = crate::aif::ptrentry::pointer_entry_seeds(
                &file,
                &listing,
                translate,
                std::rc::Rc::clone(code_space),
                listing.exec_ranges(),
            );
        }
    }
    // (unlace) A pointer target that runs straight into a start only the raw
    // Thumb scan found is the routine's real entry and the start its
    // shrink-wrapped `push`: the start is withdrawn and the target walked.
    if !thumb_roots.is_empty() && !ptrentry_out.is_empty() {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let uncalled: std::collections::BTreeSet<u64> = thumb_roots
                .iter()
                .copied()
                .filter(|&root| {
                    listing
                        .refs_to(root)
                        .iter()
                        .all(|r| r.kind != crate::listing::RefKind::Call)
                })
                .collect();
            let merged = crate::aif::ptrentry::shrinkwrap_roots(
                translate,
                std::rc::Rc::clone(code_space),
                listing.exec_ranges(),
                &ptrentry_out,
                &uncalled,
            );
            if !merged.is_empty() {
                let roots: std::collections::BTreeSet<u64> =
                    merged.iter().map(|&(_, root)| root).collect();
                seeds.retain(|s| !roots.contains(s));
                seeds.extend(merged.iter().map(|&(target, _)| target));
                seeds.sort_unstable();
                seeds.dedup();
                listing = crate::listing::Listing::build_tracking_frames_without_image(
                    &file,
                    arch,
                    translate,
                    &seeds,
                    &funcsym_seeds,
                    &seed_names,
                    detail,
                    plan,
                    None,
                    thumb_memo.as_ref(),
                );
            }
        }
    }
    let mut fast_pointer_seeds = Vec::new();
    let mut fast_walked: Vec<u64> = Vec::new();
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::FastFuncdisc>()
        .0
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            fast_pointer_seeds = crate::fast_funcdisc::pointer_table_seeds(
                &file,
                &listing,
                translate,
                std::rc::Rc::clone(code_space),
            );
        }
        // (unlace) An accepted pointer-table target is a function, and so is an
        // entry a load-time pass committed (a Delphi VMT method), so their
        // direct calls are functions too: the walk resumes from them. A Delphi
        // image's memory-manager record (`GetMem`/`FreeMem`/`ReallocMem`,
        // reached only through that writable record) otherwise lists the
        // three without any of the allocator they call. The functions the
        // walk had before are kept, so the resume only adds entries.
        // A Go image's pclntab functions stay out of the roots, as above.
        let execs = crate::entry::executable_sections(&file);
        let before = seeds.len();
        seeds.extend(
            fast_pointer_seeds.iter().copied().chain(
                committed_entries
                    .iter()
                    .copied()
                    .filter(|&vma| crate::entry::in_executable_section(&execs, vma))
                    .filter(|vma| go_entries.binary_search(vma).is_err()),
            ),
        );
        seeds.sort_unstable();
        seeds.dedup();
        if seeds.len() != before {
            fast_walked = listing.functions().map(|(&vma, _)| vma).collect();
            listing = listing.resume(
                &file,
                arch,
                translate,
                &seeds,
                &funcsym_seeds,
                &seed_names,
                detail,
                plan,
            );
        }
    }

    // Seed the function model's no-return / call-fixup flags from the load-time
    // Known passes so the consumer skips already-modeled callees and the fixpoint
    // treats a Known-no-return callee as terminal.
    let listing = listing.with_noreturn_seeds(noreturn_seeds, callfixup_seeds);
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: Some(&listing),
        image_path: None,
    };
    let mut out: Vec<(&'static str, AnalysisOutput)> = if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
    {
        listing_consumer_passes(arch)
            .into_iter()
            .filter_map(|(enabled, pass)| {
                let id = pass.id();
                dispatch_if_enabled(enabled, || (id, pass.run(&ctx)))
            })
            .collect()
    } else {
        Vec::new()
    };

    // The Aggressive Instruction Finder gap-walk (`aif`) is NOT a pure-`ctx`
    // pass: it speculatively decodes undecoded gap bytes, so it needs the live
    // SLEIGH decoder (the upstream builds its own `PseudoDisassembler`). Drive it
    // here with the same `translate`/code-space the Listing build held. Its option
    // is checked before this speculative work; the output keeps the `aif` id for
    // the defensive commit gate. A no-op (empty `entries`) when there is no code
    // space.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::aif::AifMode>()
            .enabled()
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let mut aif_out = AnalysisOutput::default();
            let checked = frame_aif.unwrap_or_else(|| {
                crate::aif::entrychecks::run(
                    &listing,
                    None,
                    arch,
                    translate,
                    std::rc::Rc::clone(code_space),
                    ptrentry_out.clone(),
                    bracket(listing.exec_ranges()),
                    None,
                )
            });
            let bodies = crate::entry::sized_function_bodies(&file);
            aif_out.entries = checked.entries;
            // (unlace `aifdataveto`) IDA rolls a speculative code run back when
            // the program reads or writes any of it as data.
            if arch
                .unlace_options
                .get::<unlace_decomp::analysisgates::Aifdataveto>()
                .0
            {
                if let Some(data) = arch.manage().get_default_data_space() {
                    let targets = crate::listing::accesswidth::data_targets(
                        &listing, translate, code_space, data,
                    );
                    let flow_target = |e: u64| {
                        listing.refs_to(e).iter().any(|r| {
                            matches!(
                                r.kind,
                                crate::listing::RefKind::Call | crate::listing::RefKind::Code
                            )
                        })
                    };
                    let mut veto_out = AnalysisOutput::default();
                    let string_at = |e: u64| crate::aif::aifstringveto::string_at(&file, e);
                    veto_out.data_vetoed = listing
                        .functions()
                        .filter(|(_, f)| !f.from_symbol)
                        .map(|(&e, _)| e)
                        .filter(|&e| (targets.contains(&e) || string_at(e)) && !flow_target(e))
                        .collect();
                    out.push(("aifdataveto", veto_out));
                    aif_out.entries.retain(|&e| {
                        let span = listing
                            .instruction_at(e)
                            .map_or(1, |i| u64::from(i.len).max(1));
                        flow_target(e)
                            || (targets.range(e..e.saturating_add(span)).next().is_none()
                                && !string_at(e))
                    });
                }
            }
            aif_out
                .entries
                .retain(|&vma| !crate::entry::inside_body(&bodies, vma));
            if !checked.pool_entries.is_empty() {
                let mut pool_out = AnalysisOutput::default();
                pool_out.entries = checked.pool_entries;
                out.push(("poolentry", pool_out));
            }
            out.push(("aif", aif_out));
        }
    }

    // (unlace, Listing-tier tail-call split) The recursive-descent walk has no notion of a
    // tail call: `walk.rs` makes a new function only at a CALL target and treats every
    // other flow target as a same-function successor, so a routine reached only by a
    // tail `B` is absorbed into its caller and never becomes a function. This consumer
    // reads the COMPLETED walk and admits such a target on a containment model. It is
    // run after every re-walk stage so it sees the richest Listing, and its output is a
    // pure `entries` fact — the Listing is never rebuilt, which is what makes "this
    // option can never remove an entry" a property of the wiring (the walk's
    // instruction closure is invariant under the split; see
    // `listing/tailcallentry.rs`).
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Tailcallentry>()
            .0
    {
        let mut tce_out = AnalysisOutput::default();
        tce_out.entries = crate::listing::tailcallentry::tail_call_entries(
            &file,
            &listing,
            arch.unlace_options
                .get::<unlace_decomp::analysisgates::Tailcallentryall>()
                .0,
        );
        out.push(("tailcallentry", tce_out));
    }

    // (unlace `funcchunks`) The flow body of every function, for the inventory
    // `size` the console reports.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Funcchunks>()
            .0
    {
        let model = crate::listing::funcchunks::ChunkModel::build(&listing);
        let mut fc_out = AnalysisOutput::default();
        fc_out.function_bodies = listing
            .functions()
            .filter_map(|(&e, _)| Some((e, model.chunks(e)?.iter().map(|&(s, end)| end - s).sum())))
            .collect();
        out.push(("funcchunks", fc_out));
    }

    // (unlace `calltable`) Call tables add their targets as entries; a discovered
    // entry on a switch case that nothing calls is not a function.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Calltable>()
            .0
        && listing.has_refs()
    {
        let tables = crate::listing::calltable::scan(&file, &listing, arch, translate);
        let mut ct_out = AnalysisOutput::default();
        ct_out.entries = tables.entries;
        ct_out.case_entries = tables.case_entries;
        out.push(("calltable", ct_out));
    }

    // (unlace `globalwidth`) The access width of each symbol-table data object.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Globalwidth>()
            .0
    {
        if let (Some(code), Some(data)) = (
            arch.manage().get_default_code_space(),
            arch.manage().get_default_data_space(),
        ) {
            use object::read::{Object, ObjectSymbol};
            let objects: Vec<(u64, u64)> = file
                .symbols()
                .chain(file.dynamic_symbols())
                .filter(|s| {
                    s.kind() == object::SymbolKind::Data && s.address() != 0 && s.size() > 0
                })
                .map(|s| (s.address(), s.size()))
                .collect();
            let mut gw_out = AnalysisOutput::default();
            gw_out.global_widths = crate::listing::accesswidth::access_widths(
                &listing, translate, code, data, &objects,
            );
            out.push(("globalwidth", gw_out));
        }
    }

    // (unlace `callerreads`) Where each direct call returns to, for the decompile
    // step to read a `void` function's callers from.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && listing.has_refs()
    {
        let mut cr_out = AnalysisOutput::default();
        cr_out.call_returns = crate::listing::callerreads::call_returns(&listing);
        out.push(("callerreads", cr_out));
    }

    // (unlace `poolextents`) The ARM32 literal pools the Listing's trusted
    // instructions prove, for the flow walk's `funcboundflow` bound. See
    // `listing/poolextents.rs`.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && listing.has_assembly()
        && crate::loadimage_object::is_arm32_language(&arch.archid)
    {
        if let Some(code_space) = arch.manage().get_default_code_space() {
            let mode = crate::aif::poolentry::DecodeMode {
                arch,
                code_space: std::rc::Rc::clone(code_space),
            };
            let mut pe_out = AnalysisOutput::default();
            pe_out.arm_pool_extents = crate::listing::poolextents::pool_extents(
                &listing,
                &|at, operands| crate::aif::poolentry::literal_target(at, operands, &mode),
                &crate::aif::poolentry::wide,
            );
            out.push(("poolextents", pe_out));
        }
    }

    // (unlace `thunkentry`) The targets of the walk's jump thunks join the walk's own
    // function set wherever that set is committed. See `listing/thunkentry.rs`.
    let thunk_targets = if walk_committed {
        let aggressive = arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::AggressiveThunks>()
            .0;
        crate::listing::thunkentry::thunk_entries(&file, &listing, aggressive)
    } else {
        Vec::new()
    };

    // (unlace, recursive-descent discovery) Promote the walk's discovered functions — the
    // CALL targets it followed from the (prologue-seeded) roots — to committed function
    // entries. This is the commit step that turns the `walk.rs` two-level worklist
    // recursive descent into actual functions (Ghidra's disassembler-driven
    // CreateFunctionCmd analog); the commit arm names them `sub_<addr>` and dedups against
    // the already-committed set. Gated by `funcdisc_recursive` → the same
    // `analysis_funcstart_patterns` flag, so x86-64 (funcstart_patterns off) is byte-identical.
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        && arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::FuncstartPatterns>()
            .0
    {
        let mut rd_out = AnalysisOutput::default();
        rd_out.entries = listing
            .functions()
            .map(|(&vma, _)| vma)
            .chain(thunk_targets.iter().copied())
            .collect();
        rd_out.entries.sort_unstable();
        out.push(("funcdisc_recursive", rd_out));
    }
    if !ptrentry_out.is_empty() {
        let mut pe_out = AnalysisOutput::default();
        pe_out.entries = ptrentry_out;
        out.push(("ptrentry", pe_out));
    }
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::FastFuncdisc>()
        .0
    {
        let mut fast_out = AnalysisOutput::default();
        fast_out.entries = listing
            .functions()
            .map(|(&vma, _)| vma)
            .chain(fast_walked)
            .chain(fast_pointer_seeds)
            .chain(thunk_targets)
            .collect();
        fast_out.entries.sort_unstable();
        fast_out.entries.dedup();
        out.push(("fast_funcdisc", fast_out));
    }
    // (unlace `flowmode`) The proven ARM code whose mode the context database
    // disagrees with after the walk. The commit paints it after every other
    // decode-mode paint, so those still reach all other code as before.
    let mode_paints = listing.decode_mode_paints();
    if !mode_paints.is_empty() {
        let mut mode_out = AnalysisOutput::default();
        mode_out.context_paints = mode_paints;
        out.push(("flowmode", mode_out));
    }
    if !inventory_context_paints.is_empty()
        || !retained_entries.is_empty()
        || frame_record.is_some()
    {
        let mut modes = AnalysisOutput::default();
        modes.inventory_context_paints = inventory_context_paints;
        modes.entries = retained_entries;
        modes.arm_frames = frame_record;
        out.push(("armframes", modes));
    }
    if let Some(observer) = observer {
        observer(&file, &listing);
    }
    sanitize_all_names(&mut out);
    out
}

/// Run the **deferred** UEFI module markup ([`crate::uefi::UefiPass`]) at the
/// commit point: it follows the service tables through the code, which it
/// decodes through the engine `Translate`, and that has the image only after
/// the load-time list ran. The pass declines every image that is not a PE with
/// an EFI subsystem.
pub fn run_uefi(
    bytes: &[u8],
    arch: &Architecture,
    image_path: Option<&std::path::Path>,
    entry_names: bool,
) -> AnalysisOutput {
    if !crate::uefi::is_efi_image(bytes) {
        return AnalysisOutput::default();
    }
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path,
    };
    let mut out = crate::uefi::UefiPass { entry_names }.run(&ctx);
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// (unlace `vtabletypes`) Run the **deferred** MSVC constructor/destructor
/// recovery ([`crate::rtti::msvcctors`]) at the commit point: it walks
/// candidate functions through the engine `Translate`, which has the image
/// only after the load-time list ran. It declines every image that is not an
/// x86 or x86-64 PE.
pub fn run_msvc_ctors(
    bytes: &[u8],
    arch: &Architecture,
    image_path: Option<&std::path::Path>,
) -> AnalysisOutput {
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    if file.format() != object::BinaryFormat::Pe {
        return AnalysisOutput::default();
    }
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path,
    };
    let mut out = crate::rtti::msvcctors::run(&ctx);
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// Run the **deferred** COM markup ([`crate::com::ComPass`]) at the commit
/// point, only when its option is on: it builds the interface types into the
/// engine's type factory, so a run with the option off creates none. The pass
/// declines every image that is not a PE.
pub fn run_com(bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path: None,
    };
    let mut out = crate::com::ComPass.run(&ctx);
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// Run the **deferred** Go source-position comments (`option gopcln`) at the
/// commit point, where the option is in effect: [`crate::pclntab::gopcln`]'s
/// passes read it, and a load-time pass sees only the constructor default
/// (`off`), so registered at load they never wrote a comment. Both passes decline
/// an image without a Go pclntab.
pub fn run_gopcln(path: &str, bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let Ok(image) = crate::loadimage_object::ObjectLoadImage::from_bytes_silent(path, bytes) else {
        return AnalysisOutput::default();
    };
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: Some(&image),
        arch,
        listing: None,
        image_path: None,
    };
    let mut out = crate::pclntab::gopcln::GoPclnPass.run(&ctx);
    out.merge(crate::pclntab::gopcln::GoPclnLinesPass.run(&ctx));
    out
}

/// Run the **deferred** DriverKit IORPC typing (`option dextrpc`) at the
/// commit point, only when its option is on: the load-time `osclassinfo`
/// pass sees the architecture's constructor defaults, so a gate read there
/// never saw `on`, and the run builds types into the engine's factory.
pub fn run_dextrpc(bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let Ok(file) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path: None,
    };
    let mut out = crate::iokit::dextrpc::run(&ctx);
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// Build an [`AnalysisCtx`] and run the **deferred** scalar/operand reference-markup
/// pass ([`crate::operand_refs::OperandRefsPass`]), returning its output keyed by
/// the pass id (`"operand_refs"`).
///
/// Like the Listing tier (PR6), this pass must run at the deferred commit point
/// rather than at load: it linear-decodes the executable sections through the
/// engine `Translate`, and the program loadimage is only attached to the engine's
/// `Sleigh` *after* the load-time pass list runs (`set_loader` in
/// `bootstrap_from_object`). A load-time decode would find no bytes (every decode
/// fails). The console calls this from `commit_pending_analysis` (reached at `read
/// symbols`, after `set_loader`), gated on `arch.unlace_options.get::<unlace_decomp::analysisgates::OperandRefs>().0`
/// (`--option operand_refs on`). `ctx.listing` is `None` — the pass does its own
/// linear decode, independent of the Listing tier (which never populates the data
/// references this pass needs; see `docs/history/listing-tier-design.md` §2.2).
///
/// A parse failure yields an empty output (additive, never fails). Bound to the
/// real-ELF path: the XML datatest path never calls this, so the parity oracles
/// are structurally untouched.
pub fn run_operand_refs(bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    // (unlace `relocrebase`, GH-289) This pass scans section bytes and emits
    // address-keyed string/readonly facts, so it takes the same rebased view the
    // load-time list does — otherwise turning it on for a `.o` would reintroduce
    // pre-link addresses at the deferred commit.
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path: None,
    };
    let mut out = crate::operand_refs::OperandRefsPass.run(&ctx);
    if let Some(view) = &view {
        crate::loader::relocrebase::retain_in_image(&mut out, view);
    }
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// (unlace `addrtable`) The address-table pass over the same rebased view the
/// load-time list takes, run at the commit point once its gate is known.
pub fn run_addrtable(
    bytes: &[u8],
    arch: &Architecture,
    image_path: Option<&std::path::Path>,
) -> AnalysisOutput {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path,
    };
    let mut out = crate::addrtable::AddrTablePass::default().run(&ctx);
    if let Some(view) = &view {
        crate::loader::relocrebase::retain_in_image(&mut out, view);
    }
    out
}

/// (unlace `widestrings32`) The 4-byte string width alone, for a run with
/// `operand_refs` off: the same linear decode [`run_operand_refs`] does, for the
/// operand targets and table uses the facts weigh, without that pass's own facts.
/// Takes the same rebased view of a relocatable object.
pub fn run_wide_strings32(bytes: &[u8], arch: &Architecture) -> AnalysisOutput {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: None,
        arch,
        listing: None,
        image_path: None,
    };
    let mut out = crate::operand_refs::wide_strings32_alone(&ctx);
    if let Some(view) = &view {
        crate::loader::relocrebase::retain_in_image(&mut out, view);
    }
    out
}

/// The on-disk path of a load image, for
/// [`AnalysisCtx::image_path`](crate::pass::AnalysisCtx::image_path).
///
/// The load image already carries the name it was opened under (the `LoadImage`
/// `filename` member, which the bootstrap sets to the path the user named), so
/// the single derivation point is here rather than a new argument on every
/// driver entry. `None` when that name does not resolve to an existing file —
/// an in-memory or synthesized image (a test harness, a Ghidra-provided program)
/// has no companion files to find, and a pass must not probe the working
/// directory on the strength of a name that is not a path.
pub fn image_on_disk_path(image: &ObjectLoadImage) -> Option<&std::path::Path> {
    use unlace_sleigh::loadimage::LoadImage;
    let name = image.get_file_name();
    let path = std::path::Path::new(name);
    path.is_file().then_some(path)
}

/// Extract `(addr, name)` for every text/function symbol in the object — the name
/// overlay the Listing seeds its `DiscoveredFunction`s with, so a discovered
/// callee resolves to its real name (e.g. the static `die` wrapper) instead of
/// `sub_<addr>`. ASCII/UTF-8 names only (a non-UTF-8 name is skipped).
fn funcsym_names(file: &object::File) -> Vec<(u64, String)> {
    use object::SymbolKind;
    use object::read::{Object, ObjectSymbol};
    let mut out: Vec<(u64, String)> = Vec::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let addr = sym.address();
        if addr == 0 {
            continue;
        }
        if let Ok(name) = sym.name() {
            if !name.is_empty() {
                out.push((addr, name.to_string()));
            }
        }
    }
    out
}

/// Parse `bytes` as an object file, build an [`AnalysisCtx`], and run every
/// [`default_passes`] pass, returning the merged [`AnalysisOutput`].
///
/// This keeps `object::File` an internal concern of `unlace-analysis` (the crate
/// that already depends on `object`): the console hands in the image bytes, the
/// opened [`ObjectLoadImage`], and the resolved [`Architecture`], and gets back
/// flat facts to commit. A parse failure yields an empty output (the analyses
/// are additive and never fail — the funcsym stream is committed separately).
pub fn run_default_analyses(
    bytes: &[u8],
    image: &ObjectLoadImage,
    arch: &Architecture,
    translate: &dyn Translate,
) -> AnalysisOutput {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return AnalysisOutput::default();
    };
    // (unlace `relocrebase`, GH-289) A relocatable object is laid out synthetically
    // by the loader, so the raw view's addresses are pre-link ones. Re-present it
    // in the loaded image's address space before any pass reads it; `None` (a
    // linked image, or the gate off) keeps the raw view byte for byte.
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    // Source-language detection runs once, before pass selection, and shapes the
    // pass list (the unlace analog of `SourceLanguageAnalyzer` running early and
    // gating the language-specific analyzers).
    let compiler = crate::sourcelang::effective_compiler(&file, bytes);
    // Listing/xref tier (design §1.3): built once, before the pass loop, only
    // when `--option listing on` (default-off ⇒ `None` ⇒ no decode work, byte
    // -identical to today). Owned here so it outlives the pass loop, borrowed
    // read-only by every consumer pass via `ctx.listing`.
    let seeds = listing_seeds_for_language(&file, bytes, Some(arch.get_description()));
    let listing = arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        .then(|| crate::listing::Listing::build_without_image(&file, arch, translate, &seeds));
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: Some(image),
        arch,
        listing: listing.as_ref(),
        image_path: image_on_disk_path(image),
    };
    let format = file.format();
    let mut out = run_analyses(&ctx, &passes_for(compiler, format));
    if let Some(view) = &view {
        crate::loader::relocrebase::retain_in_image(&mut out, view);
    }
    out.sanitize_names(symbolnamechars_mode());
    out
}

/// Like [`run_default_analyses`], but keep each pass's output keyed by its
/// [`AnalysisPass::id`] instead of merging.
///
/// This is the per-run-gating entry: the console stashes the per-pass split at
/// load and commits only the **enabled** passes' facts at `read symbols` (after
/// the per-pass `--option <id> on|off` flags have been applied). The id is the
/// pass's `id()` string, which doubles as its settable-option name (`phases.toml`
/// + `UNLACE_OPTION_NAMES`). A parse failure yields an empty list (additive, never
/// fails). Pairs preserve pass order so the commit order is deterministic.
pub fn run_default_analyses_per_pass(
    bytes: &[u8],
    image: &ObjectLoadImage,
    arch: &Architecture,
    translate: &dyn Translate,
) -> Vec<(&'static str, AnalysisOutput)> {
    let Ok(raw) = crate::loadimage_object::parse_object(bytes) else {
        return Vec::new();
    };
    // (unlace `relocrebase`, GH-289) See `run_default_analyses`: a relocatable
    // object is re-presented in the loaded image's address space so every pass
    // below produces an already-rebased fact. `None` ⇒ the raw pre-link view.
    let view = crate::loader::relocrebase::rebased_view(&raw, bytes);
    let (file, bytes) = crate::loader::relocrebase::select(raw, bytes, &view);
    let compiler = crate::sourcelang::effective_compiler(&file, bytes);
    // Listing/xref tier (design §1.3): built once, before the pass loop, only
    // when `arch.unlace_options.get::<unlace_decomp::analysisgates::Listing>().0` (i.e. `--option listing on`). Default-off ⇒
    // `.then(...)` is `None` ⇒ no decode work, `ctx.listing == None`, and the
    // real-ELF bootstrap is byte-identical to today. The `Listing` is owned here
    // (same lifetime shape as `file`), outlives the pass loop, and is borrowed
    // read-only by every consumer pass via `ctx.listing`.
    let seeds = listing_seeds_for_language(&file, bytes, Some(arch.get_description()));
    let listing = arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Listing>()
        .0
        .then(|| crate::listing::Listing::build_without_image(&file, arch, translate, &seeds));
    let ctx = AnalysisCtx {
        file: &file,
        bytes,
        image: Some(image),
        arch,
        listing: listing.as_ref(),
        image_path: image_on_disk_path(image),
    };
    let format = file.format();
    let mut split: Vec<(&'static str, AnalysisOutput)> = passes_for(compiler, format)
        .iter()
        .filter(|pass| load_pass_enabled(pass.id()))
        .map(|pass| {
            let mut out = pass.run(&ctx);
            if let Some(view) = &view {
                crate::loader::relocrebase::retain_in_image(&mut out, view);
            }
            (pass.id(), out)
        })
        .collect();
    sanitize_all_names(&mut split);
    split
}

/// (unlace `symbolnamechars`, GH-340) Sanitize every recovered NAME in a per-pass
/// split, reading the gate once for the whole batch.
///
/// A pass's name is binary-supplied just like a `.symtab` one -- a DWARF
/// `DW_AT_name`, a Go `pclntab` entry, a PDB public symbol -- and reaches emitted
/// C through the same printer, so it is sanitized at the same mint rather than
/// downstream. See [`AnalysisOutput::sanitize_names`].
fn sanitize_all_names(split: &mut [(&'static str, AnalysisOutput)]) {
    let mode = symbolnamechars_mode();
    if mode == unlace_decomp::symbolnamechars::NameChars::Off {
        return;
    }
    for (_, out) in split.iter_mut() {
        out.sanitize_names(mode);
    }
}

#[cfg(test)]
mod tests;
