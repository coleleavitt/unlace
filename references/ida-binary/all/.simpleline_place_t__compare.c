// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1184D0
// Name:            .simpleline_place_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1184D0 jmp     cs:simpleline_place_t__compare_ptr
//
// Resolved target: simpleline_place_t__compare
// Target address:  0x8D7B08
// GOT/IAT slot:    0x8A2F08
// Slot symbol:     simpleline_place_t__compare_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__compare(/* see target signature */)
{
    // Tail-call to simpleline_place_t__compare via GOT/IAT indirection
    return simpleline_place_t__compare(/* forwarded args */);
}

