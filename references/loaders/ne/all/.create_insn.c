// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_B060
//
// Resolved target: create_insn
// Target address:  0xB2F8
// GOT/IAT slot:    0xB060
// Slot symbol:     off_B060
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

