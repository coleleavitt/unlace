// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113AB0
// Name:            .simpleline_place_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113AB0 jmp     cs:simpleline_place_t__adjust_ptr
//
// Resolved target: simpleline_place_t__adjust
// Target address:  0x8D4BF0
// GOT/IAT slot:    0x8A09F8
// Slot symbol:     simpleline_place_t__adjust_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__adjust(/* see target signature */)
{
    // Tail-call to simpleline_place_t__adjust via GOT/IAT indirection
    return simpleline_place_t__adjust(/* forwarded args */);
}

