// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_A020
//
// Resolved target: setinf
// Target address:  0xA2D0
// GOT/IAT slot:    0xA020
// Slot symbol:     off_A020
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

