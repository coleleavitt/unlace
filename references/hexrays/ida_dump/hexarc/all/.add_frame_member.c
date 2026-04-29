// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A990
// Name:            .add_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A990 jmp     cs:off_4B9CB0
//
// Resolved target: add_frame_member
// Target address:  0x4BC6D0
// GOT/IAT slot:    0x4B9CB0
// Slot symbol:     off_4B9CB0
// Target type:     <no type info>
// ============================================================

void .add_frame_member(/* see target signature */)
{
    // Tail-call to add_frame_member via GOT/IAT indirection
    return add_frame_member(/* forwarded args */);
}

