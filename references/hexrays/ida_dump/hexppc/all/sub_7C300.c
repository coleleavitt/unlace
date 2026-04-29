// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7C300
// Name:            sub_7C300
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7C300 jmp     sub_7BF00
//
// Resolved target: sub_7BF00
// Target address:  0x7BF00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7C300(/* see target signature */)
{
    // Tail-call to sub_7BF00 via direct jump indirection
    return sub_7BF00(/* forwarded args */);
}

