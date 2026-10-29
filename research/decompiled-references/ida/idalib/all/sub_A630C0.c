// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA630C0
// Name:            sub_A630C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xA630C0 jmp     sub_EE3BF0
//
// Resolved target: sub_EE3BF0
// Target address:  0xEE3BF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ sub_A630C0(/* see target signature */)
{
    // Tail-call to sub_EE3BF0 via direct jump indirection
    return sub_EE3BF0(/* forwarded args */);
}

