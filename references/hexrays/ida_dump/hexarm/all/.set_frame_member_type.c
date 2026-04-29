// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3E0
// Name:            .set_frame_member_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3E0 jmp     cs:off_4E99D8
//
// Resolved target: set_frame_member_type
// Target address:  0x4EC3F8
// GOT/IAT slot:    0x4E99D8
// Slot symbol:     off_4E99D8
// Target type:     <no type info>
// ============================================================

void .set_frame_member_type(/* see target signature */)
{
    // Tail-call to set_frame_member_type via GOT/IAT indirection
    return set_frame_member_type(/* forwarded args */);
}

