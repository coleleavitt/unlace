// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4B0
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4B0 jmp     cs:off_4CD240
//
// Resolved target: ecmp
// Target address:  0x4CFC30
// GOT/IAT slot:    0x4CD240
// Slot symbol:     off_4CD240
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

