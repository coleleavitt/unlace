// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80F0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80F0 jmp     cs:off_2A060
//
// Resolved target: setinf
// Target address:  0x2A5D0
// GOT/IAT slot:    0x2A060
// Slot symbol:     off_2A060
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

