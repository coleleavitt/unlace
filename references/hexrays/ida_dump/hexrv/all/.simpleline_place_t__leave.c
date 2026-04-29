// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4F0
// Name:            .simpleline_place_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4F0 jmp     cs:off_4BFA60
//
// Resolved target: simpleline_place_t__leave
// Target address:  0x4C2F58
// GOT/IAT slot:    0x4BFA60
// Slot symbol:     off_4BFA60
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to simpleline_place_t__leave via GOT/IAT indirection
    return simpleline_place_t__leave(/* forwarded args */);
}

