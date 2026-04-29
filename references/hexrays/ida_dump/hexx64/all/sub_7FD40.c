// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7FD40
// Name:            sub_7FD40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7FD40 jmp     sub_7F940
//
// Resolved target: sub_7F940
// Target address:  0x7F940
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7FD40(/* see target signature */)
{
    // Tail-call to sub_7F940 via direct jump indirection
    return sub_7F940(/* forwarded args */);
}

