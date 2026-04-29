// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6B0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6B0 jmp     cs:off_35340
//
// Resolved target: decode_insn
// Target address:  0x35990
// GOT/IAT slot:    0x35340
// Slot symbol:     off_35340
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

