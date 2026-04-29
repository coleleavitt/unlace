// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D1F0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D1F0 jmp     cs:off_B30E0
//
// Resolved target: create_insn
// Target address:  0xB3868
// GOT/IAT slot:    0xB30E0
// Slot symbol:     off_B30E0
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

