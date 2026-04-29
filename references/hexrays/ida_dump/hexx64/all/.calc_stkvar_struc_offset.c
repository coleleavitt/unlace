// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C450
// Name:            .calc_stkvar_struc_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C450 jmp     cs:off_4EDA10
//
// Resolved target: calc_stkvar_struc_offset
// Target address:  0x4F1D30
// GOT/IAT slot:    0x4EDA10
// Slot symbol:     off_4EDA10
// Target type:     <no type info>
// ============================================================

void .calc_stkvar_struc_offset(/* see target signature */)
{
    // Tail-call to calc_stkvar_struc_offset via GOT/IAT indirection
    return calc_stkvar_struc_offset(/* forwarded args */);
}

