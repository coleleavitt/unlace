// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7CF650
// Name:            sub_7CF650
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7CF650 jmp     sub_7CF5E0
//
// Resolved target: sub_7CF5E0
// Target address:  0x7CF5E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int)
// ============================================================

/* see target sig */ sub_7CF650(/* see target signature */)
{
    // Tail-call to sub_7CF5E0 via direct jump indirection
    return sub_7CF5E0(/* forwarded args */);
}

