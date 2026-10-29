// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD30
// Name:            .tiplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD30 jmp     cs:off_2C7B680
//
// Resolved target: tiplace_t__equals
// Target address:  0x55A750
// GOT/IAT slot:    0x2C7B680
// Slot symbol:     off_2C7B680
// Target type:     <no type info>
// ============================================================

void .tiplace_t__equals(/* see target signature */)
{
    // Tail-call to tiplace_t__equals via GOT/IAT indirection
    return tiplace_t__equals(/* forwarded args */);
}

