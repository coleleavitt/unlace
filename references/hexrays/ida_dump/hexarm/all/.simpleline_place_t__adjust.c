// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA70
// Name:            .simpleline_place_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA70 jmp     cs:off_4E9520
//
// Resolved target: simpleline_place_t__adjust
// Target address:  0x4EBF28
// GOT/IAT slot:    0x4E9520
// Slot symbol:     off_4E9520
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__adjust(/* see target signature */)
{
    // Tail-call to simpleline_place_t__adjust via GOT/IAT indirection
    return simpleline_place_t__adjust(/* forwarded args */);
}

