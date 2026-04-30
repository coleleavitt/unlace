// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC90
// Name:            .simpleline_place_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC90 jmp     cs:simpleline_place_t__compare2_ptr
//
// Resolved target: simpleline_place_t__compare2
// Target address:  0x8D9E10
// GOT/IAT slot:    0x8A4AE8
// Slot symbol:     simpleline_place_t__compare2_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__compare2(/* see target signature */)
{
    // Tail-call to simpleline_place_t__compare2 via GOT/IAT indirection
    return simpleline_place_t__compare2(/* forwarded args */);
}

