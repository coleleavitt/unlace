// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3A0
// Name:            .set_frame_member_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3A0 jmp     cs:off_4B99B8
//
// Resolved target: set_frame_member_type
// Target address:  0x4BC3B8
// GOT/IAT slot:    0x4B99B8
// Slot symbol:     off_4B99B8
// Target type:     <no type info>
// ============================================================

void .set_frame_member_type(/* see target signature */)
{
    // Tail-call to set_frame_member_type via GOT/IAT indirection
    return set_frame_member_type(/* forwarded args */);
}

