// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C6490
// Name:            sub_3C6490
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C6490 jmp     sub_3C6340
//
// Resolved target: sub_3C6340
// Target address:  0x3C6340
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3C6490(/* see target signature */)
{
    // Tail-call to sub_3C6340 via direct jump indirection
    return sub_3C6340(/* forwarded args */);
}

