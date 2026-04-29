// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A300
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A300 jmp     cs:off_4DA168
//
// Resolved target: setinf
// Target address:  0x4DCB38
// GOT/IAT slot:    0x4DA168
// Slot symbol:     off_4DA168
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

