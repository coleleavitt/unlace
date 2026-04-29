// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA80
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA80 jmp     cs:off_4E9D28
//
// Resolved target: qfopen
// Target address:  0x4EC768
// GOT/IAT slot:    0x4E9D28
// Slot symbol:     off_4E9D28
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

