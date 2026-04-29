// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7B940
// Name:            sub_7B940
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7B940 jmp     sub_7B540
//
// Resolved target: sub_7B540
// Target address:  0x7B540
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7B940(/* see target signature */)
{
    // Tail-call to sub_7B540 via direct jump indirection
    return sub_7B540(/* forwarded args */);
}

