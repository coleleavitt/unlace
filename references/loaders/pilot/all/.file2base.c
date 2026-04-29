// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_8178
//
// Resolved target: file2base
// Target address:  0x8368
// GOT/IAT slot:    0x8178
// Slot symbol:     off_8178
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

