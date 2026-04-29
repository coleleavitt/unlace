// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_50C0
//
// Resolved target: file2base
// Target address:  0x51E8
// GOT/IAT slot:    0x50C0
// Slot symbol:     off_50C0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

