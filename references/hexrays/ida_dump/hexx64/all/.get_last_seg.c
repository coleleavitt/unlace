// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B730
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B730 jmp     cs:off_4ED380
//
// Resolved target: get_last_seg
// Target address:  0x4F1678
// GOT/IAT slot:    0x4ED380
// Slot symbol:     off_4ED380
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

