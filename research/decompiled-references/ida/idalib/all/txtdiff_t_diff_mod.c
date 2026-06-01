// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x402E90
// Name:            txtdiff_t_diff_mod
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x402E90 jmp     txtdiff_t_diff_mod_0
//
// Resolved target: txtdiff_t_diff_mod_0
// Target address:  0x402640
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ txtdiff_t_diff_mod(/* see target signature */)
{
    // Tail-call to txtdiff_t_diff_mod_0 via direct jump indirection
    return txtdiff_t_diff_mod_0(/* forwarded args */);
}

