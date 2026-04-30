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
