// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_14100
//
// Resolved target: get_next_seg
// Target address:  0x146E8
// GOT/IAT slot:    0x14100
// Slot symbol:     off_14100
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

