// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_4098
//
// Resolved target: file2base
// Target address:  0x45B8
// GOT/IAT slot:    0x4098
// Slot symbol:     off_4098
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

