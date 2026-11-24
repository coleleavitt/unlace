# IDA gap survey: hexarm-specific (Hex-Rays ARM/AArch64)

Area: what the Hex-Rays ARM/AArch64 decompiler (`hexarm.so`, IDA 9.5) does that the x86 one (`hexx64.so`) does
not, and where unlace stands. Part of the IDA technique-gap survey (see `notes/ida-gaps.md`,
`notes/ida-module-survey.md`).

## Method

- **IDA side.** `~/SiteResearch/ida-pro/hexarm.sqlite` and `hexx64.sqlite` are IDA's analysis of the two
  decompiler plugins themselves. 466 of hexarm.so's 3,978 strings do not occur in hexx64.so; they name what
  only the ARM decompiler does. Each row cites the string and the hexarm function that references it (sqlite
  `strings` and `xrefs` tables, function from `functions`). Strings with no xref live in name tables.
- **unlace side.**
  - option rows and source (`file:line` on main);
  - a probe: `fixtures/hexarm_probe.c`, built with clang 22 for `aarch64-linux-gnu` and `arm64e-apple-ios15`
    (`-O2 -ffreestanding -c`) and decompiled with `unlace decompile-all` (pinned unlace-7b30dee81f). The "probe"
    column quotes that output.

## Table

| # | Hex-Rays ARM feature | hexarm evidence | unlace today | probe | status |
|---|---|---|---|---|---|
| 1 | **NEON intrinsics printing**: ~300 ACLE names generated from templates (`vadd$`, `vqtbl#$`, `vmull_high`, `vsha256h$`, `vaese$`, ...; `$` = q/type suffix, `#` = table count, lane letters `bhsd`) | strings 0x4d656f-0x4d6c6c (name table, no direct xref); suffix and lane tables `bhqsqqqd`, `bhsdq` used by sub_981A0 | AArch64 SIMD lifts as per-lane p-code or raw `a64_*` user ops. `lanefuse` re-fuses lanes only for the x86 spec (phases.toml:5659) | `vaddq_s32` prints as four `SUB164(..)+SUB164(..)` lane statements; `vqtbl1q_u8` as `a64_TBL(ZEXT816(0),a0,a1)` | missing |
| 2 | **NEON vector types**: `int8x16_t`, `int8x16x2_t`/`x4` tuples, `poly%zux%zu_t`, built as `%s%dx%dx%d_t` | sub_88450 (`%s%dx%dx%d_t`), strings 0x4d6270-0x4d629b | none; vector values are `char[16]` / `unsigned __int128` | `undefined16 addv(char a0[16],char a1[16])` | missing |
| 3 | **AArch64 vector/FP calling convention**: q/s/d argument and return registers recovered for float and vector functions | (the AArch64 cspec model; no unique string) | `vectorabi` is x86-only (phases.toml:5681); AArch64 float args/returns rely on the vendored cspec | `float dot4(const float*,const float*)` (vld1q, fmul, faddp) prints as `void dot4(void) { return; }`: arguments and float result lost | **missing (wrong output)** |
| 4 | **Lane-element access** printed as `v0.s[1]` / `d%d` | `.%c[%d]`, `d%d` in sub_981A0 | lanes print as `SUB164(x,4)` / `._4_4_` pieces | see #1 | missing |
| 5 | **arm64e pointer authentication as ACLE builtins**: `ptrauth_auth_function`, `ptrauth_auth_data`, `ptrauth_strip`, `ptrauth_sign_unauthenticated`, `ptrauth_sign_constant` with the `ptrauth_key` enum (asia/asib/asda/asdb) | sub_8E980 (auth_function), sub_7BB10 (sign_*); enum text at 0x4de588 | PAC hidden by the spec (ShowPAC off); `ptrauthtrap` drops the inline auth-failure checks (phases.toml:7059); `arm64evcall` resolves signed vtable calls by discriminator (arm64evcall.rs:54); `macho-arm64e` picks the Apple-Silicon spec (decompile_all.rs:4576). No mode prints the builtins | `blraaz x8` prints as `(*a0)(a1)` (clean); signing and auth are invisible | partial (stripping: have; showing as builtins: missing) |
| 6 | **ADRP page pairs as one reference**: custom refinfo `PAGE`/`HI12`/`PAGEOFF` from the ARM processor module; `MV16_00` for movz/movk 16-bit pieces | sub_79010 (registers PAGE, HI12, PAGEOFF), sub_81C10; sub_773D0 (MV16_00) | p-code constant propagation folds `adrp`+`add`/`ldr` and `movz`/`movk` into one constant; the loader decodes `adrp`/`ldr` slots (entry/mod.rs:1249) | addresses print folded | have |
| 7 | **System registers**: `_ReadStatusReg(ARM64_SYSREG(..))` / `_WriteStatusReg`, `__get_CPSR`/`__set_CPSR`, `__get_SPSR`; `TPIDR_EL0` recognised as the thread pointer | sub_78960 (`_ReadStatusReg`, `TPIDR_EL0`), sub_7B5D0 (`ARM64_SYSREG`) | the SLEIGH spec names each system register (`return cntvct_el0;`); `retsysreg` keeps the reads (retsysreg.rs:38) | `mrs x0,cntvct_el0` prints `return cntvct_el0;` | have (different spelling) |
| 8 | **AArch64 TLS**: `TPIDR_EL0`-relative loads named as `__thread` variables; Windows ARM64 x18 as `struct KPCR *`/TEB (`writex18`, `__setReg`) | sub_78960, sub_81F30 and sub_8E980 (`struct KPCR *;`), sub_86990 (`writex18`), sub_81CC0 (`__setReg`) | `tlsnames` is x86 ELF only (tlsnames.rs:175); no x18/TEB model | `return *(unsigned int *)tpidr_el0;` (TLSLE relocs 549/551 also skipped by the ET_REL loader); arm64e `gettl` calls the TLV descriptor as `(*dat_..)()` | missing |
| 9 | **System calls by name**: `linux_syscall`, `linux_eabi_syscall`, `mac_syscall`; Darwin Mach traps from a `svc_codes_t` enum with prototypes (`mach_msg_trap`, `task_for_pid`, `_kernelrpc_mach_vm_allocate_trap`, ...) | sub_8E980 and sub_99FA0 (syscall names), sub_990E0 (`svc_codes_t`), prototypes 0x4dede0-0x4dfd40 | `syscallregs` (default auto) gives `svc` its register effects (phases.toml:2610); naming (`linuxsyscall`) is x86-32 only; no Mach trap table | `svc 0` with x8=64 prints `CallSupervisor(0);`: number, arguments and result lost (relocatable object, so auto did not fire) | partial |
| 10 | **C11 atomics printing**: `atomic_*` types up to `atomic_uint128`, `compare_exchange_strong`, `fetch_add/and/or/xor`, `exchange`, `memory_order` enum; `CAS`/`CASP` | sub_899B0; strings 0x4d61e7, 0x4d62c7-0x4d6355, 0x4d6c73-0x4d6c94 | `atomics` prints `__sync_*` (gcc) or `_Interlocked*` (msvc) and folds ldxr/stxr loops and casp (atomics.rs:1078) | `__sync_fetch_and_add(&cnt,1)`, `__sync_val_compare_and_swap(..) == a1` (plus a stray `ClearExclusiveLocal();` on ELF) | partial |
| 11 | **ACLE scalar intrinsics** (`__clz`, `__rbit`, `__rev16`, `__ssat`/`__usat`, `__qadd`, `__mcr`/`__mrc`, `__ldrex`/`__strex`, `__wfe`/`__sev`/`__yield`, `__dmb`/`__dsb`/`__isb` with `OSHLD..SY`, `__breakpoint`, `__semihost`) | name table 0x4d6c99-0x4d6e6d; barrier enum `_tag_ARM64INTR_BARRIER_TYPE` in sub_8E980 | `acleintrinsics` prints AArch64 barriers, hints and MTE ops (phases.toml:2210); `bitidioms` folds rbit+clz; ARM32 coprocessor and saturation ops stay spec user ops | not probed for ARM32 | partial |
| 12 | **MTE** (`__arm_mte_create_random_tag`, `_set_tag`, `_get_tag`, `_ptrdiff`, `*_multiple`) | sub_8E980; strings 0x4d6e94-0x4d6f1d | `acleintrinsics` (same names) | not probed | have |
| 13 | **Thumb interworking and ThumbEE**: `__tenter`/`__texit`/`__tchange[bf]` (`_nb` variants) | sub_8E980 | `armwalkmode` (phases.toml:6069) and the SLEIGH TMode context; `returnbranch` treats `bx` with a mode switch as a return; no ThumbEE | not probed | have (ThumbEE: missing, obsolete) |
| 14 | **Literal pools** | (handled in the ARM processor module, not hexarm) | `poolentry`, `aifpoolslide` (passes.rs:1842), readonly propagation | n/a | have |
| 15 | **ldp/stp pairs**: pairs of q/x loads and stores as one copy | (microcode; no unique string) | p-code + memcpy recognition | `*d = *s` of 32 bytes (ldp/stp q) prints `builtin_memcpy(a0,a1,0x20)` | have |
| 16 | **AAPCS64 variadic adapter** (`arm_va_adapter`: va_adapter, ini_fldvals, argoff, strict) | sub_77570 | `varargsave` (x86 SysV adapter, varargsave.rs:75), `darwinvarargs` (Apple arm64 stack varargs, p4_calls/mod.rs:18), `vfpvariadic` (ARM32) | not probed | partial (AAPCS64 ELF `va_list` with `__gr_top`/`__vr_top` not modelled) |
| 17 | **SVE/SME types and intrinsics**: `svbool_t`, `svptrue_b%d`, `svcnt%c`, `svdup_u8`, `svst1_u%d`, `svldr_za`/`svstr_za` | sub_89390 (`svbool_t`), sub_7D090 (`svcnt%c`), sub_8BB10 (`svldr_za`) | SVE/SME decode (#98 specs); the forms stay user ops (spec ch.02, SVE section); no SVE types | not probed | missing |
| 18 | **Windows/Darwin brk codes as calls**: `__brkdiv0`, `__debugservice`, `__assertfail`, `DbgRaiseAssertionFailure`, `__rdpmccntr64` | sub_8E980 | `brk_trap` names trap codes in flow (flow.rs:421, decompile_drive.rs:834); `ptrauthtrap` (brk 0xc470+key) | not probed | partial |
| 19 | **long double = 16 bytes** check (AArch64 Linux binary128) | sub_79280 (`$ arm micro asked for ldbl size`), message 0x4e23c0 | C++ signatures treat `long double` as 16 bytes (cppsig.rs:900); binary128 constants cannot be varnodes (spec ch.02, RISC-V Q) | not probed | partial |

## Ranked top 10

1. **AArch64 float/vector arguments and returns (#3).** This is a wrong-output bug, not only a missing feature: a NEON or FP function loses its parameters and its `s0`/`q0` result (`void dot4(void)`). Fix: the AArch64 counterpart of `vectorabi`, i.e. q/d/s entries in the default model's input and output lists, checked against the vendored cspec first.
2. **NEON intrinsics (#1).** Port the AArch64 side of `lanefuse`: re-fuse per-lane p-code into one op, then name the op with the ACLE template table (mnemonic + element type + q suffix). This is the visible gap on all crypto and codec code.
3. **NEON vector types and lane access (#2, #4).** `int32x4_t` and its tuples in the type factory, `v.s[1]` lane printing; this needs #2 first.
4. **System calls by name on ARM/AArch64 (#9).** Linux EABI and AArch64 numbers through the existing `linuxsyscall` table, Darwin `svc #0x80` BSD calls and the Mach trap list (negative x16); and make `syscallregs` auto fire on relocatable objects.
5. **AArch64 TLS (#8).** `tpidr_el0`-relative names via `tlsnames`' layout, the AArch64 TLSLE/TLSIE relocations (549/551) in the ET_REL loader, Darwin TLV descriptors, and Windows ARM64 x18 as the TEB.
6. **C11 atomics spelling (#10).** An `atomics c11` value: `atomic_fetch_add_explicit(&x, 1, memory_order_relaxed)`, using the acquire/release variant the instruction encodes (ldadd/ldaddal/...). Also drop the stray `ClearExclusiveLocal()` on the failure path.
7. **ptrauth builtins as an opt-in view (#5).** An option that keeps PAC visible and prints `ptrauth_auth_function(p, ptrauth_key_asia, disc)` / `ptrauth_strip` for security review, where today the auth is always hidden.
8. **AAPCS64 `va_list` (#16).** The general and vector register save areas and `__gr_offs`/`__vr_offs`, so `va_start` prints for AArch64 ELF the way `varargsave` does on x86-64.
9. **ARM32 ACLE scalar intrinsics (#11).** `__ssat`/`__usat`/`__qadd`, `__mcr`/`__mrc` (coprocessor numbers as arguments), `__ldrex`/`__strex` when the loop does not fold.
10. **SVE types (#17).** `svbool_t`/`svint32_t` and the `svcnt*`/`svptrue` idioms: low volume today (mostly Linux math libraries) but growing.

Not ranked, already have: ADRP/MOVK constants (#6), system-register reads (#7), MTE (#12), Thumb interworking (#13), literal pools (#14), ldp/stp copies (#15).
