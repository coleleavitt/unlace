// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6610
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6610 jmp     cs:off_1D2F0
//
// Resolved target: is_call_insn
// Target address:  0x1D7F8
// GOT/IAT slot:    0x1D2F0
// Slot symbol:     off_1D2F0
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

