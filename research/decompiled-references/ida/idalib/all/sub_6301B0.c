// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6301B0
// Name:            sub_6301B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x6301B0 jmp     sub_62A530
//
// Resolved target: sub_62A530
// Target address:  0x62A530
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     char __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_6301B0(/* see target signature */)
{
    // Tail-call to sub_62A530 via direct jump indirection
    return sub_62A530(/* forwarded args */);
}

