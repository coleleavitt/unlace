//! The on/off gates of the analysis tier's passes (`unlace-analysis`, run by the console
//! before decompilation), registered as kuna options.

crate::kuna_flag!(
    /// (kuna `strcodelen`) Bound `&str` literals by the length the code loads beside them.
    Strcodelen,
    "strcodelen",
    "code-side Rust &str lengths",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the no-return-known pass (`noreturn_known`); default on.
    NoreturnKnown,
    "noreturn_known",
    "No-return-known analysis pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the libgcc DI-mode `__divdi3` contract on SPARC32 BE ELF
    /// (`libgccsigs`); default off.
    Libgccsigs,
    "libgccsigs",
    "libgcc __divdi3 and __stack_chk_fail_local contracts",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Gate the Go `_type` descriptor globals — the `gotypes` harvest's
    /// typed-data facts (`gotypeglobals`); default on.
    GoTypeGlobals,
    "gotypeglobals",
    "Go type-descriptor globals",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the arm64e virtual-call resolution (`arm64evcall`).
    /// Default on.
    Arm64evcall,
    "arm64evcall",
    "arm64e virtual-call resolution",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the UEFI module markup pass (`uefi`); default on.
    Uefi,
    "uefi",
    "Gate the UEFI module markup pass (`uefi`); default on.",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Cortex-M System Control Space globals (`cortexmscs`);
    /// default on. Inert unless the image is a Cortex-M one.
    Cortexmscs,
    "cortexmscs",
    "Cortex-M System Control Space globals",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the COM id and interface pass (`com`); default on.
    Com,
    "com",
    "COM class and interface ids, interface typing",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the string-literal pass (`strings`); default on.
    Strings,
    "strings",
    "String-literal analysis pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the 2-byte (UTF-16LE) width of the string-literal pass
    /// (`widestrings`); default on. Off drops the wide facts at the commit, so the
    /// markup is exactly the 1-byte pass's.
    Widestrings,
    "widestrings",
    "UTF-16LE width of the string-literal pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the 4-byte (`wchar_t`/`char32_t`) width of the string-literal
    /// pass (`widestrings32`); default off, on in the aggressive preset. Off
    /// drops the `wchar4[N]` facts at the commit.
    Widestrings32,
    "widestrings32",
    "UTF-32 width of the string-literal pass",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Gate the entry-discovery pass (`entry_disc`); default on.
    EntryDisc,
    "entry_disc",
    "Entry-discovery analysis pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// Bounded i386 switch successors in the discovery Listing; default off.
    X86listingswitch,
    "x86listingswitch",
    "Bounded i386 switch successors in the discovery Listing",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Make code whose address the program takes, and that no flow
    /// reaches, a function entry (`addrtakenentry`); default **on**. A function
    /// called only through a pointer that a `lea`/`mov`/`push` materializes, or
    /// (PE) that a relocated word before the section's first `.pdata` record
    /// holds, was folded into the function before it. On, such a target joins the
    /// walk's committed set when it is undecoded, follows a non-falling
    /// instruction and padding only, is not a label of the function taking it,
    /// and its own flow ends like a function's. x86-64 only, and not on a Go
    /// binary. Off restores the previous discovery set exactly.
    Addrtakenentry,
    "addrtakenentry",
    "Address-taken code function entries",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Name the ELF routine crt1 hands to `__libc_start_main` `main` and
    /// declare it `int main(int argc, char **argv, char **envp)` (`elfmain`);
    /// default **on**. Entry oracle 4 already decodes that address on x86-64,
    /// AArch64, ARM and RISC-V, but seeds it address-only, so a stripped ELF
    /// reports its own starting point as one more `sub_<addr>` with whatever
    /// prototype reading its body alone produces — `unsigned long sub_26a0(int
    /// a0,char **a1)` on a stripped `-O2` `fmt`, where the return type is a
    /// guess (the value is consumed outside the image) and the two slots exist
    /// only because this `main` happens to read them. The declaration is applied
    /// LOCKED, so a body-driven parameter in a register past the third is not
    /// kept. An image that names its own `main` keeps the name and gets the
    /// declaration. ELF only, refused on an image that names no
    /// `__libc_start_main` and on an address that carries a function symbol
    /// other than `main`. Off restores the `sub_<addr>` / width-only form
    /// exactly.
    Elfmain,
    "elfmain",
    "ELF libc-start main naming + prototype",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the `.eh_frame` LSDA landing-pad discovery sub-feature of the
    /// always-on entry-discovery pass (`eh_frame_full`, the GccExceptionAnalyzer
    /// `.gcc_except_table` markup); default **off** (output-changing: adds the
    /// discovered exception-handler landing pads as function entries).
    EhFrameFull,
    "eh_frame_full",
    ".eh_frame LSDA landing-pad discovery",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Gate the Mach-O `__unwind_info` function-start discovery pass
    /// (`unwindstarts`); default **off** (output-changing: adds the function
    /// starts the linker recorded in `__TEXT,__unwind_info`, which matter only on
    /// an image whose `LC_FUNCTION_STARTS` was stripped).
    Unwindstarts,
    "unwindstarts",
    "Mach-O __unwind_info function-start discovery",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Mach-O bound-slot naming pass (`machobinds`); default **on**.
    Machobinds,
    "machobinds",
    "Mach-O bound-slot import naming",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Mach-O `__eh_frame` FDE function-start pass
    /// (`machoehframe`); default **on**.
    Machoehframe,
    "machoehframe",
    "Mach-O __eh_frame FDE function-start discovery",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) List the handlers of a 32-bit PE's MFC message maps as functions
    /// (option `mfcmsgmap`).  See `unlace_analysis::entry::kuna_mfcmsgmap`.
    Mfcmsgmap,
    "mfcmsgmap",
    "MFC message-map handler discovery",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) A relocated pointer to an MSVC frame prologue on a 32-bit PE is a
    /// function entry (option `msvcptrentry`).  See
    /// `unlace_analysis::entry::kuna_msvcptrentry`.
    Msvcptrentry,
    "msvcptrentry",
    "Relocated MSVC prologue-pointer function discovery",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Withhold an exception-cleanup `.cold` fragment from the function
    /// list (option `ehcold`).  See `unlace_analysis::entry::kuna_ehcold`.
    Ehcold,
    "ehcold",
    "Exception-cleanup .cold fragment suppression",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Keep every single-owner `.cold` part out of the function list, as IDA
    /// keeps a function tail (option `functails`). See
    /// `unlace_analysis::entry::kuna_ehcold::cold_tails`.
    Functails,
    "functails",
    "Single-owner .cold parts kept as their owner's tails",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Note a function's hidden landing pads in its header (option `ehnote`).
    Ehnote,
    "ehnote",
    "Hidden landing-pad note",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the **full byte-pattern function-start** pass
    /// (`funcstart_patterns`); default **off** (output-changing: it discovers more
    /// functions). The faithful port of Ghidra's `FunctionStartAnalyzer` over the
    /// entire vendored pattern corpus (`entry/patterns/*.xml`, the
    /// `<patternpairs>` pre/post sequences + bare `<funcstart/>` patterns), as a
    /// SEPARATE pass from `entry_disc` (whose always-on oracle 5 ports only a
    /// minimal three-prologue subset). When on, a stripped binary recovers many
    /// more function starts (e.g. `push rbx; mov rbx,rdi` after NOP padding); the
    /// commit hook adds each as `sub_<addr>`, idempotent against the funcsym stream
    /// + the `entry_disc` entries. Default-off ⇒ the pass's facts are dropped at
    /// commit (`engine.rs::analysis_pass_enabled`) and every parity gate is
    /// byte-identical. Real-ELF/PE/Mach-O path only ⇒ the XML datatest oracle is
    /// structurally untouched.
    FuncstartPatterns,
    "funcstart_patterns",
    "Full byte-pattern function-start pass",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Widen the ARM Cortex-M hardware vector-table signature
    /// (`cortexmvectors`); default **off** (output-changing: it discovers more
    /// functions). The shipped signature confirms a table only when it starts a
    /// section the loader maps executable, its stack word is in the architectural
    /// SRAM block, and its reset word equals `e_entry` — which rejects the
    /// `A`-only `.isr_vector` a bare-metal link script normally emits, a CCM/TCM
    /// stack, and any image whose ELF entry symbol is not the reset vector. When
    /// on, a table is confirmed by a run of at least three Thumb handler pointers
    /// behind a plausible SRAM/CCM/TCM stack word, in any allocated section — so
    /// the reset/exception handler seeds and the whole-image Thumb region paint
    /// arm on firmware they silently skipped. The widened scan runs only where the
    /// shipped signature found nothing, so it can add entries but never remove
    /// one. ARM-only; a no-op on every other language and on any ARM object with
    /// no vector table.
    Cortexmvectors,
    "cortexmvectors",
    "Widened ARM Cortex-M vector-table signature",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Discover ARM function entries that are reachable only through a
    /// code-pointer word (`ptrentry`); default **off** (output-changing: it
    /// discovers more functions). The shipped code-pointer scan already finds
    /// every Thumb pointer word but accepts a target only if it opens with a
    /// stack-frame prologue and disassembles into more than two instructions —
    /// which rejects the frameless leaf callbacks and one-instruction `bx lr`
    /// exception handlers that make up most of the pointer-referenced population
    /// on bare-metal firmware. When on, a pointer target is admitted on
    /// *containment* evidence instead: no word referencing it may be the bytes of
    /// a decoded instruction or lie in the same discovered function as the target
    /// (the `ldr pc,[pc,r]` switch-table shape), and its speculative decode must
    /// reach a clean return with no length floor. The accepted entries are purely
    /// additive — the pass never re-seeds the recursive-descent walk — so the
    /// option can add discovered functions but never remove one. ARM-only and
    /// Listing-tier: a no-op without `--option listing on` and on every other
    /// architecture.
    Ptrentry,
    "ptrentry",
    "Pointer-referenced ARM function entries",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Reconstruct the ARM PC-relative literal pools the Listing never
    /// defines as data, and use them to fix the two defects that follow
    /// (`poolentry`); default **off** (output-changing: it both adds and relocates
    /// discovered functions). The AIF gap walk slides its cursor one byte at a time
    /// with no instruction-alignment filter, so a literal pool — data, hence an
    /// undefined gap — is probed byte by byte; on STM32 Thumb the high halfword of
    /// an `0x2000_xxxx` SRAM constant decodes as `movs r0,#0` and clears the
    /// fingerprint gate, so the accepted entry lands one halfword before the real
    /// function and the cursor then jumps past the body. When on, the pools are
    /// recovered from the literal references that already exist and drive two
    /// consumers: an additive entry fact at each pool end that abuts a return, and
    /// suppression of an AIF accept inside a pool whose end carries a replacement
    /// entry (a MOVE, never a delete). ARM-only in effect and Listing-tier: a no-op
    /// without `--option listing on`, without `aif`, and on every architecture whose
    /// constants live in `.rodata` rather than in `.text` interstices.
    Poolentry,
    "poolentry",
    "ARM literal-pool inference (entry recall + AIF phantom suppression)",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `armwalkmode`: the Listing walk decodes each reached instruction in
    /// the ARM mode its control flow carries, on an image whose metadata states
    /// no mode; default on.
    Armwalkmode,
    "armwalkmode",
    "ARM decode mode carried along the Listing walk",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the DWARF recovery pass (`dwarf`); default on.
    Dwarf,
    "dwarf",
    "DWARF recovery analysis pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the DWARF `.debug_line` source-line comment pass (`dwarf_lines`);
    /// default **off** — it changes the decompiled output (adds `/* file:line */`
    /// comments). The kuna analog of Ghidra's `DWARFLineInfoCommentScript`.
    DwarfLines,
    "dwarf_lines",
    "DWARF .debug_line source-line comment pass",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Drop the parameters a `DW_CC_nocall` DWARF subprogram no longer
    /// receives (option `dwarfnocall`).
    Dwarfnocall,
    "dwarfnocall",
    "DWARF nocall parameter drop",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// Recover verified Go scalar/pointer register-ABI signatures from DWARF.
    Godwarfsig,
    "godwarfsig",
    "Go DWARF scalar and pointer signatures",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `dwarfglobaltypes`: lock a DWARF global's declared type.
    Dwarfglobaltypes,
    "dwarfglobaltypes",
    "DWARF global types",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) `dwarfdecls`: type an import's calls by its DWARF declaration.
    Dwarfdecls,
    "dwarfdecls",
    "DWARF declarations of imports",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `dwarfenumtypedef`: an anonymous DWARF enum takes its typedef's name; the
    /// loader reads `KUNA_DWARFENUMTYPEDEF`.
    DwarfEnumTypedef,
    "dwarfenumtypedef",
    "DWARF anonymous enums named by their typedef",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the address-table pass (`addrtable`); default **off** (matches
    /// Ghidra `AddressTableAnalyzer.setDefaultEnablement(false)`).
    Addrtable,
    "addrtable",
    "Address-table analysis pass",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Gate the scalar/operand reference-markup pass (`operand_refs`); the
    /// kuna analog of Ghidra's `ScalarOperandAnalyzer`/`ElfScalarOperandAnalyzer`.
    /// Default **off**: `ScalarOperandAnalyzer.getDefaultEnablement` is `!isElf`
    /// (Ghidra ships the producing analyzer DISABLED for every ELF), the ELF
    /// subclass only *removes* bad `.got`/`.plt` refs kuna never creates, and the
    /// one useful product (a `.rodata` string typed `char*`) is already delivered
    /// by the always-on `strings` + libproto/S5 typing — so a per-instruction
    /// immediate scan is net-negative (over-accepts). When on, it linear-decodes the
    /// executable sections and plants a typed `char[N]`+readonly fact for each
    /// scalar immediate that points into allocated read-only data. Real-ELF path
    /// only ⇒ the XML datatest oracle is structurally untouched.
    OperandRefs,
    "operand_refs",
    "Scalar/operand reference-markup pass",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna `formatcallees`) Let the load-time format resolver also type the
    /// calls to format functions no table declares (a program's own logger that
    /// forwards to `vfprintf`, a `*printf*`-named import). See
    /// `unlace_analysis::formatstring::kuna_fmtcallee`.
    FormatCallees,
    "formatcallees",
    "format-string typing of undeclared format functions",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Listing/xref disassembly tier (`listing`); default
    /// **off**. When on (real-ELF path only), a program-wide recursive-descent
    /// disassembly Listing/xref model is built once at load and shared read-only
    /// with the consumer analysis passes. Default-off ⇒ the Listing is never
    /// built and every parity gate is byte-identical.
    Listing,
    "listing",
    "Listing/xref disassembly tier",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Gate the rooted fast whole-project function discovery pass
    /// (`fast_funcdisc`); default **off**. It recursively follows direct calls
    /// from metadata-backed roots and admits pointer-table targets only after
    /// fingerprint and valid-subroutine checks. The `fast` mode enables it.
    FastFuncdisc,
    "fast_funcdisc",
    "Fast whole-project function discovery",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna `lazyfuncs`) Commit discovered entries as names only; default off.
    Lazyfuncs,
    "lazyfuncs",
    "Materialize Function objects on demand instead of one per entry",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Run the object-file analysis passes on a TE or `--raw-image` load
    /// over a rebuilt PE / ELF view of it (`objectview`); default **on**.
    Objectview,
    "objectview",
    "Object-file analysis passes on TE and raw images",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the discovered-no-return consumer (`noreturn_disc`), the first
    /// Listing/xref consumer; default **off**. It is a flow heuristic (a callee is
    /// no-return if ≥3 of its call sites show no valid fall-through, iterated to a
    /// fixpoint over the Listing) that can be wrong, so it ships behind its own
    /// flag — the kuna analog of Ghidra's `FindNoReturnFunctionsAnalyzer`. Reads
    /// the Listing (`--option listing on` builds it); a no-op when the Listing is
    /// absent. Default-off ⇒ every parity gate is byte-identical.
    NoreturnDisc,
    "noreturn_disc",
    "Discovered-no-return Listing consumer",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the structural no-return **propagation** consumer
    /// (`noreturn_propagate`), the second Listing/xref consumer; default **off**.
    /// The kuna analog of angr's CFGFast call-graph no-return propagation: seed
    /// from the Known no-return set and conclude a function no-return when its last
    /// real instruction (skipping trailing NOP padding) is a call/tail-jump to an
    /// already-no-return callee, with no returning path — iterated to a fixpoint,
    /// with NO evidence threshold (unlike `noreturn_disc`). Catches custom
    /// no-return wrappers (e.g. `xalloc_die`) that the name list misses and the ≥3
    /// evidence rule does not reach. Reads the Listing (`--option listing on`
    /// builds it); a no-op when the Listing is absent. Default-off ⇒ every parity
    /// gate is byte-identical.
    NoreturnPropagate,
    "noreturn_propagate",
    "No-return propagation Listing consumer",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the CFG-reachability no-return rule (`noreturn_reach`), the port of
    /// Ghidra's `FindNoReturnFunctionsAnalyzer.targetOnlyCallsNoReturn`: a function is
    /// no-return iff no `RETURN` is reachable from entry once calls to already-no-return
    /// callees are treated as terminal. Generalizes `noreturn_propagate`'s tail-call rule
    /// to mid-body no-return calls, dead returns, and switch-of-no-return. Requires the
    /// Listing AND `noreturn_propagate` on; a no-op otherwise, so every parity gate is
    /// byte-identical (real-ELF path only). Default **on** (DIV-19).
    NoreturnReach,
    "noreturn_reach",
    "CFG-reachability no-return rule (Ghidra targetOnlyCallsNoReturn)",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the MSVC RTTI / vftable recovery pass (`rtti`); default **off**.
    /// The kuna analog of Ghidra's `RttiAnalyzer` (a Microsoft-PE analyzer): on a
    /// Windows PE it parses the `CompleteObjectLocator` → RTTI3/2/1 → RTTI0 graph in
    /// `.rdata`/`.data`, demangles each `.?A…@@` class name, and emits
    /// `<Class>::vftable` / `<Class>::RTTI_Complete_Object_Locator` /
    /// `<Class>::RTTI_Type_Descriptor` labels so the C++ class names (`Box`/`Shape`)
    /// surface as recovered symbols and the virtual-dispatch metadata graph is
    /// named. PE-only (registered in `passes_for` only for `BinaryFormat::Pe`, and
    /// the pass also self-gates on PE in `run`), real-PE path only ⇒ every ELF/XML
    /// parity gate is byte-identical. Default-off (output-changing: it adds named
    /// data symbols); `--option rtti on` enables it.
    Rtti,
    "rtti",
    "MSVC RTTI / vftable class-name recovery pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Label MSVC `ThrowInfo` chains and comment x64 throw sites (option
    /// `msvceh`). See `unlace_analysis::entry::kuna_msvceh`.
    Msvceh,
    "msvceh",
    "MSVC C++ exception metadata",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Read Borland/Delphi RTTI: VMTs, class and method names, type info
    /// and interface tables (option `delphi`). See `unlace_analysis::delphi`.
    Delphi,
    "delphi",
    "Borland/Delphi RTTI",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna, NOVEL) Gate the Itanium (GCC/Clang) RTTI + vtable recovery pass
    /// (`itaniumrtti`); default **off**. Ghidra has no Itanium RTTI analyzer at all
    /// — its `RttiAnalyzer` is Microsoft-only and its GCC class recovery is
    /// script-tier — so on a stripped `g++` binary a vtable stays `DAT_<addr>`.
    /// This pass reads the Itanium C++ ABI graph directly: every `_ZTI…` typeinfo
    /// object is located from the dynamic relocation that names its
    /// `__cxxabiv1::__{,si_,vmi_}class_type_info` vtable (an anchor `strip
    /// --strip-all` cannot remove from a shared object), its `_ZTS…` type-name
    /// string is demangled to the class name, its base list gives the inheritance
    /// displacements, and every `_ZTV…` sub-vtable pointing back at it is walked.
    /// Emits `<C>::typeinfo` / `<C>::typeinfo_name` / `<C>::vtable` /
    /// `<C>::vtable_for_<Base>` data labels plus one `<C>::vfunc_<i>` function
    /// symbol per virtual slot. ELF-only (registered in `passes_for` only for
    /// `BinaryFormat::Elf`, and the pass also self-gates on ELF in `run`), real-ELF
    /// path only ⇒ every XML parity gate is byte-identical. Default-off
    /// (output-changing: it adds named data and function symbols);
    /// `--option itaniumrtti on` enables it.
    Itaniumrtti,
    "itaniumrtti",
    "Itanium (GCC/Clang) RTTI / vtable recovery pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna, GH-299) Gate the AIF literal-pool slide (`aifpoolslide`); default
    /// **on**. A gap candidate on a word some instruction loads PC-relatively is
    /// pool data: its accept is planted on the first address after the pool when
    /// its body decoded an instruction there, and it is rejected otherwise. 32-bit
    /// ARM only; inert without `aif`, so every parity gate is byte-identical.
    Aifpoolslide,
    "aifpoolslide",
    "AIF literal-pool candidate slide (GH-299)",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate tail-call function-entry recovery (`tailcallentry`); default
    /// **off**. The recursive-descent Listing walk treats every non-CALL flow
    /// target as a same-function successor, so a routine reached only by a tail
    /// `B` is absorbed into its caller instead of becoming its own function. This
    /// option reads the completed walk and admits such a target as a NEW function
    /// entry when a containment model says the branch leaves the caller's region:
    /// every predecessor is an unconditional branch, the caller's stack frame is
    /// closed at the branch, and the target's flow region is disjoint from the
    /// rest of the caller. Additive — it emits entries and never rebuilds the
    /// Listing, so no already-discovered entry can be lost. Reads the Listing
    /// (`--option listing on` builds it); a no-op when the Listing is absent, so
    /// every parity gate is byte-identical.
    Tailcallentry,
    "tailcallentry",
    "Tail-call function-entry recovery Listing consumer",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Function bodies as chunks with shared tails (`funcchunks`); the FID matcher hashes the chunk body. Default off.
    Funcchunks,
    "funcchunks",
    "Function chunk bodies (main chunk + shared tails)",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Type symbol-table data objects from their access width (`globalwidth`). Default on.
    Globalwidth,
    "globalwidth",
    "Data-object typing from access width",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Drop an AIF gap entry whose first instruction the code reads or writes as data (`aifdataveto`). Default on.
    Aifdataveto,
    "aifdataveto",
    "AIF data read/write veto",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Bind `__swiftcall` to every function that calls a Swift runtime entry point (`swiftcallers`). Default off.
    Swiftcallers,
    "swiftcallers",
    "Swift calling convention for Swift runtime callers",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Resume the Listing walk from new callback roots instead of rebuilding it (`incrementalwalk`). Default on.
    Incrementalwalk,
    "incrementalwalk",
    "Incremental Listing walk for callback roots",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Run `tailcallentry` on AArch64, x86 and RISC-V as well as ARM (`tailcallentryall`). Default off.
    Tailcallentryall,
    "tailcallentryall",
    "Tail-call function-entry recovery on non-ARM targets",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Retry prototype/no-return name lookups under undecorated spellings (`nameladder`). Default on.
    Nameladder,
    "nameladder",
    "Prototype/no-return name lookup ladder",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) IDA's string rule inside code sections (`codestrings`). Default on.
    Codestrings,
    "codestrings",
    "Code-section string acceptance rule",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Call tables, the call-table vs switch vote and the switch-case
    /// entries it drops (`calltable`). Default on; reads the Listing.
    Calltable,
    "calltable",
    "Call-table recovery and the call-table vs switch vote",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Name a stripped Mach-O stub from the chained bind on its slot
    /// (`stubbinds`). Default on; Mach-O only.
    Stubbinds,
    "stubbinds",
    "Stripped Mach-O stubs named from their slot's chained bind",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Name a placeholder jump thunk `j_<target>` (`thunknames`). Default on.
    Thunknames,
    "thunknames",
    "Placeholder jump thunks named j_<target>",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Name a placeholder function whose body is a bare return
    /// `nullsub_<addr>` (`nullsubs`). Default off.
    Nullsubs,
    "nullsubs",
    "Placeholder empty functions named nullsub_<addr>",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Mach-O Objective-C metadata recovery pass (`objc`); default
    /// **off**. The kuna analog of Ghidra's `ObjcTypeMetadataAnalyzer`
    /// (name-recovery half): when the binary is a Mach-O, walk the `__objc_*`
    /// metadata (classlist → class_t → class_ro_t → method_list_t) and rename each
    /// IMP function `-[Class sel]` / `+[Class sel]` (the FID-precedent label-gated
    /// rename of a `sub_*`/`FUN_*` placeholder), plus emit `_OBJC_CLASS_$_<name>`
    /// and selector symbols. Selectors are plain ASCII — no demangler needed. The
    /// pass is registered ONLY for a Mach-O binary, so on every non-Mach-O binary it
    /// is structurally absent regardless of this flag. Default-off, output-changing
    /// (it renames + adds symbols), real-binary-path only ⇒ every parity gate is
    /// byte-identical. x86-64, no-chained-fixups path (the arm64 +
    /// LC_DYLD_CHAINED_FIXUPS resolver is a deferred follow-on).
    Objc,
    "objc",
    "Mach-O Objective-C metadata recovery pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `panicloc`) Rust images only: type and name the panic `Location`
    /// records (`unlace-analysis` `strings/kuna_panicloc.rs`). Default on.
    Panicloc,
    "panicloc",
    "Rust panic Location record pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `option swiftmetadata` — the Swift runtime-metadata recovery pass
    /// (`unlace-analysis::analyzers::swift`): names metadata accessors, vtable and
    /// override implementations, protocol witnesses and descriptor records from
    /// the `swift5_*` reflection sections. Default-off, output-changing; inert on
    /// an image without the sections.
    Swiftmetadata,
    "swiftmetadata",
    "Swift runtime-metadata recovery pass",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `option blobs` — plant each embedded image or archive the
    /// `blobs` pass found as a `<kind>_<addr>` data symbol typed
    /// `unsigned char[len]`. Default **on**; real-binary-path only.
    Blobs,
    "blobs",
    "Embedded image and archive data symbols",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Swift type-layout arm of the metadata pass
    /// (`swifttypes`): struct and class layouts from static type metadata,
    /// typed metadata records, accessor prototypes and the register-pinned
    /// `self` of getters. Default-on; inert unless `swiftmetadata` is on.
    Swifttypes,
    "swifttypes",
    "Swift type layouts from static metadata",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the Swift helper arm of the metadata pass
    /// (`swifthelpers`): the instantiation helpers and lazy witness table
    /// accessors named from their bodies, and the caches they fill named
    /// after the type each call asks for. Default-on; inert unless
    /// `swiftmetadata` is on.
    Swifthelpers,
    "swifthelpers",
    "Swift instantiation helpers and lazy witness table accessors",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the `@objc`-thunk arm of the Swift metadata pass
    /// (`swiftobjcthunk`): a vtable slot an Objective-C entry point calls is
    /// named by its selector or property. Default-on; inert unless
    /// `swiftmetadata` is on.
    Swiftobjcthunk,
    "swiftobjcthunk",
    "Swift vtable slot names from @objc thunks",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `xnutables`: kalloc_type views, IOExternalMethodDispatch tables and
    /// unnamed pointer slots on an XNU kernel or kext (default on).
    Xnutables,
    "xnutables",
    "XNU kalloc_type / external-method / pointer-slot naming",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `osclassinfo`: DriverKit `__osclassinfo` class records (default on).
    Osclassinfo,
    "osclassinfo",
    "DriverKit __osclassinfo class records",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `dextrpc`: DriverKit IORPC dispatch prototypes, message ids and
    /// class layouts, run at the commit point when `osclassinfo` is on
    /// (default on).
    Dextrpc,
    "dextrpc",
    "DriverKit IORPC dispatch types",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `swiftruntime`) The Swift runtime's entry points bound to their
    /// header signatures, by name. Default-on; Swift-detected images only.
    Swiftruntime,
    "swiftruntime",
    "Swift runtime prototypes",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Gate the PE PDB metadata recovery pass (`pdb`); default **off**. The
    /// kuna analog of Ghidra's `PdbUniversalAnalyzer` (the pure-Java PDB analyzer;
    /// the MS-DIA `PdbAnalyzer` is Windows-native and out of scope) — the
    /// name-recovery half. On a Windows PE, read the CodeView fingerprint
    /// (`{guid, age, path}` from the debug directory), locate the external `.pdb`
    /// (tier-1: the `kuna_pdb_path` env var, the fid `kuna_fid_db` precedent),
    /// **fingerprint-gate** it (the supplied `.pdb`'s `pdb_information().guid/age`
    /// must match the PE's CodeView record — a MISMATCH/ABSENT `.pdb` emits nothing,
    /// the FID full-hash-match discipline of never applying wrong external
    /// knowledge), and on a match walk the global symbols (`S_PUB32`/`S_GPROC32`) to
    /// RENAME each stripped `FUN_*`/`sub_*` function to its real name (the
    /// FID-precedent label-gated rename of a placeholder; a real symbol is never
    /// overwritten). The pass is registered ONLY for a PE binary, so on every non-PE
    /// binary it is structurally absent regardless of this flag. Default-off,
    /// output-changing (it renames + adds symbols), real-binary-path only (and inert
    /// without a fingerprint-matching `.pdb`) ⇒ every parity gate is byte-identical.
    /// Types, prototypes and locals are `pdbtypes`, source lines `pdblines`.
    Pdb,
    "pdb",
    "PE PDB metadata recovery pass",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `pdbtypes`) Commit the types, typed prototypes, stack and register
    /// locals, typed globals and vftables the matched `.pdb` describes; default
    /// **off**. Inert without `pdb` locating a fingerprint-matching `.pdb`.
    Pdbtypes,
    "pdbtypes",
    "PDB types, prototypes and locals",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna `pdblines`) Commit the matched `.pdb`'s source lines as
    /// `file:line` comments; default **off** (it adds a comment per line).
    Pdblines,
    "pdblines",
    "PDB source-line comments",
    unset: false,
    shipped: false
);

/// (kuna `flowmode`) Paint ARM decode modes the flow proves (`on`), also past calls proven to return (`after_call`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct FlowMode {
    pub on: bool,
    pub after_call: bool,
}

impl crate::kuna_optionset::KunaOption for FlowMode {
    const NAME: &'static str = "flowmode";
    crate::kuna_option_id!();

    fn unset() -> Self {
        FlowMode {
            on: false,
            after_call: false,
        }
    }

    fn shipped() -> Self {
        FlowMode {
            on: false,
            after_call: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, after_call) = match value.trim().to_ascii_lowercase().as_str() {
            "on" | "1" | "true" => (true, false),
            "aftercall" => (true, true),
            "off" | "0" | "false" => (false, false),
            other => {
                return Err(unlace_base::error::KunaError::lowlevel(format!(
                    "flowmode: expected `on`, `aftercall` or `off`, got `{other}`"
                )));
            }
        };
        let state = match (on, after_call) {
            (false, _) => "off",
            (true, false) => "on",
            (true, true) => "on, past calls proven to return",
        };
        Ok((
            FlowMode { on, after_call },
            format!("ARM flow-proven decode-mode paints turned {state}"),
        ))
    }
}

/// (kuna `cvftrace`) Name CVF routines from their `.trace` records (`names`), with source-line comments (`lines`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CvfTrace {
    pub names: bool,
    pub lines: bool,
}

impl crate::kuna_optionset::KunaOption for CvfTrace {
    const NAME: &'static str = "cvftrace";
    crate::kuna_option_id!();

    fn unset() -> Self {
        CvfTrace {
            names: false,
            lines: false,
        }
    }

    fn shipped() -> Self {
        CvfTrace {
            names: true,
            lines: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (names, lines) = match value.trim().to_ascii_lowercase().as_str() {
            "on" | "1" | "true" => (true, false),
            "lines" => (true, true),
            "off" | "0" | "false" => (false, false),
            other => {
                return Err(unlace_base::error::KunaError::lowlevel(format!(
                    "cvftrace: expected `on`, `lines` or `off`, got `{other}`"
                )));
            }
        };
        let state = match (names, lines) {
            (false, _) => "off",
            (true, false) => "on",
            (true, true) => "on, with source-line comments",
        };
        Ok((
            CvfTrace { names, lines },
            format!("CVF .trace routine names turned {state}"),
        ))
    }
}

/// (kuna `gopcln`) Go pclntab source positions: function headers and inlined calls (`on`), plus every statement's `file:line` (`lines`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GoPcln {
    pub on: bool,
    pub lines: bool,
}

impl crate::kuna_optionset::KunaOption for GoPcln {
    const NAME: &'static str = "gopcln";
    crate::kuna_option_id!();

    fn unset() -> Self {
        GoPcln {
            on: false,
            lines: false,
        }
    }

    fn shipped() -> Self {
        GoPcln {
            on: false,
            lines: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, lines) = match value.trim().to_ascii_lowercase().as_str() {
            "on" | "1" | "true" => (true, false),
            "lines" => (true, true),
            "off" | "0" | "false" => (false, false),
            other => {
                return Err(unlace_base::error::KunaError::lowlevel(format!(
                    "gopcln: expected `on`, `lines` or `off`, got `{other}`"
                )));
            }
        };
        let state = match (on, lines) {
            (false, _) => "off",
            (true, false) => "on",
            (true, true) => "on, with source-line comments",
        };
        Ok((
            GoPcln { on, lines },
            format!("Go pclntab source positions turned {state}"),
        ))
    }
}

/// (kuna `fid`) Run the FID fingerprint matcher (`on`), renaming only what it can confirm (`strict`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Fid {
    pub on: bool,
    pub strict: bool,
}

impl crate::kuna_optionset::KunaOption for Fid {
    const NAME: &'static str = "fid";
    crate::kuna_option_id!();

    fn unset() -> Self {
        Fid {
            on: false,
            strict: false,
        }
    }

    fn shipped() -> Self {
        Fid {
            on: false,
            strict: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, strict) = match value {
            "off" => (false, false),
            "" | "on" => (true, false),
            "strict" => (true, true),
            _ => {
                return Err(unlace_base::error::KunaError::parse(
                    "fid expects on, off, or strict",
                ));
            }
        };
        let state = if strict {
            "strict"
        } else if on {
            "on"
        } else {
            "off"
        };
        Ok((
            Fid { on, strict },
            format!("FID fingerprint matcher set to {state}"),
        ))
    }
}

/// (kuna `iokitclasses`) Recover IOKit class names (`names`) and their vtable types (`types`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct IokitClasses {
    pub names: bool,
    pub types: bool,
}

impl crate::kuna_optionset::KunaOption for IokitClasses {
    const NAME: &'static str = "iokitclasses";
    crate::kuna_option_id!();

    fn unset() -> Self {
        IokitClasses {
            names: false,
            types: false,
        }
    }

    fn shipped() -> Self {
        IokitClasses {
            names: true,
            types: true,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (names, types) = match value {
            "on" => (true, true),
            "names" => (true, false),
            "off" => (false, false),
            other => {
                return Err(unlace_base::error::KunaError::parse(format!(
                    "iokitclasses takes on|names|off, not {other:?}"
                )));
            }
        };
        Ok((
            IokitClasses { names, types },
            format!("IOKit class and vtable recovery set to {value}"),
        ))
    }
}

/// (kuna `cfstrings`) Run the Mach-O `__cfstring` pass (`pass`), and mark each literal it prints as a CFString (`annotate`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CfStrings {
    pub pass: bool,
    pub annotate: bool,
}

impl crate::kuna_optionset::KunaOption for CfStrings {
    const NAME: &'static str = "cfstrings";
    crate::kuna_option_id!();

    fn unset() -> Self {
        CfStrings {
            pass: false,
            annotate: false,
        }
    }

    fn shipped() -> Self {
        CfStrings {
            pass: true,
            annotate: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (pass, annotate) = match value {
            "annotate" => (true, true),
            other => (crate::options::on_or_off(other)?, false),
        };
        let state = if annotate {
            "on, annotated"
        } else if pass {
            "on"
        } else {
            "off"
        };
        Ok((
            CfStrings { pass, annotate },
            format!("Mach-O __cfstring constant-string recovery pass turned {state}"),
        ))
    }
}

/// (kuna `armframes`) Inventory validated ARM frames (`inventory`), and recover functions from them (`full`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ArmFrames {
    pub inventory: bool,
    pub full: bool,
}

impl crate::kuna_optionset::KunaOption for ArmFrames {
    const NAME: &'static str = "armframes";
    crate::kuna_option_id!();

    fn unset() -> Self {
        ArmFrames {
            inventory: true,
            full: false,
        }
    }

    fn shipped() -> Self {
        ArmFrames {
            inventory: true,
            full: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (inventory, full) = if value == "inventory" {
            (true, false)
        } else {
            let on = crate::options::on_or_off(value)?;
            (on, on)
        };
        Ok((
            ArmFrames { inventory, full },
            format!("Validated ARM frame recovery set to {value}"),
        ))
    }
}

crate::kuna_flag!(
    /// (kuna `dwarfscopes`) DWARF lexical-block and location-list locals; the loader reads `KUNA_DWARFSCOPES`.
    DwarfScopes,
    "dwarfscopes",
    "DWARF lexical-block and location-list locals",
    unset: true,
    shipped: true
);

/// (kuna `movwpairs`) How the discovery Listing reads an address an ARM `movw`/`movt` or
/// AArch64 `movz`/`movk` pair builds in 16-bit halves: `off` (the low half starts
/// nothing), `access` (a load or store through the completed register is a read or a
/// write of that address), `on` (and the pair is a reference to the address where it lands
/// in a mapped section).
#[derive(Clone, Copy, Debug, PartialEq, Eq, Default)]
pub enum MovwPairs {
    #[default]
    Off,
    Access,
    On,
}

impl crate::kuna_optionset::KunaOption for MovwPairs {
    const NAME: &'static str = "movwpairs";
    crate::kuna_option_id!();

    fn unset() -> Self {
        MovwPairs::Off
    }

    fn shipped() -> Self {
        MovwPairs::Off
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let mode = match value {
            "off" => MovwPairs::Off,
            "access" => MovwPairs::Access,
            "on" => MovwPairs::On,
            _ => {
                return Err(unlace_base::error::KunaError::parse(
                    "Must specify off, access or on",
                ));
            }
        };
        Ok((mode, format!("movw/movt address pairs set to {value}")))
    }
}
