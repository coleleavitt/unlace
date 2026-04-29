// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4B0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4B0 jmp     cs:off_4ED240
//
// Resolved target: get_first_seg
// Target address:  0x4F1538
// GOT/IAT slot:    0x4ED240
// Slot symbol:     off_4ED240
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

