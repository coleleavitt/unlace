// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC10
// Name:            .tiplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC10 jmp     cs:off_2C7ADF0
//
// Resolved target: tiplace_t__ending
// Target address:  0x55A830
// GOT/IAT slot:    0x2C7ADF0
// Slot symbol:     off_2C7ADF0
// Target type:     <no type info>
// ============================================================

void .tiplace_t__ending(/* see target signature */)
{
    // Tail-call to tiplace_t__ending via GOT/IAT indirection
    return tiplace_t__ending(/* forwarded args */);
}

