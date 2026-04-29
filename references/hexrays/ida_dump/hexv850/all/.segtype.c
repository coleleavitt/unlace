// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C070
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C070 jmp     cs:off_4C1020
//
// Resolved target: segtype
// Target address:  0x4C4048
// GOT/IAT slot:    0x4C1020
// Slot symbol:     off_4C1020
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

