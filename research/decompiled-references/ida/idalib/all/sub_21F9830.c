// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F9830
// Name:            sub_21F9830
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x21F9830 jmp     sub_21F9170
//
// Resolved target: sub_21F9170
// Target address:  0x21F9170
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_21F9830(/* see target signature */)
{
    // Tail-call to sub_21F9170 via direct jump indirection
    return sub_21F9170(/* forwarded args */);
}

