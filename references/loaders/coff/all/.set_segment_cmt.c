// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43C0
// Name:            .set_segment_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43C0 jmp     cs:off_231C8
//
// Resolved target: set_segment_cmt
// Target address:  0x235E8
// GOT/IAT slot:    0x231C8
// Slot symbol:     off_231C8
// Target type:     <no type info>
// ============================================================

void .set_segment_cmt(/* see target signature */)
{
    // Tail-call to set_segment_cmt via GOT/IAT indirection
    return set_segment_cmt(/* forwarded args */);
}

