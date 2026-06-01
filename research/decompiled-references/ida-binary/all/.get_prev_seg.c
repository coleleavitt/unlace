// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170E0
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170E0 jmp     cs:get_prev_seg_ptr
//
// Resolved target: get_prev_seg
// Target address:  0x8D6E58
// GOT/IAT slot:    0x8A2510
// Slot symbol:     get_prev_seg_ptr
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

