// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6500
// Name:            .decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6500 jmp     cs:off_24268
//
// Resolved target: decode_preceding_insn
// Target address:  0x26038
// GOT/IAT slot:    0x24268
// Slot symbol:     off_24268
// Target type:     <no type info>
// ============================================================

void .decode_preceding_insn(/* see target signature */)
{
    // Tail-call to decode_preceding_insn via GOT/IAT indirection
    return decode_preceding_insn(/* forwarded args */);
}

