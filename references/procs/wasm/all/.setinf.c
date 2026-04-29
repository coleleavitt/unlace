// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9090
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9090 jmp     cs:off_26030
//
// Resolved target: setinf
// Target address:  0x26340
// GOT/IAT slot:    0x26030
// Slot symbol:     off_26030
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

