// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119570
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119570 jmp     cs:get_first_seg_ptr
//
// Resolved target: get_first_seg
// Target address:  0x8D8548
// GOT/IAT slot:    0x8A3758
// Slot symbol:     get_first_seg_ptr
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

