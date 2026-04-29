// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB20
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB20 jmp     cs:off_4EDD78
//
// Resolved target: get_prev_seg
// Target address:  0x4F20B8
// GOT/IAT slot:    0x4EDD78
// Slot symbol:     off_4EDD78
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

