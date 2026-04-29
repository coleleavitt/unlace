// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4B0
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4B0 jmp     cs:off_4C0240
//
// Resolved target: ecmp
// Target address:  0x4C3208
// GOT/IAT slot:    0x4C0240
// Slot symbol:     off_4C0240
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

