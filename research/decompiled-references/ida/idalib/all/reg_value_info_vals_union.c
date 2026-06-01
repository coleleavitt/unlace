// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4F68B0
// Name:            reg_value_info_vals_union
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4F68B0 jmp     reg_value_info_vals_union_0
//
// Resolved target: reg_value_info_vals_union_0
// Target address:  0x4F5F20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(const __m128i **, __int64)
// ============================================================

/* see target sig */ reg_value_info_vals_union(/* see target signature */)
{
    // Tail-call to reg_value_info_vals_union_0 via direct jump indirection
    return reg_value_info_vals_union_0(/* forwarded args */);
}

