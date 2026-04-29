// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x208530
// Name:            sub_208530
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x208530 jmp     sub_208300
//
// Resolved target: sub_208300
// Target address:  0x208300
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_208530(/* see target signature */)
{
    // Tail-call to sub_208300 via direct jump indirection
    return sub_208300(/* forwarded args */);
}

