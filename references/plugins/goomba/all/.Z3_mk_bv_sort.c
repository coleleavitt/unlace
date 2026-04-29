// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4800
// Name:            .Z3_mk_bv_sort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4800 jmp     cs:off_4E3E8
//
// Resolved target: Z3_mk_bv_sort
// Target address:  0x4FA08
// GOT/IAT slot:    0x4E3E8
// Slot symbol:     off_4E3E8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bv_sort(/* see target signature */)
{
    // Tail-call to Z3_mk_bv_sort via GOT/IAT indirection
    return Z3_mk_bv_sort(/* forwarded args */);
}

