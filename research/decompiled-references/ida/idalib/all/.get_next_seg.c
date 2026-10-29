// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA090
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA090 jmp     cs:off_2C7A830
//
// Resolved target: get_next_seg
// Target address:  0x50E270
// GOT/IAT slot:    0x2C7A830
// Slot symbol:     off_2C7A830
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

