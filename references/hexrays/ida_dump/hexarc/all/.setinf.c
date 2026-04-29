// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29300
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29300 jmp     cs:off_4B9168
//
// Resolved target: setinf
// Target address:  0x4BBB38
// GOT/IAT slot:    0x4B9168
// Slot symbol:     off_4B9168
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

