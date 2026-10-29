// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xB8E070
// Name:            sub_B8E070
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xB8E070 jmp     sub_B8D220
//
// Resolved target: sub_B8D220
// Target address:  0xB8D220
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int64)
// ============================================================

/* see target sig */ sub_B8E070(/* see target signature */)
{
    // Tail-call to sub_B8D220 via direct jump indirection
    return sub_B8D220(/* forwarded args */);
}

