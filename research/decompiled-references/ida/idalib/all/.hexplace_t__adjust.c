// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8790
// Name:            .hexplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8790 jmp     cs:off_2C79BB0
//
// Resolved target: hexplace_t__adjust
// Target address:  0x4250A0
// GOT/IAT slot:    0x2C79BB0
// Slot symbol:     off_2C79BB0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__adjust(/* see target signature */)
{
    // Tail-call to hexplace_t__adjust via GOT/IAT indirection
    return hexplace_t__adjust(/* forwarded args */);
}

