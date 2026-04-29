// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_7030
//
// Resolved target: setinf
// Target address:  0x71E8
// GOT/IAT slot:    0x7030
// Slot symbol:     off_7030
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

