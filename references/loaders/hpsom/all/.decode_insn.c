// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_50C0
//
// Resolved target: decode_insn
// Target address:  0x5260
// GOT/IAT slot:    0x50C0
// Slot symbol:     off_50C0
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

