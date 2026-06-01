// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117520
// Name:            .get_segment_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117520 jmp     cs:get_segment_cmt_ptr
//
// Resolved target: get_segment_cmt
// Target address:  0x8D7140
// GOT/IAT slot:    0x8A2730
// Slot symbol:     get_segment_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .get_segment_cmt(/* see target signature */)
{
    // Tail-call to get_segment_cmt via GOT/IAT indirection
    return get_segment_cmt(/* forwarded args */);
}

