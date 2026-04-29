// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8170
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8170 jmp     cs:off_2A0A0
//
// Resolved target: get_first_seg
// Target address:  0x2BAB0
// GOT/IAT slot:    0x2A0A0
// Slot symbol:     off_2A0A0
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

