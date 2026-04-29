// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85E0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85E0 jmp     cs:off_2A2D8
//
// Resolved target: decode_insn
// Target address:  0x2BCE8
// GOT/IAT slot:    0x2A2D8
// Slot symbol:     off_2A2D8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

