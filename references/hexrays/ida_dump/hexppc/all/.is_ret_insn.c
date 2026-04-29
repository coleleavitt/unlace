// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCD0
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCD0 jmp     cs:off_4DAE50
//
// Resolved target: is_ret_insn
// Target address:  0x4DD880
// GOT/IAT slot:    0x4DAE50
// Slot symbol:     off_4DAE50
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

