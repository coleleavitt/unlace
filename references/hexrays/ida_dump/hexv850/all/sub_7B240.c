// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7B240
// Name:            sub_7B240
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7B240 jmp     sub_7AE40
//
// Resolved target: sub_7AE40
// Target address:  0x7AE40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7B240(/* see target signature */)
{
    // Tail-call to sub_7AE40 via direct jump indirection
    return sub_7AE40(/* forwarded args */);
}

