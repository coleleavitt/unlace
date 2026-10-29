// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A2730
// Name:            sub_7A2730
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7A2730 jmp     sub_7A2240
//
// Resolved target: sub_7A2240
// Target address:  0x7A2240
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, const char *)
// ============================================================

/* see target sig */ sub_7A2730(/* see target signature */)
{
    // Tail-call to sub_7A2240 via direct jump indirection
    return sub_7A2240(/* forwarded args */);
}

