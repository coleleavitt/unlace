// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A070
// Name:            .delete_frame_members
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A070 jmp     cs:off_4B9820
//
// Resolved target: delete_frame_members
// Target address:  0x4BC220
// GOT/IAT slot:    0x4B9820
// Slot symbol:     off_4B9820
// Target type:     <no type info>
// ============================================================

void .delete_frame_members(/* see target signature */)
{
    // Tail-call to delete_frame_members via GOT/IAT indirection
    return delete_frame_members(/* forwarded args */);
}

