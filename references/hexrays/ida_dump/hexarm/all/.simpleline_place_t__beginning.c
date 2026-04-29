// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EAF0
// Name:            .simpleline_place_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EAF0 jmp     cs:off_4E9D60
//
// Resolved target: simpleline_place_t__beginning
// Target address:  0x4EC7A0
// GOT/IAT slot:    0x4E9D60
// Slot symbol:     off_4E9D60
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__beginning(/* see target signature */)
{
    // Tail-call to simpleline_place_t__beginning via GOT/IAT indirection
    return simpleline_place_t__beginning(/* forwarded args */);
}

