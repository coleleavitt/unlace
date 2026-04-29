// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_28078
//
// Resolved target: setinf
// Target address:  0x28528
// GOT/IAT slot:    0x28078
// Slot symbol:     off_28078
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

