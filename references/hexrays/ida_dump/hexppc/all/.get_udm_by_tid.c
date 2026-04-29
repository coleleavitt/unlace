// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB60
// Name:            .get_udm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB60 jmp     cs:off_4DAD98
//
// Resolved target: get_udm_by_tid
// Target address:  0x4DD7B8
// GOT/IAT slot:    0x4DAD98
// Slot symbol:     off_4DAD98
// Target type:     <no type info>
// ============================================================

void .get_udm_by_tid(/* see target signature */)
{
    // Tail-call to get_udm_by_tid via GOT/IAT indirection
    return get_udm_by_tid(/* forwarded args */);
}

