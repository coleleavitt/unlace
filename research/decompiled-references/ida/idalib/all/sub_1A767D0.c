// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A767D0
// Name:            sub_1A767D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1A767D0 jmp     sub_168B6B0
//
// Resolved target: sub_168B6B0
// Target address:  0x168B6B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(_QWORD *, __int64)
// ============================================================

/* see target sig */ sub_1A767D0(/* see target signature */)
{
    // Tail-call to sub_168B6B0 via direct jump indirection
    return sub_168B6B0(/* forwarded args */);
}

