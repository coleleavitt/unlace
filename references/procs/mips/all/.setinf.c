// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19100
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19100 jmp     cs:off_75068
//
// Resolved target: setinf
// Target address:  0x758B8
// GOT/IAT slot:    0x75068
// Slot symbol:     off_75068
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

