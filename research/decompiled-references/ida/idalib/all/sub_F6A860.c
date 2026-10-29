// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF6A860
// Name:            sub_F6A860
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF6A860 jmp     sub_F6A6D0
//
// Resolved target: sub_F6A6D0
// Target address:  0xF6A6D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_F6A860(/* see target signature */)
{
    // Tail-call to sub_F6A6D0 via direct jump indirection
    return sub_F6A6D0(/* forwarded args */);
}

