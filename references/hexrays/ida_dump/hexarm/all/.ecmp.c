// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D4C0
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D4C0 jmp     cs:off_4E9248
//
// Resolved target: ecmp
// Target address:  0x4EBC38
// GOT/IAT slot:    0x4E9248
// Slot symbol:     off_4E9248
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

