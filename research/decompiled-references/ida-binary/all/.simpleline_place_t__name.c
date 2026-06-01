// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BCE0
// Name:            .simpleline_place_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BCE0 jmp     cs:simpleline_place_t__name_ptr
//
// Resolved target: simpleline_place_t__name
// Target address:  0x8D9E40
// GOT/IAT slot:    0x8A4B10
// Slot symbol:     simpleline_place_t__name_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__name(/* see target signature */)
{
    // Tail-call to simpleline_place_t__name via GOT/IAT indirection
    return simpleline_place_t__name(/* forwarded args */);
}

