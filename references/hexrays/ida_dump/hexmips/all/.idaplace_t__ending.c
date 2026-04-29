// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAA0
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAA0 jmp     cs:off_4CDD38
//
// Resolved target: idaplace_t__ending
// Target address:  0x4D0778
// GOT/IAT slot:    0x4CDD38
// Slot symbol:     off_4CDD38
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

