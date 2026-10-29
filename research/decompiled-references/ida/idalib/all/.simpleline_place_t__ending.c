// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6A0
// Name:            .simpleline_place_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6A0 jmp     cs:off_2C7C338
//
// Resolved target: simpleline_place_t__ending
// Target address:  0x52AB30
// GOT/IAT slot:    0x2C7C338
// Slot symbol:     off_2C7C338
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__ending(/* see target signature */)
{
    // Tail-call to simpleline_place_t__ending via GOT/IAT indirection
    return simpleline_place_t__ending(/* forwarded args */);
}

