// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E0
// Name:            .score_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E0 jmp     cs:off_4DA4D8
//
// Resolved target: score_metadata
// Target address:  0x4DCEC0
// GOT/IAT slot:    0x4DA4D8
// Slot symbol:     off_4DA4D8
// Target type:     <no type info>
// ============================================================

void .score_metadata(/* see target signature */)
{
    // Tail-call to score_metadata via GOT/IAT indirection
    return score_metadata(/* forwarded args */);
}

