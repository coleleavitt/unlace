// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B080
// Name:            .delete_frame_members
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B080 jmp     cs:off_4BF828
//
// Resolved target: delete_frame_members
// Target address:  0x4C2D20
// GOT/IAT slot:    0x4BF828
// Slot symbol:     off_4BF828
// Target type:     <no type info>
// ============================================================

void .delete_frame_members(/* see target signature */)
{
    // Tail-call to delete_frame_members via GOT/IAT indirection
    return delete_frame_members(/* forwarded args */);
}

