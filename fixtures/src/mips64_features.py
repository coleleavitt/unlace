#!/usr/bin/env python3
"""Hand-craft a minimal MIPS64 big-endian ELF with symbol table.

Produces fixtures/mips64_features.elf — a statically linked MIPS64 ELF
containing 4 functions exercising: ADDIU, LW, SW, BEQ, JAL, JR, LUI,
AND, OR, SLT, DADDIU, LD, SD, DADDU, SUBU, NOR, ANDI, ORI, XORI.

Layout (all offsets in hex):
  0x000  ELF header          (64 bytes)
  0x040  Program header       (56 bytes)
  0x100  .text section        (code)
  0x200  .symtab section      (symbol table)
  0x400  .strtab section      (string table)
  0x500  .shstrtab section    (section-name string table)
  0x600  Section headers      (5 × 64 = 320 bytes)
"""

import struct
import sys
from pathlib import Path

# ---------- constants ----------
VADDR_BASE = 0x120000000  # typical MIPS64 load address
TEXT_FILE_OFF = 0x100
TEXT_VADDR = VADDR_BASE + TEXT_FILE_OFF

# ---------- MIPS64 instruction encoding helpers (big-endian) ----------

def r_type(op, rs, rt, rd, shamt, funct):
    """Encode R-type: op(6) rs(5) rt(5) rd(5) shamt(5) funct(6)"""
    w = (op << 26) | (rs << 21) | (rt << 16) | (rd << 11) | (shamt << 5) | funct
    return struct.pack(">I", w)

def i_type(op, rs, rt, imm):
    """Encode I-type: op(6) rs(5) rt(5) imm(16)"""
    w = (op << 26) | (rs << 21) | (rt << 16) | (imm & 0xFFFF)
    return struct.pack(">I", w)

def j_type(op, target):
    """Encode J-type: op(6) target(26)"""
    w = (op << 26) | (target & 0x3FFFFFF)
    return struct.pack(">I", w)

# Register aliases
ZERO, AT, V0, V1 = 0, 1, 2, 3
A0, A1, A2, A3 = 4, 5, 6, 7
T0, T1, T2, T3, T4, T5, T6, T7 = 8, 9, 10, 11, 12, 13, 14, 15
S0, S1, S2, S3, S4, S5, S6, S7 = 16, 17, 18, 19, 20, 21, 22, 23
T8, T9 = 24, 25
SP, FP, RA = 29, 30, 31

# Opcodes
OP_SPECIAL = 0x00
OP_ADDIU   = 0x09
OP_DADDIU  = 0x19
OP_LW      = 0x23
OP_SW      = 0x2B
OP_LD      = 0x37
OP_SD      = 0x3F
OP_BEQ     = 0x04
OP_BNE     = 0x05
OP_LUI     = 0x0F
OP_ANDI    = 0x0C
OP_ORI     = 0x0D
OP_XORI    = 0x0E
OP_SLTI    = 0x0A
OP_JAL     = 0x03

# SPECIAL function codes
FN_JR      = 0x08
FN_JALR    = 0x09
FN_ADDU    = 0x21
FN_SUBU    = 0x23
FN_DADDU   = 0x2D
FN_AND     = 0x24
FN_OR      = 0x25
FN_NOR     = 0x27
FN_SLT     = 0x2A
FN_SLL     = 0x00  # NOP when rd=rs=rt=0

def nop():
    return r_type(OP_SPECIAL, 0, 0, 0, 0, FN_SLL)

# ---------- build code ----------

functions = {}  # name -> (offset_in_text, code_bytes)

# Function 1: _start — calls the 3 test functions, then loops forever
# Offset 0 in .text
start_code = b""
# JAL arithmetic_test  (target will be patched)
start_code += j_type(OP_JAL, 0)  # placeholder
start_code += nop()               # branch delay slot
# JAL logic_test
start_code += j_type(OP_JAL, 0)  # placeholder
start_code += nop()
# JAL memory_test
start_code += j_type(OP_JAL, 0)  # placeholder
start_code += nop()
# Infinite loop: BEQ $zero, $zero, -1 (self)
start_code += i_type(OP_BEQ, ZERO, ZERO, 0xFFFF)  # branch to self
start_code += nop()

# Function 2: arithmetic_test — ADDIU, DADDIU, DADDU, SUBU, SLT
arith_off = len(start_code)
arith_code = b""
arith_code += i_type(OP_ADDIU, ZERO, T0, 42)       # t0 = 42
arith_code += i_type(OP_ADDIU, ZERO, T1, 17)       # t1 = 17
arith_code += r_type(OP_SPECIAL, T0, T1, T2, 0, FN_DADDU)  # t2 = t0 + t1
arith_code += r_type(OP_SPECIAL, T0, T1, T3, 0, FN_SUBU)   # t3 = t0 - t1
arith_code += r_type(OP_SPECIAL, T1, T0, T4, 0, FN_SLT)    # t4 = (t1 < t0)
arith_code += i_type(OP_DADDIU, T2, T5, 100)       # t5 = t2 + 100
arith_code += r_type(OP_SPECIAL, RA, 0, 0, 0, FN_JR)  # jr $ra
arith_code += nop()

# Function 3: logic_test — AND, OR, NOR, ANDI, ORI, XORI, LUI, BEQ
logic_off = arith_off + len(arith_code)
logic_code = b""
logic_code += i_type(OP_LUI, 0, T0, 0x1234)         # t0 = 0x1234_0000
logic_code += i_type(OP_ORI, T0, T0, 0x5678)         # t0 |= 0x5678
logic_code += i_type(OP_ADDIU, ZERO, T1, 0x00FF)     # t1 = 0xFF
logic_code += r_type(OP_SPECIAL, T0, T1, T2, 0, FN_AND)  # t2 = t0 & t1
logic_code += r_type(OP_SPECIAL, T0, T1, T3, 0, FN_OR)   # t3 = t0 | t1
logic_code += r_type(OP_SPECIAL, T0, T1, T4, 0, FN_NOR)  # t4 = ~(t0 | t1)
logic_code += i_type(OP_ANDI, T0, T5, 0x0F0F)        # t5 = t0 & 0x0F0F
logic_code += i_type(OP_XORI, T0, T6, 0xFFFF)        # t6 = t0 ^ 0xFFFF
logic_code += i_type(OP_BEQ, T2, ZERO, 1)            # if t2==0 skip next
logic_code += nop()                                    # delay slot
logic_code += r_type(OP_SPECIAL, RA, 0, 0, 0, FN_JR)  # jr $ra
logic_code += nop()

# Function 4: memory_test — LW, SW, LD, SD, ADDIU (stack frame)
mem_off = logic_off + len(logic_code)
mem_code = b""
mem_code += i_type(OP_DADDIU, SP, SP, (-32) & 0xFFFF)  # sp -= 32
mem_code += i_type(OP_SD, SP, RA, 24)                   # sd $ra, 24($sp)
mem_code += i_type(OP_SD, SP, FP, 16)                   # sd $fp, 16($sp)
mem_code += i_type(OP_ADDIU, ZERO, T0, 0x0042)          # t0 = 0x42
mem_code += i_type(OP_SW, SP, T0, 0)                    # sw $t0, 0($sp)
mem_code += i_type(OP_LW, SP, T1, 0)                    # lw $t1, 0($sp)
mem_code += i_type(OP_SLTI, T1, T2, 100)                # t2 = (t1 < 100)
mem_code += i_type(OP_BNE, T2, ZERO, 1)                 # if t2!=0 skip
mem_code += nop()                                        # delay slot
mem_code += i_type(OP_LD, SP, FP, 16)                   # ld $fp, 16($sp)
mem_code += i_type(OP_LD, SP, RA, 24)                   # ld $ra, 24($sp)
mem_code += i_type(OP_DADDIU, SP, SP, 32)               # sp += 32
mem_code += r_type(OP_SPECIAL, RA, 0, 0, 0, FN_JR)     # jr $ra
mem_code += nop()

# Patch JAL targets in _start
# JAL target = (vaddr >> 2) & 0x3FFFFFF
arith_target = (TEXT_VADDR + arith_off) >> 2
logic_target = (TEXT_VADDR + logic_off) >> 2
mem_target   = (TEXT_VADDR + mem_off) >> 2

start_code_patched = b""
start_code_patched += j_type(OP_JAL, arith_target)
start_code_patched += nop()
start_code_patched += j_type(OP_JAL, logic_target)
start_code_patched += nop()
start_code_patched += j_type(OP_JAL, mem_target)
start_code_patched += nop()
start_code_patched += i_type(OP_BEQ, ZERO, ZERO, 0xFFFF)
start_code_patched += nop()

text = start_code_patched + arith_code + logic_code + mem_code

functions = {
    "_start":          (0, len(start_code_patched)),
    "arithmetic_test": (arith_off, len(arith_code)),
    "logic_test":      (logic_off, len(logic_code)),
    "memory_test":     (mem_off, len(mem_code)),
}

# ---------- ELF structures ----------

# String tables
shstrtab = b"\x00.text\x00.symtab\x00.strtab\x00.shstrtab\x00"
# offsets: .text=1, .symtab=7, .strtab=15, .shstrtab=23

strtab = b"\x00"
sym_names = {}
for name in ["mips64_features.S", "_start", "arithmetic_test", "logic_test", "memory_test"]:
    sym_names[name] = len(strtab)
    strtab += name.encode() + b"\x00"

# Symbol table entries (24 bytes each for ELF64, big-endian)
# struct Elf64_Sym { st_name(4), st_info(1), st_other(1), st_shndx(2), st_value(8), st_size(8) }
def elf64_sym_be(name_idx, info, other, shndx, value, size):
    return struct.pack(">IBBHQQ", name_idx, info, other, shndx, value, size)

STB_LOCAL  = 0
STB_GLOBAL = 1
STT_NOTYPE = 0
STT_FILE   = 4
STT_FUNC   = 2

def st_info(bind, typ):
    return (bind << 4) | typ

symtab = b""
# Entry 0: null
symtab += elf64_sym_be(0, 0, 0, 0, 0, 0)
# Entry 1: FILE
symtab += elf64_sym_be(sym_names["mips64_features.S"], st_info(STB_LOCAL, STT_FILE), 0, 0xFFF1, 0, 0)  # SHN_ABS=0xFFF1
# Entries 2-5: functions (GLOBAL FUNC)
for name, (off, sz) in functions.items():
    symtab += elf64_sym_be(sym_names[name], st_info(STB_GLOBAL, STT_FUNC), 0, 1, TEXT_VADDR + off, sz)

# ---------- assemble file ----------

EHDR_SIZE = 64
PHDR_SIZE = 56
SHDR_SIZE = 64

# File layout
phdr_off = EHDR_SIZE                    # 0x40
text_off = TEXT_FILE_OFF                # 0x100
symtab_off = 0x200
strtab_off = 0x400
shstrtab_off = 0x500
shdr_off = 0x600

# Total LOAD segment covers from 0 to end of .text
text_end = text_off + len(text)
# Round up for segment size
load_filesz = text_end
load_memsz = text_end

# ELF header (big-endian, 64-bit)
ehdr = struct.pack(">4sBBBBB7xHHIQQQIHHHHHH",
    b"\x7fELF",
    2,              # EI_CLASS: ELFCLASS64
    2,              # EI_DATA: ELFDATA2MSB (big-endian)
    1,              # EI_VERSION
    0,              # EI_OSABI: ELFOSABI_NONE
    0,              # EI_ABIVERSION
    # 7 padding bytes
    2,              # e_type: ET_EXEC
    8,              # e_machine: EM_MIPS
    1,              # e_version
    TEXT_VADDR,     # e_entry
    phdr_off,       # e_phoff
    shdr_off,       # e_shoff
    0x80000007,     # e_flags: MIPS_NOREORDER | MIPS_PIC | MIPS_CPIC | MIPS_ARCH_64
    EHDR_SIZE,      # e_ehsize
    PHDR_SIZE,      # e_phentsize
    1,              # e_phnum
    SHDR_SIZE,      # e_shentsize
    5,              # e_shnum
    4,              # e_shstrndx
)

# Program header (LOAD, R+X)
phdr = struct.pack(">IIQQQQQQ",
    1,              # p_type: PT_LOAD
    5,              # p_flags: PF_R | PF_X
    0,              # p_offset
    VADDR_BASE,     # p_vaddr
    VADDR_BASE,     # p_paddr
    load_filesz,    # p_filesz
    load_memsz,     # p_memsz
    0x10000,        # p_align
)

# Section headers
def shdr(name_off, sh_type, flags, addr, offset, size, link, info, align, entsize):
    return struct.pack(">IIQQQQIIqq",
        name_off, sh_type, flags, addr, offset, size, link, info, align, entsize)

SHT_NULL    = 0
SHT_PROGBITS = 1
SHT_SYMTAB  = 2
SHT_STRTAB  = 3
SHF_ALLOC   = 2
SHF_EXECINSTR = 4

shdrs = b""
# [0] NULL
shdrs += shdr(0, SHT_NULL, 0, 0, 0, 0, 0, 0, 0, 0)
# [1] .text
shdrs += shdr(1, SHT_PROGBITS, SHF_ALLOC | SHF_EXECINSTR, TEXT_VADDR, text_off, len(text), 0, 0, 4, 0)
# [2] .symtab (link=3 for .strtab, info=2 = first global symbol index)
shdrs += shdr(7, SHT_SYMTAB, 0, 0, symtab_off, len(symtab), 3, 2, 8, 24)
# [3] .strtab
shdrs += shdr(15, SHT_STRTAB, 0, 0, strtab_off, len(strtab), 0, 0, 1, 0)
# [4] .shstrtab
shdrs += shdr(23, SHT_STRTAB, 0, 0, shstrtab_off, len(shstrtab), 0, 0, 1, 0)

# Assemble the file
buf = bytearray(shdr_off + len(shdrs))
buf[0:len(ehdr)] = ehdr
buf[phdr_off:phdr_off+len(phdr)] = phdr
buf[text_off:text_off+len(text)] = text
buf[symtab_off:symtab_off+len(symtab)] = symtab
buf[strtab_off:strtab_off+len(strtab)] = strtab
buf[shstrtab_off:shstrtab_off+len(shstrtab)] = shstrtab
buf[shdr_off:shdr_off+len(shdrs)] = shdrs

out = Path(__file__).resolve().parent.parent / "mips64_features.elf"
out.write_bytes(bytes(buf))
print(f"wrote {len(buf)} bytes to {out}")
