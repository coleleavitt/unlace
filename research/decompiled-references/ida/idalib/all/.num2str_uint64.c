// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B20
// Name:            .num2str_uint64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B20 jmp     cs:off_2C7A578
//
// Resolved target: num2str_uint64
// Target address:  0x83A280
// GOT/IAT slot:    0x2C7A578
// Slot symbol:     off_2C7A578
// Target type:     __int64 __fastcall(void *s)
// ============================================================

/* see target sig */ .num2str_uint64(/* see target signature */)
{
    // Tail-call to num2str_uint64 via GOT/IAT indirection
    return num2str_uint64(/* forwarded args */);
}

