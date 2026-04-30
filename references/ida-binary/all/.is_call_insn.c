// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A800
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A800 jmp     cs:is_call_insn_ptr
//
// Resolved target: is_call_insn
// Target address:  0x8D9140
// GOT/IAT slot:    0x8A40A0
// Slot symbol:     is_call_insn_ptr
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

