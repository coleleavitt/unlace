// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC550
// Name:            .hexplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC550 jmp     cs:off_2C7BA90
//
// Resolved target: hexplace_t__next
// Target address:  0x4251D0
// GOT/IAT slot:    0x2C7BA90
// Slot symbol:     off_2C7BA90
// Target type:     <no type info>
// ============================================================

void .hexplace_t__next(/* see target signature */)
{
    // Tail-call to hexplace_t__next via GOT/IAT indirection
    return hexplace_t__next(/* forwarded args */);
}

