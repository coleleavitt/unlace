// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3CFE50
// Name:            sub_3CFE50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3CFE50 jmp     sub_3CFDA0
//
// Resolved target: sub_3CFDA0
// Target address:  0x3CFDA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3CFE50(/* see target signature */)
{
    // Tail-call to sub_3CFDA0 via direct jump indirection
    return sub_3CFDA0(/* forwarded args */);
}

