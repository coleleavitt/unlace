// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3D0
// Name:            .qgetline
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3D0 jmp     cs:off_CA1D0
//
// Resolved target: qgetline
// Target address:  0xD0B00
// GOT/IAT slot:    0xCA1D0
// Slot symbol:     off_CA1D0
// Target type:     <no type info>
// ============================================================

void .qgetline(/* see target signature */)
{
    // Tail-call to qgetline via GOT/IAT indirection
    return qgetline(/* forwarded args */);
}

