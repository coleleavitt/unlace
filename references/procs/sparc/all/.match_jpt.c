// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72D0
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72D0 jmp     cs:off_19150
//
// Resolved target: match_jpt
// Target address:  0x19680
// GOT/IAT slot:    0x19150
// Slot symbol:     off_19150
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

