//! P0 -- decompiler MODES: named presets over the runtime option surface.
//!
//! A concrete *mode* is a named, ordered list of `(option, value)` overrides
//! layered on top of the shipped defaults, applied *before* any explicit user
//! `--option` (last-write-wins, so a user `--option` always overrides the
//! mode). A mode is **not** a `[[settable]]` row -- it references existing
//! option names and lives entirely in this table, so it never touches
//! `phases.toml` / `SETTABLE_TABLE` / the catalog count+tier gates. File
//! frontends resolve an omitted mode as the size-driven `auto` policy.
//!
//! Four modes ship:
//!   - **`auto`** -- a frontend policy that selects a concrete preset from the
//!     input binary's file size and layers its own presentation overrides
//!     ([`AUTO_OVERRIDES`]) under that preset. It is not itself applicable to an
//!     [`Architecture`](crate::architecture::Architecture), which has no input
//!     file metadata.
//!   - **`reliable`** -- the shipped, well-tested defaults (a stable, named
//!     alias with an empty override list). Anchors the "give me the safe output"
//!     product surface and future-proofs the preset if defaults later drift.
//!   - **`aggressive`** -- turn on every off-by-default quality/recovery/analysis
//!     pass for the most-recovered (and slowest, most speculative) output. Two
//!     options are excluded (see [`AGGRESSIVE_OVERRIDES`]).
//!   - **`fast`** -- replace exhaustive discovery with a rooted recursive pass
//!     plus conservative pointer validation while retaining per-function transforms.
//!
//! Concrete presets are applied through `Architecture::apply_mode` (which fans
//! out to `set_unlace_option`). File frontends resolve `auto` from binary
//! metadata with [`resolve_overrides_for_size`], which also returns `auto`'s own
//! overrides; the interactive console has no file-size policy and accepts only
//! concrete presets.

/// A named preset over the option surface.
pub struct Mode {
    /// The mode token (`auto`, `reliable`, `aggressive`, `fast`).
    pub name: &'static str,
    /// One-line human/LLM description.
    pub summary: &'static str,
    /// Whether this is a frontend policy that must first select a concrete
    /// preset using input metadata.
    pub automatic: bool,
    /// Ordered `(option, value)` overrides. Applied in order; a later
    /// `set_unlace_option` (another override, or a user `--option`) wins. For an
    /// automatic policy these are applied before the overrides of whichever
    /// preset it selects; an empty concrete list is the shipped defaults.
    pub overrides: &'static [(&'static str, &'static str)],
}

/// First file size at which `auto` stops selecting `aggressive`.
pub const AUTO_RELIABLE_MIN_BYTES: u64 = 500 * 1024;

/// First file size at which `auto` selects `fast`.
pub const AUTO_FAST_MIN_BYTES: u64 = 2 * 1024 * 1024;

/// The four shipped modes.
pub const MODE_TABLE: &[Mode] = &[
    Mode {
        name: "auto",
        summary: "Select aggressive below 500 KiB, reliable from 500 KiB up to \
                  2 MiB, and fast at 2 MiB or larger, using the input file size; \
                  every size spells core types as C (ctypes on).",
        automatic: true,
        overrides: AUTO_OVERRIDES,
    },
    Mode {
        name: "reliable",
        summary: "The shipped, well-tested defaults -- the safe, stable baseline \
                  with no extra transform overrides.",
        automatic: false,
        overrides: RELIABLE_OVERRIDES,
    },
    Mode {
        name: "aggressive",
        summary: "Maximum recovery: turn on every off-by-default quality, \
                  structuring, and analysis pass except v850indirectbranch and \
                  dwarf_lines. Slower and more speculative (may over-recover); \
                  best for readability and the benchmark ceiling, not for \
                  guaranteed faithfulness.",
        automatic: false,
        overrides: AGGRESSIVE_OVERRIDES,
    },
    Mode {
        name: "fast",
        summary: "Speed-first whole-binary analysis: replace exhaustive Listing, \
                  prologue-pattern, and AIF discovery with rooted recursive \
                  function discovery plus conservative pointer validation; core \
                  types spell as C (ctypes on).",
        automatic: false,
        overrides: FAST_OVERRIDES,
    },
];

/// `reliable` = the shipped defaults. Deliberately empty: pinning any option
/// here (e.g. `listing off`) would *change* behaviour vs the defaults -- in
/// particular `decompile` and `decompile-all` auto-enable the Listing, so an
/// explicit `listing off` would change them. An empty list leaves every surface
/// default untouched.
const RELIABLE_OVERRIDES: &[(&str, &str)] = &[];

/// `aggressive` = every off-by-default option flipped ON, **except**
/// `dwarf_lines`. The options that became shipped defaults stay listed
/// (`returndup` since DIV-54, `pdb` since DIV-129, the presentation defaults
/// `partialaccess`, `voidtailreturn`, `importdata`, `calltargettype` and
/// `libcnames`, and the target-gated passes -- `rtti`=PE,
/// `itaniumrtti`=ELF/Mach-O-with-RTTI, `objc`/`macho-arm64e`=Mach-O,
/// `sparcstructret`=SPARC, `v850indirectbranch`=V850, the ARM entry and
/// hard-float passes -- all inert off their target): the preset owns the option
/// outright, so a user `--option returndup off` earlier on the command line is
/// re-enabled by the preset and the contract survives any later default drift.
///
/// The default-off options are safe to blanket-enable except that one:
///
///   - `dwarf_lines` recovers nothing. It annotates every instruction with its
///     `.debug_line` `file:line` and those comments survive into the C body, so
///     on any binary built with `-g` it buries the code under interleaved
///     `/* src.c:NNN */` lines (`auto` picks `aggressive` under 500 KiB, which
///     made that the *default* rendering for small debug binaries).
///
/// It stays a manual per-run opt-in (`--option dwarf_lines on`) even under
/// `--mode aggressive`.
///
/// `formatstring` used to be a third exclusion, for cost: its
/// decompile->override->re-decompile loop paid a **second full decompile** of
/// every caller whose printf/scanf call sites yielded an override, and those are
/// the expensive functions -- `decompile-all` measured +77.5% (cronie
/// `crontab`), +55.1% (gnutls `psktool`), +43.7% (`gzip`) -- while the recovery
/// it bought was real (decbench C `type_match` perfects 80 -> 88 of 1,133). The
/// loop is now the option's `full` value; its `static` default reads the same
/// format constants out of the IMAGE at load, so the typing arrives before the
/// first decompile and there is no second one. `static` needs the Listing, which
/// this preset supplies, so the preset is where it delivers.
const AGGRESSIVE_OVERRIDES: &[(&str, &str)] = &[
    // transform-tier default-off recovery/structuring passes.
    ("switchmodbound", "on"),
    // (unlace) Itanium try/catch for the landing pads with a catch clause: +0.5%
    // instructions on a 252 KB g++ binary (`itaniumeh on`, every cleanup pad
    // too, costs +25%).
    ("itaniumeh", "catch"),
    // (unlace) Recover a CMOV/predicated indirect dispatch over constant code
    // addresses. The default `reentry` recovers only re-entered dispatcher loops,
    // because a conditional tail call between two nearby function entries has the
    // same shape and recovering it splices both callee bodies into the caller;
    // preset membership is the delivery route for `on`, since the only
    // alternative on a real dispatch is losing the whole body behind the branch
    // to a `(*v)()` call.
    ("constselectjump", "on"),
    ("switchguardbound", "on"), // speed-expensive
    ("unrolledguard", "on"),    // speed-expensive
    ("globalarrayanchor", "on"),
    ("opaquepredicate", "on"),
    ("sparcstructret", "on"),     // SPARC-idiom-gated; no-op off-SPARC
    ("v850indirectbranch", "on"), // V850-gated (v850indbranch::applies); no-op off-V850
    ("regionedgeorder", "on"),
    ("returndup", "on"), // default-ON since DIV-54; kept so the preset owns it
    // (unlace) Decline the returndup split at the join of a one-block `if`, so
    // `if (c) f(); return 0;` is not printed as `if (!c) return 0; f(); return 0;`.
    // Shipped OFF because the decbench O2 sample moved aggregate GED by +60 (it is
    // -163 and +56 GED-perfect at O0); preset membership delivers it to the page.
    ("rettriangle", "on"),
    ("iteexpr", "on"), // angr-style ?: recovery over computed-expression arms (readability)
    // Recover the scalar loop for readability. Kept in aggressive mode because
    // this hides the compiler's vector stride and duplicated loop body.
    ("devectorize", "on"),
    // (unlace) Valid per-architecture C type spelling. The shipped catalog default
    // is OFF because 42 XML datatest assertions pin the Ghidra spellings, and the
    // parity harness applies no mode -- so preset membership (with `fast` and
    // `AUTO_OVERRIDES`) is what makes valid C the default RENDERING for every
    // real binary without touching the corpus.
    ("ctypes", "on"),
    // (unlace) Print a partial access no member names as a typed pointer access
    // instead of Ghidra's `name._<off>_<size>_`. A shipped default; kept so the
    // preset owns it.
    ("partialaccess", "on"),
    // (unlace) Lay out an address-taken frame record read at several widths as
    // one synthesized structure. Shipped OFF because the structure is a layout
    // hypothesis and its program-wide name renumbers later synthesized
    // structures; 0/675 datatest assertions move with it on.
    ("stackstruct", "on"),
    // (unlace DIV-98) Elide a void function's trailing bare `return;`, the statement
    // the C source it came from does not have. A shipped default; kept so the
    // preset owns it.
    ("voidtailreturn", "on"),
    ("importdata", "on"), // a shipped default; kept so the preset owns it
    // (unlace, DIV-99) Fold the Cortex-M `isCurrentModePrivileged()` guard the
    // vendored ARM SLEIGH wraps around every VERSION_7M MRS/MSR. A shipped
    // default, kept so the preset owns it. Structurally inert everywhere else --
    // the fixup is registered only on a language that declares the user-op, and
    // only 12 Thumb-2 constructors emit it.
    ("cortexmpriv", "on"),
    ("x64syscall", "on"),
    // (unlace, DIV-108) Cap the pointer nesting `ActionInferTypes` will adopt. A
    // small-string-optimized C++ object writes the unsatisfiable equation
    // `T == ptr(T)` into the type lattice, so the propagation adds one pointer
    // level per pass up to its seven-pass settle ceiling and declares the object
    // `unsigned long long *****`. Shipped default OFF because it changes INFERRED
    // types and the XML datatest corpus pins the upstream spellings while applying
    // no mode; preset membership is what makes the cap the default rendering for
    // every real binary. Inert on anything whose types already settle -- the rule
    // is upstream's own `getTypePointerNoDepth`, and depth 1/2 over a concrete base
    // (`char **argv`) is untouched. Corpus sweep: 90 binaries / 22,307 functions,
    // 103 change (0.46%), `***` occurrences 1,617 -> 28 and functions carrying one
    // 80 -> 17, ZERO call sites lost or gained. Speed is paid only where it fires:
    // -0.12% on a 1,027-function binary whose output is byte-identical on both
    // arms, +5.3% on the witness binary where 1 of 144 functions changes.
    ("ptrdepthcap", "on"),
    // (unlace, GH-869) Give an indirect call's target the function-pointer type
    // the call states. A shipped default; kept so the preset owns it.
    ("calltargettype", "on"),
    // (unlace) Name a local after the library call that returns it or takes it
    // whole (`fd = open(...)`, `read(fd, ...)`). A shipped default; kept so the
    // preset owns it.
    ("libcnames", "on"),
    // (unlace) ARM hard-float scalar VFP contracts: a double returned whole in d0
    // and float/double parameters in their s/d registers on both sides of a
    // call. Shipped defaults, kept so the preset owns them; inert unless the ELF
    // container states the VFP procedure-call standard, so soft-float, softfp and raw
    // images print byte-identically. `armfloatargs` needs `armfloatreturn`.
    // Measured over a 42-binary gcc/clang ABI corpus (hard, softfp and soft
    // float; -O0/-O2/-Os) and 84 hard-float decbench firmware slices; see the
    // options' catalog rows.
    ("armfloatreturn", "on"),
    ("armfloatargs", "on"),
    // analysis-tier default-off discovery/markup passes. `listing` is the master
    // gate that enables the Listing-consuming passes (fid/aif/discovered-noreturn).
    ("listing", "on"),
    ("fast_funcdisc", "on"),
    ("eh_frame_full", "on"),
    ("funcstart_patterns", "on"),
    ("addrtable", "on"),
    ("operand_refs", "on"),
    // (unlace) The 4-byte string width: an int table of character codes is
    // byte-for-byte a wide literal, so it ships off and plants only what the image
    // backs as a string (an operand or pointer at the start that no code indexes,
    // a 4-byte mergeable string section).
    ("widestrings32", "on"),
    ("fid", "on"),
    ("flirt", "on"),       // inert without UNLACE_FLIRT_SIGS
    ("rtti", "on"),        // PE-only; no-op off-PE
    ("itaniumrtti", "on"), // ELF and Mach-O, inert without __cxxabiv1 typeinfo anchors
    // The speculative gap-walk ("may create bad code") with the aligned gap cursor
    // (GH-299). Every number in its catalog row was measured under this preset,
    // and the aligned cursor is a net win in BOTH directions there (mid-body
    // entries -38.9%, recall +344 over 110 stripped non-x86-64 binaries) but misses
    // the acceptance bar pre-registered for becoming the shipped default, so preset
    // membership is how it reaches the default path. Not `precise`: its
    // corroboration test (GH-313) costs more real functions than it removes
    // phantoms on every corpus measured.
    ("aif", "strict"),
    // (unlace, DIV-93) The four-step ARM entry-discovery sequence (#248 / #255 /
    // #259 / #278). `cortexmvectors`, `ptrentry` and `tailcallentry` carry an
    // explicit `object::Architecture::Arm` early return; `poolentry` has no arch
    // gate but is ARM-only IN EFFECT, because it keys on PC-relative literal
    // pools, which x86-64 (RIP-relative loads target .rodata, not .text
    // interstices) and i386 (no PC-relative addressing) do not produce. Either
    // way the no-op is proven rather than assumed: over 90 x86-64 decbench twins
    // and the 12 i386 PE images inside the ARM corpus the entry sets are
    // IDENTICAL, and emitted C over 8 x86-64 binaries is byte-identical. They
    // COMPOSE, so preset
    // membership was one joint evaluation, measured over the 110 stripped
    // non-x86-64 decbench twins (50,724 symbol-table function starts):
    // recall 44,957 -> 47,330 (88.63% -> 93.31%, +2,373) while mid-body false
    // entries FALL 8,333 -> 7,117. 98.8% of the 2,402 added entries are real
    // function starts and ZERO ground-truth entries are lost -- `poolentry`
    // retires 1,217 phantom entries, none of them ground truth.
    // `ptrentry`/`tailcallentry`/`poolentry` are Listing consumers and are inert
    // without `listing` + `aif`; the preset supplies both, which is what makes
    // the flip deliver anything at all (these are flag writes, so their position
    // in this list carries no ordering semantics -- the dependency is at run time).
    ("cortexmvectors", "on"),
    ("ptrentry", "on"),
    ("tailcallentry", "on"),
    ("poolentry", "on"),
    ("objc", "on"),          // Mach-O-only; no-op off-Mach-O
    ("swiftmetadata", "on"), // Mach-O/ELF with swift5_* sections only; no-op elsewhere
    ("cfstrings", "on"),     // Mach-O-only; no-op off-Mach-O
    ("pdb", "on"),           // PE-only; no-op off-PE (a shipped default since DIV-129)
    // (unlace `pdbtypes`) PE with a matching `.pdb` only: on Mozilla's MSVC-linked
    // softokn3/firefox/mozglue it names 1,795/2,880/2,546 parameters where the
    // binary alone names 2/82/77, at no extra time; inert everywhere else.
    ("pdbtypes", "on"),
    ("macho-arm64e", "on"), // Mach-O arm64e-only; no-op elsewhere
];

/// `fast` = avoid the three exhaustive program-wide discovery paths that dominate
/// large-binary latency, while retaining rooted recursive discovery and
/// conservative pointer validation for a usable whole-binary project.
///
/// `ctypes` is the printer's C spelling of the core types. It costs nothing, so
/// a speed preset has no reason to print `int8` where `aggressive` prints
/// `long long` (GH-1063).
const FAST_OVERRIDES: &[(&str, &str)] = &[
    ("listing", "off"),
    ("funcstart_patterns", "off"),
    ("aif", "off"),
    ("fast_funcdisc", "on"),
    ("ctypes", "on"),
];

/// `auto`'s own overrides, applied under every preset it selects. The size
/// policy trades discovery and recovery depth for latency; the spelling of the
/// emitted C is not part of that trade, so `ctypes` holds at every size,
/// including the `reliable` tier between 500 KiB and 2 MiB. An explicit
/// `--mode reliable` stays the catalog defaults.
const AUTO_OVERRIDES: &[(&str, &str)] = &[("ctypes", "on")];

/// Select the concrete preset for `size_bytes` under the `auto` policy.
pub fn auto_mode_for_size(size_bytes: u64) -> &'static str {
    if size_bytes < AUTO_RELIABLE_MIN_BYTES {
        "aggressive"
    } else if size_bytes < AUTO_FAST_MIN_BYTES {
        "reliable"
    } else {
        "fast"
    }
}

/// Resolve an omitted or named frontend mode to a concrete preset name only;
/// the overrides to apply come from [`resolve_overrides_for_size`].
///
/// Omission selects `auto`. Explicit concrete presets ignore `size_bytes`.
/// Returns `None` for an unknown name.
pub fn resolve_mode_for_size(requested: Option<&str>, size_bytes: u64) -> Option<&'static str> {
    let requested = requested.unwrap_or("auto");
    let mode = MODE_TABLE.iter().find(|mode| mode.name == requested)?;
    if mode.automatic {
        Some(auto_mode_for_size(size_bytes))
    } else {
        Some(mode.name)
    }
}

/// Resolve an omitted or named frontend mode to its concrete preset and the
/// ordered overrides a frontend applies for it: an automatic policy's own
/// overrides, then the selected preset's. Returns `None` for an unknown name.
pub fn resolve_overrides_for_size(
    requested: Option<&str>,
    size_bytes: u64,
) -> Option<(&'static str, Vec<(&'static str, &'static str)>)> {
    let requested = requested.unwrap_or("auto");
    let mode = MODE_TABLE.iter().find(|mode| mode.name == requested)?;
    let concrete = resolve_mode_for_size(Some(requested), size_bytes)?;
    let mut overrides = if mode.automatic {
        mode.overrides.to_vec()
    } else {
        Vec::new()
    };
    overrides.extend_from_slice(mode_overrides(concrete)?);
    Some((concrete, overrides))
}

/// Whether `name` identifies a frontend policy rather than a static preset.
pub fn mode_is_automatic(name: &str) -> bool {
    MODE_TABLE.iter().any(|m| m.name == name && m.automatic)
}

/// The override list for a static `name`, or `None` if `name` is unknown or
/// automatic. A frontend applies [`resolve_overrides_for_size`] instead, which
/// also carries `auto`'s own overrides; this list alone drops them.
pub fn mode_overrides(name: &str) -> Option<&'static [(&'static str, &'static str)]> {
    MODE_TABLE
        .iter()
        .find(|m| m.name == name && !m.automatic)
        .map(|m| m.overrides)
}

/// The shipped mode names, in table order.
pub fn mode_names() -> impl Iterator<Item = &'static str> {
    MODE_TABLE.iter().map(|m| m.name)
}

#[cfg(test)]
mod tests;
