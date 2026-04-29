// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4620
// Name:            .Z3_get_bv_sort_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4620 jmp     cs:off_4E2F8
//
// Resolved target: Z3_get_bv_sort_size
// Target address:  0x4F908
// GOT/IAT slot:    0x4E2F8
// Slot symbol:     off_4E2F8
// Target type:     <no type info>
// ============================================================

void .Z3_get_bv_sort_size(/* see target signature */)
{
    // Tail-call to Z3_get_bv_sort_size via GOT/IAT indirection
    return Z3_get_bv_sort_size(/* forwarded args */);
}

