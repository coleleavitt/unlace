#!/usr/bin/env python3
"""Empty the symbol table of `macho_trieonly_arm64` (see the .c header):
LC_SYMTAB nsyms/strsize and every LC_DYSYMTAB range go to zero, so only the
export trie still names the exports. Run once after linking:

    python3 macho_trieonly_arm64.py macho_trieonly_arm64
"""
import struct
import sys

path = sys.argv[1]
data = bytearray(open(path, "rb").read())
ncmds = struct.unpack_from("<I", data, 16)[0]
at = 32
for _ in range(ncmds):
    cmd, size = struct.unpack_from("<II", data, at)
    if cmd == 0x2:
        struct.pack_into("<I", data, at + 12, 0)
        struct.pack_into("<I", data, at + 20, 0)
    elif cmd == 0xB:
        for field in range(8, 80, 4):
            struct.pack_into("<I", data, at + field, 0)
    at += size
open(path, "wb").write(data)
