// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3FD3A0
// Name:            sub_3FD3A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3FD3A0 jmp     sub_3FD2A0
//
// Resolved target: sub_3FD2A0
// Target address:  0x3FD2A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3FD3A0(/* see target signature */)
{
    // Tail-call to sub_3FD2A0 via direct jump indirection
    return sub_3FD2A0(/* forwarded args */);
}

