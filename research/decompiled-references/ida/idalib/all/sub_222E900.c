// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x222E900
// Name:            sub_222E900
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x222E900 jmp     sub_2254910
//
// Resolved target: sub_2254910
// Target address:  0x2254910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_222E900(/* see target signature */)
{
    // Tail-call to sub_2254910 via direct jump indirection
    return sub_2254910(/* forwarded args */);
}

