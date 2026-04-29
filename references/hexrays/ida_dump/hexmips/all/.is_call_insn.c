// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD10
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD10 jmp     cs:off_4CDE70
//
// Resolved target: is_call_insn
// Target address:  0x4D08C0
// GOT/IAT slot:    0x4CDE70
// Slot symbol:     off_4CDE70
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

