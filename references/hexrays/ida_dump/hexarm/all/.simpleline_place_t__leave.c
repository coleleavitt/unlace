// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E530
// Name:            .simpleline_place_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E530 jmp     cs:off_4E9A80
//
// Resolved target: simpleline_place_t__leave
// Target address:  0x4EC4A0
// GOT/IAT slot:    0x4E9A80
// Slot symbol:     off_4E9A80
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to simpleline_place_t__leave via GOT/IAT indirection
    return simpleline_place_t__leave(/* forwarded args */);
}

