// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7B8E10
// Name:            sub_7B8E10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7B8E10 jmp     sub_7B8440
//
// Resolved target: sub_7B8440
// Target address:  0x7B8440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, unsigned __int64, unsigned __int64, __int64, __int16)
// ============================================================

/* see target sig */ sub_7B8E10(/* see target signature */)
{
    // Tail-call to sub_7B8440 via direct jump indirection
    return sub_7B8440(/* forwarded args */);
}

