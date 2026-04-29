// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20560
// Name:            .get_frame_var
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20560 jmp     cs:off_95298
//
// Resolved target: get_frame_var
// Target address:  0x95CD0
// GOT/IAT slot:    0x95298
// Slot symbol:     off_95298
// Target type:     <no type info>
// ============================================================

void .get_frame_var(/* see target signature */)
{
    // Tail-call to get_frame_var via GOT/IAT indirection
    return get_frame_var(/* forwarded args */);
}

