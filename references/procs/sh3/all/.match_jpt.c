// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52B0
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52B0 jmp     cs:off_15140
//
// Resolved target: match_jpt
// Target address:  0x161D0
// GOT/IAT slot:    0x15140
// Slot symbol:     off_15140
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

