// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9070
// Name:            .ltype_info_t__fill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9070 jmp     cs:off_2C7A020
//
// Resolved target: ltype_info_t__fill
// Target address:  0x43CE40
// GOT/IAT slot:    0x2C7A020
// Slot symbol:     off_2C7A020
// Target type:     __int64 __fastcall(float, int, __int64, __int64)
// ============================================================

/* see target sig */ .ltype_info_t__fill(/* see target signature */)
{
    // Tail-call to ltype_info_t__fill via GOT/IAT indirection
    return ltype_info_t__fill(/* forwarded args */);
}

