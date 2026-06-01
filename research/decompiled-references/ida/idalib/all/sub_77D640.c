// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77D640
// Name:            sub_77D640
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x77D640 jmp     sub_77D380
//
// Resolved target: sub_77D380
// Target address:  0x77D380
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64)
// ============================================================

/* see target sig */ sub_77D640(/* see target signature */)
{
    // Tail-call to sub_77D380 via direct jump indirection
    return sub_77D380(/* forwarded args */);
}

