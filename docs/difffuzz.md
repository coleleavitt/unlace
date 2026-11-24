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
`ppc` (PowerPC 32 big-endian) or `tricore`. `--sleighpath DIR` lifts with the `.sla`
files under `DIR` instead of the built-in ones, so a spec edit can be checked right after
`slacomp` without rebuilding unlace. The summary on stdout counts each outcome and lists the
findings by mnemonic; `--out` writes every finding with its bytes, both disassemblies, the
input registers and the differing values.

## QEMU user mode as the reference

`--oracle qemu` replaces Unicorn with the installed QEMU user-mode binaries
(`tools/difffuzz/qemu_backend.py`) for `aarch64` (`qemu-aarch64 -cpu max`), `riscv64`
(`qemu-riscv64 -cpu max`) and `mips` (`qemu-mips64 -cpu MIPS64R2-generic`). QEMU 10 implements
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
  MIPS32 instruction as MIPS32 does). Only the low 32 bits are compared.
- PowerPC has no QEMU harness. `qemu-ppc64` runs in 64-bit mode (MSR.SF is not user-writable),
  where record forms set CR0 from the 64-bit result, so it is not an exact reference for
  32-bit PowerPC.

On the #546 encodings, `--oracle qemu` runs `bfdot` and `usdot` (Unicorn raises
`UC_ERR_EXCEPTION`) and agrees with Unicorn on the rest. In 300 random RISC-V instructions it
finds `fle.s` reading an unboxed single (`d38c9fa1`): QEMU compares the canonical NaN and
writes 0, SLEIGH writes 1. Unicorn misses this because it does not unbox either.

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
  encoding is kept).
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
p-code; SETcc.zu/IMUL.zu add the zero-extension; PUSH2/POP2 become two PUSHes/POPs. CCMP/CTEST,
CFCMOVcc, JMPABS, branches and RIP-relative operands are skipped.

```sh
clang -O2 -mapxf -fPIC -shared -o lib.so *.c
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/apxcheck.py lib.so --unlace <unlace> --sleighpath specs
```

On Lua 5.3 and zlib built with clang 22 and gcc 15 (`-O2 -mapxf`), 3131 of the 3272 distinct APX
encodings were verified (at least one trial with in-range addresses) and none differed; replacing
the NF ADD's sum with a difference in `apx_map4.sinc` makes the check report it.
