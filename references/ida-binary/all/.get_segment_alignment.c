// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118280
// Name:            .get_segment_alignment
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118280 jmp     cs:get_segment_alignment_ptr
//
// Resolved target: get_segment_alignment
// Target address:  0x8D79A8
// GOT/IAT slot:    0x8A2DE0
// Slot symbol:     get_segment_alignment_ptr
// Target type:     <no type info>
// ============================================================

void .get_segment_alignment(/* see target signature */)
{
    // Tail-call to get_segment_alignment via GOT/IAT indirection
    return get_segment_alignment(/* forwarded args */);
}

