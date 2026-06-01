// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7420
// Name:            .get_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7420 jmp     cs:off_2C791F8
//
// Resolved target: get_frame_size
// Target address:  0x5B7540
// GOT/IAT slot:    0x2C791F8
// Slot symbol:     off_2C791F8
// Target type:     <no type info>
// ============================================================

void .get_frame_size(/* see target signature */)
{
    // Tail-call to get_frame_size via GOT/IAT indirection
    return get_frame_size(/* forwarded args */);
}

