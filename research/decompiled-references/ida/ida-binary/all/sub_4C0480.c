// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4C0480
// Name:            message_box_request_t__::vfunc_0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4C0480 jmp     sub_4BF8B0
//
// Resolved target: sub_4BF8B0
// Target address:  0x4BF8B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(const __m128i *, __m128, __m128, __m128, __m128, double, double, __m128, __m128)
// ============================================================

/* see target sig */ message_box_request_t__::vfunc_0(/* see target signature */)
{
    // Tail-call to sub_4BF8B0 via direct jump indirection
    return sub_4BF8B0(/* forwarded args */);
}

