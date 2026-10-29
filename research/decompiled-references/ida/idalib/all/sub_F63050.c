// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF63050
// Name:            sub_F63050
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF63050 jmp     sub_F62E70
//
// Resolved target: sub_F62E70
// Target address:  0xF62E70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_F63050(/* see target signature */)
{
    // Tail-call to sub_F62E70 via direct jump indirection
    return sub_F62E70(/* forwarded args */);
}

