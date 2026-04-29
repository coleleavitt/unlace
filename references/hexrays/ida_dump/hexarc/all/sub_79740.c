// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x79740
// Name:            sub_79740
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x79740 jmp     sub_79340
//
// Resolved target: sub_79340
// Target address:  0x79340
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_79740(/* see target signature */)
{
    // Tail-call to sub_79340 via direct jump indirection
    return sub_79340(/* forwarded args */);
}

