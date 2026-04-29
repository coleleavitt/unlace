// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA20
// Name:            .score_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA20 jmp     cs:off_4ED4F8
//
// Resolved target: score_metadata
// Target address:  0x4F17F8
// GOT/IAT slot:    0x4ED4F8
// Slot symbol:     off_4ED4F8
// Target type:     <no type info>
// ============================================================

void .score_metadata(/* see target signature */)
{
    // Tail-call to score_metadata via GOT/IAT indirection
    return score_metadata(/* forwarded args */);
}

