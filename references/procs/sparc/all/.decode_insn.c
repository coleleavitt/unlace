// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7510
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7510 jmp     cs:off_19270
//
// Resolved target: decode_insn
// Target address:  0x197A0
// GOT/IAT slot:    0x19270
// Slot symbol:     off_19270
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

