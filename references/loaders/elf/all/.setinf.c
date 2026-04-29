// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9130
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9130 jmp     cs:off_89080
//
// Resolved target: setinf
// Target address:  0x8C380
// GOT/IAT slot:    0x89080
// Slot symbol:     off_89080
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

