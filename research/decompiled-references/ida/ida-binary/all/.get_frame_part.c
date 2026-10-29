// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180F0
// Name:            .get_frame_part
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180F0 jmp     cs:get_frame_part_ptr
//
// Resolved target: get_frame_part
// Target address:  0x8D78B8
// GOT/IAT slot:    0x8A2D18
// Slot symbol:     get_frame_part_ptr
// Target type:     <no type info>
// ============================================================

void .get_frame_part(/* see target signature */)
{
    // Tail-call to get_frame_part via GOT/IAT indirection
    return get_frame_part(/* forwarded args */);
}

