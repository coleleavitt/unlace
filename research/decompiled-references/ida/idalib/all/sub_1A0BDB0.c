// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A0BDB0
// Name:            sub_1A0BDB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1A0BDB0 jmp     sub_15A1600
//
// Resolved target: sub_15A1600
// Target address:  0x15A1600
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_1A0BDB0(/* see target signature */)
{
    // Tail-call to sub_15A1600 via direct jump indirection
    return sub_15A1600(/* forwarded args */);
}

