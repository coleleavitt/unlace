// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8EF0
// Name:            .simpleline_place_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8EF0 jmp     cs:off_2C79F60
//
// Resolved target: simpleline_place_t__copyfrom
// Target address:  0x52A9A0
// GOT/IAT slot:    0x2C79F60
// Slot symbol:     off_2C79F60
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__copyfrom(/* see target signature */)
{
    // Tail-call to simpleline_place_t__copyfrom via GOT/IAT indirection
    return simpleline_place_t__copyfrom(/* forwarded args */);
}

