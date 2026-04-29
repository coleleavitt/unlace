// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8510
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8510 jmp     cs:off_2A270
//
// Resolved target: decode_insn
// Target address:  0x2A7E0
// GOT/IAT slot:    0x2A270
// Slot symbol:     off_2A270
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

