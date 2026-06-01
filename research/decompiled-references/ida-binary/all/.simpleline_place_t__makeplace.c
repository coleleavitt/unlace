// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119330
// Name:            .simpleline_place_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119330 jmp     cs:simpleline_place_t__makeplace_ptr
//
// Resolved target: simpleline_place_t__makeplace
// Target address:  0x8D83E0
// GOT/IAT slot:    0x8A3638
// Slot symbol:     simpleline_place_t__makeplace_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__makeplace(/* see target signature */)
{
    // Tail-call to simpleline_place_t__makeplace via GOT/IAT indirection
    return simpleline_place_t__makeplace(/* forwarded args */);
}

