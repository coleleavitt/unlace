// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C6820
// Name:            sub_3C6820
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C6820 jmp     sub_3C66C0
//
// Resolved target: sub_3C66C0
// Target address:  0x3C66C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3C6820(/* see target signature */)
{
    // Tail-call to sub_3C66C0 via direct jump indirection
    return sub_3C66C0(/* forwarded args */);
}

