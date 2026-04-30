// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111AA0
// Name:            .calc_stkvar_struc_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111AA0 jmp     cs:calc_stkvar_struc_offset_ptr
//
// Resolved target: calc_stkvar_struc_offset
// Target address:  0x8D3768
// GOT/IAT slot:    0x89F9F0
// Slot symbol:     calc_stkvar_struc_offset_ptr
// Target type:     <no type info>
// ============================================================

void .calc_stkvar_struc_offset(/* see target signature */)
{
    // Tail-call to calc_stkvar_struc_offset via GOT/IAT indirection
    return calc_stkvar_struc_offset(/* forwarded args */);
}

