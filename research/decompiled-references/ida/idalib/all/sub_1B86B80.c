// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1B86B80
// Name:            sub_1B86B80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1B86B80 jmp     sub_1B86A00
//
// Resolved target: sub_1B86A00
// Target address:  0x1B86A00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1B86B80(/* see target signature */)
{
    // Tail-call to sub_1B86A00 via direct jump indirection
    return sub_1B86A00(/* forwarded args */);
}

