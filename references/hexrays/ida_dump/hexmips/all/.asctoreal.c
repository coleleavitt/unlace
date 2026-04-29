// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8C0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8C0 jmp     cs:off_4CDC48
//
// Resolved target: asctoreal
// Target address:  0x4D0680
// GOT/IAT slot:    0x4CDC48
// Slot symbol:     off_4CDC48
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

