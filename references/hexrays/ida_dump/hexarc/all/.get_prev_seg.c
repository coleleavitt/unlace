// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA00
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA00 jmp     cs:off_4B9CE8
//
// Resolved target: get_prev_seg
// Target address:  0x4BC708
// GOT/IAT slot:    0x4B9CE8
// Slot symbol:     off_4B9CE8
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

