// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7C9DF0
// Name:            vcred_reg_set_site
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7C9DF0 jmp     vcred_reg_set_site_0
//
// Resolved target: vcred_reg_set_site_0
// Target address:  0x7C9D30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ vcred_reg_set_site(/* see target signature */)
{
    // Tail-call to vcred_reg_set_site_0 via direct jump indirection
    return vcred_reg_set_site_0(/* forwarded args */);
}

