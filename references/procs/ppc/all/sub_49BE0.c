// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49BE0
// Name:            sub_49BE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x49BE0 jmp     sub_49860
//
// Resolved target: sub_49860
// Target address:  0x49860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_49BE0(/* see target signature */)
{
    // Tail-call to sub_49860 via direct jump indirection
    return sub_49860(/* forwarded args */);
}

