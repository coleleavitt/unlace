// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x908720
// Name:            sub_908720
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x908720 jmp     sub_906400
//
// Resolved target: sub_906400
// Target address:  0x906400
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int64 *, unsigned __int64, __int64, __int64, __int64 *, char)
// ============================================================

/* see target sig */ sub_908720(/* see target signature */)
{
    // Tail-call to sub_906400 via direct jump indirection
    return sub_906400(/* forwarded args */);
}

