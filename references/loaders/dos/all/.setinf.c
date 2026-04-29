// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_B050
//
// Resolved target: setinf
// Target address:  0xB4E8
// GOT/IAT slot:    0xB050
// Slot symbol:     off_B050
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

