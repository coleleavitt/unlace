// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA560
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA560 jmp     cs:off_35298
//
// Resolved target: set_frame_size
// Target address:  0x358E8
// GOT/IAT slot:    0x35298
// Slot symbol:     off_35298
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}

