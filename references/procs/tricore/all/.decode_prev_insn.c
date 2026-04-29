// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6450
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6450 jmp     cs:off_24210
//
// Resolved target: decode_prev_insn
// Target address:  0x25FE0
// GOT/IAT slot:    0x24210
// Slot symbol:     off_24210
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

