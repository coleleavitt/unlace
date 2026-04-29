// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_B038
//
// Resolved target: setinf
// Target address:  0xB2D0
// GOT/IAT slot:    0xB038
// Slot symbol:     off_B038
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

