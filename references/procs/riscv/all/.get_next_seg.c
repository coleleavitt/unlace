// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2B0
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2B0 jmp     cs:off_35140
//
// Resolved target: get_next_seg
// Target address:  0x35790
// GOT/IAT slot:    0x35140
// Slot symbol:     off_35140
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

