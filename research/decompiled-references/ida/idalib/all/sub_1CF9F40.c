// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1CF9F40
// Name:            sub_1CF9F40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1CF9F40 jmp     sub_1CF9DC0
//
// Resolved target: sub_1CF9DC0
// Target address:  0x1CF9DC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1CF9F40(/* see target signature */)
{
    // Tail-call to sub_1CF9DC0 via direct jump indirection
    return sub_1CF9DC0(/* forwarded args */);
}

