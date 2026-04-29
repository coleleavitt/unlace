// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x256840
// Name:            sub_256840
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x256840 jmp     sub_2567C0
//
// Resolved target: sub_2567C0
// Target address:  0x2567C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_256840(/* see target signature */)
{
    // Tail-call to sub_2567C0 via direct jump indirection
    return sub_2567C0(/* forwarded args */);
}

