// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DFC0
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DFC0 jmp     cs:off_4E97C8
//
// Resolved target: get_frame_retsize
// Target address:  0x4EC1E0
// GOT/IAT slot:    0x4E97C8
// Slot symbol:     off_4E97C8
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

