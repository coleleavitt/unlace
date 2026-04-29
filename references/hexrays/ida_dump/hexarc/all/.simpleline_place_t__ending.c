// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D00
// Name:            .simpleline_place_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D00 jmp     cs:off_4B9668
//
// Resolved target: simpleline_place_t__ending
// Target address:  0x4BC060
// GOT/IAT slot:    0x4B9668
// Slot symbol:     off_4B9668
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__ending(/* see target signature */)
{
    // Tail-call to simpleline_place_t__ending via GOT/IAT indirection
    return simpleline_place_t__ending(/* forwarded args */);
}

