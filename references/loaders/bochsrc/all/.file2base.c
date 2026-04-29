// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_40C0
//
// Resolved target: file2base
// Target address:  0x5210
// GOT/IAT slot:    0x40C0
// Slot symbol:     off_40C0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

