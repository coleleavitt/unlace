// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xBA50
// Name:            sub_BA50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xBA50 jmp     sub_B100
//
// Resolved target: sub_B100
// Target address:  0xB100
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_BA50(/* see target signature */)
{
    // Tail-call to sub_B100 via direct jump indirection
    return sub_B100(/* forwarded args */);
}

