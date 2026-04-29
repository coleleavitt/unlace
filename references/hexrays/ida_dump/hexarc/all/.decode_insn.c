// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5B0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5B0 jmp     cs:off_4B9AC0
//
// Resolved target: decode_insn
// Target address:  0x4BC4C8
// GOT/IAT slot:    0x4B9AC0
// Slot symbol:     off_4B9AC0
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

