// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9970
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9970 jmp     cs:off_2C7A4A0
//
// Resolved target: decode_insn
// Target address:  0x5736D0
// GOT/IAT slot:    0x2C7A4A0
// Slot symbol:     off_2C7A4A0
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

