// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_8068
//
// Resolved target: create_insn
// Target address:  0x82C8
// GOT/IAT slot:    0x8068
// Slot symbol:     off_8068
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

