// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37BB70
// Name:            sub_37BB70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37BB70 jmp     sub_37B980
//
// Resolved target: sub_37B980
// Target address:  0x37B980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_37BB70(/* see target signature */)
{
    // Tail-call to sub_37B980 via direct jump indirection
    return sub_37B980(/* forwarded args */);
}

