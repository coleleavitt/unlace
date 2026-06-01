// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E50
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E50 jmp     cs:decode_insn_ptr
//
// Resolved target: decode_insn
// Target address:  0x8D58D8
// GOT/IAT slot:    0x8A13C8
// Slot symbol:     decode_insn_ptr
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

