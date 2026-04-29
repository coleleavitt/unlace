// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31240
// Name:            sub_31240
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x31240 jmp     sub_31040
//
// Resolved target: sub_31040
// Target address:  0x31040
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_31240(/* see target signature */)
{
    // Tail-call to sub_31040 via direct jump indirection
    return sub_31040(/* forwarded args */);
}

