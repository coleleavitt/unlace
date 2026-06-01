// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140E0
// Name:            sub_3140E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3140E0 jmp     sub_313F40
//
// Resolved target: sub_313F40
// Target address:  0x313F40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3140E0(/* see target signature */)
{
    // Tail-call to sub_313F40 via direct jump indirection
    return sub_313F40(/* forwarded args */);
}

