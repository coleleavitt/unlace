// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7B7E80
// Name:            sub_7B7E80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7B7E80 jmp     sub_7B7900
//
// Resolved target: sub_7B7900
// Target address:  0x7B7900
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, unsigned __int64, unsigned __int64, __int64, int)
// ============================================================

/* see target sig */ sub_7B7E80(/* see target signature */)
{
    // Tail-call to sub_7B7900 via direct jump indirection
    return sub_7B7900(/* forwarded args */);
}

