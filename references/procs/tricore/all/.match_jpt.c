// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6320
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6320 jmp     cs:off_24178
//
// Resolved target: match_jpt
// Target address:  0x25F48
// GOT/IAT slot:    0x24178
// Slot symbol:     off_24178
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

