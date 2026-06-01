// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF30
// Name:            .hexplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF30 jmp     cs:off_2C7B780
//
// Resolved target: hexplace_t__compare2
// Target address:  0x425400
// GOT/IAT slot:    0x2C7B780
// Slot symbol:     off_2C7B780
// Target type:     <no type info>
// ============================================================

void .hexplace_t__compare2(/* see target signature */)
{
    // Tail-call to hexplace_t__compare2 via GOT/IAT indirection
    return hexplace_t__compare2(/* forwarded args */);
}

