// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54A0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54A0 jmp     cs:off_15238
//
// Resolved target: decode_insn
// Target address:  0x162C8
// GOT/IAT slot:    0x15238
// Slot symbol:     off_15238
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

