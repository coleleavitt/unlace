# Completion §8 — Remaining Stub-Tier Lifter Completions

Self-contained handoff for the GPU/VM-class architectures still at the
`Stub` tier after §3 + §5.13. The template from
`COMPLETION_03_LIFTERS.md` applies — each lifter needs ≥ 15 opcodes
(GPU/VM threshold) or ≥ 30 opcodes (general-purpose threshold), each
backed by a per-opcode unit test, and an `arch_support.rs` tier flip.

## Scope

Nine architectures still at `Stub`:

- §8.1 EVM (Ethereum Virtual Machine)
- §8.2 TI C28x (decoder exists, needs test backfill)
- §8.3 TI C6x (fresh decoder)
- §8.4 SHARC + SHARC Blackfin
- §8.5 AppleAgx + Agx
- §8.6 NvidiaSass
- §8.7 AmdGpu
- §8.8 SpirV

## §8.1 EVM (2 days)

Ethereum bytecode is a stack machine with 256-bit words. Each opcode
is a single byte. The top-30 to cover for usable decompilation:

`STOP (0x00)`, `ADD (0x01)`, `MUL (0x02)`, `SUB (0x03)`, `DIV (0x04)`,
`SDIV (0x05)`, `MOD (0x06)`, `SMOD (0x07)`, `ADDMOD (0x08)`,
`MULMOD (0x09)`, `EXP (0x0A)`, `LT (0x10)`, `GT (0x11)`, `SLT (0x12)`,
`SGT (0x13)`, `EQ (0x14)`, `ISZERO (0x15)`, `AND (0x16)`, `OR (0x17)`,
`XOR (0x18)`, `NOT (0x19)`, `BYTE (0x1A)`, `SHL (0x1B)`, `SHR (0x1C)`,
`SAR (0x1D)`, `SHA3 (0x20)`, `ADDRESS (0x30)`, `BALANCE (0x31)`,
`CALLER (0x33)`, `CALLVALUE (0x34)`, `CALLDATALOAD (0x35)`,
`CALLDATASIZE (0x36)`, `CALLDATACOPY (0x37)`, `MLOAD (0x51)`,
`MSTORE (0x52)`, `MSTORE8 (0x53)`, `SLOAD (0x54)`, `SSTORE (0x55)`,
`JUMP (0x56)`, `JUMPI (0x57)`, `PC (0x58)`, `MSIZE (0x59)`,
`GAS (0x5A)`, `JUMPDEST (0x5B)`, `PUSH1..PUSH32 (0x60..0x7F)`,
`DUP1..DUP16 (0x80..0x8F)`, `SWAP1..SWAP16 (0x90..0x9F)`,
`LOG0..LOG4 (0xA0..0xA4)`, `RETURN (0xF3)`, `REVERT (0xFD)`.

**Approach:** model the EVM stack with a synthetic register file
(`sp`, `gas`, `pc` + 32 256-bit stack-slot pseudo-regs). Most opcodes
lift to a single IR op feeding/consuming `mem[sp+N]`.

**Tests:** ≥ 30, one per top-level mnemonic family. PUSHn / DUPn /
SWAPn / LOGn each get one test that exercises a representative N.

**File:** existing `crates/unlace-lift-evm/src/`.

## §8.2 TI C28x (1 day backfill)

`crates/unlace-lift-ti/src/lib.rs` is 764 lines with 4 tests. The
decoder already covers ~35 opcodes; the work is adding 20+ per-opcode
unit tests to back the existing dispatch. Use the same pattern as the
PIC16/8051 work.

## §8.3 TI C6x (2 days fresh)

`crates/unlace-lift-tic6x/src/lib.rs` is a 102-line stub. C6x is a
VLIW (`||` parallel instruction lanes). For Beta tier cover the
common scalar shapes only (15 mnemonics — GPU/VM threshold):

`MV`, `ADD`, `SUB`, `MPY`, `AND`, `OR`, `XOR`, `SHL`, `SHR`, `LDW`,
`STW`, `LDB`, `STB`, `B reg`, `B label`, `NOP`.

**File:** rewrite `crates/unlace-lift-tic6x/src/lib.rs`.

**Tests:** 15+.

## §8.4 SHARC + SHARC Blackfin (2 days)

Analog Devices SHARC is a 48-bit ISA; the existing `unlace-lift-sharc`
covers 30 lines of stub. Blackfin is a 32-bit cousin. For Beta cover
15 mnemonics per arch:

SHARC: `ADD`, `SUB`, `MUL`, `AND`, `OR`, `XOR`, `LSHIFT`, `ASHIFT`,
`COMPUTE-then-JUMP`, `JUMP`, `CALL`, `RETI`, `RTI`, `NOP`, `IDLE`.

Blackfin: `R0 = R1`, `R0 += R1`, `R0 = R1 + R2`, `R0 = R1 - R2`,
`R0 = R1 & R2`, `R0 = R1 | R2`, `LOAD`, `STORE`, `IF CC JUMP`,
`JUMP rel`, `CALL`, `RTS`, `RTI`, `NOP`, `IDLE`.

**Files:** `crates/unlace-lift-sharc/src/lib.rs` for both (the existing
crate dispatches Sharc vs SharcBlackfin internally).

## §8.5 AppleAgx + Agx (2 days)

Apple-designed GPU (M-series) and the generic "Agx" tag for non-Apple
AGX-class targets. The ISA is partially undocumented; cover the
publicly-reverse-engineered shapes:

- `iadd`, `isub`, `imul`, `fadd`, `fsub`, `fmul`, `mov`, `ld`, `st`,
  `branch`, `wait`, `return`, `barrier`, `texld`, `disc`.

15-opcode target. Most ops lift to `Callother` because the SIMD/vector
semantics don't fit basic IntAdd/Sub.

**Files:** `crates/unlace-lift-appleagx/src/lib.rs`,
`crates/unlace-lift-agx/src/lib.rs`.

## §8.6 NvidiaSass (2 days)

NVIDIA Streaming Assembler — the Volta+ ISA. Each instruction is
128 bits. Cover the top 15:

`IADD`, `ISUB`, `IMUL`, `FADD`, `FMUL`, `FFMA`, `MOV`, `LDG`, `STG`,
`LDS`, `STS`, `BRA`, `CALL`, `RET`, `EXIT`.

**File:** `crates/unlace-lift-sass/src/lib.rs`.

## §8.7 AmdGpu (2 days)

GCN/RDNA SOP1/SOP2/SOPC/VOP1/VOP2 form families. Cover 15:

`s_add_u32`, `s_sub_u32`, `s_mul_i32`, `s_and_b32`, `s_or_b32`,
`s_xor_b32`, `s_mov_b32`, `s_load_dword`, `s_store_dword`,
`s_branch`, `s_cbranch_execz`, `s_endpgm`, `v_add_f32`,
`v_mul_f32`, `v_mov_b32`.

**File:** `crates/unlace-lift-amdgpu/src/lib.rs`.

## §8.8 SpirV (2 days)

SPIR-V is a serialised SSA IR with versioned op enums. Cover the top
20 (overshoots 15 because SPIR-V has many small ops):

`OpNop`, `OpReturn`, `OpReturnValue`, `OpStore`, `OpLoad`, `OpVariable`,
`OpFunction`, `OpFunctionEnd`, `OpLabel`, `OpBranch`,
`OpBranchConditional`, `OpIAdd`, `OpISub`, `OpIMul`, `OpFAdd`,
`OpFMul`, `OpAccessChain`, `OpCompositeExtract`, `OpFunctionCall`,
`OpKill`.

**File:** `crates/unlace-lift-spirv/src/lib.rs`.

## Definition of done

Per arch:

- Decoder produces real `IrOp` mappings (or `Callother` where IR has
  no equivalent — explicitly preferred over `Unimplemented`).
- ≥ 15 (GPU/VM) or ≥ 30 (general-purpose) opcodes covered.
- One test per opcode.
- `arch_support.rs::support_tier` flipped to `Beta`.
- `docs/status.md` matrix updated.

## Estimated effort

- §8.1 EVM: 2 days.
- §8.2 TI C28x backfill: 1 day.
- §8.3 TI C6x: 2 days.
- §8.4 SHARC family: 2 days.
- §8.5 AppleAgx/Agx: 2 days.
- §8.6 NvidiaSass: 2 days.
- §8.7 AmdGpu: 2 days.
- §8.8 SpirV: 2 days.

Total: ≈ 15 days of focused work.

## Order

Pick by RE frequency:

1. **EVM** — high public demand, simplest stack-machine ISA.
2. **TI C28x backfill** — quickest tier promotion.
3. **TI C6x** — common DSP target.
4. **SHARC family** — embedded DSP, smaller demand.
5. **AppleAgx/Agx** — GPU reverse-engineering interest.
6. **NvidiaSass / AmdGpu / SpirV** — research-heavy; least RE
   churn.

Each row is independently mergeable.
