// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_14058
//
// Resolved target: setinf
// Target address:  0x14640
// GOT/IAT slot:    0x14058
// Slot symbol:     off_14058
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

