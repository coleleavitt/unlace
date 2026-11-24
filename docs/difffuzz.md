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
`ppc64le-isa`, `ppc64-p10`, `ppc64le-p10`, `s390x`, `s390x-vec` and `loongarch64`. `--sleighpath DIR` lifts with the `.sla`
files under `DIR` instead of the built-in ones, so a spec edit can be checked right after
`slacomp` without rebuilding unlace. The summary on stdout counts each outcome and lists the
findings by mnemonic; `--out` writes every finding with its bytes, both disassemblies, the
input registers and the differing values.

## QEMU user mode as the reference

`--oracle qemu` replaces Unicorn with the installed QEMU user-mode binaries
(`tools/difffuzz/qemu_backend.py`) for `aarch64` (`qemu-aarch64 -cpu max`), `riscv64`
(`qemu-riscv64 -cpu max`), `mips` and `mips64` (`qemu-mips64 -cpu MIPS64R2-generic`), and `mipsr6`
and `mips64r6` (`qemu-mips64 -cpu I6400`, an R6 ELF with no HI/LO in the harness). `ppc` (`qemu-ppc -cpu 7457`), and the QEMU-only `ppc64`, `ppc64le` (`PowerPC:*:64:default`),
`ppc64-isa`, `ppc64le-isa`, `ppc64-p10` and `ppc64le-p10` (`PowerPC:*:64:A2ALT`, Power ISA 3.1) on `qemu-ppc64` /
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
- PA-RISC 1.1 (`--arch hppa`, `pa-risc:BE:32:default`, `--oracle qemu` with `qemu-hppa` from
  QEMU 8.2). Capstone 5 has no PA-RISC, so candidates are decoded by a multi-target binutils
  `objdump` (`BinutilsDis`/`ObjdumpArch`: `$DIFFFUZZ_OBJDUMP`, default
  `~/.local/share/difffuzz-binutils/bin/objdump`, built from binutils 2.45 with
  `--enable-targets=all`), a batch of 4096 encodings per objdump run. binutils also decodes the
  PA 2.0 forms, which are dropped. SAR and the carry bit go in and out through `mtsar`/`mfctl`
  and `addi -1`/`add,c`; nullification is compared too: the epilogue's first instruction
  complements a second free register, which keeps its input value only when the instruction
  nullified it. Not generated: branches, system, cache/TLB, FP, coprocessor, DCOR and DS. When
  SLEIGH traps on a ,TSV/,O overflow the case is undefined (QEMU 8.2 checks the 64-bit sign and
  misses narrow overflows). Fixed in the PA-RISC module after the first run: the 11-bit
  immediate took bit 11 (`im11less0`); the add and subtract conditions (=, <, <=, NUV/<<,
  ZNV/<<=, SV, OD) are computed from the operands the instruction saves first
  (`condA`/`condB`/`condCin`), so a target that aliases a source no longer changes them and
  ADD,C/SUB,B/SHxADD conditions include the carry and the shift; ADD,C, ADD,CO and SUB,B carry
  the full 33-bit sum; the unit conditions SDC/SBC/SHC are implemented; STBY stores the right
  bytes and its ,M form modifies the base register (after the store, QEMU's reading), not the
  source; a short-displacement store whose source is the modified base stores the old value.
  Seeds 4 and 5, 3000 encodings each: 6205 and 6293 matches, no mismatches.
- Alpha (`--arch alpha`, `21264:LE:64:unix`, `--oracle qemu` with `qemu-alpha -cpu ev67` from
  QEMU 8.2), decoded by the binutils `objdump` (`ObjdumpArch`, see PA-RISC). The table register is
  loaded last and a BR reaches the instruction (no delay slots); segments are widened to 8 KiB.
  The generator favours the integer operate opcodes (0x10..0x13, 0x1c: BWX, CIX, MVI) over loads
  and stores. Not generated: branches, PALcode, barriers, RPCC, locked loads/stores, IMPLVER,
  AMASK and floating point. Seeds 4 and 5, 3000 encodings each: 7191 and 7252 matches, no
  mismatches; the SLEIGH integer lifts needed no fix.
- OpenRISC 1000 (`--arch or1k`, `OpenRISC:BE:32:default`, `--oracle qemu` with `qemu-or1k` from
  QEMU 8.2), decoded by the binutils `objdump` (`ObjdumpArch`). F is set with `l.sfne` and read
  with `l.cmov`, CY set with `l.addi -1` and read with `l.addc`; OV cannot be read from user mode
  and is not compared. The `l.j` delay slot restores the table register; qemu-or1k lets r0 be
  written, so the epilogue clears it first (r0 is not compared); segments are widened to 8 KiB.
  The generator draws the register ALU, set-flag and shift-immediate forms with their reserved
  bits clear. Not generated: jumps, branches, system, SPR, MAC, atomic, FP and vector
  instructions, and `l.extws`/`l.extwz` (QEMU lacks them). QEMU 8.2 takes `l.mulu`'s carry from
  a signed multiply, so CY is not compared there. Seed 6, 3000 encodings: 8803 matches, no
  mismatches; the SLEIGH lifts needed no fix.
- MicroBlaze (`--arch microblaze` / `microblazeel`, `MicroBlaze:BE:32:default` /
  `MicroBlaze:LE:32:default`, `--oracle qemu` with `qemu-microblaze` / `qemu-microblazeel` from QEMU
  8.2), decoded by the binutils `objdump` (`ObjdumpArch`). The carry goes in with `addi -1` and
  back with `addc`; `imm` + `braid` reaches the instruction and its delay slot restores the table
  register. The generator draws the register (type A) forms with their reserved bits clear, and
  encodings with reserved bits set are not generated (binutils decodes them anyway). Not
  generated: branches, returns, traps, special-register moves, stream (FSL), cache,
  exclusive-access, `imm` prefixes, FP and `pcmpbc` (QEMU lacks it). Fixed in `microblaze.sinc`
  after the first run: the reversed byte and halfword accesses (`lbur`, `lhur`, `sbr`, `shr`)
  also flip the low address bits (address ^ 3, ^ 2), as QEMU reads them. Seeds 4 and 5, 3000 encodings each (big and
  little endian): 8497 and 8449 matches, no mismatches.
- Xtensa (`--arch xtensa`, `Xtensa:LE:32:default`, `--oracle qemu` with `qemu-xtensa` from QEMU 8.2, its
  default dc232b core), decoded by the binutils `objdump` through `XtensaDis`: a candidate is 2 or 3
  bytes (op0 8..13 is a narrow instruction) and sits in an 8-byte slot padded with NOP/NOP.N so
  every slot decodes in step. a0..a15 and SAR are compared; the table register is loaded last and
  a J reaches the instruction. The generator favours the RRR and LSAI formats; FLIX bundles are
  not generated. Not generated: branches, calls, window, loop, system, cache/TLB, atomic, MAC16,
  boolean and FP instructions, L32R, MULUH/MULSH (dc232b has no MUL32_HIGH) and SLLI by 32 (its
  reserved encoded amount 0). Fixed in `xtensaInstructions.sinc` after the first run: NSA counted the
  leading zeros of the complement, so it returned 0 for every non-negative value; it is now the
  number of leading sign bits less one (31 for 0 and -1). Seeds 4 and 5, 3000 encodings each:
  7040 and 7164 matches, no mismatches.
- gdb simulators (`--oracle gdbsim`, `tools/difffuzz/gdbsim_backend.py`) for architectures neither
  Unicorn nor QEMU runs. `dfsim-<sim>` is `tools/difffuzz/dfsim.c` linked against gdb 16's
  `sim/<sim>/libsim.a` (`build_dfsim.sh`; gdb configured with `--enable-targets=all --enable-sim`,
  `CFLAGS=-std=gnu17` for GCC 15): it loads a one-page ELF with a `.text` section, then per case
  takes memory writes, register stores (gdb's numbering, read from `maint print registers`), one
  step and reads, over stdin/stdout. No prologue or epilogue is needed. `$DIFFFUZZ_GDBSIM_DIR`
  (default `~/.local/share/difffuzz-gdbsim/bin`) holds the drivers and that gdb. Harvard targets
  set `gdb_data_bias`/`gdb_code_bias`; `misaligned_undefined` makes a misaligned access undefined.
  - Moxie (`--arch moxie`, `moxie:BE:32:default`; sim/moxie is big endian only): CMP is not
    checked (the language keeps the operands, the simulator keeps its condition codes
    internally). The simulator's `mul.x` multiplies zero-extended operands, so it is skipped, and
    shifts by 32 or more are undefined (C shifts there). sim/moxie's register store reads little
    endian and its fetch writes big endian. Seed 7, 2500 encodings: 5641 matches.
  - FT32 (`--arch ft32`): instructions in program memory at 0x1000, data in the 64 KiB RAM the
    simulator keeps at 0x800000. FT32B compressed words are not in the language. The simulator
    computes every compare-type overflow with the subtraction formula, so ADDCC/TST/BTST compare
    z, c, s and a only. Fixed in `ft32.slaspec`: the LDI/STI/EXI/LPMI offset is stored with bits
    14:8 inverted when bit 7 is set (gas encodes it so, the simulator decodes it so; objdump prints
    the raw field); PUSH/POP of `$sp` push the old value and pop into `$sp`; BEXTS past bit 31
    reads zeros; TST.B/.S and ADDCC.B/.S work on 8/16 bits. Seed 8, 2500 encodings: 3592 matches.
  - IQ2000 (`--arch iq2000`): instructions at 0x80000000 + address, data below 8 MiB. Seed 5,
    2500 encodings: 5390 matches; no fix needed.
  - V850 (`--arch v850`, `V850:LE:32:default`, simulator machine v850e2v3): the simulator has memory
    below 2 MiB, so the instruction sits at 0x100000. Flags are PSW bits 0..4, compared as PSW.
    Misaligned accesses are undefined (sim/v850 aligns them down). Simulator quirks: ADF/SBF leave
    PSW alone (PSW not compared there); MAC/MACU drop a carry into the high word (skipped).
    Fixed in `Instructions/Arithmetic.sinc`: DIVH divides signed by the sign-extended halfword
    (it was an unsigned 32-bit division) and the three-operand DIVH takes Z/S from the quotient;
    MULHI multiplies the sign-extended halfword of reg1; SATADD/SATSUB/SATSUBR/SATSUBI saturate
    (`__saturate` was an empty pcodeop) and S/Z follow the saturated value. Seed 3, 3000
    encodings: 6663 matches.
    The V850E2 step divisions (SDIVN/SDIVUN/SDIVHN/SDIVHUN, and DIVN/DIVUN/DIVHN/DIVHUN below 32 steps)
    decode but are pcodeops (`unmodeled`): sim/v850 has OP_ functions for the SDIV forms in
    simops.c, but v850.igen never dispatches them (they stop with SIGILL), so there is no oracle.
  - MN10300 (`--arch mn10300`, `mn10300:LE:32:mn10300`): the simulator has memory below 1 MiB, so the
    instruction sits at 0x10000; Z, N, C, V go through PSW. DIV/DIVU are undefined on overflow
    (sim/mn10300 only tests a zero divisor). Fixed in `mn103_base.sinc`: the register forms of
    ADD/SUB read the source register again for the flags after writing the destination, so
    `add d3,d3` set C and V from the sum. Seed 2, 2000 encodings: 5190 matches.
  - LatticeMico32 (`--arch lm32`, `lm32:BE:32:default`; `--memory-region 0x0,0x1000000`): r0 is
    loaded with 0 (sim/lm32 keeps it as a real register). Seed 2, 2500 encodings: 5797 matches; no
    fix needed.
  - M32R (`--arch m32r`, `M32R:BE:32:default`): candidates sit on word boundaries (`lift_align`),
    a 16-bit one with a NOP after it (`gdb_insn_pad`); C is PSW bit 0. sim/m32r runs the base M32R:
    its M32RX/M32R2 mode does not keep C in PSW or CBR, so the M32RX/M32R2-only instructions and
    the accumulator (DSP) ones are not generated. Seed 2, 1500 encodings: 4048 matches; no fix
    needed.
  - FR-V (`--arch frv`, `FRV:BE:32:default`): one-instruction VLIW packets (pack bit set);
    ICC0..ICC3 go through CCR bits 16..31, which sim/frv numbers as SPR 256 (register 129 + SPR,
    `include/sim/sim-frv.h`, so `sim_regnums`). Fixed in `frv.slaspec`: SLLcc/SLLIcc set V to the
    OR of the bits shifted out and SRLcc/SRAcc (and the immediate forms) set C to it, as
    `cpu/frv.cpu` defines them; SLEIGH kept both. Seed 3, 1500 encodings: 2216 matches.
  - H8/300H advanced (`--arch h8300h`, `h8_300h:BE:32:advanced`; ELF flags E_H8_MACH_H8300H give
    sim/h8300 16 MiB): sim/h8300's own register numbers (er0..er7, CCR 8, PC 9). C, V, Z, N are
    compared; sim/h8300 never computes H (so DAA/DAS are skipped), its subtraction/INC/DEC overflow
    test compares rd with -ea, its ADDX/SUBX set Z where the manual only clears it and ignore the
    carry in V, it zero-extends @aa:16 and leaves DIVXU by zero different: all of those are
    ignored. binutils' h8300h decoder also prints H8S/H8SX forms, which are not generated. Seed 7,
    2500 encodings: 6122 matches; the language needed no fix.
  - TI PRU (`--arch pru`, `PRU:LE:32:v3`): IMEM at 0x20000000 + address, DMEM from 0. r30/r31 are
    the pin registers and the carry is not readable from the simulator, so neither is compared and
    the carry-in instructions are not generated. A burst past r31.b3 is illegal (sim/pru raises
    SIGILL), one reaching r30/r31 is not compared. Two fixes came out of it: `pcode_emu` now sends a
    LOAD/STORE into the register space to the registers (it sent every LOAD/STORE to RAM; the space
    ids come from `slaregs.space_names`), and `pru.sinc`'s unrolled register-file bursts with more
    than 20 operands (75 bytes and up from rN.b0) are the byte loop the other start bytes use, since
    the engine stops at 20 operands ("SLEIGH parser out of state space"). A simulator stopped by a
    signal is restarted. Seed 5, 1500 encodings: 2836 matches, no mismatches.
  - CR16C (`--arch cr16`, `CR16C:LE:16:default`): sim/cr16 reaches control register N through
    register 16 + N, so PSR (control register 10) is register 26, not SIM_CR16_PSR_REGNUM; it stores
    only the low 16 bits of R12..SP written from outside, so those inputs are 16-bit. C, L, F, Z, N
    are compared. Fixed in `CR16C.sinc`: ADDC*/SUBC* computed their flags before the result and
    then added the new carry, and their flags tested the carry bit instead of the partial sum;
    ASHUB shifted a zero-extended byte, so its right shift was logical. sim/cr16 bugs, ignored: the
    add/subtract carry (computed after truncation), [R12]/[R13] index forms (binutils and the
    simulator read the index bit from the register field), memory bit operations (wrong bit),
    ADDCW reg,reg (adds the destination to itself), LOADD abs20 (drops the high word), stores to
    abs20 above 0xeffff (no remap), the high byte SUBCB writes, the high word of R12..SP after a
    word operation, shift counts out of range. Seed 7, 2500 encodings: 3286 matches, no mismatches.
  - AVR (`--arch avr`, `avr8:LE:16:extended`, ELF flags avr5): the language keeps R0..R31 at
    data addresses 0..31 of its mem space, so the harness reads them as memory (`mem_registers`,
    `slaregs.mem_registers`); sim/avr's SRAM is at 0x800000 + address, and SP/SREG (0x5d..0x5f)
    are left out of the memory comparison. All eight SREG flags are compared. Fixed in
    `avr8.sinc`: no instruction set H (ADD/ADC/SUB/SUBI/SBC/SBCI/CP/CPC/CPI/NEG now do); ADC took
    V from the new carry; ADIW took V from the sum; FMUL/FMULS/FMULSU were `todo()` with the wrong
    registers (R24..R31 for R16..R23). Ignored: sim/avr takes FMUL's C after the shift, and a Y/Z
    displacement past 0xffff. Seed 4, 2500 encodings: 7410 matches, no mismatches.
  - Blackfin (`--arch bfin`, `Blackfin:LE:32:default`): sim/bfin numbers ASTAT 36 and PC 53
    (`include/sim/sim-bfin.h`); R0..R7, P0..P5, SP, FP, I/M/B/L (L = 0) and the ASTAT flags are
    compared; the operations are filtered on the whole objdump text (`canonical`). Fixed in
    `blackfin.slaspec`: data-register compares set AZ/AN/AC0 (only CC was set), the 32-bit shifts
    leave AC0 alone (they cleared it), the sign/zero extensions clear AC0 and V (they kept them),
    `(a + b) << n` takes V from the add or a sign-changing shift step and leaves AC0 alone, and the
    16-bit half add/subtract saturate under (S) and set AC0/V/VS/AN/AZ (they set nothing). Ignored:
    register shift counts of 2^31 and up (a C int in sim/bfin), the flags of `>>=` by more than 31
    (sim/bfin writes 0 and leaves them), a pointer post-modified by itself. Seed 5, 2500
    encodings: 5892 matches, no mismatches.
  - RX (`--arch rx`, `RX:LE:32:RXv1`): sim/rx, like sim/m32c and sim/rl78, has its own main.c,
    so its libsim.a is the gdb-if.c interface and the driver is `dfsim_plain.c` (only `sim/sim.h`;
    it answers on a copy of stdout and sends the simulator's own messages to stderr);
    `build_dfsim.sh` picks it for those. Registers are sim/rx's numbering (R0..R15, PSW 18, PC 19);
    C, Z, S, O are compared; memory is below 1 MiB. Ignored: a register shift count above 31
    (sim/rx shifts by all of it; the count is bits 4..0), the byte sim/rx keeps at 0x88264,
    binutils' RXv2/v3-only forms and its MOV.B/W #imm32 and register-memex readings. Seed 4, 2500
    encodings: 3618 matches; the language needed no fix.
  - RL78 (`--arch rl78`, `RL78:LE:16:default`, sim argument `g14`, ELF flags E_FLAG_RL78_G14,
    dfsim_plain): the language keeps the bank-0 registers, SP and PSW at their data addresses
    (`mem_registers`); CY and Z are compared through PSW (bank 0, interrupts off). The emulator
    evaluates the `segment(seg, off)` pcodeop (`callother_fn`, NEARSEG = 0xf); the gdbsim backend
    now passes `callother_fn` on as the Unicorn path does. Data stays in RAM (0xf8000..0xffeff):
    sim/rl78 mirrors ROM at 0xf1000.. and simulates the SFRs. Ignored: AC (sim/rl78 derives it from
    bit 4 of the result, wrong for subtraction), the flags after ADDW/SUBW SP,#imm (sim/rl78
    clears them), odd SP adjustments (SP bit 0 is fixed), stores to CS/ES/PMC, odd word addresses,
    binutils' ES:-prefixed forms it prints without ES: and its 61 x1 [HL+B] reading. Seed 8, 2500
    encodings: 4257 matches; the language needed no fix.
  - M32C/80 (`--arch m32c`, `M32C/80:LE:24:default`, ELF flags EF_M32C_CPU_M32C, dfsim_plain):
    bank-0 R0..R3, A0, A1, FB, SB and C, Z, S, O of FLG. binutils' m32c decoder and sim/m32c (its own
    m32c.opc) disagree on many lengths and sim/m32c sides with SLEIGH, so a length disagreement is
    `ref-length` (arch flag `ref_length_unreliable`) and `ignored()` reads SLEIGH's text
    (`text_from_sleigh`). Fixed in `M16C_80.slaspec` (M16C/80 and M32C/80): OR used AND in every
    form but :S and AND.W:S used OR; CMP.size:S src,R0 took S/Z from src - R0; the subtract carry
    was a signed compare; SBB subtracted C instead of ~C and its carry/overflow tests were wrong,
    ADC/ADDX's overflow ORed the two steps; SHA's left-shift O was inverted and its right shift
    set O; DIV/DIVX tested the quotient's fit one bit too high and DIVU signed. sim/m32c bugs,
    ignored: ROT (`rot_op (dc, count, -1)`), BTST:S (4 bytes), the 32-bit C/O of MATH_OP (int
    arithmetic), signed DIV (dividend sign-extended from the divisor's width), SHL's O, MOV:S #imm
    to An flags, MUL.B into R0H/R1H, SCcnd, shifts by R1H = 0 or into R1. Seed 11, 1500 encodings:
    2350 matches, no mismatches.
  - The simulators that cache decoded instructions (the CGEN ones) do not notice code rewritten
    at an address they ran, so a different instruction at a used address starts a fresh
    simulator. MCORE and MSP430 are not wired: sim/mcore's single step leaves PC elsewhere, and
    sim/msp430 models 20-bit MSP430X addressing and keeps V where the MSP430 manual clears it.
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
  forms (`fmadd.`, `fsel.`, `fdivs.`, ...), so CR3 is not compared there.
- `ppc64-p10` and `ppc64le-p10` test the Power ISA 3.0/3.1 (POWER9/POWER10) instructions. Three
  in four encodings come from the LLVM records in `specs/Ghidra/Processors/PowerPC/isa31_insts.json`
  (prefixed 8-byte instructions, MMA, the new VMX/VSX/fixed-point ones; seven in ten prefixed
  ones get a displacement below 64 KiB), the rest are random VMX/VSX/X-form words. Capstone 5
  lacks the prefixed instructions, so they are decoded in batches by `llvm-objdump --mcpu=pwr10`
  (`DIFFFUZZ_PPC_OBJDUMP`, or `llvm-objdump` on `PATH`, with the PowerPC target; the rustup
  `llvm-tools` one has it) after `llvm-objcopy -I binary` next to it. The harness
  (`PpcVsxHarness`) seeds and compares vs0..vs63 with `lxv`/`stxv` in place of the FPRs. The
  8-byte instructions go first in each batch, so none crosses a 64-byte boundary (an alignment
  interrupt), and data addresses stay below 2^31 (the epilogue builds them with `lis`/`ori`).
  Doubleword 1 of a scalar VSX or FP result is undefined and not compared; FMAs, an extended
  divide whose quotient does not fit, a vector divide by zero (or an overflowing one),
  `xxextractuw`/`xxinsertw` with UIM above 12 and a store of a double outside single range
  are not compared; FPSCR, `mffs`, the quad-precision and DFP/BCD instructions, and the
  instructions LLVM decodes for a future ISA (`IsISAFuture`, which QEMU lacks) are not
  generated. Seed 17, 2500 encodings (`ppc64le-p10`): 3089 matches, no mismatches; seed 18,
  1500 encodings (`ppc64-p10`): 1953 matches and one mismatch, `divdeu` (fixed, below).
- LoongArch64 (`Loongarch:LE:64:lp64d`) has no Unicorn or Capstone 5 support, so it runs only with
  `--oracle qemu`, and its encodings are decoded in batches by binutils objdump
  (`DIFFFUZZ_LA_OBJDUMP`, or `loongarch64-linux-gnu-objdump` on `PATH`; a `--target=loongarch64-linux-gnu`
  binutils build works). The harness loads r1..r31 and keeps the table address in a register the
  instruction does not write, and f0..f31 (`fld.d`/`fst.d`). A single-precision or word result
  in an FPR is compared in its low word only (bits 63:32 are undefined; QEMU NaN-boxes them),
  and a fused multiply-add's result is not compared. LSX/LASX, LBT, CSR, FCSR moves, timer,
  `ll`/`sc` and privileged instructions are left out.
- s390x: r0..r15 and v0..v31 (`vl`/`vst`; `f0`..`f15` are their leftmost doublewords) are seeded and
  compared; the condition code is set with `spm` and read back with `ipm`, and is seeded one-hot
  into `CC0`..`CC3` with `CCA`/`CCB` to match. The table address is kept in a register the
  instruction does not write. `s390x-vec` draws `E7`/`E6` (vector) encodings. A scalar (W) vector
  instruction is compared in element 0 of its target only (the rest is unpredictable; the SLEIGH
  mnemonic decides, since Capstone 5 prints newer W forms as their generic V form); fused
  multiply-adds are not compared, nor an integer-to-float conversion with a rounding mode other
  than 0 or 4. Decimal, hexadecimal FP and privileged instructions are left out of `s390x`, as
  are `ex`/`exrl` and the interruptible storage-to-storage instructions. `stmh` is skipped: QEMU
  10.2 stores the low word shifted left by 32 (that is, zero) instead of bits 0-31 of each register.
- `CEIL`, `FLOOR` and `ROUND` keep the sign of their operand (`ceil(-0.3)` is `-0.0`).
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

### RISC-V extensions Capstone does not decode (`--llvm-mattr`)

`--arch riscv64 --llvm-mattr +c,+zcb,... --objdump <llvm-objdump>` draws the candidates from what
llvm-objdump decodes with that `-mattr` instead of from Capstone 5, which knows neither Zcb,
Zcmp, Zcmt, Zimop, Zcmop, Zicond nor Zalasr. One word in four is a 16-bit encoding, and
`--only REGEX` picks mnemonics. Two more options exist for the Zcmp language:
- `--lang` lifts with another SLEIGH language: `RISCV:LE:64:Zcmp`, whose `c.fsdsp` space holds
  Zcmp/Zcmt.
- `--qemu-cpu` replaces the harness's `-cpu`. Zcmp needs
  `rv64,c=false,zca=true,zcd=false,zcmp=true,zcmt=true`: QEMU still decodes `c.fsdsp` when C
  and D are both on, `zcd=false` or not.

First runs (pinned `unlace-5dac424f4f`):
- Zca/Zcb/Zcmop/Zimop/Zicond/Zalasr: 1400 encodings, 1433 matches, no mismatch. QEMU 10.2
  rejects the Zalasr loads with SIGILL, so those are not compared.
- Zcmp/Zcmt: 300 encodings, 251 matches, no mismatch. Most of the rest touch a stack outside
  the mapped pages, which is `bad-address`.

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

`tools/difffuzz/sweep_ci.sh <unlace>` is the cron/CI entry point. It runs the whole sweep with
the venv's python (`DIFFFUZZ_PYTHON`), the QEMU directories
`~/.local/share/qemu-8.2-user:~/.local/share/qemu-10.2-user` (`DIFFFUZZ_QEMU_DIR`), rustup's
rustc-master llvm-objdump for RVV (`DIFFFUZZ_OBJDUMP`) and for Power ISA 3.1 (`DIFFFUZZ_PPC_OBJDUMP`),
`~/.local/share/difffuzz-tools/loongarch64-linux-gnu-objdump` (`DIFFFUZZ_LA_OBJDUMP`) and the gdb
simulator drivers in `~/.local/share/difffuzz-gdbsim/bin` (`DIFFFUZZ_GDBSIM_DIR`). It goes
through `unlace-slot` when that exists, with core dumps off, and writes the summary to
`~/.local/share/difffuzz-sweeps/sweep-<UTC time>-<binary>.json` (`DIFFFUZZ_SWEEP_OUT`). Its
exit status is sweep.py's. LoongArch without an objdump, or a `gdbsim` configuration without its
`dfsim-<sim>` driver, is `unavailable`. After the sweep it runs `xopcheck.py` (XOP and TBM
against its model of the APM; `DIFFFUZZ_SLEIGHPATH` passes a SLEIGH tree), and exits with
xopcheck's status when the sweep is clean.

Full sweep (unlace-5dac424f4f, 37 configurations, all oracles installed): exit 0, every
configuration `ok`, no mismatches beyond riscv64v's 15 known ones. The `decode` findings (s390x
97, ppc 25, tricore 12, x86-64-native 7, a few elsewhere) are spec gaps or encodings Capstone
accepts that the ISA leaves invalid. They are listed in #862. After the `isel` decode and the
invalid-encoding filters (unlace-478ab58a5e), the only `decode` findings left are AMD FMA4 on
`x86-64-native` (2), a spec gap routed to the x86 team.

Full sweep (unlace-7b30dee81f, 51 configurations: the 39 above plus `xtensa`, `ppc64-p10` and
`ppc64le-p10` on QEMU and `moxie`, `ft32`, `iq2000`, `lm32`, `m32r`, `frv`, `h8300h`,
`mn10300` and `v850` on the gdb simulators, then xopcheck with 158 XOP and 28 TBM cases):
exit 0, no mismatches beyond riscv64v's 15 known ones. The only `decode` finding left is V850E2's
`sdivn` (#929).

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
  and saturate/bit-field ops with bit 10 of the first or bit 5 of the second; `SVC` (a system call
  on QEMU).
- Encodings Capstone decodes but the ISA leaves invalid are dropped before lifting (each
  architecture's `canonical`), so a `decode` finding is a SLEIGH gap: on x86, an F2/F3 prefix on
  a 0F-map opcode that has no such form (Capstone decodes the same instruction without it); on
  32-bit PowerPC, 64-bit-only instructions, VSX and `isel`, which the 32-bit language and the
  7457 lack; on MIPS R6, the REGIMM trap-immediates R6 removed and the Cavium Octeon
  instructions; on TriCore, an encoding with a reserved bit set that Capstone ignores, and the
  TC1.6.2 additions the TC1.6.1 language lacks; on m68k, a full extension word for the opword's
  own effective address with bit 3 set, a zero base-displacement size or a reserved I/IS value;
  on FR-V, a 64-bit multiply into an odd GRk; on H8/300H, the H8SX `7A x(1erd)` `#xx:16`
  forms; on M32R, an operand objdump prints as `???`.
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
  register stored the whole word. With `ppc64-p10`/`ppc64le-p10`: `sradi.` did not set CR0;
  `divwe[u]`/`divde[u]` divided 0 by 0 or `RA` by `RB` instead of `RA || 0`; `bpermd`, `xxsel`,
  the VSX compares, `xststdcdp`, `xscmpexpdp` and the other VSX user ops never wrote their target;
  `stxsd`/`stxssp` were user ops (no store). The generic 64-bit languages did not decode `isel`.
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
matching decode check against `llvm-objdump` for those encodings.

### 32-bit x86 (`--arch x86-32-native`) and real mode (`--arch x86-16`)

`--arch x86-32-native --oracle native` builds an i386 static ELF (`X86_32NativeHarness`) the kernel
runs under its IA-32 emulation: EAX-EDI, EFLAGS, XMM0-XMM7 and the six segment registers are
compared, the p-code state starting from the selectors a 32-bit process has (CS 0x23, DS/ES/SS
0x2B, FS/GS 0) with IF set. The epilogue stores through SS until it has reloaded DS and ES, so an
instruction that loads a null DS still reports. The generator favours the forms 64-bit mode lacks:
BCD adjusts, PUSHA/POPA, BOUND, PUSH/POP and MOV of segment registers, LDS/LES/LSS/LFS/LGS, far
JMP/CALL to selector 0x23 and RETF, string instructions, 0x66/0x67 prefixes; registers now and then
hold a valid selector. Branches and calls run (a taken branch lands on a second epilogue).

`--arch x86-16` lifts with `x86:LE:16:Real Mode` and runs Unicorn's 16-bit mode (QEMU's real mode) with
random DS/ES/SS/FS/GS and CS 0. `segment(selector, offset)` (user operation 0) is evaluated as
selector*16 + offset here and as the offset in the flat 32-bit mode. Encodings this CPU raises #UD
for although Capstone and LLVM decode them (control registers that do not exist, VEX after a
66/F2/F3 prefix, MOVNTI with 66/F2/F3, 66-prefixed RCPPS/RSQRTPS/MOVLHPS/MOVHLPS), AMD-only SSE4a
and 3DNow are not generated.

```sh
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch x86-32-native --oracle native \
    --count 2500 --seed 6 --unlace <unlace> --sleighpath specs
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch x86-16 \
    --count 1500 --seed 4 --unlace <unlace> --sleighpath specs
```

### x87 (`--arch x86-64-x87`)

`pcode_emu.py` computes every float op with an 80-bit operand or result exactly (`softfloat.py`:
values decoded to fractions, one round-to-nearest-even into the destination format, subnormals
included; an x87 unnormal or pseudo-NaN counts as a NaN operand, which is `unmodeled`).
`--arch x86-64-x87 --oracle native` draws only the D8-DF escapes; the harness `FXRSTOR`s an image
with control word 0x37F (64-bit precision, nearest, exceptions masked), ST0-ST6 holding random
values (normal, integer, zero, infinity, denormal), ST7 empty and C0-C3 random, and `FXSAVE`s it
after the instruction. ST0-ST7 (except a register the CPU tags empty) and C0-C3 are compared; a case
where the CPU reports a stack fault (SF) is `undefined`. Not compared: C1 of the rounding
instructions (the round-up indicator) and of FCOMI/FUCOMI(P) and FCMOVcc (cleared by the SDM, left
unchanged by this CPU), ST0 of FPREM/FPREM1 and of the five constant loads (see
`docs/spec/02-lift-and-flow.md`). FLDCW and the environment loads and stores are denied. The
`x86-64-native` configuration loads no x87 state and compares none: natively an MMX write sets bits
79:64 of its register to ones, which the MMX lifts leave alone.

```sh
~/.local/share/difffuzz-venv/bin/python tools/difffuzz/difffuzz.py --arch x86-64-x87 --oracle native \
    --count 3000 --seed 7 --unlace <unlace> --sleighpath specs
```
