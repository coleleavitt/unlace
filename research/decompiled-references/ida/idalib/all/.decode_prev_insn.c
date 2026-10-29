// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACF0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACF0 jmp     cs:off_2C7AE60
//
// Resolved target: decode_prev_insn
// Target address:  0x57AA20
// GOT/IAT slot:    0x2C7AE60
// Slot symbol:     off_2C7AE60
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

