// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13B2310
// Name:            sub_13B2310
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x13B2310 jmp     sub_13AF5A0
//
// Resolved target: sub_13AF5A0
// Target address:  0x13AF5A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(unsigned __int64, __int64, __int64 *, int, unsigned int *, __int64, unsigned int *, __int64)
// ============================================================

/* see target sig */ sub_13B2310(/* see target signature */)
{
    // Tail-call to sub_13AF5A0 via direct jump indirection
    return sub_13AF5A0(/* forwarded args */);
}

