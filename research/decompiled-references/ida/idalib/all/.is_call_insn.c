// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACED0
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACED0 jmp     cs:off_2C7BF50
//
// Resolved target: is_call_insn
// Target address:  0x59CEF0
// GOT/IAT slot:    0x2C7BF50
// Slot symbol:     off_2C7BF50
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

