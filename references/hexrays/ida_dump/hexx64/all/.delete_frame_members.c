// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C100
// Name:            .delete_frame_members
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C100 jmp     cs:off_4ED868
//
// Resolved target: delete_frame_members
// Target address:  0x4F1B80
// GOT/IAT slot:    0x4ED868
// Slot symbol:     off_4ED868
// Target type:     <no type info>
// ============================================================

void .delete_frame_members(/* see target signature */)
{
    // Tail-call to delete_frame_members via GOT/IAT indirection
    return delete_frame_members(/* forwarded args */);
}

