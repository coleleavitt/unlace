// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20620
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20620 jmp     cs:off_952F8
//
// Resolved target: match_jpt
// Target address:  0x95D30
// GOT/IAT slot:    0x952F8
// Slot symbol:     off_952F8
// Target type:     <no type info>
// ============================================================

void .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

