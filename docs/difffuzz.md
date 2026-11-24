# Differential fuzzing of the lifter

`tools/difffuzz/` checks the SLEIGH p-code of single instructions against an independent CPU
model. Random encodings that Capstone decodes are packed into a small ELF, lifted with
`unlace raw-pcode --json`, and each one is executed from the same random register state twice:
once by a concrete p-code interpreter (`tools/difffuzz/pcode_emu.py`) over the lifted ops, once
by Unicorn. Registers, flags, the next pc and every byte written to memory are compared.

```sh
python3 -m venv ~/.local/share/difffuzz-venv
~/.local/share/difffuzz-venv/bin/pip install unicorn capstone
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py \
    --arch x86-64 --count 4000 --seed 1 --unlace target/debug/unlace --out report.json
# replay specific encodings, against freshly compiled .sla files
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch aarch64 \
    --bytes 200080b9,20c0c039 --sleighpath specs --unlace target/debug/unlace
```

`--arch` is `x86-64`, `aarch64`, `riscv64`, `arm` (A32), `thumb` (T32), `mips` (MIPS32 big-endian),
`mips64`, `mips64r6`, `mipsr6` (MIPS64, MIPS64 Release 6 and MIPS32 Release 6, big-endian; use
`--oracle qemu`), `ppc` (PowerPC 32 big-endian), `tricore`, or (QEMU oracle only) `ppc64`, `ppc64le`, `ppc64-isa`,
`ppc64le-isa`, `s390x` and `loongarch64`. `--sleighpath DIR` lifts with the `.sla`
files under `DIR` instead of the built-in ones, so a spec edit can be checked right after
`slacomp` without rebuilding unlace. The summary on stdout counts each outcome and lists the
findings by mnemonic; `--out` writes every finding with its bytes, both disassemblies, the
input registers and the differing values.

## QEMU user mode as the reference

`--oracle qemu` replaces Unicorn with the installed QEMU user-mode binaries
(`tools/difffuzz/qemu_backend.py`) for `aarch64` (`qemu-aarch64 -cpu max`), `riscv64`
(`qemu-riscv64 -cpu max`), `mips` and `mips64` (`qemu-mips64 -cpu MIPS64R2-generic`), and `mipsr6`
and `mips64r6` (`qemu-mips64 -cpu I6400`, an R6 ELF with no HI/LO in the harness). `ppc` (`qemu-ppc -cpu 7457`), and the QEMU-only `ppc64`, `ppc64le` (`PowerPC:*:64:default`),
`ppc64-isa` and `ppc64le-isa` (`PowerPC:*:64:A2ALT`, Power ISA 3.0) on `qemu-ppc64` /
`qemu-ppc64le -cpu power10`, `s390x` on `qemu-s390x -cpu max`, `loongarch64` on `qemu-loongarch64 -cpu max`, and `arm` and `thumb` on `qemu-arm -cpu max`. `DIFFFUZZ_QEMU_DIR` names directories (separated by `:`) searched before `PATH`
for the QEMU binaries (a `--target-list=ppc-linux-user,...` build of QEMU 10 works). QEMU 10 implements
what Unicorn's older QEMU core lacks or gets wrong: BF16, I8MM (`usdot`/`sudot`), MOPS,
`fcmla`/`fcadd`, and RISC-V NaN-boxing.

```sh
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch aarch64 --oracle qemu \
    --bytes 0af8424f,05fb930f --unlace target/debug/unlace
```

Each case is a static ELF. A prologue page loads every compared register (and NZCV) from a table.
The instruction sits at the address it was lifted at, in a page that is otherwise the
deterministic filler. Two epilogues store the registers back and `write(2)` them, with every
data page, to stdout: one at the fall-through address and one at the address the p-code
branches to. Which epilogue ran gives the reference's next pc. The p-code runs first, and
every page it reads or writes is mapped with the same filler and compared byte for byte
afterwards. The register file is unchanged.

- The reference cannot touch a page the p-code did not: such an access, a trap, or a branch
  anywhere but the two exits ends the run with a signal, counted as `ref-exception`.
- QEMU maps guest pages one-to-one, so a page below `vm.mmap_min_addr` (64 KiB), the harness's
  own pages, or one QEMU cannot reserve is `bad-address`. These are mostly loads through a
  small register value, which Unicorn still covers.
- RISC-V and MIPS have no user scratch register. The harness keeps the table address in the
  highest general register the instruction's p-code does not write, and reads that register
  back as its input.
- MIPS: the installed QEMU has no 32-bit MIPS user binary, so MIPS32 code runs on a MIPS64 core
  with every register sign-extended from its 32-bit value (the state in which MIPS64 runs a
  MIPS32 instruction as MIPS32 does). Only the low 32 bits are compared. `mips64` loads and
  compares the full 64 bits. A `mipsr6` access must stay below 0x80000000, since the 64-bit core
  sign-extends the address. Release 6 compact branches (`b*c`, `j*c`) are compared; their target
  goes to a second epilogue. Unaligned loads and stores trap on QEMU and count as reference
  exceptions.
- MSA (`mipsr6`, `mips64r6`; the I6400 core has MSA): w0..w31 are loaded with `ld.d` and stored
  with `st.d` at table offset 512, and MSACSR is seeded and read back with `ctcmsa`/`cfcmsa` at 1032
  (through a general register the epilogue saves and restores). MSACSR starts with random sticky
  Flags (bits 6:2), round-to-nearest, and no enables or cause bits, so no MSA floating-point
  operation traps. An instruction that writes enables together with a matching cause
  (`ctcmsa $1`) traps on QEMU and counts as a reference exception. MSA instructions SLEIGH lifts
  to a user operation count as unmodeled.
- Nios II (`--arch nios2`, `nios2:LE:32:R1`) has no Unicorn or Capstone support, so it runs only
  with `--oracle qemu`, and `arches.py` decodes mnemonics itself from the Nios II opcode tables.
  QEMU dropped the target after 8.2: build `qemu-nios2` from a QEMU 8.2 tree
  (`configure --target-list=nios2-linux-user --disable-system --disable-tools`; on glibc 2.41
  rename `struct sched_attr` in `linux-user/syscall.c`, which the C library now defines) and put
  its build directory on `PATH`. The harness is ELF32: r1..r31 load from and store to the
  tables, write(2)/exit(2) through `trap` (r2 = 64 / 93). BR with non-zero A/B fields, RET not
  naming ra and branch offsets off a word boundary are reserved and not generated; DIV/DIVU by
  zero and DIV of INT_MIN by -1 are undefined; addresses at or above 0x7FFF0000 are outside
  QEMU's guest space. First run (seed 7, 2000 encodings, 3 trials): 4977 matches, no mismatches.
- SuperH SH-4 (`--arch sh4`, `SuperH4:LE:32:default`, `--oracle qemu` with `qemu-sh4` from QEMU 8.2):
  the instruction sits on the page after the prologue (`Sh4.base`), which slides on NOPs to a BRA
  at its last word so the 12-bit branch reaches; the BRA's delay slot restores the table register.
  T is compared; S starts clear and Q, M, S are not compared (user mode cannot read SR). Not
  generated: delay-slot branches, privileged, cache, FPU and MAC instructions, and the SH-2A/SH4A
  encodings Capstone's SH4 mode accepts. QEMU 8.2 quirks skipped: ROTL/ROTR clear T, DIV1 Rn,Rn
  reads Rm after the shift, DIV1 by 0 gets the carry wrong. Fixed in the SH-4 module after the
  first run: `MOV.x @Rm+,Rn` with m = n keeps the loaded value (no increment), `MOV.x Rm,@-Rn`
  with m = n stores Rm's value before the decrement (QEMU's reading). Seed 3, 6000 encodings:
  13481 matches, no mismatches left.
- Motorola 68040 (`--arch m68k`, `68000:BE:32:default`, `--oracle qemu` with `qemu-m68k -cpu m68040`):
  integer instructions; FPU, MMU, cache, trap and privileged ones are not generated, nor PACK/UNPK
  (QEMU 8.2 lacks them) or the reserved extension words Capstone accepts. QEMU 8.2 quirks skipped:
  memory ASL/ASR/LSL/LSR (it reads arithmetic/logical from the EA bits), byte `-(A7)` in
  ADDX/SUBX/ABCD/SBCD and TAS `(A7)+` (it steps A7 by 1), LINK A7. Fixed in `68000.sinc` after the
  first runs: CMP/CMPA/CMPI/CMPM left X alone; shift V (only ASL sets it, from every bit shifted
  through the MSB) and rotate counts past the width; ROXL/ROXR counts modulo width + 1; ADDX now
  sets X, after the sum; SUBX V with X; NEGX C and V; DIVU.W/DIVS.W overflow (V set, register
  kept); the -(Ay),-(Ax) forms with Ay = Ax and their byte A7 step; CMPM.B on A7; MOVEM to -(An)
  with An in the list (68020+ stores An minus the size) and MOVEM.W's 2-byte step; a PC-relative
  second operand counts from its own extension word; bit-field width 0 = 32, register fields wrap,
  memory fields reach a fifth byte, BFFFO adds the offset, BFCHG/BFCLR/BFSET write the operand
  back. Seed 13, 4000 encodings: 8152 matches, no mismatches.
- SPARC V9 (`--arch sparc64`, `sparc:BE:64:default`, `qemu-sparc64`; `--arch sparc`,
  `sparc:BE:32:default`, on `qemu-sparc32plus`, which runs the V8+ ABI on a V9 CPU; both
  `--oracle qemu`, QEMU 8.2): the table register is restored in the BA's delay slot; Y and CCR
  go through `wr`/`rd`. SPARC64 QEMU maps 8 KiB pages, so its segments are widened to 8 KiB
  (`seg_align`). Not generated: branches, calls, register windows, traps, `rd`/`wr`,
  ASI, floating-point and VIS instructions, and reserved encodings QEMU refuses (shift bits
  11:5, the unused asi field of a register-form ALU op, MOVcc's reserved cc values). The 32-bit
  language skips the 64-bit-only instructions and does not compare xcc. QEMU 8.2 zero-extends
  a 32-bit SLL, so `sll` is skipped on sparc64 (V9 shifts all 64 bits). Fixed in `SparcV9.sinc`
  after the first run: UDIV/SDIV(cc) clamp an overflowing quotient (2^32-1, 2^31-1 or -2^31)
  and set icc.v; xcc of UMULcc/SMULcc/UDIVcc/SDIVcc comes from the 64-bit result. Seed 5,
  4000 encodings on sparc64: 10650 matches; seed 6, 3000 on sparc: 8251; no mismatches.
- PowerPC has no QEMU harness. `qemu-ppc64` runs in 64-bit mode (MSR.SF is not user-writable),
  where record forms set CR0 from the 64-bit result, so it is not an exact reference for
  32-bit PowerPC.
- PowerPC: the harness loads r0..r31, LR, CTR, CR, XER (SO, OV, CA are seeded and compared,
  which Unicorn cannot do) and f0..f31, and keeps the table address in a register the
  instruction does not write, like RISC-V. 32-bit PowerPC runs on `qemu-ppc`; the 64-bit
  languages run in 64-bit mode, where a word divide or multiply-high leaves RT[0:31] and the
  CR0 of its record form undefined (only the low word is compared). The 64-bit arches allow
  branches, CR moves, `mfspr`/`mtspr` of XER/LR/CTR, the string and multiple ops (big-endian
  only: little-endian mode raises an alignment interrupt) and scalar FP. FP record forms
  leave CR1 uncompared (the FPSCR exception bits are not modelled), fused multiply-adds leave
  their result uncompared (p-code rounds twice), `stfs` of a double outside single range
  (the ISA stores truncated bits) is `undefined`, and an `lfs` of a single sNaN (widened
  without quieting) is not compared. QEMU 10.2 also sets CR bit 14 for the A-form FP record
  forms (`fmadd.`, `fsel.`, ...), so CR3 is not compared there.
- LoongArch64 (`Loongarch:LE:64:lp64d`) has no Unicorn or Capstone 5 support, so it runs only with
  `--oracle qemu`, and its encodings are decoded in batches by binutils objdump
  (`DIFFFUZZ_LA_OBJDUMP`, or `loongarch64-linux-gnu-objdump` on `PATH`; a `--target=loongarch64-linux-gnu`
  binutils build works). The harness loads r1..r31 and keeps the table address in a register the
  instruction does not write, and f0..f31 (`fld.d`/`fst.d`). A single-precision or word result
  in an FPR is compared in its low word only (bits 63:32 are undefined; QEMU NaN-boxes them),
  and a fused multiply-add's result is not compared. LSX/LASX, LBT, CSR, FCSR moves, timer,
  `ll`/`sc` and privileged instructions are left out.
- s390x: r0..r15 and f0..f15 are seeded and compared; the condition code is set with `spm` and
  read back with `ipm`, and is seeded one-hot into `CC0`..`CC3` with `CCA`/`CCB` to match. The
  table address is kept in a register the instruction does not write. Vector, decimal, hexadecimal
  FP and privileged instructions are left out, as are `ex`/`exrl` and the interruptible
  storage-to-storage instructions. `stmh` is skipped: QEMU 10.2 stores the low word shifted
  left by 32 (that is, zero) instead of bits 0-31 of each register.
- A `LOAD` from the constant space (a dynamic export such as `export *[const]:8 tmp`) reads
  its pointer as the value.

### RISC-V vector (`--arch riscv64v`)

`--arch riscv64v --oracle qemu --vlen 128|256` (`tools/difffuzz/rvv_backend.py`) fuzzes the
vector instructions: random OP-V, OP-VE and vector load/store words that llvm-objdump decodes
(`--objdump`, an llvm-objdump with the RISC-V vector extensions; `--only REGEX` picks
mnemonics). Capstone 5 does not decode them. QEMU runs with
`-cpu max,v=true,vlen=N,elen=64,rvv_ta_all_1s=true,rvv_ma_all_1s=true`.

- **Harness.** v0..v31 are loaded with `vl1re8.v`, then `vsetvl` sets a random legal vtype
  (SEW 8..64, LMUL mf8..m8, random vta/vma) and a random AVL. vxrm and fcsr are set, then the
  f and x registers. The epilogue stores the registers back with `vs1r.v`, together with vl,
  vtype, vxsat, vxrm, fcsr and vstart. Half of the x registers point into a 64 KiB data
  region, which is always mapped and compared. When QEMU raises SIGILL (a register group, SEW
  or EEW the instruction does not allow) the case is retried at LMUL 1 with each SEW.
- **vtype as context.** Each encoding is lifted after a `vsetvli x0, x0` of each vtype it is run
  at (`lift_variants`), so the decoder sees the vtype the harness sets, and the case is run with
  the first of those vtypes QEMU accepts.
- **What is compared.** `riscv.rvv.sinc` lifts every vector instruction to a user operation,
  so element values cannot be compared. The p-code runs twice, each time with different
  random user-operation results. A byte written the same way in both runs must equal QEMU's
  value (`mismatch`). Any other byte QEMU changes must be one the p-code writes
  (`missing-output`: a register, a CSR, or `mem` when there is no store). A second QEMU run
  gives every register the p-code does not read new contents, keeping vl, vtype, vxrm and
  fcsr. If a byte the p-code writes through a user operation changes, the result is
  `missing-input`, tagged with the case's tail/mask policy (`tu/mu` etc.).
- **After vtype context (`tools/gen_rvv_groups.py`)** (pinned `unlace-92c033f5ca`, 400
  encodings, seeds 5/6): VLEN 128 247 match, 17 with findings; VLEN 256 239 match, 29 with
  findings. Every remaining finding is fflags or vxsat, which the lift leaves out.
- **First run** (pinned `unlace-cc4eab698b`, 400 encodings each):
  - VLEN 128: 146 match, 111 with findings, 143 reference exceptions. The exceptions are
    SIGSEGV on indexed and strided addresses outside the region, and SIGILL on encodings
    reserved at every vtype.
  - VLEN 256: 154 match, 110 with findings, 136 reference exceptions.
  - The findings fall into four classes:
    - `vset{i}vl{i}` do not write vl and vtype (61-79).
    - A register group is written past vd (44-51): segment loads (`nf`), widening results,
      and LMUL > 1.
    - The old vd is read under a tail- or mask-undisturbed policy, or when vl is 0 (29-35).
    - FP ops do not write fflags and fixed-point ops do not write vxsat (17-19), as the scalar
      F/D lift also leaves the accrued flags out.

On the #546 encodings, `--oracle qemu` runs `bfdot` and `usdot` (Unicorn raises
`UC_ERR_EXCEPTION`) and agrees with Unicorn on the rest. In 300 random RISC-V instructions it
finds `fle.s` reading an unboxed single (`d38c9fa1`): QEMU compares the canonical NaN and
writes 0, SLEIGH writes 1. Unicorn misses this because it does not unbox either.

## Regression sweep

`tools/difffuzz/sweep.py` runs every configuration (each `--arch` with the Unicorn oracle where
Unicorn emulates it, with `--oracle qemu`, including `riscv64v`, and `x86-64-native` with
`--oracle native`) at a fixed seed and a small
count, one difffuzz process per configuration, and prints one line per configuration:

```sh
DIFFFUZZ_QEMU_DIR=~/.local/share/qemu-8.2-user:~/.local/share/qemu-10.2-user ~/.local/share/difffuzz-venv/bin/python \
    tools/difffuzz/sweep.py --unlace target/debug/unlace --objdump <llvm-objdump with RVV> --jobs 4 --out sweep.json
x86-64       unicorn  ok    match    270  mismatch    0 (+0 known)  decode    0  ref-exc    8  unmodeled    9
riscv64v     qemu     ok    match    126  mismatch    0 (+66 known)  decode    0  ref-exc   83  unmodeled    0
s390x        qemu     unavailable: no QEMU user binary
```

`--count` (200), `--trials` (2) and `--seed` (1) are passed through, and so are `--sleighpath`
(to check spec edits) and `--only REGEX` (over `arch/oracle`). A configuration whose oracle is
not installed is `unavailable`, not a failure. `--out` writes the outcome counts of each
configuration and up to `--keep` (10) of its failing cases.

The exit status is 1 when a configuration has a finding of a failing kind (`mismatch`,
`length`, `missing-output`, `missing-input`) that `tools/difffuzz/sweep_known.json` does not
accept, 2 when a configuration errored, and 0 otherwise. `sweep_known.json` maps
`arch/oracle` to the difference keys (a register, `missing-output`, `missing-input`) and the
fnmatch patterns over their values that are documented open classes. Today that is only the RISC-V
vector accrued flags (fflags, vxsat), which the lift leaves out as the scalar F/D lift does. A value
mismatch is never accepted.

First run (unlace-2feb8da847, seed 1, 200 per configuration): every available configuration is
`ok`. Unavailable were `ppc`, `ppc64le`, `ppc64le-isa` and `s390x` on QEMU (no
`qemu-ppc`/`qemu-ppc64le`/`qemu-s390x` on this host). `riscv64v` had 66 findings, all in its four
documented classes.

## How a case runs

- **Registers.** The register file of the language comes from its `.slaspec`
  (`tools/difffuzz/slaregs.py` preprocesses `@include`/`@if`/`@define` and lays out every
  `define register`), so a name such as `RAX` or `q3` maps to the same varnode the lifter writes.
  General registers get a mix of small values, boundary values, random words and pointers into a
  data window; vector registers get random 128-bit values; flags are random.
- **Memory.** Nothing is pre-mapped except the instruction. Both sides read never-written bytes
  from the same deterministic filler, and Unicorn maps a page with that filler the first time it
  touches it. An access above 2^47 is not compared (Unicorn runs without an MMU and truncates
  the physical address).
- **Outcomes.** `match`; `mismatch`; `decode` (Capstone decodes it, SLEIGH does not) and
  `length` (they disagree on its size); `unmodeled` (a `CALLOTHER` with a result, a division
  by zero, a float wider than 8 bytes, a NaN result, or a `CALLOTHER` without a result on a case
  that then differs); `undefined` (the architecture leaves the result undefined, see below);
  `ref-exception` (Unicorn raised an exception); `bad-address`; `skipped` (an encoding the
  reference is known to get wrong). `decode-rex-not-last` counts x86 encodings with a REX
  prefix that is not the last prefix.

## What is not compared

- x86: flags the SDM leaves undefined (AF everywhere, and per mnemonic for `MUL`, `DIV`,
  `BSF`/`BSR`, `BT*`, the logic ops, shifts and rotates); `BSWAP r16`; 16-bit `SHLD`/`SHRD`
  by `CL`; moves to and from debug and control registers.
- AArch64: `FMADD`/`FMSUB`/`FNMADD`/`FNMSUB`/`FMLA`/`FMLS` (p-code has no fused multiply-add,
  so SLEIGH rounds twice); writeback loads and stores whose transfer register is the base
  (CONSTRAINED UNPREDICTABLE); every SVE/SME instruction (Unicorn has no SVE).
- ARM and Thumb: writes to `pc`, branches, `LDM`/`STM`/`PUSH`/`POP`, VFP/NEON, exclusives,
  coprocessor and system instructions; a writeback transfer whose register is its base
  (UNPREDICTABLE); `Q` outside the saturating instructions. A32 encodings whose should-be-zero
  fields are set are dropped before lifting: an encoding is kept only when Keystone assembles
  Capstone's text back to the same bytes (`pip install keystone-engine`; without it every
  encoding is kept). Also dropped as UNPREDICTABLE: an `LDRD`/`STRD` whose first register is
  odd or `lr`; T32 shifted-register data-processing ops with bit 15 of the second halfword set
  and saturate/bit-field ops with bit 10 of the first; `SVC` (a system call on QEMU).
- ARM and Thumb on QEMU (`qemu-arm -cpu max`, QEMU 10; build it with
  `--target-list=arm-linux-user`): the A32 prologue sets NZCVQ and GE with `MSR APSR_nzcvqg`,
  loads r0..lr, and enters the instruction with `LDR pc` from a literal (bit 0 set for Thumb);
  a Thumb exit leaves through `BX pc` from a word-aligned address. First run (pinned
  `unlace-a3147ecd77`, seed 4, 2000 encodings each): arm 4020 matches, thumb 4876, no
  mismatches.
- MIPS: branches and jumps (delay slots), loads and stores (Unicorn maps kuseg differently, and
  SLEIGH lifts an `lwl`/`lwr` pair as one access by design), FPU, MSA and privileged
  instructions; HI/LO after `DIV`.
- PowerPC: branches, FPU/AltiVec/VSX, `mfspr`/`mtspr`, CR-field moves and string ops; XER is
  neither seeded nor compared (Unicorn's XER accessors do not reach QEMU's split SO/OV/CA, so
  `addic`'s CA is invisible), and SO starts clear.
- TriCore: jumps, calls, context and system instructions; a post-increment load into its own base.
  The PSW user status bits are read from Unicorn's `PSW_USB_*` registers, since its PSW read
  does not fold them back. Unicorn's TriCore occasionally dies with SIGFPE on long runs; keep
  `--count` to a few hundred and vary `--seed`.
- m68k and SPARC have no `Arch`: Unicorn 2.1.4 segfaults within a few hundred cases on both, and
  its m68k SR read does not include the lazily computed condition codes.
- RISC-V: fused multiply-adds and instructions with a static rounding mode other than
  `rne`/`dyn` (p-code float ops round to nearest).

### Reference quirks

Unicorn is the reference, not the truth. Each disagreement below was checked against hardware
(this x86-64 host) or the architecture manual, found to be Unicorn's, and is skipped:

- `CMPXCHG r32,r32` with a failing compare zero-extends the destination; hardware leaves it.
- `RET imm16` sign-extends the immediate; hardware zero-extends it.
- A `66`-prefixed near branch truncates RIP to 16 bits (AMD's rule); Intel, and SLEIGH, ignore
  the prefix in 64-bit mode.
- A RIP-relative `SHLD`/`SHRD` with an `imm8` addresses one byte short.
- `INSERTQ` inserts the wrong field and `EXTRQ` keeps bits 127:64.
- RISC-V: Unicorn's QEMU NaN-boxes a single-precision result only for `flw` and `fmv.w.x`; the
  arithmetic, conversion and sign-injection results keep bits 63:32 as 0 (or, for `fsgnj.s`,
  as the upper word of `rs1`). The ISA manual boxes every one ("NaN Boxing of Narrower
  Values"), so when ours is boxed only its low 32 bits are compared (`RiscV64.normalize`).

## Findings

Fixed in the specs (`docs/spec/02-lift-and-flow.md` describes each change):

- **x86-64.** 32-bit register destinations that did not clear bits 63:32: `XADD m32,r32`
  (`lock xadd`), `XCHG m32,r32`, `MOVBE`, `MOVMSKPS/PD`, MMX `PEXTRW`, `LSL`,
  `RDRAND`/`RDSEED`, the VEX/EVEX float-to-integer conversions, `VMOVMSKPS/PD`, `VPEXTRW` and
  `KMOV r32`. `MOV r32/r64,Sreg` wrote 16 bits. `44 90` (REX without B, then `90`) lifted as
  `XCHG EAX,EAX`. The `0F 18`..`0F 1F` hint NOPs did not decode with REX.W. A second `66`
  prefix toggled the operand size back. `EXTRQ` read its index from the wrong bits, and
  `EXTRQ`/`INSERTQ` mishandled a field length of 0.
- **AArch64.** `LDRSB`/`LDRSH` into a W register sign-extended to 64 bits instead of 32
  (`ldrsb w0,[x1]` with byte 0x80 gave `x0 = 0xffffffffffffff80`), and `LDURSB`/`LDTRSB` W
  zero-extended the byte. About 430 SIMD&FP constructors that write a B/H/S/D register or a 64-bit
  vector (scalar FP arithmetic, `FMADD`, `BSL`/`BIT`/`BIF`, the saturating and rounding shifts,
  `LD1`..`LD4` and `LD1R`..`LD4R` with 64-bit arrangements, ...) left bits 127:64 of the
  vector register unchanged. `FCVTZU d,d,#fbits` and `FCVTZU h,h,#fbits`, `SCVTF`/`UCVTF`
  `.4H`/`.8H` `#fbits` and scalar `URSHR d` decoded their shift with the wrong element size.
- **AArch64 (#546).** Rounding of `SRSRA`/`URSRA` and by-element `SQRDMULH`, saturation of
  `SQDMULH`/`SQRDMULH`/`SQDMLAL`/`SQDMLSL`/`SUQADD`, `SUDOT`/`USDOT`/`BFDOT`/`BFMLALB`/`BFMLALT` by element, and the MOPS `wt` options.
- **AArch64 SVE.** The SVE forms of F64MM (`LD1RO*`, `FMMLA`, 128-bit `ZIP`/`UZP`/`TRN`), I8MM
  (`SMMLA`/`UMMLA`/`USMMLA`/`USDOT`/`SUDOT`) and BF16 (`BFDOT`, `BFMLALB`/`BFMLALT`, `BFMMLA`,
  `BFCVT`/`BFCVTNT`) did not decode (`AARCH64_svemm.sinc`).
- **AArch64 RMIF.** `RMIF` shifted instead of rotated its source, and `set_NZCV` copied N into
  every flag the mask left alone instead of keeping it (`rmif x2,#9,#0xd` set C from N).
- **RISC-V.** `c.jr`, `c.jalr` and `ret` did not clear bit 0 of the target, as `jalr` does.
  Single-precision (and Zfh half-precision) results written to a 64-bit `f` register were
  zero-extended instead of NaN-boxed (`flw fs4,-0x56f(tp)` left `fs4 = 0x000000009b2a6699`
  for `0xffffffff9b2a6699`).
- **ARM.** A conditional `STRHT` wrote its base back even when the condition failed, and stored 4
  bytes. The T32 `ANDS`, `BICS`, `MOVS.W` (immediate), `MVNS` and `ANDS.W`/`MVNS.W` with a
  shifted register did not set C from the shifter.
- **PowerPC.** `divw.` set XER[OV]/[SO]; `lhbrx`/`lwbrx` were not byte-reversed in the
  little-endian languages; `ldbrx`/`stdbrx` were user ops; `stswi` with a partial last
  register stored the whole word.
- **LoongArch.** `bstrins.w`/`.d` had `bstrpick`'s semantics; `slli.d`/`srli.d`/`srai.d` masked the
  shift with `0x1f`; the rotates shifted arithmetically; `bytepick.w`/`.d` picked the wrong bytes;
  `ftintrm`/`ftintrp`/`ftint` truncated and the `.l.s` forms wrote only the low word.
- **s390x.** `risbhg`/`risblg` took the start and end positions from six bits of I3/I4 (bit 2
  set gave a position past the word) and `risblg`'s `+ 32` bound tighter than the mask.
- **TriCore (#563).** PSW.V was the sign bit of the 32-bit result instead of signed overflow
  (`overflowflags`, about 110 constructors), and `SHA` never set PSW.C.

Open (issue #548):

- AArch64: `FCVT*U` of a negative value wraps instead of giving 0 (kept: clamping makes every
  `(unsigned)f` unreadable).
- x86-64: an encoding whose REX prefix is followed by another prefix (REX is then ignored) does
  not decode; `BSF`/`BSR` with a zero source write the destination, which hardware leaves
  unchanged; `MOVSXD r16` and several 3DNow! instructions do not decode.

## Adding an architecture

An `Arch` in `tools/difffuzz/arches.py` names the SLEIGH language, the ELF machine, the Unicorn
and Capstone modes, the compared registers as `(sleigh name, unicorn constant)` pairs, the flag
word and its bits, an instruction generator and the mnemonics to leave out. The hooks
`ignored`, `skip`, `normalize`, `classify_decode` and `operand_mismatch` hold the
architecture's undefined results and the reference's known quirks.

## APX against a legacy reference

Unicorn has no Intel APX, so `tools/difffuzz/apxcheck.py` checks the APX instructions of a real
binary another way: it rewrites each one into legacy x86-64 code with the same effect and runs that
in Unicorn, while the lifted p-code of the original runs from the same state. An extended GPR
(R16-R31) is renamed to an R8-R15 register the instruction does not use; a new-data-destination
form `op dst, src1, src2` becomes `mov T, src1; op T, src2; mov dst, T` through a free temporary
(zero-extending an 8- or 16-bit result, as APX does); `{nf}` must leave every flag unchanged in the
p-code; SETcc.zu/IMUL.zu add the zero-extension; PUSH2/POP2 become two PUSHes/POPs. CCMPcc/CTESTcc become
a branch around the CMP/TEST whose false path loads OF SF ZF CF from dfv, PF from dfv.CF and clears AF
(PUSHFQ/POPFQ; the reference's stack slot is not compared); CFCMOVcc becomes a branch around the move
that zeroes the destination (or keeps src1 in the NDD form) on the false path, so a false condition
never touches memory. JMPABS, branches and RIP-relative operands are skipped.

```sh
clang -O2 -mapxf -fPIC -shared -o lib.so *.c
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/apxcheck.py lib.so --unlace <unlace> --sleighpath specs
```

On Lua 5.3 and zlib built with clang 22 and gcc 15 (`-O2 -mapxf`), 3314 of the 3406 distinct APX
encodings (CCMP/CTEST/CFCMOV included) were verified (at least one trial with in-range
addresses) and none differed. A hand-written probe of every CCMP/CTEST condition, size, operand form
and several dfv values, and every CFCMOVcc/CMOVcc NDD form and condition (928 encodings) verifies
927 with no difference. Breaking the NF ADD, or the false-path PF of CCMP or the zeroing of CFCMOV,
in a copy of `apx_map4.sinc` makes the check report it (122 and 360 mismatches).

There is no reference for the AVX-512 or AVX10.2 lifts here: Unicorn and QEMU (11.0) have no
AVX-512, and Intel SDE needs Intel's licence accepted to download.

## x86-64 against this CPU (`--oracle native`)

`--arch x86-64-native --oracle native` runs each case natively instead of under Unicorn: the QEMU
harness of `qemu_backend.py` (prologue loading every register, the instruction at its lifted
address, an epilogue that writes the registers and touched pages to stdout) gets an x86-64 form,
`X86NativeHarness`, whose ELF is executed directly. YMM0-YMM15 are compared at 256 bits, and the
generator draws mostly from the legacy SSE, VEX and x87 opcode spaces, which Unicorn's QEMU core
leaves out (AVX2, FMA, F16C, AES/VAES, VPCLMULQDQ, GFNI, SHA, AVX-VNNI, BMI, ADX on a CPU that has
them; an instruction this CPU lacks ends with SIGILL and counts as `ref-exception`). The p-code of
most vector arithmetic is a user operation, so those cases are `unmodeled`; moves, shuffles, blends,
scalar float arithmetic, integer and flag semantics are compared.

```sh
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch x86-64-native --oracle native \
    --count 1500 --seed 41 --unlace <unlace> --sleighpath specs
```

`tools/x86_avx512_sweep.py --enc EncVEX` / `--enc EncNormal` (with VEX or legacy `--predicates`) is the
matching decode check against `llvm-objdump` for those encodings. x87 is not compared: the p-code
emulator has no 80-bit float.
