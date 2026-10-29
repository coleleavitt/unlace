// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115CB0
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115CB0 jmp     cs:get_next_seg_ptr
//
// Resolved target: get_next_seg
// Target address:  0x8D61B0
// GOT/IAT slot:    0x8A1AF8
// Slot symbol:     get_next_seg_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

