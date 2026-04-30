// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x317B70
// Name:            sub_317B70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x317B70 jmp     sub_317A00
//
// Resolved target: sub_317A00
// Target address:  0x317A00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_317B70(/* see target signature */)
{
    // Tail-call to sub_317A00 via direct jump indirection
    return sub_317A00(/* forwarded args */);
}

