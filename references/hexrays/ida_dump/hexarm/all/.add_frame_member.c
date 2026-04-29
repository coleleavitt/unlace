// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E9F0
// Name:            .add_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E9F0 jmp     cs:off_4E9CE0
//
// Resolved target: add_frame_member
// Target address:  0x4EC720
// GOT/IAT slot:    0x4E9CE0
// Slot symbol:     off_4E9CE0
// Target type:     <no type info>
// ============================================================

void .add_frame_member(/* see target signature */)
{
    // Tail-call to add_frame_member via GOT/IAT indirection
    return add_frame_member(/* forwarded args */);
}

