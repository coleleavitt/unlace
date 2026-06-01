// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4FCE10
// Name:            reg_finder_may_modify_stkvar
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4FCE10 jmp     reg_finder_may_modify_stkvar_0
//
// Resolved target: reg_finder_may_modify_stkvar_0
// Target address:  0x4FCAA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, int, __int64)
// ============================================================

/* see target sig */ reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar_0 via direct jump indirection
    return reg_finder_may_modify_stkvar_0(/* forwarded args */);
}

