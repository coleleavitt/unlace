// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112920
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112920 jmp     cs:get_last_seg_ptr
//
// Resolved target: get_last_seg
// Target address:  0x8D40A8
// GOT/IAT slot:    0x8A0130
// Slot symbol:     get_last_seg_ptr
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

