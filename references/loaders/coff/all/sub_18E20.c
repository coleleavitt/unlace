// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x18E20
// Name:            sub_18E20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x18E20 jmp     sub_18660
//
// Resolved target: sub_18660
// Target address:  0x18660
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64, __int64, unsigned __int64, double, double)
// ============================================================

/* see target sig */ sub_18E20(/* see target signature */)
{
    // Tail-call to sub_18660 via direct jump indirection
    return sub_18660(/* forwarded args */);
}

