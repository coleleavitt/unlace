# Learnings

## Task 32: ARCv2 Lifter (Custom Decoder)

### ARCv2 Encoding
- **Middle-endian byte order**: each 16-bit halfword is stored big-endian, but 32-bit instructions place the most-significant halfword first. This is unique among RISC architectures.
- **Format detection**: Top 5 bits of the first halfword (`hw0 >> 11`) determine the major opcode. Major opcodes 0x00-0x0B are 32-bit; 0x0C-0x1F are 16-bit (ARCompact).
- **Register field encoding is fragmented**: The B register field is split across bits [26:24] and [14:12] (3+3), requiring reassembly. A and C fields are more straightforward in the low halfword.

### Major opcode map (32-bit)
- 0x00: B (unconditional/conditional branch, s21 offset)
- 0x01: BL (branch-and-link, s25 offset)
- 0x02: LD (load, base+s9 offset)
- 0x03: ST (store, base+s9 offset)
- 0x04: ALU reg-reg/reg-imm (ADD, SUB, AND, OR, XOR, ASL, LSR, ASR, CMP, MOV via subop)
- 0x05: Extension ops (J, JL, J[BLINK] for return)
- 0x08-0x0B: BR<cc> (branch on register compare)

### Major opcode map (16-bit ARCompact)
- 0x0C: LD_S (short load)
- 0x0D: ADD_S/SUB_S a,b,c
- 0x0E: MOV_S/CMP_S/ADD_S with high register
- 0x0F: General 16-bit ops (J_S, JL_S, NOP_S, shifts, bitwise)
- 0x18: ST_S (short store)
- 0x19: LD_S SP-relative
- 0x1C: ADD_S b,b,u7
- 0x1D: MOV_S b,u8
- 0x1E: B_S (short branch)
- 0x1F: BL_S (short branch-and-link)

### Implementation notes
- CMP modeled as INT_SUB writing to a unique temp (flags not yet tracked in STATUS32).
- MOV modeled as COPY.
- NOP modeled as COPY of zero to a temp.
- Delay slots not modeled in MVP.
- ADC (add-with-carry) simplified to ADD for MVP.
- r28=SP, r31=BLINK (return address) are the key well-known registers.
- The `lift_binop_sized` helper must take an explicit `len` parameter since all register varnodes are 4-byte regardless of instruction width.

## Task 28: RISC-V RV64I Lifter via Capstone

### Capstone RISC-V Pseudo-Instruction Handling

Capstone 0.14 aggressively folds RISC-V pseudo-instructions, changing both the
mnemonic string and the operand layout while keeping the same instruction ID.
You cannot rely on a fixed operand pattern per instruction ID.

Key pseudo-instruction mappings:

| Encoding | ID | Mnemonic | Operands |
|---|---|---|---|
| `addi x0, x0, 0` | ADDI(2) | `nop` | `[]` |
| `addi x1, x2, 0` | ADDI(2) | `mv` | `[Reg(x1), Reg(x2)]` |
| `addi x1, x0, 42` | ADDI(2) | `addi` | `[Reg(x1), Reg(x0), Imm(42)]` |
| `jal x1, +8` (rd=ra) | JAL(206) | `jal` | `[Imm(target)]` — rd=ra implicit |
| `jal x5, +8` (rd!=ra) | JAL(206) | `jal` | `[Reg(x5), Imm(target)]` |
| `jalr x0, 0(x1)` | JALR(207) | `ret` | `[]` |
| `jalr x0, 0(x5)` | JALR(207) | `jr` | `[Reg(x5)]` — rd=x0 implicit |
| `jalr x1, 0(x2)` (rd=ra) | JALR(207) | `jalr` | `[Reg(x2)]` — rd=ra implicit |
| `jalr x1, x2, 4` | JALR(207) | `jalr` | `[Reg(x1), Reg(x2), Imm(4)]` |

The mnemonic string (`"jr"` vs `"jalr"`) must be used to disambiguate the 1-operand
JALR form since `jr rs` (rd=x0) and `jalr rs` (rd=ra) both produce `ops=[Reg(rs)]`.

### Capstone RegId Mapping

Capstone RISC-V registers start at 1: `RISCV_REG_X0=1`, `RISCV_REG_X1=2`, etc.
Register file offset = `(reg_id - 1) * 8`.

### x0 Hardwired Zero

Reads from x0 produce `Varnode::constant(0, 8)`. Writes to x0 are silently dropped
(`cs_reg_to_varnode()` returns `None`). This keeps the IR clean.

### Send + Sync for Capstone

`Capstone` does not impl `Send + Sync` by default, but each `disasm_count` call is
self-contained, so `unsafe impl Send/Sync` is safe for the lifter struct.

## Task 36: Switch Table Recovery

### Pattern Detection
- Switch tables in decompiled code manifest as `BRANCHIND` terminators with ≥2
  `IndirectJump` successors in the CFG. A single `IndirectJump` to the unknown
  sink means the targets were not resolved — skip it.
- The canonical jump table access pattern is:
  `target = LOAD(base_const + index * entry_size)` where `entry_size` ∈ {1,2,4,8}.
  Scaling may use `INT_MULT(index, size)` or `INT_LEFT(index, log2(size))`.

### Implementation Notes
- Primary detection lives in `structurer.rs` as `try_structure_switch()` on
  `StructureCtx`, checked before `try_structure_if()` in both `structure_region()`
  and `structure_until()`.
- `recover_switch_index()` traces backwards from `BRANCHIND.input[0]` through
  `LOAD` → `INT_ADD` → `INT_MULT`/`INT_LEFT` to find the index variable. If
  tracing fails, the BRANCHIND input itself becomes the switch condition.
- `find_switch_join()` intersects reachable sets from all case targets to find
  the common post-dominator.
- Last case target is treated as `default` when there are >2 targets.
- `switch_recovery.rs` provides a post-pass `recover_switches()` that walks
  HIR to catch any residual BRANCHIND statements not caught during structuring.
- `var_map` key `(BlockId, insn_index, VarnodeSlot)` is used for SSA lookups;
  constants identified via `SpaceId::Const`.
