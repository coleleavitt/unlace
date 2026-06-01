// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB50
// Name:            .is_manual_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB50 jmp     cs:off_2C7BD90
//
// Resolved target: is_manual_insn
// Target address:  0x59CDD0
// GOT/IAT slot:    0x2C7BD90
// Slot symbol:     off_2C7BD90
// Target type:     <no type info>
// ============================================================

void .is_manual_insn(/* see target signature */)
{
    // Tail-call to is_manual_insn via GOT/IAT indirection
    return is_manual_insn(/* forwarded args */);
}

