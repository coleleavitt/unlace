// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4C0
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4C0 jmp     cs:off_4ED248
//
// Resolved target: ecmp
// Target address:  0x4F1540
// GOT/IAT slot:    0x4ED248
// Slot symbol:     off_4ED248
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

