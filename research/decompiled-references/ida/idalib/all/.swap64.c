// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACC0
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACC0 jmp     cs:off_2C7AE48
//
// Resolved target: swap64
// Target address:  0x837F70
// GOT/IAT slot:    0x2C7AE48
// Slot symbol:     off_2C7AE48
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}

