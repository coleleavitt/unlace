// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x18650
// Name:            sub_18650
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x18650 jmp     sub_17E80
//
// Resolved target: sub_17E80
// Target address:  0x17E80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, unsigned int *, unsigned __int64, double, double)
// ============================================================

/* see target sig */ sub_18650(/* see target signature */)
{
    // Tail-call to sub_17E80 via direct jump indirection
    return sub_17E80(/* forwarded args */);
}

