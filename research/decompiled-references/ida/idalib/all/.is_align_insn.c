// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE20
// Name:            .is_align_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE20 jmp     cs:off_2C7BEF8
//
// Resolved target: is_align_insn
// Target address:  0x3A30C0
// GOT/IAT slot:    0x2C7BEF8
// Slot symbol:     off_2C7BEF8
// Target type:     <no type info>
// ============================================================

void .is_align_insn(/* see target signature */)
{
    // Tail-call to is_align_insn via GOT/IAT indirection
    return is_align_insn(/* forwarded args */);
}

