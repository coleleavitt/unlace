// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A50
// Name:            .simpleline_place_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29A50 jmp     cs:off_4B9510
//
// Resolved target: simpleline_place_t__adjust
// Target address:  0x4BBEF8
// GOT/IAT slot:    0x4B9510
// Slot symbol:     off_4B9510
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__adjust(/* see target signature */)
{
    // Tail-call to simpleline_place_t__adjust via GOT/IAT indirection
    return simpleline_place_t__adjust(/* forwarded args */);
}

