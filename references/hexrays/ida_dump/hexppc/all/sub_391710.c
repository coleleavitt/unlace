// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x391710
// Name:            sub_391710
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x391710 jmp     sub_390760
//
// Resolved target: sub_390760
// Target address:  0x390760
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_391710(/* see target signature */)
{
    // Tail-call to sub_390760 via direct jump indirection
    return sub_390760(/* forwarded args */);
}

