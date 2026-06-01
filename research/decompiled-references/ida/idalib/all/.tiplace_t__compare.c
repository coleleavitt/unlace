// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACEC0
// Name:            .tiplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACEC0 jmp     cs:off_2C7BF48
//
// Resolved target: tiplace_t__compare
// Target address:  0x55A5A0
// GOT/IAT slot:    0x2C7BF48
// Slot symbol:     off_2C7BF48
// Target type:     <no type info>
// ============================================================

void .tiplace_t__compare(/* see target signature */)
{
    // Tail-call to tiplace_t__compare via GOT/IAT indirection
    return tiplace_t__compare(/* forwarded args */);
}

