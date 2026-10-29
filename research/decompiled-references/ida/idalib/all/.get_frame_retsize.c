// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFF0
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFF0 jmp     cs:off_2C7BFE0
//
// Resolved target: get_frame_retsize
// Target address:  0x5B75E0
// GOT/IAT slot:    0x2C7BFE0
// Slot symbol:     off_2C7BFE0
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}

