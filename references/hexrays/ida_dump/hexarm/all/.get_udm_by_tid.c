// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBA0
// Name:            .get_udm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBA0 jmp     cs:off_4E9DB8
//
// Resolved target: get_udm_by_tid
// Target address:  0x4EC7F8
// GOT/IAT slot:    0x4E9DB8
// Slot symbol:     off_4E9DB8
// Target type:     <no type info>
// ============================================================

void .get_udm_by_tid(/* see target signature */)
{
    // Tail-call to get_udm_by_tid via GOT/IAT indirection
    return get_udm_by_tid(/* forwarded args */);
}

