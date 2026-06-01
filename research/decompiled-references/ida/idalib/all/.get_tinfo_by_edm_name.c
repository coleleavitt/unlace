// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B60
// Name:            .get_tinfo_by_edm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B60 jmp     cs:off_2C79598
//
// Resolved target: get_tinfo_by_edm_name
// Target address:  0x6BB980
// GOT/IAT slot:    0x2C79598
// Slot symbol:     off_2C79598
// Target type:     <no type info>
// ============================================================

void .get_tinfo_by_edm_name(/* see target signature */)
{
    // Tail-call to get_tinfo_by_edm_name via GOT/IAT indirection
    return get_tinfo_by_edm_name(/* forwarded args */);
}

