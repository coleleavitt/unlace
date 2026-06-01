// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCE7160
// Name:            sub_CE7160
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCE7160 jmp     sub_CE6E20
//
// Resolved target: sub_CE6E20
// Target address:  0xCE6E20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_CE7160(/* see target signature */)
{
    // Tail-call to sub_CE6E20 via direct jump indirection
    return sub_CE6E20(/* forwarded args */);
}

