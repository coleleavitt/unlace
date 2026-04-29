// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C690
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C690 jmp     cs:off_4EDB30
//
// Resolved target: decode_insn
// Target address:  0x4F1E60
// GOT/IAT slot:    0x4EDB30
// Slot symbol:     off_4EDB30
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

