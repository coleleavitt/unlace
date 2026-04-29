// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A680
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A680 jmp     cs:off_4B9B28
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4BC530
// GOT/IAT slot:    0x4B9B28
// Slot symbol:     off_4B9B28
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

