// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42A0
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42A0 jmp     cs:off_28138
//
// Resolved target: get_next_seg
// Target address:  0x29AD0
// GOT/IAT slot:    0x28138
// Slot symbol:     off_28138
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

