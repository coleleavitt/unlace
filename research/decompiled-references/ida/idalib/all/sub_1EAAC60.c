// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EAAC60
// Name:            sub_1EAAC60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EAAC60 jmp     sub_1EA91E0
//
// Resolved target: sub_1EA91E0
// Target address:  0x1EA91E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(char **)
// ============================================================

/* see target sig */ sub_1EAAC60(/* see target signature */)
{
    // Tail-call to sub_1EA91E0 via direct jump indirection
    return sub_1EA91E0(/* forwarded args */);
}

