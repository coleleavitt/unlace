// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3C0
// Name:            .simpleline_place_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3C0 jmp     cs:simpleline_place_t__ending_ptr
//
// Resolved target: simpleline_place_t__ending
// Target address:  0x8D98B8
// GOT/IAT slot:    0x8A4680
// Slot symbol:     simpleline_place_t__ending_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__ending(/* see target signature */)
{
    // Tail-call to simpleline_place_t__ending via GOT/IAT indirection
    return simpleline_place_t__ending(/* forwarded args */);
}

