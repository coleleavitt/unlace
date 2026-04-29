// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA20
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA20 jmp     cs:off_4B9CF8
//
// Resolved target: qfopen
// Target address:  0x4BC718
// GOT/IAT slot:    0x4B9CF8
// Slot symbol:     off_4B9CF8
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

