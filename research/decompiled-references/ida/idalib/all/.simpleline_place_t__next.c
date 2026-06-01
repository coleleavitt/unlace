// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DC0
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DC0 jmp     cs:off_2C7A6C8
//
// Resolved target: simpleline_place_t__next
// Target address:  0x52AAE0
// GOT/IAT slot:    0x2C7A6C8
// Slot symbol:     off_2C7A6C8
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

