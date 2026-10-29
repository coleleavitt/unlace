// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC910
// Name:            .get_manual_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC910 jmp     cs:off_2C7BC70
//
// Resolved target: get_manual_insn
// Target address:  0x59CDF0
// GOT/IAT slot:    0x2C7BC70
// Slot symbol:     off_2C7BC70
// Target type:     <no type info>
// ============================================================

void .get_manual_insn(/* see target signature */)
{
    // Tail-call to get_manual_insn via GOT/IAT indirection
    return get_manual_insn(/* forwarded args */);
}

