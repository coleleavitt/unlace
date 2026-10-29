// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1182C0
// Name:            .hexplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1182C0 jmp     cs:hexplace_t__ending_ptr
//
// Resolved target: hexplace_t__ending
// Target address:  0x8D79D0
// GOT/IAT slot:    0x8A2E00
// Slot symbol:     hexplace_t__ending_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__ending(/* see target signature */)
{
    // Tail-call to hexplace_t__ending via GOT/IAT indirection
    return hexplace_t__ending(/* forwarded args */);
}

