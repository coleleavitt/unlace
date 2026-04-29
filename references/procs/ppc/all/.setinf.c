// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20190
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20190 jmp     cs:off_950B0
//
// Resolved target: setinf
// Target address:  0x95AE0
// GOT/IAT slot:    0x950B0
// Slot symbol:     off_950B0
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

