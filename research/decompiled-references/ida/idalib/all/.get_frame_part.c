// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB650
// Name:            .get_frame_part
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB650 jmp     cs:off_2C7B310
//
// Resolved target: get_frame_part
// Target address:  0x5B7660
// GOT/IAT slot:    0x2C7B310
// Slot symbol:     off_2C7B310
// Target type:     <no type info>
// ============================================================

void .get_frame_part(/* see target signature */)
{
    // Tail-call to get_frame_part via GOT/IAT indirection
    return get_frame_part(/* forwarded args */);
}

