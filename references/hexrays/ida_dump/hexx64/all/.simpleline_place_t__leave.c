// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C5B0
// Name:            .simpleline_place_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C5B0 jmp     cs:off_4EDAC0
//
// Resolved target: simpleline_place_t__leave
// Target address:  0x4F1DE8
// GOT/IAT slot:    0x4EDAC0
// Slot symbol:     off_4EDAC0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to simpleline_place_t__leave via GOT/IAT indirection
    return simpleline_place_t__leave(/* forwarded args */);
}

