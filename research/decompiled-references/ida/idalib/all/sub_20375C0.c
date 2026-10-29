// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20375C0
// Name:            sub_20375C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x20375C0 jmp     sub_2037330
//
// Resolved target: sub_2037330
// Target address:  0x2037330
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, _BYTE *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_20375C0(/* see target signature */)
{
    // Tail-call to sub_2037330 via direct jump indirection
    return sub_2037330(/* forwarded args */);
}

