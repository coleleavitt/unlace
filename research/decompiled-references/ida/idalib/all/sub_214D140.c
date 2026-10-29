// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214D140
// Name:            sub_214D140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214D140 jmp     sub_214CE70
//
// Resolved target: sub_214CE70
// Target address:  0x214CE70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_214D140(/* see target signature */)
{
    // Tail-call to sub_214CE70 via direct jump indirection
    return sub_214CE70(/* forwarded args */);
}

