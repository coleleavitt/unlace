// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159C0
// Name:            .simpleline_place_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159C0 jmp     cs:simpleline_place_t__beginning_ptr
//
// Resolved target: simpleline_place_t__beginning
// Target address:  0x8D5FE0
// GOT/IAT slot:    0x8A1980
// Slot symbol:     simpleline_place_t__beginning_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__beginning(/* see target signature */)
{
    // Tail-call to simpleline_place_t__beginning via GOT/IAT indirection
    return simpleline_place_t__beginning(/* forwarded args */);
}

