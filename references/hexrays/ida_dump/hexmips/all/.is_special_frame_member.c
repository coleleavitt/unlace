// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF40
// Name:            .is_special_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF40 jmp     cs:off_4CD788
//
// Resolved target: is_special_frame_member
// Target address:  0x4D01A0
// GOT/IAT slot:    0x4CD788
// Slot symbol:     off_4CD788
// Target type:     <no type info>
// ============================================================

void .is_special_frame_member(/* see target signature */)
{
    // Tail-call to is_special_frame_member via GOT/IAT indirection
    return is_special_frame_member(/* forwarded args */);
}

