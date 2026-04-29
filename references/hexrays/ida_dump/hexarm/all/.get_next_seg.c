// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D930
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D930 jmp     cs:off_4E9480
//
// Resolved target: get_next_seg
// Target address:  0x4EBE88
// GOT/IAT slot:    0x4E9480
// Slot symbol:     off_4E9480
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

