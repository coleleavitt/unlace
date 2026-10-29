// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F7EA0
// Name:            sub_2F7EA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2F7EA0 jmp     sub_2F79A0
//
// Resolved target: sub_2F79A0
// Target address:  0x2F79A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_2F7EA0(/* see target signature */)
{
    // Tail-call to sub_2F79A0 via direct jump indirection
    return sub_2F79A0(/* forwarded args */);
}

