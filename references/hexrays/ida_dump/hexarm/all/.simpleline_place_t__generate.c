// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E6E0
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E6E0 jmp     cs:off_4E9B58
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4EC580
// GOT/IAT slot:    0x4E9B58
// Slot symbol:     off_4E9B58
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

