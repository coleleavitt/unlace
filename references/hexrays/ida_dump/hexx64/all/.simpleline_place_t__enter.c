// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D290
// Name:            .simpleline_place_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D290 jmp     cs:off_4EE130
//
// Resolved target: simpleline_place_t__enter
// Target address:  0x4F2488
// GOT/IAT slot:    0x4EE130
// Slot symbol:     off_4EE130
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to simpleline_place_t__enter via GOT/IAT indirection
    return simpleline_place_t__enter(/* forwarded args */);
}

