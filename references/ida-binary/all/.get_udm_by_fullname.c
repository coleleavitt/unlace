// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AC0
// Name:            .get_udm_by_fullname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AC0 jmp     cs:get_udm_by_fullname_ptr
//
// Resolved target: get_udm_by_fullname
// Target address:  0x8D7EA0
// GOT/IAT slot:    0x8A3200
// Slot symbol:     get_udm_by_fullname_ptr
// Target type:     <no type info>
// ============================================================

void .get_udm_by_fullname(/* see target signature */)
{
    // Tail-call to get_udm_by_fullname via GOT/IAT indirection
    return get_udm_by_fullname(/* forwarded args */);
}

