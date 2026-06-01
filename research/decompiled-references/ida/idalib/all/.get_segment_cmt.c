// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAEE0
// Name:            .get_segment_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAEE0 jmp     cs:off_2C7AF58
//
// Resolved target: get_segment_cmt
// Target address:  0x50E300
// GOT/IAT slot:    0x2C7AF58
// Slot symbol:     off_2C7AF58
// Target type:     <no type info>
// ============================================================

void .get_segment_cmt(/* see target signature */)
{
    // Tail-call to get_segment_cmt via GOT/IAT indirection
    return get_segment_cmt(/* forwarded args */);
}

