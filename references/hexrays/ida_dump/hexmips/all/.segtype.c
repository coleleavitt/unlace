// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C070
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C070 jmp     cs:off_4CE020
//
// Resolved target: segtype
// Target address:  0x4D0A70
// GOT/IAT slot:    0x4CE020
// Slot symbol:     off_4CE020
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

