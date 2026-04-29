// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A600
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A600 jmp     cs:off_4C02E8
//
// Resolved target: create_insn
// Target address:  0x4C32B0
// GOT/IAT slot:    0x4C02E8
// Slot symbol:     off_4C02E8
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

