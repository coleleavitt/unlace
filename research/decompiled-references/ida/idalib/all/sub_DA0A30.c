// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xDA0A30
// Name:            sub_DA0A30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xDA0A30 jmp     sub_E232A0
//
// Resolved target: sub_E232A0
// Target address:  0xE232A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_DA0A30(/* see target signature */)
{
    // Tail-call to sub_E232A0 via direct jump indirection
    return sub_E232A0(/* forwarded args */);
}

