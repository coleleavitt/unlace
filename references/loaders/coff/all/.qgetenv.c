// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4280
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4280 jmp     cs:off_23128
//
// Resolved target: qgetenv
// Target address:  0x23548
// GOT/IAT slot:    0x23128
// Slot symbol:     off_23128
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

