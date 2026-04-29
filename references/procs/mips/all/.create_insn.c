// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19260
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19260 jmp     cs:off_75118
//
// Resolved target: create_insn
// Target address:  0x75968
// GOT/IAT slot:    0x75118
// Slot symbol:     off_75118
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

