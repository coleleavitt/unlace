// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13F80
// Name:            sub_13F80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x13F80 jmp     sub_13E70
//
// Resolved target: sub_13E70
// Target address:  0x13E70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_13F80(/* see target signature */)
{
    // Tail-call to sub_13E70 via direct jump indirection
    return sub_13E70(/* forwarded args */);
}

