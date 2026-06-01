// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF50
// Name:            .get_edm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF50 jmp     cs:off_2C7B790
//
// Resolved target: get_edm_by_tid
// Target address:  0x6BDBF0
// GOT/IAT slot:    0x2C7B790
// Slot symbol:     off_2C7B790
// Target type:     <no type info>
// ============================================================

void .get_edm_by_tid(/* see target signature */)
{
    // Tail-call to get_edm_by_tid via GOT/IAT indirection
    return get_edm_by_tid(/* forwarded args */);
}

