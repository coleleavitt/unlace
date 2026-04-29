// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6490
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6490 jmp     cs:off_1D230
//
// Resolved target: decode_insn
// Target address:  0x1D720
// GOT/IAT slot:    0x1D230
// Slot symbol:     off_1D230
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

