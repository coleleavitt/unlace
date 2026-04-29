// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x255100
// Name:            sub_255100
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x255100 jmp     sub_255080
//
// Resolved target: sub_255080
// Target address:  0x255080
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_255100(/* see target signature */)
{
    // Tail-call to sub_255080 via direct jump indirection
    return sub_255080(/* forwarded args */);
}

