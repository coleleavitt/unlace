// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x255C40
// Name:            sub_255C40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x255C40 jmp     sub_255BC0
//
// Resolved target: sub_255BC0
// Target address:  0x255BC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_255C40(/* see target signature */)
{
    // Tail-call to sub_255BC0 via direct jump indirection
    return sub_255BC0(/* forwarded args */);
}

