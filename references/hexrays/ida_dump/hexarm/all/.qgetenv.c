// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D950
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D950 jmp     cs:off_4E9490
//
// Resolved target: qgetenv
// Target address:  0x4EBE98
// GOT/IAT slot:    0x4E9490
// Slot symbol:     off_4E9490
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

