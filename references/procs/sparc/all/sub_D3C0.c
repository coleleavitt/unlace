// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xD3C0
// Name:            sub_D3C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xD3C0 jmp     sub_D280
//
// Resolved target: sub_D280
// Target address:  0xD280
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_D3C0(/* see target signature */)
{
    // Tail-call to sub_D280 via direct jump indirection
    return sub_D280(/* forwarded args */);
}

