// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_13188
//
// Resolved target: set_frame_size
// Target address:  0x13508
// GOT/IAT slot:    0x13188
// Slot symbol:     off_13188
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}

