// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED40
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED40 jmp     cs:off_4E9E88
//
// Resolved target: is_call_insn
// Target address:  0x4EC8D8
// GOT/IAT slot:    0x4E9E88
// Slot symbol:     off_4E9E88
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

