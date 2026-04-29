// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7300
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7300 jmp     cs:off_1D168
//
// Resolved target: getinf_flag
// Target address:  0x1D4A0
// GOT/IAT slot:    0x1D168
// Slot symbol:     off_1D168
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

