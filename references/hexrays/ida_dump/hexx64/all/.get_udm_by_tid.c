// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC70
// Name:            .get_udm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC70 jmp     cs:off_4EDE20
//
// Resolved target: get_udm_by_tid
// Target address:  0x4F2160
// GOT/IAT slot:    0x4EDE20
// Slot symbol:     off_4EDE20
// Target type:     <no type info>
// ============================================================

void .get_udm_by_tid(/* see target signature */)
{
    // Tail-call to get_udm_by_tid via GOT/IAT indirection
    return get_udm_by_tid(/* forwarded args */);
}

