// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB160
// Name:            .simpleline_place_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB160 jmp     cs:off_2C7B098
//
// Resolved target: simpleline_place_t__prev
// Target address:  0x52AAB0
// GOT/IAT slot:    0x2C7B098
// Slot symbol:     off_2C7B098
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__prev(/* see target signature */)
{
    // Tail-call to simpleline_place_t__prev via GOT/IAT indirection
    return simpleline_place_t__prev(/* forwarded args */);
}

