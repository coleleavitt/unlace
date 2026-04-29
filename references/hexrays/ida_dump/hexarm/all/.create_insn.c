// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D610
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D610 jmp     cs:off_4E92F0
//
// Resolved target: create_insn
// Target address:  0x4EBCE0
// GOT/IAT slot:    0x4E92F0
// Slot symbol:     off_4E92F0
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

