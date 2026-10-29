// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6BB720
// Name:            sub_6BB720
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x6BB720 jmp     sub_6B9E00
//
// Resolved target: sub_6B9E00
// Target address:  0x6B9E00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, void *, __int64, __int64)
// ============================================================

/* see target sig */ sub_6BB720(/* see target signature */)
{
    // Tail-call to sub_6B9E00 via direct jump indirection
    return sub_6B9E00(/* forwarded args */);
}

