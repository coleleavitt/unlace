// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB90
// Name:            .simpleline_place_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB90 jmp     cs:off_2C7C5B0
//
// Resolved target: simpleline_place_t__name
// Target address:  0x52AE20
// GOT/IAT slot:    0x2C7C5B0
// Slot symbol:     off_2C7C5B0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__name(/* see target signature */)
{
    // Tail-call to simpleline_place_t__name via GOT/IAT indirection
    return simpleline_place_t__name(/* forwarded args */);
}

