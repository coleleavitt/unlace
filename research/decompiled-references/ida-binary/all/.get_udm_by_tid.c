// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B120
// Name:            .get_udm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B120 jmp     cs:get_udm_by_tid_ptr
//
// Resolved target: get_udm_by_tid
// Target address:  0x8D96D0
// GOT/IAT slot:    0x8A4530
// Slot symbol:     get_udm_by_tid_ptr
// Target type:     <no type info>
// ============================================================

void .get_udm_by_tid(/* see target signature */)
{
    // Tail-call to get_udm_by_tid via GOT/IAT indirection
    return get_udm_by_tid(/* forwarded args */);
}

