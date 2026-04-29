// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207F0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207F0 jmp     cs:off_953E0
//
// Resolved target: decode_prev_insn
// Target address:  0x95E18
// GOT/IAT slot:    0x953E0
// Slot symbol:     off_953E0
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

