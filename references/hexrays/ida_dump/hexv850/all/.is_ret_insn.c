// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCE0
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCE0 jmp     cs:off_4C0E58
//
// Resolved target: is_ret_insn
// Target address:  0x4C3E80
// GOT/IAT slot:    0x4C0E58
// Slot symbol:     off_4C0E58
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

