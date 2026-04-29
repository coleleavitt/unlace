// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19500
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19500 jmp     cs:off_75268
//
// Resolved target: match_jpt
// Target address:  0x75AB8
// GOT/IAT slot:    0x75268
// Slot symbol:     off_75268
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

