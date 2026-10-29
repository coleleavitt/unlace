// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9950
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9950 jmp     cs:off_2C7A490
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x52AEC0
// GOT/IAT slot:    0x2C7A490
// Slot symbol:     off_2C7A490
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

