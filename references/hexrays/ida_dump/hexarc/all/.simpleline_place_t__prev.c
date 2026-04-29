// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B0
// Name:            .simpleline_place_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B0 jmp     cs:off_4B9CC0
//
// Resolved target: simpleline_place_t__prev
// Target address:  0x4BC6E0
// GOT/IAT slot:    0x4B9CC0
// Slot symbol:     off_4B9CC0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__prev(/* see target signature */)
{
    // Tail-call to simpleline_place_t__prev via GOT/IAT indirection
    return simpleline_place_t__prev(/* forwarded args */);
}

