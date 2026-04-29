// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0D0
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0D0 jmp     cs:off_4CE050
//
// Resolved target: simpleline_place_t__next
// Target address:  0x4D0AA0
// GOT/IAT slot:    0x4CE050
// Slot symbol:     off_4CE050
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

