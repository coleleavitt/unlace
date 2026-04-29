// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB90
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB90 jmp     cs:off_4EDDB0
//
// Resolved target: idaplace_t__ending
// Target address:  0x4F20F0
// GOT/IAT slot:    0x4EDDB0
// Slot symbol:     off_4EDDB0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

