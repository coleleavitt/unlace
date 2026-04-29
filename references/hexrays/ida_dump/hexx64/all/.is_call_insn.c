// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE30
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE30 jmp     cs:off_4EDF00
//
// Resolved target: is_call_insn
// Target address:  0x4F2250
// GOT/IAT slot:    0x4EDF00
// Slot symbol:     off_4EDF00
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

