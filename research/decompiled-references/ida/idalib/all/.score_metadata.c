// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7650
// Name:            .score_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7650 jmp     cs:off_2C79310
//
// Resolved target: score_metadata
// Target address:  0x7FBC90
// GOT/IAT slot:    0x2C79310
// Slot symbol:     off_2C79310
// Target type:     <no type info>
// ============================================================

void .score_metadata(/* see target signature */)
{
    // Tail-call to score_metadata via GOT/IAT indirection
    return score_metadata(/* forwarded args */);
}

