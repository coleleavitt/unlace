// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x294B0
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x294B0 jmp     cs:off_4B9240
//
// Resolved target: ecmp
// Target address:  0x4BBC10
// GOT/IAT slot:    0x4B9240
// Slot symbol:     off_4B9240
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

