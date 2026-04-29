// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29700
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29700 jmp     cs:off_4B9368
//
// Resolved target: get_last_seg
// Target address:  0x4BBD38
// GOT/IAT slot:    0x4B9368
// Slot symbol:     off_4B9368
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

