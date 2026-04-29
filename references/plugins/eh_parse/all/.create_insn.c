// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61C0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61C0 jmp     cs:off_2F0C8
//
// Resolved target: create_insn
// Target address:  0x2F738
// GOT/IAT slot:    0x2F0C8
// Slot symbol:     off_2F0C8
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

