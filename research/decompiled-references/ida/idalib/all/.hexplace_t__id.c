// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93F0
// Name:            .hexplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93F0 jmp     cs:off_2C7A1E0
//
// Resolved target: hexplace_t__id
// Target address:  0x425340
// GOT/IAT slot:    0x2C7A1E0
// Slot symbol:     off_2C7A1E0
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ .hexplace_t__id(/* see target signature */)
{
    // Tail-call to hexplace_t__id via GOT/IAT indirection
    return hexplace_t__id(/* forwarded args */);
}

