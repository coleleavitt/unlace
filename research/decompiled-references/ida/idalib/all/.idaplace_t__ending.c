// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0A0
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0A0 jmp     cs:off_2C7C038
//
// Resolved target: idaplace_t__ending
// Target address:  0x42A4C0
// GOT/IAT slot:    0x2C7C038
// Slot symbol:     off_2C7C038
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

