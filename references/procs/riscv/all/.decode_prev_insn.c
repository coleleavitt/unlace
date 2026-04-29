// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA570
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA570 jmp     cs:off_352A0
//
// Resolved target: decode_prev_insn
// Target address:  0x358F0
// GOT/IAT slot:    0x352A0
// Slot symbol:     off_352A0
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

