// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117000
// Name:            .tiplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117000 jmp     cs:tiplace_t__ending_ptr
//
// Resolved target: tiplace_t__ending
// Target address:  0x8D6DC8
// GOT/IAT slot:    0x8A24A0
// Slot symbol:     tiplace_t__ending_ptr
// Target type:     <no type info>
// ============================================================

void .tiplace_t__ending(/* see target signature */)
{
    // Tail-call to tiplace_t__ending via GOT/IAT indirection
    return tiplace_t__ending(/* forwarded args */);
}

