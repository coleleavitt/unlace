// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C010
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C010 jmp     cs:off_4ED7F0
//
// Resolved target: get_frame_retsize
// Target address:  0x4F1B00
// GOT/IAT slot:    0x4ED7F0
// Slot symbol:     off_4ED7F0
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

