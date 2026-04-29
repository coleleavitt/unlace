// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F100
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F100 jmp     cs:off_4EA068
//
// Resolved target: simpleline_place_t__next
// Target address:  0x4ECAB8
// GOT/IAT slot:    0x4EA068
// Slot symbol:     off_4EA068
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

