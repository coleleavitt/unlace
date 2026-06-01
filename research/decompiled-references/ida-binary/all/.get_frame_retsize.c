// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A950
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A950 jmp     cs:get_frame_retsize_ptr
//
// Resolved target: get_frame_retsize
// Target address:  0x8D9228
// GOT/IAT slot:    0x8A4148
// Slot symbol:     get_frame_retsize_ptr
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

