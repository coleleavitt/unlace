// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4490
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4490 jmp     cs:off_23230
//
// Resolved target: swap64
// Target address:  0x23650
// GOT/IAT slot:    0x23230
// Slot symbol:     off_23230
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}

