// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9820
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9820 jmp     cs:off_893F8
//
// Resolved target: get_prev_seg
// Target address:  0x8C718
// GOT/IAT slot:    0x893F8
// Slot symbol:     off_893F8
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

