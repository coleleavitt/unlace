// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xD770
// Name:            sub_D770
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xD770 jmp     sub_D340
//
// Resolved target: sub_D340
// Target address:  0xD340
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_D770(/* see target signature */)
{
    // Tail-call to sub_D340 via direct jump indirection
    return sub_D340(/* forwarded args */);
}

