// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203CB0
// Name:            sub_203CB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x203CB0 jmp     sub_203A80
//
// Resolved target: sub_203A80
// Target address:  0x203A80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_203CB0(/* see target signature */)
{
    // Tail-call to sub_203A80 via direct jump indirection
    return sub_203A80(/* forwarded args */);
}

