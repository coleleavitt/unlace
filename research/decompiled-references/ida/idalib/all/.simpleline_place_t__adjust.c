// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C00
// Name:            .simpleline_place_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C00 jmp     cs:off_2C79DE8
//
// Resolved target: simpleline_place_t__adjust
// Target address:  0x52AA80
// GOT/IAT slot:    0x2C79DE8
// Slot symbol:     off_2C79DE8
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__adjust(/* see target signature */)
{
    // Tail-call to simpleline_place_t__adjust via GOT/IAT indirection
    return simpleline_place_t__adjust(/* forwarded args */);
}

