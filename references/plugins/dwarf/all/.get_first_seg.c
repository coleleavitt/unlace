// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA190
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA190 jmp     cs:off_CA0B0
//
// Resolved target: get_first_seg
// Target address:  0xD09E0
// GOT/IAT slot:    0xCA0B0
// Slot symbol:     off_CA0B0
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

