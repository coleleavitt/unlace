// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A930
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A930 jmp     cs:off_4BF480
//
// Resolved target: qgetenv
// Target address:  0x4C2960
// GOT/IAT slot:    0x4BF480
// Slot symbol:     off_4BF480
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

