// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214E2F0
// Name:            sub_214E2F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214E2F0 jmp     sub_214DCE0
//
// Resolved target: sub_214DCE0
// Target address:  0x214DCE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, _QWORD *, __int64, __int64)
// ============================================================

/* see target sig */ sub_214E2F0(/* see target signature */)
{
    // Tail-call to sub_214DCE0 via direct jump indirection
    return sub_214DCE0(/* forwarded args */);
}

