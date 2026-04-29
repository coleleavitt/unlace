// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6580
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6580 jmp     cs:off_242A8
//
// Resolved target: decode_insn
// Target address:  0x26078
// GOT/IAT slot:    0x242A8
// Slot symbol:     off_242A8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

