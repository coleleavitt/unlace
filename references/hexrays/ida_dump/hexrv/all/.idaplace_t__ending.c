// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA90
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA90 jmp     cs:off_4BFD30
//
// Resolved target: idaplace_t__ending
// Target address:  0x4C3248
// GOT/IAT slot:    0x4BFD30
// Slot symbol:     off_4BFD30
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

