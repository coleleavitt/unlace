"""Rebuild the TriCore TC1.8 fixtures from the opcode diagrams in Infineon's
"TriCore TC1.8 architecture manual volume 2" V1.0.0 (2024-02-14), chapter 3.

Run from this directory: python3 gen.py
"""

import struct


def rr(op1, op2, n, c, a, b=0):
    return op1 | a << 8 | b << 12 | n << 16 | op2 << 20 | c << 28


def rrr(op1, op2, n, c, d, a, b=0):
    return op1 | a << 8 | b << 12 | n << 16 | op2 << 20 | d << 24 | c << 28


def rc(op1, op2, c, a, const9):
    return op1 | a << 8 | const9 << 12 | op2 << 21 | c << 28


def bo(op2, b, off10=0):
    return 0x49 | b << 12 | (off10 & 0x3F) << 16 | op2 << 22 | (off10 >> 6) << 28


def lha(a, off18):
    lo, mid, hi, top = off18 & 0x3F, (off18 >> 6) & 0xF, (off18 >> 10) & 0xF, off18 >> 14
    return 0xC5 | a << 8 | top << 12 | lo << 16 | hi << 22 | 1 << 26 | mid << 28


def rlc(op1, c, a, const16):
    return op1 | a << 8 | const16 << 12 | c << 28


def sys(op2):
    return 0x0D | op2 << 22


RET16 = (0x9000, 2)

# Every TC1.6.2/TC1.8 form the older TriCore languages do not decode, in
# manual order; operands c=4, d=6, a=8, b=2.
PROBE = [
    (0x18DC, 2),  # calli a8 (SR)
    (rr(0x4B, 0x06, 0, 4, 8, 2), 4),  # crc32.b
    (rr(0x4B, 0x03, 0, 4, 8, 2), 4),  # crc32b.w
    (rr(0x4B, 0x07, 0, 4, 8, 2), 4),  # crc32l.w
    (rrr(0x6B, 0x1, 0, 4, 6, 8, 2), 4),  # crcn
    (rr(0x4B, 0x20, 2, 4, 8, 2), 4),  # div64
    (rr(0x4B, 0x21, 2, 4, 8, 2), 4),  # div64.u
    (rr(0x2D, 0x13, 0, 0, 8), 4),  # jri
    (lha(8, 0x1C001), 4),  # lha a8,0x70004000
    (sys(0x22), 4),  # lsync
    (rlc(0x4F, 4, 0, 0xFE00), 4),  # mfdcr
    (rlc(0xCF, 0, 8, 0xFE00), 4),  # mtdcr
    (rr(0x4B, 0x2B, 0, 4, 8, 2), 4),  # mulp.b
    (rr(0x4B, 0x22, 0, 4, 8), 4),  # popcnt.w
    (rr(0x4B, 0x34, 2, 4, 8, 2), 4),  # rem64
    (rr(0x4B, 0x35, 2, 4, 8, 2), 4),  # rem64.u
    (rc(0x8F, 0x07, 4, 8, 0x11B), 4),  # shuffle
    (0x0036, 2),  # trapinv
    (rr(0x4B, 0x30, 1, 4, 8), 4),  # abs.f
    (rr(0x4B, 0x37, 1, 4, 8), 4),  # ftoin
    (rr(0x4B, 0x25, 1, 4, 8), 4),  # ftohp
    (rr(0x4B, 0x24, 1, 4, 8), 4),  # hptof
    (rr(0x4B, 0x32, 1, 4, 8, 2), 4),  # max.f
    (rr(0x4B, 0x33, 1, 4, 8, 2), 4),  # min.f
    (rr(0x4B, 0x31, 1, 4, 8), 4),  # neg.f
    (rr(0x4B, 0x30, 2, 4, 8), 4),  # abs.df
    (rrr(0x6B, 0x2, 2, 4, 6, 8), 4),  # add.df
    (rr(0x4B, 0x00, 2, 4, 8, 2), 4),  # cmp.df
    (rr(0x4B, 0x05, 2, 4, 8, 2), 4),  # div.df
    (rr(0x4B, 0x10, 2, 4, 8), 4),  # dftoi
    (rr(0x4B, 0x37, 2, 4, 8), 4),  # dftoin
    (rr(0x4B, 0x13, 2, 4, 8), 4),  # dftoiz
    (rr(0x4B, 0x1A, 2, 4, 8), 4),  # dftol
    (rr(0x4B, 0x1B, 2, 4, 8), 4),  # dftolz
    (rr(0x4B, 0x12, 2, 4, 8), 4),  # dftou
    (rr(0x4B, 0x17, 2, 4, 8), 4),  # dftouz
    (rr(0x4B, 0x1E, 2, 4, 8), 4),  # dftoul
    (rr(0x4B, 0x1F, 2, 4, 8), 4),  # dftoulz
    (rr(0x4B, 0x14, 2, 4, 8), 4),  # itodf
    (rr(0x4B, 0x26, 2, 4, 8), 4),  # ltodf
    (rrr(0x6B, 0x6, 2, 4, 6, 8, 2), 4),  # madd.df
    (rr(0x4B, 0x32, 2, 4, 8, 2), 4),  # max.df
    (rr(0x4B, 0x33, 2, 4, 8, 2), 4),  # min.df
    (rrr(0x6B, 0x7, 2, 4, 6, 8, 2), 4),  # msub.df
    (rr(0x4B, 0x04, 2, 4, 8, 2), 4),  # mul.df
    (rr(0x4B, 0x31, 2, 4, 8), 4),  # neg.df
    (rr(0x4B, 0x19, 2, 4, 8), 4),  # qseed.df
    (rrr(0x6B, 0x3, 2, 4, 6, 8), 4),  # sub.df
    (rr(0x4B, 0x16, 2, 4, 8), 4),  # utodf
    (rr(0x4B, 0x27, 2, 4, 8), 4),  # ultodf
    (rr(0x4B, 0x28, 2, 4, 8), 4),  # dftof
    (rr(0x4B, 0x29, 2, 4, 8), 4),  # ftodf
]
for low in (0xE, 0xC, 0xD, 0xA, 0xB, 0xF):  # cachea.i/w/wi.vm, cachei.i/w/wi.vm
    PROBE += [(bo(mode << 4 | low, 2), 4) for mode in (0, 1, 2)]
PROBE += [(rc(0xAD, 0x02, 0, 0, 0x12), 4), (sys(0x17), 4), RET16]  # hvcall, rfh, ret

RAW = {
    "madd_df.bin": [(rrr(0x6B, 0x6, 2, 2, 6, 4, 4), 4), RET16],
    "div64.bin": [(rr(0x4B, 0x20, 2, 2, 4, 6), 4), RET16],
    "popcnt.bin": [(rr(0x4B, 0x22, 0, 2, 4), 4), RET16],
    "shuffle.bin": [(rc(0x8F, 0x07, 2, 4, 0x1B), 4), RET16],
    "itodf.bin": [(rr(0x4B, 0x14, 2, 2, 4), 4), RET16],
    "max_f.bin": [(rr(0x4B, 0x32, 1, 2, 4, 5), 4), RET16],
    "lha.bin": [(lha(2, 0x1C001), 4), RET16],
    "crc32l.bin": [(rr(0x4B, 0x07, 0, 2, 5, 4), 4), RET16],
}


def code(words):
    return b"".join(w.to_bytes(size, "little") for w, size in words)


def elf(text, base, name):
    """ELF32 LE, e_machine 44 (TriCore), one R+X PT_LOAD, .text and one FUNC symbol."""
    shstr = b"\0.text\0.symtab\0.strtab\0.shstrtab\0"
    strtab = b"\0" + name.encode() + b"\0"
    text_off = 0x100
    sym_off = (text_off + len(text) + 3) & ~3
    symtab = bytes(16) + struct.pack("<IIIBBH", 1, base, len(text), 0x12, 0, 1)
    str_off = sym_off + len(symtab)
    shs_off = str_off + len(strtab)
    sh_off = (shs_off + len(shstr) + 3) & ~3
    eh = b"\x7fELF" + bytes([1, 1, 1, 0]) + bytes(8)
    eh += struct.pack("<HHIIIIIHHHHHH", 2, 44, 1, base, 52, sh_off, 0, 52, 32, 1, 40, 5, 4)
    ph = struct.pack("<IIIIIIII", 1, text_off, base, base, len(text), len(text), 5, 0x100)

    def sh(n, t, f, a, o, s, link=0, info=0, align=1, es=0):
        return struct.pack("<IIIIIIIIII", n, t, f, a, o, s, link, info, align, es)

    shdrs = sh(0, 0, 0, 0, 0, 0)
    shdrs += sh(1, 1, 6, base, text_off, len(text), align=2)
    shdrs += sh(7, 2, 0, 0, sym_off, len(symtab), link=3, info=1, align=4, es=16)
    shdrs += sh(15, 3, 0, 0, str_off, len(strtab))
    shdrs += sh(23, 3, 0, 0, shs_off, len(shstr))
    out = bytearray(sh_off)
    out[0 : len(eh)] = eh
    out[52:84] = ph
    out[text_off : text_off + len(text)] = text
    out[sym_off : sym_off + len(symtab)] = symtab
    out[str_off : str_off + len(strtab)] = strtab
    out[shs_off : shs_off + len(shstr)] = shstr
    return bytes(out + shdrs)


if __name__ == "__main__":
    with open("tricore_tc18.elf", "wb") as f:
        f.write(elf(code(PROBE), 0x1000, "probe"))
    for fname, words in RAW.items():
        with open(fname, "wb") as f:
            f.write(code(words))
