// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54B0
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54B0 jmp     cs:off_1A240
//
// Resolved target: is_call_insn
// Target address:  0x1A5E0
// GOT/IAT slot:    0x1A240
// Slot symbol:     off_1A240
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

