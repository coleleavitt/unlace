// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4C0
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4C0 jmp     cs:off_2C7B248
//
// Resolved target: set_frame_size
// Target address:  0x5BD750
// GOT/IAT slot:    0x2C7B248
// Slot symbol:     off_2C7B248
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}

