// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA10
// Name:            .simpleline_place_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA10 jmp     cs:off_4E9CF0
//
// Resolved target: simpleline_place_t__prev
// Target address:  0x4EC730
// GOT/IAT slot:    0x4E9CF0
// Slot symbol:     off_4E9CF0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__prev(/* see target signature */)
{
    // Tail-call to simpleline_place_t__prev via GOT/IAT indirection
    return simpleline_place_t__prev(/* forwarded args */);
}

