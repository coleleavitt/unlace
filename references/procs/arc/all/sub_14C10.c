// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x14C10
// Name:            sub_14C10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x14C10 jmp     sub_14830
//
// Resolved target: sub_14830
// Target address:  0x14830
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_14C10(/* see target signature */)
{
    // Tail-call to sub_14830 via direct jump indirection
    return sub_14830(/* forwarded args */);
}

