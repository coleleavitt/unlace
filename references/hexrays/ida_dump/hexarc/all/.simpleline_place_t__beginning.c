// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA90
// Name:            .simpleline_place_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA90 jmp     cs:off_4B9D30
//
// Resolved target: simpleline_place_t__beginning
// Target address:  0x4BC750
// GOT/IAT slot:    0x4B9D30
// Slot symbol:     off_4B9D30
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__beginning(/* see target signature */)
{
    // Tail-call to simpleline_place_t__beginning via GOT/IAT indirection
    return simpleline_place_t__beginning(/* forwarded args */);
}

