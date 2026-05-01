#!/usr/bin/env python3
"""Hand-craft a minimal RISC-V RV64I little-endian ELF with symbol table.

Produces fixtures/riscv64_features.elf — a statically linked RV64I ELF
containing 4 functions exercising: ADDI, ADD, SUB, LW, SW, BEQ, JAL,
JALR, LUI, AND, OR, XOR, SLT, SLTI, ANDI, ORI, LD, SD, AUIPC.

Layout:
  0x000  ELF header          (64 bytes)
  0x040  Program header       (56 bytes)
  0x100  .text section        (code)
  0x200  .symtab section      (symbol table)
  0x400  .strtab section      (string table)
  0x500  .shstrtab section    (section-name string table)
  0x600  Section headers      (5 × 64 = 320 bytes)
"""

import struct
from pathlib import Path

VADDR_BASE = 0x10000
TEXT_FILE_OFF = 0x100
TEXT_VADDR = VADDR_BASE + TEXT_FILE_OFF

# RISC-V RV64I instruction encoding (little-endian, 32-bit fixed width)

def r_type(opcode, rd, funct3, rs1, rs2, funct7):
    w = (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
    return struct.pack("<I", w)

def i_type(opcode, rd, funct3, rs1, imm12):
    imm = imm12 & 0xFFF
    w = (imm << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
    return struct.pack("<I", w)

def s_type(opcode, funct3, rs1, rs2, imm12):
    imm = imm12 & 0xFFF
    imm_11_5 = (imm >> 5) & 0x7F
    imm_4_0 = imm & 0x1F
    w = (imm_11_5 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (imm_4_0 << 7) | opcode
    return struct.pack("<I", w)

def b_type(opcode, funct3, rs1, rs2, imm13):
    imm = imm13 & 0x1FFF
    bit12 = (imm >> 12) & 1
    bit11 = (imm >> 11) & 1
    bits_10_5 = (imm >> 5) & 0x3F
    bits_4_1 = (imm >> 1) & 0xF
    w = (bit12 << 31) | (bits_10_5 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (bits_4_1 << 8) | (bit11 << 7) | opcode
    return struct.pack("<I", w)

def u_type(opcode, rd, imm20):
    w = ((imm20 & 0xFFFFF) << 12) | (rd << 7) | opcode
    return struct.pack("<I", w)

def j_type_insn(opcode, rd, imm21):
    imm = imm21 & 0x1FFFFF
    bit20 = (imm >> 20) & 1
    bits_10_1 = (imm >> 1) & 0x3FF
    bit11 = (imm >> 11) & 1
    bits_19_12 = (imm >> 12) & 0xFF
    w = (bit20 << 31) | (bits_10_1 << 21) | (bit11 << 20) | (bits_19_12 << 12) | (rd << 7) | opcode
    return struct.pack("<I", w)

# Registers
ZERO, RA, SP, GP, TP = 0, 1, 2, 3, 4
T0, T1, T2 = 5, 6, 7
S0, S1 = 8, 9  # s0 = fp
A0, A1, A2, A3, A4, A5 = 10, 11, 12, 13, 14, 15
A6, A7 = 16, 17
S2, S3, S4, S5, S6, S7, S8, S9, S10, S11 = 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
T3, T4, T5, T6 = 28, 29, 30, 31

# Opcodes
OP_LUI    = 0x37
OP_AUIPC  = 0x17
OP_JAL    = 0x6F
OP_JALR   = 0x67
OP_BRANCH = 0x63
OP_LOAD   = 0x03
OP_STORE  = 0x23
OP_OP_IMM = 0x13
OP_OP     = 0x33
OP_OP_IMM_32 = 0x1B
OP_OP_32  = 0x3B

# funct3 for branches
BEQ, BNE, BLT, BGE = 0, 1, 4, 5

# funct3 for loads/stores
LB, LH, LW, LD = 0, 1, 2, 3
SB, SH, SW, SD = 0, 1, 2, 3

# funct3 for ALU
ADD_SUB, SLL, SLT_F, SLTU, XOR_F, SRL_SRA, OR_F, AND_F = 0, 1, 2, 3, 4, 5, 6, 7

def nop():
    return i_type(OP_OP_IMM, ZERO, ADD_SUB, ZERO, 0)  # addi x0, x0, 0

# Function 1: _start — calls 3 test functions, then loops
start_code = b""
start_code += j_type_insn(OP_JAL, RA, 0)  # placeholder JAL arithmetic_test
start_code += j_type_insn(OP_JAL, RA, 0)  # placeholder JAL logic_test
start_code += j_type_insn(OP_JAL, RA, 0)  # placeholder JAL memory_test
start_code += j_type_insn(OP_JAL, ZERO, 0)  # j self (infinite loop) — placeholder

# Function 2: arithmetic_test — ADD, SUB, ADDI, SLT, SLTI, LUI, AUIPC
arith_off = len(start_code)
arith_code = b""
arith_code += i_type(OP_OP_IMM, T0, ADD_SUB, ZERO, 42)     # addi t0, zero, 42
arith_code += i_type(OP_OP_IMM, T1, ADD_SUB, ZERO, 17)     # addi t1, zero, 17
arith_code += r_type(OP_OP, T2, ADD_SUB, T0, T1, 0)        # add t2, t0, t1
arith_code += r_type(OP_OP, T3, ADD_SUB, T0, T1, 0x20)     # sub t3, t0, t1
arith_code += r_type(OP_OP, T4, SLT_F, T1, T0, 0)          # slt t4, t1, t0
arith_code += i_type(OP_OP_IMM, T5, SLT_F, T2, 100)        # slti t5, t2, 100
arith_code += u_type(OP_LUI, A0, 0x12345)                   # lui a0, 0x12345
arith_code += u_type(OP_AUIPC, A1, 0x00001)                 # auipc a1, 1
arith_code += i_type(OP_JALR, ZERO, 0, RA, 0)              # jalr zero, ra, 0 (ret)

# Function 3: logic_test — AND, OR, XOR, ANDI, ORI, BEQ, BNE
logic_off = arith_off + len(arith_code)
logic_code = b""
logic_code += i_type(OP_OP_IMM, T0, ADD_SUB, ZERO, 0xFF)    # addi t0, zero, 0xFF
logic_code += i_type(OP_OP_IMM, T1, ADD_SUB, ZERO, 0x0F)    # addi t1, zero, 0x0F
logic_code += r_type(OP_OP, T2, AND_F, T0, T1, 0)           # and t2, t0, t1
logic_code += r_type(OP_OP, T3, OR_F, T0, T1, 0)            # or t3, t0, t1
logic_code += r_type(OP_OP, T4, XOR_F, T0, T1, 0)           # xor t4, t0, t1
logic_code += i_type(OP_OP_IMM, T5, AND_F, T0, 0x0F0)       # andi t5, t0, 0xF0
logic_code += i_type(OP_OP_IMM, A0, OR_F, T0, 0x100)        # ori a0, t0, 0x100
logic_code += b_type(OP_BRANCH, BEQ, T2, ZERO, 8)           # beq t2, zero, +8
logic_code += nop()
logic_code += b_type(OP_BRANCH, BNE, T3, ZERO, 8)           # bne t3, zero, +8
logic_code += nop()
logic_code += i_type(OP_JALR, ZERO, 0, RA, 0)              # ret

# Function 4: memory_test — LW, SW, LD, SD, stack frame
mem_off = logic_off + len(logic_code)
mem_code = b""
mem_code += i_type(OP_OP_IMM, SP, ADD_SUB, SP, (-32) & 0xFFF)  # addi sp, sp, -32
mem_code += s_type(OP_STORE, SD, SP, RA, 24)                    # sd ra, 24(sp)
mem_code += s_type(OP_STORE, SD, SP, S0, 16)                    # sd s0, 16(sp)
mem_code += i_type(OP_OP_IMM, T0, ADD_SUB, ZERO, 0x42)         # addi t0, zero, 0x42
mem_code += s_type(OP_STORE, SW, SP, T0, 0)                     # sw t0, 0(sp)
mem_code += i_type(OP_LOAD, T1, LW, SP, 0)                      # lw t1, 0(sp)
mem_code += i_type(OP_OP_IMM, T2, SLT_F, T1, 100)              # slti t2, t1, 100
mem_code += b_type(OP_BRANCH, BEQ, T2, ZERO, 8)                # beq t2, zero, +8
mem_code += nop()
mem_code += i_type(OP_LOAD, S0, LD, SP, 16)                     # ld s0, 16(sp)
mem_code += i_type(OP_LOAD, RA, LD, SP, 24)                     # ld ra, 24(sp)
mem_code += i_type(OP_OP_IMM, SP, ADD_SUB, SP, 32)             # addi sp, sp, 32
mem_code += i_type(OP_JALR, ZERO, 0, RA, 0)                    # ret

# Patch JAL targets in _start
# JAL offset is PC-relative, signed
def patch_jal(rd, target_off, src_off):
    offset = target_off - src_off
    return j_type_insn(OP_JAL, rd, offset & 0x1FFFFF)

start_patched = b""
start_patched += patch_jal(RA, arith_off, 0)
start_patched += patch_jal(RA, logic_off, 4)
start_patched += patch_jal(RA, mem_off, 8)
start_patched += j_type_insn(OP_JAL, ZERO, 0)  # j self: offset=0

text = start_patched + arith_code + logic_code + mem_code

functions = {
    "_start":          (0, len(start_patched)),
    "arithmetic_test": (arith_off, len(arith_code)),
    "logic_test":      (logic_off, len(logic_code)),
    "memory_test":     (mem_off, len(mem_code)),
}

# ELF structures
shstrtab = b"\x00.text\x00.symtab\x00.strtab\x00.shstrtab\x00"

strtab = b"\x00"
sym_names = {}
for name in ["riscv64_features.S", "_start", "arithmetic_test", "logic_test", "memory_test"]:
    sym_names[name] = len(strtab)
    strtab += name.encode() + b"\x00"

# Elf64_Sym: st_name(4), st_info(1), st_other(1), st_shndx(2), st_value(8), st_size(8) — little-endian
def elf64_sym_le(name_idx, info, other, shndx, value, size):
    return struct.pack("<IBBHQQ", name_idx, info, other, shndx, value, size)

STB_LOCAL, STB_GLOBAL = 0, 1
STT_NOTYPE, STT_FILE, STT_FUNC = 0, 4, 2
def st_info(bind, typ): return (bind << 4) | typ

symtab = b""
symtab += elf64_sym_le(0, 0, 0, 0, 0, 0)
symtab += elf64_sym_le(sym_names["riscv64_features.S"], st_info(STB_LOCAL, STT_FILE), 0, 0xFFF1, 0, 0)
for name, (off, sz) in functions.items():
    symtab += elf64_sym_le(sym_names[name], st_info(STB_GLOBAL, STT_FUNC), 0, 1, TEXT_VADDR + off, sz)

EHDR_SIZE = 64
PHDR_SIZE = 56
SHDR_SIZE = 64

phdr_off = EHDR_SIZE
text_off = TEXT_FILE_OFF
symtab_off = 0x200
strtab_off = 0x400
shstrtab_off = 0x500
shdr_off = 0x600

text_end = text_off + len(text)

# ELF header (little-endian, 64-bit)
ehdr = struct.pack("<4sBBBBB7xHHIQQQIHHHHHH",
    b"\x7fELF",
    2,              # ELFCLASS64
    1,              # ELFDATA2LSB
    1,              # EI_VERSION
    0,              # ELFOSABI_NONE
    0,              # ABI version
    2,              # ET_EXEC
    0xF3,           # EM_RISCV
    1,              # e_version
    TEXT_VADDR,     # e_entry
    phdr_off,       # e_phoff
    shdr_off,       # e_shoff
    0x0005,         # e_flags: RVC + double-float ABI (typical)
    EHDR_SIZE,
    PHDR_SIZE,
    1,              # e_phnum
    SHDR_SIZE,
    5,              # e_shnum
    4,              # e_shstrndx
)

# Program header
phdr = struct.pack("<IIQQQQQQ",
    1,              # PT_LOAD
    5,              # PF_R | PF_X
    0,              # p_offset
    VADDR_BASE,     # p_vaddr
    VADDR_BASE,     # p_paddr
    text_end,       # p_filesz
    text_end,       # p_memsz
    0x1000,         # p_align
)

def shdr(name_off, sh_type, flags, addr, offset, size, link, info, align, entsize):
    return struct.pack("<IIQQQQIIqq", name_off, sh_type, flags, addr, offset, size, link, info, align, entsize)

SHT_NULL, SHT_PROGBITS, SHT_SYMTAB, SHT_STRTAB = 0, 1, 2, 3
SHF_ALLOC, SHF_EXECINSTR = 2, 4

shdrs = b""
shdrs += shdr(0, SHT_NULL, 0, 0, 0, 0, 0, 0, 0, 0)
shdrs += shdr(1, SHT_PROGBITS, SHF_ALLOC | SHF_EXECINSTR, TEXT_VADDR, text_off, len(text), 0, 0, 4, 0)
shdrs += shdr(7, SHT_SYMTAB, 0, 0, symtab_off, len(symtab), 3, 2, 8, 24)
shdrs += shdr(15, SHT_STRTAB, 0, 0, strtab_off, len(strtab), 0, 0, 1, 0)
shdrs += shdr(23, SHT_STRTAB, 0, 0, shstrtab_off, len(shstrtab), 0, 0, 1, 0)

buf = bytearray(shdr_off + len(shdrs))
buf[0:len(ehdr)] = ehdr
buf[phdr_off:phdr_off+len(phdr)] = phdr
buf[text_off:text_off+len(text)] = text
buf[symtab_off:symtab_off+len(symtab)] = symtab
buf[strtab_off:strtab_off+len(strtab)] = strtab
buf[shstrtab_off:shstrtab_off+len(shstrtab)] = shstrtab
buf[shdr_off:shdr_off+len(shdrs)] = shdrs

out = Path(__file__).resolve().parent.parent / "riscv64_features.elf"
out.write_bytes(bytes(buf))
print(f"wrote {len(buf)} bytes to {out}")
