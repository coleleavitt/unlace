// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A700
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A700 jmp     cs:off_4CD368
//
// Resolved target: get_last_seg
// Target address:  0x4CFD58
// GOT/IAT slot:    0x4CD368
// Slot symbol:     off_4CD368
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

