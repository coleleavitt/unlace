// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8AC0
// Name:            .num2str_uint128
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8AC0 jmp     cs:off_2C79D48
//
// Resolved target: num2str_uint128
// Target address:  0x83A5C0
// GOT/IAT slot:    0x2C79D48
// Slot symbol:     off_2C79D48
// Target type:     __int64 __fastcall(void *s)
// ============================================================

/* see target sig */ .num2str_uint128(/* see target signature */)
{
    // Tail-call to num2str_uint128 via GOT/IAT indirection
    return num2str_uint128(/* forwarded args */);
}

