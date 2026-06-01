// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD160
// Name:            .set_manual_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD160 jmp     cs:off_2C7C098
//
// Resolved target: set_manual_insn
// Target address:  0x59CE50
// GOT/IAT slot:    0x2C7C098
// Slot symbol:     off_2C7C098
// Target type:     <no type info>
// ============================================================

void .set_manual_insn(/* see target signature */)
{
    // Tail-call to set_manual_insn via GOT/IAT indirection
    return set_manual_insn(/* forwarded args */);
}

