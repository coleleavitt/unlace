// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_4008
//
// Resolved target: setinf
// Target address:  0x4120
// GOT/IAT slot:    0x4008
// Slot symbol:     off_4008
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

