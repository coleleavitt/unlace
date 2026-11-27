use super::*;
#[test]
fn reliable_is_a_no_op_alias() {
    assert!(mode_overrides("reliable").unwrap().is_empty());
}

#[test]
fn auto_uses_exact_binary_size_boundaries() {
    assert_eq!(auto_mode_for_size(0), "aggressive");
    assert_eq!(
        auto_mode_for_size(AUTO_RELIABLE_MIN_BYTES - 1),
        "aggressive"
    );
    assert_eq!(auto_mode_for_size(AUTO_RELIABLE_MIN_BYTES), "reliable");
    assert_eq!(auto_mode_for_size(AUTO_FAST_MIN_BYTES - 1), "reliable");
    assert_eq!(auto_mode_for_size(AUTO_FAST_MIN_BYTES), "fast");
    assert_eq!(auto_mode_for_size(u64::MAX), "fast");
}

#[test]
fn frontend_resolution_defaults_to_auto_and_preserves_concrete_modes() {
    assert_eq!(resolve_mode_for_size(None, 0), Some("aggressive"));
    assert_eq!(
        resolve_mode_for_size(Some("auto"), AUTO_RELIABLE_MIN_BYTES),
        Some("reliable")
    );
    assert_eq!(resolve_mode_for_size(Some("fast"), 0), Some("fast"));
    assert_eq!(
        resolve_mode_for_size(Some("aggressive"), u64::MAX),
        Some("aggressive")
    );
    assert_eq!(resolve_mode_for_size(Some("turbo"), 0), None);
}

#[test]
fn auto_is_dynamic_not_a_static_override_list() {
    assert!(mode_is_automatic("auto"));
    assert!(!mode_is_automatic("reliable"));
    assert!(mode_overrides("auto").is_none());
}

#[test]
fn aggressive_excludes_dwarf_lines_but_includes_the_rest() {
    let agg = mode_overrides("aggressive").unwrap();
    // The one intentional exclusion: source-line comment noise over every
    // statement of a `-g` binary.
    assert!(
        !agg.iter().any(|(o, _)| *o == "dwarf_lines"),
        "aggressive must NOT enable dwarf_lines (buries `-g` output in /* src.c:N */)"
    );
    // Representative members that MUST be on.
    for want in [
        "listing",
        "switchguardbound",
        "returndup",
        "sparcstructret",
        "v850indirectbranch",
        "globalarrayanchor",
    ] {
        assert!(
            agg.iter().any(|(o, v)| *o == want && *v == "on"),
            "aggressive must enable `{want}`"
        );
    }
    // Every aggressive override turns its option on; `aif` takes its aligned cursor
    // and `itaniumeh` its cheap level (pads with a catch clause only).
    assert!(
        agg.contains(&("aif", "strict")),
        "aggressive must set `aif strict`"
    );
    assert!(agg.iter().all(|(o, v)| *v == "on"
        || (*o, *v) == ("aif", "strict")
        || (*o, *v) == ("itaniumeh", "catch")));
}

/// The preset's headline contract, enforced rather than sampled: **every**
/// default-off option is in `aggressive` except the two documented exclusions.
///
/// The sampled test above passes whether or not a newly added default-off
/// option was ever put in the list, and a default-off option outside the list
/// is *unreachable in practice* — `auto` selects `aggressive` for anything
/// under 500 KiB, which is the default path for essentially every invocation,
/// so such an option never runs for `decompile-all`, the web front-end, or the
/// benchmark. That is exactly how `itaniumrtti` was first shipped inert. This
/// test makes the omission a build failure instead of a silent no-feature.
#[test]
fn aggressive_carries_every_default_off_option() {
    use crate::phases::{unlace_num_settables, unlace_settable_by_index};

    /// The DELIBERATE exclusions, each with its reason recorded on
    /// `AGGRESSIVE_OVERRIDES`: `dwarf_lines` buries a `-g` binary's C under
    /// per-instruction `/* src.c:N */` comments, and `formatstring` costs a second full
    /// decompile of every caller that yields a varargs override -- measured
    /// +43.7% to +77.5% on whole-binary `decompile-all`, far over the 5% speed
    /// budget, so standing requirement 4 holds it to an opt-in (DIV-66).
    /// `nulterminator` folds a lone unread zero after an open stack `char`
    /// array into the array, and the same frame shape is the struct-first-member
    /// idiom (`strncpy(u.name, s, N); u.active = 0; f(&u);`): measured on gcc and
    /// clang-12 at `-O0`/`-O2`, it grows a correctly-sized `char name[32]` to
    /// `[33]` by absorbing the sibling field, and no frame-level signal separates
    /// that field from a genuine terminator. In the preset it would be the
    /// default output under 500 KiB, which is exactly what it is opt-in to avoid.
    /// `msvcstrappend` deletes an inlined MSVC `std::string` append's fast arm and
    /// names the grow call `std::string::push_back`/`append` on the strength of
    /// the call's argument shape; the callee body is never read. That trust is a
    /// judgement the operator makes about the binary, not one the preset should
    /// make as the default output under 500 KiB.
    /// `structdefs` prints the definitions of the composites a function
    /// references above it. Nothing about it is wrong output -- the body is
    /// byte-identical either way, and the corpus sweep in
    /// `docs/features/structdefs/` shows 523 hunks over six binaries with zero
    /// deleted lines. It is excluded because of what the preset IS: the default
    /// output under 500 KiB, which is the text a caller diffs, feeds to a
    /// matcher, or reads one function of. A preamble in front of every function
    /// that touches a `FILE *` is noise there (36 of fmt's 151 functions repeat
    /// the same `typedef struct FILE FILE;`), and on an unstripped binary it is
    /// 8,071 added lines on `ls` alone. Who wants to see a layout is a reader's
    /// choice, not a size threshold's.
    ///
    /// `indirectonly` is the upstream `Funcdata::markIndirectOnly` body, and
    /// turning it on lets a register merge into a frame slot whose entry value
    /// only ever reached call INDIRECTs. That is right when the machine really
    /// does store into the slot and wrong when it only loads it: in the second
    /// case the emitted C mutates memory the machine never writes, and a later
    /// call handed the enclosing object reads a value that never existed
    /// (`bzip2` -O2 `sub_3890`, `kmod` -O2-noinline `sub_97b0`; stock Ghidra
    /// emits the same fabricated store). Nothing at HighVariable level tells the
    /// two apart -- a CPUI_INDIRECT is attached only where the storage is still
    /// live in the SSA, so a slot that is dead after its last read carries no
    /// guard at any later call -- so fabricating a store as the default output
    /// under 500 KiB is the operator's judgement, not the preset's.
    ///
    /// `stackalias` now preserves physical frame writes that escaped pointers
    /// can observe. Retaining those writes changes stack layout and declaration
    /// types; recovery stays explicit until the memory/view chain is complete.
    /// `stackviews` likewise remains manual while bounded coverage is completed.
    ///
    /// `protoorder` is a whole-binary RUN ORDER, not a pass, and its own
    /// default (`cycles`) already turns it on where it means anything: a
    /// serial `unlace decompile-all`. The other surfaces cannot act on it, so
    /// preset membership would change nothing.
    ///
    /// `bejoin on` joins a big-endian or AVR two-register value high word
    /// first when its low word looks returned on purpose. The rule reads the
    /// instructions, not a type, and an `int` that works over the high half
    /// of a 64-bit temporary compiles to the `long long`'s registers, so with
    /// it on that correct `int` prints as a wrong `long long` (GH-904). In
    /// the preset it would be the default output under 500 KiB, which is
    /// exactly what it is opt-in to avoid; every mode keeps the default,
    /// `callers`, which joins that way only on proof.
    /// `mixedtailret` returns a value a function tested beside a tail call,
    /// and a `void` guard that leaves the tested value in the return
    /// register compiles to the same bytes (clang's ARM `thr`/`keep`), so
    /// in the preset it would give such guards a return they do not have.
    ///
    /// `varargsharedfloat` reads a PowerPC register choice that only -O0
    /// code preserves: on clang -O2 and -Os batteries it adds 23 arguments
    /// the source never passed for 11 it restores.
    ///
    /// `callarrayextent` preserves call-written aliases by declaring the
    /// available frame region as an array, but a pointer parameter does not
    /// establish the source array's exact length. Keep that representation
    /// choice per-run rather than enabling it in a preset.
    ///
    /// `armconstshift` makes signed ARM constant shifts defined C at the
    /// cost of a cast pair on every sign-bit test (`x << 0x18 < 0`), which
    /// firmware uses for nearly every register flag check. `wrapadd` makes a
    /// widened four-byte sum wrap the same way, at the cost of a cast pair on
    /// every such sum (`return a0 + 3;`).
    ///
    /// `x86listingswitch` reaches valid cases but ordinary tail jumps from
    /// them can hide independent function entries from the AIF gap walk;
    /// the i386 corpus lost seven true starts, so it remains explicit.
    ///
    /// `regsigned` declares a sign-extended register local at its narrow
    /// width. On decbench type_match it gained a few perfect functions on
    /// ARM firmware and none on x86-64, and a narrowed value that a wider
    /// reader takes back gains a cast (`(long)(int)v` on AArch64).
    ///
    /// `callwide` requires complete caller evidence and remains an explicit
    /// opt-in until its default validation is complete.
    /// `ppc32picimports` proves PIC caller bases but adds significant load
    /// cost on large import inventories, so it requires an explicit option.
    /// `rustfmt all` (the String and Stdout write! recoveries) is deliberately
    /// not in the preset for speed: neither writer cleared its speed study.
    /// `rustfmt` is multi-valued, so it is outside this invariant's scope.
    /// `rustprobestack` did not clear its default wall-time confidence bounds.
    /// `highsliceguard` added 10.8% CPU time when recovering the upstream table.
    /// `rustarrayzero` missed the initial default-on CPU median budget.
    /// `irverify` re-walks the function after every pass and is a debugging aid.
    /// `ppcapu` selects the e500 model, whose scalar call arguments are not
    /// yet recovered, so it requires an explicit option.
    const EXCLUDED_ON_PURPOSE: &[&str] = &[
        "dwarf_lines",
        "nulterminator",
        "msvcstrappend",
        "structdefs",
        "indirectonly",
        "protoorder",
        "stackalias",
        "stackviews",
        "bejoin",
        "mixedtailret",
        "varargsharedfloat",
        "callarrayextent",
        "armconstshift",
        "wrapadd",
        "regsigned",
        "x86listingswitch",
        "callwide",
        "ppc32picimports",
        "ppcapu",
        "rustprobestack",
        "highsliceguard",
        "rustarrayzero",
        "irverify",
        // `lazyfuncs` changes no output, but its saving is a single-function
        // property: the whole-binary surfaces the presets drive (decompile-all,
        // the web front-end, the benchmark) materialize every target they walk
        // anyway, so preset membership would buy nothing there and has not been
        // measured on them. Flip it into the preset with that measurement.
        "lazyfuncs",
        // `pdblines` is `dwarf_lines` for a `.pdb`: a comment per source
        // line.
        "pdblines",
        // `libgccsigs` costs a SPARC32 caller that returns arithmetic on
        // the `__divdi3` quotient its low word or its whole return (see its
        // catalog row), so the preset must not turn it on.
        "libgccsigs",
        // `latecse` lengthens the output (shared values become temporaries)
        // and `dirtypool` reaches a different fixpoint (stage folds lost);
        // see their catalog rows.
        "latecse",
        "dirtypool",
        // `relronoreturn` trades structure for speed (it skips a restart
        // whose second pass renders better), the opposite of this preset.
        "relronoreturn",
        // `mba` targets obfuscated code; on ordinary code it can only
        // refold arithmetic the compiler already chose.
        "mba",
        // `egraph` too, and it runs a saturation per MBA tree.
        "egraph",
        // `pairlocal` changes how 64-bit locals on 32-bit targets print; it
        // joins a preset once its corpus measurement is in.
        "pairlocal",
        // `contextnames` renames loop counters and returned locals that the
        // CLI tests of other features, which run under `auto`, spell as
        // `vN`; it joins the preset once those are re-pinned.
        "contextnames",
        // `flownames` renames locals from fields and types the same way.
        "flownames",
        // `cppshortnames` respells C++ type and scope names that stage
        // assertions and CLI tests spell in full.
        "cppshortnames",
        // `mapglobalsyms` makes a function's output depend on which functions
        // were decompiled before it in the same run; in the preset that would
        // make every `decompile-all` under 500 KiB order-dependent.
        "mapglobalsyms",
        // `varargsave` and `dynalloca` are fallbacks for the default-on
        // `vastart` and `alloca`, which fold the same code; turning both on
        // only adds a second pass over it.
        "varargsave",
        "dynalloca",
        // `orexit` (issue #10) was swept on DecBench O2-noinline: it fires on
        // 6 of 33,396 functions and moves the GED sum by +13 (2 better, 4 worse).
        "orexit",
    ];

    /// Default-off options that predate this test and are **not** in the preset,
    /// i.e. are currently unreachable on the default path. Each is a genuine open
    /// question rather than a decision: preset membership changes emitted C on
    /// the binaries the option fires for, so each needs its own sweep, speed
    /// measurement and PR (`paramcopyhoist`'s own catalog row already records
    /// that its flip regresses a stage assertion and was deferred). Listed here
    /// so the invariant can be enforced for *new* options without silently
    /// flipping the existing ones; shrinking this list is the follow-up.
    ///
    /// The four ARM entry options (`cortexmvectors`, `ptrentry`, `tailcallentry`,
    /// `poolentry`) came OFF this list in DIV-93. The joint evaluation this entry
    /// asked for was run over the 110 stripped non-x86-64 decbench twins and all
    /// four passed it, so they are in `AGGRESSIVE_OVERRIDES` above.
    /// `godwarfsig` remains explicit while aggregate ABI interactions and
    /// `gopairreturns` remains explicit while aggregate ABI interactions across
    /// Go corpus sizes are evaluated for automatic selection.
    const UNEVALUATED: &[&str] = &[
        // `ptrfromlocal` (Hex-Rays printer survey row 1) is measured in its own sweep.
        "ptrfromlocal",
        // `lvarvote` (issue #1244) changes only conflicting locals; its preset membership waits on a decbench sweep.
        "lvarvote",
        // `charnum`, `constright` and `signeddec` (the Hex-Rays printer survey,
        // notes/ida-gap/hexrays-ctree-printer.md) print only; each is measured in its
        // own sweep before a preset or default decision.
        "charnum",
        "constright",
        "signeddec",
        // `orchainbool` (issue #10) is swept in its own PR; preset membership waits on it.
        "orchainbool",
        // `orchainlive` (issue #10) is swept in its own PR; preset membership waits on it.
        "orchainlive",
        // `pkthdr` (netstruct gap 3) types raw-socket packet buffers by a heuristic; preset membership waits on a decbench sweep.
        "pkthdr",
        // `phithread` (issue #20) landed without a corpus sweep.
        "phithread",
        // The options below were registered without a preset decision. They are
        // default-off; each stays out of the preset until its own corpus sweep and
        // speed measurement.
        // P1 loader and analysis: format or image scoped, each needs binary evidence first.
        "aggressivethunks",
        "functails",
        "nullsubs",
        "flirttil",
        "msvceh",
        "delphi",
        "uefientry",
        "cppclassargs",
        // P2 and P4 (decode policy, prototype and return shape).
        "armhoist",
        "honestgaps",
        "retpairpaths",
        "pairbranch",
        // P3 simplification rules: they change emitted expressions across the corpus.
        "minmax",
        "bitfieldarith",
        "satmul",
        "floatidentity",
        "addrcompare",
        "sfofxor",
        "mbawide",
        // P8 goto quality (changes structured control flow).
        "gotochain",
        "irreduciblesplit",
        // P9 printer and naming: print-only changes, each needs its own sweep first.
        "stringglobalnames",
        "partmacro",
        "barrierintrinsics",
        "evmstorage",
        "javasync",
        "renumberlocals",
        "retternary",
        "nonnullparam",
        "godefer",
        // `structassign` (IDA types survey item #4) landed without a corpus sweep.
        "structassign",
        // `dextrpc` landed measured on 17 macOS dexts only; preset membership
        // would make it the default under 500 KiB, which is the lead's call.
        "dextrpc",
        // `phiarm` (issue #20) landed without a corpus sweep.
        "phiarm",
        // `calleesaved` (issue #20) landed without a corpus sweep.
        "calleesaved",
        // `coalescecap` (issue #1225) is a speed cap, measured in its own sweep.
        "coalescecap",
        // `swiftcallers` lands unmeasured; its Toyota/Perplexity sweep decides.
        "swiftcallers",
        // `calleeargsmsvc` landed on hand-built MSVC-shape fixtures only.
        "calleeargsmsvc",
        // Landed with fixture measurements only: `funcchunks` changes only FID's
        // input, `tailcallentryall` was measured on Lua and the LLVM tools, and
        "funcchunks",
        "tailcallentryall",
        // `dwarfglobaltypes` was turned off by default in its own branch after
        // landing; it has no preset sweep yet.
        "dwarfglobaltypes",
        // Stack-address liveness can be incidental; synthetic regressions and
        // a local speed measurement do not justify a broad preset flip.
        "stackaddrargtrial",
        "paramcopyhoist",
        // `guardarm` / `loopcondhoist` land as opt-ins with their whole-O0
        // bidirectional sweep already recorded in their catalog rows; preset
        // membership makes them the default output, which is a DIV-recorded
        // default change and gets its own PR (the 0/675 ablation and the speed
        // number are the two things that PR has to add).
        "guardarm",
        "loopcondhoist",
        // `cmpmerge` moves 5/675 datatest assertions; a preset flip needs a
        // decbench sweep first.
        "cmpmerge",
        // `switchselector` is the one entry here whose evaluation is already
        // done and recorded (its catalog row carries the 0/675 datatest
        // ablation and the whole-corpus sweep: one function changes across
        // seventeen binaries, a `switch(0)` with five unreachable cases
        // becoming a five-branch if/else-if chain over the recovered
        // parameter). What it is waiting on is the thing this list exists to
        // hold back -- preset membership is a DIV-recorded default change,
        // and the DIV registry is not this change's to write.
        "switchselector",
        // (unlace `charptr`) Commit a pointer the program only ever uses on
        // characters to `char *`. The sweep says no: once a constant PTRADD
        // index counts as a field offset (as a literal INT_ADD always did), 444
        // slices / 10,748 functions move none onto perfect `type_match`, 2 up
        // and 4 down, aggregate -0.57. Nearly all of the earlier +4.93 was the
        // skip-the-first-character idiom, which is indistinguishable from a
        // struct field. The preset run of `PYTHONPATH=. python3 -m scripts.repipe.clitests` also moves six probes
        // that pin the pointer spelling `protoorder` and `ptrfromuse` produce.
        // Full evaluation: docs/features/charptr/default-on-evaluation.md.
        "charptr",
        // (unlace `fieldtype`) Declare a synthesized field some access holds as
        // a pointer as that pointer. Every flip criterion passes (0/675,
        // stages, test-cli, the 444-slice typesweep unmoved, 191 casts fewer
        // on the shared set) except fields-only layout precision, .8713 ->
        // .8693: the layout ledger shares a record only on exact field-type
        // agreement, and a field re-typed in one reader and not another moves
        // which record the other is answered with. Full evaluation:
        // docs/features/fieldtype/default-on-evaluation.md.
        "fieldtype",
        // `bytearrayc` changes the C emitted for mapped global integer
        // accesses. This PR adds focused compiler fixtures, not the broad
        // preset sweep or speed measurement needed before changing the
        // default output for every aggressive-mode decompile.
        "bytearrayc",
        // `taintcheck` (unlace#1309) is report-only and landed unmeasured on a sweep;
        // preset membership would add warnings to every aggressive decompile.
        "taintcheck",
    ];

    let agg = mode_overrides("aggressive").unwrap();
    let mut missing: Vec<&str> = Vec::new();
    for i in 0..unlace_num_settables() {
        let st = unlace_settable_by_index(i);
        // Only ON/OFF options with a shipped default of `off` are in scope;
        // a multi-valued option (e.g. `cppsig = off|proven|inferred`) has no
        // single "on" the preset could pin.
        if st.shipped != "off" || st.values != "on|off" {
            continue;
        }
        if EXCLUDED_ON_PURPOSE.contains(&st.option) {
            assert!(
                !agg.iter().any(|(o, _)| *o == st.option),
                "`{}` is a documented exclusion and must NOT be in aggressive",
                st.option
            );
            continue;
        }
        if UNEVALUATED.contains(&st.option) {
            continue;
        }
        if !agg.iter().any(|(o, v)| *o == st.option && *v == "on") {
            missing.push(st.option);
        }
    }
    assert!(
        missing.is_empty(),
        "these default-off options are absent from AGGRESSIVE_OVERRIDES and are \
             therefore unreachable on the default path (`auto` picks `aggressive` \
             under 500 KiB, so `decompile-all`, the web front-end and the benchmark \
             never run them): {missing:?}. Either add each to the preset -- with a \
             sweep and a speed measurement -- or list it in EXCLUDED_ON_PURPOSE / \
             UNEVALUATED here with the reason."
    );
    // The bookkeeping lists must stay honest: an entry that IS in the preset,
    // or that names no option at all, is stale.
    for name in EXCLUDED_ON_PURPOSE.iter().chain(UNEVALUATED) {
        assert!(
            (0..unlace_num_settables()).any(|i| unlace_settable_by_index(i).option == *name),
            "`{name}` is listed here but is not a registered option"
        );
    }
    for name in UNEVALUATED {
        assert!(
            !agg.iter().any(|(o, _)| o == name),
            "`{name}` is now IN the preset -- remove it from UNEVALUATED"
        );
    }
}

#[test]
fn fast_replaces_exhaustive_with_bounded_discovery() {
    assert_eq!(
        mode_overrides("fast").unwrap(),
        &[
            ("listing", "off"),
            ("funcstart_patterns", "off"),
            ("aif", "off"),
            ("fast_funcdisc", "on"),
            ("ctypes", "on")
        ]
    );
}

#[test]
fn auto_spells_c_at_every_size_and_explicit_presets_keep_their_lists() {
    for size in [0, AUTO_RELIABLE_MIN_BYTES, AUTO_FAST_MIN_BYTES, u64::MAX] {
        for requested in [None, Some("auto")] {
            let (concrete, overrides) = resolve_overrides_for_size(requested, size).unwrap();
            assert_eq!(concrete, auto_mode_for_size(size));
            let own = AUTO_OVERRIDES.len();
            assert_eq!(&overrides[..own], AUTO_OVERRIDES, "auto at {size}");
            assert_eq!(&overrides[own..], mode_overrides(concrete).unwrap());
        }
    }
    for name in ["reliable", "aggressive", "fast"] {
        let (concrete, overrides) = resolve_overrides_for_size(Some(name), 0).unwrap();
        assert_eq!(concrete, name);
        assert_eq!(overrides, mode_overrides(name).unwrap());
    }
    assert!(resolve_overrides_for_size(Some("turbo"), 0).is_none());
}

#[test]
fn unknown_mode_is_none() {
    assert!(mode_overrides("turbo").is_none());
    assert!(mode_overrides("").is_none());
}

#[test]
fn mode_names_lists_all() {
    let names: Vec<_> = mode_names().collect();
    assert_eq!(names, vec!["auto", "reliable", "aggressive", "fast"]);
}
