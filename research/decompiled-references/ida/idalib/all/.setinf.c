// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA430
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA430 jmp     cs:off_2C7AA00
//
// Resolved target: setinf
// Target address:  0x6326B0
// GOT/IAT slot:    0x2C7AA00
// Slot symbol:     off_2C7AA00
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

