// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD20
// Name:            .simpleline_place_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD20 jmp     cs:off_4E9678
//
// Resolved target: simpleline_place_t__ending
// Target address:  0x4EC090
// GOT/IAT slot:    0x4E9678
// Slot symbol:     off_4E9678
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__ending(/* see target signature */)
{
    // Tail-call to simpleline_place_t__ending via GOT/IAT indirection
    return simpleline_place_t__ending(/* forwarded args */);
}

