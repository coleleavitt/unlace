# Atomic idioms: how Hex-Rays 9.5 prints them, and a plan for unlace (2026-11-24)

Deepens gap 5 of `notes/ida-gaps.md`.

**Status (2026-11-24, later the same day):** #245 (143cc4d460) landed options `atomics` (x86 `lock` RMW, AArch64 LSE, RISC-V AMO as `__sync_*` builtins, `kuna_atomics` in unlace-lift) and `llscfold` (AArch64 `ldaxr`/`stlxr` retry loops folded into the same builtins), both default off. That covers steps 1, 3 and 5 of the plan below in GCC spelling. Still open from this note: MSVC `_Interlocked*` spelling on MSVC PE images (Hex-Rays' `auto` rule), the pair forms (`cmpxchg8b`/`cmpxchg16b`, `casp`), `_Atomic`-typed pointers (hexarm `sub_899B0`), and ARM32 `ldrex`/`strex`. Later: the MSVC spelling landed with `atomics msvc|auto`; the pair forms (`cmpxchg8b`/`cmpxchg16b` as an 8/16-byte compare-and-swap, `casp` on X registers through `kuna_atomics::pair`) and ARM/Thumb `ldrex`/`strex` retry loops (under `llscfold`) landed on branch `ida/atomic128`. Still open: `_Atomic`-typed pointers, `ldrexd`/`strexd` and `ldaxp`/`stlxp` pair loops, and clang's rotated ARM compare-exchange loop (a `dmb` block between the compare and the `strex`). The rest of this note describes the state before #245. Today unlace prints an x86 `lock`-prefixed instruction as the
SLEIGH user-ops around plain p-code (`LOCK(); *p = *p + 1; UNLOCK();`, from `define pcodeop LOCK` in
`specs/Ghidra/Processors/x86/data/languages/ia.sinc:783`), an AArch64 LSE `CAS` as a compare, a branch and
a store (the `:cas` constructor in `AARCH64base.sinc` is `if (data != comparevalue) goto <skip>; *p = newvalue;`),
and `LDAXR`/`STLXR` as an ordinary load and store. The atomicity, which is what a reader needs to see in
a refcount, a lock or a lock-free queue, is gone. The one exception is Go: `p2_lift/atomicxadd.rs`
captures the `LOCK ... UNLOCK` envelope of one `XADD` for `kuna_goatomicreturn`.

## 1. What Hex-Rays does

**x86 (hexx64).**
- `sub_8AC80` is the microcode generator for the special x86 instructions (a switch over the
  instruction type). Its strings: `_InterlockedCompareExchange8/16/(32)/64/128`, `_InterlockedExchange`,
  `_InterlockedExchange64`, `_InterlockedAddLargeStatistic`, and for GCC `__atomic_exchange_n` with
  `__ATOMIC_SEQ_CST`, `__sync_val_compare_and_swap`.
- `sub_78020` names a locked read-modify-write from the instruction type and operand size:
  `add`/`and`/`or`/`sub`/`xor`/`xadd`/`inc`/`dec` -> `_InterlockedAdd`, `And`, `Or`, `Sub`, `Xor`,
  `ExchangeAdd`, `Increment`, `Decrement`, suffixed `8`/`16`/none/`64`; `bts`/`btr` ->
  `_interlockedbittestandset`/`reset` (it lowercases the second letter); any other size is `interr`.
- `sub_99BD0` is a later rewrite: `__sync_fetch_and_add(p, +-1)` or `_InterlockedExchangeAdd(p, +-1)`
  becomes `_InterlockedIncrement`/`_InterlockedDecrement` (MSVC spelling) or
  `__sync_add_and_fetch`/`__sub_and_fetch` (GCC spelling), retyping the result.
- Which spelling is a decompiler option (hexx64 option dialog): "Helper function names: Auto = GCC/Clang
  builtins unless the compiler is MSVC, Borland C++, Delphi or Watcom; MSVC intrinsics
  (`_byteswap_ulong, _InterlockedExchangeAdd`, ...); GCC/Clang builtins (`__builtin_bswap32,
  __sync_fetch_and_add`, ...)".

**ARM (hexarm).**
- `sub_899B0` (called from `sub_8E980`) handles six LSE instruction types through a table whose names
  are `CAS`, `CASP`, `load`, `store`, `exchange`, `fetch_add`, `fetch_and`, `fetch_or`, `fetch_xor`,
  `compare_exchange_strong`: it emits C11 calls (`atomic_load`, `atomic_store`, `atomic_exchange`,
  `atomic_fetch_add`, `atomic_compare_exchange_strong`) and types the pointer argument as a pointer to
  `atomic_uchar`, `atomic_ushort`, `atomic_uint`, `atomic_ulong`, `atomic_ullong`, `atomic_uint32`,
  `atomic_uint64` or `atomic_uint128` by operand size (a pair, `CASP`, doubles it). For `exchange` it
  keeps the operand's own type when `get_op_tinfo` has one of the same size.
- Exclusive load/store are printed as intrinsics, not plain memory: `__ldrex`, `__ldrexd`, `__strex`,
  `__strexd`, `__ldxr`, `__ldaxr`, `__ldxp`, `__ldaxp`, `__stxr`, `__stlxr`, `__stxp`, `__stlxp`,
  `__swp` (hexarm strings). No evidence in the dump of folding an LL/SC retry loop into one
  `atomic_fetch_*`: the loop stays, with the intrinsics in it.

Re-check: `sqlite3 -readonly ~/SiteResearch/ida-pro/hexx64.sqlite "select text from pseudocode where ea in (0x78020,0x99BD0)"`;
`sqlite3 -readonly ~/SiteResearch/ida-pro/derived/ida-links.sqlite "select group_concat(distinct text) from strings where mod='hexarm' and (text like 'atomic%' or text like '\_\_ld%x%' escape '\\')"`.

## 2. Plan for unlace

One option, `atomics auto | msvc | gcc | off` (spelling as Hex-Rays: `auto` picks MSVC names on a PE built
by MSVC, C11/GCC names elsewhere). A judgement call on presentation, so behind an option; `auto` can
default on once the datatest corpus shows no change (none of the 675 assertions should contain a locked
instruction; verify).

| step | what | where | size |
|---|---|---|---|
| 1 | **x86 locked RMW.** Generalise the `kuna_atomicxadd` envelope match (`LOCK` callother, one load, one store to the same storage, `UNLOCK`) to every locked `add/sub/and/or/xor/inc/dec/xadd/neg/not/bts/btr/btc` and to `xchg` with memory (implicitly locked, no `LOCK` op: match the instruction). Replace the envelope with one user-op call `_InterlockedAdd(p, v)` etc. / `__atomic_fetch_add(p, v, __ATOMIC_SEQ_CST)`, its result the old value. | `unlace-lift` `p2_lift/atomics.rs` (beside `atomicxadd.rs`), names in the emitter | M |
| 2 | **x86 compare-exchange.** `lock cmpxchg`, `cmpxchg8b`, `cmpxchg16b`: one call `_InterlockedCompareExchange(p, new, expected)` returning the old value; the ZF the SLEIGH body sets becomes `old == expected` so a following `jne` retry loop reads as a CAS loop. | same | S-M |
| 3 | **AArch64 LSE.** Recognise the p-code shape of `CAS{,A,AL,L}`, `CASP`, `SWP`, `LDADD/LDCLR/LDEOR/LDSET` (and their acquire/release variants, which map to the memory-order argument) per instruction, and emit `atomic_compare_exchange_strong`/`atomic_exchange`/`atomic_fetch_add/and/xor/or` (LDCLR = fetch_and with `~v`). Type the pointer `_Atomic uintN_t *` like `sub_899B0`. Instruction-level, so match on the instruction's address range in the lifted ops, not on a pattern across instructions. | `unlace-lift` (same module), types in P5 | M |
| 4 | **Exclusive pairs.** Print `LDXR/LDAXR/STXR/STLXR` (and ARM32 `LDREX/STREX`) as `__ldaxr(p)`/`__stlxr(v, p)` user-ops with the status result, as Hex-Rays does, instead of plain memory. | SLEIGH user-op injection or a P2 rewrite | S |
| 5 | **LL/SC loop folding (beyond IDA).** A loop `do { old = __ldaxr(p); new = f(old); } while (__stlxr(new, p));` with `f` one of add/sub/and/or/xor/exchange becomes `atomic_fetch_f(p, v)`; same for a `cmpxchg` retry loop. Speculative, so its own value of the option or default off. | `unlace-structure` (loop shape) or P3 | M |

Tests: small C11 programs (`atomic_fetch_add`, `atomic_compare_exchange_strong`, `atomic_exchange`) built
with `clang -O2` for x86-64, `-march=armv8.1-a` (LSE) and `-march=armv8-a` (LL/SC), and an MSVC
`_InterlockedIncrement` PE; stage tests pinning the printed calls. Spec: a section in
`docs/spec/02-lift-and-flow.md`. Count bumps for a new option (`phases.toml` row, catalog counts,
`docs/options.md`).
