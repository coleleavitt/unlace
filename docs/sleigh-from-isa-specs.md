# Generating SLEIGH from machine-readable ISA specifications

Hand-written SLEIGH is where most RISC-V, AArch64 and x86 extension bugs come
from: a wrong fixed bit, an RV32 form that accepts an RV64 shift amount, or
semantics that were never written and lift to a user operation. Every major ISA
now publishes a machine-readable description, so this page looks at generating
SLEIGH from those descriptions instead of writing it by hand. It covers what is
available, the RISC-V generator in `tools/gen_riscv_sail.py`, how its output
compares with the hand-written spec, and where the approach stops working.

## What exists

| Source | Encodings | Semantics | Licence | Use here |
|---|---|---|---|---|
| RISC-V Sail model ([riscv/sail-riscv](https://github.com/riscv/sail-riscv)) | `mapping clause encdec` per instruction, with `when` guards for xlen and reserved values | `function clause execute`, a small first-order language with bitvector widths in the types | BSD-2-Clause | Generator input (encodings and semantics) |
| [riscv/riscv-opcodes](https://github.com/riscv/riscv-opcodes) | One line per instruction: fixed bit ranges and operand fields | None | BSD-3-Clause | Independent check of the encodings |
| Sail Arm-A model ([rems-project/sail-arm](https://github.com/rems-project/sail-arm)) | Decode trees translated from Arm's ASL | Translated ASL | BSD-3-Clause-Clear, released by agreement with Arm | The AArch64 counterpart of the RISC-V model. Not used yet |
| Arm machine-readable architecture (AARCHMRS) | `Instructions.json`: encodings and operand fields | The XML and HTML releases carry the ASL pseudocode under Arm's own licence (LES-PRE-20349). A BSD-3-Clause JSON release exists, but third-party mirrors report its decode and operation bodies as empty | Mixed | Encodings only, after the licence of that release has been read. Do not commit anything derived from the proprietary ASL |
| LLVM TableGen (`llvm-tblgen --dump-json`) | Every `Inst` bit, operand fields, predicates | Only instruction-selection patterns, which are partial | Apache-2.0 with LLVM exception | Already used by `tools/gen_aarch64_ext.py` for AArch64 SVE2 and SME, which lift to user operations |
| Intel XED datafiles | Full x86 decode (prefixes, ModRM, VEX, EVEX) | None | Apache-2.0 | Possible decode source for x86 extensions. Semantics would still be hand-written |

The Sail models are the only sources that give both encodings and executable
semantics under a permissive licence. That made RISC-V the first target.

## The RISC-V generator

`tools/gen_riscv_sail.py` reads the Sail instruction files of one or more
extensions, plus the model's `prelude/` and `core/` for helper functions, and
writes one `.sinc`. It generates every constructor twice, once for xlen 32
(`@if ADDRSIZE == "32"`) and once for xlen 64, because the guards and widths
depend on xlen.

- **Encodings.** The concatenation of an `encdec` clause gives each bit's
  position. Literal bits become constraints on the token fields that
  `riscv.reg.sinc` already defines, picking the widest field that covers each
  run of fixed bits. `encdec_reg` fields at bits 7, 15 and 20 become the
  `rd`, `rs1` and `rs2` subtables of `riscv.table.sinc`. The `when` guard
  is evaluated at generation time. Enum operands, and fields a mnemonic mapping
  depends on, are split into one constructor per value. A guard that restricts
  a field to a cube of values (`shamt[5] == 0b0` on RV32) fixes those bits and
  narrows the operand field.
- **Assembly.** `mapping clause assembly` gives the mnemonic and operand order.
  `reg_name(x)` prints a register and `hex_bits_N(x)` prints an immediate.
- **Semantics.** The `execute` clause is compiled to p-code. Everything static
  is evaluated at generation time: xlen, the `$[split]` enum operand, `match`,
  loop bounds and slice bounds. `foreach` loops are unrolled. Helper functions
  (`rev8`, `rotater`, `reverse_bits`) are inlined. `count_ones`,
  `count_leading_zeros` and `count_trailing_zeros` become `POPCOUNT` and
  `LZCOUNT`. Bitvectors whose width is not a whole number of bytes are held
  zero-extended and masked after each operation that can set higher bits. An
  `if` expression becomes a short forward branch inside the constructor, the
  same shape the hand-written `min` and `max` use. A helper whose inlined
  p-code would be longer than `--budget` statements (160 by default) is
  emitted as a user operation named after the Sail function instead. For the
  bit-manipulation extensions those are `carryless_mul`, `carryless_mulr`
  and `brev8`. `--opaque orc.b,...` asks for a user operation named after the
  mnemonic even where full semantics are available.
- **Cross-check.** With `--opcodes`, the generator compares each generated
  mask and match against riscv-opcodes and exits non-zero on any disagreement.

```sh
git clone --depth 1 https://github.com/riscv/sail-riscv
git clone --depth 1 https://github.com/riscv/riscv-opcodes
L=specs/Ghidra/Processors/RISCV/data/languages
python3 tools/gen_riscv_sail.py --sail sail-riscv/model --tokens $L/riscv.reg.sinc \
  --files extensions/B/zba_insts.sail,extensions/B/zbb_insts.sail,extensions/B/zbc_insts.sail,extensions/B/zbs_insts.sail,extensions/K/zbkb_insts.sail,extensions/K/zbkx_insts.sail,extensions/Zicond/zicond_insts.sail \
  --opcodes riscv-opcodes/extensions \
  --exts rv_zba,rv64_zba,rv_zbb,rv64_zbb,rv32_zbb,rv_zbc,rv_zbs,rv64_zbs,rv32_zbs,rv_zbkb,rv64_zbkb,rv32_zbkb,rv_zbkx,rv_zicond \
  --opaque orc.b -o riscv.sail.b.sinc
# constructors: rv32 41, rv64 52; skipped 0; pcodeops brev8,carryless_mul,carryless_mulr,orc_b
# riscv-opcodes: 0 constructors disagree; unmatched opcodes: -
```

`zext.w` is a riscv-opcodes `$pseudo_op` of `add.uw` with `rs2 = zero`, emitted as a
display alias with `add.uw`'s semantics.

The default RISC-V languages use this output: `riscv.zb.sinc` is generated by the
command above with `--opaque orc.b` and `-o specs/Ghidra/Processors/RISCV/data/languages/riscv.zb.sinc`
(its header records the sail-riscv and riscv-opcodes revisions). It replaced the
hand-written `riscv.rv32b.sinc` and `riscv.rv64b.sinc`, decoding every word of the
existing RISC-V test fixtures identically. With `--opcodes`, the generator also emits
the riscv-opcodes `$pseudo_op` aliases that fix one register operand to x0 (`zext.w`).

`riscv.zk.sinc` (scalar crypto) is generated the same way from
`extensions/K/zkn_insts.sail,extensions/K/zks_insts.sail` with
`--exts rv_zknh,rv32_zknh,rv64_zknh,rv32_zkne,rv64_zkne,rv32_zknd,rv64_zknd,rv_zksh,rv_zksed`,
`--decode-reserved AES64KS1I` and
`--opaque aes32esi,aes32esmi,aes32dsi,aes32dsmi,aes64es,aes64esm,aes64ds,aes64dsm,aes64im,aes64ks1i,sm4ed,sm4ks`
(the S-box rounds stay one user operation each). Table lookups (`aes_sbox_fwd`) and
other helpers the compiler cannot inline become user operations named after the Sail
function, and a guard that allows several cubes of an operand's values (`rnum <_u 0xB`)
becomes one constructor per cube.

`riscv.zfa.sinc` comes from `extensions/FD/zfa_insts.sail` with
`--exts rv_f_zfa,rv_d_zfa,rv_zfh_zfa,rv32_d_zfa --display-table constantidx=fliConstS --opaque-fallback`.
For floating point, the compiler maps `encdec_freg` fields to `frd`/`frs1`/`frs2`/`frs3`,
and reads and writes `F_H`/`F_S`/`F_D` with NaN-boxing for a 64-bit FLEN (`--flen`).
It lowers the softfloat comparisons to `f<=`/`f<`, `f_is_NaN` to `nan()`, and
`riscv_fNNroundToInt` with a static rounding mode to `floor`/`ceil`/`round`. It
ignores `accrue_fflags`, splits a rounding-mode field into one constructor per
mode with its name as display text, and handles tuples, `Some`/`None` and signed
integers. `--display-table` displays a field through an existing subtable (the `fli`
constants), and `--opaque-fallback` turns a clause the compiler cannot lower
(`rne`, `dyn`) into a user operation instead of skipping it. The compare tool's `--fp`
loads `fa1`/`fa2` with FP-flavoured values and compares `fa0` when the p-code
writes it. Two NaNs of the same format count as equal, since p-code has no NaN
payloads. On RV64 the generated file agrees with QEMU on all 34 non-opaque words
over 128 vectors each; the hand-written file disagreed on 8.

`riscv.zabha.sinc` comes from `extensions/A/zaamo_insts.sail` with
`--exts rv_zabha,rv_zabha_zacas --only '^amo[a-z]+\.[bh](\.|$)'`. The compiler's
abstract memory model takes address translation, PMP/PMA checks, triggers and alignment
as never faulting. `mem_read` is a RAM load and `mem_write_value` a RAM store of the
access width, and the privilege and access-type records are opaque values the model
never reads. With that, the width-generic `AMO` clause compiles as written, including
`amocas`'s compare-then-store branch. The assembly clause builds the mnemonic from
`amo_mnemonic`, the width and `maybe_aqrl`, so each ordering suffix is its own
constructor. The compare tool's `--mem` points `rs1` at a doubleword in the test's
slot and compares `rd` and that doubleword after the word runs. On RV64 all 74
sampled Zabha/Zacas words agree with QEMU over 64 vectors each.

`riscv.fd.sinc` comes from `extensions/FD/fext_insts.sail,extensions/FD/dext_insts.sail` with
`--exts rv_f,rv64_f,rv_d,rv64_d --opaque-fallback --unbox truncate --dyn-rounding rne
--field-table LOAD_FP.imm=immI,STORE_FP.imm=immS --only '^(?!f[ls]h\b)'
--drop-display '^fcvt\.d\.(s|w|wu)$=rne'
--idiom fmv.s=copy,fneg.s=neg,fabs.s=abs,fmv.d=copy,fneg.d=neg,fabs.d=abs`. The generator
lowers the softfloat wrappers to p-code float operations where the rounding mode makes them
exact. `--field-table` lets an existing subtable (`immI`, `immS`) decode, display and export a
sign-extended immediate, including one split across the encoding. `--drop-display` follows
LLVM in leaving out `rne` on the exact conversions. `--idiom` lifts the `rs2 = rs1` aliases as a
copy, `f-` or `abs()`. `--unbox truncate` reads single-precision sources as their low bits;
`exact` would add a NaN-unbox check to every read (0 words wrong against QEMU instead of 13 on
unboxed inputs, but about 13% more decompiled lines on a musl subset).

To compare another variant, copy `specs/Ghidra/Processors/RISCV/data/languages` into
`<dir>/Ghidra/Processors/RISCV/data/languages`, replace `riscv.zb.sinc`, compile with
`slacomp`, and pass `--sleighpath <dir>` to `unlace`.

## Comparison with the hand-written spec

These numbers cover the Zba, Zbb, Zbc, Zbs, Zbkb, Zbkx and Zicond extensions,
which `riscv.rv32b.sinc` and `riscv.rv64b.sinc` implement by hand (56
constructors, 391 lines; the generated file has 92 constructors in 2016 lines).
`tools/sail_sleigh_compare.py` produced them. It builds minimal ELF files
itself, so it needs no RISC-V toolchain.

**Decoding** (`sail_sleigh_compare.py decode`). Each riscv-opcodes instruction
was sampled 32 times with random operand bits, and once for each of its fixed
bits with that bit flipped (a near miss). Every word sits in its own ELF
section, so a word one disassembler cannot decode does not desynchronise the
next. The reference is llvm-objdump with
`--mattr=+zba,+zbb,+zbs,+zbc,+zbkb,+zbkx,+zicond`, with or without
`-M no-aliases`.

| | RV64 samples | RV64 near misses | RV32 samples | RV32 near misses |
|---|---|---|---|---|
| hand-written | 1696/1696 | 817/817 | 1376/1376 | 695/695 |
| generated | 1696/1696 | 817/817 | 1376/1376 | 695/695 |

The near-miss counts leave out words that decode outside these extensions on
both sides (42 on RV64, 10 on RV32), such as a CSR access whose number LLVM
prints by name.

**Semantics** (`sail_sleigh_compare.py semantics`). Each sampled word is run
with rd=a0, rs1=a1, rs2=a2 on 64 register-value pairs, 30% of them edge values
(0, -1, the sign bit, 31, 32, 63, 64). The reference is QEMU 64-bit user mode
(`-cpu rv64,zba=true,...`), with the words wrapped in a load/execute/store
harness. Each spec's p-code (`unlace raw-pcode --json`) runs in a small p-code
interpreter. There is no 32-bit QEMU user mode on the test host, so the RV32
rows compare the two specs with each other.

| | words that agree on every vector | differ | lift to a user operation |
|---|---|---|---|
| hand-written, RV64 vs QEMU | 51 | 0 | 7 (`clmul`, `clmulh`, `clmulr`, `orc.b`, `brev8`, `xperm4`, `xperm8`) |
| generated, RV64 vs QEMU | 54 | 0 | 4 (`clmul`, `clmulh`, `clmulr`, `brev8`) |
| generated, RV32 vs hand-written | 32 | 0 | 4 |

The generated file gives full semantics for `orc.b`, `xperm4` and
`xperm8` (and, on RV32, `zip` and `unzip`), which the hand-written file
leaves as user operations. On RV64 QEMU confirms them. On RV32 those five
have no reference and are not counted in the table. The two files agree
wherever both have semantics. The shipped `riscv.zb.sinc` keeps `orc.b` opaque: 53 RV64 words
agree with QEMU on every vector, 0 differ and 5 lift to user operations.

**Decompilation.** Two test images were decompiled with
`unlace decompile-all --sleighpath`, once with each spec:

- a musl subset (string, ctype, stdlib, search, prng and the math files that
  load) built with `zig cc -mcpu=generic_rv64+...+zba+zbb+zbs+zbc+zicond+zbkb
  -O2`: 355 functions with 277 instructions from these extensions.
- 29 small functions written to hit each instruction.

On musl, 273 of 301 function bodies are identical. Neither spec produced an
error, a bad instruction or an unstructured goto, and decompile-all took
2.1–2.4 s with either spec. The remaining differences come from the select
shape of `min`, `max` and `czero`. The hand-written spec writes rd twice;
the generated one writes it once through a temporary. Each shape reads better
in some places: the hand-written one in a clamp, the generated one in
`bext`, `bset` and `rol`, where it has no `(long)(int)` casts.

The full semantics of `orc.b` show what precision costs. A loop that calls
`orc_b(x)` with the hand-written spec decompiles, with the generated spec, to
eight byte tests joined by `CONCAT17(...)`. The result is exact but harder to
read. `--opaque orc.b` gives back `orc_b(x)`. Choosing which instructions
stay opaque for readability is therefore a per-instruction judgement made at
generation time, not something the model can settle.

## Limits

- **The subset of Sail.** The compiler handles the first-order part of Sail the
  bit-manipulation and Zicond files use: `let`, `var`, assignment, slices
  (static, or dynamic with a static width), `@`, `match` on static values,
  `if`, `foreach`, extensions and the comparison operators. It does not
  handle memory accesses (`mem_read`, `mem_write_value`), exceptions,
  CSR side effects, floating point (`softfloat` calls), vector register
  groups, or the effects on `PC`. Clauses that use them are reported as
  skipped and left for hand-written SLEIGH. Run on the M and A files, the
  generator emits nothing and lists every clause as skipped: their execute
  clauses use record fields and tuple-valued mappings the parser does not read. Loads, stores, branches, F/D/Q, V
  and the privileged instructions are therefore out of reach until the
  compiler learns Sail's memory and control-flow primitives.
- **Vectors (decided: stays hand-written).** Sail's V execute clauses loop over
  `num_elem = VLEN*LMUL/SEW`, which comes from the runtime `vtype`/`vl` CSRs, and index
  register groups at run time. Even the encdec guards read `get_sew()`. Nothing can be
  unrolled into p-code, and `riscv.rvv.sinc` already lifts every instruction to a user
  operation (`vd = vadd_vv(vs2, vs1)`). A generated file could only move the decoding's
  provenance to Sail while churning the 672 user-operation names and arguments, so V
  stays hand-written. Its decoding is checked against LLVM by `riscv_vector.rs`.
- **Readability is not in the model.** Sail states what an instruction does,
  not how a decompiler should show it. The `--budget` and `--opaque` knobs
  stand in for the choices a spec author makes by hand.
- **Registers and fields.** Register operands are mapped by bit position
  (7, 15, 20). Compressed forms, `rs3` at bit 27 and floating-point register
  files need their own mapping. Fixed bits must be covered by the token fields
  `riscv.reg.sinc` already has; when one is missing, the clause is skipped
  rather than given a new token.
- **Aliases.** Sail and riscv-opcodes describe architectural encodings. The
  hand-written spec also has display aliases (`zext.w` for `add.uw` with
  rs2=zero). The generator does not produce them.
- **AArch64 and x86.** The same compiler design applies to the Sail Arm-A
  model, but its execute clauses use far more of Sail: registers as
  structures, exceptions and memory, and `ConstrainUnpredictable`. Arm's own
  ASL is not under a licence that allows committing derived SLEIGH; the
  BSD-licensed AARCHMRS JSON and LLVM TableGen are usable for decoding only,
  which `tools/gen_aarch64_ext.py` already does. XED gives x86 decoding but no
  semantics.

## AArch64 reference semantics

The Sail Arm-A model ([rems-project/sail-arm](https://github.com/rems-project/sail-arm),
BSD-3-Clause-Clear) is an exact reference for AArch64, but running it means building the
Sail toolchain (OCaml/opam) and its C emulator, then driving a full-system model. For
the difffuzz cases in #546 (rounding, saturation, unsigned FP converts,
`BFDOT`/`USDOT`/`SUDOT`, FEAT_MOPS) a cheaper exact oracle exists. QEMU 10.2 user mode
(`qemu-aarch64 -cpu max`) executes every one of them, including the BF16, I8MM and MOPS
encodings that Unicorn's older QEMU core rejects. A static ELF with the word between
register loads and stores is enough, as the RISC-V harness in `tools/sail_sleigh_compare.py`
does. Sail-arm is therefore not used as an oracle. It remains the source to try if
AArch64 SLEIGH is ever generated, the way the RISC-V files are.

## Files

- `tools/gen_riscv_sail.py`: the generator.
- `tools/sail_sleigh_compare.py`: decode and semantic comparison against
  llvm-objdump and QEMU, with any number of `--spec NAME=SLEIGHPATH`.
- `scripts/tests/test_gen_riscv_sail.py`: unit tests over a small inline
  Sail model.
