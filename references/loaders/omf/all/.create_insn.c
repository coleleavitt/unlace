// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_14090
//
// Resolved target: create_insn
// Target address:  0x14678
// GOT/IAT slot:    0x14090
// Slot symbol:     off_14090
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

