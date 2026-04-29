// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4A0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4A0 jmp     cs:off_4C0238
//
// Resolved target: get_first_seg
// Target address:  0x4C3200
// GOT/IAT slot:    0x4C0238
// Slot symbol:     off_4C0238
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

