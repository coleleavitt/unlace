// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E00
// Name:            .swap_idcvs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E00 jmp     cs:off_2C7A6E8
//
// Resolved target: swap_idcvs
// Target address:  0x791790
// GOT/IAT slot:    0x2C7A6E8
// Slot symbol:     off_2C7A6E8
// Target type:     <no type info>
// ============================================================

void .swap_idcvs(/* see target signature */)
{
    // Tail-call to swap_idcvs via GOT/IAT indirection
    return swap_idcvs(/* forwarded args */);
}

