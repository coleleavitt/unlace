// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x976880
// Name:            sub_976880
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x976880 jmp     sub_974F10
//
// Resolved target: sub_974F10
// Target address:  0x974F10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __m128i *__fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_976880(/* see target signature */)
{
    // Tail-call to sub_974F10 via direct jump indirection
    return sub_974F10(/* forwarded args */);
}

