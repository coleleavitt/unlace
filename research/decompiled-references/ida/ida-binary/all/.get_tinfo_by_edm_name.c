// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112140
// Name:            .get_tinfo_by_edm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112140 jmp     cs:get_tinfo_by_edm_name_ptr
//
// Resolved target: get_tinfo_by_edm_name
// Target address:  0x8D3B88
// GOT/IAT slot:    0x89FD40
// Slot symbol:     get_tinfo_by_edm_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_by_edm_name(/* see target signature */)
{
    // Tail-call to get_tinfo_by_edm_name via GOT/IAT indirection
    return get_tinfo_by_edm_name(/* forwarded args */);
}

