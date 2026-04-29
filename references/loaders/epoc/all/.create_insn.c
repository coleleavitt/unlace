// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3110
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3110 jmp     cs:off_13070
//
// Resolved target: create_insn
// Target address:  0x13758
// GOT/IAT slot:    0x13070
// Slot symbol:     off_13070
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

