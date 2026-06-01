// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2236020
// Name:            sub_2236020
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2236020 jmp     sub_2235E40
//
// Resolved target: sub_2235E40
// Target address:  0x2235E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int *, unsigned __int64)
// ============================================================

/* see target sig */ sub_2236020(/* see target signature */)
{
    // Tail-call to sub_2235E40 via direct jump indirection
    return sub_2235E40(/* forwarded args */);
}

