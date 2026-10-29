// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76D0
// Name:            .calc_stkvar_struc_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76D0 jmp     cs:off_2C79350
//
// Resolved target: calc_stkvar_struc_offset
// Target address:  0x5B98D0
// GOT/IAT slot:    0x2C79350
// Slot symbol:     off_2C79350
// Target type:     <no type info>
// ============================================================

void .calc_stkvar_struc_offset(/* see target signature */)
{
    // Tail-call to calc_stkvar_struc_offset via GOT/IAT indirection
    return calc_stkvar_struc_offset(/* forwarded args */);
}

