// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F90
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F90 jmp     cs:off_4B97B0
//
// Resolved target: get_frame_retsize
// Target address:  0x4BC1A8
// GOT/IAT slot:    0x4B97B0
// Slot symbol:     off_4B97B0
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

