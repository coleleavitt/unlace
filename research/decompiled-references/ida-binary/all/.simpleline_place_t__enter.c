// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAF0
// Name:            .simpleline_place_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAF0 jmp     cs:simpleline_place_t__enter_ptr
//
// Resolved target: simpleline_place_t__enter
// Target address:  0x8D9D00
// GOT/IAT slot:    0x8A4A18
// Slot symbol:     simpleline_place_t__enter_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to simpleline_place_t__enter via GOT/IAT indirection
    return simpleline_place_t__enter(/* forwarded args */);
}

