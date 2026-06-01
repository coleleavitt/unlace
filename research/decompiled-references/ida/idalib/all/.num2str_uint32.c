// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B00
// Name:            .num2str_uint32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B00 jmp     cs:off_2C79568
//
// Resolved target: num2str_uint32
// Target address:  0x83A040
// GOT/IAT slot:    0x2C79568
// Slot symbol:     off_2C79568
// Target type:     __int64 __fastcall(void *s)
// ============================================================

/* see target sig */ .num2str_uint32(/* see target signature */)
{
    // Tail-call to num2str_uint32 via GOT/IAT indirection
    return num2str_uint32(/* forwarded args */);
}

