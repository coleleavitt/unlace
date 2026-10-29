// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117190
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117190 jmp     cs:decode_prev_insn_ptr
//
// Resolved target: decode_prev_insn
// Target address:  0x8D6ED8
// GOT/IAT slot:    0x8A2568
// Slot symbol:     decode_prev_insn_ptr
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

