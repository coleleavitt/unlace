// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7420
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7420 jmp     cs:off_1D1F8
//
// Resolved target: get_byte
// Target address:  0x1D540
// GOT/IAT slot:    0x1D1F8
// Slot symbol:     off_1D1F8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

