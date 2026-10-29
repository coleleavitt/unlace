// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E80
// Name:            .get_edm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E80 jmp     cs:get_edm_by_tid_ptr
//
// Resolved target: get_edm_by_tid
// Target address:  0x8D80D0
// GOT/IAT slot:    0x8A33E0
// Slot symbol:     get_edm_by_tid_ptr
// Target type:     <no type info>
// ============================================================

void .get_edm_by_tid(/* see target signature */)
{
    // Tail-call to get_edm_by_tid via GOT/IAT indirection
    return get_edm_by_tid(/* forwarded args */);
}

