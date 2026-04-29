// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47C0
// Name:            .get_nlist_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47C0 jmp     cs:off_283C8
//
// Resolved target: get_nlist_name
// Target address:  0x29D80
// GOT/IAT slot:    0x283C8
// Slot symbol:     off_283C8
// Target type:     <no type info>
// ============================================================

void .get_nlist_name(/* see target signature */)
{
    // Tail-call to get_nlist_name via GOT/IAT indirection
    return get_nlist_name(/* forwarded args */);
}

