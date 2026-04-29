// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6A0
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6A0 jmp     cs:off_4BFB38
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4C3038
// GOT/IAT slot:    0x4BFB38
// Slot symbol:     off_4BFB38
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

