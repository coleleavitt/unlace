// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F99E0
// Name:            sub_11F99E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x11F99E0 jmp     sub_11F96A0
//
// Resolved target: sub_11F96A0
// Target address:  0x11F96A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_11F99E0(/* see target signature */)
{
    // Tail-call to sub_11F96A0 via direct jump indirection
    return sub_11F96A0(/* forwarded args */);
}

