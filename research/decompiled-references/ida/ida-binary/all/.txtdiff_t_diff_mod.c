// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114530
// Name:            .txtdiff_t_diff_mod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114530 jmp     cs:txtdiff_t_diff_mod_ptr
//
// Resolved target: txtdiff_t_diff_mod
// Target address:  0x8D52A8
// GOT/IAT slot:    0x8A0F38
// Slot symbol:     txtdiff_t_diff_mod_ptr
// Target type:     <no type info>
// ============================================================

void .txtdiff_t_diff_mod(/* see target signature */)
{
    // Tail-call to txtdiff_t_diff_mod via GOT/IAT indirection
    return txtdiff_t_diff_mod(/* forwarded args */);
}

