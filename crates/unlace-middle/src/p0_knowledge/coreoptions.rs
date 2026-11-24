//! Unlace options that the core reads itself (`Architecture` resolves them against image facts
//! when it builds a function's `ArchContext`, or acts on them while loading), so their types
//! live in the knowledge plane instead of the pass that consumes them.

crate::unlace_flag!(
    /// (unlace `guardedloop`) A guarded do-while prints as a while loop.  See
    /// [`crate::p8_structure::guardedloop`].
    GuardedLoop,
    "guardedloop",
    "Guarded do-while loops printed as while loops",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) `option ptrauthtrap`: cut the branch into each arm64e
    /// pointer-auth failure trap whose guard is the return-address bit test.
    /// Default on.
    PtrauthTrap,
    "ptrauthtrap",
    "arm64e pointer-auth failure-check removal",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `mzdgroup`) `option mzdgroup`: state the data segment an MS-DOS
    /// executable's startup code loads into DS as DS's value at every function
    /// entry.  Default on.  See [`unlace_mzdgroup`](crate::mzdgroup).
    MzDgroupOn,
    "mzdgroup",
    "MS-DOS data segment in DS",
    unset: true,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `chkstkdarwin`) Remove the calls to the Darwin stack probe
    /// `___chkstk_darwin` from a Darwin AArch64 image before SSA
    /// (`p2_lift/chkstkdarwin.rs`), so the argument registers it preserves
    /// keep their values across it. Default on.
    ChkstkDarwin,
    "chkstkdarwin",
    "Darwin stack-probe call removal",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `spsolve`) In an x86-32 ELF under a compiler spec whose default model
    /// states its extrapop, solve each function's stack-pointer deltas for the
    /// calls that pop arguments or do not return
    /// (`p4_calls/spsolve.rs`). Default on.
    SpSolve,
    "spsolve",
    "x86-32 stack-pointer delta solve",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `noretfirst`) Guard clauses that end in a no-return call print first: P8's
    /// `ruleBlockIfNoExit` breaks a tie between two terminal arms toward the arm that ends in a
    /// no-return call, and the C syntax tree prints the arm of an `if`/`else` that never falls
    /// through first (`unlace_ctree`).
    Noretfirst,
    "noretfirst",
    "non-returning arm first",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `postinc`) A pointer step after its dereference prints as `*p++`.
    PostIncrement,
    "postinc",
    "Pointer steps folded into *p++",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) Hand [`Self::dex`] to the engine (option `dexmodel`).
    DexModel,
    "dexmodel",
    "DEX constant pool and register payloads",
    unset: true,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) Recover switches from a jump-assist user-op (option `jumpassist`).
    JumpAssist,
    "jumpassist",
    "jump-assist switch recovery",
    unset: true,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) Recover a DEX method's try/catch blocks from its `try_item`s
    /// (option `javatry`).
    JavaTry,
    "javatry",
    "Java try/catch from a DEX method's try items",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `calltargettype`) Give an indirect call's target the
    /// function-pointer type the call states (`unlace_calltargettype`).
    CallTargetType,
    "calltargettype",
    "indirect-call target types",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `vexzeroupper`) Split each VEX zero-upper ZMM write at the result's
    /// width (`unlace_vexzeroupper`).
    VexZeroUpper,
    "vexzeroupper",
    "VEX zero-upper writes split at the result width",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `vectorabi`) Widen the SysV x86-64 default model with the
    /// xmm/ymm/zmm vector entries (`unlace_vectorabi`).
    VectorAbi,
    "vectorabi",
    "SysV x86-64 vector arguments and returns",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) `ud2` or `int3 int3` after an x86 call marks the call no-return
    /// (option `trapaftercall`).
    TrapAfterCall,
    "trapaftercall",
    "no-return evidence from a trap after a call",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `castarith`) Print a pointer plus a whole number of `T`s, used as a
    /// `T *`, as pointer arithmetic on `(T *)p` instead of an integer round
    /// trip.  Implementation: [`unlace_castarith`](crate::p9_emit::castarith).
    CastArith,
    "castarith",
    "pointer arithmetic in pointer terms",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `castindex`) Print a pointer plus a variable index of whole `T`s as
    /// a subscript on `(T *)p`, and the difference of two `char`-width pointers
    /// as `p - q`, instead of an integer round trip.  Implementation:
    /// [`unlace_castarith`](crate::p9_emit::castarith).
    CastIndex,
    "castindex",
    "variable indexes and pointer differences in pointer terms",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `vtabletypes`) Type each recovered Itanium or MSVC vtable as a
    /// `C_vtbl` structure of named method pointers, give the class structure a
    /// `vptr` (`__vftable` for MSVC) field of that type, and fold a load of a
    /// vtable slot to the method it holds; see [`crate::vtabletypes`].
    /// Default **on**.
    Vtabletypes,
    "vtabletypes",
    "typed C++ vtables and vtable slot folding",
    unset: true,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace) Name library functions from FLIRT `.sig` files listed in `UNLACE_FLIRT_SIGS` (`flirt`). Default off.
    Flirt,
    "flirt",
    "FLIRT signature matching",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace) Merge load-time prototypes slot by slot (`protomerge`). Default on.
    Protomerge,
    "protomerge",
    "Slot-by-slot merge of load-time prototypes",
    unset: false,
    shipped: true
);

/// (unlace `deadcascade`) After this many passes of one run of a rule pool
/// (`None` = never), dead-op removal also removes the dead chain behind the
/// removed op.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DeadCascade(pub Option<u32>);

/// The default pass of a pool run from which removal cascades: a run that has
/// gone this long is almost always taking dead chains apart one link a pass.
pub const DEAD_CASCADE_PASSES: u32 = 32;

impl crate::optionset::UnlaceOption for DeadCascade {
    const NAME: &'static str = "deadcascade";
    crate::unlace_option_id!();

    fn unset() -> Self {
        DeadCascade(Some(DEAD_CASCADE_PASSES))
    }

    fn shipped() -> Self {
        DeadCascade(Some(DEAD_CASCADE_PASSES))
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let field = value.trim();
        Ok(match field {
            "off" => (
                DeadCascade(None),
                "Dead-op removal takes one link of a dead chain per pass".to_string(),
            ),
            "on" => (
                DeadCascade(Some(0)),
                "Dead-op removal takes a dead chain of joins and guards out at once".to_string(),
            ),
            _ => {
                let n = field
                    .parse::<u32>()
                    .ok()
                    .filter(|_| !field.is_empty() && field.bytes().all(|b| b.is_ascii_digit()))
                    .ok_or_else(|| {
                        unlace_base::error::UnlaceError::parse(
                            "Must specify off, on or a decimal pass count",
                        )
                    })?;
                (
                    DeadCascade(Some(n)),
                    format!(
                        "Dead-op removal takes a dead chain of joins and guards out at once once a pool run has made {n} passes"
                    ),
                )
            }
        })
    }
}

/// (unlace `lanefuse`) Re-fuse per-lane vector p-code (`on`), and legacy-SSE
/// integer and two-lane double runs too (`all`).  A function's context holds
/// `on` already resolved against the image (x86-64 only).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct LaneFuse {
    pub on: bool,
    pub all: bool,
}

impl crate::optionset::UnlaceOption for LaneFuse {
    const NAME: &'static str = "lanefuse";
    crate::unlace_option_id!();

    fn unset() -> Self {
        LaneFuse {
            on: false,
            all: false,
        }
    }

    fn shipped() -> Self {
        LaneFuse {
            on: true,
            all: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (on, all) = match value.trim().to_ascii_lowercase().as_str() {
            "all" => (true, true),
            _ => (crate::options::on_or_off(value)?, false),
        };
        let state = if all {
            "all"
        } else if on {
            "on"
        } else {
            "off"
        };
        Ok((
            LaneFuse { on, all },
            format!("Per-lane vector p-code re-fused into one intrinsic turned {state}"),
        ))
    }
}

/// (unlace `opaquepredicate`) Fold comparisons proven constant (`on`), reading
/// a global the program never writes as its initial value too (`globals`,
/// [`crate::opaqueglobals`]).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct OpaquePredicate {
    pub on: bool,
    pub globals: bool,
}

impl crate::optionset::UnlaceOption for OpaquePredicate {
    const NAME: &'static str = "opaquepredicate";
    crate::unlace_option_id!();

    fn unset() -> Self {
        OpaquePredicate {
            on: false,
            globals: false,
        }
    }

    fn shipped() -> Self {
        OpaquePredicate {
            on: false,
            globals: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (on, globals) = match value {
            "off" => (false, false),
            "on" => (true, false),
            "globals" => (true, true),
            other => {
                return Err(unlace_base::error::UnlaceError::parse(format!(
                    "opaquepredicate: expected off, on or globals, got {other}"
                )));
            }
        };
        Ok((
            OpaquePredicate { on, globals },
            format!("Constant-comparison folding set to {value}"),
        ))
    }
}

crate::unlace_flag!(
    /// (unlace `stackviews`) Operation-specific typed views over shared physical frame storage.
    StackViews,
    "stackviews",
    "Shared stack-object views",
    unset: false,
    shipped: false
);

/// (unlace `namestyle`) angr-style default names (`angr`) instead of upstream's
/// (`ghidra`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct NameStyleAngr(pub bool);

impl crate::optionset::UnlaceOption for NameStyleAngr {
    const NAME: &'static str = "namestyle";
    crate::unlace_option_id!();

    fn unset() -> Self {
        NameStyleAngr(false)
    }

    fn shipped() -> Self {
        NameStyleAngr(true)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let val = match value {
            "angr" => true,
            "ghidra" => false,
            _ => {
                return Err(unlace_base::error::UnlaceError::parse(
                    "namestyle must be \"angr\" or \"ghidra\"",
                ));
            }
        };
        Ok((NameStyleAngr(val), format!("Naming scheme set to {value}")))
    }
}

crate::unlace_flag!(
    /// (unlace `rettriangle`) Decline a `returndup` split whose shared RETURN block is the join of a one-block `if`.
    RetTriangle,
    "rettriangle",
    "One-block-if return duplication decline",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace `retsplitglobal`) Refuse to split a shared RETURN block that stores to globals.
    RetSplitGlobal,
    "retsplitglobal",
    "Global-writing shared-epilogue split refusal",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `fieldtype`) Type a pointer by the field it is read through.
    FieldType,
    "fieldtype",
    "Pointer field typing",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace `ctypes`) Spell the named core types as the target's own C types.
    CTypes,
    "ctypes",
    "valid-C core type spelling",
    unset: false,
    shipped: false
);

crate::unlace_flag!(
    /// (unlace `floatglobals`) Type globals moved only through float registers as floats.
    FloatGlobalsOn,
    "floatglobals",
    "float typing of globals moved only through float registers",
    unset: true,
    shipped: true
);

/// (unlace) When the system call gets its register effects: `syscallregs
/// off|auto|on`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SyscallRegsMode {
    /// The vendored model: no register inputs, no output.
    #[default]
    Off,
    /// Only on an image the loader identified as an operating system's
    /// user-space program.
    Auto,
    /// On any image.
    On,
}

impl SyscallRegsMode {
    /// The option token for this mode.
    pub fn as_str(self) -> &'static str {
        match self {
            SyscallRegsMode::Off => "off",
            SyscallRegsMode::Auto => "auto",
            SyscallRegsMode::On => "on",
        }
    }

    /// Does the pass act on an image with this loader fact?
    pub fn fires(self, image_os_userland: bool) -> bool {
        match self {
            SyscallRegsMode::Off => false,
            SyscallRegsMode::Auto => image_os_userland,
            SyscallRegsMode::On => true,
        }
    }
}

/// (unlace) Parse `option syscallregs off|auto|on`; the caller writes the live
/// field.
pub struct OptionSyscallRegs;

impl OptionSyscallRegs {
    /// The option name.
    pub const NAME: &'static str = "syscallregs";

    /// Parse + validate the value.
    pub fn apply(&self, p1: &str) -> unlace_base::error::UnlaceResult<(SyscallRegsMode, String)> {
        let mode = match p1 {
            "off" => SyscallRegsMode::Off,
            "auto" => SyscallRegsMode::Auto,
            "on" => SyscallRegsMode::On,
            other => {
                return Err(unlace_base::error::UnlaceError::parse(format!(
                    "Unknown syscallregs value: {other} (expected off|auto|on)"
                )));
            }
        };
        Ok((mode, format!("System-call register effects set to {p1}")))
    }
}

impl crate::optionset::UnlaceOption for SyscallRegsMode {
    const NAME: &'static str = "syscallregs";
    crate::unlace_option_id!();

    fn unset() -> Self {
        SyscallRegsMode::Off
    }

    fn shipped() -> Self {
        SyscallRegsMode::Auto
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        OptionSyscallRegs.apply(value)
    }
}

/// `option indexaliasguard off` — neither index-alias guard runs.
pub const LEVEL_OFF: unlace_base::types::int4 = 0;

/// `option indexaliasguard load` — `Heritage::guardLoads` only.
pub const LEVEL_LOAD: unlace_base::types::int4 = 1;

/// `option indexaliasguard global` — `guardLoads` + the STORE guard on a
/// global range.
pub const LEVEL_GLOBAL: unlace_base::types::int4 = 2;

/// `option indexaliasguard full` — `guardLoads` + `guardStores`, i.e. upstream
/// Ghidra's behavior.
pub const LEVEL_FULL: unlace_base::types::int4 = 3;

/// The `indexaliasguard` level.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IndexAliasGuard(pub unlace_base::types::int4);

impl crate::optionset::UnlaceOption for IndexAliasGuard {
    const NAME: &'static str = "indexaliasguard";
    crate::unlace_option_id!();

    fn unset() -> Self {
        IndexAliasGuard(LEVEL_GLOBAL)
    }

    fn shipped() -> Self {
        IndexAliasGuard(LEVEL_GLOBAL)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        OptionIndexAliasGuard
            .apply(value)
            .map(|(v, msg)| (IndexAliasGuard(v), msg))
    }
}

/// `option indexaliasguard off|load|global|full` (C++ has no equivalent —
/// upstream is unconditionally `full`).
pub struct OptionIndexAliasGuard;

impl OptionIndexAliasGuard {
    /// The option name.
    pub const NAME: &'static str = "indexaliasguard";

    /// Parse `off`/`load`/`global`/`full` into the guard level + a confirmation
    /// message.
    pub fn apply(
        &self,
        p1: &str,
    ) -> unlace_base::error::UnlaceResult<(unlace_base::types::int4, String)> {
        match p1 {
            "off" => Ok((LEVEL_OFF, "Index-alias heritage guards turned off".to_string())),
            "load" => Ok((
                LEVEL_LOAD,
                "Index-alias heritage guards turned on, LOAD side only (guardLoads)".to_string(),
            )),
            // Empty parameter reads as the shipped default, matching `options::on_or_off`.
            "global" | "on" | "" => Ok((
                LEVEL_GLOBAL,
                "Index-alias heritage guards turned on, LOAD side plus STORE and LOAD guards on globals"
                    .to_string(),
            )),
            "full" => Ok((
                LEVEL_FULL,
                "Index-alias heritage guards turned on, LOAD + STORE \
                 (guardLoads + guardStores)"
                    .to_string(),
            )),
            _ => Err(unlace_base::error::UnlaceError::parse(
                "Must specify one of off, load, global, full",
            )),
        }
    }
}

crate::unlace_flag!(
    /// (unlace DIV-6) Render residual `TYPE_UNKNOWN` (`xunknownN`) values as real C
    /// types by size — 1→`char`, 2/4/8→unsigned ints, pointer-to-unknown→`void *` —
    /// instead of the `xunknownN`/`undefined<N>` placeholder.  Default-on; read by
    /// the printc declarator chokepoints (`RealTypeCtx`).
    Realtypes,
    "realtypes",
    "Real-C-type rendering for unknowns",
    unset: false,
    shipped: true
);

/// (unlace `itaniumeh`) Give calls covered by a call-site record an exceptional
/// edge to their landing pad (`on`), only for pads with a catch clause under
/// `itaniumeh catch` (`catch_only`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ItaniumEh {
    pub on: bool,
    pub catch_only: bool,
}

impl crate::optionset::UnlaceOption for ItaniumEh {
    const NAME: &'static str = "itaniumeh";
    crate::unlace_option_id!();

    fn unset() -> Self {
        ItaniumEh {
            on: false,
            catch_only: false,
        }
    }

    fn shipped() -> Self {
        ItaniumEh {
            on: true,
            catch_only: false,
        }
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let catch_only = value.trim().eq_ignore_ascii_case("catch");
        let on = catch_only || crate::options::on_or_off(value)?;
        let state = if catch_only {
            "catch"
        } else if on {
            "on"
        } else {
            "off"
        };
        Ok((
            ItaniumEh { on, catch_only },
            format!("Itanium exception edges to landing pads turned {state}"),
        ))
    }
}
