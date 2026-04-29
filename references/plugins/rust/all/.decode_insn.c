// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_A108
//
// Resolved target: decode_insn
// Target address:  0xB3D8
// GOT/IAT slot:    0xA108
// Slot symbol:     off_A108
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

