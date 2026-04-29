// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .add_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_13260
//
// Resolved target: add_frame_member
// Target address:  0x135F0
// GOT/IAT slot:    0x13260
// Slot symbol:     off_13260
// Target type:     <no type info>
// ============================================================

void .add_frame_member(/* see target signature */)
{
    // Tail-call to add_frame_member via GOT/IAT indirection
    return add_frame_member(/* forwarded args */);
}

