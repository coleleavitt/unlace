// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C770
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C770 jmp     cs:off_4EDBA0
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4F1ED0
// GOT/IAT slot:    0x4EDBA0
// Slot symbol:     off_4EDBA0
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

