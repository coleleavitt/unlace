// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21515D0
// Name:            sub_21515D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x21515D0 jmp     sub_2151110
//
// Resolved target: sub_2151110
// Target address:  0x2151110
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_21515D0(/* see target signature */)
{
    // Tail-call to sub_2151110 via direct jump indirection
    return sub_2151110(/* forwarded args */);
}

