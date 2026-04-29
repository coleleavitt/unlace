// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C130
// Name:            .simpleline_place_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C130 jmp     cs:off_4CE080
//
// Resolved target: simpleline_place_t__enter
// Target address:  0x4D0AD8
// GOT/IAT slot:    0x4CE080
// Slot symbol:     off_4CE080
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to simpleline_place_t__enter via GOT/IAT indirection
    return simpleline_place_t__enter(/* forwarded args */);
}

