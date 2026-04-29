// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72B0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72B0 jmp     cs:off_1D140
//
// Resolved target: decode_insn
// Target address:  0x1D470
// GOT/IAT slot:    0x1D140
// Slot symbol:     off_1D140
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

