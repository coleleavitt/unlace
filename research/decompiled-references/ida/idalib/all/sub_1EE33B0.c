// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EE33B0
// Name:            sub_1EE33B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EE33B0 jmp     sub_1EE3360
//
// Resolved target: sub_1EE3360
// Target address:  0x1EE3360
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int)
// ============================================================

/* see target sig */ sub_1EE33B0(/* see target signature */)
{
    // Tail-call to sub_1EE3360 via direct jump indirection
    return sub_1EE3360(/* forwarded args */);
}

