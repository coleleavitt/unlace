// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E0A0
// Name:            .delete_frame_members
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E0A0 jmp     cs:off_4E9838
//
// Resolved target: delete_frame_members
// Target address:  0x4EC258
// GOT/IAT slot:    0x4E9838
// Slot symbol:     off_4E9838
// Target type:     <no type info>
// ============================================================

void .delete_frame_members(/* see target signature */)
{
    // Tail-call to delete_frame_members via GOT/IAT indirection
    return delete_frame_members(/* forwarded args */);
}

