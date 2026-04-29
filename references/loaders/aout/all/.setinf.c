// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_6010
//
// Resolved target: setinf
// Target address:  0x6198
// GOT/IAT slot:    0x6010
// Slot symbol:     off_6010
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

