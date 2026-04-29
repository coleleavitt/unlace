// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0F0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0F0 jmp     cs:off_35060
//
// Resolved target: setinf
// Target address:  0x356B0
// GOT/IAT slot:    0x35060
// Slot symbol:     off_35060
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

