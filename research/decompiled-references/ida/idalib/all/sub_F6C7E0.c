// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF6C7E0
// Name:            sub_F6C7E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF6C7E0 jmp     sub_F6B390
//
// Resolved target: sub_F6B390
// Target address:  0xF6B390
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_F6C7E0(/* see target signature */)
{
    // Tail-call to sub_F6B390 via direct jump indirection
    return sub_F6B390(/* forwarded args */);
}

