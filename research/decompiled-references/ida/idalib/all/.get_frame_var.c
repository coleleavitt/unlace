// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7AA0
// Name:            .get_frame_var
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7AA0 jmp     cs:off_2C79538
//
// Resolved target: get_frame_var
// Target address:  0x5B9D30
// GOT/IAT slot:    0x2C79538
// Slot symbol:     off_2C79538
// Target type:     <no type info>
// ============================================================

void .get_frame_var(/* see target signature */)
{
    // Tail-call to get_frame_var via GOT/IAT indirection
    return get_frame_var(/* forwarded args */);
}

