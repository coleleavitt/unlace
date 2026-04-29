// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD00
// Name:            .simpleline_place_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD00 jmp     cs:off_4DA668
//
// Resolved target: simpleline_place_t__ending
// Target address:  0x4DD060
// GOT/IAT slot:    0x4DA668
// Slot symbol:     off_4DA668
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__ending(/* see target signature */)
{
    // Tail-call to simpleline_place_t__ending via GOT/IAT indirection
    return simpleline_place_t__ending(/* forwarded args */);
}

