// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E08E0
// Name:            sub_3E08E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E08E0 jmp     sub_3E0580
//
// Resolved target: sub_3E0580
// Target address:  0x3E0580
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3E08E0(/* see target signature */)
{
    // Tail-call to sub_3E0580 via direct jump indirection
    return sub_3E0580(/* forwarded args */);
}

