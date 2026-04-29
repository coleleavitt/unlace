// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x299E0
// Name:            .score_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x299E0 jmp     cs:off_4B94D8
//
// Resolved target: score_metadata
// Target address:  0x4BBEC0
// GOT/IAT slot:    0x4B94D8
// Slot symbol:     off_4B94D8
// Target type:     <no type info>
// ============================================================

void .score_metadata(/* see target signature */)
{
    // Tail-call to score_metadata via GOT/IAT indirection
    return score_metadata(/* forwarded args */);
}

