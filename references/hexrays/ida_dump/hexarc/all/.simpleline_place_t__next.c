// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0A0
// Name:            .simpleline_place_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0A0 jmp     cs:off_4BA038
//
// Resolved target: simpleline_place_t__next
// Target address:  0x4BCA68
// GOT/IAT slot:    0x4BA038
// Slot symbol:     off_4BA038
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__next(/* see target signature */)
{
    // Tail-call to simpleline_place_t__next via GOT/IAT indirection
    return simpleline_place_t__next(/* forwarded args */);
}

