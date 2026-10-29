// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCE6E10
// Name:            sub_CE6E10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCE6E10 jmp     sub_CE6760
//
// Resolved target: sub_CE6760
// Target address:  0xCE6760
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 **, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_CE6E10(/* see target signature */)
{
    // Tail-call to sub_CE6760 via direct jump indirection
    return sub_CE6760(/* forwarded args */);
}

