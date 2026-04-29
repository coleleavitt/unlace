// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9320
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9320 jmp     cs:off_89178
//
// Resolved target: get_next_seg
// Target address:  0x8C478
// GOT/IAT slot:    0x89178
// Slot symbol:     off_89178
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

