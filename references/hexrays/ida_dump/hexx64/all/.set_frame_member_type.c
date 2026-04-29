// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C470
// Name:            .set_frame_member_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C470 jmp     cs:off_4EDA20
//
// Resolved target: set_frame_member_type
// Target address:  0x4F1D40
// GOT/IAT slot:    0x4EDA20
// Slot symbol:     off_4EDA20
// Target type:     <no type info>
// ============================================================

void .set_frame_member_type(/* see target signature */)
{
    // Tail-call to set_frame_member_type via GOT/IAT indirection
    return set_frame_member_type(/* forwarded args */);
}

