// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDF0
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDF0 jmp     cs:off_4EDEE0
//
// Resolved target: is_ret_insn
// Target address:  0x4F2230
// GOT/IAT slot:    0x4EDEE0
// Slot symbol:     off_4EDEE0
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

