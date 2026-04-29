// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7F780
// Name:            sub_7F780
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7F780 jmp     sub_7F380
//
// Resolved target: sub_7F380
// Target address:  0x7F380
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7F780(/* see target signature */)
{
    // Tail-call to sub_7F380 via direct jump indirection
    return sub_7F380(/* forwarded args */);
}

