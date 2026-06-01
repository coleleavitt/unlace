// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112630
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112630 jmp     cs:is_ret_insn_ptr
//
// Resolved target: is_ret_insn
// Target address:  0x8D3EE0
// GOT/IAT slot:    0x89FFB8
// Slot symbol:     is_ret_insn_ptr
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

