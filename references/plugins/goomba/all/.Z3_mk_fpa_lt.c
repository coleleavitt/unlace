// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4060
// Name:            .Z3_mk_fpa_lt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4060 jmp     cs:off_4E018
//
// Resolved target: Z3_mk_fpa_lt
// Target address:  0x4F618
// GOT/IAT slot:    0x4E018
// Slot symbol:     off_4E018
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_lt(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_lt via GOT/IAT indirection
    return Z3_mk_fpa_lt(/* forwarded args */);
}

