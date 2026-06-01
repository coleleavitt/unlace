// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112840
// Name:            .set_segment_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112840 jmp     cs:set_segment_cmt_ptr
//
// Resolved target: set_segment_cmt
// Target address:  0x8D4020
// GOT/IAT slot:    0x8A00C0
// Slot symbol:     set_segment_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .set_segment_cmt(/* see target signature */)
{
    // Tail-call to set_segment_cmt via GOT/IAT indirection
    return set_segment_cmt(/* forwarded args */);
}

