// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F58B0
// Name:            sub_2F58B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2F58B0 jmp     sub_2F4910
//
// Resolved target: sub_2F4910
// Target address:  0x2F4910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_2F58B0(/* see target signature */)
{
    // Tail-call to sub_2F4910 via direct jump indirection
    return sub_2F4910(/* forwarded args */);
}

