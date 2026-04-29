// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_70B0
//
// Resolved target: file2base
// Target address:  0x71A8
// GOT/IAT slot:    0x70B0
// Slot symbol:     off_70B0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

