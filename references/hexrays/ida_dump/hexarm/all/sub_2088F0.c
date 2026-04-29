// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2088F0
// Name:            sub_2088F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2088F0 jmp     sub_2086C0
//
// Resolved target: sub_2086C0
// Target address:  0x2086C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_2088F0(/* see target signature */)
{
    // Tail-call to sub_2086C0 via direct jump indirection
    return sub_2086C0(/* forwarded args */);
}

