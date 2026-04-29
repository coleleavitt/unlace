// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7240
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7240 jmp     cs:off_1D108
//
// Resolved target: decode_prev_insn
// Target address:  0x1D438
// GOT/IAT slot:    0x1D108
// Slot symbol:     off_1D108
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

