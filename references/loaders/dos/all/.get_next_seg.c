// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_B0E0
//
// Resolved target: get_next_seg
// Target address:  0xB578
// GOT/IAT slot:    0xB0E0
// Slot symbol:     off_B0E0
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}

