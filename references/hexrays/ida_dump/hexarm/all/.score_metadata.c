// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA00
// Name:            .score_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA00 jmp     cs:off_4E94E8
//
// Resolved target: score_metadata
// Target address:  0x4EBEF0
// GOT/IAT slot:    0x4E94E8
// Slot symbol:     off_4E94E8
// Target type:     <no type info>
// ============================================================

void .score_metadata(/* see target signature */)
{
    // Tail-call to score_metadata via GOT/IAT indirection
    return score_metadata(/* forwarded args */);
}

