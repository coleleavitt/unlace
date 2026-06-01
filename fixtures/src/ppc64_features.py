#!/usr/bin/env python3
"""Hand-craft a minimal PPC64 big-endian ELF with symbol table.

Produces fixtures/ppc64_features.elf: a statically linked PPC64 ELFv2 binary
containing a Linux-user executable _start plus one branch-heavy helper.

Layout:
  0x000  ELF header          (64 bytes)
  0x040  Program header       (56 bytes)
  0x100  .text section        (code)
  0x200  .symtab section      (symbol table)
  0x400  .strtab section      (string table)
  0x500  .shstrtab section    (section-name string table)
  0x600  Section headers      (5 x 64 = 320 bytes)
"""

import os
import struct
from pathlib import Path

VADDR_BASE = 0x10000000
TEXT_FILE_OFF = 0x100
TEXT_VADDR = VADDR_BASE + TEXT_FILE_OFF


def insn(word):
    return struct.pack(">I", word)


def d_form(opcode, rt, ra, imm):
    return insn((opcode << 26) | (rt << 21) | (ra << 16) | (imm & 0xFFFF))


def xo_form(opcode, rt, ra, rb, xo, rc=0):
    return insn((opcode << 26) | (rt << 21) | (ra << 16) | (rb << 11) | (xo << 1) | rc)


def x_form(opcode, a, b, xo, rc=0):
    return insn((opcode << 26) | (a << 16) | (b << 11) | (xo << 1) | rc)


def b_form(opcode, bo, bi, bd, aa=0, lk=0):
    return insn(
        (opcode << 26)
        | (bo << 21)
        | (bi << 16)
        | (bd & 0xFFFC)
        | (aa << 1)
        | lk
    )


def li(rt, imm):
    return d_form(14, rt, 0, imm)


def add(rd, ra, rb):
    return xo_form(31, rd, ra, rb, 266)


def subf(rd, ra, rb):
    return xo_form(31, rd, ra, rb, 40)


def cmpw(ra, rb):
    return x_form(31, ra, rb, 0)


def blr():
    return insn(0x4E800020)


def sc():
    return insn(0x44000002)


# Register aliases.
R0, R3, R4, R5, R6 = 0, 3, 4, 5, 6

# _start: exercise simple arithmetic, then perform Linux ppc64 exit(0).
# Linux ppc64 syscall convention: r0 = syscall number, r3.. = args, sc.
start_code = b""
start_code += li(R3, 10)
start_code += li(R4, 20)
start_code += add(R5, R3, R4)
start_code += subf(R6, R4, R3)
start_code += li(R0, 1)   # __NR_exit
start_code += li(R3, 0)   # status
start_code += sc()

# ppc_branch: keep a small conditional-return helper for decompiler shape.
branch_off = len(start_code)
branch_code = b""
branch_code += li(R3, 5)
branch_code += li(R4, 3)
branch_code += cmpw(R3, R4)
branch_code += b_form(16, 12, 2, 8)  # beq +8
branch_code += add(R3, R3, R4)
branch_code += blr()

text = start_code + branch_code

functions = {
    "_start": (0, len(start_code)),
    "ppc_branch": (branch_off, len(branch_code)),
}

shstrtab = b"\x00.text\x00.symtab\x00.strtab\x00.shstrtab\x00"

strtab = b"\x00"
sym_names = {}
for name in ["ppc64_features.S", "_start", "ppc_branch"]:
    sym_names[name] = len(strtab)
    strtab += name.encode() + b"\x00"


def elf64_sym_be(name_idx, info, other, shndx, value, size):
    return struct.pack(">IBBHQQ", name_idx, info, other, shndx, value, size)


STB_LOCAL, STB_GLOBAL = 0, 1
STT_NOTYPE, STT_FILE, STT_FUNC = 0, 4, 2


def st_info(bind, typ):
    return (bind << 4) | typ


symtab = b""
symtab += elf64_sym_be(0, st_info(STB_LOCAL, STT_NOTYPE), 0, 0, 0, 0)
symtab += elf64_sym_be(
    sym_names["ppc64_features.S"], st_info(STB_LOCAL, STT_FILE), 0, 0xFFF1, 0, 0
)
for name, (off, size) in functions.items():
    symtab += elf64_sym_be(
        sym_names[name], st_info(STB_GLOBAL, STT_FUNC), 0, 1, TEXT_VADDR + off, size
    )

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

ehdr = struct.pack(
    ">4sBBBBB7xHHIQQQIHHHHHH",
    b"\x7fELF",
    2,          # ELFCLASS64
    2,          # ELFDATA2MSB
    1,          # EI_VERSION
    0,          # ELFOSABI_SYSV
    0,          # ABI version
    2,          # ET_EXEC
    21,         # EM_PPC64
    1,          # e_version
    TEXT_VADDR,
    phdr_off,
    shdr_off,
    0x2,        # EF_PPC64_ABI_V2
    EHDR_SIZE,
    PHDR_SIZE,
    1,
    SHDR_SIZE,
    5,
    4,
)

phdr = struct.pack(
    ">IIQQQQQQ",
    1,          # PT_LOAD
    5,          # PF_R | PF_X
    0,
    VADDR_BASE,
    VADDR_BASE,
    text_end,
    text_end,
    0x1000,
)


def shdr(name_off, sh_type, flags, addr, offset, size, link, info, align, entsize):
    return struct.pack(
        ">IIQQQQIIqq", name_off, sh_type, flags, addr, offset, size, link, info, align, entsize
    )


SHT_NULL, SHT_PROGBITS, SHT_SYMTAB, SHT_STRTAB = 0, 1, 2, 3
SHF_ALLOC, SHF_EXECINSTR = 2, 4

shdrs = b""
shdrs += shdr(0, SHT_NULL, 0, 0, 0, 0, 0, 0, 0, 0)
shdrs += shdr(1, SHT_PROGBITS, SHF_ALLOC | SHF_EXECINSTR, TEXT_VADDR, text_off, len(text), 0, 0, 4, 0)
shdrs += shdr(7, SHT_SYMTAB, 0, 0, symtab_off, len(symtab), 3, 2, 8, 24)
shdrs += shdr(15, SHT_STRTAB, 0, 0, strtab_off, len(strtab), 0, 0, 1, 0)
shdrs += shdr(23, SHT_STRTAB, 0, 0, shstrtab_off, len(shstrtab), 0, 0, 1, 0)

buf = bytearray(shdr_off + len(shdrs))
buf[0 : len(ehdr)] = ehdr
buf[phdr_off : phdr_off + len(phdr)] = phdr
buf[text_off : text_off + len(text)] = text
buf[symtab_off : symtab_off + len(symtab)] = symtab
buf[strtab_off : strtab_off + len(strtab)] = strtab
buf[shstrtab_off : shstrtab_off + len(shstrtab)] = shstrtab
buf[shdr_off : shdr_off + len(shdrs)] = shdrs

out = Path(__file__).resolve().parent.parent / "ppc64_features.elf"
out.write_bytes(bytes(buf))
os.chmod(out, 0o755)
print(f"wrote {len(buf)} bytes to {out}")
