// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4940
// Name:            .Z3_mk_fpa_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4940 jmp     cs:off_4E488
//
// Resolved target: Z3_mk_fpa_sub
// Target address:  0x4FAC0
// GOT/IAT slot:    0x4E488
// Slot symbol:     off_4E488
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_sub(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_sub via GOT/IAT indirection
    return Z3_mk_fpa_sub(/* forwarded args */);
}

