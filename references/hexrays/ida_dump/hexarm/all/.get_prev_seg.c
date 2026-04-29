// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA60
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA60 jmp     cs:off_4E9D18
//
// Resolved target: get_prev_seg
// Target address:  0x4EC758
// GOT/IAT slot:    0x4E9D18
// Slot symbol:     off_4E9D18
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

