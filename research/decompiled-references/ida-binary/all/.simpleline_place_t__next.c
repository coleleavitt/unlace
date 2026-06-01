// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157C0
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157C0 jmp     cs:simpleline_place_t__next_ptr
//
// Resolved target: simpleline_place_t__next
// Target address:  0x8D5E88
// GOT/IAT slot:    0x8A1880
// Slot symbol:     simpleline_place_t__next_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

