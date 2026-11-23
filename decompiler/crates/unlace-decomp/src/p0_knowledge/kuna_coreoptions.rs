//! Kuna options that the core reads itself (`Architecture` resolves them against image facts
//! when it builds a function's `ArchContext`, or acts on them while loading), so their types
//! live in the knowledge plane instead of the pass that consumes them.

crate::kuna_flag!(
    /// (kuna `guardedloop`) A guarded do-while prints as a while loop.  See
    /// [`crate::p8_structure::kuna_guardedloop`].
    GuardedLoop,
    "guardedloop",
    "Guarded do-while loops printed as while loops",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `option ptrauthtrap`: cut the branch into each arm64e
    /// pointer-auth failure trap whose guard is the return-address bit test.
    /// Default on.
    PtrauthTrap,
    "ptrauthtrap",
    "arm64e pointer-auth failure-check removal",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `mzdgroup`) `option mzdgroup`: state the data segment an MS-DOS
    /// executable's startup code loads into DS as DS's value at every function
    /// entry.  Default on.  See [`kuna_mzdgroup`](crate::kuna_mzdgroup).
    MzDgroupOn,
    "mzdgroup",
    "MS-DOS data segment in DS",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `chkstkdarwin`) Remove the calls to the Darwin stack probe
    /// `___chkstk_darwin` from a Darwin AArch64 image before SSA
    /// (`p2_lift/kuna_chkstkdarwin.rs`), so the argument registers it preserves
    /// keep their values across it. Default on.
    ChkstkDarwin,
    "chkstkdarwin",
    "Darwin stack-probe call removal",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `spsolve`) In an x86-32 ELF under a compiler spec whose default model
    /// states its extrapop, solve each function's stack-pointer deltas for the
    /// calls that pop arguments or do not return
    /// (`p4_calls/kuna_spsolve.rs`). Default on.
    SpSolve,
    "spsolve",
    "x86-32 stack-pointer delta solve",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `postinc`) A pointer step after its dereference prints as `*p++`.
    PostIncrement,
    "postinc",
    "Pointer steps folded into *p++",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Hand [`Self::dex`] to the engine (option `dexmodel`).
    DexModel,
    "dexmodel",
    "DEX constant pool and register payloads",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Recover switches from a jump-assist user-op (option `jumpassist`).
    JumpAssist,
    "jumpassist",
    "jump-assist switch recovery",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Recover a DEX method's try/catch blocks from its `try_item`s
    /// (option `javatry`).
    JavaTry,
    "javatry",
    "Java try/catch from a DEX method's try items",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `calltargettype`) Give an indirect call's target the
    /// function-pointer type the call states (`kuna_calltargettype`).
    CallTargetType,
    "calltargettype",
    "indirect-call target types",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `vexzeroupper`) Split each VEX zero-upper ZMM write at the result's
    /// width (`kuna_vexzeroupper`).
    VexZeroUpper,
    "vexzeroupper",
    "VEX zero-upper writes split at the result width",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `vectorabi`) Widen the SysV x86-64 default model with the
    /// xmm/ymm/zmm vector entries (`kuna_vectorabi`).
    VectorAbi,
    "vectorabi",
    "SysV x86-64 vector arguments and returns",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) `ud2` or `int3 int3` after an x86 call marks the call no-return
    /// (option `trapaftercall`).
    TrapAfterCall,
    "trapaftercall",
    "no-return evidence from a trap after a call",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `castarith`) Print a pointer plus a whole number of `T`s, used as a
    /// `T *`, as pointer arithmetic on `(T *)p` instead of an integer round
    /// trip.  Implementation: [`kuna_castarith`](crate::p9_emit::kuna_castarith).
    CastArith,
    "castarith",
    "pointer arithmetic in pointer terms",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `castindex`) Print a pointer plus a variable index of whole `T`s as
    /// a subscript on `(T *)p`, and the difference of two `char`-width pointers
    /// as `p - q`, instead of an integer round trip.  Implementation:
    /// [`kuna_castarith`](crate::p9_emit::kuna_castarith).
    CastIndex,
    "castindex",
    "variable indexes and pointer differences in pointer terms",
    unset: false,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna `vtabletypes`) Type each recovered Itanium vtable as a `C_vtbl`
    /// structure of named method pointers, give the class structure a `vptr`
    /// field of that type, and fold a load of a vtable slot to the method it
    /// holds; see [`crate::kuna_vtabletypes`]. Default **on**.
    Vtabletypes,
    "vtabletypes",
    "typed C++ vtables and vtable slot folding",
    unset: true,
    shipped: true
);

crate::kuna_flag!(
    /// (kuna) Name library functions from FLIRT `.sig` files listed in `KUNA_FLIRT_SIGS` (`flirt`). Default off.
    Flirt,
    "flirt",
    "FLIRT signature matching",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Merge load-time prototypes slot by slot (`protomerge`). Default on.
    Protomerge,
    "protomerge",
    "Slot-by-slot merge of load-time prototypes",
    unset: false,
    shipped: true
);
