// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D300
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D300 jmp     cs:off_4E9168
//
// Resolved target: setinf
// Target address:  0x4EBB58
// GOT/IAT slot:    0x4E9168
// Slot symbol:     off_4E9168
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

