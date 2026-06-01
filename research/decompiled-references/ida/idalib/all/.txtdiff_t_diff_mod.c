// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A92F0
// Name:            .txtdiff_t_diff_mod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A92F0 jmp     cs:off_2C7A160
//
// Resolved target: txtdiff_t_diff_mod
// Target address:  0x402E90
// GOT/IAT slot:    0x2C7A160
// Slot symbol:     off_2C7A160
// Target type:     <no type info>
// ============================================================

void .txtdiff_t_diff_mod(/* see target signature */)
{
    // Tail-call to txtdiff_t_diff_mod via GOT/IAT indirection
    return txtdiff_t_diff_mod(/* forwarded args */);
}

