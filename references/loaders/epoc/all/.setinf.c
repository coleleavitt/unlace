// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_13038
//
// Resolved target: setinf
// Target address:  0x13720
// GOT/IAT slot:    0x13038
// Slot symbol:     off_13038
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

