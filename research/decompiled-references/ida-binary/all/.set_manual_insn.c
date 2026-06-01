// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ABB0
// Name:            .set_manual_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ABB0 jmp     cs:set_manual_insn_ptr
//
// Resolved target: set_manual_insn
// Target address:  0x8D9390
// GOT/IAT slot:    0x8A4278
// Slot symbol:     set_manual_insn_ptr
// Target type:     <no type info>
// ============================================================

void .set_manual_insn(/* see target signature */)
{
    // Tail-call to set_manual_insn via GOT/IAT indirection
    return set_manual_insn(/* forwarded args */);
}

