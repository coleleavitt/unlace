// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4320
// Name:            .Z3_mk_fpa_div
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4320 jmp     cs:off_4E178
//
// Resolved target: Z3_mk_fpa_div
// Target address:  0x4F780
// GOT/IAT slot:    0x4E178
// Slot symbol:     off_4E178
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_div(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_div via GOT/IAT indirection
    return Z3_mk_fpa_div(/* forwarded args */);
}

