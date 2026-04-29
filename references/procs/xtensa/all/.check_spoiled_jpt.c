// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7060
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7060 jmp     cs:off_1D018
//
// Resolved target: check_spoiled_jpt
// Target address:  0x1D348
// GOT/IAT slot:    0x1D018
// Slot symbol:     off_1D018
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

