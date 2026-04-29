// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_13030
//
// Resolved target: setinf
// Target address:  0x133A8
// GOT/IAT slot:    0x13030
// Slot symbol:     off_13030
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

