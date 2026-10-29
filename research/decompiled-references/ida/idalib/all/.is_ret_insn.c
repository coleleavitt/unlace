// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E30
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E30 jmp     cs:off_2C79700
//
// Resolved target: is_ret_insn
// Target address:  0x4CCA50
// GOT/IAT slot:    0x2C79700
// Slot symbol:     off_2C79700
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

