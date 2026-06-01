// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF6A5F0
// Name:            sub_F6A5F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF6A5F0 jmp     sub_F6A440
//
// Resolved target: sub_F6A440
// Target address:  0xF6A440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_F6A5F0(/* see target signature */)
{
    // Tail-call to sub_F6A440 via direct jump indirection
    return sub_F6A440(/* forwarded args */);
}

