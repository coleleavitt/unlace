// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB70
// Name:            .simpleline_place_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB70 jmp     cs:off_2C7C5A0
//
// Resolved target: simpleline_place_t__compare2
// Target address:  0x52AA30
// GOT/IAT slot:    0x2C7C5A0
// Slot symbol:     off_2C7C5A0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__compare2(/* see target signature */)
{
    // Tail-call to simpleline_place_t__compare2 via GOT/IAT indirection
    return simpleline_place_t__compare2(/* forwarded args */);
}

