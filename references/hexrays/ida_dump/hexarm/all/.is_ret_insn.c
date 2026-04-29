// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED10
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED10 jmp     cs:off_4E9E70
//
// Resolved target: is_ret_insn
// Target address:  0x4EC8C0
// GOT/IAT slot:    0x4E9E70
// Slot symbol:     off_4E9E70
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

