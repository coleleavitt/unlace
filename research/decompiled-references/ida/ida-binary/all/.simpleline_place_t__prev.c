// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117970
// Name:            .simpleline_place_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117970 jmp     cs:simpleline_place_t__prev_ptr
//
// Resolved target: simpleline_place_t__prev
// Target address:  0x8D73E0
// GOT/IAT slot:    0x8A2958
// Slot symbol:     simpleline_place_t__prev_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__prev(/* see target signature */)
{
    // Tail-call to simpleline_place_t__prev via GOT/IAT indirection
    return simpleline_place_t__prev(/* forwarded args */);
}

