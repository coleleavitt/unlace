// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA040
// Name:            .calc_frame_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA040 jmp     cs:off_2C7A808
//
// Resolved target: calc_frame_offset
// Target address:  0x5B9730
// GOT/IAT slot:    0x2C7A808
// Slot symbol:     off_2C7A808
// Target type:     <no type info>
// ============================================================

void .calc_frame_offset(/* see target signature */)
{
    // Tail-call to calc_frame_offset via GOT/IAT indirection
    return calc_frame_offset(/* forwarded args */);
}

