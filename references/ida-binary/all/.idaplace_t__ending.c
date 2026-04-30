// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA20
// Name:            .idaplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA20 jmp     cs:idaplace_t__ending_ptr
//
// Resolved target: idaplace_t__ending
// Target address:  0x8D92B0
// GOT/IAT slot:    0x8A41B0
// Slot symbol:     idaplace_t__ending_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__ending(/* see target signature */)
{
    // Tail-call to idaplace_t__ending via GOT/IAT indirection
    return idaplace_t__ending(/* forwarded args */);
}

