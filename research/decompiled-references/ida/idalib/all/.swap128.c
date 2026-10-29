// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4F0
// Name:            .swap128
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4F0 jmp     cs:off_2C7B260
//
// Resolved target: swap128
// Target address:  0x8256B0
// GOT/IAT slot:    0x2C7B260
// Slot symbol:     off_2C7B260
// Target type:     <no type info>
// ============================================================

void .swap128(/* see target signature */)
{
    // Tail-call to swap128 via GOT/IAT indirection
    return swap128(/* forwarded args */);
}

