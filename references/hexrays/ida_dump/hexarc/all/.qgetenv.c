// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29930
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29930 jmp     cs:off_4B9480
//
// Resolved target: qgetenv
// Target address:  0x4BBE68
// GOT/IAT slot:    0x4B9480
// Slot symbol:     off_4B9480
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

