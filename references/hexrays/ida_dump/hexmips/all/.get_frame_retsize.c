// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFA0
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFA0 jmp     cs:off_4CD7B8
//
// Resolved target: get_frame_retsize
// Target address:  0x4D01D0
// GOT/IAT slot:    0x4CD7B8
// Slot symbol:     off_4CD7B8
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

