# Completion Plan §3 — Stub-Tier Lifter Completions

Self-contained handoff. Big-picture plan: `docs/handoffs/COMPLETION_PLAN.md` §3.

## Goal

Promote every stub-tier architecture to **Beta**. A `Beta` lifter
handles its 30 most common opcodes with focused unit tests.

## Scope

Architectures currently classified `Stub` in
`crates/unlace-ir/src/arch_support.rs`:

```
6502, 8051, AmdGpu, AppleAgx, Arc, Agx, NvidiaSass, Mos6502, M6502,
Hexagon, Pic16, RxRenesas, Sharc, SharcBlackfin, TiC6x, TiC28x, Evm,
NvSass, SpirV, Stm8, TriCore, V850, Z80
```

23 entries with some duplication (`Mos6502` / `M6502`, `Agx` /
`AppleAgx`); collapse those during the sweep — file a one-line PR that
removes the dup and updates every fixture using the alias.

## Per-arch checklist (use this verbatim for every lifter)

1. Open the canonical ISA reference manual; list the 30 most common
   opcodes for that target.
2. For each opcode, in the lifter's `lift_inner` (or equivalent
   per-arch dispatcher) add:
   - A bitmask decode (`if word & MASK == VALUE { ... }`).
   - A lift to the simplest matching `IrOp`:
     - Arithmetic → `IntAdd` / `IntSub` / `IntMult` / `IntDiv`.
     - Logical → `IntAnd` / `IntOr` / `IntXor`.
     - Shifts → `IntLeft` / `IntRight` / `IntSright`.
     - Memory → `Load` / `Store`.
     - Branches → `Branch` / `Cbranch` / `Call` / `Return`.
     - Side-effecting peripheral I/O → `Callother` with operand-encoded
       port/spec numbers.
3. Add a unit test per opcode in `mod tests` using the existing
   `lift_insn(&bytes, addr).unwrap()` pattern. Each test asserts:
   - `ir_ops.len()` is the expected count.
   - `ir_ops[0].op` matches the chosen `IrOp`.
   - For ops with a destination, `ir_ops[i].output` is the expected
     varnode.
   - For branches, the target is the expected `ram_target(addr)`.
4. Update `arch_support.rs::support_tier` to return `Beta` for the arch
   when ≥30 opcodes are covered.
5. Update `docs/status.md` matrix.

## Priority order

| Tier | Architectures | Days each |
|------|---------------|-----------|
| Pri-1 | Z80, 6502 (consolidate with MOS6502), MSP430, V850 | 2 |
| Pri-2 | ARC, STM8, RX, TriCore | 1.5 |
| Pri-3 | Hexagon, TI C6x, TI C28x, 8051, PIC16 | 1 |
| Pri-4 | AMD GPU, AppleAGX (consolidate with Agx), NV SASS (consolidate with NvidiaSass), SHARC (consolidate with SharcBlackfin), SPIR-V, EVM | 1 |

Total budget after dedup: 4 × 2 + 4 × 1.5 + 5 × 1 + 6 × 1 = 25 days.

## Opcode lists per architecture

### Z80 (`crates/unlace-lift-z80/src/lib.rs`)

`LD r,r`, `LD r,n`, `LD r,(HL)`, `LD (HL),r`, `LD A,(nn)`, `LD (nn),A`,
`ADD A,r`, `ADD A,n`, `SUB r`, `SBC A,r`, `AND r`, `OR r`, `XOR r`,
`CP r`, `INC r`, `DEC r`, `JP nn`, `JP cc,nn`, `JR e`, `JR cc,e`,
`CALL nn`, `CALL cc,nn`, `RET`, `RET cc`, `PUSH rp`, `POP rp`,
`EX DE,HL`, `LDIR`, `EI`, `DI`, `HALT`.

### 6502 (consolidate `crates/unlace-lift-6502/`)

`LDA imm/zp/abs`, `STA zp/abs/zpx`, `LDX/STX`, `LDY/STY`, `TAX`, `TXA`,
`TAY`, `TYA`, `TSX`, `TXS`, `INX`, `INY`, `DEX`, `DEY`, `INC`, `DEC`,
`ADC`, `SBC`, `AND imm/zp/abs`, `ORA`, `EOR`, `BIT`, `CMP`, `CPX`,
`CPY`, `JMP abs`, `JSR abs`, `RTS`, `RTI`, `BCC`, `BCS`, `BEQ`, `BNE`,
`BMI`, `BPL`, `BVC`, `BVS`, `BRK`, `NOP`, `PHA`, `PLA`, `PHP`, `PLP`,
`CLC`, `SEC`.

### MSP430 (`crates/unlace-lift-msp430/src/lib.rs`)

`MOV`, `ADD`, `ADDC`, `SUB`, `SUBC`, `CMP`, `DADD`, `BIT`, `BIC`,
`BIS`, `XOR`, `AND`, `RRA`, `RRC`, `PUSH`, `SWPB`, `SXT`, `CALL`,
`RETI`, `JMP`, `JEQ`, `JNE`, `JC`, `JNC`, `JN`, `JGE`, `JL`,
emulated `NOP / RET / CLR / TST / INC / DEC / BR`.

### V850 (`crates/unlace-lift-v850/src/lib.rs`)

`MOV reg,reg`, `MOV imm,reg`, `MOVEA imm16,reg,reg`,
`LD.B/H/W disp,reg`, `ST.B/H/W reg,disp`, `ADD`, `SUB`, `AND`, `OR`,
`XOR`, `CMP`, `MUL`, `SHL`, `SHR`, `SAR`, `JMP reg`, `JR disp22`,
`JARL disp22,reg`, `BR cc disp9`, `RET`, `EI`, `DI`, `LDSR`, `STSR`,
`CALLT`, `CTRET`, `HALT`, `NOP`.

### ARC (`crates/unlace-lift-arc/src/lib.rs`)

`mov`, `ld`, `st`, `add`, `sub`, `and`, `or`, `xor`, `cmp`, `lsl`,
`lsr`, `asr`, `j`, `jl`, `b cc`, `bl`, `mul`, `mulh`, `flag`, `nop`,
`brk`.

### STM8 (`crates/unlace-lift-stm8/src/lib.rs`)

`LD`, `LDW`, `MOV`, `ADD`, `ADC`, `SUB`, `SBC`, `CP`, `AND`, `OR`,
`XOR`, `INC`, `DEC`, `SLL`, `SRL`, `SRA`, `JP`, `JRA`, `JREQ`, `JRNE`,
`JRC`, `JRNC`, `CALL`, `RET`, `RETF`, `RIM`, `SIM`, `HALT`, `WFI`, `NOP`.

### RX (`crates/unlace-lift-rx/src/lift.rs`)

`MOV`, `MOVU`, `ADD`, `SUB`, `CMP`, `MUL`, `DIV`, `AND`, `OR`, `XOR`,
`NOT`, `SHLR`, `SHAR`, `SHLL`, `BSET`, `BCLR`, `BTST`, `JMP`, `JSR`,
`RTS`, `RTE`, `BRA disp`, `BEQ`, `BNE`, `BC`, `BNC`, `BPZ`, `BN`,
`NOP`, `WAIT`.

### TriCore (`crates/unlace-lift-tricore/src/lib.rs`)

`MOV`, `LD.B/H/W`, `ST.B/H/W`, `ADD`, `SUB`, `MUL`, `AND`, `OR`, `XOR`,
`SH`, `SHA`, `J`, `JEQ`, `JNE`, `JLT`, `JGE`, `CALL`, `RET`, `RFE`,
`NOP`, `DSYNC`, `ENABLE`, `DISABLE`.

### Hexagon (`crates/unlace-lift-hexagon/src/lib.rs`)

Single-instruction-per-packet first: `A2_add`, `A2_sub`, `A2_and`,
`A2_or`, `A2_xor`, `A2_addi`, `S2_lsr_r_r`, `S2_asl_r_r`, `L2_loadw_io`,
`S2_storew_io`, `J2_jump`, `J2_jumpr`, `J2_call`, `J2_callr`,
`J2_endloop0`, `C2_cmpeq`, `C2_cmpgt`.

### TI C6x (`crates/unlace-lift-tic6x/src/lib.rs`)

`MV`, `ADD`, `SUB`, `MPY`, `AND`, `OR`, `XOR`, `SHL`, `SHR`, `LDW`,
`STW`, `LDB`, `STB`, `B reg`, `B label`, `BNOP`, `CALLP`, `NOP`,
predicate suffixes `[cond]`.

### TI C28x (`crates/unlace-lift-ti/src/lib.rs`)

`MOV`, `MOVL`, `ADD`, `SUB`, `MPY`, `AND`, `OR`, `XOR`, `SBF`, `B`,
`BF`, `LB`, `LC`, `LCR`, `LRET`, `RET`, `RETE`, `PUSH`, `POP`, `NOP`,
`IDLE`.

### 8051 (`crates/unlace-lift-8051/src/lib.rs`)

`MOV`, `MOVX`, `MOVC`, `ADD`, `ADDC`, `SUBB`, `INC`, `DEC`, `MUL AB`,
`DIV AB`, `ANL`, `ORL`, `XRL`, `CLR A`, `CPL A`, `RL`, `RLC`, `RR`,
`RRC`, `JMP @A+DPTR`, `LJMP`, `AJMP`, `SJMP`, `JZ`, `JNZ`, `JC`,
`JNC`, `CJNE`, `DJNZ`, `LCALL`, `ACALL`, `RET`, `RETI`, `NOP`.

### PIC16 (`crates/unlace-lift-pic/src/lib.rs`)

`MOVLW`, `MOVWF`, `MOVF`, `ADDLW`, `ADDWF`, `SUBLW`, `SUBWF`, `ANDLW`,
`ANDWF`, `IORLW`, `IORWF`, `XORLW`, `XORWF`, `CLRF`, `CLRW`, `INCF`,
`DECF`, `RLF`, `RRF`, `BCF`, `BSF`, `BTFSC`, `BTFSS`, `GOTO`, `CALL`,
`RETURN`, `RETLW`, `RETFIE`, `NOP`, `SLEEP`, `CLRWDT`.

### GPU/VM tier (priority 4)

For `AmdGpu`, `Agx`/`AppleAgx`, `NvidiaSass`/`NvSass`, `Sharc`/`SharcBlackfin`,
`SpirV`, `Evm`: cover the 15 most common opcodes per arch. These are
research targets; the ISA references are less complete and the
fixture exposure is minimal. Use the same template.

## Dedup pass

Before starting the sweep:

1. In `crates/unlace-ir/src/arch.rs`, audit `Mos6502` vs `M6502` and
   `Agx` vs `AppleAgx` vs `NvidiaSass` vs `NvSass`. Choose one
   canonical name per ISA. Update `Display` impl, `arch_support.rs`
   `support_tier`, and every fixture/test that references the alias.
2. Add a deprecation test that asserts the alias variant is
   `#[deprecated]` (Rust 1.81+) or is at least documented as removed.

## Acceptance

For each architecture:

- ≥ 30 opcodes lifted (priority 1–3) or ≥ 15 (priority 4).
- Each opcode has at least one unit test.
- `arch_support.rs::support_tier(arch)` returns `Beta`.
- `docs/status.md` regenerated to reflect the new tier.
- `cargo test --workspace --lib` stays green.
- `cargo xtask lint-determinism` stays clean.

## Estimated effort

25 days of focused work (post-dedup).
