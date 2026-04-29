// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F40
// Name:            .is_special_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F40 jmp     cs:off_4B9788
//
// Resolved target: is_special_frame_member
// Target address:  0x4BC180
// GOT/IAT slot:    0x4B9788
// Slot symbol:     off_4B9788
// Target type:     <no type info>
// ============================================================

void .is_special_frame_member(/* see target signature */)
{
    // Tail-call to is_special_frame_member via GOT/IAT indirection
    return is_special_frame_member(/* forwarded args */);
}

