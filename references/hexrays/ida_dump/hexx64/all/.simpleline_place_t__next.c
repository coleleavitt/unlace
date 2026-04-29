// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D220
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D220 jmp     cs:off_4EE0F8
//
// Resolved target: simpleline_place_t__next
// Target address:  0x4F2448
// GOT/IAT slot:    0x4EE0F8
// Slot symbol:     off_4EE0F8
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

