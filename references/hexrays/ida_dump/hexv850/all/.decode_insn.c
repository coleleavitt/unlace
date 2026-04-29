// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5D0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5D0 jmp     cs:off_4C0AD0
//
// Resolved target: decode_insn
// Target address:  0x4C3AD0
// GOT/IAT slot:    0x4C0AD0
// Slot symbol:     off_4C0AD0
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

