// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xDC10
// Name:            sub_DC10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xDC10 jmp     sub_D410
//
// Resolved target: sub_D410
// Target address:  0xD410
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_DC10(/* see target signature */)
{
    // Tail-call to sub_D410 via direct jump indirection
    return sub_D410(/* forwarded args */);
}

