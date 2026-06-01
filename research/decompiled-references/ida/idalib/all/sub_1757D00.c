// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1757D00
// Name:            sub_1757D00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1757D00 jmp     sub_1757BE0
//
// Resolved target: sub_1757BE0
// Target address:  0x1757BE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_1757D00(/* see target signature */)
{
    // Tail-call to sub_1757BE0 via direct jump indirection
    return sub_1757BE0(/* forwarded args */);
}

