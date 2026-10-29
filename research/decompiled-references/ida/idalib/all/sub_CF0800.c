// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCF0800
// Name:            sub_CF0800
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCF0800 jmp     sub_A4F8A0
//
// Resolved target: sub_A4F8A0
// Target address:  0xA4F8A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_CF0800(/* see target signature */)
{
    // Tail-call to sub_A4F8A0 via direct jump indirection
    return sub_A4F8A0(/* forwarded args */);
}

