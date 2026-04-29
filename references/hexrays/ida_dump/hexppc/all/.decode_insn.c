// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5C0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5C0 jmp     cs:off_4DAAC8
//
// Resolved target: decode_insn
// Target address:  0x4DD4D0
// GOT/IAT slot:    0x4DAAC8
// Slot symbol:     off_4DAAC8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

