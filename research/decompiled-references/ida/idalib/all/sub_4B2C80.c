// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4B2C80
// Name:            sub_4B2C80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4B2C80 jmp     sub_4B29C0
//
// Resolved target: sub_4B29C0
// Target address:  0x4B29C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_4B2C80(/* see target signature */)
{
    // Tail-call to sub_4B29C0 via direct jump indirection
    return sub_4B29C0(/* forwarded args */);
}

