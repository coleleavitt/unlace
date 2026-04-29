// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A920
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A920 jmp     cs:off_4CD478
//
// Resolved target: get_next_seg
// Target address:  0x4CFE80
// GOT/IAT slot:    0x4CD478
// Slot symbol:     off_4CD478
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

