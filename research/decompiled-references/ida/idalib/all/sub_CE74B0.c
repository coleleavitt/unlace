// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCE74B0
// Name:            sub_CE74B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCE74B0 jmp     sub_CE7170
//
// Resolved target: sub_CE7170
// Target address:  0xCE7170
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_CE74B0(/* see target signature */)
{
    // Tail-call to sub_CE7170 via direct jump indirection
    return sub_CE7170(/* forwarded args */);
}

