// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x433770
// Name:            sub_433770
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x433770 jmp     sub_541EF0
//
// Resolved target: sub_541EF0
// Target address:  0x541EF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_433770(/* see target signature */)
{
    // Tail-call to sub_541EF0 via direct jump indirection
    return sub_541EF0(/* forwarded args */);
}

