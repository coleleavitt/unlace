// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77D370
// Name:            sub_77D370
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x77D370 jmp     sub_77CF20
//
// Resolved target: sub_77CF20
// Target address:  0x77CF20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64)
// ============================================================

/* see target sig */ sub_77D370(/* see target signature */)
{
    // Tail-call to sub_77CF20 via direct jump indirection
    return sub_77CF20(/* forwarded args */);
}

