// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8960
// Name:            sub_8960
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x8960 jmp     sub_119D0
//
// Resolved target: sub_119D0
// Target address:  0x119D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_8960(/* see target signature */)
{
    // Tail-call to sub_119D0 via direct jump indirection
    return sub_119D0(/* forwarded args */);
}

